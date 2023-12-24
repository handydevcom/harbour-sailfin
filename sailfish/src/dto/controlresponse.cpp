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

#include <JellyfinQt/dto/controlresponse.h>

namespace Jellyfin {
namespace DTO {

ControlResponse::ControlResponse() {}
ControlResponse::ControlResponse (
		bool isSuccessful 
		) :
	m_isSuccessful(isSuccessful) { }



ControlResponse::ControlResponse(const ControlResponse &other) :

	m_headers(other.m_headers),
	m_xml(other.m_xml),
	m_isSuccessful(other.m_isSuccessful){}


void ControlResponse::replaceData(ControlResponse &other) {
	m_headers = other.m_headers;
	m_xml = other.m_xml;
	m_isSuccessful = other.m_isSuccessful;
}

ControlResponse ControlResponse::fromJson(QJsonObject source) {
	ControlResponse instance;
	instance.setFromJson(source);
	return instance;
}


void ControlResponse::setFromJson(QJsonObject source) {
	m_headers = Jellyfin::Support::fromJsonValue<QJsonObject>(source["Headers"]);
	m_xml = Jellyfin::Support::fromJsonValue<QString>(source["Xml"]);
	m_isSuccessful = Jellyfin::Support::fromJsonValue<bool>(source["IsSuccessful"]);

}
	
QJsonObject ControlResponse::toJson() const {
	QJsonObject result;
	
	
	if (!(m_headers.isEmpty())) {
		result["Headers"] = Jellyfin::Support::toJsonValue<QJsonObject>(m_headers);
	}
			
	
	if (!(m_xml.isNull())) {
		result["Xml"] = Jellyfin::Support::toJsonValue<QString>(m_xml);
	}
			
	result["IsSuccessful"] = Jellyfin::Support::toJsonValue<bool>(m_isSuccessful);	
	return result;
}

QJsonObject ControlResponse::headers() const { return m_headers; }

void ControlResponse::setHeaders(QJsonObject newHeaders) {
	m_headers = newHeaders;
}
bool ControlResponse::headersNull() const {
	return m_headers.isEmpty();
}

void ControlResponse::setHeadersNull() {
	m_headers= QJsonObject();

}
QString ControlResponse::xml() const { return m_xml; }

void ControlResponse::setXml(QString newXml) {
	m_xml = newXml;
}
bool ControlResponse::xmlNull() const {
	return m_xml.isNull();
}

void ControlResponse::setXmlNull() {
	m_xml.clear();

}
bool ControlResponse::isSuccessful() const { return m_isSuccessful; }

void ControlResponse::setIsSuccessful(bool newIsSuccessful) {
	m_isSuccessful = newIsSuccessful;
}


} // NS DTO

namespace Support {

using ControlResponse = Jellyfin::DTO::ControlResponse;

template <>
ControlResponse fromJsonValue(const QJsonValue &source, convertType<ControlResponse>) {
	if (!source.isObject()) throw ParseException("Expected JSON Object");
	return ControlResponse::fromJson(source.toObject());
}

template<>
QJsonValue toJsonValue(const ControlResponse &source, convertType<ControlResponse>) {
	return source.toJson();
}

} // NS DTO
} // NS Jellyfin
