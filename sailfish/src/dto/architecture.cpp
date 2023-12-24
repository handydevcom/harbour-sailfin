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

#include <JellyfinQt/dto/architecture.h>

namespace Jellyfin {
namespace DTO {

ArchitectureClass::ArchitectureClass() {}

} // NS DTO

namespace Support {

using Architecture = Jellyfin::DTO::Architecture;

template <>
Architecture fromJsonValue(const QJsonValue &source, convertType<Architecture>) {
	if (!source.isString()) return Architecture::EnumNotSet;

	QString str = source.toString();
	if (str == QStringLiteral("X86")) {
		return Architecture::X86;
	}
	if (str == QStringLiteral("X64")) {
		return Architecture::X64;
	}
	if (str == QStringLiteral("Arm")) {
		return Architecture::Arm;
	}
	if (str == QStringLiteral("Arm64")) {
		return Architecture::Arm64;
	}
	if (str == QStringLiteral("Wasm")) {
		return Architecture::Wasm;
	}
	
	return Architecture::EnumNotSet;
}

template <>
QJsonValue toJsonValue(const Architecture &source, convertType<Architecture>) {
	switch(source) {
	case Architecture::X86:
		return QStringLiteral("X86");
	case Architecture::X64:
		return QStringLiteral("X64");
	case Architecture::Arm:
		return QStringLiteral("Arm");
	case Architecture::Arm64:
		return QStringLiteral("Arm64");
	case Architecture::Wasm:
		return QStringLiteral("Wasm");

	case Architecture::EnumNotSet: // Fallthrough
	default:
		return QJsonValue();
	}
}

} // NS DTO
} // NS Jellyfin
