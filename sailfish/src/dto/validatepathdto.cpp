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

#include <JellyfinQt/dto/validatepathdto.h>

namespace Jellyfin {
namespace DTO {

ValidatePathDto::ValidatePathDto() {}
ValidatePathDto::ValidatePathDto (
		bool validateWritable 
		) :
	m_validateWritable(validateWritable) { }



ValidatePathDto::ValidatePathDto(const ValidatePathDto &other) :

	m_validateWritable(other.m_validateWritable),
	m_path(other.m_path),
	m_isFile(other.m_isFile){}


void ValidatePathDto::replaceData(ValidatePathDto &other) {
	m_validateWritable = other.m_validateWritable;
	m_path = other.m_path;
	m_isFile = other.m_isFile;
}

ValidatePathDto ValidatePathDto::fromJson(QJsonObject source) {
	ValidatePathDto instance;
	instance.setFromJson(source);
	return instance;
}


void ValidatePathDto::setFromJson(QJsonObject source) {
	m_validateWritable = Jellyfin::Support::fromJsonValue<bool>(source["ValidateWritable"]);
	m_path = Jellyfin::Support::fromJsonValue<QString>(source["Path"]);
	m_isFile = Jellyfin::Support::fromJsonValue<std::optional<bool>>(source["IsFile"]);

}
	
QJsonObject ValidatePathDto::toJson() const {
	QJsonObject result;
	
	result["ValidateWritable"] = Jellyfin::Support::toJsonValue<bool>(m_validateWritable);		
	
	if (!(m_path.isNull())) {
		result["Path"] = Jellyfin::Support::toJsonValue<QString>(m_path);
	}
			
	
	if (!(!m_isFile.has_value())) {
		result["IsFile"] = Jellyfin::Support::toJsonValue<std::optional<bool>>(m_isFile);
	}
		
	return result;
}

bool ValidatePathDto::validateWritable() const { return m_validateWritable; }

void ValidatePathDto::setValidateWritable(bool newValidateWritable) {
	m_validateWritable = newValidateWritable;
}

QString ValidatePathDto::path() const { return m_path; }

void ValidatePathDto::setPath(QString newPath) {
	m_path = newPath;
}
bool ValidatePathDto::pathNull() const {
	return m_path.isNull();
}

void ValidatePathDto::setPathNull() {
	m_path.clear();

}
std::optional<bool> ValidatePathDto::isFile() const { return m_isFile; }

void ValidatePathDto::setIsFile(std::optional<bool> newIsFile) {
	m_isFile = newIsFile;
}
bool ValidatePathDto::isFileNull() const {
	return !m_isFile.has_value();
}

void ValidatePathDto::setIsFileNull() {
	m_isFile = std::nullopt;

}

} // NS DTO

namespace Support {

using ValidatePathDto = Jellyfin::DTO::ValidatePathDto;

template <>
ValidatePathDto fromJsonValue(const QJsonValue &source, convertType<ValidatePathDto>) {
	if (!source.isObject()) throw ParseException("Expected JSON Object");
	return ValidatePathDto::fromJson(source.toObject());
}

template<>
QJsonValue toJsonValue(const ValidatePathDto &source, convertType<ValidatePathDto>) {
	return source.toJson();
}

} // NS DTO
} // NS Jellyfin
