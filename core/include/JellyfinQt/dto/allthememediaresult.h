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

#ifndef JELLYFIN_DTO_ALLTHEMEMEDIARESULT_H
#define JELLYFIN_DTO_ALLTHEMEMEDIARESULT_H

#include <QJsonObject>
#include <QJsonValue>
#include <QSharedPointer>
#include <optional>

#include "JellyfinQt/dto/thememediaresult.h"
#include "JellyfinQt/support/jsonconv.h"

namespace Jellyfin {
// Forward declaration
class ApiClient;
}
namespace Jellyfin {
namespace DTO {


class AllThemeMediaResult {
public:
	AllThemeMediaResult();
	AllThemeMediaResult(const AllThemeMediaResult &other);
	
	/**
	 * Replaces the data being hold by this class with that of the other.
	 */
	void replaceData(AllThemeMediaResult &other);
	
	static AllThemeMediaResult fromJson(QJsonObject source);
	void setFromJson(QJsonObject source);
	QJsonObject toJson() const;
	
	// Properties

	QSharedPointer<ThemeMediaResult> themeVideosResult() const;

	void setThemeVideosResult(QSharedPointer<ThemeMediaResult> newThemeVideosResult);


	QSharedPointer<ThemeMediaResult> themeSongsResult() const;

	void setThemeSongsResult(QSharedPointer<ThemeMediaResult> newThemeSongsResult);


	QSharedPointer<ThemeMediaResult> soundtrackSongsResult() const;

	void setSoundtrackSongsResult(QSharedPointer<ThemeMediaResult> newSoundtrackSongsResult);


protected:
	QSharedPointer<ThemeMediaResult> m_themeVideosResult = QSharedPointer<ThemeMediaResult>();
	QSharedPointer<ThemeMediaResult> m_themeSongsResult = QSharedPointer<ThemeMediaResult>();
	QSharedPointer<ThemeMediaResult> m_soundtrackSongsResult = QSharedPointer<ThemeMediaResult>();
};

} // NS DTO

namespace Support {

using AllThemeMediaResult = Jellyfin::DTO::AllThemeMediaResult;

template <>
AllThemeMediaResult fromJsonValue(const QJsonValue &source, convertType<AllThemeMediaResult>);

template<>
QJsonValue toJsonValue(const AllThemeMediaResult &source, convertType<AllThemeMediaResult>);

} // NS DTO
} // NS Jellyfin

#endif // JELLYFIN_DTO_ALLTHEMEMEDIARESULT_H
