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

#include <JellyfinQt/dto/subtitleplaybackmode.h>

namespace Jellyfin {
namespace DTO {

SubtitlePlaybackModeClass::SubtitlePlaybackModeClass() {}

} // NS DTO

namespace Support {

using SubtitlePlaybackMode = Jellyfin::DTO::SubtitlePlaybackMode;

template <>
SubtitlePlaybackMode fromJsonValue(const QJsonValue &source, convertType<SubtitlePlaybackMode>) {
	if (!source.isString()) return SubtitlePlaybackMode::EnumNotSet;

	QString str = source.toString();
	if (str == QStringLiteral("Default")) {
		return SubtitlePlaybackMode::Default;
	}
	if (str == QStringLiteral("Always")) {
		return SubtitlePlaybackMode::Always;
	}
	if (str == QStringLiteral("OnlyForced")) {
		return SubtitlePlaybackMode::OnlyForced;
	}
	if (str == QStringLiteral("None")) {
		return SubtitlePlaybackMode::None;
	}
	if (str == QStringLiteral("Smart")) {
		return SubtitlePlaybackMode::Smart;
	}
	
	return SubtitlePlaybackMode::EnumNotSet;
}

template <>
QJsonValue toJsonValue(const SubtitlePlaybackMode &source, convertType<SubtitlePlaybackMode>) {
	switch(source) {
	case SubtitlePlaybackMode::Default:
		return QStringLiteral("Default");
	case SubtitlePlaybackMode::Always:
		return QStringLiteral("Always");
	case SubtitlePlaybackMode::OnlyForced:
		return QStringLiteral("OnlyForced");
	case SubtitlePlaybackMode::None:
		return QStringLiteral("None");
	case SubtitlePlaybackMode::Smart:
		return QStringLiteral("Smart");

	case SubtitlePlaybackMode::EnumNotSet: // Fallthrough
	default:
		return QJsonValue();
	}
}

} // NS DTO
} // NS Jellyfin
