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

#include <JellyfinQt/dto/joingrouprequestdto.h>

namespace Jellyfin {
namespace DTO {

JoinGroupRequestDto::JoinGroupRequestDto() {}

JoinGroupRequestDto::JoinGroupRequestDto(const JoinGroupRequestDto &other) :

	m_groupId(other.m_groupId){}


void JoinGroupRequestDto::replaceData(JoinGroupRequestDto &other) {
	m_groupId = other.m_groupId;
}

JoinGroupRequestDto JoinGroupRequestDto::fromJson(QJsonObject source) {
	JoinGroupRequestDto instance;
	instance.setFromJson(source);
	return instance;
}


void JoinGroupRequestDto::setFromJson(QJsonObject source) {
	m_groupId = Jellyfin::Support::fromJsonValue<QString>(source["GroupId"]);

}
	
QJsonObject JoinGroupRequestDto::toJson() const {
	QJsonObject result;
	
	result["GroupId"] = Jellyfin::Support::toJsonValue<QString>(m_groupId);	
	return result;
}

QString JoinGroupRequestDto::groupId() const { return m_groupId; }

void JoinGroupRequestDto::setGroupId(QString newGroupId) {
	m_groupId = newGroupId;
}


} // NS DTO

namespace Support {

using JoinGroupRequestDto = Jellyfin::DTO::JoinGroupRequestDto;

template <>
JoinGroupRequestDto fromJsonValue(const QJsonValue &source, convertType<JoinGroupRequestDto>) {
	if (!source.isObject()) throw ParseException("Expected JSON Object");
	return JoinGroupRequestDto::fromJson(source.toObject());
}

template<>
QJsonValue toJsonValue(const JoinGroupRequestDto &source, convertType<JoinGroupRequestDto>) {
	return source.toJson();
}

} // NS DTO
} // NS Jellyfin
