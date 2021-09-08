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

#include <JellyfinQt/dto/seriestimerinfodto.h>

namespace Jellyfin {
namespace DTO {

SeriesTimerInfoDto::SeriesTimerInfoDto() {}

SeriesTimerInfoDto::SeriesTimerInfoDto(const SeriesTimerInfoDto &other) :

	m_jellyfinId(other.m_jellyfinId),
	m_type(other.m_type),
	m_serverId(other.m_serverId),
	m_externalId(other.m_externalId),
	m_channelId(other.m_channelId),
	m_externalChannelId(other.m_externalChannelId),
	m_channelName(other.m_channelName),
	m_channelPrimaryImageTag(other.m_channelPrimaryImageTag),
	m_programId(other.m_programId),
	m_externalProgramId(other.m_externalProgramId),
	m_name(other.m_name),
	m_overview(other.m_overview),
	m_startDate(other.m_startDate),
	m_endDate(other.m_endDate),
	m_serviceName(other.m_serviceName),
	m_priority(other.m_priority),
	m_prePaddingSeconds(other.m_prePaddingSeconds),
	m_postPaddingSeconds(other.m_postPaddingSeconds),
	m_isPrePaddingRequired(other.m_isPrePaddingRequired),
	m_parentBackdropItemId(other.m_parentBackdropItemId),
	m_parentBackdropImageTags(other.m_parentBackdropImageTags),
	m_isPostPaddingRequired(other.m_isPostPaddingRequired),
	m_keepUntil(other.m_keepUntil),
	m_recordAnyTime(other.m_recordAnyTime),
	m_skipEpisodesInLibrary(other.m_skipEpisodesInLibrary),
	m_recordAnyChannel(other.m_recordAnyChannel),
	m_keepUpTo(other.m_keepUpTo),
	m_recordNewOnly(other.m_recordNewOnly),
	m_days(other.m_days),
	m_dayPattern(other.m_dayPattern),
	m_imageTags(other.m_imageTags),
	m_parentThumbItemId(other.m_parentThumbItemId),
	m_parentThumbImageTag(other.m_parentThumbImageTag),
	m_parentPrimaryImageItemId(other.m_parentPrimaryImageItemId),
	m_parentPrimaryImageTag(other.m_parentPrimaryImageTag){}


void SeriesTimerInfoDto::replaceData(SeriesTimerInfoDto &other) {
	m_jellyfinId = other.m_jellyfinId;
	m_type = other.m_type;
	m_serverId = other.m_serverId;
	m_externalId = other.m_externalId;
	m_channelId = other.m_channelId;
	m_externalChannelId = other.m_externalChannelId;
	m_channelName = other.m_channelName;
	m_channelPrimaryImageTag = other.m_channelPrimaryImageTag;
	m_programId = other.m_programId;
	m_externalProgramId = other.m_externalProgramId;
	m_name = other.m_name;
	m_overview = other.m_overview;
	m_startDate = other.m_startDate;
	m_endDate = other.m_endDate;
	m_serviceName = other.m_serviceName;
	m_priority = other.m_priority;
	m_prePaddingSeconds = other.m_prePaddingSeconds;
	m_postPaddingSeconds = other.m_postPaddingSeconds;
	m_isPrePaddingRequired = other.m_isPrePaddingRequired;
	m_parentBackdropItemId = other.m_parentBackdropItemId;
	m_parentBackdropImageTags = other.m_parentBackdropImageTags;
	m_isPostPaddingRequired = other.m_isPostPaddingRequired;
	m_keepUntil = other.m_keepUntil;
	m_recordAnyTime = other.m_recordAnyTime;
	m_skipEpisodesInLibrary = other.m_skipEpisodesInLibrary;
	m_recordAnyChannel = other.m_recordAnyChannel;
	m_keepUpTo = other.m_keepUpTo;
	m_recordNewOnly = other.m_recordNewOnly;
	m_days = other.m_days;
	m_dayPattern = other.m_dayPattern;
	m_imageTags = other.m_imageTags;
	m_parentThumbItemId = other.m_parentThumbItemId;
	m_parentThumbImageTag = other.m_parentThumbImageTag;
	m_parentPrimaryImageItemId = other.m_parentPrimaryImageItemId;
	m_parentPrimaryImageTag = other.m_parentPrimaryImageTag;
}

SeriesTimerInfoDto SeriesTimerInfoDto::fromJson(QJsonObject source) {
	SeriesTimerInfoDto instance;
	instance.setFromJson(source);
	return instance;
}


void SeriesTimerInfoDto::setFromJson(QJsonObject source) {
	m_jellyfinId = Jellyfin::Support::fromJsonValue<QString>(source["Id"]);
	m_type = Jellyfin::Support::fromJsonValue<QString>(source["Type"]);
	m_serverId = Jellyfin::Support::fromJsonValue<QString>(source["ServerId"]);
	m_externalId = Jellyfin::Support::fromJsonValue<QString>(source["ExternalId"]);
	m_channelId = Jellyfin::Support::fromJsonValue<QString>(source["ChannelId"]);
	m_externalChannelId = Jellyfin::Support::fromJsonValue<QString>(source["ExternalChannelId"]);
	m_channelName = Jellyfin::Support::fromJsonValue<QString>(source["ChannelName"]);
	m_channelPrimaryImageTag = Jellyfin::Support::fromJsonValue<QString>(source["ChannelPrimaryImageTag"]);
	m_programId = Jellyfin::Support::fromJsonValue<QString>(source["ProgramId"]);
	m_externalProgramId = Jellyfin::Support::fromJsonValue<QString>(source["ExternalProgramId"]);
	m_name = Jellyfin::Support::fromJsonValue<QString>(source["Name"]);
	m_overview = Jellyfin::Support::fromJsonValue<QString>(source["Overview"]);
	m_startDate = Jellyfin::Support::fromJsonValue<QDateTime>(source["StartDate"]);
	m_endDate = Jellyfin::Support::fromJsonValue<QDateTime>(source["EndDate"]);
	m_serviceName = Jellyfin::Support::fromJsonValue<QString>(source["ServiceName"]);
	m_priority = Jellyfin::Support::fromJsonValue<qint32>(source["Priority"]);
	m_prePaddingSeconds = Jellyfin::Support::fromJsonValue<qint32>(source["PrePaddingSeconds"]);
	m_postPaddingSeconds = Jellyfin::Support::fromJsonValue<qint32>(source["PostPaddingSeconds"]);
	m_isPrePaddingRequired = Jellyfin::Support::fromJsonValue<bool>(source["IsPrePaddingRequired"]);
	m_parentBackdropItemId = Jellyfin::Support::fromJsonValue<QString>(source["ParentBackdropItemId"]);
	m_parentBackdropImageTags = Jellyfin::Support::fromJsonValue<QStringList>(source["ParentBackdropImageTags"]);
	m_isPostPaddingRequired = Jellyfin::Support::fromJsonValue<bool>(source["IsPostPaddingRequired"]);
	m_keepUntil = Jellyfin::Support::fromJsonValue<KeepUntil>(source["KeepUntil"]);
	m_recordAnyTime = Jellyfin::Support::fromJsonValue<bool>(source["RecordAnyTime"]);
	m_skipEpisodesInLibrary = Jellyfin::Support::fromJsonValue<bool>(source["SkipEpisodesInLibrary"]);
	m_recordAnyChannel = Jellyfin::Support::fromJsonValue<bool>(source["RecordAnyChannel"]);
	m_keepUpTo = Jellyfin::Support::fromJsonValue<qint32>(source["KeepUpTo"]);
	m_recordNewOnly = Jellyfin::Support::fromJsonValue<bool>(source["RecordNewOnly"]);
	m_days = Jellyfin::Support::fromJsonValue<QList<DayOfWeek>>(source["Days"]);
	m_dayPattern = Jellyfin::Support::fromJsonValue<DayPattern>(source["DayPattern"]);
	m_imageTags = Jellyfin::Support::fromJsonValue<QJsonObject>(source["ImageTags"]);
	m_parentThumbItemId = Jellyfin::Support::fromJsonValue<QString>(source["ParentThumbItemId"]);
	m_parentThumbImageTag = Jellyfin::Support::fromJsonValue<QString>(source["ParentThumbImageTag"]);
	m_parentPrimaryImageItemId = Jellyfin::Support::fromJsonValue<QString>(source["ParentPrimaryImageItemId"]);
	m_parentPrimaryImageTag = Jellyfin::Support::fromJsonValue<QString>(source["ParentPrimaryImageTag"]);

}
	
QJsonObject SeriesTimerInfoDto::toJson() const {
	QJsonObject result;
	
	
	if (!(m_jellyfinId.isNull())) {
		result["Id"] = Jellyfin::Support::toJsonValue<QString>(m_jellyfinId);
	}
			
	
	if (!(m_type.isNull())) {
		result["Type"] = Jellyfin::Support::toJsonValue<QString>(m_type);
	}
			
	
	if (!(m_serverId.isNull())) {
		result["ServerId"] = Jellyfin::Support::toJsonValue<QString>(m_serverId);
	}
			
	
	if (!(m_externalId.isNull())) {
		result["ExternalId"] = Jellyfin::Support::toJsonValue<QString>(m_externalId);
	}
			
	result["ChannelId"] = Jellyfin::Support::toJsonValue<QString>(m_channelId);		
	
	if (!(m_externalChannelId.isNull())) {
		result["ExternalChannelId"] = Jellyfin::Support::toJsonValue<QString>(m_externalChannelId);
	}
			
	
	if (!(m_channelName.isNull())) {
		result["ChannelName"] = Jellyfin::Support::toJsonValue<QString>(m_channelName);
	}
			
	
	if (!(m_channelPrimaryImageTag.isNull())) {
		result["ChannelPrimaryImageTag"] = Jellyfin::Support::toJsonValue<QString>(m_channelPrimaryImageTag);
	}
			
	
	if (!(m_programId.isNull())) {
		result["ProgramId"] = Jellyfin::Support::toJsonValue<QString>(m_programId);
	}
			
	
	if (!(m_externalProgramId.isNull())) {
		result["ExternalProgramId"] = Jellyfin::Support::toJsonValue<QString>(m_externalProgramId);
	}
			
	
	if (!(m_name.isNull())) {
		result["Name"] = Jellyfin::Support::toJsonValue<QString>(m_name);
	}
			
	
	if (!(m_overview.isNull())) {
		result["Overview"] = Jellyfin::Support::toJsonValue<QString>(m_overview);
	}
			
	result["StartDate"] = Jellyfin::Support::toJsonValue<QDateTime>(m_startDate);		
	result["EndDate"] = Jellyfin::Support::toJsonValue<QDateTime>(m_endDate);		
	
	if (!(m_serviceName.isNull())) {
		result["ServiceName"] = Jellyfin::Support::toJsonValue<QString>(m_serviceName);
	}
			
	result["Priority"] = Jellyfin::Support::toJsonValue<qint32>(m_priority);		
	result["PrePaddingSeconds"] = Jellyfin::Support::toJsonValue<qint32>(m_prePaddingSeconds);		
	result["PostPaddingSeconds"] = Jellyfin::Support::toJsonValue<qint32>(m_postPaddingSeconds);		
	result["IsPrePaddingRequired"] = Jellyfin::Support::toJsonValue<bool>(m_isPrePaddingRequired);		
	
	if (!(m_parentBackdropItemId.isNull())) {
		result["ParentBackdropItemId"] = Jellyfin::Support::toJsonValue<QString>(m_parentBackdropItemId);
	}
			
	
	if (!(m_parentBackdropImageTags.size() == 0)) {
		result["ParentBackdropImageTags"] = Jellyfin::Support::toJsonValue<QStringList>(m_parentBackdropImageTags);
	}
			
	result["IsPostPaddingRequired"] = Jellyfin::Support::toJsonValue<bool>(m_isPostPaddingRequired);		
	result["KeepUntil"] = Jellyfin::Support::toJsonValue<KeepUntil>(m_keepUntil);		
	result["RecordAnyTime"] = Jellyfin::Support::toJsonValue<bool>(m_recordAnyTime);		
	result["SkipEpisodesInLibrary"] = Jellyfin::Support::toJsonValue<bool>(m_skipEpisodesInLibrary);		
	result["RecordAnyChannel"] = Jellyfin::Support::toJsonValue<bool>(m_recordAnyChannel);		
	result["KeepUpTo"] = Jellyfin::Support::toJsonValue<qint32>(m_keepUpTo);		
	result["RecordNewOnly"] = Jellyfin::Support::toJsonValue<bool>(m_recordNewOnly);		
	
	if (!(m_days.size() == 0)) {
		result["Days"] = Jellyfin::Support::toJsonValue<QList<DayOfWeek>>(m_days);
	}
			
	result["DayPattern"] = Jellyfin::Support::toJsonValue<DayPattern>(m_dayPattern);		
	
	if (!(m_imageTags.isEmpty())) {
		result["ImageTags"] = Jellyfin::Support::toJsonValue<QJsonObject>(m_imageTags);
	}
			
	
	if (!(m_parentThumbItemId.isNull())) {
		result["ParentThumbItemId"] = Jellyfin::Support::toJsonValue<QString>(m_parentThumbItemId);
	}
			
	
	if (!(m_parentThumbImageTag.isNull())) {
		result["ParentThumbImageTag"] = Jellyfin::Support::toJsonValue<QString>(m_parentThumbImageTag);
	}
			
	
	if (!(m_parentPrimaryImageItemId.isNull())) {
		result["ParentPrimaryImageItemId"] = Jellyfin::Support::toJsonValue<QString>(m_parentPrimaryImageItemId);
	}
			
	
	if (!(m_parentPrimaryImageTag.isNull())) {
		result["ParentPrimaryImageTag"] = Jellyfin::Support::toJsonValue<QString>(m_parentPrimaryImageTag);
	}
		
	return result;
}

QString SeriesTimerInfoDto::jellyfinId() const { return m_jellyfinId; }

void SeriesTimerInfoDto::setJellyfinId(QString newJellyfinId) {
	m_jellyfinId = newJellyfinId;
}
bool SeriesTimerInfoDto::jellyfinIdNull() const {
	return m_jellyfinId.isNull();
}

void SeriesTimerInfoDto::setJellyfinIdNull() {
	m_jellyfinId.clear();

}
QString SeriesTimerInfoDto::type() const { return m_type; }

void SeriesTimerInfoDto::setType(QString newType) {
	m_type = newType;
}
bool SeriesTimerInfoDto::typeNull() const {
	return m_type.isNull();
}

void SeriesTimerInfoDto::setTypeNull() {
	m_type.clear();

}
QString SeriesTimerInfoDto::serverId() const { return m_serverId; }

void SeriesTimerInfoDto::setServerId(QString newServerId) {
	m_serverId = newServerId;
}
bool SeriesTimerInfoDto::serverIdNull() const {
	return m_serverId.isNull();
}

void SeriesTimerInfoDto::setServerIdNull() {
	m_serverId.clear();

}
QString SeriesTimerInfoDto::externalId() const { return m_externalId; }

void SeriesTimerInfoDto::setExternalId(QString newExternalId) {
	m_externalId = newExternalId;
}
bool SeriesTimerInfoDto::externalIdNull() const {
	return m_externalId.isNull();
}

void SeriesTimerInfoDto::setExternalIdNull() {
	m_externalId.clear();

}
QString SeriesTimerInfoDto::channelId() const { return m_channelId; }

void SeriesTimerInfoDto::setChannelId(QString newChannelId) {
	m_channelId = newChannelId;
}

QString SeriesTimerInfoDto::externalChannelId() const { return m_externalChannelId; }

void SeriesTimerInfoDto::setExternalChannelId(QString newExternalChannelId) {
	m_externalChannelId = newExternalChannelId;
}
bool SeriesTimerInfoDto::externalChannelIdNull() const {
	return m_externalChannelId.isNull();
}

void SeriesTimerInfoDto::setExternalChannelIdNull() {
	m_externalChannelId.clear();

}
QString SeriesTimerInfoDto::channelName() const { return m_channelName; }

void SeriesTimerInfoDto::setChannelName(QString newChannelName) {
	m_channelName = newChannelName;
}
bool SeriesTimerInfoDto::channelNameNull() const {
	return m_channelName.isNull();
}

void SeriesTimerInfoDto::setChannelNameNull() {
	m_channelName.clear();

}
QString SeriesTimerInfoDto::channelPrimaryImageTag() const { return m_channelPrimaryImageTag; }

void SeriesTimerInfoDto::setChannelPrimaryImageTag(QString newChannelPrimaryImageTag) {
	m_channelPrimaryImageTag = newChannelPrimaryImageTag;
}
bool SeriesTimerInfoDto::channelPrimaryImageTagNull() const {
	return m_channelPrimaryImageTag.isNull();
}

void SeriesTimerInfoDto::setChannelPrimaryImageTagNull() {
	m_channelPrimaryImageTag.clear();

}
QString SeriesTimerInfoDto::programId() const { return m_programId; }

void SeriesTimerInfoDto::setProgramId(QString newProgramId) {
	m_programId = newProgramId;
}
bool SeriesTimerInfoDto::programIdNull() const {
	return m_programId.isNull();
}

void SeriesTimerInfoDto::setProgramIdNull() {
	m_programId.clear();

}
QString SeriesTimerInfoDto::externalProgramId() const { return m_externalProgramId; }

void SeriesTimerInfoDto::setExternalProgramId(QString newExternalProgramId) {
	m_externalProgramId = newExternalProgramId;
}
bool SeriesTimerInfoDto::externalProgramIdNull() const {
	return m_externalProgramId.isNull();
}

void SeriesTimerInfoDto::setExternalProgramIdNull() {
	m_externalProgramId.clear();

}
QString SeriesTimerInfoDto::name() const { return m_name; }

void SeriesTimerInfoDto::setName(QString newName) {
	m_name = newName;
}
bool SeriesTimerInfoDto::nameNull() const {
	return m_name.isNull();
}

void SeriesTimerInfoDto::setNameNull() {
	m_name.clear();

}
QString SeriesTimerInfoDto::overview() const { return m_overview; }

void SeriesTimerInfoDto::setOverview(QString newOverview) {
	m_overview = newOverview;
}
bool SeriesTimerInfoDto::overviewNull() const {
	return m_overview.isNull();
}

void SeriesTimerInfoDto::setOverviewNull() {
	m_overview.clear();

}
QDateTime SeriesTimerInfoDto::startDate() const { return m_startDate; }

void SeriesTimerInfoDto::setStartDate(QDateTime newStartDate) {
	m_startDate = newStartDate;
}

QDateTime SeriesTimerInfoDto::endDate() const { return m_endDate; }

void SeriesTimerInfoDto::setEndDate(QDateTime newEndDate) {
	m_endDate = newEndDate;
}

QString SeriesTimerInfoDto::serviceName() const { return m_serviceName; }

void SeriesTimerInfoDto::setServiceName(QString newServiceName) {
	m_serviceName = newServiceName;
}
bool SeriesTimerInfoDto::serviceNameNull() const {
	return m_serviceName.isNull();
}

void SeriesTimerInfoDto::setServiceNameNull() {
	m_serviceName.clear();

}
qint32 SeriesTimerInfoDto::priority() const { return m_priority; }

void SeriesTimerInfoDto::setPriority(qint32 newPriority) {
	m_priority = newPriority;
}

qint32 SeriesTimerInfoDto::prePaddingSeconds() const { return m_prePaddingSeconds; }

void SeriesTimerInfoDto::setPrePaddingSeconds(qint32 newPrePaddingSeconds) {
	m_prePaddingSeconds = newPrePaddingSeconds;
}

qint32 SeriesTimerInfoDto::postPaddingSeconds() const { return m_postPaddingSeconds; }

void SeriesTimerInfoDto::setPostPaddingSeconds(qint32 newPostPaddingSeconds) {
	m_postPaddingSeconds = newPostPaddingSeconds;
}

bool SeriesTimerInfoDto::isPrePaddingRequired() const { return m_isPrePaddingRequired; }

void SeriesTimerInfoDto::setIsPrePaddingRequired(bool newIsPrePaddingRequired) {
	m_isPrePaddingRequired = newIsPrePaddingRequired;
}

QString SeriesTimerInfoDto::parentBackdropItemId() const { return m_parentBackdropItemId; }

void SeriesTimerInfoDto::setParentBackdropItemId(QString newParentBackdropItemId) {
	m_parentBackdropItemId = newParentBackdropItemId;
}
bool SeriesTimerInfoDto::parentBackdropItemIdNull() const {
	return m_parentBackdropItemId.isNull();
}

void SeriesTimerInfoDto::setParentBackdropItemIdNull() {
	m_parentBackdropItemId.clear();

}
QStringList SeriesTimerInfoDto::parentBackdropImageTags() const { return m_parentBackdropImageTags; }

void SeriesTimerInfoDto::setParentBackdropImageTags(QStringList newParentBackdropImageTags) {
	m_parentBackdropImageTags = newParentBackdropImageTags;
}
bool SeriesTimerInfoDto::parentBackdropImageTagsNull() const {
	return m_parentBackdropImageTags.size() == 0;
}

void SeriesTimerInfoDto::setParentBackdropImageTagsNull() {
	m_parentBackdropImageTags.clear();

}
bool SeriesTimerInfoDto::isPostPaddingRequired() const { return m_isPostPaddingRequired; }

void SeriesTimerInfoDto::setIsPostPaddingRequired(bool newIsPostPaddingRequired) {
	m_isPostPaddingRequired = newIsPostPaddingRequired;
}

KeepUntil SeriesTimerInfoDto::keepUntil() const { return m_keepUntil; }

void SeriesTimerInfoDto::setKeepUntil(KeepUntil newKeepUntil) {
	m_keepUntil = newKeepUntil;
}

bool SeriesTimerInfoDto::recordAnyTime() const { return m_recordAnyTime; }

void SeriesTimerInfoDto::setRecordAnyTime(bool newRecordAnyTime) {
	m_recordAnyTime = newRecordAnyTime;
}

bool SeriesTimerInfoDto::skipEpisodesInLibrary() const { return m_skipEpisodesInLibrary; }

void SeriesTimerInfoDto::setSkipEpisodesInLibrary(bool newSkipEpisodesInLibrary) {
	m_skipEpisodesInLibrary = newSkipEpisodesInLibrary;
}

bool SeriesTimerInfoDto::recordAnyChannel() const { return m_recordAnyChannel; }

void SeriesTimerInfoDto::setRecordAnyChannel(bool newRecordAnyChannel) {
	m_recordAnyChannel = newRecordAnyChannel;
}

qint32 SeriesTimerInfoDto::keepUpTo() const { return m_keepUpTo; }

void SeriesTimerInfoDto::setKeepUpTo(qint32 newKeepUpTo) {
	m_keepUpTo = newKeepUpTo;
}

bool SeriesTimerInfoDto::recordNewOnly() const { return m_recordNewOnly; }

void SeriesTimerInfoDto::setRecordNewOnly(bool newRecordNewOnly) {
	m_recordNewOnly = newRecordNewOnly;
}

QList<DayOfWeek> SeriesTimerInfoDto::days() const { return m_days; }

void SeriesTimerInfoDto::setDays(QList<DayOfWeek> newDays) {
	m_days = newDays;
}
bool SeriesTimerInfoDto::daysNull() const {
	return m_days.size() == 0;
}

void SeriesTimerInfoDto::setDaysNull() {
	m_days.clear();

}
DayPattern SeriesTimerInfoDto::dayPattern() const { return m_dayPattern; }

void SeriesTimerInfoDto::setDayPattern(DayPattern newDayPattern) {
	m_dayPattern = newDayPattern;
}

QJsonObject SeriesTimerInfoDto::imageTags() const { return m_imageTags; }

void SeriesTimerInfoDto::setImageTags(QJsonObject newImageTags) {
	m_imageTags = newImageTags;
}
bool SeriesTimerInfoDto::imageTagsNull() const {
	return m_imageTags.isEmpty();
}

void SeriesTimerInfoDto::setImageTagsNull() {
	m_imageTags= QJsonObject();

}
QString SeriesTimerInfoDto::parentThumbItemId() const { return m_parentThumbItemId; }

void SeriesTimerInfoDto::setParentThumbItemId(QString newParentThumbItemId) {
	m_parentThumbItemId = newParentThumbItemId;
}
bool SeriesTimerInfoDto::parentThumbItemIdNull() const {
	return m_parentThumbItemId.isNull();
}

void SeriesTimerInfoDto::setParentThumbItemIdNull() {
	m_parentThumbItemId.clear();

}
QString SeriesTimerInfoDto::parentThumbImageTag() const { return m_parentThumbImageTag; }

void SeriesTimerInfoDto::setParentThumbImageTag(QString newParentThumbImageTag) {
	m_parentThumbImageTag = newParentThumbImageTag;
}
bool SeriesTimerInfoDto::parentThumbImageTagNull() const {
	return m_parentThumbImageTag.isNull();
}

void SeriesTimerInfoDto::setParentThumbImageTagNull() {
	m_parentThumbImageTag.clear();

}
QString SeriesTimerInfoDto::parentPrimaryImageItemId() const { return m_parentPrimaryImageItemId; }

void SeriesTimerInfoDto::setParentPrimaryImageItemId(QString newParentPrimaryImageItemId) {
	m_parentPrimaryImageItemId = newParentPrimaryImageItemId;
}
bool SeriesTimerInfoDto::parentPrimaryImageItemIdNull() const {
	return m_parentPrimaryImageItemId.isNull();
}

void SeriesTimerInfoDto::setParentPrimaryImageItemIdNull() {
	m_parentPrimaryImageItemId.clear();

}
QString SeriesTimerInfoDto::parentPrimaryImageTag() const { return m_parentPrimaryImageTag; }

void SeriesTimerInfoDto::setParentPrimaryImageTag(QString newParentPrimaryImageTag) {
	m_parentPrimaryImageTag = newParentPrimaryImageTag;
}
bool SeriesTimerInfoDto::parentPrimaryImageTagNull() const {
	return m_parentPrimaryImageTag.isNull();
}

void SeriesTimerInfoDto::setParentPrimaryImageTagNull() {
	m_parentPrimaryImageTag.clear();

}

} // NS DTO

namespace Support {

using SeriesTimerInfoDto = Jellyfin::DTO::SeriesTimerInfoDto;

template <>
SeriesTimerInfoDto fromJsonValue(const QJsonValue &source, convertType<SeriesTimerInfoDto>) {
	if (!source.isObject()) throw ParseException("Expected JSON Object");
	return SeriesTimerInfoDto::fromJson(source.toObject());
}

template<>
QJsonValue toJsonValue(const SeriesTimerInfoDto &source, convertType<SeriesTimerInfoDto>) {
	return source.toJson();
}

} // NS DTO
} // NS Jellyfin
