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

#include <JellyfinQt/dto/queueitem.h>

namespace Jellyfin {
namespace DTO {

QueueItem::QueueItem() {}
QueueItem::QueueItem (
		QString jellyfinId 
		) :
	m_jellyfinId(jellyfinId) { }



QueueItem::QueueItem(const QueueItem &other) :

	m_jellyfinId(other.m_jellyfinId),
	m_playlistItemId(other.m_playlistItemId){}


void QueueItem::replaceData(QueueItem &other) {
	m_jellyfinId = other.m_jellyfinId;
	m_playlistItemId = other.m_playlistItemId;
}

QueueItem QueueItem::fromJson(QJsonObject source) {
	QueueItem instance;
	instance.setFromJson(source);
	return instance;
}


void QueueItem::setFromJson(QJsonObject source) {
	m_jellyfinId = Jellyfin::Support::fromJsonValue<QString>(source["Id"]);
	m_playlistItemId = Jellyfin::Support::fromJsonValue<QString>(source["PlaylistItemId"]);

}
	
QJsonObject QueueItem::toJson() const {
	QJsonObject result;
	
	result["Id"] = Jellyfin::Support::toJsonValue<QString>(m_jellyfinId);		
	
	if (!(m_playlistItemId.isNull())) {
		result["PlaylistItemId"] = Jellyfin::Support::toJsonValue<QString>(m_playlistItemId);
	}
		
	return result;
}

QString QueueItem::jellyfinId() const { return m_jellyfinId; }

void QueueItem::setJellyfinId(QString newJellyfinId) {
	m_jellyfinId = newJellyfinId;
}

QString QueueItem::playlistItemId() const { return m_playlistItemId; }

void QueueItem::setPlaylistItemId(QString newPlaylistItemId) {
	m_playlistItemId = newPlaylistItemId;
}
bool QueueItem::playlistItemIdNull() const {
	return m_playlistItemId.isNull();
}

void QueueItem::setPlaylistItemIdNull() {
	m_playlistItemId.clear();

}

} // NS DTO

namespace Support {

using QueueItem = Jellyfin::DTO::QueueItem;

template <>
QueueItem fromJsonValue(const QJsonValue &source, convertType<QueueItem>) {
	if (!source.isObject()) throw ParseException("Expected JSON Object");
	return QueueItem::fromJson(source.toObject());
}

template<>
QJsonValue toJsonValue(const QueueItem &source, convertType<QueueItem>) {
	return source.toJson();
}

} // NS DTO
} // NS Jellyfin
