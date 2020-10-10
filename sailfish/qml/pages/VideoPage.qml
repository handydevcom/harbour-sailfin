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
import Sailfish.Silica 1.0

import "../components"

/**
 * Page only containing a video player.
 *
 * On larger devices the video player could potentially be embedded somewhere else.
 */

Page {
    id: videoPage
    property string itemId
    property var itemData
    property int audioTrack
    property int subtitleTrack
    property real startTicks: 0 // Why is this a real? Because an integer only goes to 3:44 when the ticks are converted to doubles

    allowedOrientations: Orientation.All
    showNavigationIndicator: videoPlayer.hudVisible

    VideoPlayer {
        id: videoPlayer
        anchors.fill: parent
        itemId: videoPage.itemId
        player: appWindow.mediaPlayer
        title: itemData.name
        audioTrack: videoPage.audioTrack
        subtitleTrack: videoPage.subtitleTrack
        startTicks: videoPage.startTicks

        onLandscapeChanged: {
            console.log("Is landscape: " + landscape)
            //appWindow.orientation = landscape ? Orientation.Landscape : Orientation.Portrait
            videoPage.allowedOrientations = landscape ? Orientation.LandscapeMask : Orientation.PortraitMask
        }
    }

    onStatusChanged: {
        switch(status) {
        case PageStatus.Inactive:
            videoPlayer.stop()
            break;
        case PageStatus.Active:
            appWindow.itemData = videoPage.itemData
            break;
        }
    }
}