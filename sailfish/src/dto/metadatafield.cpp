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

#include <JellyfinQt/dto/metadatafield.h>

namespace Jellyfin {
namespace DTO {

MetadataFieldClass::MetadataFieldClass() {}

} // NS DTO

namespace Support {

using MetadataField = Jellyfin::DTO::MetadataField;

template <>
MetadataField fromJsonValue(const QJsonValue &source, convertType<MetadataField>) {
	if (!source.isString()) return MetadataField::EnumNotSet;

	QString str = source.toString();
	if (str == QStringLiteral("Cast")) {
		return MetadataField::Cast;
	}
	if (str == QStringLiteral("Genres")) {
		return MetadataField::Genres;
	}
	if (str == QStringLiteral("ProductionLocations")) {
		return MetadataField::ProductionLocations;
	}
	if (str == QStringLiteral("Studios")) {
		return MetadataField::Studios;
	}
	if (str == QStringLiteral("Tags")) {
		return MetadataField::Tags;
	}
	if (str == QStringLiteral("Name")) {
		return MetadataField::Name;
	}
	if (str == QStringLiteral("Overview")) {
		return MetadataField::Overview;
	}
	if (str == QStringLiteral("Runtime")) {
		return MetadataField::Runtime;
	}
	if (str == QStringLiteral("OfficialRating")) {
		return MetadataField::OfficialRating;
	}
	
	return MetadataField::EnumNotSet;
}

template <>
QJsonValue toJsonValue(const MetadataField &source, convertType<MetadataField>) {
	switch(source) {
	case MetadataField::Cast:
		return QStringLiteral("Cast");
	case MetadataField::Genres:
		return QStringLiteral("Genres");
	case MetadataField::ProductionLocations:
		return QStringLiteral("ProductionLocations");
	case MetadataField::Studios:
		return QStringLiteral("Studios");
	case MetadataField::Tags:
		return QStringLiteral("Tags");
	case MetadataField::Name:
		return QStringLiteral("Name");
	case MetadataField::Overview:
		return QStringLiteral("Overview");
	case MetadataField::Runtime:
		return QStringLiteral("Runtime");
	case MetadataField::OfficialRating:
		return QStringLiteral("OfficialRating");

	case MetadataField::EnumNotSet: // Fallthrough
	default:
		return QJsonValue();
	}
}

} // NS DTO
} // NS Jellyfin
