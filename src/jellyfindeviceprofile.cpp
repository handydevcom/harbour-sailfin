#include "jellyfindeviceprofile.h"

namespace Jellyfin {

bool DeviceProfile::supportsHls() {
    return true;
}

bool DeviceProfile::canPlayH264() {
    return true;
}

bool DeviceProfile::canPlayAc3() {
    return true;
}

bool DeviceProfile::supportsMp3VideoAudio() {
    qDebug() << "Mp3VideoAudio: " << QMediaPlayer::hasSupport("video/mp4", {"avc1.640029", "mp3"}, QMediaPlayer::StreamPlayback);
    return true;
}

int DeviceProfile::maxStreamingBitrate() {
    return 5000000;
}

QJsonObject DeviceProfile::generateProfile() {
    using JsonPair = QPair<QString, QJsonValue>;
    QJsonObject profile;

    QStringList videoAudioCodecs;
    QStringList mp4VideoCodecs;
    QStringList hlsVideoCodecs;
    QStringList hlsVideoAudioCodecs;

    if (canPlayH264()) {
        mp4VideoCodecs.append("h264");
        hlsVideoCodecs.append("h264");
    }

    if (canPlayAc3()) {
        videoAudioCodecs.append("ac3");
        hlsVideoAudioCodecs.append("ac3");
    }

    if (supportsMp3VideoAudio()) {
        videoAudioCodecs.append("mp3");
        hlsVideoAudioCodecs.append("mp3");
    }

    QJsonArray codecProfiles = {};
    codecProfiles.append(QJsonObject {
                             JsonPair("Codec", "aac"),
                             JsonPair("Conditions", QJsonArray {
                                 QJsonObject {
                                     JsonPair("Property", "IsSecondaryAudio"),
                                     JsonPair("Condition", "Equals"),
                                     JsonPair("Value", false),
                                     JsonPair("IsRequired", false)
                                 }
                             }),
                             JsonPair("Type", "VideoAudio")
                         });
    codecProfiles.append(QJsonObject {
                             JsonPair("Coded", "h264"),
                             JsonPair("Conditions", QJsonArray {
                                 QJsonObject {
                                     JsonPair("Property", "IsAnamorphic"),
                                     JsonPair("Condition", "NotEquals"),
                                     JsonPair("Value", true),
                                     JsonPair("IsRequired", false)
                                 },
                                 QJsonObject {
                                     JsonPair("Property", "VideoProfile"),
                                     JsonPair("Condition", "EqualsAny"),
                                     JsonPair("Value", "baseline|constrained baseline"), //"high|main|baseline|constrained baseline"),
                                     JsonPair("IsRequired", false),
                                 },
                                 QJsonObject {
                                     JsonPair("Property", "VideoLevel"),
                                     JsonPair("Condition", "LessThanEqual"),
                                     JsonPair("Value", 51),
                                     JsonPair("IsRequired", false)
                                 },
                                 QJsonObject {
                                     JsonPair("Property", "IsInterlaced"),
                                     JsonPair("Condition", "NotEquals"),
                                     JsonPair("Value", true),
                                     JsonPair("IsRequired", false)
                                 }
                             }),
                             JsonPair("Type", "Video")
                         });

    QJsonArray transcodingProfiles = {};

    // Hard coded nr 1:
    QJsonObject transcoding1;
    transcoding1["AudioCodec"] = "aac";
    transcoding1["BreakOnNonKeyFrames"] =true;
    transcoding1["Container"] = "ts";
    transcoding1["Context"] = "Streaming";
    transcoding1["MaxAudioChannels"] = 2;
    transcoding1["MinSegments"] = 1;
    transcoding1["Protocol"] = "hls";
    transcoding1["Type"] = "Audio";
    transcodingProfiles.append(transcoding1);

    // Hard code nr 2
    transcodingProfiles.append(QJsonObject({
                                    JsonPair("AudioCodec", "mp3,aac"),
                                    JsonPair("BreakOnNonKeyFrames", true),
                                    JsonPair("Container", "ts"),
                                    JsonPair("Context", "Streaming"),
                                    JsonPair("MaxAudioChannels", 2),
                                    JsonPair("MinSegments", 1),
                                    JsonPair("Protocol", "hls"),
                                    JsonPair("Type", "Video"),
                                    JsonPair("VideoCodec", "h264")
                               }));

    // Fallback
    transcodingProfiles.append(QJsonObject {
                                    JsonPair("Container", "mp4"),
                                    JsonPair("Type", "Video"),
                                    JsonPair("AudioCodec", videoAudioCodecs.join(',')),
                                    JsonPair("VideoCodec", "h264"),
                                    JsonPair("Context", "Static"),
                                    JsonPair("Protocol", "http")
                                });


    if (supportsHls() && !hlsVideoAudioCodecs.isEmpty()) {
        transcodingProfiles.append(QJsonObject {
                                       JsonPair("Container", "ts"),
                                       JsonPair("Type", "Video"),
                                       JsonPair("AudioCodec", hlsVideoAudioCodecs.join(",")),
                                       JsonPair("VideoCodec", hlsVideoCodecs.join(",")),
                                       JsonPair("Context", "Streaming"),
                                       JsonPair("Protocol", "hls"),
                                       JsonPair("MaxAudioChannels", 2),
                                       JsonPair("MinSegments", 1),
                                       JsonPair("BreakOnNonKeyFrames", true)
                                   });
    }

    // Response profiles (or whatever it actually does?)
    QJsonArray responseProfiles = {};
    responseProfiles.append(QJsonObject({
                                JsonPair("Type", "Video"),
                                JsonPair("Container", "m4v"),
                                JsonPair("MimeType", "video/mp4")
                            }));

    // Direct play profiles
    QJsonArray directPlayProfiles;
    directPlayProfiles.append(QJsonObject {
                                  JsonPair("Container", "mp4,m4v"),
                                  JsonPair("Type", "Video"),
                                  JsonPair("VideoCodec", mp4VideoCodecs.join(',')),
                                  JsonPair("AudioCodec", videoAudioCodecs.join(','))
                              });

    profile["CodecProfiles"] = codecProfiles;
    profile["ContainerProfiles"] = QJsonArray();
    profile["DirectPlayProfiles"] = directPlayProfiles;
    profile["ResponseProfiles"] = responseProfiles;
    profile["SubtitleProfiles"] = QJsonArray();
    profile["TranscodingProfiles"] = transcodingProfiles;
    profile["MaxStreamingBitrate"] = maxStreamingBitrate();
    return profile;
}
}
