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

#include <JellyfinQt/dto/playstatecommand.h>

namespace Jellyfin {
namespace DTO {

PlaystateCommandClass::PlaystateCommandClass() {}

} // NS DTO

namespace Support {

using PlaystateCommand = Jellyfin::DTO::PlaystateCommand;

template <>
PlaystateCommand fromJsonValue(const QJsonValue &source, convertType<PlaystateCommand>) {
	if (!source.isString()) return PlaystateCommand::EnumNotSet;

	QString str = source.toString();
	if (str == QStringLiteral("Stop")) {
		return PlaystateCommand::Stop;
	}
	if (str == QStringLiteral("Pause")) {
		return PlaystateCommand::Pause;
	}
	if (str == QStringLiteral("Unpause")) {
		return PlaystateCommand::Unpause;
	}
	if (str == QStringLiteral("NextTrack")) {
		return PlaystateCommand::NextTrack;
	}
	if (str == QStringLiteral("PreviousTrack")) {
		return PlaystateCommand::PreviousTrack;
	}
	if (str == QStringLiteral("Seek")) {
		return PlaystateCommand::Seek;
	}
	if (str == QStringLiteral("Rewind")) {
		return PlaystateCommand::Rewind;
	}
	if (str == QStringLiteral("FastForward")) {
		return PlaystateCommand::FastForward;
	}
	if (str == QStringLiteral("PlayPause")) {
		return PlaystateCommand::PlayPause;
	}
	
	return PlaystateCommand::EnumNotSet;
}

template <>
QJsonValue toJsonValue(const PlaystateCommand &source, convertType<PlaystateCommand>) {
	switch(source) {
	case PlaystateCommand::Stop:
		return QStringLiteral("Stop");
	case PlaystateCommand::Pause:
		return QStringLiteral("Pause");
	case PlaystateCommand::Unpause:
		return QStringLiteral("Unpause");
	case PlaystateCommand::NextTrack:
		return QStringLiteral("NextTrack");
	case PlaystateCommand::PreviousTrack:
		return QStringLiteral("PreviousTrack");
	case PlaystateCommand::Seek:
		return QStringLiteral("Seek");
	case PlaystateCommand::Rewind:
		return QStringLiteral("Rewind");
	case PlaystateCommand::FastForward:
		return QStringLiteral("FastForward");
	case PlaystateCommand::PlayPause:
		return QStringLiteral("PlayPause");

	case PlaystateCommand::EnumNotSet: // Fallthrough
	default:
		return QJsonValue();
	}
}

} // NS DTO
} // NS Jellyfin
