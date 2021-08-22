/*
Sailfin: a Jellyfin client written using Qt
Copyright (C) 2020 Chris Josten

This library is free software; you can redistribute it and/or
modify it under the terms of the GNU Lesser General Public
License as published by the Free Software Foundation; either
version 2.1 of the License, or (at your option) any later version.

This library is distributed in the hope that it will be useful,
but WITHOUT ANY WARRANTY; without even the implied warranty of
MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the GNU
Lesser General Public License for more details.

You should have received a copy of the GNU Lesser General Public
License along with this library; if not, write to the Free Software
Foundation, Inc., 51 Franklin Street, Fifth Floor, Boston, MA  02110-1301  USA
*/

import QtQuick 2.6
import QtMultimedia 5.6
import Sailfish.Silica 1.0

import nl.netsoj.chris.Jellyfin 1.0

import "../components"

PosterCover {
    readonly property var player: appWindow.playbackManager

    // Wanted to display the currently running move on here, but it's hard :/
    /*Rectangle {
        anchors.fill: parent
        color: "black"

        VideoOutput {
            id: coverOutput
            anchors.fill: parent
            source: player
        }

    }*/

    Shim {
        anchors {
            left: parent.left
            bottom: parent.bottom
            right: parent.right
        }
        height: Theme.iconSizeLarge
    }

    CoverActionList {
        CoverAction {
            id: playPause
            iconSource: player.playbackState === MediaPlayer.PlayingState ? "image://theme/icon-cover-pause"
                                                                         : "image://theme/icon-cover-play"
            onTriggered: {
                if (player.playbackState === MediaPlayer.PlayingState) {
                    player.pause()
                } else {
                    player.play()
                }
            }
        }
    }

}
