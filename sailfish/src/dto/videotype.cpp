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

#include <JellyfinQt/dto/videotype.h>

namespace Jellyfin {
namespace DTO {

VideoTypeClass::VideoTypeClass() {}

} // NS DTO

namespace Support {

using VideoType = Jellyfin::DTO::VideoType;

template <>
VideoType fromJsonValue(const QJsonValue &source, convertType<VideoType>) {
	if (!source.isString()) return VideoType::EnumNotSet;

	QString str = source.toString();
	if (str == QStringLiteral("VideoFile")) {
		return VideoType::VideoFile;
	}
	if (str == QStringLiteral("Iso")) {
		return VideoType::Iso;
	}
	if (str == QStringLiteral("Dvd")) {
		return VideoType::Dvd;
	}
	if (str == QStringLiteral("BluRay")) {
		return VideoType::BluRay;
	}
	
	return VideoType::EnumNotSet;
}

template <>
QJsonValue toJsonValue(const VideoType &source, convertType<VideoType>) {
	switch(source) {
	case VideoType::VideoFile:
		return QStringLiteral("VideoFile");
	case VideoType::Iso:
		return QStringLiteral("Iso");
	case VideoType::Dvd:
		return QStringLiteral("Dvd");
	case VideoType::BluRay:
		return QStringLiteral("BluRay");

	case VideoType::EnumNotSet: // Fallthrough
	default:
		return QJsonValue();
	}
}

} // NS DTO
} // NS Jellyfin
