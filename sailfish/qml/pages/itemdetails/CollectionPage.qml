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

import nl.netsoj.chris.Jellyfin 1.0 as J

import "../.."
import "../../components"

BaseDetailPage {
    id: pageRoot

    property bool _collectionModelLoaded: false

    J.ItemModel {
        id: collectionModel
        loader: J.UserItemsLoader {
            id: collectionLoader
            apiClient: appWindow.apiClient
            parentId: itemData.jellyfinId
            autoReload: itemData.jellyfinId.length > 0 && (pageRoot.status == PageStatus.Active || _collectionModelLoaded)
            //onParentIdChanged: if (parentId.length > 0) reload()
            sortBy: "SortName"
            onStatusChanged: {
                if (status === J.ModelStatus.Ready) {
                    _collectionModelLoaded = true
                }
            }
        }
    }

    SilicaGridView {
        id: gridView
        anchors.fill: parent
        model: collectionModel
        cellWidth: Constants.libraryDelegateWidth
        cellHeight: Utils.usePortraitCover(itemData.collectionType) ? Constants.libraryDelegatePosterHeight
                                                                    : Constants.libraryDelegateHeight
        visible: itemData.status !== J.ItemLoader.Error

        header: PageHeader {
            title: itemData.name || qsTr("Loading")
        }
        PullDownMenu {
            id: downMenu
            MenuItem {
                //: Menu item for selecting the sort order of a collection
                text: qsTr("Sort by")
                onClicked: pageStack.push(sortPageComponent)
            }
            busy: collectionLoader.status === J.ModelStatus.Loading
        }
        add: Transition {
            id: trans
            SequentialAnimation {

                PropertyAction {
                    property: "opacity"; value: 0 }
                PauseAnimation { duration: trans.ViewTransition.index * 3;}
                NumberAnimation { properties: "opacity"; from: 0; to: 1.0; }
            } // properties: "opacity"; from: 0; to: 1.0; }
        }
        delegate: GridItem {
            RemoteImage {
                id: itemImage
                anchors.fill: parent
                source: Utils.itemModelImageUrl(apiClient.baseUrl, model.jellyfinId, model.imageTags.Primary, "Primary", {"maxWidth": width})
                blurhash: model.imageBlurHashes.Primary[model.imageTags.Primary]
                fallbackColor: Utils.colorFromString(model.name)
                fillMode: Image.PreserveAspectCrop
                clip: true
            }
            Shim {
                anchors {
                    left: parent.left
                    bottom: parent.bottom
                    right: parent.right
                }
                height: itemName.height + Theme.paddingMedium * 2
                visible: itemImage.status !== Image.Null
            }
            Label {
                id: itemName
                anchors {
                    left: parent.left
                    leftMargin: Theme.paddingMedium
                    right: parent.right
                    rightMargin: Theme.paddingMedium
                    bottom: parent.bottom
                    bottomMargin: Theme.paddingSmall
                }
                text: model.name
                truncationMode: TruncationMode.Fade
                horizontalAlignment: Text.AlignLeft
                font.pixelSize: Theme.fontSizeSmall
            }
            onClicked: appWindow.navigateToItem(model.jellyfinId, model.mediaType, model.type, model.isFolder);
        }

        ViewPlaceholder {
            enabled: gridView.count == 0 && !pageRoot._loading && collectionModel.status === J.ModelStatus.Ready
            text: qsTr("Empty collection")
            hintText: qsTr("Add some items to this collection!")
        }

        VerticalScrollDecorator {}
    }

    // The page for selecting a sort order

    Component {
        id: sortPageComponent
        Page {
            id: sortPage

            ListModel {
                id: sortOptions
                ListElement { name: qsTr("Name"); value: "SortName"; }
                ListElement { name: qsTr("Play count"); value: "PlayCount"; }
                ListElement { name: qsTr("Date added"); value: "DateCreated"; }
            }

            SilicaListView {
                anchors.fill: parent
                model: sortOptions
                header: PageHeader {
                    title: qsTr("Sort by")
                }
                delegate: ListItem {
                    Label {
                        anchors {
                            left: parent.left
                            leftMargin: Theme.horizontalPageMargin
                            right: parent.right
                            rightMargin: Theme.horizontalPageMargin
                            verticalCenter: parent.verticalCenter
                        }
                        text: model.name
                    }
                    menu: ContextMenu {
                        MenuItem {
                            //: Sort order
                            text: qsTr("Ascending")
                            onClicked: apply(model.value, "Ascending")
                        }
                        MenuItem {
                            //: Sort order
                            text: qsTr("Descending")
                            onClicked: apply(model.value, "Descending")
                        }
                    }
                    onClicked: openMenu()

                    function apply(field, order) {
                        collectionLoader.sortBy = field;
                        collectionLoader.sortOrder = order;
                        collectionLoader.reload()
                        pageStack.pop()
                    }
                }
            }
        }
    }

}
