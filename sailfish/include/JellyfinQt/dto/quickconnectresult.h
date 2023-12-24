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

#ifndef JELLYFIN_DTO_QUICKCONNECTRESULT_H
#define JELLYFIN_DTO_QUICKCONNECTRESULT_H

#include <QDateTime>
#include <QJsonObject>
#include <QJsonValue>
#include <QString>
#include <optional>

#include "JellyfinQt/support/jsonconv.h"

namespace Jellyfin {
// Forward declaration
class ApiClient;
}
namespace Jellyfin {
namespace DTO {


class QuickConnectResult {
public:
	QuickConnectResult(	
		bool authenticated												
	);

	QuickConnectResult(const QuickConnectResult &other);
	
	/**
	 * Replaces the data being hold by this class with that of the other.
	 */
	void replaceData(QuickConnectResult &other);
	
	static QuickConnectResult fromJson(QJsonObject source);
	void setFromJson(QJsonObject source);
	QJsonObject toJson() const;
	
	// Properties
	/**
	 * @brief Gets a value indicating whether this request is authorized.
	 */
	bool authenticated() const;
	/**
	* @brief Gets a value indicating whether this request is authorized.
	*/
	void setAuthenticated(bool newAuthenticated);

	/**
	 * @brief Gets or sets the secret value used to uniquely identify this request. Can be used to retrieve authentication information.
	 */
	QString secret() const;
	/**
	* @brief Gets or sets the secret value used to uniquely identify this request. Can be used to retrieve authentication information.
	*/
	void setSecret(QString newSecret);
	bool secretNull() const;
	void setSecretNull();

	/**
	 * @brief Gets or sets the user facing code used so the user can quickly differentiate this request from others.
	 */
	QString code() const;
	/**
	* @brief Gets or sets the user facing code used so the user can quickly differentiate this request from others.
	*/
	void setCode(QString newCode);
	bool codeNull() const;
	void setCodeNull();

	/**
	 * @brief Gets or sets the private access token.
	 */
	QString authentication() const;
	/**
	* @brief Gets or sets the private access token.
	*/
	void setAuthentication(QString newAuthentication);
	bool authenticationNull() const;
	void setAuthenticationNull();

	/**
	 * @brief Gets or sets an error message.
	 */
	QString error() const;
	/**
	* @brief Gets or sets an error message.
	*/
	void setError(QString newError);
	bool errorNull() const;
	void setErrorNull();

	/**
	 * @brief Gets or sets the DateTime that this request was created.
	 */
	QDateTime dateAdded() const;
	/**
	* @brief Gets or sets the DateTime that this request was created.
	*/
	void setDateAdded(QDateTime newDateAdded);
	bool dateAddedNull() const;
	void setDateAddedNull();


protected:
	bool m_authenticated;
	QString m_secret;
	QString m_code;
	QString m_authentication;
	QString m_error;
	QDateTime m_dateAdded;

private:
	// Private constructor which generates an invalid object, for use withing QuickConnectResult::fromJson();
	QuickConnectResult();
};


} // NS DTO

namespace Support {

using QuickConnectResult = Jellyfin::DTO::QuickConnectResult;

template <>
QuickConnectResult fromJsonValue(const QJsonValue &source, convertType<QuickConnectResult>);

template<>
QJsonValue toJsonValue(const QuickConnectResult &source, convertType<QuickConnectResult>);

} // NS DTO
} // NS Jellyfin

#endif // JELLYFIN_DTO_QUICKCONNECTRESULT_H
