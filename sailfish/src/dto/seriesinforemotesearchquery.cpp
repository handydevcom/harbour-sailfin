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

#include <JellyfinQt/dto/seriesinforemotesearchquery.h>

namespace Jellyfin {
namespace DTO {

SeriesInfoRemoteSearchQuery::SeriesInfoRemoteSearchQuery() {}
SeriesInfoRemoteSearchQuery::SeriesInfoRemoteSearchQuery (
		QSharedPointer<SeriesInfo> searchInfo, 
		QString itemId, 
		bool includeDisabledProviders 
		) :
	m_searchInfo(searchInfo),
	m_itemId(itemId),
	m_includeDisabledProviders(includeDisabledProviders) { }



SeriesInfoRemoteSearchQuery::SeriesInfoRemoteSearchQuery(const SeriesInfoRemoteSearchQuery &other) :

	m_searchInfo(other.m_searchInfo),
	m_itemId(other.m_itemId),
	m_searchProviderName(other.m_searchProviderName),
	m_includeDisabledProviders(other.m_includeDisabledProviders){}


void SeriesInfoRemoteSearchQuery::replaceData(SeriesInfoRemoteSearchQuery &other) {
	m_searchInfo = other.m_searchInfo;
	m_itemId = other.m_itemId;
	m_searchProviderName = other.m_searchProviderName;
	m_includeDisabledProviders = other.m_includeDisabledProviders;
}

SeriesInfoRemoteSearchQuery SeriesInfoRemoteSearchQuery::fromJson(QJsonObject source) {
	SeriesInfoRemoteSearchQuery instance;
	instance.setFromJson(source);
	return instance;
}


void SeriesInfoRemoteSearchQuery::setFromJson(QJsonObject source) {
	m_searchInfo = Jellyfin::Support::fromJsonValue<QSharedPointer<SeriesInfo>>(source["SearchInfo"]);
	m_itemId = Jellyfin::Support::fromJsonValue<QString>(source["ItemId"]);
	m_searchProviderName = Jellyfin::Support::fromJsonValue<QString>(source["SearchProviderName"]);
	m_includeDisabledProviders = Jellyfin::Support::fromJsonValue<bool>(source["IncludeDisabledProviders"]);

}
	
QJsonObject SeriesInfoRemoteSearchQuery::toJson() const {
	QJsonObject result;
	
	result["SearchInfo"] = Jellyfin::Support::toJsonValue<QSharedPointer<SeriesInfo>>(m_searchInfo);		
	result["ItemId"] = Jellyfin::Support::toJsonValue<QString>(m_itemId);		
	
	if (!(m_searchProviderName.isNull())) {
		result["SearchProviderName"] = Jellyfin::Support::toJsonValue<QString>(m_searchProviderName);
	}
			
	result["IncludeDisabledProviders"] = Jellyfin::Support::toJsonValue<bool>(m_includeDisabledProviders);	
	return result;
}

QSharedPointer<SeriesInfo> SeriesInfoRemoteSearchQuery::searchInfo() const { return m_searchInfo; }

void SeriesInfoRemoteSearchQuery::setSearchInfo(QSharedPointer<SeriesInfo> newSearchInfo) {
	m_searchInfo = newSearchInfo;
}

QString SeriesInfoRemoteSearchQuery::itemId() const { return m_itemId; }

void SeriesInfoRemoteSearchQuery::setItemId(QString newItemId) {
	m_itemId = newItemId;
}

QString SeriesInfoRemoteSearchQuery::searchProviderName() const { return m_searchProviderName; }

void SeriesInfoRemoteSearchQuery::setSearchProviderName(QString newSearchProviderName) {
	m_searchProviderName = newSearchProviderName;
}
bool SeriesInfoRemoteSearchQuery::searchProviderNameNull() const {
	return m_searchProviderName.isNull();
}

void SeriesInfoRemoteSearchQuery::setSearchProviderNameNull() {
	m_searchProviderName.clear();

}
bool SeriesInfoRemoteSearchQuery::includeDisabledProviders() const { return m_includeDisabledProviders; }

void SeriesInfoRemoteSearchQuery::setIncludeDisabledProviders(bool newIncludeDisabledProviders) {
	m_includeDisabledProviders = newIncludeDisabledProviders;
}


} // NS DTO

namespace Support {

using SeriesInfoRemoteSearchQuery = Jellyfin::DTO::SeriesInfoRemoteSearchQuery;

template <>
SeriesInfoRemoteSearchQuery fromJsonValue(const QJsonValue &source, convertType<SeriesInfoRemoteSearchQuery>) {
	if (!source.isObject()) throw ParseException("Expected JSON Object");
	return SeriesInfoRemoteSearchQuery::fromJson(source.toObject());
}

template<>
QJsonValue toJsonValue(const SeriesInfoRemoteSearchQuery &source, convertType<SeriesInfoRemoteSearchQuery>) {
	return source.toJson();
}

} // NS DTO
} // NS Jellyfin
