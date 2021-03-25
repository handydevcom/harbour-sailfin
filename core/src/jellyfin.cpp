/*
 * Sailfin: a Jellyfin client written using Qt
 * Copyright (C) 2021 Chris Josten and the Sailfin contributes
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
#include "JellyfinQt/jellyfin.h"
namespace Jellyfin {

void registerTypes(const char *uri) {
    qmlRegisterType<ApiClient>(uri, 1, 0, "ApiClient");
    qmlRegisterType<ServerDiscoveryModel>(uri, 1, 0, "ServerDiscoveryModel");

    qmlRegisterUncreatableType<ViewModel::Item>(uri, 1, 0, "Item", "Acquire one via ItemLoader or exposed properties");
    qmlRegisterType<ViewModel::ItemLoader>(uri, 1, 0, "ItemLoader");

    qmlRegisterType<ViewModel::PlaybackManager>(uri, 1, 0, "PlaybackManager");
    qmlRegisterUncreatableType<DTO::GeneralCommandTypeClass>(uri, 1, 0, "GeneralCommandType", "Is an enum");

    // API models
    Jellyfin::registerModels(uri);
    //Jellyfin::DTO::registerTypes(uri);
    Jellyfin::ViewModel::registerRemoteTypes(uri);
}
}
