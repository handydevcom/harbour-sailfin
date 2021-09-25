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

#include <JellyfinQt/dto/bookinforemotesearchquery.h>

namespace Jellyfin {
namespace DTO {

BookInfoRemoteSearchQuery::BookInfoRemoteSearchQuery() {}
BookInfoRemoteSearchQuery::BookInfoRemoteSearchQuery (
		QSharedPointer<BookInfo> searchInfo, 
		QString itemId, 
		bool includeDisabledProviders 
		) :
	m_searchInfo(searchInfo),
	m_itemId(itemId),
	m_includeDisabledProviders(includeDisabledProviders) { }



BookInfoRemoteSearchQuery::BookInfoRemoteSearchQuery(const BookInfoRemoteSearchQuery &other) :

	m_searchInfo(other.m_searchInfo),
	m_itemId(other.m_itemId),
	m_searchProviderName(other.m_searchProviderName),
	m_includeDisabledProviders(other.m_includeDisabledProviders){}


void BookInfoRemoteSearchQuery::replaceData(BookInfoRemoteSearchQuery &other) {
	m_searchInfo = other.m_searchInfo;
	m_itemId = other.m_itemId;
	m_searchProviderName = other.m_searchProviderName;
	m_includeDisabledProviders = other.m_includeDisabledProviders;
}

BookInfoRemoteSearchQuery BookInfoRemoteSearchQuery::fromJson(QJsonObject source) {
	BookInfoRemoteSearchQuery instance;
	instance.setFromJson(source);
	return instance;
}


void BookInfoRemoteSearchQuery::setFromJson(QJsonObject source) {
	m_searchInfo = Jellyfin::Support::fromJsonValue<QSharedPointer<BookInfo>>(source["SearchInfo"]);
	m_itemId = Jellyfin::Support::fromJsonValue<QString>(source["ItemId"]);
	m_searchProviderName = Jellyfin::Support::fromJsonValue<QString>(source["SearchProviderName"]);
	m_includeDisabledProviders = Jellyfin::Support::fromJsonValue<bool>(source["IncludeDisabledProviders"]);

}
	
QJsonObject BookInfoRemoteSearchQuery::toJson() const {
	QJsonObject result;
	
	result["SearchInfo"] = Jellyfin::Support::toJsonValue<QSharedPointer<BookInfo>>(m_searchInfo);		
	result["ItemId"] = Jellyfin::Support::toJsonValue<QString>(m_itemId);		
	
	if (!(m_searchProviderName.isNull())) {
		result["SearchProviderName"] = Jellyfin::Support::toJsonValue<QString>(m_searchProviderName);
	}
			
	result["IncludeDisabledProviders"] = Jellyfin::Support::toJsonValue<bool>(m_includeDisabledProviders);	
	return result;
}

QSharedPointer<BookInfo> BookInfoRemoteSearchQuery::searchInfo() const { return m_searchInfo; }

void BookInfoRemoteSearchQuery::setSearchInfo(QSharedPointer<BookInfo> newSearchInfo) {
	m_searchInfo = newSearchInfo;
}

QString BookInfoRemoteSearchQuery::itemId() const { return m_itemId; }

void BookInfoRemoteSearchQuery::setItemId(QString newItemId) {
	m_itemId = newItemId;
}

QString BookInfoRemoteSearchQuery::searchProviderName() const { return m_searchProviderName; }

void BookInfoRemoteSearchQuery::setSearchProviderName(QString newSearchProviderName) {
	m_searchProviderName = newSearchProviderName;
}
bool BookInfoRemoteSearchQuery::searchProviderNameNull() const {
	return m_searchProviderName.isNull();
}

void BookInfoRemoteSearchQuery::setSearchProviderNameNull() {
	m_searchProviderName.clear();

}
bool BookInfoRemoteSearchQuery::includeDisabledProviders() const { return m_includeDisabledProviders; }

void BookInfoRemoteSearchQuery::setIncludeDisabledProviders(bool newIncludeDisabledProviders) {
	m_includeDisabledProviders = newIncludeDisabledProviders;
}


} // NS DTO

namespace Support {

using BookInfoRemoteSearchQuery = Jellyfin::DTO::BookInfoRemoteSearchQuery;

template <>
BookInfoRemoteSearchQuery fromJsonValue(const QJsonValue &source, convertType<BookInfoRemoteSearchQuery>) {
	if (!source.isObject()) throw ParseException("Expected JSON Object");
	return BookInfoRemoteSearchQuery::fromJson(source.toObject());
}

template<>
QJsonValue toJsonValue(const BookInfoRemoteSearchQuery &source, convertType<BookInfoRemoteSearchQuery>) {
	return source.toJson();
}

} // NS DTO
} // NS Jellyfin
