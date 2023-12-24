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

#include <JellyfinQt/dto/playcommand.h>

namespace Jellyfin {
namespace DTO {

PlayCommandClass::PlayCommandClass() {}

} // NS DTO

namespace Support {

using PlayCommand = Jellyfin::DTO::PlayCommand;

template <>
PlayCommand fromJsonValue(const QJsonValue &source, convertType<PlayCommand>) {
	if (!source.isString()) return PlayCommand::EnumNotSet;

	QString str = source.toString();
	if (str == QStringLiteral("PlayNow")) {
		return PlayCommand::PlayNow;
	}
	if (str == QStringLiteral("PlayNext")) {
		return PlayCommand::PlayNext;
	}
	if (str == QStringLiteral("PlayLast")) {
		return PlayCommand::PlayLast;
	}
	if (str == QStringLiteral("PlayInstantMix")) {
		return PlayCommand::PlayInstantMix;
	}
	if (str == QStringLiteral("PlayShuffle")) {
		return PlayCommand::PlayShuffle;
	}
	
	return PlayCommand::EnumNotSet;
}

template <>
QJsonValue toJsonValue(const PlayCommand &source, convertType<PlayCommand>) {
	switch(source) {
	case PlayCommand::PlayNow:
		return QStringLiteral("PlayNow");
	case PlayCommand::PlayNext:
		return QStringLiteral("PlayNext");
	case PlayCommand::PlayLast:
		return QStringLiteral("PlayLast");
	case PlayCommand::PlayInstantMix:
		return QStringLiteral("PlayInstantMix");
	case PlayCommand::PlayShuffle:
		return QStringLiteral("PlayShuffle");

	case PlayCommand::EnumNotSet: // Fallthrough
	default:
		return QJsonValue();
	}
}

} // NS DTO
} // NS Jellyfin
