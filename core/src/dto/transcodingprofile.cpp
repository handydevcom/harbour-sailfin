/*
 * Sailfin: a Jellyfin client written using Qt
 * Copyright (C) 2021 Chris Josten and the Sailfin Contributors.
 *
 * This library is free software; you can redistribute it and/or
 * modify it under the terms of the GNU Lesser General Public
 * License as published by the Free Software Foundation; either
 * version 2.1 of the License, or (at your option) any later version.
 *
 * This library is distributed in the hope that it will be useful,
 * but WITHOUT ANY WARRANTY; without even the implied warranty of
 * MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the GNU
 * Lesser General Public License for more details.
 *
 * You should have received a copy of the GNU Lesser General Public
 * License along with this library; if not, write to the Free Software
 * Foundation, Inc., 51 Franklin Street, Fifth Floor, Boston, MA  02110-1301  USA
 */
/*
 * WARNING: THIS IS AN AUTOMATICALLY GENERATED FILE! PLEASE DO NOT EDIT THIS, AS YOUR EDITS WILL GET
 * OVERWRITTEN AT SOME POINT! 
 *
 * If there is a bug in this file, please fix the code generator used to generate this file found in
 * core/openapigenerator.d. 
 *
 * This file is generated based on Jellyfin's OpenAPI description, "openapi.json". Please update that
 * file with a newer file if needed instead of manually updating the files.
 */

#include <JellyfinQt/dto/transcodingprofile.h>

namespace Jellyfin {
namespace DTO {

TranscodingProfile::TranscodingProfile() {}
TranscodingProfile::TranscodingProfile (
		DlnaProfileType type, 
		bool estimateContentLength, 
		bool enableMpegtsM2TsMode, 
		TranscodeSeekInfo transcodeSeekInfo, 
		bool copyTimestamps, 
		EncodingContext context, 
		bool enableSubtitlesInManifest, 
		qint32 minSegments, 
		qint32 segmentLength, 
		bool breakOnNonKeyFrames 
		) :
	m_type(type),
	m_estimateContentLength(estimateContentLength),
	m_enableMpegtsM2TsMode(enableMpegtsM2TsMode),
	m_transcodeSeekInfo(transcodeSeekInfo),
	m_copyTimestamps(copyTimestamps),
	m_context(context),
	m_enableSubtitlesInManifest(enableSubtitlesInManifest),
	m_minSegments(minSegments),
	m_segmentLength(segmentLength),
	m_breakOnNonKeyFrames(breakOnNonKeyFrames) { }



TranscodingProfile::TranscodingProfile(const TranscodingProfile &other) :

	m_container(other.m_container),
	m_type(other.m_type),
	m_videoCodec(other.m_videoCodec),
	m_audioCodec(other.m_audioCodec),
	m_protocol(other.m_protocol),
	m_estimateContentLength(other.m_estimateContentLength),
	m_enableMpegtsM2TsMode(other.m_enableMpegtsM2TsMode),
	m_transcodeSeekInfo(other.m_transcodeSeekInfo),
	m_copyTimestamps(other.m_copyTimestamps),
	m_context(other.m_context),
	m_enableSubtitlesInManifest(other.m_enableSubtitlesInManifest),
	m_maxAudioChannels(other.m_maxAudioChannels),
	m_minSegments(other.m_minSegments),
	m_segmentLength(other.m_segmentLength),
	m_breakOnNonKeyFrames(other.m_breakOnNonKeyFrames){}


void TranscodingProfile::replaceData(TranscodingProfile &other) {
	m_container = other.m_container;
	m_type = other.m_type;
	m_videoCodec = other.m_videoCodec;
	m_audioCodec = other.m_audioCodec;
	m_protocol = other.m_protocol;
	m_estimateContentLength = other.m_estimateContentLength;
	m_enableMpegtsM2TsMode = other.m_enableMpegtsM2TsMode;
	m_transcodeSeekInfo = other.m_transcodeSeekInfo;
	m_copyTimestamps = other.m_copyTimestamps;
	m_context = other.m_context;
	m_enableSubtitlesInManifest = other.m_enableSubtitlesInManifest;
	m_maxAudioChannels = other.m_maxAudioChannels;
	m_minSegments = other.m_minSegments;
	m_segmentLength = other.m_segmentLength;
	m_breakOnNonKeyFrames = other.m_breakOnNonKeyFrames;
}

TranscodingProfile TranscodingProfile::fromJson(QJsonObject source) {
	TranscodingProfile instance;
	instance.setFromJson(source);
	return instance;
}


void TranscodingProfile::setFromJson(QJsonObject source) {
	m_container = Jellyfin::Support::fromJsonValue<QString>(source["Container"]);
	m_type = Jellyfin::Support::fromJsonValue<DlnaProfileType>(source["Type"]);
	m_videoCodec = Jellyfin::Support::fromJsonValue<QString>(source["VideoCodec"]);
	m_audioCodec = Jellyfin::Support::fromJsonValue<QString>(source["AudioCodec"]);
	m_protocol = Jellyfin::Support::fromJsonValue<QString>(source["Protocol"]);
	m_estimateContentLength = Jellyfin::Support::fromJsonValue<bool>(source["EstimateContentLength"]);
	m_enableMpegtsM2TsMode = Jellyfin::Support::fromJsonValue<bool>(source["EnableMpegtsM2TsMode"]);
	m_transcodeSeekInfo = Jellyfin::Support::fromJsonValue<TranscodeSeekInfo>(source["TranscodeSeekInfo"]);
	m_copyTimestamps = Jellyfin::Support::fromJsonValue<bool>(source["CopyTimestamps"]);
	m_context = Jellyfin::Support::fromJsonValue<EncodingContext>(source["Context"]);
	m_enableSubtitlesInManifest = Jellyfin::Support::fromJsonValue<bool>(source["EnableSubtitlesInManifest"]);
	m_maxAudioChannels = Jellyfin::Support::fromJsonValue<QString>(source["MaxAudioChannels"]);
	m_minSegments = Jellyfin::Support::fromJsonValue<qint32>(source["MinSegments"]);
	m_segmentLength = Jellyfin::Support::fromJsonValue<qint32>(source["SegmentLength"]);
	m_breakOnNonKeyFrames = Jellyfin::Support::fromJsonValue<bool>(source["BreakOnNonKeyFrames"]);

}
	
QJsonObject TranscodingProfile::toJson() const {
	QJsonObject result;
	
	
	if (!(m_container.isNull())) {
		result["Container"] = Jellyfin::Support::toJsonValue<QString>(m_container);
	}
			
	result["Type"] = Jellyfin::Support::toJsonValue<DlnaProfileType>(m_type);		
	
	if (!(m_videoCodec.isNull())) {
		result["VideoCodec"] = Jellyfin::Support::toJsonValue<QString>(m_videoCodec);
	}
			
	
	if (!(m_audioCodec.isNull())) {
		result["AudioCodec"] = Jellyfin::Support::toJsonValue<QString>(m_audioCodec);
	}
			
	
	if (!(m_protocol.isNull())) {
		result["Protocol"] = Jellyfin::Support::toJsonValue<QString>(m_protocol);
	}
			
	result["EstimateContentLength"] = Jellyfin::Support::toJsonValue<bool>(m_estimateContentLength);		
	result["EnableMpegtsM2TsMode"] = Jellyfin::Support::toJsonValue<bool>(m_enableMpegtsM2TsMode);		
	result["TranscodeSeekInfo"] = Jellyfin::Support::toJsonValue<TranscodeSeekInfo>(m_transcodeSeekInfo);		
	result["CopyTimestamps"] = Jellyfin::Support::toJsonValue<bool>(m_copyTimestamps);		
	result["Context"] = Jellyfin::Support::toJsonValue<EncodingContext>(m_context);		
	result["EnableSubtitlesInManifest"] = Jellyfin::Support::toJsonValue<bool>(m_enableSubtitlesInManifest);		
	
	if (!(m_maxAudioChannels.isNull())) {
		result["MaxAudioChannels"] = Jellyfin::Support::toJsonValue<QString>(m_maxAudioChannels);
	}
			
	result["MinSegments"] = Jellyfin::Support::toJsonValue<qint32>(m_minSegments);		
	result["SegmentLength"] = Jellyfin::Support::toJsonValue<qint32>(m_segmentLength);		
	result["BreakOnNonKeyFrames"] = Jellyfin::Support::toJsonValue<bool>(m_breakOnNonKeyFrames);	
	return result;
}

QString TranscodingProfile::container() const { return m_container; }

void TranscodingProfile::setContainer(QString newContainer) {
	m_container = newContainer;
}
bool TranscodingProfile::containerNull() const {
	return m_container.isNull();
}

void TranscodingProfile::setContainerNull() {
	m_container.clear();

}
DlnaProfileType TranscodingProfile::type() const { return m_type; }

void TranscodingProfile::setType(DlnaProfileType newType) {
	m_type = newType;
}

QString TranscodingProfile::videoCodec() const { return m_videoCodec; }

void TranscodingProfile::setVideoCodec(QString newVideoCodec) {
	m_videoCodec = newVideoCodec;
}
bool TranscodingProfile::videoCodecNull() const {
	return m_videoCodec.isNull();
}

void TranscodingProfile::setVideoCodecNull() {
	m_videoCodec.clear();

}
QString TranscodingProfile::audioCodec() const { return m_audioCodec; }

void TranscodingProfile::setAudioCodec(QString newAudioCodec) {
	m_audioCodec = newAudioCodec;
}
bool TranscodingProfile::audioCodecNull() const {
	return m_audioCodec.isNull();
}

void TranscodingProfile::setAudioCodecNull() {
	m_audioCodec.clear();

}
QString TranscodingProfile::protocol() const { return m_protocol; }

void TranscodingProfile::setProtocol(QString newProtocol) {
	m_protocol = newProtocol;
}
bool TranscodingProfile::protocolNull() const {
	return m_protocol.isNull();
}

void TranscodingProfile::setProtocolNull() {
	m_protocol.clear();

}
bool TranscodingProfile::estimateContentLength() const { return m_estimateContentLength; }

void TranscodingProfile::setEstimateContentLength(bool newEstimateContentLength) {
	m_estimateContentLength = newEstimateContentLength;
}

bool TranscodingProfile::enableMpegtsM2TsMode() const { return m_enableMpegtsM2TsMode; }

void TranscodingProfile::setEnableMpegtsM2TsMode(bool newEnableMpegtsM2TsMode) {
	m_enableMpegtsM2TsMode = newEnableMpegtsM2TsMode;
}

TranscodeSeekInfo TranscodingProfile::transcodeSeekInfo() const { return m_transcodeSeekInfo; }

void TranscodingProfile::setTranscodeSeekInfo(TranscodeSeekInfo newTranscodeSeekInfo) {
	m_transcodeSeekInfo = newTranscodeSeekInfo;
}

bool TranscodingProfile::copyTimestamps() const { return m_copyTimestamps; }

void TranscodingProfile::setCopyTimestamps(bool newCopyTimestamps) {
	m_copyTimestamps = newCopyTimestamps;
}

EncodingContext TranscodingProfile::context() const { return m_context; }

void TranscodingProfile::setContext(EncodingContext newContext) {
	m_context = newContext;
}

bool TranscodingProfile::enableSubtitlesInManifest() const { return m_enableSubtitlesInManifest; }

void TranscodingProfile::setEnableSubtitlesInManifest(bool newEnableSubtitlesInManifest) {
	m_enableSubtitlesInManifest = newEnableSubtitlesInManifest;
}

QString TranscodingProfile::maxAudioChannels() const { return m_maxAudioChannels; }

void TranscodingProfile::setMaxAudioChannels(QString newMaxAudioChannels) {
	m_maxAudioChannels = newMaxAudioChannels;
}
bool TranscodingProfile::maxAudioChannelsNull() const {
	return m_maxAudioChannels.isNull();
}

void TranscodingProfile::setMaxAudioChannelsNull() {
	m_maxAudioChannels.clear();

}
qint32 TranscodingProfile::minSegments() const { return m_minSegments; }

void TranscodingProfile::setMinSegments(qint32 newMinSegments) {
	m_minSegments = newMinSegments;
}

qint32 TranscodingProfile::segmentLength() const { return m_segmentLength; }

void TranscodingProfile::setSegmentLength(qint32 newSegmentLength) {
	m_segmentLength = newSegmentLength;
}

bool TranscodingProfile::breakOnNonKeyFrames() const { return m_breakOnNonKeyFrames; }

void TranscodingProfile::setBreakOnNonKeyFrames(bool newBreakOnNonKeyFrames) {
	m_breakOnNonKeyFrames = newBreakOnNonKeyFrames;
}


} // NS DTO

namespace Support {

using TranscodingProfile = Jellyfin::DTO::TranscodingProfile;

template <>
TranscodingProfile fromJsonValue(const QJsonValue &source, convertType<TranscodingProfile>) {
	if (!source.isObject()) throw ParseException("Expected JSON Object");
	return TranscodingProfile::fromJson(source.toObject());
}

template<>
QJsonValue toJsonValue(const TranscodingProfile &source, convertType<TranscodingProfile>) {
	return source.toJson();
}

} // NS DTO
} // NS Jellyfin
