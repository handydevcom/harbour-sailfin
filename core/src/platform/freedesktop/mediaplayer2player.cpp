/*
 * This file was generated by qdbusxml2cpp version 0.8
 * Command line was: qdbusxml2cpp org.mpris.MediaPlayer2.Player.xml -a ../include/JellyfinQt/platform/freedesktop/mediaplayer2player.h:../src/platform/freedesktop/mediaplayer2player.cpp
 *
 * qdbusxml2cpp is Copyright (C) 2020 The Qt Company Ltd.
 *
 * This is an auto-generated file.
 * Do not edit! All changes made to it will be lost.
 */

#include "JellyfinQt/platform/freedesktop/mediaplayer2player.h"
#include "JellyfinQt/viewmodel/item.h"
#include "JellyfinQt/viewmodel/platformmediacontrol.h"
#include "JellyfinQt/viewmodel/playbackmanager.h"
#include <QtCore/QMetaObject>
#include <QtCore/QByteArray>
#include <QtCore/QList>
#include <QtCore/QMap>
#include <QtCore/QString>
#include <QtCore/QStringList>
#include <QtCore/QVariant>

namespace Jellyfin {
namespace Platform {
namespace FreeDesktop {

/*
 * Implementation of adaptor class PlayerAdaptor
 */

PlayerAdaptor::PlayerAdaptor(ViewModel::PlatformMediaControl *parent)
    : QDBusAbstractAdaptor(parent),
      m_mediaControl(parent) {
    // constructor
    //setAutoRelaySignals(true);
    onPlaybackManagerChanged(m_mediaControl->playbackManager());
    connect(m_mediaControl, &ViewModel::PlatformMediaControl::playbackManagerChanged, this, &PlayerAdaptor::onPlaybackManagerChanged);
    /*if (m_mediaControl != nullptr && m_mediaControl->playbackManager() != nullptr) {
    }*/
}

PlayerAdaptor::~PlayerAdaptor() {
    // destructor
}

bool PlayerAdaptor::canControl() const
{
    // get the value of property CanControl
    return true;
}

bool PlayerAdaptor::canGoNext() const
{
    // get the value of property CanGoNext
    return canPlay() && m_mediaControl->playbackManager()->hasNext();
}

bool PlayerAdaptor::canGoPrevious() const
{
    // get the value of property CanGoPrevious
    return canPlay() && m_mediaControl->playbackManager()->hasPrevious();
}

bool PlayerAdaptor::canPause() const
{
    // get the value of property CanPause
    return canPlay();
}

bool PlayerAdaptor::canPlay() const
{
    // get the value of property CanPlay
    return m_mediaControl->playbackManager()->queue()->rowCount(QModelIndex()) > 0;
}

bool PlayerAdaptor::canSeek() const
{
    // get the value of property CanSeek
    return m_mediaControl->playbackManager()->seekable();
}

QString PlayerAdaptor::loopStatus() const
{
    // get the value of property LoopStatus
    return "None";
}

void PlayerAdaptor::setLoopStatus(const QString &value)
{
    // set the value of property LoopStatus
    parent()->setProperty("LoopStatus", QVariant::fromValue(value));
}

double PlayerAdaptor::maximumRate() const
{
    // get the value of property MaximumRate
    return 1.0;
}

QVariantMap PlayerAdaptor::metadata() const
{
    // get the value of property Metadata
    QVariantMap map;
    if (m_mediaControl->playbackManager() == nullptr || m_mediaControl->playbackManager()->dataItem().isNull()) {
        return map;
    }
    ViewModel::PlaybackManager *plybkMgr = m_mediaControl->playbackManager();

    QSharedPointer<Model::Item> item = plybkMgr->dataItem();
    if (!item.isNull()) {
        map[QStringLiteral("mpris:trackid")] = QVariant::fromValue<QDBusObjectPath>(QDBusObjectPath(QStringLiteral("/nl/netsoj/chris/jellyfinqt/item/").append(item->jellyfinId())));
        if (item->runTimeTicks().has_value()) {
            map[QStringLiteral("mpris:length")] = item->runTimeTicks().value() / 10;
        }
        map[QStringLiteral("xesam:title")] = item->name();
        if (!item->albumPrimaryImageTagNull()) {
            map[QStringLiteral("mpris:artUrl")] = QStringLiteral("%1/Items/%2/Images/Primary?tag=%3").arg(plybkMgr->apiClient()->baseUrl(),
                    item->jellyfinId(), item->albumPrimaryImageTag());
        }

        QStringList albumArtists;
        QList<NameGuidPair> tmp = item->albumArtists();
        for (auto it = tmp.cbegin(); it != tmp.cend(); it++) {
            albumArtists << it->name();
        }
        map[QStringLiteral("xesam:albumArtist")] = albumArtists;
        map[QStringLiteral("xesam:album")] = item->album();
        map[QStringLiteral("xesam:artist")] = item->artists();
        if (item->parentIndexNumber().has_value()) {
            map[QStringLiteral("xesam:discNumber")] = item->parentIndexNumber().value();
        }
        if (item->indexNumber().has_value()) {
            map[QStringLiteral("xesam:trackNumber")] = item->indexNumber().value();
        }
        map[QStringLiteral("xesam:contentCreated")] = item->dateCreated();
        map[QStringLiteral("xesam:genre")] = item->genres();
        map[QStringLiteral("xesam:lastUsed")] = item->userData()->lastPlayedDate();

        QJsonObject providers = item->providerIds();
        if (providers.contains(QStringLiteral("MusicBrainzTrack"))) {
            map[QStringLiteral("xesam:musicBrainzTrackID")] = providers[QStringLiteral("MusicBrainzTrack")].toString();
        }
        if (providers.contains(QStringLiteral("MusicBrainzAlbum"))) {
            map[QStringLiteral("xesam:musicBrainzAlbumID")] = providers[QStringLiteral("MusicBrainzAlbum")].toString();
        }
        if (providers.contains(QStringLiteral("MusicBrainzArtist"))) {
            map[QStringLiteral("xesam:musicBrainzArtistID")] = providers[QStringLiteral("MusicBrainzArtist")].toString();
        }
        if (providers.contains(QStringLiteral("MusicBrainzAlbumArtist"))) {
            map[QStringLiteral("xesam:musicBrainzAlbumArtistID")] = providers[QStringLiteral("MusicBrainzAlbumArtist")].toString();
        }
    }
    return map;
}

double PlayerAdaptor::minimumRate() const
{
    // get the value of property MinimumRate
    return 1.0;
}

QString PlayerAdaptor::playbackStatus() const
{
    // get the value of property PlaybackStatus
    if (m_mediaControl == nullptr || m_mediaControl->playbackManager() == nullptr) {
        return "Stopped";
    }
    switch(m_mediaControl->playbackManager()->playbackState()) {
    case QMediaPlayer::StoppedState:
        return "Stopped";
    case QMediaPlayer::PlayingState:
        return "Playing";
    case QMediaPlayer::PausedState:
        return "Paused";
    default:
        return "Stopped";
    }
}

qlonglong PlayerAdaptor::position() const
{
    // get the value of property Position
    return m_mediaControl->playbackManager()->position() * 1000;
}

double PlayerAdaptor::rate() const
{
    // get the value of property Rate
    return 1.0;
}

void PlayerAdaptor::setRate(double value)
{
    // set the value of property Rate
    parent()->setProperty("Rate", QVariant::fromValue(value));
}

bool PlayerAdaptor::shuffle() const
{
    // get the value of property Shuffle
    return false;
}

void PlayerAdaptor::setShuffle(bool value)
{
    // set the value of property Shuffle
    parent()->setProperty("Shuffle", QVariant::fromValue(value));
}

double PlayerAdaptor::volume() const
{
    // get the value of property Volume
    return qvariant_cast< double >(parent()->property("Volume"));
}

void PlayerAdaptor::setVolume(double value)
{
    // set the value of property Volume
    parent()->setProperty("Volume", QVariant::fromValue(value));
}

void PlayerAdaptor::Next()
{
    // handle method call org.mpris.MediaPlayer2.Player.Next
    m_mediaControl->playbackManager()->next();
}

void PlayerAdaptor::OpenUri(const QString &Uri)
{
    // handle method call org.mpris.MediaPlayer2.Player.OpenUri
    QMetaObject::invokeMethod(parent(), "OpenUri", Q_ARG(QString, Uri));
}

void PlayerAdaptor::Pause()
{
    // handle method call org.mpris.MediaPlayer2.Player.Pause
    m_mediaControl->playbackManager()->pause();
}

void PlayerAdaptor::Play()
{
    // handle method call org.mpris.MediaPlayer2.Player.Play
    m_mediaControl->playbackManager()->play();
}

void PlayerAdaptor::PlayPause()
{
    // handle method call org.mpris.MediaPlayer2.Player.PlayPause
    if (m_mediaControl->playbackManager()->playbackState() == QMediaPlayer::PlayingState) {
        m_mediaControl->playbackManager()->pause();
    } else {
        m_mediaControl->playbackManager()->play();
    }
}

void PlayerAdaptor::Previous()
{
    // handle method call org.mpris.MediaPlayer2.Player.Previous
    m_mediaControl->playbackManager()->previous();
}

void PlayerAdaptor::Seek(qlonglong Offset)
{
    // handle method call org.mpris.MediaPlayer2.Player.Seek
    m_mediaControl->playbackManager()->seek(m_mediaControl->playbackManager()->position() + Offset / 1000);
}

void PlayerAdaptor::SetPosition(const QDBusObjectPath &TrackId, qlonglong Position)
{
    // handle method call org.mpris.MediaPlayer2.Player.SetPosition
    if (TrackId.path() == QStringLiteral("/nl/netsoj/chris/jellyfinqt/item/").append(m_mediaControl->playbackManager()->dataItem()->jellyfinId())) {
        m_mediaControl->playbackManager()->seek(Position / 1000);
    }
}

void PlayerAdaptor::Stop()
{
    // handle method call org.mpris.MediaPlayer2.Player.Stop
    QMetaObject::invokeMethod(parent(), "Stop");
}
void PlayerAdaptor::notifyPropertiesChanged(QStringList properties) {
    QDBusMessage signal = QDBusMessage::createSignal("/org/mpris/MediaPlayer2", "org.freedesktop.DBus.Properties", "PropertiesChanged");
    signal << "org.mpris.MediaPlayer2.Player"; // 1st argument: interface name
    QVariantMap changedProperties;
    for (auto it = properties.cbegin(); it != properties.cend(); it++) {
        changedProperties[*it] = property(it->toLocal8Bit().data());
    }
    signal << changedProperties; // 2nd argument: changed properties
    signal << QStringList(); // 3th argument: invalidated properties
    QDBusConnection::sessionBus().send(signal);
}

void PlayerAdaptor::onCurrentItemChanged(ViewModel::Item *item) {
    Q_UNUSED(item)

    QStringList properties;
    properties << "Metadata" << "Position" << "CanPlay" << "CanPause" << "CanGoNext" << "CanGoPrevious";
    notifyPropertiesChanged(properties);
}
void PlayerAdaptor::onPlaybackStateChanged(QMediaPlayer::State state) {
    Q_UNUSED(state)
    QStringList properties;
    properties << "PlaybackStatus" << "Position";
    notifyPropertiesChanged(properties);

}

void PlayerAdaptor::onMediaStatusChanged(QMediaPlayer::MediaStatus status) {
    Q_UNUSED(status)
    QStringList properties;
    properties << "PlaybackStatus" << "Position";
    notifyPropertiesChanged(properties);
}

void PlayerAdaptor::onPositionChanged(qint64 position) {
    Q_UNUSED(position)
    /*QStringList properties;
    properties << "Position";
    notifyPropertiesChanged(properties);*/
}

void PlayerAdaptor::onSeeked(qint64 position) {
    notifyPropertiesChanged(QStringList("Position"));
}

void PlayerAdaptor::onSeekableChanged(bool seekable) {
    QStringList properties;
    properties << "CanSeek";
    notifyPropertiesChanged(properties);
}

void PlayerAdaptor::onPlaybackManagerChanged(ViewModel::PlaybackManager *newPlaybackManager) {
    if (newPlaybackManager != nullptr) {
        connect(newPlaybackManager, &ViewModel::PlaybackManager::itemChanged, this, &PlayerAdaptor::onCurrentItemChanged);
        connect(newPlaybackManager, &ViewModel::PlaybackManager::playbackStateChanged, this, &PlayerAdaptor::onPlaybackStateChanged);
        connect(newPlaybackManager, &ViewModel::PlaybackManager::mediaStatusChanged, this, &PlayerAdaptor::onMediaStatusChanged);
        connect(newPlaybackManager, &ViewModel::PlaybackManager::positionChanged, this, &PlayerAdaptor::onPositionChanged);
        connect(newPlaybackManager, &ViewModel::PlaybackManager::seeked, this, &PlayerAdaptor::onSeeked);
        connect(newPlaybackManager, &ViewModel::PlaybackManager::seekableChanged, this, &PlayerAdaptor::onSeekableChanged);
    }
}

} // NS FreeDesktop
} // NS Platform
} // NS Jellyfin
