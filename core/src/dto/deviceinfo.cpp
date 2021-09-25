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

#include <JellyfinQt/dto/deviceinfo.h>

namespace Jellyfin {
namespace DTO {

DeviceInfo::DeviceInfo() {}
DeviceInfo::DeviceInfo (
		QString lastUserId, 
		QDateTime dateLastActivity, 
		QSharedPointer<ClientCapabilities> capabilities 
		) :
	m_lastUserId(lastUserId),
	m_dateLastActivity(dateLastActivity),
	m_capabilities(capabilities) { }



DeviceInfo::DeviceInfo(const DeviceInfo &other) :

	m_name(other.m_name),
	m_jellyfinId(other.m_jellyfinId),
	m_lastUserName(other.m_lastUserName),
	m_appName(other.m_appName),
	m_appVersion(other.m_appVersion),
	m_lastUserId(other.m_lastUserId),
	m_dateLastActivity(other.m_dateLastActivity),
	m_capabilities(other.m_capabilities),
	m_iconUrl(other.m_iconUrl){}


void DeviceInfo::replaceData(DeviceInfo &other) {
	m_name = other.m_name;
	m_jellyfinId = other.m_jellyfinId;
	m_lastUserName = other.m_lastUserName;
	m_appName = other.m_appName;
	m_appVersion = other.m_appVersion;
	m_lastUserId = other.m_lastUserId;
	m_dateLastActivity = other.m_dateLastActivity;
	m_capabilities = other.m_capabilities;
	m_iconUrl = other.m_iconUrl;
}

DeviceInfo DeviceInfo::fromJson(QJsonObject source) {
	DeviceInfo instance;
	instance.setFromJson(source);
	return instance;
}


void DeviceInfo::setFromJson(QJsonObject source) {
	m_name = Jellyfin::Support::fromJsonValue<QString>(source["Name"]);
	m_jellyfinId = Jellyfin::Support::fromJsonValue<QString>(source["Id"]);
	m_lastUserName = Jellyfin::Support::fromJsonValue<QString>(source["LastUserName"]);
	m_appName = Jellyfin::Support::fromJsonValue<QString>(source["AppName"]);
	m_appVersion = Jellyfin::Support::fromJsonValue<QString>(source["AppVersion"]);
	m_lastUserId = Jellyfin::Support::fromJsonValue<QString>(source["LastUserId"]);
	m_dateLastActivity = Jellyfin::Support::fromJsonValue<QDateTime>(source["DateLastActivity"]);
	m_capabilities = Jellyfin::Support::fromJsonValue<QSharedPointer<ClientCapabilities>>(source["Capabilities"]);
	m_iconUrl = Jellyfin::Support::fromJsonValue<QString>(source["IconUrl"]);

}
	
QJsonObject DeviceInfo::toJson() const {
	QJsonObject result;
	
	
	if (!(m_name.isNull())) {
		result["Name"] = Jellyfin::Support::toJsonValue<QString>(m_name);
	}
			
	
	if (!(m_jellyfinId.isNull())) {
		result["Id"] = Jellyfin::Support::toJsonValue<QString>(m_jellyfinId);
	}
			
	
	if (!(m_lastUserName.isNull())) {
		result["LastUserName"] = Jellyfin::Support::toJsonValue<QString>(m_lastUserName);
	}
			
	
	if (!(m_appName.isNull())) {
		result["AppName"] = Jellyfin::Support::toJsonValue<QString>(m_appName);
	}
			
	
	if (!(m_appVersion.isNull())) {
		result["AppVersion"] = Jellyfin::Support::toJsonValue<QString>(m_appVersion);
	}
			
	result["LastUserId"] = Jellyfin::Support::toJsonValue<QString>(m_lastUserId);		
	result["DateLastActivity"] = Jellyfin::Support::toJsonValue<QDateTime>(m_dateLastActivity);		
	result["Capabilities"] = Jellyfin::Support::toJsonValue<QSharedPointer<ClientCapabilities>>(m_capabilities);		
	
	if (!(m_iconUrl.isNull())) {
		result["IconUrl"] = Jellyfin::Support::toJsonValue<QString>(m_iconUrl);
	}
		
	return result;
}

QString DeviceInfo::name() const { return m_name; }

void DeviceInfo::setName(QString newName) {
	m_name = newName;
}
bool DeviceInfo::nameNull() const {
	return m_name.isNull();
}

void DeviceInfo::setNameNull() {
	m_name.clear();

}
QString DeviceInfo::jellyfinId() const { return m_jellyfinId; }

void DeviceInfo::setJellyfinId(QString newJellyfinId) {
	m_jellyfinId = newJellyfinId;
}
bool DeviceInfo::jellyfinIdNull() const {
	return m_jellyfinId.isNull();
}

void DeviceInfo::setJellyfinIdNull() {
	m_jellyfinId.clear();

}
QString DeviceInfo::lastUserName() const { return m_lastUserName; }

void DeviceInfo::setLastUserName(QString newLastUserName) {
	m_lastUserName = newLastUserName;
}
bool DeviceInfo::lastUserNameNull() const {
	return m_lastUserName.isNull();
}

void DeviceInfo::setLastUserNameNull() {
	m_lastUserName.clear();

}
QString DeviceInfo::appName() const { return m_appName; }

void DeviceInfo::setAppName(QString newAppName) {
	m_appName = newAppName;
}
bool DeviceInfo::appNameNull() const {
	return m_appName.isNull();
}

void DeviceInfo::setAppNameNull() {
	m_appName.clear();

}
QString DeviceInfo::appVersion() const { return m_appVersion; }

void DeviceInfo::setAppVersion(QString newAppVersion) {
	m_appVersion = newAppVersion;
}
bool DeviceInfo::appVersionNull() const {
	return m_appVersion.isNull();
}

void DeviceInfo::setAppVersionNull() {
	m_appVersion.clear();

}
QString DeviceInfo::lastUserId() const { return m_lastUserId; }

void DeviceInfo::setLastUserId(QString newLastUserId) {
	m_lastUserId = newLastUserId;
}

QDateTime DeviceInfo::dateLastActivity() const { return m_dateLastActivity; }

void DeviceInfo::setDateLastActivity(QDateTime newDateLastActivity) {
	m_dateLastActivity = newDateLastActivity;
}

QSharedPointer<ClientCapabilities> DeviceInfo::capabilities() const { return m_capabilities; }

void DeviceInfo::setCapabilities(QSharedPointer<ClientCapabilities> newCapabilities) {
	m_capabilities = newCapabilities;
}

QString DeviceInfo::iconUrl() const { return m_iconUrl; }

void DeviceInfo::setIconUrl(QString newIconUrl) {
	m_iconUrl = newIconUrl;
}
bool DeviceInfo::iconUrlNull() const {
	return m_iconUrl.isNull();
}

void DeviceInfo::setIconUrlNull() {
	m_iconUrl.clear();

}

} // NS DTO

namespace Support {

using DeviceInfo = Jellyfin::DTO::DeviceInfo;

template <>
DeviceInfo fromJsonValue(const QJsonValue &source, convertType<DeviceInfo>) {
	if (!source.isObject()) throw ParseException("Expected JSON Object");
	return DeviceInfo::fromJson(source.toObject());
}

template<>
QJsonValue toJsonValue(const DeviceInfo &source, convertType<DeviceInfo>) {
	return source.toJson();
}

} // NS DTO
} // NS Jellyfin
