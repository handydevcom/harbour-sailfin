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

#include <JellyfinQt/dto/metadataoptions.h>

namespace Jellyfin {
namespace DTO {

MetadataOptions::MetadataOptions() {}

MetadataOptions::MetadataOptions(const MetadataOptions &other) :

	m_itemType(other.m_itemType),
	m_disabledMetadataSavers(other.m_disabledMetadataSavers),
	m_localMetadataReaderOrder(other.m_localMetadataReaderOrder),
	m_disabledMetadataFetchers(other.m_disabledMetadataFetchers),
	m_metadataFetcherOrder(other.m_metadataFetcherOrder),
	m_disabledImageFetchers(other.m_disabledImageFetchers),
	m_imageFetcherOrder(other.m_imageFetcherOrder){}


void MetadataOptions::replaceData(MetadataOptions &other) {
	m_itemType = other.m_itemType;
	m_disabledMetadataSavers = other.m_disabledMetadataSavers;
	m_localMetadataReaderOrder = other.m_localMetadataReaderOrder;
	m_disabledMetadataFetchers = other.m_disabledMetadataFetchers;
	m_metadataFetcherOrder = other.m_metadataFetcherOrder;
	m_disabledImageFetchers = other.m_disabledImageFetchers;
	m_imageFetcherOrder = other.m_imageFetcherOrder;
}

MetadataOptions MetadataOptions::fromJson(QJsonObject source) {
	MetadataOptions instance;
	instance.setFromJson(source);
	return instance;
}


void MetadataOptions::setFromJson(QJsonObject source) {
	m_itemType = Jellyfin::Support::fromJsonValue<QString>(source["ItemType"]);
	m_disabledMetadataSavers = Jellyfin::Support::fromJsonValue<QStringList>(source["DisabledMetadataSavers"]);
	m_localMetadataReaderOrder = Jellyfin::Support::fromJsonValue<QStringList>(source["LocalMetadataReaderOrder"]);
	m_disabledMetadataFetchers = Jellyfin::Support::fromJsonValue<QStringList>(source["DisabledMetadataFetchers"]);
	m_metadataFetcherOrder = Jellyfin::Support::fromJsonValue<QStringList>(source["MetadataFetcherOrder"]);
	m_disabledImageFetchers = Jellyfin::Support::fromJsonValue<QStringList>(source["DisabledImageFetchers"]);
	m_imageFetcherOrder = Jellyfin::Support::fromJsonValue<QStringList>(source["ImageFetcherOrder"]);

}
	
QJsonObject MetadataOptions::toJson() const {
	QJsonObject result;
	
	
	if (!(m_itemType.isNull())) {
		result["ItemType"] = Jellyfin::Support::toJsonValue<QString>(m_itemType);
	}
			
	
	if (!(m_disabledMetadataSavers.size() == 0)) {
		result["DisabledMetadataSavers"] = Jellyfin::Support::toJsonValue<QStringList>(m_disabledMetadataSavers);
	}
			
	
	if (!(m_localMetadataReaderOrder.size() == 0)) {
		result["LocalMetadataReaderOrder"] = Jellyfin::Support::toJsonValue<QStringList>(m_localMetadataReaderOrder);
	}
			
	
	if (!(m_disabledMetadataFetchers.size() == 0)) {
		result["DisabledMetadataFetchers"] = Jellyfin::Support::toJsonValue<QStringList>(m_disabledMetadataFetchers);
	}
			
	
	if (!(m_metadataFetcherOrder.size() == 0)) {
		result["MetadataFetcherOrder"] = Jellyfin::Support::toJsonValue<QStringList>(m_metadataFetcherOrder);
	}
			
	
	if (!(m_disabledImageFetchers.size() == 0)) {
		result["DisabledImageFetchers"] = Jellyfin::Support::toJsonValue<QStringList>(m_disabledImageFetchers);
	}
			
	
	if (!(m_imageFetcherOrder.size() == 0)) {
		result["ImageFetcherOrder"] = Jellyfin::Support::toJsonValue<QStringList>(m_imageFetcherOrder);
	}
		
	return result;
}

QString MetadataOptions::itemType() const { return m_itemType; }

void MetadataOptions::setItemType(QString newItemType) {
	m_itemType = newItemType;
}
bool MetadataOptions::itemTypeNull() const {
	return m_itemType.isNull();
}

void MetadataOptions::setItemTypeNull() {
	m_itemType.clear();

}
QStringList MetadataOptions::disabledMetadataSavers() const { return m_disabledMetadataSavers; }

void MetadataOptions::setDisabledMetadataSavers(QStringList newDisabledMetadataSavers) {
	m_disabledMetadataSavers = newDisabledMetadataSavers;
}
bool MetadataOptions::disabledMetadataSaversNull() const {
	return m_disabledMetadataSavers.size() == 0;
}

void MetadataOptions::setDisabledMetadataSaversNull() {
	m_disabledMetadataSavers.clear();

}
QStringList MetadataOptions::localMetadataReaderOrder() const { return m_localMetadataReaderOrder; }

void MetadataOptions::setLocalMetadataReaderOrder(QStringList newLocalMetadataReaderOrder) {
	m_localMetadataReaderOrder = newLocalMetadataReaderOrder;
}
bool MetadataOptions::localMetadataReaderOrderNull() const {
	return m_localMetadataReaderOrder.size() == 0;
}

void MetadataOptions::setLocalMetadataReaderOrderNull() {
	m_localMetadataReaderOrder.clear();

}
QStringList MetadataOptions::disabledMetadataFetchers() const { return m_disabledMetadataFetchers; }

void MetadataOptions::setDisabledMetadataFetchers(QStringList newDisabledMetadataFetchers) {
	m_disabledMetadataFetchers = newDisabledMetadataFetchers;
}
bool MetadataOptions::disabledMetadataFetchersNull() const {
	return m_disabledMetadataFetchers.size() == 0;
}

void MetadataOptions::setDisabledMetadataFetchersNull() {
	m_disabledMetadataFetchers.clear();

}
QStringList MetadataOptions::metadataFetcherOrder() const { return m_metadataFetcherOrder; }

void MetadataOptions::setMetadataFetcherOrder(QStringList newMetadataFetcherOrder) {
	m_metadataFetcherOrder = newMetadataFetcherOrder;
}
bool MetadataOptions::metadataFetcherOrderNull() const {
	return m_metadataFetcherOrder.size() == 0;
}

void MetadataOptions::setMetadataFetcherOrderNull() {
	m_metadataFetcherOrder.clear();

}
QStringList MetadataOptions::disabledImageFetchers() const { return m_disabledImageFetchers; }

void MetadataOptions::setDisabledImageFetchers(QStringList newDisabledImageFetchers) {
	m_disabledImageFetchers = newDisabledImageFetchers;
}
bool MetadataOptions::disabledImageFetchersNull() const {
	return m_disabledImageFetchers.size() == 0;
}

void MetadataOptions::setDisabledImageFetchersNull() {
	m_disabledImageFetchers.clear();

}
QStringList MetadataOptions::imageFetcherOrder() const { return m_imageFetcherOrder; }

void MetadataOptions::setImageFetcherOrder(QStringList newImageFetcherOrder) {
	m_imageFetcherOrder = newImageFetcherOrder;
}
bool MetadataOptions::imageFetcherOrderNull() const {
	return m_imageFetcherOrder.size() == 0;
}

void MetadataOptions::setImageFetcherOrderNull() {
	m_imageFetcherOrder.clear();

}

} // NS DTO

namespace Support {

using MetadataOptions = Jellyfin::DTO::MetadataOptions;

template <>
MetadataOptions fromJsonValue(const QJsonValue &source, convertType<MetadataOptions>) {
	if (!source.isObject()) throw ParseException("Expected JSON Object");
	return MetadataOptions::fromJson(source.toObject());
}

template<>
QJsonValue toJsonValue(const MetadataOptions &source, convertType<MetadataOptions>) {
	return source.toJson();
}

} // NS DTO
} // NS Jellyfin
