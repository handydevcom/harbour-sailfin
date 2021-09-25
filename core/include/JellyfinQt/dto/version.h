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

#ifndef JELLYFIN_DTO_VERSION_H
#define JELLYFIN_DTO_VERSION_H

#include <QJsonObject>
#include <QJsonValue>
#include <optional>

#include "JellyfinQt/support/jsonconv.h"

namespace Jellyfin {
// Forward declaration
class ApiClient;
}
namespace Jellyfin {
namespace DTO {


class Version {
public:
	Version(	
		qint32 major,			
		qint32 minor,			
		qint32 build,			
		qint32 revision,			
		qint32 majorRevision,			
		qint32 minorRevision		
	);

	Version(const Version &other);
	
	/**
	 * Replaces the data being hold by this class with that of the other.
	 */
	void replaceData(Version &other);
	
	static Version fromJson(QJsonObject source);
	void setFromJson(QJsonObject source);
	QJsonObject toJson() const;
	
	// Properties

	qint32 major() const;

	void setMajor(qint32 newMajor);


	qint32 minor() const;

	void setMinor(qint32 newMinor);


	qint32 build() const;

	void setBuild(qint32 newBuild);


	qint32 revision() const;

	void setRevision(qint32 newRevision);


	qint32 majorRevision() const;

	void setMajorRevision(qint32 newMajorRevision);


	qint32 minorRevision() const;

	void setMinorRevision(qint32 newMinorRevision);


protected:
	qint32 m_major;
	qint32 m_minor;
	qint32 m_build;
	qint32 m_revision;
	qint32 m_majorRevision;
	qint32 m_minorRevision;

private:
	// Private constructor which generates an invalid object, for use withing Version::fromJson();
	Version();
};


} // NS DTO

namespace Support {

using Version = Jellyfin::DTO::Version;

template <>
Version fromJsonValue(const QJsonValue &source, convertType<Version>);

template<>
QJsonValue toJsonValue(const Version &source, convertType<Version>);

} // NS DTO
} // NS Jellyfin

#endif // JELLYFIN_DTO_VERSION_H
