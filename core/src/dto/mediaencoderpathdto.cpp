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

#include <JellyfinQt/dto/mediaencoderpathdto.h>

namespace Jellyfin {
namespace DTO {

MediaEncoderPathDto::MediaEncoderPathDto() {}

MediaEncoderPathDto::MediaEncoderPathDto(const MediaEncoderPathDto &other) :

	m_path(other.m_path),
	m_pathType(other.m_pathType){}


void MediaEncoderPathDto::replaceData(MediaEncoderPathDto &other) {
	m_path = other.m_path;
	m_pathType = other.m_pathType;
}

MediaEncoderPathDto MediaEncoderPathDto::fromJson(QJsonObject source) {
	MediaEncoderPathDto instance;
	instance.setFromJson(source);
	return instance;
}


void MediaEncoderPathDto::setFromJson(QJsonObject source) {
	m_path = Jellyfin::Support::fromJsonValue<QString>(source["Path"]);
	m_pathType = Jellyfin::Support::fromJsonValue<QString>(source["PathType"]);

}
	
QJsonObject MediaEncoderPathDto::toJson() const {
	QJsonObject result;
	
	
	if (!(m_path.isNull())) {
		result["Path"] = Jellyfin::Support::toJsonValue<QString>(m_path);
	}
			
	
	if (!(m_pathType.isNull())) {
		result["PathType"] = Jellyfin::Support::toJsonValue<QString>(m_pathType);
	}
		
	return result;
}

QString MediaEncoderPathDto::path() const { return m_path; }

void MediaEncoderPathDto::setPath(QString newPath) {
	m_path = newPath;
}
bool MediaEncoderPathDto::pathNull() const {
	return m_path.isNull();
}

void MediaEncoderPathDto::setPathNull() {
	m_path.clear();

}
QString MediaEncoderPathDto::pathType() const { return m_pathType; }

void MediaEncoderPathDto::setPathType(QString newPathType) {
	m_pathType = newPathType;
}
bool MediaEncoderPathDto::pathTypeNull() const {
	return m_pathType.isNull();
}

void MediaEncoderPathDto::setPathTypeNull() {
	m_pathType.clear();

}

} // NS DTO

namespace Support {

using MediaEncoderPathDto = Jellyfin::DTO::MediaEncoderPathDto;

template <>
MediaEncoderPathDto fromJsonValue(const QJsonValue &source, convertType<MediaEncoderPathDto>) {
	if (!source.isObject()) throw ParseException("Expected JSON Object");
	return MediaEncoderPathDto::fromJson(source.toObject());
}

template<>
QJsonValue toJsonValue(const MediaEncoderPathDto &source, convertType<MediaEncoderPathDto>) {
	return source.toJson();
}

} // NS DTO
} // NS Jellyfin
