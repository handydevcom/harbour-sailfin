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

#include <JellyfinQt/dto/countryinfo.h>

namespace Jellyfin {
namespace DTO {

CountryInfo::CountryInfo() {}

CountryInfo::CountryInfo(const CountryInfo &other) :

	m_name(other.m_name),
	m_displayName(other.m_displayName),
	m_twoLetterISORegionName(other.m_twoLetterISORegionName),
	m_threeLetterISORegionName(other.m_threeLetterISORegionName){}


void CountryInfo::replaceData(CountryInfo &other) {
	m_name = other.m_name;
	m_displayName = other.m_displayName;
	m_twoLetterISORegionName = other.m_twoLetterISORegionName;
	m_threeLetterISORegionName = other.m_threeLetterISORegionName;
}

CountryInfo CountryInfo::fromJson(QJsonObject source) {
	CountryInfo instance;
	instance.setFromJson(source);
	return instance;
}


void CountryInfo::setFromJson(QJsonObject source) {
	m_name = Jellyfin::Support::fromJsonValue<QString>(source["Name"]);
	m_displayName = Jellyfin::Support::fromJsonValue<QString>(source["DisplayName"]);
	m_twoLetterISORegionName = Jellyfin::Support::fromJsonValue<QString>(source["TwoLetterISORegionName"]);
	m_threeLetterISORegionName = Jellyfin::Support::fromJsonValue<QString>(source["ThreeLetterISORegionName"]);

}
	
QJsonObject CountryInfo::toJson() const {
	QJsonObject result;
	
	
	if (!(m_name.isNull())) {
		result["Name"] = Jellyfin::Support::toJsonValue<QString>(m_name);
	}
			
	
	if (!(m_displayName.isNull())) {
		result["DisplayName"] = Jellyfin::Support::toJsonValue<QString>(m_displayName);
	}
			
	
	if (!(m_twoLetterISORegionName.isNull())) {
		result["TwoLetterISORegionName"] = Jellyfin::Support::toJsonValue<QString>(m_twoLetterISORegionName);
	}
			
	
	if (!(m_threeLetterISORegionName.isNull())) {
		result["ThreeLetterISORegionName"] = Jellyfin::Support::toJsonValue<QString>(m_threeLetterISORegionName);
	}
		
	return result;
}

QString CountryInfo::name() const { return m_name; }

void CountryInfo::setName(QString newName) {
	m_name = newName;
}
bool CountryInfo::nameNull() const {
	return m_name.isNull();
}

void CountryInfo::setNameNull() {
	m_name.clear();

}
QString CountryInfo::displayName() const { return m_displayName; }

void CountryInfo::setDisplayName(QString newDisplayName) {
	m_displayName = newDisplayName;
}
bool CountryInfo::displayNameNull() const {
	return m_displayName.isNull();
}

void CountryInfo::setDisplayNameNull() {
	m_displayName.clear();

}
QString CountryInfo::twoLetterISORegionName() const { return m_twoLetterISORegionName; }

void CountryInfo::setTwoLetterISORegionName(QString newTwoLetterISORegionName) {
	m_twoLetterISORegionName = newTwoLetterISORegionName;
}
bool CountryInfo::twoLetterISORegionNameNull() const {
	return m_twoLetterISORegionName.isNull();
}

void CountryInfo::setTwoLetterISORegionNameNull() {
	m_twoLetterISORegionName.clear();

}
QString CountryInfo::threeLetterISORegionName() const { return m_threeLetterISORegionName; }

void CountryInfo::setThreeLetterISORegionName(QString newThreeLetterISORegionName) {
	m_threeLetterISORegionName = newThreeLetterISORegionName;
}
bool CountryInfo::threeLetterISORegionNameNull() const {
	return m_threeLetterISORegionName.isNull();
}

void CountryInfo::setThreeLetterISORegionNameNull() {
	m_threeLetterISORegionName.clear();

}

} // NS DTO

namespace Support {

using CountryInfo = Jellyfin::DTO::CountryInfo;

template <>
CountryInfo fromJsonValue(const QJsonValue &source, convertType<CountryInfo>) {
	if (!source.isObject()) throw ParseException("Expected JSON Object");
	return CountryInfo::fromJson(source.toObject());
}

template<>
QJsonValue toJsonValue(const CountryInfo &source, convertType<CountryInfo>) {
	return source.toJson();
}

} // NS DTO
} // NS Jellyfin
