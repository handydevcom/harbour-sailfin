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

#include <JellyfinQt/loader/requesttypes.h>

namespace Jellyfin {
namespace Loader {

using namespace Jellyfin::DTO;

// ActivateParams



// AddListingProviderParams

const QString &AddListingProviderParams::pw() const {
	return m_pw;
}

void AddListingProviderParams::setPw(QString newPw)  {
	m_pw = newPw;
}

bool AddListingProviderParams::pwNull() const {
	// Nullable: true
	// Type Nullable: true
	

	return m_pw.isNull();
}

void AddListingProviderParams::setPwNull() {
	m_pw.clear();
}


const bool &AddListingProviderParams::validateListings() const {
	return m_validateListings.value();
}

void AddListingProviderParams::setValidateListings(bool newValidateListings)  {
	m_validateListings = newValidateListings;
}

bool AddListingProviderParams::validateListingsNull() const {
	// Nullable: false
	// Type Nullable: false
	

	return !m_validateListings.has_value();
}

void AddListingProviderParams::setValidateListingsNull() {
	m_validateListings = std::nullopt;
}


const bool &AddListingProviderParams::validateLogin() const {
	return m_validateLogin.value();
}

void AddListingProviderParams::setValidateLogin(bool newValidateLogin)  {
	m_validateLogin = newValidateLogin;
}

bool AddListingProviderParams::validateLoginNull() const {
	// Nullable: false
	// Type Nullable: false
	

	return !m_validateLogin.has_value();
}

void AddListingProviderParams::setValidateLoginNull() {
	m_validateLogin = std::nullopt;
}


const QSharedPointer<ListingsProviderInfo> &AddListingProviderParams::body() const {
	return m_body;
}

void AddListingProviderParams::setBody(QSharedPointer<ListingsProviderInfo> newBody) {
	m_body = newBody;
}




// AddMediaPathParams

const bool &AddMediaPathParams::refreshLibrary() const {
	return m_refreshLibrary.value();
}

void AddMediaPathParams::setRefreshLibrary(bool newRefreshLibrary)  {
	m_refreshLibrary = newRefreshLibrary;
}

bool AddMediaPathParams::refreshLibraryNull() const {
	// Nullable: false
	// Type Nullable: false
	

	return !m_refreshLibrary.has_value();
}

void AddMediaPathParams::setRefreshLibraryNull() {
	m_refreshLibrary = std::nullopt;
}


const QSharedPointer<MediaPathDto> &AddMediaPathParams::body() const {
	return m_body;
}

void AddMediaPathParams::setBody(QSharedPointer<MediaPathDto> newBody) {
	m_body = newBody;
}




// AddToCollectionParams

const QString &AddToCollectionParams::collectionId() const {
	return m_collectionId;
}

void AddToCollectionParams::setCollectionId(QString newCollectionId) {
	m_collectionId = newCollectionId;
}


const QStringList &AddToCollectionParams::ids() const {
	return m_ids;
}

void AddToCollectionParams::setIds(QStringList newIds) {
	m_ids = newIds;
}




// AddToPlaylistParams

const QString &AddToPlaylistParams::playlistId() const {
	return m_playlistId;
}

void AddToPlaylistParams::setPlaylistId(QString newPlaylistId) {
	m_playlistId = newPlaylistId;
}


const QStringList &AddToPlaylistParams::ids() const {
	return m_ids;
}

void AddToPlaylistParams::setIds(QStringList newIds)  {
	m_ids = newIds;
}

bool AddToPlaylistParams::idsNull() const {
	// Nullable: true
	// Type Nullable: true
	

	return m_ids.size() == 0;
}

void AddToPlaylistParams::setIdsNull() {
	m_ids.clear();
}


const QString &AddToPlaylistParams::userId() const {
	return m_userId;
}

void AddToPlaylistParams::setUserId(QString newUserId)  {
	m_userId = newUserId;
}

bool AddToPlaylistParams::userIdNull() const {
	// Nullable: true
	// Type Nullable: true
	

	return m_userId.isNull();
}

void AddToPlaylistParams::setUserIdNull() {
	m_userId.clear();
}




// AddTunerHostParams

const QSharedPointer<TunerHostInfo> &AddTunerHostParams::body() const {
	return m_body;
}

void AddTunerHostParams::setBody(QSharedPointer<TunerHostInfo> newBody) {
	m_body = newBody;
}




// AddUserToSessionParams

const QString &AddUserToSessionParams::sessionId() const {
	return m_sessionId;
}

void AddUserToSessionParams::setSessionId(QString newSessionId) {
	m_sessionId = newSessionId;
}


const QString &AddUserToSessionParams::userId() const {
	return m_userId;
}

void AddUserToSessionParams::setUserId(QString newUserId) {
	m_userId = newUserId;
}




// AddVirtualFolderParams

const QString &AddVirtualFolderParams::collectionType() const {
	return m_collectionType;
}

void AddVirtualFolderParams::setCollectionType(QString newCollectionType)  {
	m_collectionType = newCollectionType;
}

bool AddVirtualFolderParams::collectionTypeNull() const {
	// Nullable: true
	// Type Nullable: true
	

	return m_collectionType.isNull();
}

void AddVirtualFolderParams::setCollectionTypeNull() {
	m_collectionType.clear();
}


const QString &AddVirtualFolderParams::name() const {
	return m_name;
}

void AddVirtualFolderParams::setName(QString newName)  {
	m_name = newName;
}

bool AddVirtualFolderParams::nameNull() const {
	// Nullable: true
	// Type Nullable: true
	

	return m_name.isNull();
}

void AddVirtualFolderParams::setNameNull() {
	m_name.clear();
}


const QStringList &AddVirtualFolderParams::paths() const {
	return m_paths;
}

void AddVirtualFolderParams::setPaths(QStringList newPaths)  {
	m_paths = newPaths;
}

bool AddVirtualFolderParams::pathsNull() const {
	// Nullable: true
	// Type Nullable: true
	

	return m_paths.size() == 0;
}

void AddVirtualFolderParams::setPathsNull() {
	m_paths.clear();
}


const bool &AddVirtualFolderParams::refreshLibrary() const {
	return m_refreshLibrary.value();
}

void AddVirtualFolderParams::setRefreshLibrary(bool newRefreshLibrary)  {
	m_refreshLibrary = newRefreshLibrary;
}

bool AddVirtualFolderParams::refreshLibraryNull() const {
	// Nullable: false
	// Type Nullable: false
	

	return !m_refreshLibrary.has_value();
}

void AddVirtualFolderParams::setRefreshLibraryNull() {
	m_refreshLibrary = std::nullopt;
}


const QSharedPointer<AddVirtualFolderDto> &AddVirtualFolderParams::body() const {
	return m_body;
}

void AddVirtualFolderParams::setBody(QSharedPointer<AddVirtualFolderDto> newBody) {
	m_body = newBody;
}




// ApplySearchCriteriaParams

const QString &ApplySearchCriteriaParams::itemId() const {
	return m_itemId;
}

void ApplySearchCriteriaParams::setItemId(QString newItemId) {
	m_itemId = newItemId;
}


const bool &ApplySearchCriteriaParams::replaceAllImages() const {
	return m_replaceAllImages.value();
}

void ApplySearchCriteriaParams::setReplaceAllImages(bool newReplaceAllImages)  {
	m_replaceAllImages = newReplaceAllImages;
}

bool ApplySearchCriteriaParams::replaceAllImagesNull() const {
	// Nullable: false
	// Type Nullable: false
	

	return !m_replaceAllImages.has_value();
}

void ApplySearchCriteriaParams::setReplaceAllImagesNull() {
	m_replaceAllImages = std::nullopt;
}


const QSharedPointer<RemoteSearchResult> &ApplySearchCriteriaParams::body() const {
	return m_body;
}

void ApplySearchCriteriaParams::setBody(QSharedPointer<RemoteSearchResult> newBody) {
	m_body = newBody;
}




// AuthenticateUserParams

const QString &AuthenticateUserParams::userId() const {
	return m_userId;
}

void AuthenticateUserParams::setUserId(QString newUserId) {
	m_userId = newUserId;
}


const QString &AuthenticateUserParams::pw() const {
	return m_pw;
}

void AuthenticateUserParams::setPw(QString newPw) {
	m_pw = newPw;
}


const QString &AuthenticateUserParams::password() const {
	return m_password;
}

void AuthenticateUserParams::setPassword(QString newPassword)  {
	m_password = newPassword;
}

bool AuthenticateUserParams::passwordNull() const {
	// Nullable: true
	// Type Nullable: true
	

	return m_password.isNull();
}

void AuthenticateUserParams::setPasswordNull() {
	m_password.clear();
}




// AuthenticateUserByNameParams

const QSharedPointer<AuthenticateUserByName> &AuthenticateUserByNameParams::body() const {
	return m_body;
}

void AuthenticateUserByNameParams::setBody(QSharedPointer<AuthenticateUserByName> newBody) {
	m_body = newBody;
}




// AuthenticateWithQuickConnectParams

const QSharedPointer<QuickConnectDto> &AuthenticateWithQuickConnectParams::body() const {
	return m_body;
}

void AuthenticateWithQuickConnectParams::setBody(QSharedPointer<QuickConnectDto> newBody) {
	m_body = newBody;
}




// AuthorizeParams

const QString &AuthorizeParams::code() const {
	return m_code;
}

void AuthorizeParams::setCode(QString newCode) {
	m_code = newCode;
}




// AvailableParams

const QuickConnectState &AvailableParams::status() const {
	return m_status;
}

void AvailableParams::setStatus(QuickConnectState newStatus)  {
	m_status = newStatus;
}

bool AvailableParams::statusNull() const {
	// Nullable: true
	// Type Nullable: true
	

	return m_status== QuickConnectState::EnumNotSet;
}

void AvailableParams::setStatusNull() {
	m_status= QuickConnectState::EnumNotSet;
}




// CancelPackageInstallationParams

const QString &CancelPackageInstallationParams::packageId() const {
	return m_packageId;
}

void CancelPackageInstallationParams::setPackageId(QString newPackageId) {
	m_packageId = newPackageId;
}




// CancelSeriesTimerParams

const QString &CancelSeriesTimerParams::timerId() const {
	return m_timerId;
}

void CancelSeriesTimerParams::setTimerId(QString newTimerId) {
	m_timerId = newTimerId;
}




// CancelTimerParams

const QString &CancelTimerParams::timerId() const {
	return m_timerId;
}

void CancelTimerParams::setTimerId(QString newTimerId) {
	m_timerId = newTimerId;
}




// CloseLiveStreamParams

const QString &CloseLiveStreamParams::liveStreamId() const {
	return m_liveStreamId;
}

void CloseLiveStreamParams::setLiveStreamId(QString newLiveStreamId) {
	m_liveStreamId = newLiveStreamId;
}




// CompleteWizardParams



// ConnectParams

const QString &ConnectParams::secret() const {
	return m_secret;
}

void ConnectParams::setSecret(QString newSecret) {
	m_secret = newSecret;
}




// CreateAdminNotificationParams

const QString &CreateAdminNotificationParams::description() const {
	return m_description;
}

void CreateAdminNotificationParams::setDescription(QString newDescription)  {
	m_description = newDescription;
}

bool CreateAdminNotificationParams::descriptionNull() const {
	// Nullable: true
	// Type Nullable: true
	

	return m_description.isNull();
}

void CreateAdminNotificationParams::setDescriptionNull() {
	m_description.clear();
}


const NotificationLevel &CreateAdminNotificationParams::level() const {
	return m_level;
}

void CreateAdminNotificationParams::setLevel(NotificationLevel newLevel)  {
	m_level = newLevel;
}

bool CreateAdminNotificationParams::levelNull() const {
	// Nullable: true
	// Type Nullable: true
	

	return m_level== NotificationLevel::EnumNotSet;
}

void CreateAdminNotificationParams::setLevelNull() {
	m_level= NotificationLevel::EnumNotSet;
}


const QString &CreateAdminNotificationParams::name() const {
	return m_name;
}

void CreateAdminNotificationParams::setName(QString newName)  {
	m_name = newName;
}

bool CreateAdminNotificationParams::nameNull() const {
	// Nullable: true
	// Type Nullable: true
	

	return m_name.isNull();
}

void CreateAdminNotificationParams::setNameNull() {
	m_name.clear();
}


const QString &CreateAdminNotificationParams::url() const {
	return m_url;
}

void CreateAdminNotificationParams::setUrl(QString newUrl)  {
	m_url = newUrl;
}

bool CreateAdminNotificationParams::urlNull() const {
	// Nullable: true
	// Type Nullable: true
	

	return m_url.isNull();
}

void CreateAdminNotificationParams::setUrlNull() {
	m_url.clear();
}




// CreateCollectionParams

const QStringList &CreateCollectionParams::ids() const {
	return m_ids;
}

void CreateCollectionParams::setIds(QStringList newIds)  {
	m_ids = newIds;
}

bool CreateCollectionParams::idsNull() const {
	// Nullable: true
	// Type Nullable: true
	

	return m_ids.size() == 0;
}

void CreateCollectionParams::setIdsNull() {
	m_ids.clear();
}


const bool &CreateCollectionParams::isLocked() const {
	return m_isLocked.value();
}

void CreateCollectionParams::setIsLocked(bool newIsLocked)  {
	m_isLocked = newIsLocked;
}

bool CreateCollectionParams::isLockedNull() const {
	// Nullable: false
	// Type Nullable: false
	

	return !m_isLocked.has_value();
}

void CreateCollectionParams::setIsLockedNull() {
	m_isLocked = std::nullopt;
}


const QString &CreateCollectionParams::name() const {
	return m_name;
}

void CreateCollectionParams::setName(QString newName)  {
	m_name = newName;
}

bool CreateCollectionParams::nameNull() const {
	// Nullable: true
	// Type Nullable: true
	

	return m_name.isNull();
}

void CreateCollectionParams::setNameNull() {
	m_name.clear();
}


const QString &CreateCollectionParams::parentId() const {
	return m_parentId;
}

void CreateCollectionParams::setParentId(QString newParentId)  {
	m_parentId = newParentId;
}

bool CreateCollectionParams::parentIdNull() const {
	// Nullable: true
	// Type Nullable: true
	

	return m_parentId.isNull();
}

void CreateCollectionParams::setParentIdNull() {
	m_parentId.clear();
}




// CreateKeyParams

const QString &CreateKeyParams::app() const {
	return m_app;
}

void CreateKeyParams::setApp(QString newApp) {
	m_app = newApp;
}




// CreatePlaylistParams

const QStringList &CreatePlaylistParams::ids() const {
	return m_ids;
}

void CreatePlaylistParams::setIds(QStringList newIds)  {
	m_ids = newIds;
}

bool CreatePlaylistParams::idsNull() const {
	// Nullable: true
	// Type Nullable: true
	

	return m_ids.size() == 0;
}

void CreatePlaylistParams::setIdsNull() {
	m_ids.clear();
}


const QString &CreatePlaylistParams::mediaType() const {
	return m_mediaType;
}

void CreatePlaylistParams::setMediaType(QString newMediaType)  {
	m_mediaType = newMediaType;
}

bool CreatePlaylistParams::mediaTypeNull() const {
	// Nullable: true
	// Type Nullable: true
	

	return m_mediaType.isNull();
}

void CreatePlaylistParams::setMediaTypeNull() {
	m_mediaType.clear();
}


const QString &CreatePlaylistParams::name() const {
	return m_name;
}

void CreatePlaylistParams::setName(QString newName)  {
	m_name = newName;
}

bool CreatePlaylistParams::nameNull() const {
	// Nullable: true
	// Type Nullable: true
	

	return m_name.isNull();
}

void CreatePlaylistParams::setNameNull() {
	m_name.clear();
}


const QString &CreatePlaylistParams::userId() const {
	return m_userId;
}

void CreatePlaylistParams::setUserId(QString newUserId)  {
	m_userId = newUserId;
}

bool CreatePlaylistParams::userIdNull() const {
	// Nullable: true
	// Type Nullable: true
	

	return m_userId.isNull();
}

void CreatePlaylistParams::setUserIdNull() {
	m_userId.clear();
}


const QSharedPointer<CreatePlaylistDto> &CreatePlaylistParams::body() const {
	return m_body;
}

void CreatePlaylistParams::setBody(QSharedPointer<CreatePlaylistDto> newBody) {
	m_body = newBody;
}




// CreateProfileParams

const QSharedPointer<DeviceProfile> &CreateProfileParams::body() const {
	return m_body;
}

void CreateProfileParams::setBody(QSharedPointer<DeviceProfile> newBody) {
	m_body = newBody;
}




// CreateSeriesTimerParams

const QSharedPointer<SeriesTimerInfoDto> &CreateSeriesTimerParams::body() const {
	return m_body;
}

void CreateSeriesTimerParams::setBody(QSharedPointer<SeriesTimerInfoDto> newBody) {
	m_body = newBody;
}




// CreateTimerParams

const QSharedPointer<TimerInfoDto> &CreateTimerParams::body() const {
	return m_body;
}

void CreateTimerParams::setBody(QSharedPointer<TimerInfoDto> newBody) {
	m_body = newBody;
}




// CreateUserByNameParams

const QSharedPointer<CreateUserByName> &CreateUserByNameParams::body() const {
	return m_body;
}

void CreateUserByNameParams::setBody(QSharedPointer<CreateUserByName> newBody) {
	m_body = newBody;
}




// DeauthorizeParams



// DeleteAlternateSourcesParams

const QString &DeleteAlternateSourcesParams::itemId() const {
	return m_itemId;
}

void DeleteAlternateSourcesParams::setItemId(QString newItemId) {
	m_itemId = newItemId;
}




// DeleteDeviceParams

const QString &DeleteDeviceParams::jellyfinId() const {
	return m_jellyfinId;
}

void DeleteDeviceParams::setJellyfinId(QString newJellyfinId) {
	m_jellyfinId = newJellyfinId;
}




// DeleteItemParams

const QString &DeleteItemParams::itemId() const {
	return m_itemId;
}

void DeleteItemParams::setItemId(QString newItemId) {
	m_itemId = newItemId;
}




// DeleteItemImageParams

const ImageType &DeleteItemImageParams::imageType() const {
	return m_imageType;
}

void DeleteItemImageParams::setImageType(ImageType newImageType) {
	m_imageType = newImageType;
}


const QString &DeleteItemImageParams::itemId() const {
	return m_itemId;
}

void DeleteItemImageParams::setItemId(QString newItemId) {
	m_itemId = newItemId;
}


const qint32 &DeleteItemImageParams::imageIndex() const {
	return m_imageIndex.value();
}

void DeleteItemImageParams::setImageIndex(qint32 newImageIndex)  {
	m_imageIndex = newImageIndex;
}

bool DeleteItemImageParams::imageIndexNull() const {
	// Nullable: true
	// Type Nullable: false
	

	return !m_imageIndex.has_value();
}

void DeleteItemImageParams::setImageIndexNull() {
	m_imageIndex = std::nullopt;
}




// DeleteItemImageByIndexParams

const qint32 &DeleteItemImageByIndexParams::imageIndex() const {
	return m_imageIndex;
}

void DeleteItemImageByIndexParams::setImageIndex(qint32 newImageIndex) {
	m_imageIndex = newImageIndex;
}


const ImageType &DeleteItemImageByIndexParams::imageType() const {
	return m_imageType;
}

void DeleteItemImageByIndexParams::setImageType(ImageType newImageType) {
	m_imageType = newImageType;
}


const QString &DeleteItemImageByIndexParams::itemId() const {
	return m_itemId;
}

void DeleteItemImageByIndexParams::setItemId(QString newItemId) {
	m_itemId = newItemId;
}




// DeleteItemsParams

const QStringList &DeleteItemsParams::ids() const {
	return m_ids;
}

void DeleteItemsParams::setIds(QStringList newIds)  {
	m_ids = newIds;
}

bool DeleteItemsParams::idsNull() const {
	// Nullable: true
	// Type Nullable: true
	

	return m_ids.size() == 0;
}

void DeleteItemsParams::setIdsNull() {
	m_ids.clear();
}




// DeleteListingProviderParams

const QString &DeleteListingProviderParams::jellyfinId() const {
	return m_jellyfinId;
}

void DeleteListingProviderParams::setJellyfinId(QString newJellyfinId)  {
	m_jellyfinId = newJellyfinId;
}

bool DeleteListingProviderParams::jellyfinIdNull() const {
	// Nullable: true
	// Type Nullable: true
	

	return m_jellyfinId.isNull();
}

void DeleteListingProviderParams::setJellyfinIdNull() {
	m_jellyfinId.clear();
}




// DeleteProfileParams

const QString &DeleteProfileParams::profileId() const {
	return m_profileId;
}

void DeleteProfileParams::setProfileId(QString newProfileId) {
	m_profileId = newProfileId;
}




// DeleteRecordingParams

const QString &DeleteRecordingParams::recordingId() const {
	return m_recordingId;
}

void DeleteRecordingParams::setRecordingId(QString newRecordingId) {
	m_recordingId = newRecordingId;
}




// DeleteSubtitleParams

const qint32 &DeleteSubtitleParams::index() const {
	return m_index;
}

void DeleteSubtitleParams::setIndex(qint32 newIndex) {
	m_index = newIndex;
}


const QString &DeleteSubtitleParams::itemId() const {
	return m_itemId;
}

void DeleteSubtitleParams::setItemId(QString newItemId) {
	m_itemId = newItemId;
}




// DeleteTunerHostParams

const QString &DeleteTunerHostParams::jellyfinId() const {
	return m_jellyfinId;
}

void DeleteTunerHostParams::setJellyfinId(QString newJellyfinId)  {
	m_jellyfinId = newJellyfinId;
}

bool DeleteTunerHostParams::jellyfinIdNull() const {
	// Nullable: true
	// Type Nullable: true
	

	return m_jellyfinId.isNull();
}

void DeleteTunerHostParams::setJellyfinIdNull() {
	m_jellyfinId.clear();
}




// DeleteUserParams

const QString &DeleteUserParams::userId() const {
	return m_userId;
}

void DeleteUserParams::setUserId(QString newUserId) {
	m_userId = newUserId;
}




// DeleteUserImageParams

const ImageType &DeleteUserImageParams::imageType() const {
	return m_imageType;
}

void DeleteUserImageParams::setImageType(ImageType newImageType) {
	m_imageType = newImageType;
}


const QString &DeleteUserImageParams::userId() const {
	return m_userId;
}

void DeleteUserImageParams::setUserId(QString newUserId) {
	m_userId = newUserId;
}


const qint32 &DeleteUserImageParams::index() const {
	return m_index.value();
}

void DeleteUserImageParams::setIndex(qint32 newIndex)  {
	m_index = newIndex;
}

bool DeleteUserImageParams::indexNull() const {
	// Nullable: true
	// Type Nullable: false
	

	return !m_index.has_value();
}

void DeleteUserImageParams::setIndexNull() {
	m_index = std::nullopt;
}




// DeleteUserImageByIndexParams

const ImageType &DeleteUserImageByIndexParams::imageType() const {
	return m_imageType;
}

void DeleteUserImageByIndexParams::setImageType(ImageType newImageType) {
	m_imageType = newImageType;
}


const qint32 &DeleteUserImageByIndexParams::index() const {
	return m_index;
}

void DeleteUserImageByIndexParams::setIndex(qint32 newIndex) {
	m_index = newIndex;
}


const QString &DeleteUserImageByIndexParams::userId() const {
	return m_userId;
}

void DeleteUserImageByIndexParams::setUserId(QString newUserId) {
	m_userId = newUserId;
}




// DeleteUserItemRatingParams

const QString &DeleteUserItemRatingParams::itemId() const {
	return m_itemId;
}

void DeleteUserItemRatingParams::setItemId(QString newItemId) {
	m_itemId = newItemId;
}


const QString &DeleteUserItemRatingParams::userId() const {
	return m_userId;
}

void DeleteUserItemRatingParams::setUserId(QString newUserId) {
	m_userId = newUserId;
}




// DisablePluginParams

const QString &DisablePluginParams::pluginId() const {
	return m_pluginId;
}

void DisablePluginParams::setPluginId(QString newPluginId) {
	m_pluginId = newPluginId;
}


const QSharedPointer<Version> &DisablePluginParams::version() const {
	return m_version;
}

void DisablePluginParams::setVersion(QSharedPointer<Version> newVersion) {
	m_version = newVersion;
}




// DiscoverTunersParams

const bool &DiscoverTunersParams::newDevicesOnly() const {
	return m_newDevicesOnly.value();
}

void DiscoverTunersParams::setNewDevicesOnly(bool newNewDevicesOnly)  {
	m_newDevicesOnly = newNewDevicesOnly;
}

bool DiscoverTunersParams::newDevicesOnlyNull() const {
	// Nullable: false
	// Type Nullable: false
	

	return !m_newDevicesOnly.has_value();
}

void DiscoverTunersParams::setNewDevicesOnlyNull() {
	m_newDevicesOnly = std::nullopt;
}




// DiscvoverTunersParams

const bool &DiscvoverTunersParams::newDevicesOnly() const {
	return m_newDevicesOnly.value();
}

void DiscvoverTunersParams::setNewDevicesOnly(bool newNewDevicesOnly)  {
	m_newDevicesOnly = newNewDevicesOnly;
}

bool DiscvoverTunersParams::newDevicesOnlyNull() const {
	// Nullable: false
	// Type Nullable: false
	

	return !m_newDevicesOnly.has_value();
}

void DiscvoverTunersParams::setNewDevicesOnlyNull() {
	m_newDevicesOnly = std::nullopt;
}




// DisplayContentParams

const QString &DisplayContentParams::sessionId() const {
	return m_sessionId;
}

void DisplayContentParams::setSessionId(QString newSessionId) {
	m_sessionId = newSessionId;
}


const QString &DisplayContentParams::itemId() const {
	return m_itemId;
}

void DisplayContentParams::setItemId(QString newItemId) {
	m_itemId = newItemId;
}


const QString &DisplayContentParams::itemName() const {
	return m_itemName;
}

void DisplayContentParams::setItemName(QString newItemName) {
	m_itemName = newItemName;
}


const QString &DisplayContentParams::itemType() const {
	return m_itemType;
}

void DisplayContentParams::setItemType(QString newItemType) {
	m_itemType = newItemType;
}




// DownloadRemoteImageParams

const QString &DownloadRemoteImageParams::itemId() const {
	return m_itemId;
}

void DownloadRemoteImageParams::setItemId(QString newItemId) {
	m_itemId = newItemId;
}


const ImageType &DownloadRemoteImageParams::type() const {
	return m_type;
}

void DownloadRemoteImageParams::setType(ImageType newType) {
	m_type = newType;
}


const QString &DownloadRemoteImageParams::imageUrl() const {
	return m_imageUrl;
}

void DownloadRemoteImageParams::setImageUrl(QString newImageUrl)  {
	m_imageUrl = newImageUrl;
}

bool DownloadRemoteImageParams::imageUrlNull() const {
	// Nullable: true
	// Type Nullable: true
	

	return m_imageUrl.isNull();
}

void DownloadRemoteImageParams::setImageUrlNull() {
	m_imageUrl.clear();
}




// DownloadRemoteSubtitlesParams

const QString &DownloadRemoteSubtitlesParams::itemId() const {
	return m_itemId;
}

void DownloadRemoteSubtitlesParams::setItemId(QString newItemId) {
	m_itemId = newItemId;
}


const QString &DownloadRemoteSubtitlesParams::subtitleId() const {
	return m_subtitleId;
}

void DownloadRemoteSubtitlesParams::setSubtitleId(QString newSubtitleId) {
	m_subtitleId = newSubtitleId;
}




// EnablePluginParams

const QString &EnablePluginParams::pluginId() const {
	return m_pluginId;
}

void EnablePluginParams::setPluginId(QString newPluginId) {
	m_pluginId = newPluginId;
}


const QSharedPointer<Version> &EnablePluginParams::version() const {
	return m_version;
}

void EnablePluginParams::setVersion(QSharedPointer<Version> newVersion) {
	m_version = newVersion;
}




// ForgotPasswordParams

const QSharedPointer<ForgotPasswordDto> &ForgotPasswordParams::body() const {
	return m_body;
}

void ForgotPasswordParams::setBody(QSharedPointer<ForgotPasswordDto> newBody) {
	m_body = newBody;
}




// ForgotPasswordPinParams

const QString &ForgotPasswordPinParams::body() const {
	return m_body;
}

void ForgotPasswordPinParams::setBody(QString newBody) {
	m_body = newBody;
}




// GetParams

const QString &GetParams::searchTerm() const {
	return m_searchTerm;
}

void GetParams::setSearchTerm(QString newSearchTerm) {
	m_searchTerm = newSearchTerm;
}


const QStringList &GetParams::excludeItemTypes() const {
	return m_excludeItemTypes;
}

void GetParams::setExcludeItemTypes(QStringList newExcludeItemTypes)  {
	m_excludeItemTypes = newExcludeItemTypes;
}

bool GetParams::excludeItemTypesNull() const {
	// Nullable: true
	// Type Nullable: true
	

	return m_excludeItemTypes.size() == 0;
}

void GetParams::setExcludeItemTypesNull() {
	m_excludeItemTypes.clear();
}


const bool &GetParams::includeArtists() const {
	return m_includeArtists.value();
}

void GetParams::setIncludeArtists(bool newIncludeArtists)  {
	m_includeArtists = newIncludeArtists;
}

bool GetParams::includeArtistsNull() const {
	// Nullable: false
	// Type Nullable: false
	

	return !m_includeArtists.has_value();
}

void GetParams::setIncludeArtistsNull() {
	m_includeArtists = std::nullopt;
}


const bool &GetParams::includeGenres() const {
	return m_includeGenres.value();
}

void GetParams::setIncludeGenres(bool newIncludeGenres)  {
	m_includeGenres = newIncludeGenres;
}

bool GetParams::includeGenresNull() const {
	// Nullable: false
	// Type Nullable: false
	

	return !m_includeGenres.has_value();
}

void GetParams::setIncludeGenresNull() {
	m_includeGenres = std::nullopt;
}


const QStringList &GetParams::includeItemTypes() const {
	return m_includeItemTypes;
}

void GetParams::setIncludeItemTypes(QStringList newIncludeItemTypes)  {
	m_includeItemTypes = newIncludeItemTypes;
}

bool GetParams::includeItemTypesNull() const {
	// Nullable: true
	// Type Nullable: true
	

	return m_includeItemTypes.size() == 0;
}

void GetParams::setIncludeItemTypesNull() {
	m_includeItemTypes.clear();
}


const bool &GetParams::includeMedia() const {
	return m_includeMedia.value();
}

void GetParams::setIncludeMedia(bool newIncludeMedia)  {
	m_includeMedia = newIncludeMedia;
}

bool GetParams::includeMediaNull() const {
	// Nullable: false
	// Type Nullable: false
	

	return !m_includeMedia.has_value();
}

void GetParams::setIncludeMediaNull() {
	m_includeMedia = std::nullopt;
}


const bool &GetParams::includePeople() const {
	return m_includePeople.value();
}

void GetParams::setIncludePeople(bool newIncludePeople)  {
	m_includePeople = newIncludePeople;
}

bool GetParams::includePeopleNull() const {
	// Nullable: false
	// Type Nullable: false
	

	return !m_includePeople.has_value();
}

void GetParams::setIncludePeopleNull() {
	m_includePeople = std::nullopt;
}


const bool &GetParams::includeStudios() const {
	return m_includeStudios.value();
}

void GetParams::setIncludeStudios(bool newIncludeStudios)  {
	m_includeStudios = newIncludeStudios;
}

bool GetParams::includeStudiosNull() const {
	// Nullable: false
	// Type Nullable: false
	

	return !m_includeStudios.has_value();
}

void GetParams::setIncludeStudiosNull() {
	m_includeStudios = std::nullopt;
}


const bool &GetParams::isKids() const {
	return m_isKids.value();
}

void GetParams::setIsKids(bool newIsKids)  {
	m_isKids = newIsKids;
}

bool GetParams::isKidsNull() const {
	// Nullable: true
	// Type Nullable: false
	

	return !m_isKids.has_value();
}

void GetParams::setIsKidsNull() {
	m_isKids = std::nullopt;
}


const bool &GetParams::isMovie() const {
	return m_isMovie.value();
}

void GetParams::setIsMovie(bool newIsMovie)  {
	m_isMovie = newIsMovie;
}

bool GetParams::isMovieNull() const {
	// Nullable: true
	// Type Nullable: false
	

	return !m_isMovie.has_value();
}

void GetParams::setIsMovieNull() {
	m_isMovie = std::nullopt;
}


const bool &GetParams::isNews() const {
	return m_isNews.value();
}

void GetParams::setIsNews(bool newIsNews)  {
	m_isNews = newIsNews;
}

bool GetParams::isNewsNull() const {
	// Nullable: true
	// Type Nullable: false
	

	return !m_isNews.has_value();
}

void GetParams::setIsNewsNull() {
	m_isNews = std::nullopt;
}


const bool &GetParams::isSeries() const {
	return m_isSeries.value();
}

void GetParams::setIsSeries(bool newIsSeries)  {
	m_isSeries = newIsSeries;
}

bool GetParams::isSeriesNull() const {
	// Nullable: true
	// Type Nullable: false
	

	return !m_isSeries.has_value();
}

void GetParams::setIsSeriesNull() {
	m_isSeries = std::nullopt;
}


const bool &GetParams::isSports() const {
	return m_isSports.value();
}

void GetParams::setIsSports(bool newIsSports)  {
	m_isSports = newIsSports;
}

bool GetParams::isSportsNull() const {
	// Nullable: true
	// Type Nullable: false
	

	return !m_isSports.has_value();
}

void GetParams::setIsSportsNull() {
	m_isSports = std::nullopt;
}


const qint32 &GetParams::limit() const {
	return m_limit.value();
}

void GetParams::setLimit(qint32 newLimit)  {
	m_limit = newLimit;
}

bool GetParams::limitNull() const {
	// Nullable: true
	// Type Nullable: false
	

	return !m_limit.has_value();
}

void GetParams::setLimitNull() {
	m_limit = std::nullopt;
}


const QStringList &GetParams::mediaTypes() const {
	return m_mediaTypes;
}

void GetParams::setMediaTypes(QStringList newMediaTypes)  {
	m_mediaTypes = newMediaTypes;
}

bool GetParams::mediaTypesNull() const {
	// Nullable: true
	// Type Nullable: true
	

	return m_mediaTypes.size() == 0;
}

void GetParams::setMediaTypesNull() {
	m_mediaTypes.clear();
}


const QString &GetParams::parentId() const {
	return m_parentId;
}

void GetParams::setParentId(QString newParentId)  {
	m_parentId = newParentId;
}

bool GetParams::parentIdNull() const {
	// Nullable: true
	// Type Nullable: true
	

	return m_parentId.isNull();
}

void GetParams::setParentIdNull() {
	m_parentId.clear();
}


const qint32 &GetParams::startIndex() const {
	return m_startIndex.value();
}

void GetParams::setStartIndex(qint32 newStartIndex)  {
	m_startIndex = newStartIndex;
}

bool GetParams::startIndexNull() const {
	// Nullable: true
	// Type Nullable: false
	

	return !m_startIndex.has_value();
}

void GetParams::setStartIndexNull() {
	m_startIndex = std::nullopt;
}


const QString &GetParams::userId() const {
	return m_userId;
}

void GetParams::setUserId(QString newUserId)  {
	m_userId = newUserId;
}

bool GetParams::userIdNull() const {
	// Nullable: true
	// Type Nullable: true
	

	return m_userId.isNull();
}

void GetParams::setUserIdNull() {
	m_userId.clear();
}




// GetAdditionalPartParams

const QString &GetAdditionalPartParams::itemId() const {
	return m_itemId;
}

void GetAdditionalPartParams::setItemId(QString newItemId) {
	m_itemId = newItemId;
}


const QString &GetAdditionalPartParams::userId() const {
	return m_userId;
}

void GetAdditionalPartParams::setUserId(QString newUserId)  {
	m_userId = newUserId;
}

bool GetAdditionalPartParams::userIdNull() const {
	// Nullable: true
	// Type Nullable: true
	

	return m_userId.isNull();
}

void GetAdditionalPartParams::setUserIdNull() {
	m_userId.clear();
}




// GetAlbumArtistsParams

const QList<ImageType> &GetAlbumArtistsParams::enableImageTypes() const {
	return m_enableImageTypes;
}

void GetAlbumArtistsParams::setEnableImageTypes(QList<ImageType> newEnableImageTypes)  {
	m_enableImageTypes = newEnableImageTypes;
}

bool GetAlbumArtistsParams::enableImageTypesNull() const {
	// Nullable: true
	// Type Nullable: true
	

	return m_enableImageTypes.size() == 0;
}

void GetAlbumArtistsParams::setEnableImageTypesNull() {
	m_enableImageTypes.clear();
}


const bool &GetAlbumArtistsParams::enableImages() const {
	return m_enableImages.value();
}

void GetAlbumArtistsParams::setEnableImages(bool newEnableImages)  {
	m_enableImages = newEnableImages;
}

bool GetAlbumArtistsParams::enableImagesNull() const {
	// Nullable: true
	// Type Nullable: false
	

	return !m_enableImages.has_value();
}

void GetAlbumArtistsParams::setEnableImagesNull() {
	m_enableImages = std::nullopt;
}


const bool &GetAlbumArtistsParams::enableTotalRecordCount() const {
	return m_enableTotalRecordCount.value();
}

void GetAlbumArtistsParams::setEnableTotalRecordCount(bool newEnableTotalRecordCount)  {
	m_enableTotalRecordCount = newEnableTotalRecordCount;
}

bool GetAlbumArtistsParams::enableTotalRecordCountNull() const {
	// Nullable: false
	// Type Nullable: false
	

	return !m_enableTotalRecordCount.has_value();
}

void GetAlbumArtistsParams::setEnableTotalRecordCountNull() {
	m_enableTotalRecordCount = std::nullopt;
}


const bool &GetAlbumArtistsParams::enableUserData() const {
	return m_enableUserData.value();
}

void GetAlbumArtistsParams::setEnableUserData(bool newEnableUserData)  {
	m_enableUserData = newEnableUserData;
}

bool GetAlbumArtistsParams::enableUserDataNull() const {
	// Nullable: true
	// Type Nullable: false
	

	return !m_enableUserData.has_value();
}

void GetAlbumArtistsParams::setEnableUserDataNull() {
	m_enableUserData = std::nullopt;
}


const QStringList &GetAlbumArtistsParams::excludeItemTypes() const {
	return m_excludeItemTypes;
}

void GetAlbumArtistsParams::setExcludeItemTypes(QStringList newExcludeItemTypes)  {
	m_excludeItemTypes = newExcludeItemTypes;
}

bool GetAlbumArtistsParams::excludeItemTypesNull() const {
	// Nullable: true
	// Type Nullable: true
	

	return m_excludeItemTypes.size() == 0;
}

void GetAlbumArtistsParams::setExcludeItemTypesNull() {
	m_excludeItemTypes.clear();
}


const QList<ItemFields> &GetAlbumArtistsParams::fields() const {
	return m_fields;
}

void GetAlbumArtistsParams::setFields(QList<ItemFields> newFields)  {
	m_fields = newFields;
}

bool GetAlbumArtistsParams::fieldsNull() const {
	// Nullable: true
	// Type Nullable: true
	

	return m_fields.size() == 0;
}

void GetAlbumArtistsParams::setFieldsNull() {
	m_fields.clear();
}


const QList<ItemFilter> &GetAlbumArtistsParams::filters() const {
	return m_filters;
}

void GetAlbumArtistsParams::setFilters(QList<ItemFilter> newFilters)  {
	m_filters = newFilters;
}

bool GetAlbumArtistsParams::filtersNull() const {
	// Nullable: true
	// Type Nullable: true
	

	return m_filters.size() == 0;
}

void GetAlbumArtistsParams::setFiltersNull() {
	m_filters.clear();
}


const QStringList &GetAlbumArtistsParams::genreIds() const {
	return m_genreIds;
}

void GetAlbumArtistsParams::setGenreIds(QStringList newGenreIds)  {
	m_genreIds = newGenreIds;
}

bool GetAlbumArtistsParams::genreIdsNull() const {
	// Nullable: true
	// Type Nullable: true
	

	return m_genreIds.size() == 0;
}

void GetAlbumArtistsParams::setGenreIdsNull() {
	m_genreIds.clear();
}


const QStringList &GetAlbumArtistsParams::genres() const {
	return m_genres;
}

void GetAlbumArtistsParams::setGenres(QStringList newGenres)  {
	m_genres = newGenres;
}

bool GetAlbumArtistsParams::genresNull() const {
	// Nullable: true
	// Type Nullable: true
	

	return m_genres.size() == 0;
}

void GetAlbumArtistsParams::setGenresNull() {
	m_genres.clear();
}


const qint32 &GetAlbumArtistsParams::imageTypeLimit() const {
	return m_imageTypeLimit.value();
}

void GetAlbumArtistsParams::setImageTypeLimit(qint32 newImageTypeLimit)  {
	m_imageTypeLimit = newImageTypeLimit;
}

bool GetAlbumArtistsParams::imageTypeLimitNull() const {
	// Nullable: true
	// Type Nullable: false
	

	return !m_imageTypeLimit.has_value();
}

void GetAlbumArtistsParams::setImageTypeLimitNull() {
	m_imageTypeLimit = std::nullopt;
}


const QStringList &GetAlbumArtistsParams::includeItemTypes() const {
	return m_includeItemTypes;
}

void GetAlbumArtistsParams::setIncludeItemTypes(QStringList newIncludeItemTypes)  {
	m_includeItemTypes = newIncludeItemTypes;
}

bool GetAlbumArtistsParams::includeItemTypesNull() const {
	// Nullable: true
	// Type Nullable: true
	

	return m_includeItemTypes.size() == 0;
}

void GetAlbumArtistsParams::setIncludeItemTypesNull() {
	m_includeItemTypes.clear();
}


const bool &GetAlbumArtistsParams::isFavorite() const {
	return m_isFavorite.value();
}

void GetAlbumArtistsParams::setIsFavorite(bool newIsFavorite)  {
	m_isFavorite = newIsFavorite;
}

bool GetAlbumArtistsParams::isFavoriteNull() const {
	// Nullable: true
	// Type Nullable: false
	

	return !m_isFavorite.has_value();
}

void GetAlbumArtistsParams::setIsFavoriteNull() {
	m_isFavorite = std::nullopt;
}


const qint32 &GetAlbumArtistsParams::limit() const {
	return m_limit.value();
}

void GetAlbumArtistsParams::setLimit(qint32 newLimit)  {
	m_limit = newLimit;
}

bool GetAlbumArtistsParams::limitNull() const {
	// Nullable: true
	// Type Nullable: false
	

	return !m_limit.has_value();
}

void GetAlbumArtistsParams::setLimitNull() {
	m_limit = std::nullopt;
}


const QStringList &GetAlbumArtistsParams::mediaTypes() const {
	return m_mediaTypes;
}

void GetAlbumArtistsParams::setMediaTypes(QStringList newMediaTypes)  {
	m_mediaTypes = newMediaTypes;
}

bool GetAlbumArtistsParams::mediaTypesNull() const {
	// Nullable: true
	// Type Nullable: true
	

	return m_mediaTypes.size() == 0;
}

void GetAlbumArtistsParams::setMediaTypesNull() {
	m_mediaTypes.clear();
}


const double &GetAlbumArtistsParams::minCommunityRating() const {
	return m_minCommunityRating.value();
}

void GetAlbumArtistsParams::setMinCommunityRating(double newMinCommunityRating)  {
	m_minCommunityRating = newMinCommunityRating;
}

bool GetAlbumArtistsParams::minCommunityRatingNull() const {
	// Nullable: true
	// Type Nullable: false
	

	return !m_minCommunityRating.has_value();
}

void GetAlbumArtistsParams::setMinCommunityRatingNull() {
	m_minCommunityRating = std::nullopt;
}


const QString &GetAlbumArtistsParams::nameLessThan() const {
	return m_nameLessThan;
}

void GetAlbumArtistsParams::setNameLessThan(QString newNameLessThan)  {
	m_nameLessThan = newNameLessThan;
}

bool GetAlbumArtistsParams::nameLessThanNull() const {
	// Nullable: true
	// Type Nullable: true
	

	return m_nameLessThan.isNull();
}

void GetAlbumArtistsParams::setNameLessThanNull() {
	m_nameLessThan.clear();
}


const QString &GetAlbumArtistsParams::nameStartsWith() const {
	return m_nameStartsWith;
}

void GetAlbumArtistsParams::setNameStartsWith(QString newNameStartsWith)  {
	m_nameStartsWith = newNameStartsWith;
}

bool GetAlbumArtistsParams::nameStartsWithNull() const {
	// Nullable: true
	// Type Nullable: true
	

	return m_nameStartsWith.isNull();
}

void GetAlbumArtistsParams::setNameStartsWithNull() {
	m_nameStartsWith.clear();
}


const QString &GetAlbumArtistsParams::nameStartsWithOrGreater() const {
	return m_nameStartsWithOrGreater;
}

void GetAlbumArtistsParams::setNameStartsWithOrGreater(QString newNameStartsWithOrGreater)  {
	m_nameStartsWithOrGreater = newNameStartsWithOrGreater;
}

bool GetAlbumArtistsParams::nameStartsWithOrGreaterNull() const {
	// Nullable: true
	// Type Nullable: true
	

	return m_nameStartsWithOrGreater.isNull();
}

void GetAlbumArtistsParams::setNameStartsWithOrGreaterNull() {
	m_nameStartsWithOrGreater.clear();
}


const QStringList &GetAlbumArtistsParams::officialRatings() const {
	return m_officialRatings;
}

void GetAlbumArtistsParams::setOfficialRatings(QStringList newOfficialRatings)  {
	m_officialRatings = newOfficialRatings;
}

bool GetAlbumArtistsParams::officialRatingsNull() const {
	// Nullable: true
	// Type Nullable: true
	

	return m_officialRatings.size() == 0;
}

void GetAlbumArtistsParams::setOfficialRatingsNull() {
	m_officialRatings.clear();
}


const QString &GetAlbumArtistsParams::parentId() const {
	return m_parentId;
}

void GetAlbumArtistsParams::setParentId(QString newParentId)  {
	m_parentId = newParentId;
}

bool GetAlbumArtistsParams::parentIdNull() const {
	// Nullable: true
	// Type Nullable: true
	

	return m_parentId.isNull();
}

void GetAlbumArtistsParams::setParentIdNull() {
	m_parentId.clear();
}


const QString &GetAlbumArtistsParams::person() const {
	return m_person;
}

void GetAlbumArtistsParams::setPerson(QString newPerson)  {
	m_person = newPerson;
}

bool GetAlbumArtistsParams::personNull() const {
	// Nullable: true
	// Type Nullable: true
	

	return m_person.isNull();
}

void GetAlbumArtistsParams::setPersonNull() {
	m_person.clear();
}


const QStringList &GetAlbumArtistsParams::personIds() const {
	return m_personIds;
}

void GetAlbumArtistsParams::setPersonIds(QStringList newPersonIds)  {
	m_personIds = newPersonIds;
}

bool GetAlbumArtistsParams::personIdsNull() const {
	// Nullable: true
	// Type Nullable: true
	

	return m_personIds.size() == 0;
}

void GetAlbumArtistsParams::setPersonIdsNull() {
	m_personIds.clear();
}


const QStringList &GetAlbumArtistsParams::personTypes() const {
	return m_personTypes;
}

void GetAlbumArtistsParams::setPersonTypes(QStringList newPersonTypes)  {
	m_personTypes = newPersonTypes;
}

bool GetAlbumArtistsParams::personTypesNull() const {
	// Nullable: true
	// Type Nullable: true
	

	return m_personTypes.size() == 0;
}

void GetAlbumArtistsParams::setPersonTypesNull() {
	m_personTypes.clear();
}


const QString &GetAlbumArtistsParams::searchTerm() const {
	return m_searchTerm;
}

void GetAlbumArtistsParams::setSearchTerm(QString newSearchTerm)  {
	m_searchTerm = newSearchTerm;
}

bool GetAlbumArtistsParams::searchTermNull() const {
	// Nullable: true
	// Type Nullable: true
	

	return m_searchTerm.isNull();
}

void GetAlbumArtistsParams::setSearchTermNull() {
	m_searchTerm.clear();
}


const qint32 &GetAlbumArtistsParams::startIndex() const {
	return m_startIndex.value();
}

void GetAlbumArtistsParams::setStartIndex(qint32 newStartIndex)  {
	m_startIndex = newStartIndex;
}

bool GetAlbumArtistsParams::startIndexNull() const {
	// Nullable: true
	// Type Nullable: false
	

	return !m_startIndex.has_value();
}

void GetAlbumArtistsParams::setStartIndexNull() {
	m_startIndex = std::nullopt;
}


const QStringList &GetAlbumArtistsParams::studioIds() const {
	return m_studioIds;
}

void GetAlbumArtistsParams::setStudioIds(QStringList newStudioIds)  {
	m_studioIds = newStudioIds;
}

bool GetAlbumArtistsParams::studioIdsNull() const {
	// Nullable: true
	// Type Nullable: true
	

	return m_studioIds.size() == 0;
}

void GetAlbumArtistsParams::setStudioIdsNull() {
	m_studioIds.clear();
}


const QStringList &GetAlbumArtistsParams::studios() const {
	return m_studios;
}

void GetAlbumArtistsParams::setStudios(QStringList newStudios)  {
	m_studios = newStudios;
}

bool GetAlbumArtistsParams::studiosNull() const {
	// Nullable: true
	// Type Nullable: true
	

	return m_studios.size() == 0;
}

void GetAlbumArtistsParams::setStudiosNull() {
	m_studios.clear();
}


const QStringList &GetAlbumArtistsParams::tags() const {
	return m_tags;
}

void GetAlbumArtistsParams::setTags(QStringList newTags)  {
	m_tags = newTags;
}

bool GetAlbumArtistsParams::tagsNull() const {
	// Nullable: true
	// Type Nullable: true
	

	return m_tags.size() == 0;
}

void GetAlbumArtistsParams::setTagsNull() {
	m_tags.clear();
}


const QString &GetAlbumArtistsParams::userId() const {
	return m_userId;
}

void GetAlbumArtistsParams::setUserId(QString newUserId)  {
	m_userId = newUserId;
}

bool GetAlbumArtistsParams::userIdNull() const {
	// Nullable: true
	// Type Nullable: true
	

	return m_userId.isNull();
}

void GetAlbumArtistsParams::setUserIdNull() {
	m_userId.clear();
}


const QList<qint32> &GetAlbumArtistsParams::years() const {
	return m_years;
}

void GetAlbumArtistsParams::setYears(QList<qint32> newYears)  {
	m_years = newYears;
}

bool GetAlbumArtistsParams::yearsNull() const {
	// Nullable: true
	// Type Nullable: true
	

	return m_years.size() == 0;
}

void GetAlbumArtistsParams::setYearsNull() {
	m_years.clear();
}




// GetAllChannelFeaturesParams



// GetAncestorsParams

const QString &GetAncestorsParams::itemId() const {
	return m_itemId;
}

void GetAncestorsParams::setItemId(QString newItemId) {
	m_itemId = newItemId;
}


const QString &GetAncestorsParams::userId() const {
	return m_userId;
}

void GetAncestorsParams::setUserId(QString newUserId)  {
	m_userId = newUserId;
}

bool GetAncestorsParams::userIdNull() const {
	// Nullable: true
	// Type Nullable: true
	

	return m_userId.isNull();
}

void GetAncestorsParams::setUserIdNull() {
	m_userId.clear();
}




// GetArtistByNameParams

const QString &GetArtistByNameParams::name() const {
	return m_name;
}

void GetArtistByNameParams::setName(QString newName) {
	m_name = newName;
}


const QString &GetArtistByNameParams::userId() const {
	return m_userId;
}

void GetArtistByNameParams::setUserId(QString newUserId)  {
	m_userId = newUserId;
}

bool GetArtistByNameParams::userIdNull() const {
	// Nullable: true
	// Type Nullable: true
	

	return m_userId.isNull();
}

void GetArtistByNameParams::setUserIdNull() {
	m_userId.clear();
}




// GetArtistImageParams

const qint32 &GetArtistImageParams::imageIndex() const {
	return m_imageIndex;
}

void GetArtistImageParams::setImageIndex(qint32 newImageIndex) {
	m_imageIndex = newImageIndex;
}


const ImageType &GetArtistImageParams::imageType() const {
	return m_imageType;
}

void GetArtistImageParams::setImageType(ImageType newImageType) {
	m_imageType = newImageType;
}


const QString &GetArtistImageParams::name() const {
	return m_name;
}

void GetArtistImageParams::setName(QString newName) {
	m_name = newName;
}


const bool &GetArtistImageParams::addPlayedIndicator() const {
	return m_addPlayedIndicator.value();
}

void GetArtistImageParams::setAddPlayedIndicator(bool newAddPlayedIndicator)  {
	m_addPlayedIndicator = newAddPlayedIndicator;
}

bool GetArtistImageParams::addPlayedIndicatorNull() const {
	// Nullable: true
	// Type Nullable: false
	

	return !m_addPlayedIndicator.has_value();
}

void GetArtistImageParams::setAddPlayedIndicatorNull() {
	m_addPlayedIndicator = std::nullopt;
}


const QString &GetArtistImageParams::backgroundColor() const {
	return m_backgroundColor;
}

void GetArtistImageParams::setBackgroundColor(QString newBackgroundColor)  {
	m_backgroundColor = newBackgroundColor;
}

bool GetArtistImageParams::backgroundColorNull() const {
	// Nullable: true
	// Type Nullable: true
	

	return m_backgroundColor.isNull();
}

void GetArtistImageParams::setBackgroundColorNull() {
	m_backgroundColor.clear();
}


const qint32 &GetArtistImageParams::blur() const {
	return m_blur.value();
}

void GetArtistImageParams::setBlur(qint32 newBlur)  {
	m_blur = newBlur;
}

bool GetArtistImageParams::blurNull() const {
	// Nullable: true
	// Type Nullable: false
	

	return !m_blur.has_value();
}

void GetArtistImageParams::setBlurNull() {
	m_blur = std::nullopt;
}


const bool &GetArtistImageParams::cropWhitespace() const {
	return m_cropWhitespace.value();
}

void GetArtistImageParams::setCropWhitespace(bool newCropWhitespace)  {
	m_cropWhitespace = newCropWhitespace;
}

bool GetArtistImageParams::cropWhitespaceNull() const {
	// Nullable: true
	// Type Nullable: false
	

	return !m_cropWhitespace.has_value();
}

void GetArtistImageParams::setCropWhitespaceNull() {
	m_cropWhitespace = std::nullopt;
}


const QString &GetArtistImageParams::foregroundLayer() const {
	return m_foregroundLayer;
}

void GetArtistImageParams::setForegroundLayer(QString newForegroundLayer)  {
	m_foregroundLayer = newForegroundLayer;
}

bool GetArtistImageParams::foregroundLayerNull() const {
	// Nullable: true
	// Type Nullable: true
	

	return m_foregroundLayer.isNull();
}

void GetArtistImageParams::setForegroundLayerNull() {
	m_foregroundLayer.clear();
}


const ImageFormat &GetArtistImageParams::format() const {
	return m_format;
}

void GetArtistImageParams::setFormat(ImageFormat newFormat)  {
	m_format = newFormat;
}

bool GetArtistImageParams::formatNull() const {
	// Nullable: true
	// Type Nullable: true
	

	return m_format== ImageFormat::EnumNotSet;
}

void GetArtistImageParams::setFormatNull() {
	m_format= ImageFormat::EnumNotSet;
}


const qint32 &GetArtistImageParams::height() const {
	return m_height.value();
}

void GetArtistImageParams::setHeight(qint32 newHeight)  {
	m_height = newHeight;
}

bool GetArtistImageParams::heightNull() const {
	// Nullable: true
	// Type Nullable: false
	

	return !m_height.has_value();
}

void GetArtistImageParams::setHeightNull() {
	m_height = std::nullopt;
}


const qint32 &GetArtistImageParams::maxHeight() const {
	return m_maxHeight.value();
}

void GetArtistImageParams::setMaxHeight(qint32 newMaxHeight)  {
	m_maxHeight = newMaxHeight;
}

bool GetArtistImageParams::maxHeightNull() const {
	// Nullable: true
	// Type Nullable: false
	

	return !m_maxHeight.has_value();
}

void GetArtistImageParams::setMaxHeightNull() {
	m_maxHeight = std::nullopt;
}


const qint32 &GetArtistImageParams::maxWidth() const {
	return m_maxWidth.value();
}

void GetArtistImageParams::setMaxWidth(qint32 newMaxWidth)  {
	m_maxWidth = newMaxWidth;
}

bool GetArtistImageParams::maxWidthNull() const {
	// Nullable: true
	// Type Nullable: false
	

	return !m_maxWidth.has_value();
}

void GetArtistImageParams::setMaxWidthNull() {
	m_maxWidth = std::nullopt;
}


const double &GetArtistImageParams::percentPlayed() const {
	return m_percentPlayed.value();
}

void GetArtistImageParams::setPercentPlayed(double newPercentPlayed)  {
	m_percentPlayed = newPercentPlayed;
}

bool GetArtistImageParams::percentPlayedNull() const {
	// Nullable: true
	// Type Nullable: false
	

	return !m_percentPlayed.has_value();
}

void GetArtistImageParams::setPercentPlayedNull() {
	m_percentPlayed = std::nullopt;
}


const qint32 &GetArtistImageParams::quality() const {
	return m_quality.value();
}

void GetArtistImageParams::setQuality(qint32 newQuality)  {
	m_quality = newQuality;
}

bool GetArtistImageParams::qualityNull() const {
	// Nullable: true
	// Type Nullable: false
	

	return !m_quality.has_value();
}

void GetArtistImageParams::setQualityNull() {
	m_quality = std::nullopt;
}


const QString &GetArtistImageParams::tag() const {
	return m_tag;
}

void GetArtistImageParams::setTag(QString newTag)  {
	m_tag = newTag;
}

bool GetArtistImageParams::tagNull() const {
	// Nullable: true
	// Type Nullable: true
	

	return m_tag.isNull();
}

void GetArtistImageParams::setTagNull() {
	m_tag.clear();
}


const qint32 &GetArtistImageParams::unplayedCount() const {
	return m_unplayedCount.value();
}

void GetArtistImageParams::setUnplayedCount(qint32 newUnplayedCount)  {
	m_unplayedCount = newUnplayedCount;
}

bool GetArtistImageParams::unplayedCountNull() const {
	// Nullable: true
	// Type Nullable: false
	

	return !m_unplayedCount.has_value();
}

void GetArtistImageParams::setUnplayedCountNull() {
	m_unplayedCount = std::nullopt;
}


const qint32 &GetArtistImageParams::width() const {
	return m_width.value();
}

void GetArtistImageParams::setWidth(qint32 newWidth)  {
	m_width = newWidth;
}

bool GetArtistImageParams::widthNull() const {
	// Nullable: true
	// Type Nullable: false
	

	return !m_width.has_value();
}

void GetArtistImageParams::setWidthNull() {
	m_width = std::nullopt;
}




// GetArtistsParams

const QList<ImageType> &GetArtistsParams::enableImageTypes() const {
	return m_enableImageTypes;
}

void GetArtistsParams::setEnableImageTypes(QList<ImageType> newEnableImageTypes)  {
	m_enableImageTypes = newEnableImageTypes;
}

bool GetArtistsParams::enableImageTypesNull() const {
	// Nullable: true
	// Type Nullable: true
	

	return m_enableImageTypes.size() == 0;
}

void GetArtistsParams::setEnableImageTypesNull() {
	m_enableImageTypes.clear();
}


const bool &GetArtistsParams::enableImages() const {
	return m_enableImages.value();
}

void GetArtistsParams::setEnableImages(bool newEnableImages)  {
	m_enableImages = newEnableImages;
}

bool GetArtistsParams::enableImagesNull() const {
	// Nullable: true
	// Type Nullable: false
	

	return !m_enableImages.has_value();
}

void GetArtistsParams::setEnableImagesNull() {
	m_enableImages = std::nullopt;
}


const bool &GetArtistsParams::enableTotalRecordCount() const {
	return m_enableTotalRecordCount.value();
}

void GetArtistsParams::setEnableTotalRecordCount(bool newEnableTotalRecordCount)  {
	m_enableTotalRecordCount = newEnableTotalRecordCount;
}

bool GetArtistsParams::enableTotalRecordCountNull() const {
	// Nullable: false
	// Type Nullable: false
	

	return !m_enableTotalRecordCount.has_value();
}

void GetArtistsParams::setEnableTotalRecordCountNull() {
	m_enableTotalRecordCount = std::nullopt;
}


const bool &GetArtistsParams::enableUserData() const {
	return m_enableUserData.value();
}

void GetArtistsParams::setEnableUserData(bool newEnableUserData)  {
	m_enableUserData = newEnableUserData;
}

bool GetArtistsParams::enableUserDataNull() const {
	// Nullable: true
	// Type Nullable: false
	

	return !m_enableUserData.has_value();
}

void GetArtistsParams::setEnableUserDataNull() {
	m_enableUserData = std::nullopt;
}


const QStringList &GetArtistsParams::excludeItemTypes() const {
	return m_excludeItemTypes;
}

void GetArtistsParams::setExcludeItemTypes(QStringList newExcludeItemTypes)  {
	m_excludeItemTypes = newExcludeItemTypes;
}

bool GetArtistsParams::excludeItemTypesNull() const {
	// Nullable: true
	// Type Nullable: true
	

	return m_excludeItemTypes.size() == 0;
}

void GetArtistsParams::setExcludeItemTypesNull() {
	m_excludeItemTypes.clear();
}


const QList<ItemFields> &GetArtistsParams::fields() const {
	return m_fields;
}

void GetArtistsParams::setFields(QList<ItemFields> newFields)  {
	m_fields = newFields;
}

bool GetArtistsParams::fieldsNull() const {
	// Nullable: true
	// Type Nullable: true
	

	return m_fields.size() == 0;
}

void GetArtistsParams::setFieldsNull() {
	m_fields.clear();
}


const QList<ItemFilter> &GetArtistsParams::filters() const {
	return m_filters;
}

void GetArtistsParams::setFilters(QList<ItemFilter> newFilters)  {
	m_filters = newFilters;
}

bool GetArtistsParams::filtersNull() const {
	// Nullable: true
	// Type Nullable: true
	

	return m_filters.size() == 0;
}

void GetArtistsParams::setFiltersNull() {
	m_filters.clear();
}


const QStringList &GetArtistsParams::genreIds() const {
	return m_genreIds;
}

void GetArtistsParams::setGenreIds(QStringList newGenreIds)  {
	m_genreIds = newGenreIds;
}

bool GetArtistsParams::genreIdsNull() const {
	// Nullable: true
	// Type Nullable: true
	

	return m_genreIds.size() == 0;
}

void GetArtistsParams::setGenreIdsNull() {
	m_genreIds.clear();
}


const QStringList &GetArtistsParams::genres() const {
	return m_genres;
}

void GetArtistsParams::setGenres(QStringList newGenres)  {
	m_genres = newGenres;
}

bool GetArtistsParams::genresNull() const {
	// Nullable: true
	// Type Nullable: true
	

	return m_genres.size() == 0;
}

void GetArtistsParams::setGenresNull() {
	m_genres.clear();
}


const qint32 &GetArtistsParams::imageTypeLimit() const {
	return m_imageTypeLimit.value();
}

void GetArtistsParams::setImageTypeLimit(qint32 newImageTypeLimit)  {
	m_imageTypeLimit = newImageTypeLimit;
}

bool GetArtistsParams::imageTypeLimitNull() const {
	// Nullable: true
	// Type Nullable: false
	

	return !m_imageTypeLimit.has_value();
}

void GetArtistsParams::setImageTypeLimitNull() {
	m_imageTypeLimit = std::nullopt;
}


const QStringList &GetArtistsParams::includeItemTypes() const {
	return m_includeItemTypes;
}

void GetArtistsParams::setIncludeItemTypes(QStringList newIncludeItemTypes)  {
	m_includeItemTypes = newIncludeItemTypes;
}

bool GetArtistsParams::includeItemTypesNull() const {
	// Nullable: true
	// Type Nullable: true
	

	return m_includeItemTypes.size() == 0;
}

void GetArtistsParams::setIncludeItemTypesNull() {
	m_includeItemTypes.clear();
}


const bool &GetArtistsParams::isFavorite() const {
	return m_isFavorite.value();
}

void GetArtistsParams::setIsFavorite(bool newIsFavorite)  {
	m_isFavorite = newIsFavorite;
}

bool GetArtistsParams::isFavoriteNull() const {
	// Nullable: true
	// Type Nullable: false
	

	return !m_isFavorite.has_value();
}

void GetArtistsParams::setIsFavoriteNull() {
	m_isFavorite = std::nullopt;
}


const qint32 &GetArtistsParams::limit() const {
	return m_limit.value();
}

void GetArtistsParams::setLimit(qint32 newLimit)  {
	m_limit = newLimit;
}

bool GetArtistsParams::limitNull() const {
	// Nullable: true
	// Type Nullable: false
	

	return !m_limit.has_value();
}

void GetArtistsParams::setLimitNull() {
	m_limit = std::nullopt;
}


const QStringList &GetArtistsParams::mediaTypes() const {
	return m_mediaTypes;
}

void GetArtistsParams::setMediaTypes(QStringList newMediaTypes)  {
	m_mediaTypes = newMediaTypes;
}

bool GetArtistsParams::mediaTypesNull() const {
	// Nullable: true
	// Type Nullable: true
	

	return m_mediaTypes.size() == 0;
}

void GetArtistsParams::setMediaTypesNull() {
	m_mediaTypes.clear();
}


const double &GetArtistsParams::minCommunityRating() const {
	return m_minCommunityRating.value();
}

void GetArtistsParams::setMinCommunityRating(double newMinCommunityRating)  {
	m_minCommunityRating = newMinCommunityRating;
}

bool GetArtistsParams::minCommunityRatingNull() const {
	// Nullable: true
	// Type Nullable: false
	

	return !m_minCommunityRating.has_value();
}

void GetArtistsParams::setMinCommunityRatingNull() {
	m_minCommunityRating = std::nullopt;
}


const QString &GetArtistsParams::nameLessThan() const {
	return m_nameLessThan;
}

void GetArtistsParams::setNameLessThan(QString newNameLessThan)  {
	m_nameLessThan = newNameLessThan;
}

bool GetArtistsParams::nameLessThanNull() const {
	// Nullable: true
	// Type Nullable: true
	

	return m_nameLessThan.isNull();
}

void GetArtistsParams::setNameLessThanNull() {
	m_nameLessThan.clear();
}


const QString &GetArtistsParams::nameStartsWith() const {
	return m_nameStartsWith;
}

void GetArtistsParams::setNameStartsWith(QString newNameStartsWith)  {
	m_nameStartsWith = newNameStartsWith;
}

bool GetArtistsParams::nameStartsWithNull() const {
	// Nullable: true
	// Type Nullable: true
	

	return m_nameStartsWith.isNull();
}

void GetArtistsParams::setNameStartsWithNull() {
	m_nameStartsWith.clear();
}


const QString &GetArtistsParams::nameStartsWithOrGreater() const {
	return m_nameStartsWithOrGreater;
}

void GetArtistsParams::setNameStartsWithOrGreater(QString newNameStartsWithOrGreater)  {
	m_nameStartsWithOrGreater = newNameStartsWithOrGreater;
}

bool GetArtistsParams::nameStartsWithOrGreaterNull() const {
	// Nullable: true
	// Type Nullable: true
	

	return m_nameStartsWithOrGreater.isNull();
}

void GetArtistsParams::setNameStartsWithOrGreaterNull() {
	m_nameStartsWithOrGreater.clear();
}


const QStringList &GetArtistsParams::officialRatings() const {
	return m_officialRatings;
}

void GetArtistsParams::setOfficialRatings(QStringList newOfficialRatings)  {
	m_officialRatings = newOfficialRatings;
}

bool GetArtistsParams::officialRatingsNull() const {
	// Nullable: true
	// Type Nullable: true
	

	return m_officialRatings.size() == 0;
}

void GetArtistsParams::setOfficialRatingsNull() {
	m_officialRatings.clear();
}


const QString &GetArtistsParams::parentId() const {
	return m_parentId;
}

void GetArtistsParams::setParentId(QString newParentId)  {
	m_parentId = newParentId;
}

bool GetArtistsParams::parentIdNull() const {
	// Nullable: true
	// Type Nullable: true
	

	return m_parentId.isNull();
}

void GetArtistsParams::setParentIdNull() {
	m_parentId.clear();
}


const QString &GetArtistsParams::person() const {
	return m_person;
}

void GetArtistsParams::setPerson(QString newPerson)  {
	m_person = newPerson;
}

bool GetArtistsParams::personNull() const {
	// Nullable: true
	// Type Nullable: true
	

	return m_person.isNull();
}

void GetArtistsParams::setPersonNull() {
	m_person.clear();
}


const QStringList &GetArtistsParams::personIds() const {
	return m_personIds;
}

void GetArtistsParams::setPersonIds(QStringList newPersonIds)  {
	m_personIds = newPersonIds;
}

bool GetArtistsParams::personIdsNull() const {
	// Nullable: true
	// Type Nullable: true
	

	return m_personIds.size() == 0;
}

void GetArtistsParams::setPersonIdsNull() {
	m_personIds.clear();
}


const QStringList &GetArtistsParams::personTypes() const {
	return m_personTypes;
}

void GetArtistsParams::setPersonTypes(QStringList newPersonTypes)  {
	m_personTypes = newPersonTypes;
}

bool GetArtistsParams::personTypesNull() const {
	// Nullable: true
	// Type Nullable: true
	

	return m_personTypes.size() == 0;
}

void GetArtistsParams::setPersonTypesNull() {
	m_personTypes.clear();
}


const QString &GetArtistsParams::searchTerm() const {
	return m_searchTerm;
}

void GetArtistsParams::setSearchTerm(QString newSearchTerm)  {
	m_searchTerm = newSearchTerm;
}

bool GetArtistsParams::searchTermNull() const {
	// Nullable: true
	// Type Nullable: true
	

	return m_searchTerm.isNull();
}

void GetArtistsParams::setSearchTermNull() {
	m_searchTerm.clear();
}


const qint32 &GetArtistsParams::startIndex() const {
	return m_startIndex.value();
}

void GetArtistsParams::setStartIndex(qint32 newStartIndex)  {
	m_startIndex = newStartIndex;
}

bool GetArtistsParams::startIndexNull() const {
	// Nullable: true
	// Type Nullable: false
	

	return !m_startIndex.has_value();
}

void GetArtistsParams::setStartIndexNull() {
	m_startIndex = std::nullopt;
}


const QStringList &GetArtistsParams::studioIds() const {
	return m_studioIds;
}

void GetArtistsParams::setStudioIds(QStringList newStudioIds)  {
	m_studioIds = newStudioIds;
}

bool GetArtistsParams::studioIdsNull() const {
	// Nullable: true
	// Type Nullable: true
	

	return m_studioIds.size() == 0;
}

void GetArtistsParams::setStudioIdsNull() {
	m_studioIds.clear();
}


const QStringList &GetArtistsParams::studios() const {
	return m_studios;
}

void GetArtistsParams::setStudios(QStringList newStudios)  {
	m_studios = newStudios;
}

bool GetArtistsParams::studiosNull() const {
	// Nullable: true
	// Type Nullable: true
	

	return m_studios.size() == 0;
}

void GetArtistsParams::setStudiosNull() {
	m_studios.clear();
}


const QStringList &GetArtistsParams::tags() const {
	return m_tags;
}

void GetArtistsParams::setTags(QStringList newTags)  {
	m_tags = newTags;
}

bool GetArtistsParams::tagsNull() const {
	// Nullable: true
	// Type Nullable: true
	

	return m_tags.size() == 0;
}

void GetArtistsParams::setTagsNull() {
	m_tags.clear();
}


const QString &GetArtistsParams::userId() const {
	return m_userId;
}

void GetArtistsParams::setUserId(QString newUserId)  {
	m_userId = newUserId;
}

bool GetArtistsParams::userIdNull() const {
	// Nullable: true
	// Type Nullable: true
	

	return m_userId.isNull();
}

void GetArtistsParams::setUserIdNull() {
	m_userId.clear();
}


const QList<qint32> &GetArtistsParams::years() const {
	return m_years;
}

void GetArtistsParams::setYears(QList<qint32> newYears)  {
	m_years = newYears;
}

bool GetArtistsParams::yearsNull() const {
	// Nullable: true
	// Type Nullable: true
	

	return m_years.size() == 0;
}

void GetArtistsParams::setYearsNull() {
	m_years.clear();
}




// GetAttachmentParams

const qint32 &GetAttachmentParams::index() const {
	return m_index;
}

void GetAttachmentParams::setIndex(qint32 newIndex) {
	m_index = newIndex;
}


const QString &GetAttachmentParams::mediaSourceId() const {
	return m_mediaSourceId;
}

void GetAttachmentParams::setMediaSourceId(QString newMediaSourceId) {
	m_mediaSourceId = newMediaSourceId;
}


const QString &GetAttachmentParams::videoId() const {
	return m_videoId;
}

void GetAttachmentParams::setVideoId(QString newVideoId) {
	m_videoId = newVideoId;
}




// GetAudioStreamParams

const QString &GetAudioStreamParams::itemId() const {
	return m_itemId;
}

void GetAudioStreamParams::setItemId(QString newItemId) {
	m_itemId = newItemId;
}


const bool &GetAudioStreamParams::allowAudioStreamCopy() const {
	return m_allowAudioStreamCopy.value();
}

void GetAudioStreamParams::setAllowAudioStreamCopy(bool newAllowAudioStreamCopy)  {
	m_allowAudioStreamCopy = newAllowAudioStreamCopy;
}

bool GetAudioStreamParams::allowAudioStreamCopyNull() const {
	// Nullable: true
	// Type Nullable: false
	

	return !m_allowAudioStreamCopy.has_value();
}

void GetAudioStreamParams::setAllowAudioStreamCopyNull() {
	m_allowAudioStreamCopy = std::nullopt;
}


const bool &GetAudioStreamParams::allowVideoStreamCopy() const {
	return m_allowVideoStreamCopy.value();
}

void GetAudioStreamParams::setAllowVideoStreamCopy(bool newAllowVideoStreamCopy)  {
	m_allowVideoStreamCopy = newAllowVideoStreamCopy;
}

bool GetAudioStreamParams::allowVideoStreamCopyNull() const {
	// Nullable: true
	// Type Nullable: false
	

	return !m_allowVideoStreamCopy.has_value();
}

void GetAudioStreamParams::setAllowVideoStreamCopyNull() {
	m_allowVideoStreamCopy = std::nullopt;
}


const qint32 &GetAudioStreamParams::audioBitRate() const {
	return m_audioBitRate.value();
}

void GetAudioStreamParams::setAudioBitRate(qint32 newAudioBitRate)  {
	m_audioBitRate = newAudioBitRate;
}

bool GetAudioStreamParams::audioBitRateNull() const {
	// Nullable: true
	// Type Nullable: false
	

	return !m_audioBitRate.has_value();
}

void GetAudioStreamParams::setAudioBitRateNull() {
	m_audioBitRate = std::nullopt;
}


const qint32 &GetAudioStreamParams::audioChannels() const {
	return m_audioChannels.value();
}

void GetAudioStreamParams::setAudioChannels(qint32 newAudioChannels)  {
	m_audioChannels = newAudioChannels;
}

bool GetAudioStreamParams::audioChannelsNull() const {
	// Nullable: true
	// Type Nullable: false
	

	return !m_audioChannels.has_value();
}

void GetAudioStreamParams::setAudioChannelsNull() {
	m_audioChannels = std::nullopt;
}


const QString &GetAudioStreamParams::audioCodec() const {
	return m_audioCodec;
}

void GetAudioStreamParams::setAudioCodec(QString newAudioCodec)  {
	m_audioCodec = newAudioCodec;
}

bool GetAudioStreamParams::audioCodecNull() const {
	// Nullable: true
	// Type Nullable: true
	

	return m_audioCodec.isNull();
}

void GetAudioStreamParams::setAudioCodecNull() {
	m_audioCodec.clear();
}


const qint32 &GetAudioStreamParams::audioSampleRate() const {
	return m_audioSampleRate.value();
}

void GetAudioStreamParams::setAudioSampleRate(qint32 newAudioSampleRate)  {
	m_audioSampleRate = newAudioSampleRate;
}

bool GetAudioStreamParams::audioSampleRateNull() const {
	// Nullable: true
	// Type Nullable: false
	

	return !m_audioSampleRate.has_value();
}

void GetAudioStreamParams::setAudioSampleRateNull() {
	m_audioSampleRate = std::nullopt;
}


const qint32 &GetAudioStreamParams::audioStreamIndex() const {
	return m_audioStreamIndex.value();
}

void GetAudioStreamParams::setAudioStreamIndex(qint32 newAudioStreamIndex)  {
	m_audioStreamIndex = newAudioStreamIndex;
}

bool GetAudioStreamParams::audioStreamIndexNull() const {
	// Nullable: true
	// Type Nullable: false
	

	return !m_audioStreamIndex.has_value();
}

void GetAudioStreamParams::setAudioStreamIndexNull() {
	m_audioStreamIndex = std::nullopt;
}


const bool &GetAudioStreamParams::breakOnNonKeyFrames() const {
	return m_breakOnNonKeyFrames.value();
}

void GetAudioStreamParams::setBreakOnNonKeyFrames(bool newBreakOnNonKeyFrames)  {
	m_breakOnNonKeyFrames = newBreakOnNonKeyFrames;
}

bool GetAudioStreamParams::breakOnNonKeyFramesNull() const {
	// Nullable: true
	// Type Nullable: false
	

	return !m_breakOnNonKeyFrames.has_value();
}

void GetAudioStreamParams::setBreakOnNonKeyFramesNull() {
	m_breakOnNonKeyFrames = std::nullopt;
}


const QString &GetAudioStreamParams::container() const {
	return m_container;
}

void GetAudioStreamParams::setContainer(QString newContainer)  {
	m_container = newContainer;
}

bool GetAudioStreamParams::containerNull() const {
	// Nullable: true
	// Type Nullable: true
	

	return m_container.isNull();
}

void GetAudioStreamParams::setContainerNull() {
	m_container.clear();
}


const EncodingContext &GetAudioStreamParams::context() const {
	return m_context;
}

void GetAudioStreamParams::setContext(EncodingContext newContext)  {
	m_context = newContext;
}

bool GetAudioStreamParams::contextNull() const {
	// Nullable: true
	// Type Nullable: true
	

	return m_context== EncodingContext::EnumNotSet;
}

void GetAudioStreamParams::setContextNull() {
	m_context= EncodingContext::EnumNotSet;
}


const bool &GetAudioStreamParams::copyTimestamps() const {
	return m_copyTimestamps.value();
}

void GetAudioStreamParams::setCopyTimestamps(bool newCopyTimestamps)  {
	m_copyTimestamps = newCopyTimestamps;
}

bool GetAudioStreamParams::copyTimestampsNull() const {
	// Nullable: true
	// Type Nullable: false
	

	return !m_copyTimestamps.has_value();
}

void GetAudioStreamParams::setCopyTimestampsNull() {
	m_copyTimestamps = std::nullopt;
}


const qint32 &GetAudioStreamParams::cpuCoreLimit() const {
	return m_cpuCoreLimit.value();
}

void GetAudioStreamParams::setCpuCoreLimit(qint32 newCpuCoreLimit)  {
	m_cpuCoreLimit = newCpuCoreLimit;
}

bool GetAudioStreamParams::cpuCoreLimitNull() const {
	// Nullable: true
	// Type Nullable: false
	

	return !m_cpuCoreLimit.has_value();
}

void GetAudioStreamParams::setCpuCoreLimitNull() {
	m_cpuCoreLimit = std::nullopt;
}


const bool &GetAudioStreamParams::deInterlace() const {
	return m_deInterlace.value();
}

void GetAudioStreamParams::setDeInterlace(bool newDeInterlace)  {
	m_deInterlace = newDeInterlace;
}

bool GetAudioStreamParams::deInterlaceNull() const {
	// Nullable: true
	// Type Nullable: false
	

	return !m_deInterlace.has_value();
}

void GetAudioStreamParams::setDeInterlaceNull() {
	m_deInterlace = std::nullopt;
}


const QString &GetAudioStreamParams::deviceId() const {
	return m_deviceId;
}

void GetAudioStreamParams::setDeviceId(QString newDeviceId)  {
	m_deviceId = newDeviceId;
}

bool GetAudioStreamParams::deviceIdNull() const {
	// Nullable: true
	// Type Nullable: true
	

	return m_deviceId.isNull();
}

void GetAudioStreamParams::setDeviceIdNull() {
	m_deviceId.clear();
}


const QString &GetAudioStreamParams::deviceProfileId() const {
	return m_deviceProfileId;
}

void GetAudioStreamParams::setDeviceProfileId(QString newDeviceProfileId)  {
	m_deviceProfileId = newDeviceProfileId;
}

bool GetAudioStreamParams::deviceProfileIdNull() const {
	// Nullable: true
	// Type Nullable: true
	

	return m_deviceProfileId.isNull();
}

void GetAudioStreamParams::setDeviceProfileIdNull() {
	m_deviceProfileId.clear();
}


const bool &GetAudioStreamParams::enableAutoStreamCopy() const {
	return m_enableAutoStreamCopy.value();
}

void GetAudioStreamParams::setEnableAutoStreamCopy(bool newEnableAutoStreamCopy)  {
	m_enableAutoStreamCopy = newEnableAutoStreamCopy;
}

bool GetAudioStreamParams::enableAutoStreamCopyNull() const {
	// Nullable: true
	// Type Nullable: false
	

	return !m_enableAutoStreamCopy.has_value();
}

void GetAudioStreamParams::setEnableAutoStreamCopyNull() {
	m_enableAutoStreamCopy = std::nullopt;
}


const bool &GetAudioStreamParams::enableMpegtsM2TsMode() const {
	return m_enableMpegtsM2TsMode.value();
}

void GetAudioStreamParams::setEnableMpegtsM2TsMode(bool newEnableMpegtsM2TsMode)  {
	m_enableMpegtsM2TsMode = newEnableMpegtsM2TsMode;
}

bool GetAudioStreamParams::enableMpegtsM2TsModeNull() const {
	// Nullable: true
	// Type Nullable: false
	

	return !m_enableMpegtsM2TsMode.has_value();
}

void GetAudioStreamParams::setEnableMpegtsM2TsModeNull() {
	m_enableMpegtsM2TsMode = std::nullopt;
}


const float &GetAudioStreamParams::framerate() const {
	return m_framerate.value();
}

void GetAudioStreamParams::setFramerate(float newFramerate)  {
	m_framerate = newFramerate;
}

bool GetAudioStreamParams::framerateNull() const {
	// Nullable: true
	// Type Nullable: false
	

	return !m_framerate.has_value();
}

void GetAudioStreamParams::setFramerateNull() {
	m_framerate = std::nullopt;
}


const qint32 &GetAudioStreamParams::height() const {
	return m_height.value();
}

void GetAudioStreamParams::setHeight(qint32 newHeight)  {
	m_height = newHeight;
}

bool GetAudioStreamParams::heightNull() const {
	// Nullable: true
	// Type Nullable: false
	

	return !m_height.has_value();
}

void GetAudioStreamParams::setHeightNull() {
	m_height = std::nullopt;
}


const QString &GetAudioStreamParams::level() const {
	return m_level;
}

void GetAudioStreamParams::setLevel(QString newLevel)  {
	m_level = newLevel;
}

bool GetAudioStreamParams::levelNull() const {
	// Nullable: true
	// Type Nullable: true
	

	return m_level.isNull();
}

void GetAudioStreamParams::setLevelNull() {
	m_level.clear();
}


const QString &GetAudioStreamParams::liveStreamId() const {
	return m_liveStreamId;
}

void GetAudioStreamParams::setLiveStreamId(QString newLiveStreamId)  {
	m_liveStreamId = newLiveStreamId;
}

bool GetAudioStreamParams::liveStreamIdNull() const {
	// Nullable: true
	// Type Nullable: true
	

	return m_liveStreamId.isNull();
}

void GetAudioStreamParams::setLiveStreamIdNull() {
	m_liveStreamId.clear();
}


const qint32 &GetAudioStreamParams::maxAudioBitDepth() const {
	return m_maxAudioBitDepth.value();
}

void GetAudioStreamParams::setMaxAudioBitDepth(qint32 newMaxAudioBitDepth)  {
	m_maxAudioBitDepth = newMaxAudioBitDepth;
}

bool GetAudioStreamParams::maxAudioBitDepthNull() const {
	// Nullable: true
	// Type Nullable: false
	

	return !m_maxAudioBitDepth.has_value();
}

void GetAudioStreamParams::setMaxAudioBitDepthNull() {
	m_maxAudioBitDepth = std::nullopt;
}


const qint32 &GetAudioStreamParams::maxAudioChannels() const {
	return m_maxAudioChannels.value();
}

void GetAudioStreamParams::setMaxAudioChannels(qint32 newMaxAudioChannels)  {
	m_maxAudioChannels = newMaxAudioChannels;
}

bool GetAudioStreamParams::maxAudioChannelsNull() const {
	// Nullable: true
	// Type Nullable: false
	

	return !m_maxAudioChannels.has_value();
}

void GetAudioStreamParams::setMaxAudioChannelsNull() {
	m_maxAudioChannels = std::nullopt;
}


const float &GetAudioStreamParams::maxFramerate() const {
	return m_maxFramerate.value();
}

void GetAudioStreamParams::setMaxFramerate(float newMaxFramerate)  {
	m_maxFramerate = newMaxFramerate;
}

bool GetAudioStreamParams::maxFramerateNull() const {
	// Nullable: true
	// Type Nullable: false
	

	return !m_maxFramerate.has_value();
}

void GetAudioStreamParams::setMaxFramerateNull() {
	m_maxFramerate = std::nullopt;
}


const qint32 &GetAudioStreamParams::maxRefFrames() const {
	return m_maxRefFrames.value();
}

void GetAudioStreamParams::setMaxRefFrames(qint32 newMaxRefFrames)  {
	m_maxRefFrames = newMaxRefFrames;
}

bool GetAudioStreamParams::maxRefFramesNull() const {
	// Nullable: true
	// Type Nullable: false
	

	return !m_maxRefFrames.has_value();
}

void GetAudioStreamParams::setMaxRefFramesNull() {
	m_maxRefFrames = std::nullopt;
}


const qint32 &GetAudioStreamParams::maxVideoBitDepth() const {
	return m_maxVideoBitDepth.value();
}

void GetAudioStreamParams::setMaxVideoBitDepth(qint32 newMaxVideoBitDepth)  {
	m_maxVideoBitDepth = newMaxVideoBitDepth;
}

bool GetAudioStreamParams::maxVideoBitDepthNull() const {
	// Nullable: true
	// Type Nullable: false
	

	return !m_maxVideoBitDepth.has_value();
}

void GetAudioStreamParams::setMaxVideoBitDepthNull() {
	m_maxVideoBitDepth = std::nullopt;
}


const QString &GetAudioStreamParams::mediaSourceId() const {
	return m_mediaSourceId;
}

void GetAudioStreamParams::setMediaSourceId(QString newMediaSourceId)  {
	m_mediaSourceId = newMediaSourceId;
}

bool GetAudioStreamParams::mediaSourceIdNull() const {
	// Nullable: true
	// Type Nullable: true
	

	return m_mediaSourceId.isNull();
}

void GetAudioStreamParams::setMediaSourceIdNull() {
	m_mediaSourceId.clear();
}


const qint32 &GetAudioStreamParams::minSegments() const {
	return m_minSegments.value();
}

void GetAudioStreamParams::setMinSegments(qint32 newMinSegments)  {
	m_minSegments = newMinSegments;
}

bool GetAudioStreamParams::minSegmentsNull() const {
	// Nullable: true
	// Type Nullable: false
	

	return !m_minSegments.has_value();
}

void GetAudioStreamParams::setMinSegmentsNull() {
	m_minSegments = std::nullopt;
}


const QString &GetAudioStreamParams::params() const {
	return m_params;
}

void GetAudioStreamParams::setParams(QString newParams)  {
	m_params = newParams;
}

bool GetAudioStreamParams::paramsNull() const {
	// Nullable: true
	// Type Nullable: true
	

	return m_params.isNull();
}

void GetAudioStreamParams::setParamsNull() {
	m_params.clear();
}


const QString &GetAudioStreamParams::playSessionId() const {
	return m_playSessionId;
}

void GetAudioStreamParams::setPlaySessionId(QString newPlaySessionId)  {
	m_playSessionId = newPlaySessionId;
}

bool GetAudioStreamParams::playSessionIdNull() const {
	// Nullable: true
	// Type Nullable: true
	

	return m_playSessionId.isNull();
}

void GetAudioStreamParams::setPlaySessionIdNull() {
	m_playSessionId.clear();
}


const QString &GetAudioStreamParams::profile() const {
	return m_profile;
}

void GetAudioStreamParams::setProfile(QString newProfile)  {
	m_profile = newProfile;
}

bool GetAudioStreamParams::profileNull() const {
	// Nullable: true
	// Type Nullable: true
	

	return m_profile.isNull();
}

void GetAudioStreamParams::setProfileNull() {
	m_profile.clear();
}


const bool &GetAudioStreamParams::requireAvc() const {
	return m_requireAvc.value();
}

void GetAudioStreamParams::setRequireAvc(bool newRequireAvc)  {
	m_requireAvc = newRequireAvc;
}

bool GetAudioStreamParams::requireAvcNull() const {
	// Nullable: true
	// Type Nullable: false
	

	return !m_requireAvc.has_value();
}

void GetAudioStreamParams::setRequireAvcNull() {
	m_requireAvc = std::nullopt;
}


const bool &GetAudioStreamParams::requireNonAnamorphic() const {
	return m_requireNonAnamorphic.value();
}

void GetAudioStreamParams::setRequireNonAnamorphic(bool newRequireNonAnamorphic)  {
	m_requireNonAnamorphic = newRequireNonAnamorphic;
}

bool GetAudioStreamParams::requireNonAnamorphicNull() const {
	// Nullable: true
	// Type Nullable: false
	

	return !m_requireNonAnamorphic.has_value();
}

void GetAudioStreamParams::setRequireNonAnamorphicNull() {
	m_requireNonAnamorphic = std::nullopt;
}


const QString &GetAudioStreamParams::segmentContainer() const {
	return m_segmentContainer;
}

void GetAudioStreamParams::setSegmentContainer(QString newSegmentContainer)  {
	m_segmentContainer = newSegmentContainer;
}

bool GetAudioStreamParams::segmentContainerNull() const {
	// Nullable: true
	// Type Nullable: true
	

	return m_segmentContainer.isNull();
}

void GetAudioStreamParams::setSegmentContainerNull() {
	m_segmentContainer.clear();
}


const qint32 &GetAudioStreamParams::segmentLength() const {
	return m_segmentLength.value();
}

void GetAudioStreamParams::setSegmentLength(qint32 newSegmentLength)  {
	m_segmentLength = newSegmentLength;
}

bool GetAudioStreamParams::segmentLengthNull() const {
	// Nullable: true
	// Type Nullable: false
	

	return !m_segmentLength.has_value();
}

void GetAudioStreamParams::setSegmentLengthNull() {
	m_segmentLength = std::nullopt;
}


const qint64 &GetAudioStreamParams::startTimeTicks() const {
	return m_startTimeTicks.value();
}

void GetAudioStreamParams::setStartTimeTicks(qint64 newStartTimeTicks)  {
	m_startTimeTicks = newStartTimeTicks;
}

bool GetAudioStreamParams::startTimeTicksNull() const {
	// Nullable: true
	// Type Nullable: false
	

	return !m_startTimeTicks.has_value();
}

void GetAudioStreamParams::setStartTimeTicksNull() {
	m_startTimeTicks = std::nullopt;
}


const bool &GetAudioStreamParams::staticStreaming() const {
	return m_staticStreaming.value();
}

void GetAudioStreamParams::setStaticStreaming(bool newStaticStreaming)  {
	m_staticStreaming = newStaticStreaming;
}

bool GetAudioStreamParams::staticStreamingNull() const {
	// Nullable: true
	// Type Nullable: false
	

	return !m_staticStreaming.has_value();
}

void GetAudioStreamParams::setStaticStreamingNull() {
	m_staticStreaming = std::nullopt;
}


const QJsonObject &GetAudioStreamParams::streamOptions() const {
	return m_streamOptions;
}

void GetAudioStreamParams::setStreamOptions(QJsonObject newStreamOptions)  {
	m_streamOptions = newStreamOptions;
}

bool GetAudioStreamParams::streamOptionsNull() const {
	// Nullable: true
	// Type Nullable: true
	

	return m_streamOptions.isEmpty();
}

void GetAudioStreamParams::setStreamOptionsNull() {
	m_streamOptions= QJsonObject();
}


const QString &GetAudioStreamParams::subtitleCodec() const {
	return m_subtitleCodec;
}

void GetAudioStreamParams::setSubtitleCodec(QString newSubtitleCodec)  {
	m_subtitleCodec = newSubtitleCodec;
}

bool GetAudioStreamParams::subtitleCodecNull() const {
	// Nullable: true
	// Type Nullable: true
	

	return m_subtitleCodec.isNull();
}

void GetAudioStreamParams::setSubtitleCodecNull() {
	m_subtitleCodec.clear();
}


const SubtitleDeliveryMethod &GetAudioStreamParams::subtitleMethod() const {
	return m_subtitleMethod;
}

void GetAudioStreamParams::setSubtitleMethod(SubtitleDeliveryMethod newSubtitleMethod)  {
	m_subtitleMethod = newSubtitleMethod;
}

bool GetAudioStreamParams::subtitleMethodNull() const {
	// Nullable: true
	// Type Nullable: true
	

	return m_subtitleMethod== SubtitleDeliveryMethod::EnumNotSet;
}

void GetAudioStreamParams::setSubtitleMethodNull() {
	m_subtitleMethod= SubtitleDeliveryMethod::EnumNotSet;
}


const qint32 &GetAudioStreamParams::subtitleStreamIndex() const {
	return m_subtitleStreamIndex.value();
}

void GetAudioStreamParams::setSubtitleStreamIndex(qint32 newSubtitleStreamIndex)  {
	m_subtitleStreamIndex = newSubtitleStreamIndex;
}

bool GetAudioStreamParams::subtitleStreamIndexNull() const {
	// Nullable: true
	// Type Nullable: false
	

	return !m_subtitleStreamIndex.has_value();
}

void GetAudioStreamParams::setSubtitleStreamIndexNull() {
	m_subtitleStreamIndex = std::nullopt;
}


const QString &GetAudioStreamParams::tag() const {
	return m_tag;
}

void GetAudioStreamParams::setTag(QString newTag)  {
	m_tag = newTag;
}

bool GetAudioStreamParams::tagNull() const {
	// Nullable: true
	// Type Nullable: true
	

	return m_tag.isNull();
}

void GetAudioStreamParams::setTagNull() {
	m_tag.clear();
}


const QString &GetAudioStreamParams::transcodeReasons() const {
	return m_transcodeReasons;
}

void GetAudioStreamParams::setTranscodeReasons(QString newTranscodeReasons)  {
	m_transcodeReasons = newTranscodeReasons;
}

bool GetAudioStreamParams::transcodeReasonsNull() const {
	// Nullable: true
	// Type Nullable: true
	

	return m_transcodeReasons.isNull();
}

void GetAudioStreamParams::setTranscodeReasonsNull() {
	m_transcodeReasons.clear();
}


const qint32 &GetAudioStreamParams::transcodingMaxAudioChannels() const {
	return m_transcodingMaxAudioChannels.value();
}

void GetAudioStreamParams::setTranscodingMaxAudioChannels(qint32 newTranscodingMaxAudioChannels)  {
	m_transcodingMaxAudioChannels = newTranscodingMaxAudioChannels;
}

bool GetAudioStreamParams::transcodingMaxAudioChannelsNull() const {
	// Nullable: true
	// Type Nullable: false
	

	return !m_transcodingMaxAudioChannels.has_value();
}

void GetAudioStreamParams::setTranscodingMaxAudioChannelsNull() {
	m_transcodingMaxAudioChannels = std::nullopt;
}


const qint32 &GetAudioStreamParams::videoBitRate() const {
	return m_videoBitRate.value();
}

void GetAudioStreamParams::setVideoBitRate(qint32 newVideoBitRate)  {
	m_videoBitRate = newVideoBitRate;
}

bool GetAudioStreamParams::videoBitRateNull() const {
	// Nullable: true
	// Type Nullable: false
	

	return !m_videoBitRate.has_value();
}

void GetAudioStreamParams::setVideoBitRateNull() {
	m_videoBitRate = std::nullopt;
}


const QString &GetAudioStreamParams::videoCodec() const {
	return m_videoCodec;
}

void GetAudioStreamParams::setVideoCodec(QString newVideoCodec)  {
	m_videoCodec = newVideoCodec;
}

bool GetAudioStreamParams::videoCodecNull() const {
	// Nullable: true
	// Type Nullable: true
	

	return m_videoCodec.isNull();
}

void GetAudioStreamParams::setVideoCodecNull() {
	m_videoCodec.clear();
}


const qint32 &GetAudioStreamParams::videoStreamIndex() const {
	return m_videoStreamIndex.value();
}

void GetAudioStreamParams::setVideoStreamIndex(qint32 newVideoStreamIndex)  {
	m_videoStreamIndex = newVideoStreamIndex;
}

bool GetAudioStreamParams::videoStreamIndexNull() const {
	// Nullable: true
	// Type Nullable: false
	

	return !m_videoStreamIndex.has_value();
}

void GetAudioStreamParams::setVideoStreamIndexNull() {
	m_videoStreamIndex = std::nullopt;
}


const qint32 &GetAudioStreamParams::width() const {
	return m_width.value();
}

void GetAudioStreamParams::setWidth(qint32 newWidth)  {
	m_width = newWidth;
}

bool GetAudioStreamParams::widthNull() const {
	// Nullable: true
	// Type Nullable: false
	

	return !m_width.has_value();
}

void GetAudioStreamParams::setWidthNull() {
	m_width = std::nullopt;
}




// GetAudioStreamByContainerParams

const QString &GetAudioStreamByContainerParams::container() const {
	return m_container;
}

void GetAudioStreamByContainerParams::setContainer(QString newContainer) {
	m_container = newContainer;
}


const QString &GetAudioStreamByContainerParams::itemId() const {
	return m_itemId;
}

void GetAudioStreamByContainerParams::setItemId(QString newItemId) {
	m_itemId = newItemId;
}


const bool &GetAudioStreamByContainerParams::allowAudioStreamCopy() const {
	return m_allowAudioStreamCopy.value();
}

void GetAudioStreamByContainerParams::setAllowAudioStreamCopy(bool newAllowAudioStreamCopy)  {
	m_allowAudioStreamCopy = newAllowAudioStreamCopy;
}

bool GetAudioStreamByContainerParams::allowAudioStreamCopyNull() const {
	// Nullable: true
	// Type Nullable: false
	

	return !m_allowAudioStreamCopy.has_value();
}

void GetAudioStreamByContainerParams::setAllowAudioStreamCopyNull() {
	m_allowAudioStreamCopy = std::nullopt;
}


const bool &GetAudioStreamByContainerParams::allowVideoStreamCopy() const {
	return m_allowVideoStreamCopy.value();
}

void GetAudioStreamByContainerParams::setAllowVideoStreamCopy(bool newAllowVideoStreamCopy)  {
	m_allowVideoStreamCopy = newAllowVideoStreamCopy;
}

bool GetAudioStreamByContainerParams::allowVideoStreamCopyNull() const {
	// Nullable: true
	// Type Nullable: false
	

	return !m_allowVideoStreamCopy.has_value();
}

void GetAudioStreamByContainerParams::setAllowVideoStreamCopyNull() {
	m_allowVideoStreamCopy = std::nullopt;
}


const qint32 &GetAudioStreamByContainerParams::audioBitRate() const {
	return m_audioBitRate.value();
}

void GetAudioStreamByContainerParams::setAudioBitRate(qint32 newAudioBitRate)  {
	m_audioBitRate = newAudioBitRate;
}

bool GetAudioStreamByContainerParams::audioBitRateNull() const {
	// Nullable: true
	// Type Nullable: false
	

	return !m_audioBitRate.has_value();
}

void GetAudioStreamByContainerParams::setAudioBitRateNull() {
	m_audioBitRate = std::nullopt;
}


const qint32 &GetAudioStreamByContainerParams::audioChannels() const {
	return m_audioChannels.value();
}

void GetAudioStreamByContainerParams::setAudioChannels(qint32 newAudioChannels)  {
	m_audioChannels = newAudioChannels;
}

bool GetAudioStreamByContainerParams::audioChannelsNull() const {
	// Nullable: true
	// Type Nullable: false
	

	return !m_audioChannels.has_value();
}

void GetAudioStreamByContainerParams::setAudioChannelsNull() {
	m_audioChannels = std::nullopt;
}


const QString &GetAudioStreamByContainerParams::audioCodec() const {
	return m_audioCodec;
}

void GetAudioStreamByContainerParams::setAudioCodec(QString newAudioCodec)  {
	m_audioCodec = newAudioCodec;
}

bool GetAudioStreamByContainerParams::audioCodecNull() const {
	// Nullable: true
	// Type Nullable: true
	

	return m_audioCodec.isNull();
}

void GetAudioStreamByContainerParams::setAudioCodecNull() {
	m_audioCodec.clear();
}


const qint32 &GetAudioStreamByContainerParams::audioSampleRate() const {
	return m_audioSampleRate.value();
}

void GetAudioStreamByContainerParams::setAudioSampleRate(qint32 newAudioSampleRate)  {
	m_audioSampleRate = newAudioSampleRate;
}

bool GetAudioStreamByContainerParams::audioSampleRateNull() const {
	// Nullable: true
	// Type Nullable: false
	

	return !m_audioSampleRate.has_value();
}

void GetAudioStreamByContainerParams::setAudioSampleRateNull() {
	m_audioSampleRate = std::nullopt;
}


const qint32 &GetAudioStreamByContainerParams::audioStreamIndex() const {
	return m_audioStreamIndex.value();
}

void GetAudioStreamByContainerParams::setAudioStreamIndex(qint32 newAudioStreamIndex)  {
	m_audioStreamIndex = newAudioStreamIndex;
}

bool GetAudioStreamByContainerParams::audioStreamIndexNull() const {
	// Nullable: true
	// Type Nullable: false
	

	return !m_audioStreamIndex.has_value();
}

void GetAudioStreamByContainerParams::setAudioStreamIndexNull() {
	m_audioStreamIndex = std::nullopt;
}


const bool &GetAudioStreamByContainerParams::breakOnNonKeyFrames() const {
	return m_breakOnNonKeyFrames.value();
}

void GetAudioStreamByContainerParams::setBreakOnNonKeyFrames(bool newBreakOnNonKeyFrames)  {
	m_breakOnNonKeyFrames = newBreakOnNonKeyFrames;
}

bool GetAudioStreamByContainerParams::breakOnNonKeyFramesNull() const {
	// Nullable: true
	// Type Nullable: false
	

	return !m_breakOnNonKeyFrames.has_value();
}

void GetAudioStreamByContainerParams::setBreakOnNonKeyFramesNull() {
	m_breakOnNonKeyFrames = std::nullopt;
}


const EncodingContext &GetAudioStreamByContainerParams::context() const {
	return m_context;
}

void GetAudioStreamByContainerParams::setContext(EncodingContext newContext)  {
	m_context = newContext;
}

bool GetAudioStreamByContainerParams::contextNull() const {
	// Nullable: true
	// Type Nullable: true
	

	return m_context== EncodingContext::EnumNotSet;
}

void GetAudioStreamByContainerParams::setContextNull() {
	m_context= EncodingContext::EnumNotSet;
}


const bool &GetAudioStreamByContainerParams::copyTimestamps() const {
	return m_copyTimestamps.value();
}

void GetAudioStreamByContainerParams::setCopyTimestamps(bool newCopyTimestamps)  {
	m_copyTimestamps = newCopyTimestamps;
}

bool GetAudioStreamByContainerParams::copyTimestampsNull() const {
	// Nullable: true
	// Type Nullable: false
	

	return !m_copyTimestamps.has_value();
}

void GetAudioStreamByContainerParams::setCopyTimestampsNull() {
	m_copyTimestamps = std::nullopt;
}


const qint32 &GetAudioStreamByContainerParams::cpuCoreLimit() const {
	return m_cpuCoreLimit.value();
}

void GetAudioStreamByContainerParams::setCpuCoreLimit(qint32 newCpuCoreLimit)  {
	m_cpuCoreLimit = newCpuCoreLimit;
}

bool GetAudioStreamByContainerParams::cpuCoreLimitNull() const {
	// Nullable: true
	// Type Nullable: false
	

	return !m_cpuCoreLimit.has_value();
}

void GetAudioStreamByContainerParams::setCpuCoreLimitNull() {
	m_cpuCoreLimit = std::nullopt;
}


const bool &GetAudioStreamByContainerParams::deInterlace() const {
	return m_deInterlace.value();
}

void GetAudioStreamByContainerParams::setDeInterlace(bool newDeInterlace)  {
	m_deInterlace = newDeInterlace;
}

bool GetAudioStreamByContainerParams::deInterlaceNull() const {
	// Nullable: true
	// Type Nullable: false
	

	return !m_deInterlace.has_value();
}

void GetAudioStreamByContainerParams::setDeInterlaceNull() {
	m_deInterlace = std::nullopt;
}


const QString &GetAudioStreamByContainerParams::deviceId() const {
	return m_deviceId;
}

void GetAudioStreamByContainerParams::setDeviceId(QString newDeviceId)  {
	m_deviceId = newDeviceId;
}

bool GetAudioStreamByContainerParams::deviceIdNull() const {
	// Nullable: true
	// Type Nullable: true
	

	return m_deviceId.isNull();
}

void GetAudioStreamByContainerParams::setDeviceIdNull() {
	m_deviceId.clear();
}


const QString &GetAudioStreamByContainerParams::deviceProfileId() const {
	return m_deviceProfileId;
}

void GetAudioStreamByContainerParams::setDeviceProfileId(QString newDeviceProfileId)  {
	m_deviceProfileId = newDeviceProfileId;
}

bool GetAudioStreamByContainerParams::deviceProfileIdNull() const {
	// Nullable: true
	// Type Nullable: true
	

	return m_deviceProfileId.isNull();
}

void GetAudioStreamByContainerParams::setDeviceProfileIdNull() {
	m_deviceProfileId.clear();
}


const bool &GetAudioStreamByContainerParams::enableAutoStreamCopy() const {
	return m_enableAutoStreamCopy.value();
}

void GetAudioStreamByContainerParams::setEnableAutoStreamCopy(bool newEnableAutoStreamCopy)  {
	m_enableAutoStreamCopy = newEnableAutoStreamCopy;
}

bool GetAudioStreamByContainerParams::enableAutoStreamCopyNull() const {
	// Nullable: true
	// Type Nullable: false
	

	return !m_enableAutoStreamCopy.has_value();
}

void GetAudioStreamByContainerParams::setEnableAutoStreamCopyNull() {
	m_enableAutoStreamCopy = std::nullopt;
}


const bool &GetAudioStreamByContainerParams::enableMpegtsM2TsMode() const {
	return m_enableMpegtsM2TsMode.value();
}

void GetAudioStreamByContainerParams::setEnableMpegtsM2TsMode(bool newEnableMpegtsM2TsMode)  {
	m_enableMpegtsM2TsMode = newEnableMpegtsM2TsMode;
}

bool GetAudioStreamByContainerParams::enableMpegtsM2TsModeNull() const {
	// Nullable: true
	// Type Nullable: false
	

	return !m_enableMpegtsM2TsMode.has_value();
}

void GetAudioStreamByContainerParams::setEnableMpegtsM2TsModeNull() {
	m_enableMpegtsM2TsMode = std::nullopt;
}


const float &GetAudioStreamByContainerParams::framerate() const {
	return m_framerate.value();
}

void GetAudioStreamByContainerParams::setFramerate(float newFramerate)  {
	m_framerate = newFramerate;
}

bool GetAudioStreamByContainerParams::framerateNull() const {
	// Nullable: true
	// Type Nullable: false
	

	return !m_framerate.has_value();
}

void GetAudioStreamByContainerParams::setFramerateNull() {
	m_framerate = std::nullopt;
}


const qint32 &GetAudioStreamByContainerParams::height() const {
	return m_height.value();
}

void GetAudioStreamByContainerParams::setHeight(qint32 newHeight)  {
	m_height = newHeight;
}

bool GetAudioStreamByContainerParams::heightNull() const {
	// Nullable: true
	// Type Nullable: false
	

	return !m_height.has_value();
}

void GetAudioStreamByContainerParams::setHeightNull() {
	m_height = std::nullopt;
}


const QString &GetAudioStreamByContainerParams::level() const {
	return m_level;
}

void GetAudioStreamByContainerParams::setLevel(QString newLevel)  {
	m_level = newLevel;
}

bool GetAudioStreamByContainerParams::levelNull() const {
	// Nullable: true
	// Type Nullable: true
	

	return m_level.isNull();
}

void GetAudioStreamByContainerParams::setLevelNull() {
	m_level.clear();
}


const QString &GetAudioStreamByContainerParams::liveStreamId() const {
	return m_liveStreamId;
}

void GetAudioStreamByContainerParams::setLiveStreamId(QString newLiveStreamId)  {
	m_liveStreamId = newLiveStreamId;
}

bool GetAudioStreamByContainerParams::liveStreamIdNull() const {
	// Nullable: true
	// Type Nullable: true
	

	return m_liveStreamId.isNull();
}

void GetAudioStreamByContainerParams::setLiveStreamIdNull() {
	m_liveStreamId.clear();
}


const qint32 &GetAudioStreamByContainerParams::maxAudioBitDepth() const {
	return m_maxAudioBitDepth.value();
}

void GetAudioStreamByContainerParams::setMaxAudioBitDepth(qint32 newMaxAudioBitDepth)  {
	m_maxAudioBitDepth = newMaxAudioBitDepth;
}

bool GetAudioStreamByContainerParams::maxAudioBitDepthNull() const {
	// Nullable: true
	// Type Nullable: false
	

	return !m_maxAudioBitDepth.has_value();
}

void GetAudioStreamByContainerParams::setMaxAudioBitDepthNull() {
	m_maxAudioBitDepth = std::nullopt;
}


const qint32 &GetAudioStreamByContainerParams::maxAudioChannels() const {
	return m_maxAudioChannels.value();
}

void GetAudioStreamByContainerParams::setMaxAudioChannels(qint32 newMaxAudioChannels)  {
	m_maxAudioChannels = newMaxAudioChannels;
}

bool GetAudioStreamByContainerParams::maxAudioChannelsNull() const {
	// Nullable: true
	// Type Nullable: false
	

	return !m_maxAudioChannels.has_value();
}

void GetAudioStreamByContainerParams::setMaxAudioChannelsNull() {
	m_maxAudioChannels = std::nullopt;
}


const float &GetAudioStreamByContainerParams::maxFramerate() const {
	return m_maxFramerate.value();
}

void GetAudioStreamByContainerParams::setMaxFramerate(float newMaxFramerate)  {
	m_maxFramerate = newMaxFramerate;
}

bool GetAudioStreamByContainerParams::maxFramerateNull() const {
	// Nullable: true
	// Type Nullable: false
	

	return !m_maxFramerate.has_value();
}

void GetAudioStreamByContainerParams::setMaxFramerateNull() {
	m_maxFramerate = std::nullopt;
}


const qint32 &GetAudioStreamByContainerParams::maxRefFrames() const {
	return m_maxRefFrames.value();
}

void GetAudioStreamByContainerParams::setMaxRefFrames(qint32 newMaxRefFrames)  {
	m_maxRefFrames = newMaxRefFrames;
}

bool GetAudioStreamByContainerParams::maxRefFramesNull() const {
	// Nullable: true
	// Type Nullable: false
	

	return !m_maxRefFrames.has_value();
}

void GetAudioStreamByContainerParams::setMaxRefFramesNull() {
	m_maxRefFrames = std::nullopt;
}


const qint32 &GetAudioStreamByContainerParams::maxVideoBitDepth() const {
	return m_maxVideoBitDepth.value();
}

void GetAudioStreamByContainerParams::setMaxVideoBitDepth(qint32 newMaxVideoBitDepth)  {
	m_maxVideoBitDepth = newMaxVideoBitDepth;
}

bool GetAudioStreamByContainerParams::maxVideoBitDepthNull() const {
	// Nullable: true
	// Type Nullable: false
	

	return !m_maxVideoBitDepth.has_value();
}

void GetAudioStreamByContainerParams::setMaxVideoBitDepthNull() {
	m_maxVideoBitDepth = std::nullopt;
}


const QString &GetAudioStreamByContainerParams::mediaSourceId() const {
	return m_mediaSourceId;
}

void GetAudioStreamByContainerParams::setMediaSourceId(QString newMediaSourceId)  {
	m_mediaSourceId = newMediaSourceId;
}

bool GetAudioStreamByContainerParams::mediaSourceIdNull() const {
	// Nullable: true
	// Type Nullable: true
	

	return m_mediaSourceId.isNull();
}

void GetAudioStreamByContainerParams::setMediaSourceIdNull() {
	m_mediaSourceId.clear();
}


const qint32 &GetAudioStreamByContainerParams::minSegments() const {
	return m_minSegments.value();
}

void GetAudioStreamByContainerParams::setMinSegments(qint32 newMinSegments)  {
	m_minSegments = newMinSegments;
}

bool GetAudioStreamByContainerParams::minSegmentsNull() const {
	// Nullable: true
	// Type Nullable: false
	

	return !m_minSegments.has_value();
}

void GetAudioStreamByContainerParams::setMinSegmentsNull() {
	m_minSegments = std::nullopt;
}


const QString &GetAudioStreamByContainerParams::params() const {
	return m_params;
}

void GetAudioStreamByContainerParams::setParams(QString newParams)  {
	m_params = newParams;
}

bool GetAudioStreamByContainerParams::paramsNull() const {
	// Nullable: true
	// Type Nullable: true
	

	return m_params.isNull();
}

void GetAudioStreamByContainerParams::setParamsNull() {
	m_params.clear();
}


const QString &GetAudioStreamByContainerParams::playSessionId() const {
	return m_playSessionId;
}

void GetAudioStreamByContainerParams::setPlaySessionId(QString newPlaySessionId)  {
	m_playSessionId = newPlaySessionId;
}

bool GetAudioStreamByContainerParams::playSessionIdNull() const {
	// Nullable: true
	// Type Nullable: true
	

	return m_playSessionId.isNull();
}

void GetAudioStreamByContainerParams::setPlaySessionIdNull() {
	m_playSessionId.clear();
}


const QString &GetAudioStreamByContainerParams::profile() const {
	return m_profile;
}

void GetAudioStreamByContainerParams::setProfile(QString newProfile)  {
	m_profile = newProfile;
}

bool GetAudioStreamByContainerParams::profileNull() const {
	// Nullable: true
	// Type Nullable: true
	

	return m_profile.isNull();
}

void GetAudioStreamByContainerParams::setProfileNull() {
	m_profile.clear();
}


const bool &GetAudioStreamByContainerParams::requireAvc() const {
	return m_requireAvc.value();
}

void GetAudioStreamByContainerParams::setRequireAvc(bool newRequireAvc)  {
	m_requireAvc = newRequireAvc;
}

bool GetAudioStreamByContainerParams::requireAvcNull() const {
	// Nullable: true
	// Type Nullable: false
	

	return !m_requireAvc.has_value();
}

void GetAudioStreamByContainerParams::setRequireAvcNull() {
	m_requireAvc = std::nullopt;
}


const bool &GetAudioStreamByContainerParams::requireNonAnamorphic() const {
	return m_requireNonAnamorphic.value();
}

void GetAudioStreamByContainerParams::setRequireNonAnamorphic(bool newRequireNonAnamorphic)  {
	m_requireNonAnamorphic = newRequireNonAnamorphic;
}

bool GetAudioStreamByContainerParams::requireNonAnamorphicNull() const {
	// Nullable: true
	// Type Nullable: false
	

	return !m_requireNonAnamorphic.has_value();
}

void GetAudioStreamByContainerParams::setRequireNonAnamorphicNull() {
	m_requireNonAnamorphic = std::nullopt;
}


const QString &GetAudioStreamByContainerParams::segmentContainer() const {
	return m_segmentContainer;
}

void GetAudioStreamByContainerParams::setSegmentContainer(QString newSegmentContainer)  {
	m_segmentContainer = newSegmentContainer;
}

bool GetAudioStreamByContainerParams::segmentContainerNull() const {
	// Nullable: true
	// Type Nullable: true
	

	return m_segmentContainer.isNull();
}

void GetAudioStreamByContainerParams::setSegmentContainerNull() {
	m_segmentContainer.clear();
}


const qint32 &GetAudioStreamByContainerParams::segmentLength() const {
	return m_segmentLength.value();
}

void GetAudioStreamByContainerParams::setSegmentLength(qint32 newSegmentLength)  {
	m_segmentLength = newSegmentLength;
}

bool GetAudioStreamByContainerParams::segmentLengthNull() const {
	// Nullable: true
	// Type Nullable: false
	

	return !m_segmentLength.has_value();
}

void GetAudioStreamByContainerParams::setSegmentLengthNull() {
	m_segmentLength = std::nullopt;
}


const qint64 &GetAudioStreamByContainerParams::startTimeTicks() const {
	return m_startTimeTicks.value();
}

void GetAudioStreamByContainerParams::setStartTimeTicks(qint64 newStartTimeTicks)  {
	m_startTimeTicks = newStartTimeTicks;
}

bool GetAudioStreamByContainerParams::startTimeTicksNull() const {
	// Nullable: true
	// Type Nullable: false
	

	return !m_startTimeTicks.has_value();
}

void GetAudioStreamByContainerParams::setStartTimeTicksNull() {
	m_startTimeTicks = std::nullopt;
}


const bool &GetAudioStreamByContainerParams::staticStreaming() const {
	return m_staticStreaming.value();
}

void GetAudioStreamByContainerParams::setStaticStreaming(bool newStaticStreaming)  {
	m_staticStreaming = newStaticStreaming;
}

bool GetAudioStreamByContainerParams::staticStreamingNull() const {
	// Nullable: true
	// Type Nullable: false
	

	return !m_staticStreaming.has_value();
}

void GetAudioStreamByContainerParams::setStaticStreamingNull() {
	m_staticStreaming = std::nullopt;
}


const QJsonObject &GetAudioStreamByContainerParams::streamOptions() const {
	return m_streamOptions;
}

void GetAudioStreamByContainerParams::setStreamOptions(QJsonObject newStreamOptions)  {
	m_streamOptions = newStreamOptions;
}

bool GetAudioStreamByContainerParams::streamOptionsNull() const {
	// Nullable: true
	// Type Nullable: true
	

	return m_streamOptions.isEmpty();
}

void GetAudioStreamByContainerParams::setStreamOptionsNull() {
	m_streamOptions= QJsonObject();
}


const QString &GetAudioStreamByContainerParams::subtitleCodec() const {
	return m_subtitleCodec;
}

void GetAudioStreamByContainerParams::setSubtitleCodec(QString newSubtitleCodec)  {
	m_subtitleCodec = newSubtitleCodec;
}

bool GetAudioStreamByContainerParams::subtitleCodecNull() const {
	// Nullable: true
	// Type Nullable: true
	

	return m_subtitleCodec.isNull();
}

void GetAudioStreamByContainerParams::setSubtitleCodecNull() {
	m_subtitleCodec.clear();
}


const SubtitleDeliveryMethod &GetAudioStreamByContainerParams::subtitleMethod() const {
	return m_subtitleMethod;
}

void GetAudioStreamByContainerParams::setSubtitleMethod(SubtitleDeliveryMethod newSubtitleMethod)  {
	m_subtitleMethod = newSubtitleMethod;
}

bool GetAudioStreamByContainerParams::subtitleMethodNull() const {
	// Nullable: true
	// Type Nullable: true
	

	return m_subtitleMethod== SubtitleDeliveryMethod::EnumNotSet;
}

void GetAudioStreamByContainerParams::setSubtitleMethodNull() {
	m_subtitleMethod= SubtitleDeliveryMethod::EnumNotSet;
}


const qint32 &GetAudioStreamByContainerParams::subtitleStreamIndex() const {
	return m_subtitleStreamIndex.value();
}

void GetAudioStreamByContainerParams::setSubtitleStreamIndex(qint32 newSubtitleStreamIndex)  {
	m_subtitleStreamIndex = newSubtitleStreamIndex;
}

bool GetAudioStreamByContainerParams::subtitleStreamIndexNull() const {
	// Nullable: true
	// Type Nullable: false
	

	return !m_subtitleStreamIndex.has_value();
}

void GetAudioStreamByContainerParams::setSubtitleStreamIndexNull() {
	m_subtitleStreamIndex = std::nullopt;
}


const QString &GetAudioStreamByContainerParams::tag() const {
	return m_tag;
}

void GetAudioStreamByContainerParams::setTag(QString newTag)  {
	m_tag = newTag;
}

bool GetAudioStreamByContainerParams::tagNull() const {
	// Nullable: true
	// Type Nullable: true
	

	return m_tag.isNull();
}

void GetAudioStreamByContainerParams::setTagNull() {
	m_tag.clear();
}


const QString &GetAudioStreamByContainerParams::transcodeReasons() const {
	return m_transcodeReasons;
}

void GetAudioStreamByContainerParams::setTranscodeReasons(QString newTranscodeReasons)  {
	m_transcodeReasons = newTranscodeReasons;
}

bool GetAudioStreamByContainerParams::transcodeReasonsNull() const {
	// Nullable: true
	// Type Nullable: true
	

	return m_transcodeReasons.isNull();
}

void GetAudioStreamByContainerParams::setTranscodeReasonsNull() {
	m_transcodeReasons.clear();
}


const qint32 &GetAudioStreamByContainerParams::transcodingMaxAudioChannels() const {
	return m_transcodingMaxAudioChannels.value();
}

void GetAudioStreamByContainerParams::setTranscodingMaxAudioChannels(qint32 newTranscodingMaxAudioChannels)  {
	m_transcodingMaxAudioChannels = newTranscodingMaxAudioChannels;
}

bool GetAudioStreamByContainerParams::transcodingMaxAudioChannelsNull() const {
	// Nullable: true
	// Type Nullable: false
	

	return !m_transcodingMaxAudioChannels.has_value();
}

void GetAudioStreamByContainerParams::setTranscodingMaxAudioChannelsNull() {
	m_transcodingMaxAudioChannels = std::nullopt;
}


const qint32 &GetAudioStreamByContainerParams::videoBitRate() const {
	return m_videoBitRate.value();
}

void GetAudioStreamByContainerParams::setVideoBitRate(qint32 newVideoBitRate)  {
	m_videoBitRate = newVideoBitRate;
}

bool GetAudioStreamByContainerParams::videoBitRateNull() const {
	// Nullable: true
	// Type Nullable: false
	

	return !m_videoBitRate.has_value();
}

void GetAudioStreamByContainerParams::setVideoBitRateNull() {
	m_videoBitRate = std::nullopt;
}


const QString &GetAudioStreamByContainerParams::videoCodec() const {
	return m_videoCodec;
}

void GetAudioStreamByContainerParams::setVideoCodec(QString newVideoCodec)  {
	m_videoCodec = newVideoCodec;
}

bool GetAudioStreamByContainerParams::videoCodecNull() const {
	// Nullable: true
	// Type Nullable: true
	

	return m_videoCodec.isNull();
}

void GetAudioStreamByContainerParams::setVideoCodecNull() {
	m_videoCodec.clear();
}


const qint32 &GetAudioStreamByContainerParams::videoStreamIndex() const {
	return m_videoStreamIndex.value();
}

void GetAudioStreamByContainerParams::setVideoStreamIndex(qint32 newVideoStreamIndex)  {
	m_videoStreamIndex = newVideoStreamIndex;
}

bool GetAudioStreamByContainerParams::videoStreamIndexNull() const {
	// Nullable: true
	// Type Nullable: false
	

	return !m_videoStreamIndex.has_value();
}

void GetAudioStreamByContainerParams::setVideoStreamIndexNull() {
	m_videoStreamIndex = std::nullopt;
}


const qint32 &GetAudioStreamByContainerParams::width() const {
	return m_width.value();
}

void GetAudioStreamByContainerParams::setWidth(qint32 newWidth)  {
	m_width = newWidth;
}

bool GetAudioStreamByContainerParams::widthNull() const {
	// Nullable: true
	// Type Nullable: false
	

	return !m_width.has_value();
}

void GetAudioStreamByContainerParams::setWidthNull() {
	m_width = std::nullopt;
}




// GetAuthProvidersParams



// GetBitrateTestBytesParams

const qint32 &GetBitrateTestBytesParams::size() const {
	return m_size.value();
}

void GetBitrateTestBytesParams::setSize(qint32 newSize)  {
	m_size = newSize;
}

bool GetBitrateTestBytesParams::sizeNull() const {
	// Nullable: false
	// Type Nullable: false
	

	return !m_size.has_value();
}

void GetBitrateTestBytesParams::setSizeNull() {
	m_size = std::nullopt;
}




// GetBookRemoteSearchResultsParams

const QSharedPointer<BookInfoRemoteSearchQuery> &GetBookRemoteSearchResultsParams::body() const {
	return m_body;
}

void GetBookRemoteSearchResultsParams::setBody(QSharedPointer<BookInfoRemoteSearchQuery> newBody) {
	m_body = newBody;
}




// GetBoxSetRemoteSearchResultsParams

const QSharedPointer<BoxSetInfoRemoteSearchQuery> &GetBoxSetRemoteSearchResultsParams::body() const {
	return m_body;
}

void GetBoxSetRemoteSearchResultsParams::setBody(QSharedPointer<BoxSetInfoRemoteSearchQuery> newBody) {
	m_body = newBody;
}




// GetBrandingCssParams



// GetBrandingCss_2Params



// GetBrandingOptionsParams



// GetChannelParams

const QString &GetChannelParams::channelId() const {
	return m_channelId;
}

void GetChannelParams::setChannelId(QString newChannelId) {
	m_channelId = newChannelId;
}


const QString &GetChannelParams::userId() const {
	return m_userId;
}

void GetChannelParams::setUserId(QString newUserId)  {
	m_userId = newUserId;
}

bool GetChannelParams::userIdNull() const {
	// Nullable: true
	// Type Nullable: true
	

	return m_userId.isNull();
}

void GetChannelParams::setUserIdNull() {
	m_userId.clear();
}




// GetChannelFeaturesParams

const QString &GetChannelFeaturesParams::channelId() const {
	return m_channelId;
}

void GetChannelFeaturesParams::setChannelId(QString newChannelId) {
	m_channelId = newChannelId;
}




// GetChannelItemsParams

const QString &GetChannelItemsParams::channelId() const {
	return m_channelId;
}

void GetChannelItemsParams::setChannelId(QString newChannelId) {
	m_channelId = newChannelId;
}


const QList<ItemFields> &GetChannelItemsParams::fields() const {
	return m_fields;
}

void GetChannelItemsParams::setFields(QList<ItemFields> newFields)  {
	m_fields = newFields;
}

bool GetChannelItemsParams::fieldsNull() const {
	// Nullable: true
	// Type Nullable: true
	

	return m_fields.size() == 0;
}

void GetChannelItemsParams::setFieldsNull() {
	m_fields.clear();
}


const QList<ItemFilter> &GetChannelItemsParams::filters() const {
	return m_filters;
}

void GetChannelItemsParams::setFilters(QList<ItemFilter> newFilters)  {
	m_filters = newFilters;
}

bool GetChannelItemsParams::filtersNull() const {
	// Nullable: true
	// Type Nullable: true
	

	return m_filters.size() == 0;
}

void GetChannelItemsParams::setFiltersNull() {
	m_filters.clear();
}


const QString &GetChannelItemsParams::folderId() const {
	return m_folderId;
}

void GetChannelItemsParams::setFolderId(QString newFolderId)  {
	m_folderId = newFolderId;
}

bool GetChannelItemsParams::folderIdNull() const {
	// Nullable: true
	// Type Nullable: true
	

	return m_folderId.isNull();
}

void GetChannelItemsParams::setFolderIdNull() {
	m_folderId.clear();
}


const qint32 &GetChannelItemsParams::limit() const {
	return m_limit.value();
}

void GetChannelItemsParams::setLimit(qint32 newLimit)  {
	m_limit = newLimit;
}

bool GetChannelItemsParams::limitNull() const {
	// Nullable: true
	// Type Nullable: false
	

	return !m_limit.has_value();
}

void GetChannelItemsParams::setLimitNull() {
	m_limit = std::nullopt;
}


const QString &GetChannelItemsParams::sortBy() const {
	return m_sortBy;
}

void GetChannelItemsParams::setSortBy(QString newSortBy)  {
	m_sortBy = newSortBy;
}

bool GetChannelItemsParams::sortByNull() const {
	// Nullable: true
	// Type Nullable: true
	

	return m_sortBy.isNull();
}

void GetChannelItemsParams::setSortByNull() {
	m_sortBy.clear();
}


const QString &GetChannelItemsParams::sortOrder() const {
	return m_sortOrder;
}

void GetChannelItemsParams::setSortOrder(QString newSortOrder)  {
	m_sortOrder = newSortOrder;
}

bool GetChannelItemsParams::sortOrderNull() const {
	// Nullable: true
	// Type Nullable: true
	

	return m_sortOrder.isNull();
}

void GetChannelItemsParams::setSortOrderNull() {
	m_sortOrder.clear();
}


const qint32 &GetChannelItemsParams::startIndex() const {
	return m_startIndex.value();
}

void GetChannelItemsParams::setStartIndex(qint32 newStartIndex)  {
	m_startIndex = newStartIndex;
}

bool GetChannelItemsParams::startIndexNull() const {
	// Nullable: true
	// Type Nullable: false
	

	return !m_startIndex.has_value();
}

void GetChannelItemsParams::setStartIndexNull() {
	m_startIndex = std::nullopt;
}


const QString &GetChannelItemsParams::userId() const {
	return m_userId;
}

void GetChannelItemsParams::setUserId(QString newUserId)  {
	m_userId = newUserId;
}

bool GetChannelItemsParams::userIdNull() const {
	// Nullable: true
	// Type Nullable: true
	

	return m_userId.isNull();
}

void GetChannelItemsParams::setUserIdNull() {
	m_userId.clear();
}




// GetChannelMappingOptionsParams

const QString &GetChannelMappingOptionsParams::providerId() const {
	return m_providerId;
}

void GetChannelMappingOptionsParams::setProviderId(QString newProviderId)  {
	m_providerId = newProviderId;
}

bool GetChannelMappingOptionsParams::providerIdNull() const {
	// Nullable: true
	// Type Nullable: true
	

	return m_providerId.isNull();
}

void GetChannelMappingOptionsParams::setProviderIdNull() {
	m_providerId.clear();
}




// GetChannelsParams

const bool &GetChannelsParams::isFavorite() const {
	return m_isFavorite.value();
}

void GetChannelsParams::setIsFavorite(bool newIsFavorite)  {
	m_isFavorite = newIsFavorite;
}

bool GetChannelsParams::isFavoriteNull() const {
	// Nullable: true
	// Type Nullable: false
	

	return !m_isFavorite.has_value();
}

void GetChannelsParams::setIsFavoriteNull() {
	m_isFavorite = std::nullopt;
}


const qint32 &GetChannelsParams::limit() const {
	return m_limit.value();
}

void GetChannelsParams::setLimit(qint32 newLimit)  {
	m_limit = newLimit;
}

bool GetChannelsParams::limitNull() const {
	// Nullable: true
	// Type Nullable: false
	

	return !m_limit.has_value();
}

void GetChannelsParams::setLimitNull() {
	m_limit = std::nullopt;
}


const qint32 &GetChannelsParams::startIndex() const {
	return m_startIndex.value();
}

void GetChannelsParams::setStartIndex(qint32 newStartIndex)  {
	m_startIndex = newStartIndex;
}

bool GetChannelsParams::startIndexNull() const {
	// Nullable: true
	// Type Nullable: false
	

	return !m_startIndex.has_value();
}

void GetChannelsParams::setStartIndexNull() {
	m_startIndex = std::nullopt;
}


const bool &GetChannelsParams::supportsLatestItems() const {
	return m_supportsLatestItems.value();
}

void GetChannelsParams::setSupportsLatestItems(bool newSupportsLatestItems)  {
	m_supportsLatestItems = newSupportsLatestItems;
}

bool GetChannelsParams::supportsLatestItemsNull() const {
	// Nullable: true
	// Type Nullable: false
	

	return !m_supportsLatestItems.has_value();
}

void GetChannelsParams::setSupportsLatestItemsNull() {
	m_supportsLatestItems = std::nullopt;
}


const bool &GetChannelsParams::supportsMediaDeletion() const {
	return m_supportsMediaDeletion.value();
}

void GetChannelsParams::setSupportsMediaDeletion(bool newSupportsMediaDeletion)  {
	m_supportsMediaDeletion = newSupportsMediaDeletion;
}

bool GetChannelsParams::supportsMediaDeletionNull() const {
	// Nullable: true
	// Type Nullable: false
	

	return !m_supportsMediaDeletion.has_value();
}

void GetChannelsParams::setSupportsMediaDeletionNull() {
	m_supportsMediaDeletion = std::nullopt;
}


const QString &GetChannelsParams::userId() const {
	return m_userId;
}

void GetChannelsParams::setUserId(QString newUserId)  {
	m_userId = newUserId;
}

bool GetChannelsParams::userIdNull() const {
	// Nullable: true
	// Type Nullable: true
	

	return m_userId.isNull();
}

void GetChannelsParams::setUserIdNull() {
	m_userId.clear();
}




// GetConfigurationParams



// GetConfigurationPagesParams

const bool &GetConfigurationPagesParams::enableInMainMenu() const {
	return m_enableInMainMenu.value();
}

void GetConfigurationPagesParams::setEnableInMainMenu(bool newEnableInMainMenu)  {
	m_enableInMainMenu = newEnableInMainMenu;
}

bool GetConfigurationPagesParams::enableInMainMenuNull() const {
	// Nullable: true
	// Type Nullable: false
	

	return !m_enableInMainMenu.has_value();
}

void GetConfigurationPagesParams::setEnableInMainMenuNull() {
	m_enableInMainMenu = std::nullopt;
}


const ConfigurationPageType &GetConfigurationPagesParams::pageType() const {
	return m_pageType;
}

void GetConfigurationPagesParams::setPageType(ConfigurationPageType newPageType)  {
	m_pageType = newPageType;
}

bool GetConfigurationPagesParams::pageTypeNull() const {
	// Nullable: true
	// Type Nullable: true
	

	return m_pageType== ConfigurationPageType::EnumNotSet;
}

void GetConfigurationPagesParams::setPageTypeNull() {
	m_pageType= ConfigurationPageType::EnumNotSet;
}




// GetConnectionManagerParams

const QString &GetConnectionManagerParams::serverId() const {
	return m_serverId;
}

void GetConnectionManagerParams::setServerId(QString newServerId) {
	m_serverId = newServerId;
}




// GetConnectionManager_2Params

const QString &GetConnectionManager_2Params::serverId() const {
	return m_serverId;
}

void GetConnectionManager_2Params::setServerId(QString newServerId) {
	m_serverId = newServerId;
}




// GetConnectionManager_3Params

const QString &GetConnectionManager_3Params::serverId() const {
	return m_serverId;
}

void GetConnectionManager_3Params::setServerId(QString newServerId) {
	m_serverId = newServerId;
}




// GetContentDirectoryParams

const QString &GetContentDirectoryParams::serverId() const {
	return m_serverId;
}

void GetContentDirectoryParams::setServerId(QString newServerId) {
	m_serverId = newServerId;
}




// GetContentDirectory_2Params

const QString &GetContentDirectory_2Params::serverId() const {
	return m_serverId;
}

void GetContentDirectory_2Params::setServerId(QString newServerId) {
	m_serverId = newServerId;
}




// GetContentDirectory_3Params

const QString &GetContentDirectory_3Params::serverId() const {
	return m_serverId;
}

void GetContentDirectory_3Params::setServerId(QString newServerId) {
	m_serverId = newServerId;
}




// GetCountriesParams



// GetCriticReviewsParams

const QString &GetCriticReviewsParams::itemId() const {
	return m_itemId;
}

void GetCriticReviewsParams::setItemId(QString newItemId) {
	m_itemId = newItemId;
}




// GetCulturesParams



// GetCurrentUserParams



// GetDashboardConfigurationPageParams

const QString &GetDashboardConfigurationPageParams::name() const {
	return m_name;
}

void GetDashboardConfigurationPageParams::setName(QString newName)  {
	m_name = newName;
}

bool GetDashboardConfigurationPageParams::nameNull() const {
	// Nullable: true
	// Type Nullable: true
	

	return m_name.isNull();
}

void GetDashboardConfigurationPageParams::setNameNull() {
	m_name.clear();
}




// GetDefaultDirectoryBrowserParams



// GetDefaultListingProviderParams



// GetDefaultMetadataOptionsParams



// GetDefaultProfileParams



// GetDefaultTimerParams

const QString &GetDefaultTimerParams::programId() const {
	return m_programId;
}

void GetDefaultTimerParams::setProgramId(QString newProgramId)  {
	m_programId = newProgramId;
}

bool GetDefaultTimerParams::programIdNull() const {
	// Nullable: true
	// Type Nullable: true
	

	return m_programId.isNull();
}

void GetDefaultTimerParams::setProgramIdNull() {
	m_programId.clear();
}




// GetDescriptionXmlParams

const QString &GetDescriptionXmlParams::serverId() const {
	return m_serverId;
}

void GetDescriptionXmlParams::setServerId(QString newServerId) {
	m_serverId = newServerId;
}




// GetDescriptionXml_2Params

const QString &GetDescriptionXml_2Params::serverId() const {
	return m_serverId;
}

void GetDescriptionXml_2Params::setServerId(QString newServerId) {
	m_serverId = newServerId;
}




// GetDeviceInfoParams

const QString &GetDeviceInfoParams::jellyfinId() const {
	return m_jellyfinId;
}

void GetDeviceInfoParams::setJellyfinId(QString newJellyfinId) {
	m_jellyfinId = newJellyfinId;
}




// GetDeviceOptionsParams

const QString &GetDeviceOptionsParams::jellyfinId() const {
	return m_jellyfinId;
}

void GetDeviceOptionsParams::setJellyfinId(QString newJellyfinId) {
	m_jellyfinId = newJellyfinId;
}




// GetDevicesParams

const bool &GetDevicesParams::supportsSync() const {
	return m_supportsSync.value();
}

void GetDevicesParams::setSupportsSync(bool newSupportsSync)  {
	m_supportsSync = newSupportsSync;
}

bool GetDevicesParams::supportsSyncNull() const {
	// Nullable: true
	// Type Nullable: false
	

	return !m_supportsSync.has_value();
}

void GetDevicesParams::setSupportsSyncNull() {
	m_supportsSync = std::nullopt;
}


const QString &GetDevicesParams::userId() const {
	return m_userId;
}

void GetDevicesParams::setUserId(QString newUserId)  {
	m_userId = newUserId;
}

bool GetDevicesParams::userIdNull() const {
	// Nullable: true
	// Type Nullable: true
	

	return m_userId.isNull();
}

void GetDevicesParams::setUserIdNull() {
	m_userId.clear();
}




// GetDirectoryContentsParams

const QString &GetDirectoryContentsParams::path() const {
	return m_path;
}

void GetDirectoryContentsParams::setPath(QString newPath) {
	m_path = newPath;
}


const bool &GetDirectoryContentsParams::includeDirectories() const {
	return m_includeDirectories.value();
}

void GetDirectoryContentsParams::setIncludeDirectories(bool newIncludeDirectories)  {
	m_includeDirectories = newIncludeDirectories;
}

bool GetDirectoryContentsParams::includeDirectoriesNull() const {
	// Nullable: false
	// Type Nullable: false
	

	return !m_includeDirectories.has_value();
}

void GetDirectoryContentsParams::setIncludeDirectoriesNull() {
	m_includeDirectories = std::nullopt;
}


const bool &GetDirectoryContentsParams::includeFiles() const {
	return m_includeFiles.value();
}

void GetDirectoryContentsParams::setIncludeFiles(bool newIncludeFiles)  {
	m_includeFiles = newIncludeFiles;
}

bool GetDirectoryContentsParams::includeFilesNull() const {
	// Nullable: false
	// Type Nullable: false
	

	return !m_includeFiles.has_value();
}

void GetDirectoryContentsParams::setIncludeFilesNull() {
	m_includeFiles = std::nullopt;
}




// GetDisplayPreferencesParams

const QString &GetDisplayPreferencesParams::displayPreferencesId() const {
	return m_displayPreferencesId;
}

void GetDisplayPreferencesParams::setDisplayPreferencesId(QString newDisplayPreferencesId) {
	m_displayPreferencesId = newDisplayPreferencesId;
}


const QString &GetDisplayPreferencesParams::client() const {
	return m_client;
}

void GetDisplayPreferencesParams::setClient(QString newClient) {
	m_client = newClient;
}


const QString &GetDisplayPreferencesParams::userId() const {
	return m_userId;
}

void GetDisplayPreferencesParams::setUserId(QString newUserId) {
	m_userId = newUserId;
}




// GetDownloadParams

const QString &GetDownloadParams::itemId() const {
	return m_itemId;
}

void GetDownloadParams::setItemId(QString newItemId) {
	m_itemId = newItemId;
}




// GetDrivesParams



// GetEndpointInfoParams



// GetEpisodesParams

const QString &GetEpisodesParams::seriesId() const {
	return m_seriesId;
}

void GetEpisodesParams::setSeriesId(QString newSeriesId) {
	m_seriesId = newSeriesId;
}


const QString &GetEpisodesParams::adjacentTo() const {
	return m_adjacentTo;
}

void GetEpisodesParams::setAdjacentTo(QString newAdjacentTo)  {
	m_adjacentTo = newAdjacentTo;
}

bool GetEpisodesParams::adjacentToNull() const {
	// Nullable: true
	// Type Nullable: true
	

	return m_adjacentTo.isNull();
}

void GetEpisodesParams::setAdjacentToNull() {
	m_adjacentTo.clear();
}


const QList<ImageType> &GetEpisodesParams::enableImageTypes() const {
	return m_enableImageTypes;
}

void GetEpisodesParams::setEnableImageTypes(QList<ImageType> newEnableImageTypes)  {
	m_enableImageTypes = newEnableImageTypes;
}

bool GetEpisodesParams::enableImageTypesNull() const {
	// Nullable: true
	// Type Nullable: true
	

	return m_enableImageTypes.size() == 0;
}

void GetEpisodesParams::setEnableImageTypesNull() {
	m_enableImageTypes.clear();
}


const bool &GetEpisodesParams::enableImages() const {
	return m_enableImages.value();
}

void GetEpisodesParams::setEnableImages(bool newEnableImages)  {
	m_enableImages = newEnableImages;
}

bool GetEpisodesParams::enableImagesNull() const {
	// Nullable: true
	// Type Nullable: false
	

	return !m_enableImages.has_value();
}

void GetEpisodesParams::setEnableImagesNull() {
	m_enableImages = std::nullopt;
}


const bool &GetEpisodesParams::enableUserData() const {
	return m_enableUserData.value();
}

void GetEpisodesParams::setEnableUserData(bool newEnableUserData)  {
	m_enableUserData = newEnableUserData;
}

bool GetEpisodesParams::enableUserDataNull() const {
	// Nullable: true
	// Type Nullable: false
	

	return !m_enableUserData.has_value();
}

void GetEpisodesParams::setEnableUserDataNull() {
	m_enableUserData = std::nullopt;
}


const QList<ItemFields> &GetEpisodesParams::fields() const {
	return m_fields;
}

void GetEpisodesParams::setFields(QList<ItemFields> newFields)  {
	m_fields = newFields;
}

bool GetEpisodesParams::fieldsNull() const {
	// Nullable: true
	// Type Nullable: true
	

	return m_fields.size() == 0;
}

void GetEpisodesParams::setFieldsNull() {
	m_fields.clear();
}


const qint32 &GetEpisodesParams::imageTypeLimit() const {
	return m_imageTypeLimit.value();
}

void GetEpisodesParams::setImageTypeLimit(qint32 newImageTypeLimit)  {
	m_imageTypeLimit = newImageTypeLimit;
}

bool GetEpisodesParams::imageTypeLimitNull() const {
	// Nullable: true
	// Type Nullable: false
	

	return !m_imageTypeLimit.has_value();
}

void GetEpisodesParams::setImageTypeLimitNull() {
	m_imageTypeLimit = std::nullopt;
}


const bool &GetEpisodesParams::isMissing() const {
	return m_isMissing.value();
}

void GetEpisodesParams::setIsMissing(bool newIsMissing)  {
	m_isMissing = newIsMissing;
}

bool GetEpisodesParams::isMissingNull() const {
	// Nullable: true
	// Type Nullable: false
	

	return !m_isMissing.has_value();
}

void GetEpisodesParams::setIsMissingNull() {
	m_isMissing = std::nullopt;
}


const qint32 &GetEpisodesParams::limit() const {
	return m_limit.value();
}

void GetEpisodesParams::setLimit(qint32 newLimit)  {
	m_limit = newLimit;
}

bool GetEpisodesParams::limitNull() const {
	// Nullable: true
	// Type Nullable: false
	

	return !m_limit.has_value();
}

void GetEpisodesParams::setLimitNull() {
	m_limit = std::nullopt;
}


const qint32 &GetEpisodesParams::season() const {
	return m_season.value();
}

void GetEpisodesParams::setSeason(qint32 newSeason)  {
	m_season = newSeason;
}

bool GetEpisodesParams::seasonNull() const {
	// Nullable: true
	// Type Nullable: false
	

	return !m_season.has_value();
}

void GetEpisodesParams::setSeasonNull() {
	m_season = std::nullopt;
}


const QString &GetEpisodesParams::seasonId() const {
	return m_seasonId;
}

void GetEpisodesParams::setSeasonId(QString newSeasonId)  {
	m_seasonId = newSeasonId;
}

bool GetEpisodesParams::seasonIdNull() const {
	// Nullable: true
	// Type Nullable: true
	

	return m_seasonId.isNull();
}

void GetEpisodesParams::setSeasonIdNull() {
	m_seasonId.clear();
}


const QString &GetEpisodesParams::sortBy() const {
	return m_sortBy;
}

void GetEpisodesParams::setSortBy(QString newSortBy)  {
	m_sortBy = newSortBy;
}

bool GetEpisodesParams::sortByNull() const {
	// Nullable: true
	// Type Nullable: true
	

	return m_sortBy.isNull();
}

void GetEpisodesParams::setSortByNull() {
	m_sortBy.clear();
}


const qint32 &GetEpisodesParams::startIndex() const {
	return m_startIndex.value();
}

void GetEpisodesParams::setStartIndex(qint32 newStartIndex)  {
	m_startIndex = newStartIndex;
}

bool GetEpisodesParams::startIndexNull() const {
	// Nullable: true
	// Type Nullable: false
	

	return !m_startIndex.has_value();
}

void GetEpisodesParams::setStartIndexNull() {
	m_startIndex = std::nullopt;
}


const QString &GetEpisodesParams::startItemId() const {
	return m_startItemId;
}

void GetEpisodesParams::setStartItemId(QString newStartItemId)  {
	m_startItemId = newStartItemId;
}

bool GetEpisodesParams::startItemIdNull() const {
	// Nullable: true
	// Type Nullable: true
	

	return m_startItemId.isNull();
}

void GetEpisodesParams::setStartItemIdNull() {
	m_startItemId.clear();
}


const QString &GetEpisodesParams::userId() const {
	return m_userId;
}

void GetEpisodesParams::setUserId(QString newUserId)  {
	m_userId = newUserId;
}

bool GetEpisodesParams::userIdNull() const {
	// Nullable: true
	// Type Nullable: true
	

	return m_userId.isNull();
}

void GetEpisodesParams::setUserIdNull() {
	m_userId.clear();
}




// GetExternalIdInfosParams

const QString &GetExternalIdInfosParams::itemId() const {
	return m_itemId;
}

void GetExternalIdInfosParams::setItemId(QString newItemId) {
	m_itemId = newItemId;
}




// GetFallbackFontParams

const QString &GetFallbackFontParams::name() const {
	return m_name;
}

void GetFallbackFontParams::setName(QString newName) {
	m_name = newName;
}




// GetFallbackFontListParams



// GetFileParams

const QString &GetFileParams::itemId() const {
	return m_itemId;
}

void GetFileParams::setItemId(QString newItemId) {
	m_itemId = newItemId;
}




// GetFirstUserParams



// GetFirstUser_2Params



// GetGeneralImageParams

const QString &GetGeneralImageParams::name() const {
	return m_name;
}

void GetGeneralImageParams::setName(QString newName) {
	m_name = newName;
}


const QString &GetGeneralImageParams::type() const {
	return m_type;
}

void GetGeneralImageParams::setType(QString newType) {
	m_type = newType;
}




// GetGeneralImagesParams



// GetGenreParams

const QString &GetGenreParams::genreName() const {
	return m_genreName;
}

void GetGenreParams::setGenreName(QString newGenreName) {
	m_genreName = newGenreName;
}


const QString &GetGenreParams::userId() const {
	return m_userId;
}

void GetGenreParams::setUserId(QString newUserId)  {
	m_userId = newUserId;
}

bool GetGenreParams::userIdNull() const {
	// Nullable: true
	// Type Nullable: true
	

	return m_userId.isNull();
}

void GetGenreParams::setUserIdNull() {
	m_userId.clear();
}




// GetGenreImageParams

const ImageType &GetGenreImageParams::imageType() const {
	return m_imageType;
}

void GetGenreImageParams::setImageType(ImageType newImageType) {
	m_imageType = newImageType;
}


const QString &GetGenreImageParams::name() const {
	return m_name;
}

void GetGenreImageParams::setName(QString newName) {
	m_name = newName;
}


const bool &GetGenreImageParams::addPlayedIndicator() const {
	return m_addPlayedIndicator.value();
}

void GetGenreImageParams::setAddPlayedIndicator(bool newAddPlayedIndicator)  {
	m_addPlayedIndicator = newAddPlayedIndicator;
}

bool GetGenreImageParams::addPlayedIndicatorNull() const {
	// Nullable: true
	// Type Nullable: false
	

	return !m_addPlayedIndicator.has_value();
}

void GetGenreImageParams::setAddPlayedIndicatorNull() {
	m_addPlayedIndicator = std::nullopt;
}


const QString &GetGenreImageParams::backgroundColor() const {
	return m_backgroundColor;
}

void GetGenreImageParams::setBackgroundColor(QString newBackgroundColor)  {
	m_backgroundColor = newBackgroundColor;
}

bool GetGenreImageParams::backgroundColorNull() const {
	// Nullable: true
	// Type Nullable: true
	

	return m_backgroundColor.isNull();
}

void GetGenreImageParams::setBackgroundColorNull() {
	m_backgroundColor.clear();
}


const qint32 &GetGenreImageParams::blur() const {
	return m_blur.value();
}

void GetGenreImageParams::setBlur(qint32 newBlur)  {
	m_blur = newBlur;
}

bool GetGenreImageParams::blurNull() const {
	// Nullable: true
	// Type Nullable: false
	

	return !m_blur.has_value();
}

void GetGenreImageParams::setBlurNull() {
	m_blur = std::nullopt;
}


const bool &GetGenreImageParams::cropWhitespace() const {
	return m_cropWhitespace.value();
}

void GetGenreImageParams::setCropWhitespace(bool newCropWhitespace)  {
	m_cropWhitespace = newCropWhitespace;
}

bool GetGenreImageParams::cropWhitespaceNull() const {
	// Nullable: true
	// Type Nullable: false
	

	return !m_cropWhitespace.has_value();
}

void GetGenreImageParams::setCropWhitespaceNull() {
	m_cropWhitespace = std::nullopt;
}


const QString &GetGenreImageParams::foregroundLayer() const {
	return m_foregroundLayer;
}

void GetGenreImageParams::setForegroundLayer(QString newForegroundLayer)  {
	m_foregroundLayer = newForegroundLayer;
}

bool GetGenreImageParams::foregroundLayerNull() const {
	// Nullable: true
	// Type Nullable: true
	

	return m_foregroundLayer.isNull();
}

void GetGenreImageParams::setForegroundLayerNull() {
	m_foregroundLayer.clear();
}


const ImageFormat &GetGenreImageParams::format() const {
	return m_format;
}

void GetGenreImageParams::setFormat(ImageFormat newFormat)  {
	m_format = newFormat;
}

bool GetGenreImageParams::formatNull() const {
	// Nullable: true
	// Type Nullable: true
	

	return m_format== ImageFormat::EnumNotSet;
}

void GetGenreImageParams::setFormatNull() {
	m_format= ImageFormat::EnumNotSet;
}


const qint32 &GetGenreImageParams::height() const {
	return m_height.value();
}

void GetGenreImageParams::setHeight(qint32 newHeight)  {
	m_height = newHeight;
}

bool GetGenreImageParams::heightNull() const {
	// Nullable: true
	// Type Nullable: false
	

	return !m_height.has_value();
}

void GetGenreImageParams::setHeightNull() {
	m_height = std::nullopt;
}


const qint32 &GetGenreImageParams::imageIndex() const {
	return m_imageIndex.value();
}

void GetGenreImageParams::setImageIndex(qint32 newImageIndex)  {
	m_imageIndex = newImageIndex;
}

bool GetGenreImageParams::imageIndexNull() const {
	// Nullable: true
	// Type Nullable: false
	

	return !m_imageIndex.has_value();
}

void GetGenreImageParams::setImageIndexNull() {
	m_imageIndex = std::nullopt;
}


const qint32 &GetGenreImageParams::maxHeight() const {
	return m_maxHeight.value();
}

void GetGenreImageParams::setMaxHeight(qint32 newMaxHeight)  {
	m_maxHeight = newMaxHeight;
}

bool GetGenreImageParams::maxHeightNull() const {
	// Nullable: true
	// Type Nullable: false
	

	return !m_maxHeight.has_value();
}

void GetGenreImageParams::setMaxHeightNull() {
	m_maxHeight = std::nullopt;
}


const qint32 &GetGenreImageParams::maxWidth() const {
	return m_maxWidth.value();
}

void GetGenreImageParams::setMaxWidth(qint32 newMaxWidth)  {
	m_maxWidth = newMaxWidth;
}

bool GetGenreImageParams::maxWidthNull() const {
	// Nullable: true
	// Type Nullable: false
	

	return !m_maxWidth.has_value();
}

void GetGenreImageParams::setMaxWidthNull() {
	m_maxWidth = std::nullopt;
}


const double &GetGenreImageParams::percentPlayed() const {
	return m_percentPlayed.value();
}

void GetGenreImageParams::setPercentPlayed(double newPercentPlayed)  {
	m_percentPlayed = newPercentPlayed;
}

bool GetGenreImageParams::percentPlayedNull() const {
	// Nullable: true
	// Type Nullable: false
	

	return !m_percentPlayed.has_value();
}

void GetGenreImageParams::setPercentPlayedNull() {
	m_percentPlayed = std::nullopt;
}


const qint32 &GetGenreImageParams::quality() const {
	return m_quality.value();
}

void GetGenreImageParams::setQuality(qint32 newQuality)  {
	m_quality = newQuality;
}

bool GetGenreImageParams::qualityNull() const {
	// Nullable: true
	// Type Nullable: false
	

	return !m_quality.has_value();
}

void GetGenreImageParams::setQualityNull() {
	m_quality = std::nullopt;
}


const QString &GetGenreImageParams::tag() const {
	return m_tag;
}

void GetGenreImageParams::setTag(QString newTag)  {
	m_tag = newTag;
}

bool GetGenreImageParams::tagNull() const {
	// Nullable: true
	// Type Nullable: true
	

	return m_tag.isNull();
}

void GetGenreImageParams::setTagNull() {
	m_tag.clear();
}


const qint32 &GetGenreImageParams::unplayedCount() const {
	return m_unplayedCount.value();
}

void GetGenreImageParams::setUnplayedCount(qint32 newUnplayedCount)  {
	m_unplayedCount = newUnplayedCount;
}

bool GetGenreImageParams::unplayedCountNull() const {
	// Nullable: true
	// Type Nullable: false
	

	return !m_unplayedCount.has_value();
}

void GetGenreImageParams::setUnplayedCountNull() {
	m_unplayedCount = std::nullopt;
}


const qint32 &GetGenreImageParams::width() const {
	return m_width.value();
}

void GetGenreImageParams::setWidth(qint32 newWidth)  {
	m_width = newWidth;
}

bool GetGenreImageParams::widthNull() const {
	// Nullable: true
	// Type Nullable: false
	

	return !m_width.has_value();
}

void GetGenreImageParams::setWidthNull() {
	m_width = std::nullopt;
}




// GetGenreImageByIndexParams

const qint32 &GetGenreImageByIndexParams::imageIndex() const {
	return m_imageIndex;
}

void GetGenreImageByIndexParams::setImageIndex(qint32 newImageIndex) {
	m_imageIndex = newImageIndex;
}


const ImageType &GetGenreImageByIndexParams::imageType() const {
	return m_imageType;
}

void GetGenreImageByIndexParams::setImageType(ImageType newImageType) {
	m_imageType = newImageType;
}


const QString &GetGenreImageByIndexParams::name() const {
	return m_name;
}

void GetGenreImageByIndexParams::setName(QString newName) {
	m_name = newName;
}


const bool &GetGenreImageByIndexParams::addPlayedIndicator() const {
	return m_addPlayedIndicator.value();
}

void GetGenreImageByIndexParams::setAddPlayedIndicator(bool newAddPlayedIndicator)  {
	m_addPlayedIndicator = newAddPlayedIndicator;
}

bool GetGenreImageByIndexParams::addPlayedIndicatorNull() const {
	// Nullable: true
	// Type Nullable: false
	

	return !m_addPlayedIndicator.has_value();
}

void GetGenreImageByIndexParams::setAddPlayedIndicatorNull() {
	m_addPlayedIndicator = std::nullopt;
}


const QString &GetGenreImageByIndexParams::backgroundColor() const {
	return m_backgroundColor;
}

void GetGenreImageByIndexParams::setBackgroundColor(QString newBackgroundColor)  {
	m_backgroundColor = newBackgroundColor;
}

bool GetGenreImageByIndexParams::backgroundColorNull() const {
	// Nullable: true
	// Type Nullable: true
	

	return m_backgroundColor.isNull();
}

void GetGenreImageByIndexParams::setBackgroundColorNull() {
	m_backgroundColor.clear();
}


const qint32 &GetGenreImageByIndexParams::blur() const {
	return m_blur.value();
}

void GetGenreImageByIndexParams::setBlur(qint32 newBlur)  {
	m_blur = newBlur;
}

bool GetGenreImageByIndexParams::blurNull() const {
	// Nullable: true
	// Type Nullable: false
	

	return !m_blur.has_value();
}

void GetGenreImageByIndexParams::setBlurNull() {
	m_blur = std::nullopt;
}


const bool &GetGenreImageByIndexParams::cropWhitespace() const {
	return m_cropWhitespace.value();
}

void GetGenreImageByIndexParams::setCropWhitespace(bool newCropWhitespace)  {
	m_cropWhitespace = newCropWhitespace;
}

bool GetGenreImageByIndexParams::cropWhitespaceNull() const {
	// Nullable: true
	// Type Nullable: false
	

	return !m_cropWhitespace.has_value();
}

void GetGenreImageByIndexParams::setCropWhitespaceNull() {
	m_cropWhitespace = std::nullopt;
}


const QString &GetGenreImageByIndexParams::foregroundLayer() const {
	return m_foregroundLayer;
}

void GetGenreImageByIndexParams::setForegroundLayer(QString newForegroundLayer)  {
	m_foregroundLayer = newForegroundLayer;
}

bool GetGenreImageByIndexParams::foregroundLayerNull() const {
	// Nullable: true
	// Type Nullable: true
	

	return m_foregroundLayer.isNull();
}

void GetGenreImageByIndexParams::setForegroundLayerNull() {
	m_foregroundLayer.clear();
}


const ImageFormat &GetGenreImageByIndexParams::format() const {
	return m_format;
}

void GetGenreImageByIndexParams::setFormat(ImageFormat newFormat)  {
	m_format = newFormat;
}

bool GetGenreImageByIndexParams::formatNull() const {
	// Nullable: true
	// Type Nullable: true
	

	return m_format== ImageFormat::EnumNotSet;
}

void GetGenreImageByIndexParams::setFormatNull() {
	m_format= ImageFormat::EnumNotSet;
}


const qint32 &GetGenreImageByIndexParams::height() const {
	return m_height.value();
}

void GetGenreImageByIndexParams::setHeight(qint32 newHeight)  {
	m_height = newHeight;
}

bool GetGenreImageByIndexParams::heightNull() const {
	// Nullable: true
	// Type Nullable: false
	

	return !m_height.has_value();
}

void GetGenreImageByIndexParams::setHeightNull() {
	m_height = std::nullopt;
}


const qint32 &GetGenreImageByIndexParams::maxHeight() const {
	return m_maxHeight.value();
}

void GetGenreImageByIndexParams::setMaxHeight(qint32 newMaxHeight)  {
	m_maxHeight = newMaxHeight;
}

bool GetGenreImageByIndexParams::maxHeightNull() const {
	// Nullable: true
	// Type Nullable: false
	

	return !m_maxHeight.has_value();
}

void GetGenreImageByIndexParams::setMaxHeightNull() {
	m_maxHeight = std::nullopt;
}


const qint32 &GetGenreImageByIndexParams::maxWidth() const {
	return m_maxWidth.value();
}

void GetGenreImageByIndexParams::setMaxWidth(qint32 newMaxWidth)  {
	m_maxWidth = newMaxWidth;
}

bool GetGenreImageByIndexParams::maxWidthNull() const {
	// Nullable: true
	// Type Nullable: false
	

	return !m_maxWidth.has_value();
}

void GetGenreImageByIndexParams::setMaxWidthNull() {
	m_maxWidth = std::nullopt;
}


const double &GetGenreImageByIndexParams::percentPlayed() const {
	return m_percentPlayed.value();
}

void GetGenreImageByIndexParams::setPercentPlayed(double newPercentPlayed)  {
	m_percentPlayed = newPercentPlayed;
}

bool GetGenreImageByIndexParams::percentPlayedNull() const {
	// Nullable: true
	// Type Nullable: false
	

	return !m_percentPlayed.has_value();
}

void GetGenreImageByIndexParams::setPercentPlayedNull() {
	m_percentPlayed = std::nullopt;
}


const qint32 &GetGenreImageByIndexParams::quality() const {
	return m_quality.value();
}

void GetGenreImageByIndexParams::setQuality(qint32 newQuality)  {
	m_quality = newQuality;
}

bool GetGenreImageByIndexParams::qualityNull() const {
	// Nullable: true
	// Type Nullable: false
	

	return !m_quality.has_value();
}

void GetGenreImageByIndexParams::setQualityNull() {
	m_quality = std::nullopt;
}


const QString &GetGenreImageByIndexParams::tag() const {
	return m_tag;
}

void GetGenreImageByIndexParams::setTag(QString newTag)  {
	m_tag = newTag;
}

bool GetGenreImageByIndexParams::tagNull() const {
	// Nullable: true
	// Type Nullable: true
	

	return m_tag.isNull();
}

void GetGenreImageByIndexParams::setTagNull() {
	m_tag.clear();
}


const qint32 &GetGenreImageByIndexParams::unplayedCount() const {
	return m_unplayedCount.value();
}

void GetGenreImageByIndexParams::setUnplayedCount(qint32 newUnplayedCount)  {
	m_unplayedCount = newUnplayedCount;
}

bool GetGenreImageByIndexParams::unplayedCountNull() const {
	// Nullable: true
	// Type Nullable: false
	

	return !m_unplayedCount.has_value();
}

void GetGenreImageByIndexParams::setUnplayedCountNull() {
	m_unplayedCount = std::nullopt;
}


const qint32 &GetGenreImageByIndexParams::width() const {
	return m_width.value();
}

void GetGenreImageByIndexParams::setWidth(qint32 newWidth)  {
	m_width = newWidth;
}

bool GetGenreImageByIndexParams::widthNull() const {
	// Nullable: true
	// Type Nullable: false
	

	return !m_width.has_value();
}

void GetGenreImageByIndexParams::setWidthNull() {
	m_width = std::nullopt;
}




// GetGenresParams

const QList<ImageType> &GetGenresParams::enableImageTypes() const {
	return m_enableImageTypes;
}

void GetGenresParams::setEnableImageTypes(QList<ImageType> newEnableImageTypes)  {
	m_enableImageTypes = newEnableImageTypes;
}

bool GetGenresParams::enableImageTypesNull() const {
	// Nullable: true
	// Type Nullable: true
	

	return m_enableImageTypes.size() == 0;
}

void GetGenresParams::setEnableImageTypesNull() {
	m_enableImageTypes.clear();
}


const bool &GetGenresParams::enableImages() const {
	return m_enableImages.value();
}

void GetGenresParams::setEnableImages(bool newEnableImages)  {
	m_enableImages = newEnableImages;
}

bool GetGenresParams::enableImagesNull() const {
	// Nullable: true
	// Type Nullable: false
	

	return !m_enableImages.has_value();
}

void GetGenresParams::setEnableImagesNull() {
	m_enableImages = std::nullopt;
}


const bool &GetGenresParams::enableTotalRecordCount() const {
	return m_enableTotalRecordCount.value();
}

void GetGenresParams::setEnableTotalRecordCount(bool newEnableTotalRecordCount)  {
	m_enableTotalRecordCount = newEnableTotalRecordCount;
}

bool GetGenresParams::enableTotalRecordCountNull() const {
	// Nullable: false
	// Type Nullable: false
	

	return !m_enableTotalRecordCount.has_value();
}

void GetGenresParams::setEnableTotalRecordCountNull() {
	m_enableTotalRecordCount = std::nullopt;
}


const QStringList &GetGenresParams::excludeItemTypes() const {
	return m_excludeItemTypes;
}

void GetGenresParams::setExcludeItemTypes(QStringList newExcludeItemTypes)  {
	m_excludeItemTypes = newExcludeItemTypes;
}

bool GetGenresParams::excludeItemTypesNull() const {
	// Nullable: true
	// Type Nullable: true
	

	return m_excludeItemTypes.size() == 0;
}

void GetGenresParams::setExcludeItemTypesNull() {
	m_excludeItemTypes.clear();
}


const QList<ItemFields> &GetGenresParams::fields() const {
	return m_fields;
}

void GetGenresParams::setFields(QList<ItemFields> newFields)  {
	m_fields = newFields;
}

bool GetGenresParams::fieldsNull() const {
	// Nullable: true
	// Type Nullable: true
	

	return m_fields.size() == 0;
}

void GetGenresParams::setFieldsNull() {
	m_fields.clear();
}


const qint32 &GetGenresParams::imageTypeLimit() const {
	return m_imageTypeLimit.value();
}

void GetGenresParams::setImageTypeLimit(qint32 newImageTypeLimit)  {
	m_imageTypeLimit = newImageTypeLimit;
}

bool GetGenresParams::imageTypeLimitNull() const {
	// Nullable: true
	// Type Nullable: false
	

	return !m_imageTypeLimit.has_value();
}

void GetGenresParams::setImageTypeLimitNull() {
	m_imageTypeLimit = std::nullopt;
}


const QStringList &GetGenresParams::includeItemTypes() const {
	return m_includeItemTypes;
}

void GetGenresParams::setIncludeItemTypes(QStringList newIncludeItemTypes)  {
	m_includeItemTypes = newIncludeItemTypes;
}

bool GetGenresParams::includeItemTypesNull() const {
	// Nullable: true
	// Type Nullable: true
	

	return m_includeItemTypes.size() == 0;
}

void GetGenresParams::setIncludeItemTypesNull() {
	m_includeItemTypes.clear();
}


const bool &GetGenresParams::isFavorite() const {
	return m_isFavorite.value();
}

void GetGenresParams::setIsFavorite(bool newIsFavorite)  {
	m_isFavorite = newIsFavorite;
}

bool GetGenresParams::isFavoriteNull() const {
	// Nullable: true
	// Type Nullable: false
	

	return !m_isFavorite.has_value();
}

void GetGenresParams::setIsFavoriteNull() {
	m_isFavorite = std::nullopt;
}


const qint32 &GetGenresParams::limit() const {
	return m_limit.value();
}

void GetGenresParams::setLimit(qint32 newLimit)  {
	m_limit = newLimit;
}

bool GetGenresParams::limitNull() const {
	// Nullable: true
	// Type Nullable: false
	

	return !m_limit.has_value();
}

void GetGenresParams::setLimitNull() {
	m_limit = std::nullopt;
}


const QString &GetGenresParams::nameLessThan() const {
	return m_nameLessThan;
}

void GetGenresParams::setNameLessThan(QString newNameLessThan)  {
	m_nameLessThan = newNameLessThan;
}

bool GetGenresParams::nameLessThanNull() const {
	// Nullable: true
	// Type Nullable: true
	

	return m_nameLessThan.isNull();
}

void GetGenresParams::setNameLessThanNull() {
	m_nameLessThan.clear();
}


const QString &GetGenresParams::nameStartsWith() const {
	return m_nameStartsWith;
}

void GetGenresParams::setNameStartsWith(QString newNameStartsWith)  {
	m_nameStartsWith = newNameStartsWith;
}

bool GetGenresParams::nameStartsWithNull() const {
	// Nullable: true
	// Type Nullable: true
	

	return m_nameStartsWith.isNull();
}

void GetGenresParams::setNameStartsWithNull() {
	m_nameStartsWith.clear();
}


const QString &GetGenresParams::nameStartsWithOrGreater() const {
	return m_nameStartsWithOrGreater;
}

void GetGenresParams::setNameStartsWithOrGreater(QString newNameStartsWithOrGreater)  {
	m_nameStartsWithOrGreater = newNameStartsWithOrGreater;
}

bool GetGenresParams::nameStartsWithOrGreaterNull() const {
	// Nullable: true
	// Type Nullable: true
	

	return m_nameStartsWithOrGreater.isNull();
}

void GetGenresParams::setNameStartsWithOrGreaterNull() {
	m_nameStartsWithOrGreater.clear();
}


const QString &GetGenresParams::parentId() const {
	return m_parentId;
}

void GetGenresParams::setParentId(QString newParentId)  {
	m_parentId = newParentId;
}

bool GetGenresParams::parentIdNull() const {
	// Nullable: true
	// Type Nullable: true
	

	return m_parentId.isNull();
}

void GetGenresParams::setParentIdNull() {
	m_parentId.clear();
}


const QString &GetGenresParams::searchTerm() const {
	return m_searchTerm;
}

void GetGenresParams::setSearchTerm(QString newSearchTerm)  {
	m_searchTerm = newSearchTerm;
}

bool GetGenresParams::searchTermNull() const {
	// Nullable: true
	// Type Nullable: true
	

	return m_searchTerm.isNull();
}

void GetGenresParams::setSearchTermNull() {
	m_searchTerm.clear();
}


const qint32 &GetGenresParams::startIndex() const {
	return m_startIndex.value();
}

void GetGenresParams::setStartIndex(qint32 newStartIndex)  {
	m_startIndex = newStartIndex;
}

bool GetGenresParams::startIndexNull() const {
	// Nullable: true
	// Type Nullable: false
	

	return !m_startIndex.has_value();
}

void GetGenresParams::setStartIndexNull() {
	m_startIndex = std::nullopt;
}


const QString &GetGenresParams::userId() const {
	return m_userId;
}

void GetGenresParams::setUserId(QString newUserId)  {
	m_userId = newUserId;
}

bool GetGenresParams::userIdNull() const {
	// Nullable: true
	// Type Nullable: true
	

	return m_userId.isNull();
}

void GetGenresParams::setUserIdNull() {
	m_userId.clear();
}




// GetGroupingOptionsParams

const QString &GetGroupingOptionsParams::userId() const {
	return m_userId;
}

void GetGroupingOptionsParams::setUserId(QString newUserId) {
	m_userId = newUserId;
}




// GetGuideInfoParams



// GetHlsAudioSegmentParams

const QString &GetHlsAudioSegmentParams::container() const {
	return m_container;
}

void GetHlsAudioSegmentParams::setContainer(QString newContainer) {
	m_container = newContainer;
}


const QString &GetHlsAudioSegmentParams::itemId() const {
	return m_itemId;
}

void GetHlsAudioSegmentParams::setItemId(QString newItemId) {
	m_itemId = newItemId;
}


const QString &GetHlsAudioSegmentParams::playlistId() const {
	return m_playlistId;
}

void GetHlsAudioSegmentParams::setPlaylistId(QString newPlaylistId) {
	m_playlistId = newPlaylistId;
}


const qint32 &GetHlsAudioSegmentParams::segmentId() const {
	return m_segmentId;
}

void GetHlsAudioSegmentParams::setSegmentId(qint32 newSegmentId) {
	m_segmentId = newSegmentId;
}


const bool &GetHlsAudioSegmentParams::allowAudioStreamCopy() const {
	return m_allowAudioStreamCopy.value();
}

void GetHlsAudioSegmentParams::setAllowAudioStreamCopy(bool newAllowAudioStreamCopy)  {
	m_allowAudioStreamCopy = newAllowAudioStreamCopy;
}

bool GetHlsAudioSegmentParams::allowAudioStreamCopyNull() const {
	// Nullable: true
	// Type Nullable: false
	

	return !m_allowAudioStreamCopy.has_value();
}

void GetHlsAudioSegmentParams::setAllowAudioStreamCopyNull() {
	m_allowAudioStreamCopy = std::nullopt;
}


const bool &GetHlsAudioSegmentParams::allowVideoStreamCopy() const {
	return m_allowVideoStreamCopy.value();
}

void GetHlsAudioSegmentParams::setAllowVideoStreamCopy(bool newAllowVideoStreamCopy)  {
	m_allowVideoStreamCopy = newAllowVideoStreamCopy;
}

bool GetHlsAudioSegmentParams::allowVideoStreamCopyNull() const {
	// Nullable: true
	// Type Nullable: false
	

	return !m_allowVideoStreamCopy.has_value();
}

void GetHlsAudioSegmentParams::setAllowVideoStreamCopyNull() {
	m_allowVideoStreamCopy = std::nullopt;
}


const qint32 &GetHlsAudioSegmentParams::audioBitRate() const {
	return m_audioBitRate.value();
}

void GetHlsAudioSegmentParams::setAudioBitRate(qint32 newAudioBitRate)  {
	m_audioBitRate = newAudioBitRate;
}

bool GetHlsAudioSegmentParams::audioBitRateNull() const {
	// Nullable: true
	// Type Nullable: false
	

	return !m_audioBitRate.has_value();
}

void GetHlsAudioSegmentParams::setAudioBitRateNull() {
	m_audioBitRate = std::nullopt;
}


const qint32 &GetHlsAudioSegmentParams::audioChannels() const {
	return m_audioChannels.value();
}

void GetHlsAudioSegmentParams::setAudioChannels(qint32 newAudioChannels)  {
	m_audioChannels = newAudioChannels;
}

bool GetHlsAudioSegmentParams::audioChannelsNull() const {
	// Nullable: true
	// Type Nullable: false
	

	return !m_audioChannels.has_value();
}

void GetHlsAudioSegmentParams::setAudioChannelsNull() {
	m_audioChannels = std::nullopt;
}


const QString &GetHlsAudioSegmentParams::audioCodec() const {
	return m_audioCodec;
}

void GetHlsAudioSegmentParams::setAudioCodec(QString newAudioCodec)  {
	m_audioCodec = newAudioCodec;
}

bool GetHlsAudioSegmentParams::audioCodecNull() const {
	// Nullable: true
	// Type Nullable: true
	

	return m_audioCodec.isNull();
}

void GetHlsAudioSegmentParams::setAudioCodecNull() {
	m_audioCodec.clear();
}


const qint32 &GetHlsAudioSegmentParams::audioSampleRate() const {
	return m_audioSampleRate.value();
}

void GetHlsAudioSegmentParams::setAudioSampleRate(qint32 newAudioSampleRate)  {
	m_audioSampleRate = newAudioSampleRate;
}

bool GetHlsAudioSegmentParams::audioSampleRateNull() const {
	// Nullable: true
	// Type Nullable: false
	

	return !m_audioSampleRate.has_value();
}

void GetHlsAudioSegmentParams::setAudioSampleRateNull() {
	m_audioSampleRate = std::nullopt;
}


const qint32 &GetHlsAudioSegmentParams::audioStreamIndex() const {
	return m_audioStreamIndex.value();
}

void GetHlsAudioSegmentParams::setAudioStreamIndex(qint32 newAudioStreamIndex)  {
	m_audioStreamIndex = newAudioStreamIndex;
}

bool GetHlsAudioSegmentParams::audioStreamIndexNull() const {
	// Nullable: true
	// Type Nullable: false
	

	return !m_audioStreamIndex.has_value();
}

void GetHlsAudioSegmentParams::setAudioStreamIndexNull() {
	m_audioStreamIndex = std::nullopt;
}


const bool &GetHlsAudioSegmentParams::breakOnNonKeyFrames() const {
	return m_breakOnNonKeyFrames.value();
}

void GetHlsAudioSegmentParams::setBreakOnNonKeyFrames(bool newBreakOnNonKeyFrames)  {
	m_breakOnNonKeyFrames = newBreakOnNonKeyFrames;
}

bool GetHlsAudioSegmentParams::breakOnNonKeyFramesNull() const {
	// Nullable: true
	// Type Nullable: false
	

	return !m_breakOnNonKeyFrames.has_value();
}

void GetHlsAudioSegmentParams::setBreakOnNonKeyFramesNull() {
	m_breakOnNonKeyFrames = std::nullopt;
}


const EncodingContext &GetHlsAudioSegmentParams::context() const {
	return m_context;
}

void GetHlsAudioSegmentParams::setContext(EncodingContext newContext)  {
	m_context = newContext;
}

bool GetHlsAudioSegmentParams::contextNull() const {
	// Nullable: true
	// Type Nullable: true
	

	return m_context== EncodingContext::EnumNotSet;
}

void GetHlsAudioSegmentParams::setContextNull() {
	m_context= EncodingContext::EnumNotSet;
}


const bool &GetHlsAudioSegmentParams::copyTimestamps() const {
	return m_copyTimestamps.value();
}

void GetHlsAudioSegmentParams::setCopyTimestamps(bool newCopyTimestamps)  {
	m_copyTimestamps = newCopyTimestamps;
}

bool GetHlsAudioSegmentParams::copyTimestampsNull() const {
	// Nullable: true
	// Type Nullable: false
	

	return !m_copyTimestamps.has_value();
}

void GetHlsAudioSegmentParams::setCopyTimestampsNull() {
	m_copyTimestamps = std::nullopt;
}


const qint32 &GetHlsAudioSegmentParams::cpuCoreLimit() const {
	return m_cpuCoreLimit.value();
}

void GetHlsAudioSegmentParams::setCpuCoreLimit(qint32 newCpuCoreLimit)  {
	m_cpuCoreLimit = newCpuCoreLimit;
}

bool GetHlsAudioSegmentParams::cpuCoreLimitNull() const {
	// Nullable: true
	// Type Nullable: false
	

	return !m_cpuCoreLimit.has_value();
}

void GetHlsAudioSegmentParams::setCpuCoreLimitNull() {
	m_cpuCoreLimit = std::nullopt;
}


const bool &GetHlsAudioSegmentParams::deInterlace() const {
	return m_deInterlace.value();
}

void GetHlsAudioSegmentParams::setDeInterlace(bool newDeInterlace)  {
	m_deInterlace = newDeInterlace;
}

bool GetHlsAudioSegmentParams::deInterlaceNull() const {
	// Nullable: true
	// Type Nullable: false
	

	return !m_deInterlace.has_value();
}

void GetHlsAudioSegmentParams::setDeInterlaceNull() {
	m_deInterlace = std::nullopt;
}


const QString &GetHlsAudioSegmentParams::deviceId() const {
	return m_deviceId;
}

void GetHlsAudioSegmentParams::setDeviceId(QString newDeviceId)  {
	m_deviceId = newDeviceId;
}

bool GetHlsAudioSegmentParams::deviceIdNull() const {
	// Nullable: true
	// Type Nullable: true
	

	return m_deviceId.isNull();
}

void GetHlsAudioSegmentParams::setDeviceIdNull() {
	m_deviceId.clear();
}


const QString &GetHlsAudioSegmentParams::deviceProfileId() const {
	return m_deviceProfileId;
}

void GetHlsAudioSegmentParams::setDeviceProfileId(QString newDeviceProfileId)  {
	m_deviceProfileId = newDeviceProfileId;
}

bool GetHlsAudioSegmentParams::deviceProfileIdNull() const {
	// Nullable: true
	// Type Nullable: true
	

	return m_deviceProfileId.isNull();
}

void GetHlsAudioSegmentParams::setDeviceProfileIdNull() {
	m_deviceProfileId.clear();
}


const bool &GetHlsAudioSegmentParams::enableAutoStreamCopy() const {
	return m_enableAutoStreamCopy.value();
}

void GetHlsAudioSegmentParams::setEnableAutoStreamCopy(bool newEnableAutoStreamCopy)  {
	m_enableAutoStreamCopy = newEnableAutoStreamCopy;
}

bool GetHlsAudioSegmentParams::enableAutoStreamCopyNull() const {
	// Nullable: true
	// Type Nullable: false
	

	return !m_enableAutoStreamCopy.has_value();
}

void GetHlsAudioSegmentParams::setEnableAutoStreamCopyNull() {
	m_enableAutoStreamCopy = std::nullopt;
}


const bool &GetHlsAudioSegmentParams::enableMpegtsM2TsMode() const {
	return m_enableMpegtsM2TsMode.value();
}

void GetHlsAudioSegmentParams::setEnableMpegtsM2TsMode(bool newEnableMpegtsM2TsMode)  {
	m_enableMpegtsM2TsMode = newEnableMpegtsM2TsMode;
}

bool GetHlsAudioSegmentParams::enableMpegtsM2TsModeNull() const {
	// Nullable: true
	// Type Nullable: false
	

	return !m_enableMpegtsM2TsMode.has_value();
}

void GetHlsAudioSegmentParams::setEnableMpegtsM2TsModeNull() {
	m_enableMpegtsM2TsMode = std::nullopt;
}


const float &GetHlsAudioSegmentParams::framerate() const {
	return m_framerate.value();
}

void GetHlsAudioSegmentParams::setFramerate(float newFramerate)  {
	m_framerate = newFramerate;
}

bool GetHlsAudioSegmentParams::framerateNull() const {
	// Nullable: true
	// Type Nullable: false
	

	return !m_framerate.has_value();
}

void GetHlsAudioSegmentParams::setFramerateNull() {
	m_framerate = std::nullopt;
}


const qint32 &GetHlsAudioSegmentParams::height() const {
	return m_height.value();
}

void GetHlsAudioSegmentParams::setHeight(qint32 newHeight)  {
	m_height = newHeight;
}

bool GetHlsAudioSegmentParams::heightNull() const {
	// Nullable: true
	// Type Nullable: false
	

	return !m_height.has_value();
}

void GetHlsAudioSegmentParams::setHeightNull() {
	m_height = std::nullopt;
}


const QString &GetHlsAudioSegmentParams::level() const {
	return m_level;
}

void GetHlsAudioSegmentParams::setLevel(QString newLevel)  {
	m_level = newLevel;
}

bool GetHlsAudioSegmentParams::levelNull() const {
	// Nullable: true
	// Type Nullable: true
	

	return m_level.isNull();
}

void GetHlsAudioSegmentParams::setLevelNull() {
	m_level.clear();
}


const QString &GetHlsAudioSegmentParams::liveStreamId() const {
	return m_liveStreamId;
}

void GetHlsAudioSegmentParams::setLiveStreamId(QString newLiveStreamId)  {
	m_liveStreamId = newLiveStreamId;
}

bool GetHlsAudioSegmentParams::liveStreamIdNull() const {
	// Nullable: true
	// Type Nullable: true
	

	return m_liveStreamId.isNull();
}

void GetHlsAudioSegmentParams::setLiveStreamIdNull() {
	m_liveStreamId.clear();
}


const qint32 &GetHlsAudioSegmentParams::maxAudioBitDepth() const {
	return m_maxAudioBitDepth.value();
}

void GetHlsAudioSegmentParams::setMaxAudioBitDepth(qint32 newMaxAudioBitDepth)  {
	m_maxAudioBitDepth = newMaxAudioBitDepth;
}

bool GetHlsAudioSegmentParams::maxAudioBitDepthNull() const {
	// Nullable: true
	// Type Nullable: false
	

	return !m_maxAudioBitDepth.has_value();
}

void GetHlsAudioSegmentParams::setMaxAudioBitDepthNull() {
	m_maxAudioBitDepth = std::nullopt;
}


const qint32 &GetHlsAudioSegmentParams::maxAudioChannels() const {
	return m_maxAudioChannels.value();
}

void GetHlsAudioSegmentParams::setMaxAudioChannels(qint32 newMaxAudioChannels)  {
	m_maxAudioChannels = newMaxAudioChannels;
}

bool GetHlsAudioSegmentParams::maxAudioChannelsNull() const {
	// Nullable: true
	// Type Nullable: false
	

	return !m_maxAudioChannels.has_value();
}

void GetHlsAudioSegmentParams::setMaxAudioChannelsNull() {
	m_maxAudioChannels = std::nullopt;
}


const float &GetHlsAudioSegmentParams::maxFramerate() const {
	return m_maxFramerate.value();
}

void GetHlsAudioSegmentParams::setMaxFramerate(float newMaxFramerate)  {
	m_maxFramerate = newMaxFramerate;
}

bool GetHlsAudioSegmentParams::maxFramerateNull() const {
	// Nullable: true
	// Type Nullable: false
	

	return !m_maxFramerate.has_value();
}

void GetHlsAudioSegmentParams::setMaxFramerateNull() {
	m_maxFramerate = std::nullopt;
}


const qint32 &GetHlsAudioSegmentParams::maxRefFrames() const {
	return m_maxRefFrames.value();
}

void GetHlsAudioSegmentParams::setMaxRefFrames(qint32 newMaxRefFrames)  {
	m_maxRefFrames = newMaxRefFrames;
}

bool GetHlsAudioSegmentParams::maxRefFramesNull() const {
	// Nullable: true
	// Type Nullable: false
	

	return !m_maxRefFrames.has_value();
}

void GetHlsAudioSegmentParams::setMaxRefFramesNull() {
	m_maxRefFrames = std::nullopt;
}


const qint32 &GetHlsAudioSegmentParams::maxStreamingBitrate() const {
	return m_maxStreamingBitrate.value();
}

void GetHlsAudioSegmentParams::setMaxStreamingBitrate(qint32 newMaxStreamingBitrate)  {
	m_maxStreamingBitrate = newMaxStreamingBitrate;
}

bool GetHlsAudioSegmentParams::maxStreamingBitrateNull() const {
	// Nullable: true
	// Type Nullable: false
	

	return !m_maxStreamingBitrate.has_value();
}

void GetHlsAudioSegmentParams::setMaxStreamingBitrateNull() {
	m_maxStreamingBitrate = std::nullopt;
}


const qint32 &GetHlsAudioSegmentParams::maxVideoBitDepth() const {
	return m_maxVideoBitDepth.value();
}

void GetHlsAudioSegmentParams::setMaxVideoBitDepth(qint32 newMaxVideoBitDepth)  {
	m_maxVideoBitDepth = newMaxVideoBitDepth;
}

bool GetHlsAudioSegmentParams::maxVideoBitDepthNull() const {
	// Nullable: true
	// Type Nullable: false
	

	return !m_maxVideoBitDepth.has_value();
}

void GetHlsAudioSegmentParams::setMaxVideoBitDepthNull() {
	m_maxVideoBitDepth = std::nullopt;
}


const QString &GetHlsAudioSegmentParams::mediaSourceId() const {
	return m_mediaSourceId;
}

void GetHlsAudioSegmentParams::setMediaSourceId(QString newMediaSourceId)  {
	m_mediaSourceId = newMediaSourceId;
}

bool GetHlsAudioSegmentParams::mediaSourceIdNull() const {
	// Nullable: true
	// Type Nullable: true
	

	return m_mediaSourceId.isNull();
}

void GetHlsAudioSegmentParams::setMediaSourceIdNull() {
	m_mediaSourceId.clear();
}


const qint32 &GetHlsAudioSegmentParams::minSegments() const {
	return m_minSegments.value();
}

void GetHlsAudioSegmentParams::setMinSegments(qint32 newMinSegments)  {
	m_minSegments = newMinSegments;
}

bool GetHlsAudioSegmentParams::minSegmentsNull() const {
	// Nullable: true
	// Type Nullable: false
	

	return !m_minSegments.has_value();
}

void GetHlsAudioSegmentParams::setMinSegmentsNull() {
	m_minSegments = std::nullopt;
}


const QString &GetHlsAudioSegmentParams::params() const {
	return m_params;
}

void GetHlsAudioSegmentParams::setParams(QString newParams)  {
	m_params = newParams;
}

bool GetHlsAudioSegmentParams::paramsNull() const {
	// Nullable: true
	// Type Nullable: true
	

	return m_params.isNull();
}

void GetHlsAudioSegmentParams::setParamsNull() {
	m_params.clear();
}


const QString &GetHlsAudioSegmentParams::playSessionId() const {
	return m_playSessionId;
}

void GetHlsAudioSegmentParams::setPlaySessionId(QString newPlaySessionId)  {
	m_playSessionId = newPlaySessionId;
}

bool GetHlsAudioSegmentParams::playSessionIdNull() const {
	// Nullable: true
	// Type Nullable: true
	

	return m_playSessionId.isNull();
}

void GetHlsAudioSegmentParams::setPlaySessionIdNull() {
	m_playSessionId.clear();
}


const QString &GetHlsAudioSegmentParams::profile() const {
	return m_profile;
}

void GetHlsAudioSegmentParams::setProfile(QString newProfile)  {
	m_profile = newProfile;
}

bool GetHlsAudioSegmentParams::profileNull() const {
	// Nullable: true
	// Type Nullable: true
	

	return m_profile.isNull();
}

void GetHlsAudioSegmentParams::setProfileNull() {
	m_profile.clear();
}


const bool &GetHlsAudioSegmentParams::requireAvc() const {
	return m_requireAvc.value();
}

void GetHlsAudioSegmentParams::setRequireAvc(bool newRequireAvc)  {
	m_requireAvc = newRequireAvc;
}

bool GetHlsAudioSegmentParams::requireAvcNull() const {
	// Nullable: true
	// Type Nullable: false
	

	return !m_requireAvc.has_value();
}

void GetHlsAudioSegmentParams::setRequireAvcNull() {
	m_requireAvc = std::nullopt;
}


const bool &GetHlsAudioSegmentParams::requireNonAnamorphic() const {
	return m_requireNonAnamorphic.value();
}

void GetHlsAudioSegmentParams::setRequireNonAnamorphic(bool newRequireNonAnamorphic)  {
	m_requireNonAnamorphic = newRequireNonAnamorphic;
}

bool GetHlsAudioSegmentParams::requireNonAnamorphicNull() const {
	// Nullable: true
	// Type Nullable: false
	

	return !m_requireNonAnamorphic.has_value();
}

void GetHlsAudioSegmentParams::setRequireNonAnamorphicNull() {
	m_requireNonAnamorphic = std::nullopt;
}


const QString &GetHlsAudioSegmentParams::segmentContainer() const {
	return m_segmentContainer;
}

void GetHlsAudioSegmentParams::setSegmentContainer(QString newSegmentContainer)  {
	m_segmentContainer = newSegmentContainer;
}

bool GetHlsAudioSegmentParams::segmentContainerNull() const {
	// Nullable: true
	// Type Nullable: true
	

	return m_segmentContainer.isNull();
}

void GetHlsAudioSegmentParams::setSegmentContainerNull() {
	m_segmentContainer.clear();
}


const qint32 &GetHlsAudioSegmentParams::segmentLength() const {
	return m_segmentLength.value();
}

void GetHlsAudioSegmentParams::setSegmentLength(qint32 newSegmentLength)  {
	m_segmentLength = newSegmentLength;
}

bool GetHlsAudioSegmentParams::segmentLengthNull() const {
	// Nullable: true
	// Type Nullable: false
	

	return !m_segmentLength.has_value();
}

void GetHlsAudioSegmentParams::setSegmentLengthNull() {
	m_segmentLength = std::nullopt;
}


const qint64 &GetHlsAudioSegmentParams::startTimeTicks() const {
	return m_startTimeTicks.value();
}

void GetHlsAudioSegmentParams::setStartTimeTicks(qint64 newStartTimeTicks)  {
	m_startTimeTicks = newStartTimeTicks;
}

bool GetHlsAudioSegmentParams::startTimeTicksNull() const {
	// Nullable: true
	// Type Nullable: false
	

	return !m_startTimeTicks.has_value();
}

void GetHlsAudioSegmentParams::setStartTimeTicksNull() {
	m_startTimeTicks = std::nullopt;
}


const bool &GetHlsAudioSegmentParams::staticStreaming() const {
	return m_staticStreaming.value();
}

void GetHlsAudioSegmentParams::setStaticStreaming(bool newStaticStreaming)  {
	m_staticStreaming = newStaticStreaming;
}

bool GetHlsAudioSegmentParams::staticStreamingNull() const {
	// Nullable: true
	// Type Nullable: false
	

	return !m_staticStreaming.has_value();
}

void GetHlsAudioSegmentParams::setStaticStreamingNull() {
	m_staticStreaming = std::nullopt;
}


const QJsonObject &GetHlsAudioSegmentParams::streamOptions() const {
	return m_streamOptions;
}

void GetHlsAudioSegmentParams::setStreamOptions(QJsonObject newStreamOptions)  {
	m_streamOptions = newStreamOptions;
}

bool GetHlsAudioSegmentParams::streamOptionsNull() const {
	// Nullable: true
	// Type Nullable: true
	

	return m_streamOptions.isEmpty();
}

void GetHlsAudioSegmentParams::setStreamOptionsNull() {
	m_streamOptions= QJsonObject();
}


const QString &GetHlsAudioSegmentParams::subtitleCodec() const {
	return m_subtitleCodec;
}

void GetHlsAudioSegmentParams::setSubtitleCodec(QString newSubtitleCodec)  {
	m_subtitleCodec = newSubtitleCodec;
}

bool GetHlsAudioSegmentParams::subtitleCodecNull() const {
	// Nullable: true
	// Type Nullable: true
	

	return m_subtitleCodec.isNull();
}

void GetHlsAudioSegmentParams::setSubtitleCodecNull() {
	m_subtitleCodec.clear();
}


const SubtitleDeliveryMethod &GetHlsAudioSegmentParams::subtitleMethod() const {
	return m_subtitleMethod;
}

void GetHlsAudioSegmentParams::setSubtitleMethod(SubtitleDeliveryMethod newSubtitleMethod)  {
	m_subtitleMethod = newSubtitleMethod;
}

bool GetHlsAudioSegmentParams::subtitleMethodNull() const {
	// Nullable: true
	// Type Nullable: true
	

	return m_subtitleMethod== SubtitleDeliveryMethod::EnumNotSet;
}

void GetHlsAudioSegmentParams::setSubtitleMethodNull() {
	m_subtitleMethod= SubtitleDeliveryMethod::EnumNotSet;
}


const qint32 &GetHlsAudioSegmentParams::subtitleStreamIndex() const {
	return m_subtitleStreamIndex.value();
}

void GetHlsAudioSegmentParams::setSubtitleStreamIndex(qint32 newSubtitleStreamIndex)  {
	m_subtitleStreamIndex = newSubtitleStreamIndex;
}

bool GetHlsAudioSegmentParams::subtitleStreamIndexNull() const {
	// Nullable: true
	// Type Nullable: false
	

	return !m_subtitleStreamIndex.has_value();
}

void GetHlsAudioSegmentParams::setSubtitleStreamIndexNull() {
	m_subtitleStreamIndex = std::nullopt;
}


const QString &GetHlsAudioSegmentParams::tag() const {
	return m_tag;
}

void GetHlsAudioSegmentParams::setTag(QString newTag)  {
	m_tag = newTag;
}

bool GetHlsAudioSegmentParams::tagNull() const {
	// Nullable: true
	// Type Nullable: true
	

	return m_tag.isNull();
}

void GetHlsAudioSegmentParams::setTagNull() {
	m_tag.clear();
}


const QString &GetHlsAudioSegmentParams::transcodeReasons() const {
	return m_transcodeReasons;
}

void GetHlsAudioSegmentParams::setTranscodeReasons(QString newTranscodeReasons)  {
	m_transcodeReasons = newTranscodeReasons;
}

bool GetHlsAudioSegmentParams::transcodeReasonsNull() const {
	// Nullable: true
	// Type Nullable: true
	

	return m_transcodeReasons.isNull();
}

void GetHlsAudioSegmentParams::setTranscodeReasonsNull() {
	m_transcodeReasons.clear();
}


const qint32 &GetHlsAudioSegmentParams::transcodingMaxAudioChannels() const {
	return m_transcodingMaxAudioChannels.value();
}

void GetHlsAudioSegmentParams::setTranscodingMaxAudioChannels(qint32 newTranscodingMaxAudioChannels)  {
	m_transcodingMaxAudioChannels = newTranscodingMaxAudioChannels;
}

bool GetHlsAudioSegmentParams::transcodingMaxAudioChannelsNull() const {
	// Nullable: true
	// Type Nullable: false
	

	return !m_transcodingMaxAudioChannels.has_value();
}

void GetHlsAudioSegmentParams::setTranscodingMaxAudioChannelsNull() {
	m_transcodingMaxAudioChannels = std::nullopt;
}


const qint32 &GetHlsAudioSegmentParams::videoBitRate() const {
	return m_videoBitRate.value();
}

void GetHlsAudioSegmentParams::setVideoBitRate(qint32 newVideoBitRate)  {
	m_videoBitRate = newVideoBitRate;
}

bool GetHlsAudioSegmentParams::videoBitRateNull() const {
	// Nullable: true
	// Type Nullable: false
	

	return !m_videoBitRate.has_value();
}

void GetHlsAudioSegmentParams::setVideoBitRateNull() {
	m_videoBitRate = std::nullopt;
}


const QString &GetHlsAudioSegmentParams::videoCodec() const {
	return m_videoCodec;
}

void GetHlsAudioSegmentParams::setVideoCodec(QString newVideoCodec)  {
	m_videoCodec = newVideoCodec;
}

bool GetHlsAudioSegmentParams::videoCodecNull() const {
	// Nullable: true
	// Type Nullable: true
	

	return m_videoCodec.isNull();
}

void GetHlsAudioSegmentParams::setVideoCodecNull() {
	m_videoCodec.clear();
}


const qint32 &GetHlsAudioSegmentParams::videoStreamIndex() const {
	return m_videoStreamIndex.value();
}

void GetHlsAudioSegmentParams::setVideoStreamIndex(qint32 newVideoStreamIndex)  {
	m_videoStreamIndex = newVideoStreamIndex;
}

bool GetHlsAudioSegmentParams::videoStreamIndexNull() const {
	// Nullable: true
	// Type Nullable: false
	

	return !m_videoStreamIndex.has_value();
}

void GetHlsAudioSegmentParams::setVideoStreamIndexNull() {
	m_videoStreamIndex = std::nullopt;
}


const qint32 &GetHlsAudioSegmentParams::width() const {
	return m_width.value();
}

void GetHlsAudioSegmentParams::setWidth(qint32 newWidth)  {
	m_width = newWidth;
}

bool GetHlsAudioSegmentParams::widthNull() const {
	// Nullable: true
	// Type Nullable: false
	

	return !m_width.has_value();
}

void GetHlsAudioSegmentParams::setWidthNull() {
	m_width = std::nullopt;
}




// GetHlsAudioSegmentLegacyAacParams

const QString &GetHlsAudioSegmentLegacyAacParams::itemId() const {
	return m_itemId;
}

void GetHlsAudioSegmentLegacyAacParams::setItemId(QString newItemId) {
	m_itemId = newItemId;
}


const QString &GetHlsAudioSegmentLegacyAacParams::segmentId() const {
	return m_segmentId;
}

void GetHlsAudioSegmentLegacyAacParams::setSegmentId(QString newSegmentId) {
	m_segmentId = newSegmentId;
}




// GetHlsAudioSegmentLegacyMp3Params

const QString &GetHlsAudioSegmentLegacyMp3Params::itemId() const {
	return m_itemId;
}

void GetHlsAudioSegmentLegacyMp3Params::setItemId(QString newItemId) {
	m_itemId = newItemId;
}


const QString &GetHlsAudioSegmentLegacyMp3Params::segmentId() const {
	return m_segmentId;
}

void GetHlsAudioSegmentLegacyMp3Params::setSegmentId(QString newSegmentId) {
	m_segmentId = newSegmentId;
}




// GetHlsPlaylistLegacyParams

const QString &GetHlsPlaylistLegacyParams::itemId() const {
	return m_itemId;
}

void GetHlsPlaylistLegacyParams::setItemId(QString newItemId) {
	m_itemId = newItemId;
}


const QString &GetHlsPlaylistLegacyParams::playlistId() const {
	return m_playlistId;
}

void GetHlsPlaylistLegacyParams::setPlaylistId(QString newPlaylistId) {
	m_playlistId = newPlaylistId;
}




// GetHlsVideoSegmentParams

const QString &GetHlsVideoSegmentParams::container() const {
	return m_container;
}

void GetHlsVideoSegmentParams::setContainer(QString newContainer) {
	m_container = newContainer;
}


const QString &GetHlsVideoSegmentParams::itemId() const {
	return m_itemId;
}

void GetHlsVideoSegmentParams::setItemId(QString newItemId) {
	m_itemId = newItemId;
}


const QString &GetHlsVideoSegmentParams::playlistId() const {
	return m_playlistId;
}

void GetHlsVideoSegmentParams::setPlaylistId(QString newPlaylistId) {
	m_playlistId = newPlaylistId;
}


const qint32 &GetHlsVideoSegmentParams::segmentId() const {
	return m_segmentId;
}

void GetHlsVideoSegmentParams::setSegmentId(qint32 newSegmentId) {
	m_segmentId = newSegmentId;
}


const bool &GetHlsVideoSegmentParams::allowAudioStreamCopy() const {
	return m_allowAudioStreamCopy.value();
}

void GetHlsVideoSegmentParams::setAllowAudioStreamCopy(bool newAllowAudioStreamCopy)  {
	m_allowAudioStreamCopy = newAllowAudioStreamCopy;
}

bool GetHlsVideoSegmentParams::allowAudioStreamCopyNull() const {
	// Nullable: true
	// Type Nullable: false
	

	return !m_allowAudioStreamCopy.has_value();
}

void GetHlsVideoSegmentParams::setAllowAudioStreamCopyNull() {
	m_allowAudioStreamCopy = std::nullopt;
}


const bool &GetHlsVideoSegmentParams::allowVideoStreamCopy() const {
	return m_allowVideoStreamCopy.value();
}

void GetHlsVideoSegmentParams::setAllowVideoStreamCopy(bool newAllowVideoStreamCopy)  {
	m_allowVideoStreamCopy = newAllowVideoStreamCopy;
}

bool GetHlsVideoSegmentParams::allowVideoStreamCopyNull() const {
	// Nullable: true
	// Type Nullable: false
	

	return !m_allowVideoStreamCopy.has_value();
}

void GetHlsVideoSegmentParams::setAllowVideoStreamCopyNull() {
	m_allowVideoStreamCopy = std::nullopt;
}


const qint32 &GetHlsVideoSegmentParams::audioBitRate() const {
	return m_audioBitRate.value();
}

void GetHlsVideoSegmentParams::setAudioBitRate(qint32 newAudioBitRate)  {
	m_audioBitRate = newAudioBitRate;
}

bool GetHlsVideoSegmentParams::audioBitRateNull() const {
	// Nullable: true
	// Type Nullable: false
	

	return !m_audioBitRate.has_value();
}

void GetHlsVideoSegmentParams::setAudioBitRateNull() {
	m_audioBitRate = std::nullopt;
}


const qint32 &GetHlsVideoSegmentParams::audioChannels() const {
	return m_audioChannels.value();
}

void GetHlsVideoSegmentParams::setAudioChannels(qint32 newAudioChannels)  {
	m_audioChannels = newAudioChannels;
}

bool GetHlsVideoSegmentParams::audioChannelsNull() const {
	// Nullable: true
	// Type Nullable: false
	

	return !m_audioChannels.has_value();
}

void GetHlsVideoSegmentParams::setAudioChannelsNull() {
	m_audioChannels = std::nullopt;
}


const QString &GetHlsVideoSegmentParams::audioCodec() const {
	return m_audioCodec;
}

void GetHlsVideoSegmentParams::setAudioCodec(QString newAudioCodec)  {
	m_audioCodec = newAudioCodec;
}

bool GetHlsVideoSegmentParams::audioCodecNull() const {
	// Nullable: true
	// Type Nullable: true
	

	return m_audioCodec.isNull();
}

void GetHlsVideoSegmentParams::setAudioCodecNull() {
	m_audioCodec.clear();
}


const qint32 &GetHlsVideoSegmentParams::audioSampleRate() const {
	return m_audioSampleRate.value();
}

void GetHlsVideoSegmentParams::setAudioSampleRate(qint32 newAudioSampleRate)  {
	m_audioSampleRate = newAudioSampleRate;
}

bool GetHlsVideoSegmentParams::audioSampleRateNull() const {
	// Nullable: true
	// Type Nullable: false
	

	return !m_audioSampleRate.has_value();
}

void GetHlsVideoSegmentParams::setAudioSampleRateNull() {
	m_audioSampleRate = std::nullopt;
}


const qint32 &GetHlsVideoSegmentParams::audioStreamIndex() const {
	return m_audioStreamIndex.value();
}

void GetHlsVideoSegmentParams::setAudioStreamIndex(qint32 newAudioStreamIndex)  {
	m_audioStreamIndex = newAudioStreamIndex;
}

bool GetHlsVideoSegmentParams::audioStreamIndexNull() const {
	// Nullable: true
	// Type Nullable: false
	

	return !m_audioStreamIndex.has_value();
}

void GetHlsVideoSegmentParams::setAudioStreamIndexNull() {
	m_audioStreamIndex = std::nullopt;
}


const bool &GetHlsVideoSegmentParams::breakOnNonKeyFrames() const {
	return m_breakOnNonKeyFrames.value();
}

void GetHlsVideoSegmentParams::setBreakOnNonKeyFrames(bool newBreakOnNonKeyFrames)  {
	m_breakOnNonKeyFrames = newBreakOnNonKeyFrames;
}

bool GetHlsVideoSegmentParams::breakOnNonKeyFramesNull() const {
	// Nullable: true
	// Type Nullable: false
	

	return !m_breakOnNonKeyFrames.has_value();
}

void GetHlsVideoSegmentParams::setBreakOnNonKeyFramesNull() {
	m_breakOnNonKeyFrames = std::nullopt;
}


const EncodingContext &GetHlsVideoSegmentParams::context() const {
	return m_context;
}

void GetHlsVideoSegmentParams::setContext(EncodingContext newContext)  {
	m_context = newContext;
}

bool GetHlsVideoSegmentParams::contextNull() const {
	// Nullable: true
	// Type Nullable: true
	

	return m_context== EncodingContext::EnumNotSet;
}

void GetHlsVideoSegmentParams::setContextNull() {
	m_context= EncodingContext::EnumNotSet;
}


const bool &GetHlsVideoSegmentParams::copyTimestamps() const {
	return m_copyTimestamps.value();
}

void GetHlsVideoSegmentParams::setCopyTimestamps(bool newCopyTimestamps)  {
	m_copyTimestamps = newCopyTimestamps;
}

bool GetHlsVideoSegmentParams::copyTimestampsNull() const {
	// Nullable: true
	// Type Nullable: false
	

	return !m_copyTimestamps.has_value();
}

void GetHlsVideoSegmentParams::setCopyTimestampsNull() {
	m_copyTimestamps = std::nullopt;
}


const qint32 &GetHlsVideoSegmentParams::cpuCoreLimit() const {
	return m_cpuCoreLimit.value();
}

void GetHlsVideoSegmentParams::setCpuCoreLimit(qint32 newCpuCoreLimit)  {
	m_cpuCoreLimit = newCpuCoreLimit;
}

bool GetHlsVideoSegmentParams::cpuCoreLimitNull() const {
	// Nullable: true
	// Type Nullable: false
	

	return !m_cpuCoreLimit.has_value();
}

void GetHlsVideoSegmentParams::setCpuCoreLimitNull() {
	m_cpuCoreLimit = std::nullopt;
}


const bool &GetHlsVideoSegmentParams::deInterlace() const {
	return m_deInterlace.value();
}

void GetHlsVideoSegmentParams::setDeInterlace(bool newDeInterlace)  {
	m_deInterlace = newDeInterlace;
}

bool GetHlsVideoSegmentParams::deInterlaceNull() const {
	// Nullable: true
	// Type Nullable: false
	

	return !m_deInterlace.has_value();
}

void GetHlsVideoSegmentParams::setDeInterlaceNull() {
	m_deInterlace = std::nullopt;
}


const QString &GetHlsVideoSegmentParams::deviceId() const {
	return m_deviceId;
}

void GetHlsVideoSegmentParams::setDeviceId(QString newDeviceId)  {
	m_deviceId = newDeviceId;
}

bool GetHlsVideoSegmentParams::deviceIdNull() const {
	// Nullable: true
	// Type Nullable: true
	

	return m_deviceId.isNull();
}

void GetHlsVideoSegmentParams::setDeviceIdNull() {
	m_deviceId.clear();
}


const QString &GetHlsVideoSegmentParams::deviceProfileId() const {
	return m_deviceProfileId;
}

void GetHlsVideoSegmentParams::setDeviceProfileId(QString newDeviceProfileId)  {
	m_deviceProfileId = newDeviceProfileId;
}

bool GetHlsVideoSegmentParams::deviceProfileIdNull() const {
	// Nullable: true
	// Type Nullable: true
	

	return m_deviceProfileId.isNull();
}

void GetHlsVideoSegmentParams::setDeviceProfileIdNull() {
	m_deviceProfileId.clear();
}


const bool &GetHlsVideoSegmentParams::enableAutoStreamCopy() const {
	return m_enableAutoStreamCopy.value();
}

void GetHlsVideoSegmentParams::setEnableAutoStreamCopy(bool newEnableAutoStreamCopy)  {
	m_enableAutoStreamCopy = newEnableAutoStreamCopy;
}

bool GetHlsVideoSegmentParams::enableAutoStreamCopyNull() const {
	// Nullable: true
	// Type Nullable: false
	

	return !m_enableAutoStreamCopy.has_value();
}

void GetHlsVideoSegmentParams::setEnableAutoStreamCopyNull() {
	m_enableAutoStreamCopy = std::nullopt;
}


const bool &GetHlsVideoSegmentParams::enableMpegtsM2TsMode() const {
	return m_enableMpegtsM2TsMode.value();
}

void GetHlsVideoSegmentParams::setEnableMpegtsM2TsMode(bool newEnableMpegtsM2TsMode)  {
	m_enableMpegtsM2TsMode = newEnableMpegtsM2TsMode;
}

bool GetHlsVideoSegmentParams::enableMpegtsM2TsModeNull() const {
	// Nullable: true
	// Type Nullable: false
	

	return !m_enableMpegtsM2TsMode.has_value();
}

void GetHlsVideoSegmentParams::setEnableMpegtsM2TsModeNull() {
	m_enableMpegtsM2TsMode = std::nullopt;
}


const float &GetHlsVideoSegmentParams::framerate() const {
	return m_framerate.value();
}

void GetHlsVideoSegmentParams::setFramerate(float newFramerate)  {
	m_framerate = newFramerate;
}

bool GetHlsVideoSegmentParams::framerateNull() const {
	// Nullable: true
	// Type Nullable: false
	

	return !m_framerate.has_value();
}

void GetHlsVideoSegmentParams::setFramerateNull() {
	m_framerate = std::nullopt;
}


const qint32 &GetHlsVideoSegmentParams::height() const {
	return m_height.value();
}

void GetHlsVideoSegmentParams::setHeight(qint32 newHeight)  {
	m_height = newHeight;
}

bool GetHlsVideoSegmentParams::heightNull() const {
	// Nullable: true
	// Type Nullable: false
	

	return !m_height.has_value();
}

void GetHlsVideoSegmentParams::setHeightNull() {
	m_height = std::nullopt;
}


const QString &GetHlsVideoSegmentParams::level() const {
	return m_level;
}

void GetHlsVideoSegmentParams::setLevel(QString newLevel)  {
	m_level = newLevel;
}

bool GetHlsVideoSegmentParams::levelNull() const {
	// Nullable: true
	// Type Nullable: true
	

	return m_level.isNull();
}

void GetHlsVideoSegmentParams::setLevelNull() {
	m_level.clear();
}


const QString &GetHlsVideoSegmentParams::liveStreamId() const {
	return m_liveStreamId;
}

void GetHlsVideoSegmentParams::setLiveStreamId(QString newLiveStreamId)  {
	m_liveStreamId = newLiveStreamId;
}

bool GetHlsVideoSegmentParams::liveStreamIdNull() const {
	// Nullable: true
	// Type Nullable: true
	

	return m_liveStreamId.isNull();
}

void GetHlsVideoSegmentParams::setLiveStreamIdNull() {
	m_liveStreamId.clear();
}


const qint32 &GetHlsVideoSegmentParams::maxAudioBitDepth() const {
	return m_maxAudioBitDepth.value();
}

void GetHlsVideoSegmentParams::setMaxAudioBitDepth(qint32 newMaxAudioBitDepth)  {
	m_maxAudioBitDepth = newMaxAudioBitDepth;
}

bool GetHlsVideoSegmentParams::maxAudioBitDepthNull() const {
	// Nullable: true
	// Type Nullable: false
	

	return !m_maxAudioBitDepth.has_value();
}

void GetHlsVideoSegmentParams::setMaxAudioBitDepthNull() {
	m_maxAudioBitDepth = std::nullopt;
}


const qint32 &GetHlsVideoSegmentParams::maxAudioChannels() const {
	return m_maxAudioChannels.value();
}

void GetHlsVideoSegmentParams::setMaxAudioChannels(qint32 newMaxAudioChannels)  {
	m_maxAudioChannels = newMaxAudioChannels;
}

bool GetHlsVideoSegmentParams::maxAudioChannelsNull() const {
	// Nullable: true
	// Type Nullable: false
	

	return !m_maxAudioChannels.has_value();
}

void GetHlsVideoSegmentParams::setMaxAudioChannelsNull() {
	m_maxAudioChannels = std::nullopt;
}


const float &GetHlsVideoSegmentParams::maxFramerate() const {
	return m_maxFramerate.value();
}

void GetHlsVideoSegmentParams::setMaxFramerate(float newMaxFramerate)  {
	m_maxFramerate = newMaxFramerate;
}

bool GetHlsVideoSegmentParams::maxFramerateNull() const {
	// Nullable: true
	// Type Nullable: false
	

	return !m_maxFramerate.has_value();
}

void GetHlsVideoSegmentParams::setMaxFramerateNull() {
	m_maxFramerate = std::nullopt;
}


const qint32 &GetHlsVideoSegmentParams::maxRefFrames() const {
	return m_maxRefFrames.value();
}

void GetHlsVideoSegmentParams::setMaxRefFrames(qint32 newMaxRefFrames)  {
	m_maxRefFrames = newMaxRefFrames;
}

bool GetHlsVideoSegmentParams::maxRefFramesNull() const {
	// Nullable: true
	// Type Nullable: false
	

	return !m_maxRefFrames.has_value();
}

void GetHlsVideoSegmentParams::setMaxRefFramesNull() {
	m_maxRefFrames = std::nullopt;
}


const qint32 &GetHlsVideoSegmentParams::maxVideoBitDepth() const {
	return m_maxVideoBitDepth.value();
}

void GetHlsVideoSegmentParams::setMaxVideoBitDepth(qint32 newMaxVideoBitDepth)  {
	m_maxVideoBitDepth = newMaxVideoBitDepth;
}

bool GetHlsVideoSegmentParams::maxVideoBitDepthNull() const {
	// Nullable: true
	// Type Nullable: false
	

	return !m_maxVideoBitDepth.has_value();
}

void GetHlsVideoSegmentParams::setMaxVideoBitDepthNull() {
	m_maxVideoBitDepth = std::nullopt;
}


const QString &GetHlsVideoSegmentParams::mediaSourceId() const {
	return m_mediaSourceId;
}

void GetHlsVideoSegmentParams::setMediaSourceId(QString newMediaSourceId)  {
	m_mediaSourceId = newMediaSourceId;
}

bool GetHlsVideoSegmentParams::mediaSourceIdNull() const {
	// Nullable: true
	// Type Nullable: true
	

	return m_mediaSourceId.isNull();
}

void GetHlsVideoSegmentParams::setMediaSourceIdNull() {
	m_mediaSourceId.clear();
}


const qint32 &GetHlsVideoSegmentParams::minSegments() const {
	return m_minSegments.value();
}

void GetHlsVideoSegmentParams::setMinSegments(qint32 newMinSegments)  {
	m_minSegments = newMinSegments;
}

bool GetHlsVideoSegmentParams::minSegmentsNull() const {
	// Nullable: true
	// Type Nullable: false
	

	return !m_minSegments.has_value();
}

void GetHlsVideoSegmentParams::setMinSegmentsNull() {
	m_minSegments = std::nullopt;
}


const QString &GetHlsVideoSegmentParams::params() const {
	return m_params;
}

void GetHlsVideoSegmentParams::setParams(QString newParams)  {
	m_params = newParams;
}

bool GetHlsVideoSegmentParams::paramsNull() const {
	// Nullable: true
	// Type Nullable: true
	

	return m_params.isNull();
}

void GetHlsVideoSegmentParams::setParamsNull() {
	m_params.clear();
}


const QString &GetHlsVideoSegmentParams::playSessionId() const {
	return m_playSessionId;
}

void GetHlsVideoSegmentParams::setPlaySessionId(QString newPlaySessionId)  {
	m_playSessionId = newPlaySessionId;
}

bool GetHlsVideoSegmentParams::playSessionIdNull() const {
	// Nullable: true
	// Type Nullable: true
	

	return m_playSessionId.isNull();
}

void GetHlsVideoSegmentParams::setPlaySessionIdNull() {
	m_playSessionId.clear();
}


const QString &GetHlsVideoSegmentParams::profile() const {
	return m_profile;
}

void GetHlsVideoSegmentParams::setProfile(QString newProfile)  {
	m_profile = newProfile;
}

bool GetHlsVideoSegmentParams::profileNull() const {
	// Nullable: true
	// Type Nullable: true
	

	return m_profile.isNull();
}

void GetHlsVideoSegmentParams::setProfileNull() {
	m_profile.clear();
}


const bool &GetHlsVideoSegmentParams::requireAvc() const {
	return m_requireAvc.value();
}

void GetHlsVideoSegmentParams::setRequireAvc(bool newRequireAvc)  {
	m_requireAvc = newRequireAvc;
}

bool GetHlsVideoSegmentParams::requireAvcNull() const {
	// Nullable: true
	// Type Nullable: false
	

	return !m_requireAvc.has_value();
}

void GetHlsVideoSegmentParams::setRequireAvcNull() {
	m_requireAvc = std::nullopt;
}


const bool &GetHlsVideoSegmentParams::requireNonAnamorphic() const {
	return m_requireNonAnamorphic.value();
}

void GetHlsVideoSegmentParams::setRequireNonAnamorphic(bool newRequireNonAnamorphic)  {
	m_requireNonAnamorphic = newRequireNonAnamorphic;
}

bool GetHlsVideoSegmentParams::requireNonAnamorphicNull() const {
	// Nullable: true
	// Type Nullable: false
	

	return !m_requireNonAnamorphic.has_value();
}

void GetHlsVideoSegmentParams::setRequireNonAnamorphicNull() {
	m_requireNonAnamorphic = std::nullopt;
}


const QString &GetHlsVideoSegmentParams::segmentContainer() const {
	return m_segmentContainer;
}

void GetHlsVideoSegmentParams::setSegmentContainer(QString newSegmentContainer)  {
	m_segmentContainer = newSegmentContainer;
}

bool GetHlsVideoSegmentParams::segmentContainerNull() const {
	// Nullable: true
	// Type Nullable: true
	

	return m_segmentContainer.isNull();
}

void GetHlsVideoSegmentParams::setSegmentContainerNull() {
	m_segmentContainer.clear();
}


const qint32 &GetHlsVideoSegmentParams::segmentLength() const {
	return m_segmentLength.value();
}

void GetHlsVideoSegmentParams::setSegmentLength(qint32 newSegmentLength)  {
	m_segmentLength = newSegmentLength;
}

bool GetHlsVideoSegmentParams::segmentLengthNull() const {
	// Nullable: true
	// Type Nullable: false
	

	return !m_segmentLength.has_value();
}

void GetHlsVideoSegmentParams::setSegmentLengthNull() {
	m_segmentLength = std::nullopt;
}


const qint64 &GetHlsVideoSegmentParams::startTimeTicks() const {
	return m_startTimeTicks.value();
}

void GetHlsVideoSegmentParams::setStartTimeTicks(qint64 newStartTimeTicks)  {
	m_startTimeTicks = newStartTimeTicks;
}

bool GetHlsVideoSegmentParams::startTimeTicksNull() const {
	// Nullable: true
	// Type Nullable: false
	

	return !m_startTimeTicks.has_value();
}

void GetHlsVideoSegmentParams::setStartTimeTicksNull() {
	m_startTimeTicks = std::nullopt;
}


const bool &GetHlsVideoSegmentParams::staticStreaming() const {
	return m_staticStreaming.value();
}

void GetHlsVideoSegmentParams::setStaticStreaming(bool newStaticStreaming)  {
	m_staticStreaming = newStaticStreaming;
}

bool GetHlsVideoSegmentParams::staticStreamingNull() const {
	// Nullable: true
	// Type Nullable: false
	

	return !m_staticStreaming.has_value();
}

void GetHlsVideoSegmentParams::setStaticStreamingNull() {
	m_staticStreaming = std::nullopt;
}


const QJsonObject &GetHlsVideoSegmentParams::streamOptions() const {
	return m_streamOptions;
}

void GetHlsVideoSegmentParams::setStreamOptions(QJsonObject newStreamOptions)  {
	m_streamOptions = newStreamOptions;
}

bool GetHlsVideoSegmentParams::streamOptionsNull() const {
	// Nullable: true
	// Type Nullable: true
	

	return m_streamOptions.isEmpty();
}

void GetHlsVideoSegmentParams::setStreamOptionsNull() {
	m_streamOptions= QJsonObject();
}


const QString &GetHlsVideoSegmentParams::subtitleCodec() const {
	return m_subtitleCodec;
}

void GetHlsVideoSegmentParams::setSubtitleCodec(QString newSubtitleCodec)  {
	m_subtitleCodec = newSubtitleCodec;
}

bool GetHlsVideoSegmentParams::subtitleCodecNull() const {
	// Nullable: true
	// Type Nullable: true
	

	return m_subtitleCodec.isNull();
}

void GetHlsVideoSegmentParams::setSubtitleCodecNull() {
	m_subtitleCodec.clear();
}


const SubtitleDeliveryMethod &GetHlsVideoSegmentParams::subtitleMethod() const {
	return m_subtitleMethod;
}

void GetHlsVideoSegmentParams::setSubtitleMethod(SubtitleDeliveryMethod newSubtitleMethod)  {
	m_subtitleMethod = newSubtitleMethod;
}

bool GetHlsVideoSegmentParams::subtitleMethodNull() const {
	// Nullable: true
	// Type Nullable: true
	

	return m_subtitleMethod== SubtitleDeliveryMethod::EnumNotSet;
}

void GetHlsVideoSegmentParams::setSubtitleMethodNull() {
	m_subtitleMethod= SubtitleDeliveryMethod::EnumNotSet;
}


const qint32 &GetHlsVideoSegmentParams::subtitleStreamIndex() const {
	return m_subtitleStreamIndex.value();
}

void GetHlsVideoSegmentParams::setSubtitleStreamIndex(qint32 newSubtitleStreamIndex)  {
	m_subtitleStreamIndex = newSubtitleStreamIndex;
}

bool GetHlsVideoSegmentParams::subtitleStreamIndexNull() const {
	// Nullable: true
	// Type Nullable: false
	

	return !m_subtitleStreamIndex.has_value();
}

void GetHlsVideoSegmentParams::setSubtitleStreamIndexNull() {
	m_subtitleStreamIndex = std::nullopt;
}


const QString &GetHlsVideoSegmentParams::tag() const {
	return m_tag;
}

void GetHlsVideoSegmentParams::setTag(QString newTag)  {
	m_tag = newTag;
}

bool GetHlsVideoSegmentParams::tagNull() const {
	// Nullable: true
	// Type Nullable: true
	

	return m_tag.isNull();
}

void GetHlsVideoSegmentParams::setTagNull() {
	m_tag.clear();
}


const QString &GetHlsVideoSegmentParams::transcodeReasons() const {
	return m_transcodeReasons;
}

void GetHlsVideoSegmentParams::setTranscodeReasons(QString newTranscodeReasons)  {
	m_transcodeReasons = newTranscodeReasons;
}

bool GetHlsVideoSegmentParams::transcodeReasonsNull() const {
	// Nullable: true
	// Type Nullable: true
	

	return m_transcodeReasons.isNull();
}

void GetHlsVideoSegmentParams::setTranscodeReasonsNull() {
	m_transcodeReasons.clear();
}


const qint32 &GetHlsVideoSegmentParams::transcodingMaxAudioChannels() const {
	return m_transcodingMaxAudioChannels.value();
}

void GetHlsVideoSegmentParams::setTranscodingMaxAudioChannels(qint32 newTranscodingMaxAudioChannels)  {
	m_transcodingMaxAudioChannels = newTranscodingMaxAudioChannels;
}

bool GetHlsVideoSegmentParams::transcodingMaxAudioChannelsNull() const {
	// Nullable: true
	// Type Nullable: false
	

	return !m_transcodingMaxAudioChannels.has_value();
}

void GetHlsVideoSegmentParams::setTranscodingMaxAudioChannelsNull() {
	m_transcodingMaxAudioChannels = std::nullopt;
}


const qint32 &GetHlsVideoSegmentParams::videoBitRate() const {
	return m_videoBitRate.value();
}

void GetHlsVideoSegmentParams::setVideoBitRate(qint32 newVideoBitRate)  {
	m_videoBitRate = newVideoBitRate;
}

bool GetHlsVideoSegmentParams::videoBitRateNull() const {
	// Nullable: true
	// Type Nullable: false
	

	return !m_videoBitRate.has_value();
}

void GetHlsVideoSegmentParams::setVideoBitRateNull() {
	m_videoBitRate = std::nullopt;
}


const QString &GetHlsVideoSegmentParams::videoCodec() const {
	return m_videoCodec;
}

void GetHlsVideoSegmentParams::setVideoCodec(QString newVideoCodec)  {
	m_videoCodec = newVideoCodec;
}

bool GetHlsVideoSegmentParams::videoCodecNull() const {
	// Nullable: true
	// Type Nullable: true
	

	return m_videoCodec.isNull();
}

void GetHlsVideoSegmentParams::setVideoCodecNull() {
	m_videoCodec.clear();
}


const qint32 &GetHlsVideoSegmentParams::videoStreamIndex() const {
	return m_videoStreamIndex.value();
}

void GetHlsVideoSegmentParams::setVideoStreamIndex(qint32 newVideoStreamIndex)  {
	m_videoStreamIndex = newVideoStreamIndex;
}

bool GetHlsVideoSegmentParams::videoStreamIndexNull() const {
	// Nullable: true
	// Type Nullable: false
	

	return !m_videoStreamIndex.has_value();
}

void GetHlsVideoSegmentParams::setVideoStreamIndexNull() {
	m_videoStreamIndex = std::nullopt;
}


const qint32 &GetHlsVideoSegmentParams::width() const {
	return m_width.value();
}

void GetHlsVideoSegmentParams::setWidth(qint32 newWidth)  {
	m_width = newWidth;
}

bool GetHlsVideoSegmentParams::widthNull() const {
	// Nullable: true
	// Type Nullable: false
	

	return !m_width.has_value();
}

void GetHlsVideoSegmentParams::setWidthNull() {
	m_width = std::nullopt;
}




// GetHlsVideoSegmentLegacyParams

const QString &GetHlsVideoSegmentLegacyParams::itemId() const {
	return m_itemId;
}

void GetHlsVideoSegmentLegacyParams::setItemId(QString newItemId) {
	m_itemId = newItemId;
}


const QString &GetHlsVideoSegmentLegacyParams::playlistId() const {
	return m_playlistId;
}

void GetHlsVideoSegmentLegacyParams::setPlaylistId(QString newPlaylistId) {
	m_playlistId = newPlaylistId;
}


const QString &GetHlsVideoSegmentLegacyParams::segmentContainer() const {
	return m_segmentContainer;
}

void GetHlsVideoSegmentLegacyParams::setSegmentContainer(QString newSegmentContainer) {
	m_segmentContainer = newSegmentContainer;
}


const QString &GetHlsVideoSegmentLegacyParams::segmentId() const {
	return m_segmentId;
}

void GetHlsVideoSegmentLegacyParams::setSegmentId(QString newSegmentId) {
	m_segmentId = newSegmentId;
}




// GetIconParams

const QString &GetIconParams::fileName() const {
	return m_fileName;
}

void GetIconParams::setFileName(QString newFileName) {
	m_fileName = newFileName;
}




// GetIconIdParams

const QString &GetIconIdParams::fileName() const {
	return m_fileName;
}

void GetIconIdParams::setFileName(QString newFileName) {
	m_fileName = newFileName;
}


const QString &GetIconIdParams::serverId() const {
	return m_serverId;
}

void GetIconIdParams::setServerId(QString newServerId) {
	m_serverId = newServerId;
}




// GetInstantMixFromAlbumParams

const QString &GetInstantMixFromAlbumParams::jellyfinId() const {
	return m_jellyfinId;
}

void GetInstantMixFromAlbumParams::setJellyfinId(QString newJellyfinId) {
	m_jellyfinId = newJellyfinId;
}


const QList<ImageType> &GetInstantMixFromAlbumParams::enableImageTypes() const {
	return m_enableImageTypes;
}

void GetInstantMixFromAlbumParams::setEnableImageTypes(QList<ImageType> newEnableImageTypes)  {
	m_enableImageTypes = newEnableImageTypes;
}

bool GetInstantMixFromAlbumParams::enableImageTypesNull() const {
	// Nullable: true
	// Type Nullable: true
	

	return m_enableImageTypes.size() == 0;
}

void GetInstantMixFromAlbumParams::setEnableImageTypesNull() {
	m_enableImageTypes.clear();
}


const bool &GetInstantMixFromAlbumParams::enableImages() const {
	return m_enableImages.value();
}

void GetInstantMixFromAlbumParams::setEnableImages(bool newEnableImages)  {
	m_enableImages = newEnableImages;
}

bool GetInstantMixFromAlbumParams::enableImagesNull() const {
	// Nullable: true
	// Type Nullable: false
	

	return !m_enableImages.has_value();
}

void GetInstantMixFromAlbumParams::setEnableImagesNull() {
	m_enableImages = std::nullopt;
}


const bool &GetInstantMixFromAlbumParams::enableUserData() const {
	return m_enableUserData.value();
}

void GetInstantMixFromAlbumParams::setEnableUserData(bool newEnableUserData)  {
	m_enableUserData = newEnableUserData;
}

bool GetInstantMixFromAlbumParams::enableUserDataNull() const {
	// Nullable: true
	// Type Nullable: false
	

	return !m_enableUserData.has_value();
}

void GetInstantMixFromAlbumParams::setEnableUserDataNull() {
	m_enableUserData = std::nullopt;
}


const QList<ItemFields> &GetInstantMixFromAlbumParams::fields() const {
	return m_fields;
}

void GetInstantMixFromAlbumParams::setFields(QList<ItemFields> newFields)  {
	m_fields = newFields;
}

bool GetInstantMixFromAlbumParams::fieldsNull() const {
	// Nullable: true
	// Type Nullable: true
	

	return m_fields.size() == 0;
}

void GetInstantMixFromAlbumParams::setFieldsNull() {
	m_fields.clear();
}


const qint32 &GetInstantMixFromAlbumParams::imageTypeLimit() const {
	return m_imageTypeLimit.value();
}

void GetInstantMixFromAlbumParams::setImageTypeLimit(qint32 newImageTypeLimit)  {
	m_imageTypeLimit = newImageTypeLimit;
}

bool GetInstantMixFromAlbumParams::imageTypeLimitNull() const {
	// Nullable: true
	// Type Nullable: false
	

	return !m_imageTypeLimit.has_value();
}

void GetInstantMixFromAlbumParams::setImageTypeLimitNull() {
	m_imageTypeLimit = std::nullopt;
}


const qint32 &GetInstantMixFromAlbumParams::limit() const {
	return m_limit.value();
}

void GetInstantMixFromAlbumParams::setLimit(qint32 newLimit)  {
	m_limit = newLimit;
}

bool GetInstantMixFromAlbumParams::limitNull() const {
	// Nullable: true
	// Type Nullable: false
	

	return !m_limit.has_value();
}

void GetInstantMixFromAlbumParams::setLimitNull() {
	m_limit = std::nullopt;
}


const QString &GetInstantMixFromAlbumParams::userId() const {
	return m_userId;
}

void GetInstantMixFromAlbumParams::setUserId(QString newUserId)  {
	m_userId = newUserId;
}

bool GetInstantMixFromAlbumParams::userIdNull() const {
	// Nullable: true
	// Type Nullable: true
	

	return m_userId.isNull();
}

void GetInstantMixFromAlbumParams::setUserIdNull() {
	m_userId.clear();
}




// GetInstantMixFromArtistsParams

const QString &GetInstantMixFromArtistsParams::jellyfinId() const {
	return m_jellyfinId;
}

void GetInstantMixFromArtistsParams::setJellyfinId(QString newJellyfinId) {
	m_jellyfinId = newJellyfinId;
}


const QList<ImageType> &GetInstantMixFromArtistsParams::enableImageTypes() const {
	return m_enableImageTypes;
}

void GetInstantMixFromArtistsParams::setEnableImageTypes(QList<ImageType> newEnableImageTypes)  {
	m_enableImageTypes = newEnableImageTypes;
}

bool GetInstantMixFromArtistsParams::enableImageTypesNull() const {
	// Nullable: true
	// Type Nullable: true
	

	return m_enableImageTypes.size() == 0;
}

void GetInstantMixFromArtistsParams::setEnableImageTypesNull() {
	m_enableImageTypes.clear();
}


const bool &GetInstantMixFromArtistsParams::enableImages() const {
	return m_enableImages.value();
}

void GetInstantMixFromArtistsParams::setEnableImages(bool newEnableImages)  {
	m_enableImages = newEnableImages;
}

bool GetInstantMixFromArtistsParams::enableImagesNull() const {
	// Nullable: true
	// Type Nullable: false
	

	return !m_enableImages.has_value();
}

void GetInstantMixFromArtistsParams::setEnableImagesNull() {
	m_enableImages = std::nullopt;
}


const bool &GetInstantMixFromArtistsParams::enableUserData() const {
	return m_enableUserData.value();
}

void GetInstantMixFromArtistsParams::setEnableUserData(bool newEnableUserData)  {
	m_enableUserData = newEnableUserData;
}

bool GetInstantMixFromArtistsParams::enableUserDataNull() const {
	// Nullable: true
	// Type Nullable: false
	

	return !m_enableUserData.has_value();
}

void GetInstantMixFromArtistsParams::setEnableUserDataNull() {
	m_enableUserData = std::nullopt;
}


const QList<ItemFields> &GetInstantMixFromArtistsParams::fields() const {
	return m_fields;
}

void GetInstantMixFromArtistsParams::setFields(QList<ItemFields> newFields)  {
	m_fields = newFields;
}

bool GetInstantMixFromArtistsParams::fieldsNull() const {
	// Nullable: true
	// Type Nullable: true
	

	return m_fields.size() == 0;
}

void GetInstantMixFromArtistsParams::setFieldsNull() {
	m_fields.clear();
}


const qint32 &GetInstantMixFromArtistsParams::imageTypeLimit() const {
	return m_imageTypeLimit.value();
}

void GetInstantMixFromArtistsParams::setImageTypeLimit(qint32 newImageTypeLimit)  {
	m_imageTypeLimit = newImageTypeLimit;
}

bool GetInstantMixFromArtistsParams::imageTypeLimitNull() const {
	// Nullable: true
	// Type Nullable: false
	

	return !m_imageTypeLimit.has_value();
}

void GetInstantMixFromArtistsParams::setImageTypeLimitNull() {
	m_imageTypeLimit = std::nullopt;
}


const qint32 &GetInstantMixFromArtistsParams::limit() const {
	return m_limit.value();
}

void GetInstantMixFromArtistsParams::setLimit(qint32 newLimit)  {
	m_limit = newLimit;
}

bool GetInstantMixFromArtistsParams::limitNull() const {
	// Nullable: true
	// Type Nullable: false
	

	return !m_limit.has_value();
}

void GetInstantMixFromArtistsParams::setLimitNull() {
	m_limit = std::nullopt;
}


const QString &GetInstantMixFromArtistsParams::userId() const {
	return m_userId;
}

void GetInstantMixFromArtistsParams::setUserId(QString newUserId)  {
	m_userId = newUserId;
}

bool GetInstantMixFromArtistsParams::userIdNull() const {
	// Nullable: true
	// Type Nullable: true
	

	return m_userId.isNull();
}

void GetInstantMixFromArtistsParams::setUserIdNull() {
	m_userId.clear();
}




// GetInstantMixFromItemParams

const QString &GetInstantMixFromItemParams::jellyfinId() const {
	return m_jellyfinId;
}

void GetInstantMixFromItemParams::setJellyfinId(QString newJellyfinId) {
	m_jellyfinId = newJellyfinId;
}


const QList<ImageType> &GetInstantMixFromItemParams::enableImageTypes() const {
	return m_enableImageTypes;
}

void GetInstantMixFromItemParams::setEnableImageTypes(QList<ImageType> newEnableImageTypes)  {
	m_enableImageTypes = newEnableImageTypes;
}

bool GetInstantMixFromItemParams::enableImageTypesNull() const {
	// Nullable: true
	// Type Nullable: true
	

	return m_enableImageTypes.size() == 0;
}

void GetInstantMixFromItemParams::setEnableImageTypesNull() {
	m_enableImageTypes.clear();
}


const bool &GetInstantMixFromItemParams::enableImages() const {
	return m_enableImages.value();
}

void GetInstantMixFromItemParams::setEnableImages(bool newEnableImages)  {
	m_enableImages = newEnableImages;
}

bool GetInstantMixFromItemParams::enableImagesNull() const {
	// Nullable: true
	// Type Nullable: false
	

	return !m_enableImages.has_value();
}

void GetInstantMixFromItemParams::setEnableImagesNull() {
	m_enableImages = std::nullopt;
}


const bool &GetInstantMixFromItemParams::enableUserData() const {
	return m_enableUserData.value();
}

void GetInstantMixFromItemParams::setEnableUserData(bool newEnableUserData)  {
	m_enableUserData = newEnableUserData;
}

bool GetInstantMixFromItemParams::enableUserDataNull() const {
	// Nullable: true
	// Type Nullable: false
	

	return !m_enableUserData.has_value();
}

void GetInstantMixFromItemParams::setEnableUserDataNull() {
	m_enableUserData = std::nullopt;
}


const QList<ItemFields> &GetInstantMixFromItemParams::fields() const {
	return m_fields;
}

void GetInstantMixFromItemParams::setFields(QList<ItemFields> newFields)  {
	m_fields = newFields;
}

bool GetInstantMixFromItemParams::fieldsNull() const {
	// Nullable: true
	// Type Nullable: true
	

	return m_fields.size() == 0;
}

void GetInstantMixFromItemParams::setFieldsNull() {
	m_fields.clear();
}


const qint32 &GetInstantMixFromItemParams::imageTypeLimit() const {
	return m_imageTypeLimit.value();
}

void GetInstantMixFromItemParams::setImageTypeLimit(qint32 newImageTypeLimit)  {
	m_imageTypeLimit = newImageTypeLimit;
}

bool GetInstantMixFromItemParams::imageTypeLimitNull() const {
	// Nullable: true
	// Type Nullable: false
	

	return !m_imageTypeLimit.has_value();
}

void GetInstantMixFromItemParams::setImageTypeLimitNull() {
	m_imageTypeLimit = std::nullopt;
}


const qint32 &GetInstantMixFromItemParams::limit() const {
	return m_limit.value();
}

void GetInstantMixFromItemParams::setLimit(qint32 newLimit)  {
	m_limit = newLimit;
}

bool GetInstantMixFromItemParams::limitNull() const {
	// Nullable: true
	// Type Nullable: false
	

	return !m_limit.has_value();
}

void GetInstantMixFromItemParams::setLimitNull() {
	m_limit = std::nullopt;
}


const QString &GetInstantMixFromItemParams::userId() const {
	return m_userId;
}

void GetInstantMixFromItemParams::setUserId(QString newUserId)  {
	m_userId = newUserId;
}

bool GetInstantMixFromItemParams::userIdNull() const {
	// Nullable: true
	// Type Nullable: true
	

	return m_userId.isNull();
}

void GetInstantMixFromItemParams::setUserIdNull() {
	m_userId.clear();
}




// GetInstantMixFromMusicGenreParams

const QString &GetInstantMixFromMusicGenreParams::name() const {
	return m_name;
}

void GetInstantMixFromMusicGenreParams::setName(QString newName) {
	m_name = newName;
}


const QList<ImageType> &GetInstantMixFromMusicGenreParams::enableImageTypes() const {
	return m_enableImageTypes;
}

void GetInstantMixFromMusicGenreParams::setEnableImageTypes(QList<ImageType> newEnableImageTypes)  {
	m_enableImageTypes = newEnableImageTypes;
}

bool GetInstantMixFromMusicGenreParams::enableImageTypesNull() const {
	// Nullable: true
	// Type Nullable: true
	

	return m_enableImageTypes.size() == 0;
}

void GetInstantMixFromMusicGenreParams::setEnableImageTypesNull() {
	m_enableImageTypes.clear();
}


const bool &GetInstantMixFromMusicGenreParams::enableImages() const {
	return m_enableImages.value();
}

void GetInstantMixFromMusicGenreParams::setEnableImages(bool newEnableImages)  {
	m_enableImages = newEnableImages;
}

bool GetInstantMixFromMusicGenreParams::enableImagesNull() const {
	// Nullable: true
	// Type Nullable: false
	

	return !m_enableImages.has_value();
}

void GetInstantMixFromMusicGenreParams::setEnableImagesNull() {
	m_enableImages = std::nullopt;
}


const bool &GetInstantMixFromMusicGenreParams::enableUserData() const {
	return m_enableUserData.value();
}

void GetInstantMixFromMusicGenreParams::setEnableUserData(bool newEnableUserData)  {
	m_enableUserData = newEnableUserData;
}

bool GetInstantMixFromMusicGenreParams::enableUserDataNull() const {
	// Nullable: true
	// Type Nullable: false
	

	return !m_enableUserData.has_value();
}

void GetInstantMixFromMusicGenreParams::setEnableUserDataNull() {
	m_enableUserData = std::nullopt;
}


const QList<ItemFields> &GetInstantMixFromMusicGenreParams::fields() const {
	return m_fields;
}

void GetInstantMixFromMusicGenreParams::setFields(QList<ItemFields> newFields)  {
	m_fields = newFields;
}

bool GetInstantMixFromMusicGenreParams::fieldsNull() const {
	// Nullable: true
	// Type Nullable: true
	

	return m_fields.size() == 0;
}

void GetInstantMixFromMusicGenreParams::setFieldsNull() {
	m_fields.clear();
}


const qint32 &GetInstantMixFromMusicGenreParams::imageTypeLimit() const {
	return m_imageTypeLimit.value();
}

void GetInstantMixFromMusicGenreParams::setImageTypeLimit(qint32 newImageTypeLimit)  {
	m_imageTypeLimit = newImageTypeLimit;
}

bool GetInstantMixFromMusicGenreParams::imageTypeLimitNull() const {
	// Nullable: true
	// Type Nullable: false
	

	return !m_imageTypeLimit.has_value();
}

void GetInstantMixFromMusicGenreParams::setImageTypeLimitNull() {
	m_imageTypeLimit = std::nullopt;
}


const qint32 &GetInstantMixFromMusicGenreParams::limit() const {
	return m_limit.value();
}

void GetInstantMixFromMusicGenreParams::setLimit(qint32 newLimit)  {
	m_limit = newLimit;
}

bool GetInstantMixFromMusicGenreParams::limitNull() const {
	// Nullable: true
	// Type Nullable: false
	

	return !m_limit.has_value();
}

void GetInstantMixFromMusicGenreParams::setLimitNull() {
	m_limit = std::nullopt;
}


const QString &GetInstantMixFromMusicGenreParams::userId() const {
	return m_userId;
}

void GetInstantMixFromMusicGenreParams::setUserId(QString newUserId)  {
	m_userId = newUserId;
}

bool GetInstantMixFromMusicGenreParams::userIdNull() const {
	// Nullable: true
	// Type Nullable: true
	

	return m_userId.isNull();
}

void GetInstantMixFromMusicGenreParams::setUserIdNull() {
	m_userId.clear();
}




// GetInstantMixFromMusicGenresParams

const QString &GetInstantMixFromMusicGenresParams::jellyfinId() const {
	return m_jellyfinId;
}

void GetInstantMixFromMusicGenresParams::setJellyfinId(QString newJellyfinId) {
	m_jellyfinId = newJellyfinId;
}


const QList<ImageType> &GetInstantMixFromMusicGenresParams::enableImageTypes() const {
	return m_enableImageTypes;
}

void GetInstantMixFromMusicGenresParams::setEnableImageTypes(QList<ImageType> newEnableImageTypes)  {
	m_enableImageTypes = newEnableImageTypes;
}

bool GetInstantMixFromMusicGenresParams::enableImageTypesNull() const {
	// Nullable: true
	// Type Nullable: true
	

	return m_enableImageTypes.size() == 0;
}

void GetInstantMixFromMusicGenresParams::setEnableImageTypesNull() {
	m_enableImageTypes.clear();
}


const bool &GetInstantMixFromMusicGenresParams::enableImages() const {
	return m_enableImages.value();
}

void GetInstantMixFromMusicGenresParams::setEnableImages(bool newEnableImages)  {
	m_enableImages = newEnableImages;
}

bool GetInstantMixFromMusicGenresParams::enableImagesNull() const {
	// Nullable: true
	// Type Nullable: false
	

	return !m_enableImages.has_value();
}

void GetInstantMixFromMusicGenresParams::setEnableImagesNull() {
	m_enableImages = std::nullopt;
}


const bool &GetInstantMixFromMusicGenresParams::enableUserData() const {
	return m_enableUserData.value();
}

void GetInstantMixFromMusicGenresParams::setEnableUserData(bool newEnableUserData)  {
	m_enableUserData = newEnableUserData;
}

bool GetInstantMixFromMusicGenresParams::enableUserDataNull() const {
	// Nullable: true
	// Type Nullable: false
	

	return !m_enableUserData.has_value();
}

void GetInstantMixFromMusicGenresParams::setEnableUserDataNull() {
	m_enableUserData = std::nullopt;
}


const QList<ItemFields> &GetInstantMixFromMusicGenresParams::fields() const {
	return m_fields;
}

void GetInstantMixFromMusicGenresParams::setFields(QList<ItemFields> newFields)  {
	m_fields = newFields;
}

bool GetInstantMixFromMusicGenresParams::fieldsNull() const {
	// Nullable: true
	// Type Nullable: true
	

	return m_fields.size() == 0;
}

void GetInstantMixFromMusicGenresParams::setFieldsNull() {
	m_fields.clear();
}


const qint32 &GetInstantMixFromMusicGenresParams::imageTypeLimit() const {
	return m_imageTypeLimit.value();
}

void GetInstantMixFromMusicGenresParams::setImageTypeLimit(qint32 newImageTypeLimit)  {
	m_imageTypeLimit = newImageTypeLimit;
}

bool GetInstantMixFromMusicGenresParams::imageTypeLimitNull() const {
	// Nullable: true
	// Type Nullable: false
	

	return !m_imageTypeLimit.has_value();
}

void GetInstantMixFromMusicGenresParams::setImageTypeLimitNull() {
	m_imageTypeLimit = std::nullopt;
}


const qint32 &GetInstantMixFromMusicGenresParams::limit() const {
	return m_limit.value();
}

void GetInstantMixFromMusicGenresParams::setLimit(qint32 newLimit)  {
	m_limit = newLimit;
}

bool GetInstantMixFromMusicGenresParams::limitNull() const {
	// Nullable: true
	// Type Nullable: false
	

	return !m_limit.has_value();
}

void GetInstantMixFromMusicGenresParams::setLimitNull() {
	m_limit = std::nullopt;
}


const QString &GetInstantMixFromMusicGenresParams::userId() const {
	return m_userId;
}

void GetInstantMixFromMusicGenresParams::setUserId(QString newUserId)  {
	m_userId = newUserId;
}

bool GetInstantMixFromMusicGenresParams::userIdNull() const {
	// Nullable: true
	// Type Nullable: true
	

	return m_userId.isNull();
}

void GetInstantMixFromMusicGenresParams::setUserIdNull() {
	m_userId.clear();
}




// GetInstantMixFromPlaylistParams

const QString &GetInstantMixFromPlaylistParams::jellyfinId() const {
	return m_jellyfinId;
}

void GetInstantMixFromPlaylistParams::setJellyfinId(QString newJellyfinId) {
	m_jellyfinId = newJellyfinId;
}


const QList<ImageType> &GetInstantMixFromPlaylistParams::enableImageTypes() const {
	return m_enableImageTypes;
}

void GetInstantMixFromPlaylistParams::setEnableImageTypes(QList<ImageType> newEnableImageTypes)  {
	m_enableImageTypes = newEnableImageTypes;
}

bool GetInstantMixFromPlaylistParams::enableImageTypesNull() const {
	// Nullable: true
	// Type Nullable: true
	

	return m_enableImageTypes.size() == 0;
}

void GetInstantMixFromPlaylistParams::setEnableImageTypesNull() {
	m_enableImageTypes.clear();
}


const bool &GetInstantMixFromPlaylistParams::enableImages() const {
	return m_enableImages.value();
}

void GetInstantMixFromPlaylistParams::setEnableImages(bool newEnableImages)  {
	m_enableImages = newEnableImages;
}

bool GetInstantMixFromPlaylistParams::enableImagesNull() const {
	// Nullable: true
	// Type Nullable: false
	

	return !m_enableImages.has_value();
}

void GetInstantMixFromPlaylistParams::setEnableImagesNull() {
	m_enableImages = std::nullopt;
}


const bool &GetInstantMixFromPlaylistParams::enableUserData() const {
	return m_enableUserData.value();
}

void GetInstantMixFromPlaylistParams::setEnableUserData(bool newEnableUserData)  {
	m_enableUserData = newEnableUserData;
}

bool GetInstantMixFromPlaylistParams::enableUserDataNull() const {
	// Nullable: true
	// Type Nullable: false
	

	return !m_enableUserData.has_value();
}

void GetInstantMixFromPlaylistParams::setEnableUserDataNull() {
	m_enableUserData = std::nullopt;
}


const QList<ItemFields> &GetInstantMixFromPlaylistParams::fields() const {
	return m_fields;
}

void GetInstantMixFromPlaylistParams::setFields(QList<ItemFields> newFields)  {
	m_fields = newFields;
}

bool GetInstantMixFromPlaylistParams::fieldsNull() const {
	// Nullable: true
	// Type Nullable: true
	

	return m_fields.size() == 0;
}

void GetInstantMixFromPlaylistParams::setFieldsNull() {
	m_fields.clear();
}


const qint32 &GetInstantMixFromPlaylistParams::imageTypeLimit() const {
	return m_imageTypeLimit.value();
}

void GetInstantMixFromPlaylistParams::setImageTypeLimit(qint32 newImageTypeLimit)  {
	m_imageTypeLimit = newImageTypeLimit;
}

bool GetInstantMixFromPlaylistParams::imageTypeLimitNull() const {
	// Nullable: true
	// Type Nullable: false
	

	return !m_imageTypeLimit.has_value();
}

void GetInstantMixFromPlaylistParams::setImageTypeLimitNull() {
	m_imageTypeLimit = std::nullopt;
}


const qint32 &GetInstantMixFromPlaylistParams::limit() const {
	return m_limit.value();
}

void GetInstantMixFromPlaylistParams::setLimit(qint32 newLimit)  {
	m_limit = newLimit;
}

bool GetInstantMixFromPlaylistParams::limitNull() const {
	// Nullable: true
	// Type Nullable: false
	

	return !m_limit.has_value();
}

void GetInstantMixFromPlaylistParams::setLimitNull() {
	m_limit = std::nullopt;
}


const QString &GetInstantMixFromPlaylistParams::userId() const {
	return m_userId;
}

void GetInstantMixFromPlaylistParams::setUserId(QString newUserId)  {
	m_userId = newUserId;
}

bool GetInstantMixFromPlaylistParams::userIdNull() const {
	// Nullable: true
	// Type Nullable: true
	

	return m_userId.isNull();
}

void GetInstantMixFromPlaylistParams::setUserIdNull() {
	m_userId.clear();
}




// GetInstantMixFromSongParams

const QString &GetInstantMixFromSongParams::jellyfinId() const {
	return m_jellyfinId;
}

void GetInstantMixFromSongParams::setJellyfinId(QString newJellyfinId) {
	m_jellyfinId = newJellyfinId;
}


const QList<ImageType> &GetInstantMixFromSongParams::enableImageTypes() const {
	return m_enableImageTypes;
}

void GetInstantMixFromSongParams::setEnableImageTypes(QList<ImageType> newEnableImageTypes)  {
	m_enableImageTypes = newEnableImageTypes;
}

bool GetInstantMixFromSongParams::enableImageTypesNull() const {
	// Nullable: true
	// Type Nullable: true
	

	return m_enableImageTypes.size() == 0;
}

void GetInstantMixFromSongParams::setEnableImageTypesNull() {
	m_enableImageTypes.clear();
}


const bool &GetInstantMixFromSongParams::enableImages() const {
	return m_enableImages.value();
}

void GetInstantMixFromSongParams::setEnableImages(bool newEnableImages)  {
	m_enableImages = newEnableImages;
}

bool GetInstantMixFromSongParams::enableImagesNull() const {
	// Nullable: true
	// Type Nullable: false
	

	return !m_enableImages.has_value();
}

void GetInstantMixFromSongParams::setEnableImagesNull() {
	m_enableImages = std::nullopt;
}


const bool &GetInstantMixFromSongParams::enableUserData() const {
	return m_enableUserData.value();
}

void GetInstantMixFromSongParams::setEnableUserData(bool newEnableUserData)  {
	m_enableUserData = newEnableUserData;
}

bool GetInstantMixFromSongParams::enableUserDataNull() const {
	// Nullable: true
	// Type Nullable: false
	

	return !m_enableUserData.has_value();
}

void GetInstantMixFromSongParams::setEnableUserDataNull() {
	m_enableUserData = std::nullopt;
}


const QList<ItemFields> &GetInstantMixFromSongParams::fields() const {
	return m_fields;
}

void GetInstantMixFromSongParams::setFields(QList<ItemFields> newFields)  {
	m_fields = newFields;
}

bool GetInstantMixFromSongParams::fieldsNull() const {
	// Nullable: true
	// Type Nullable: true
	

	return m_fields.size() == 0;
}

void GetInstantMixFromSongParams::setFieldsNull() {
	m_fields.clear();
}


const qint32 &GetInstantMixFromSongParams::imageTypeLimit() const {
	return m_imageTypeLimit.value();
}

void GetInstantMixFromSongParams::setImageTypeLimit(qint32 newImageTypeLimit)  {
	m_imageTypeLimit = newImageTypeLimit;
}

bool GetInstantMixFromSongParams::imageTypeLimitNull() const {
	// Nullable: true
	// Type Nullable: false
	

	return !m_imageTypeLimit.has_value();
}

void GetInstantMixFromSongParams::setImageTypeLimitNull() {
	m_imageTypeLimit = std::nullopt;
}


const qint32 &GetInstantMixFromSongParams::limit() const {
	return m_limit.value();
}

void GetInstantMixFromSongParams::setLimit(qint32 newLimit)  {
	m_limit = newLimit;
}

bool GetInstantMixFromSongParams::limitNull() const {
	// Nullable: true
	// Type Nullable: false
	

	return !m_limit.has_value();
}

void GetInstantMixFromSongParams::setLimitNull() {
	m_limit = std::nullopt;
}


const QString &GetInstantMixFromSongParams::userId() const {
	return m_userId;
}

void GetInstantMixFromSongParams::setUserId(QString newUserId)  {
	m_userId = newUserId;
}

bool GetInstantMixFromSongParams::userIdNull() const {
	// Nullable: true
	// Type Nullable: true
	

	return m_userId.isNull();
}

void GetInstantMixFromSongParams::setUserIdNull() {
	m_userId.clear();
}




// GetIntrosParams

const QString &GetIntrosParams::itemId() const {
	return m_itemId;
}

void GetIntrosParams::setItemId(QString newItemId) {
	m_itemId = newItemId;
}


const QString &GetIntrosParams::userId() const {
	return m_userId;
}

void GetIntrosParams::setUserId(QString newUserId) {
	m_userId = newUserId;
}




// GetItemParams

const QString &GetItemParams::itemId() const {
	return m_itemId;
}

void GetItemParams::setItemId(QString newItemId) {
	m_itemId = newItemId;
}


const QString &GetItemParams::userId() const {
	return m_userId;
}

void GetItemParams::setUserId(QString newUserId) {
	m_userId = newUserId;
}




// GetItemCountsParams

const bool &GetItemCountsParams::isFavorite() const {
	return m_isFavorite.value();
}

void GetItemCountsParams::setIsFavorite(bool newIsFavorite)  {
	m_isFavorite = newIsFavorite;
}

bool GetItemCountsParams::isFavoriteNull() const {
	// Nullable: true
	// Type Nullable: false
	

	return !m_isFavorite.has_value();
}

void GetItemCountsParams::setIsFavoriteNull() {
	m_isFavorite = std::nullopt;
}


const QString &GetItemCountsParams::userId() const {
	return m_userId;
}

void GetItemCountsParams::setUserId(QString newUserId)  {
	m_userId = newUserId;
}

bool GetItemCountsParams::userIdNull() const {
	// Nullable: true
	// Type Nullable: true
	

	return m_userId.isNull();
}

void GetItemCountsParams::setUserIdNull() {
	m_userId.clear();
}




// GetItemImageParams

const ImageType &GetItemImageParams::imageType() const {
	return m_imageType;
}

void GetItemImageParams::setImageType(ImageType newImageType) {
	m_imageType = newImageType;
}


const QString &GetItemImageParams::itemId() const {
	return m_itemId;
}

void GetItemImageParams::setItemId(QString newItemId) {
	m_itemId = newItemId;
}


const bool &GetItemImageParams::addPlayedIndicator() const {
	return m_addPlayedIndicator.value();
}

void GetItemImageParams::setAddPlayedIndicator(bool newAddPlayedIndicator)  {
	m_addPlayedIndicator = newAddPlayedIndicator;
}

bool GetItemImageParams::addPlayedIndicatorNull() const {
	// Nullable: true
	// Type Nullable: false
	

	return !m_addPlayedIndicator.has_value();
}

void GetItemImageParams::setAddPlayedIndicatorNull() {
	m_addPlayedIndicator = std::nullopt;
}


const QString &GetItemImageParams::backgroundColor() const {
	return m_backgroundColor;
}

void GetItemImageParams::setBackgroundColor(QString newBackgroundColor)  {
	m_backgroundColor = newBackgroundColor;
}

bool GetItemImageParams::backgroundColorNull() const {
	// Nullable: true
	// Type Nullable: true
	

	return m_backgroundColor.isNull();
}

void GetItemImageParams::setBackgroundColorNull() {
	m_backgroundColor.clear();
}


const qint32 &GetItemImageParams::blur() const {
	return m_blur.value();
}

void GetItemImageParams::setBlur(qint32 newBlur)  {
	m_blur = newBlur;
}

bool GetItemImageParams::blurNull() const {
	// Nullable: true
	// Type Nullable: false
	

	return !m_blur.has_value();
}

void GetItemImageParams::setBlurNull() {
	m_blur = std::nullopt;
}


const bool &GetItemImageParams::cropWhitespace() const {
	return m_cropWhitespace.value();
}

void GetItemImageParams::setCropWhitespace(bool newCropWhitespace)  {
	m_cropWhitespace = newCropWhitespace;
}

bool GetItemImageParams::cropWhitespaceNull() const {
	// Nullable: true
	// Type Nullable: false
	

	return !m_cropWhitespace.has_value();
}

void GetItemImageParams::setCropWhitespaceNull() {
	m_cropWhitespace = std::nullopt;
}


const QString &GetItemImageParams::foregroundLayer() const {
	return m_foregroundLayer;
}

void GetItemImageParams::setForegroundLayer(QString newForegroundLayer)  {
	m_foregroundLayer = newForegroundLayer;
}

bool GetItemImageParams::foregroundLayerNull() const {
	// Nullable: true
	// Type Nullable: true
	

	return m_foregroundLayer.isNull();
}

void GetItemImageParams::setForegroundLayerNull() {
	m_foregroundLayer.clear();
}


const ImageFormat &GetItemImageParams::format() const {
	return m_format;
}

void GetItemImageParams::setFormat(ImageFormat newFormat)  {
	m_format = newFormat;
}

bool GetItemImageParams::formatNull() const {
	// Nullable: true
	// Type Nullable: true
	

	return m_format== ImageFormat::EnumNotSet;
}

void GetItemImageParams::setFormatNull() {
	m_format= ImageFormat::EnumNotSet;
}


const qint32 &GetItemImageParams::height() const {
	return m_height.value();
}

void GetItemImageParams::setHeight(qint32 newHeight)  {
	m_height = newHeight;
}

bool GetItemImageParams::heightNull() const {
	// Nullable: true
	// Type Nullable: false
	

	return !m_height.has_value();
}

void GetItemImageParams::setHeightNull() {
	m_height = std::nullopt;
}


const qint32 &GetItemImageParams::imageIndex() const {
	return m_imageIndex.value();
}

void GetItemImageParams::setImageIndex(qint32 newImageIndex)  {
	m_imageIndex = newImageIndex;
}

bool GetItemImageParams::imageIndexNull() const {
	// Nullable: true
	// Type Nullable: false
	

	return !m_imageIndex.has_value();
}

void GetItemImageParams::setImageIndexNull() {
	m_imageIndex = std::nullopt;
}


const qint32 &GetItemImageParams::maxHeight() const {
	return m_maxHeight.value();
}

void GetItemImageParams::setMaxHeight(qint32 newMaxHeight)  {
	m_maxHeight = newMaxHeight;
}

bool GetItemImageParams::maxHeightNull() const {
	// Nullable: true
	// Type Nullable: false
	

	return !m_maxHeight.has_value();
}

void GetItemImageParams::setMaxHeightNull() {
	m_maxHeight = std::nullopt;
}


const qint32 &GetItemImageParams::maxWidth() const {
	return m_maxWidth.value();
}

void GetItemImageParams::setMaxWidth(qint32 newMaxWidth)  {
	m_maxWidth = newMaxWidth;
}

bool GetItemImageParams::maxWidthNull() const {
	// Nullable: true
	// Type Nullable: false
	

	return !m_maxWidth.has_value();
}

void GetItemImageParams::setMaxWidthNull() {
	m_maxWidth = std::nullopt;
}


const double &GetItemImageParams::percentPlayed() const {
	return m_percentPlayed.value();
}

void GetItemImageParams::setPercentPlayed(double newPercentPlayed)  {
	m_percentPlayed = newPercentPlayed;
}

bool GetItemImageParams::percentPlayedNull() const {
	// Nullable: true
	// Type Nullable: false
	

	return !m_percentPlayed.has_value();
}

void GetItemImageParams::setPercentPlayedNull() {
	m_percentPlayed = std::nullopt;
}


const qint32 &GetItemImageParams::quality() const {
	return m_quality.value();
}

void GetItemImageParams::setQuality(qint32 newQuality)  {
	m_quality = newQuality;
}

bool GetItemImageParams::qualityNull() const {
	// Nullable: true
	// Type Nullable: false
	

	return !m_quality.has_value();
}

void GetItemImageParams::setQualityNull() {
	m_quality = std::nullopt;
}


const QString &GetItemImageParams::tag() const {
	return m_tag;
}

void GetItemImageParams::setTag(QString newTag)  {
	m_tag = newTag;
}

bool GetItemImageParams::tagNull() const {
	// Nullable: true
	// Type Nullable: true
	

	return m_tag.isNull();
}

void GetItemImageParams::setTagNull() {
	m_tag.clear();
}


const qint32 &GetItemImageParams::unplayedCount() const {
	return m_unplayedCount.value();
}

void GetItemImageParams::setUnplayedCount(qint32 newUnplayedCount)  {
	m_unplayedCount = newUnplayedCount;
}

bool GetItemImageParams::unplayedCountNull() const {
	// Nullable: true
	// Type Nullable: false
	

	return !m_unplayedCount.has_value();
}

void GetItemImageParams::setUnplayedCountNull() {
	m_unplayedCount = std::nullopt;
}


const qint32 &GetItemImageParams::width() const {
	return m_width.value();
}

void GetItemImageParams::setWidth(qint32 newWidth)  {
	m_width = newWidth;
}

bool GetItemImageParams::widthNull() const {
	// Nullable: true
	// Type Nullable: false
	

	return !m_width.has_value();
}

void GetItemImageParams::setWidthNull() {
	m_width = std::nullopt;
}




// GetItemImage2Params

const ImageFormat &GetItemImage2Params::format() const {
	return m_format;
}

void GetItemImage2Params::setFormat(ImageFormat newFormat) {
	m_format = newFormat;
}


const qint32 &GetItemImage2Params::imageIndex() const {
	return m_imageIndex;
}

void GetItemImage2Params::setImageIndex(qint32 newImageIndex) {
	m_imageIndex = newImageIndex;
}


const ImageType &GetItemImage2Params::imageType() const {
	return m_imageType;
}

void GetItemImage2Params::setImageType(ImageType newImageType) {
	m_imageType = newImageType;
}


const QString &GetItemImage2Params::itemId() const {
	return m_itemId;
}

void GetItemImage2Params::setItemId(QString newItemId) {
	m_itemId = newItemId;
}


const qint32 &GetItemImage2Params::maxHeight() const {
	return m_maxHeight;
}

void GetItemImage2Params::setMaxHeight(qint32 newMaxHeight) {
	m_maxHeight = newMaxHeight;
}


const qint32 &GetItemImage2Params::maxWidth() const {
	return m_maxWidth;
}

void GetItemImage2Params::setMaxWidth(qint32 newMaxWidth) {
	m_maxWidth = newMaxWidth;
}


const double &GetItemImage2Params::percentPlayed() const {
	return m_percentPlayed;
}

void GetItemImage2Params::setPercentPlayed(double newPercentPlayed) {
	m_percentPlayed = newPercentPlayed;
}


const QString &GetItemImage2Params::tag() const {
	return m_tag;
}

void GetItemImage2Params::setTag(QString newTag) {
	m_tag = newTag;
}


const qint32 &GetItemImage2Params::unplayedCount() const {
	return m_unplayedCount;
}

void GetItemImage2Params::setUnplayedCount(qint32 newUnplayedCount) {
	m_unplayedCount = newUnplayedCount;
}


const bool &GetItemImage2Params::addPlayedIndicator() const {
	return m_addPlayedIndicator.value();
}

void GetItemImage2Params::setAddPlayedIndicator(bool newAddPlayedIndicator)  {
	m_addPlayedIndicator = newAddPlayedIndicator;
}

bool GetItemImage2Params::addPlayedIndicatorNull() const {
	// Nullable: true
	// Type Nullable: false
	

	return !m_addPlayedIndicator.has_value();
}

void GetItemImage2Params::setAddPlayedIndicatorNull() {
	m_addPlayedIndicator = std::nullopt;
}


const QString &GetItemImage2Params::backgroundColor() const {
	return m_backgroundColor;
}

void GetItemImage2Params::setBackgroundColor(QString newBackgroundColor)  {
	m_backgroundColor = newBackgroundColor;
}

bool GetItemImage2Params::backgroundColorNull() const {
	// Nullable: true
	// Type Nullable: true
	

	return m_backgroundColor.isNull();
}

void GetItemImage2Params::setBackgroundColorNull() {
	m_backgroundColor.clear();
}


const qint32 &GetItemImage2Params::blur() const {
	return m_blur.value();
}

void GetItemImage2Params::setBlur(qint32 newBlur)  {
	m_blur = newBlur;
}

bool GetItemImage2Params::blurNull() const {
	// Nullable: true
	// Type Nullable: false
	

	return !m_blur.has_value();
}

void GetItemImage2Params::setBlurNull() {
	m_blur = std::nullopt;
}


const bool &GetItemImage2Params::cropWhitespace() const {
	return m_cropWhitespace.value();
}

void GetItemImage2Params::setCropWhitespace(bool newCropWhitespace)  {
	m_cropWhitespace = newCropWhitespace;
}

bool GetItemImage2Params::cropWhitespaceNull() const {
	// Nullable: true
	// Type Nullable: false
	

	return !m_cropWhitespace.has_value();
}

void GetItemImage2Params::setCropWhitespaceNull() {
	m_cropWhitespace = std::nullopt;
}


const QString &GetItemImage2Params::foregroundLayer() const {
	return m_foregroundLayer;
}

void GetItemImage2Params::setForegroundLayer(QString newForegroundLayer)  {
	m_foregroundLayer = newForegroundLayer;
}

bool GetItemImage2Params::foregroundLayerNull() const {
	// Nullable: true
	// Type Nullable: true
	

	return m_foregroundLayer.isNull();
}

void GetItemImage2Params::setForegroundLayerNull() {
	m_foregroundLayer.clear();
}


const qint32 &GetItemImage2Params::height() const {
	return m_height.value();
}

void GetItemImage2Params::setHeight(qint32 newHeight)  {
	m_height = newHeight;
}

bool GetItemImage2Params::heightNull() const {
	// Nullable: true
	// Type Nullable: false
	

	return !m_height.has_value();
}

void GetItemImage2Params::setHeightNull() {
	m_height = std::nullopt;
}


const qint32 &GetItemImage2Params::quality() const {
	return m_quality.value();
}

void GetItemImage2Params::setQuality(qint32 newQuality)  {
	m_quality = newQuality;
}

bool GetItemImage2Params::qualityNull() const {
	// Nullable: true
	// Type Nullable: false
	

	return !m_quality.has_value();
}

void GetItemImage2Params::setQualityNull() {
	m_quality = std::nullopt;
}


const qint32 &GetItemImage2Params::width() const {
	return m_width.value();
}

void GetItemImage2Params::setWidth(qint32 newWidth)  {
	m_width = newWidth;
}

bool GetItemImage2Params::widthNull() const {
	// Nullable: true
	// Type Nullable: false
	

	return !m_width.has_value();
}

void GetItemImage2Params::setWidthNull() {
	m_width = std::nullopt;
}




// GetItemImageByIndexParams

const qint32 &GetItemImageByIndexParams::imageIndex() const {
	return m_imageIndex;
}

void GetItemImageByIndexParams::setImageIndex(qint32 newImageIndex) {
	m_imageIndex = newImageIndex;
}


const ImageType &GetItemImageByIndexParams::imageType() const {
	return m_imageType;
}

void GetItemImageByIndexParams::setImageType(ImageType newImageType) {
	m_imageType = newImageType;
}


const QString &GetItemImageByIndexParams::itemId() const {
	return m_itemId;
}

void GetItemImageByIndexParams::setItemId(QString newItemId) {
	m_itemId = newItemId;
}


const bool &GetItemImageByIndexParams::addPlayedIndicator() const {
	return m_addPlayedIndicator.value();
}

void GetItemImageByIndexParams::setAddPlayedIndicator(bool newAddPlayedIndicator)  {
	m_addPlayedIndicator = newAddPlayedIndicator;
}

bool GetItemImageByIndexParams::addPlayedIndicatorNull() const {
	// Nullable: true
	// Type Nullable: false
	

	return !m_addPlayedIndicator.has_value();
}

void GetItemImageByIndexParams::setAddPlayedIndicatorNull() {
	m_addPlayedIndicator = std::nullopt;
}


const QString &GetItemImageByIndexParams::backgroundColor() const {
	return m_backgroundColor;
}

void GetItemImageByIndexParams::setBackgroundColor(QString newBackgroundColor)  {
	m_backgroundColor = newBackgroundColor;
}

bool GetItemImageByIndexParams::backgroundColorNull() const {
	// Nullable: true
	// Type Nullable: true
	

	return m_backgroundColor.isNull();
}

void GetItemImageByIndexParams::setBackgroundColorNull() {
	m_backgroundColor.clear();
}


const qint32 &GetItemImageByIndexParams::blur() const {
	return m_blur.value();
}

void GetItemImageByIndexParams::setBlur(qint32 newBlur)  {
	m_blur = newBlur;
}

bool GetItemImageByIndexParams::blurNull() const {
	// Nullable: true
	// Type Nullable: false
	

	return !m_blur.has_value();
}

void GetItemImageByIndexParams::setBlurNull() {
	m_blur = std::nullopt;
}


const bool &GetItemImageByIndexParams::cropWhitespace() const {
	return m_cropWhitespace.value();
}

void GetItemImageByIndexParams::setCropWhitespace(bool newCropWhitespace)  {
	m_cropWhitespace = newCropWhitespace;
}

bool GetItemImageByIndexParams::cropWhitespaceNull() const {
	// Nullable: true
	// Type Nullable: false
	

	return !m_cropWhitespace.has_value();
}

void GetItemImageByIndexParams::setCropWhitespaceNull() {
	m_cropWhitespace = std::nullopt;
}


const QString &GetItemImageByIndexParams::foregroundLayer() const {
	return m_foregroundLayer;
}

void GetItemImageByIndexParams::setForegroundLayer(QString newForegroundLayer)  {
	m_foregroundLayer = newForegroundLayer;
}

bool GetItemImageByIndexParams::foregroundLayerNull() const {
	// Nullable: true
	// Type Nullable: true
	

	return m_foregroundLayer.isNull();
}

void GetItemImageByIndexParams::setForegroundLayerNull() {
	m_foregroundLayer.clear();
}


const ImageFormat &GetItemImageByIndexParams::format() const {
	return m_format;
}

void GetItemImageByIndexParams::setFormat(ImageFormat newFormat)  {
	m_format = newFormat;
}

bool GetItemImageByIndexParams::formatNull() const {
	// Nullable: true
	// Type Nullable: true
	

	return m_format== ImageFormat::EnumNotSet;
}

void GetItemImageByIndexParams::setFormatNull() {
	m_format= ImageFormat::EnumNotSet;
}


const qint32 &GetItemImageByIndexParams::height() const {
	return m_height.value();
}

void GetItemImageByIndexParams::setHeight(qint32 newHeight)  {
	m_height = newHeight;
}

bool GetItemImageByIndexParams::heightNull() const {
	// Nullable: true
	// Type Nullable: false
	

	return !m_height.has_value();
}

void GetItemImageByIndexParams::setHeightNull() {
	m_height = std::nullopt;
}


const qint32 &GetItemImageByIndexParams::maxHeight() const {
	return m_maxHeight.value();
}

void GetItemImageByIndexParams::setMaxHeight(qint32 newMaxHeight)  {
	m_maxHeight = newMaxHeight;
}

bool GetItemImageByIndexParams::maxHeightNull() const {
	// Nullable: true
	// Type Nullable: false
	

	return !m_maxHeight.has_value();
}

void GetItemImageByIndexParams::setMaxHeightNull() {
	m_maxHeight = std::nullopt;
}


const qint32 &GetItemImageByIndexParams::maxWidth() const {
	return m_maxWidth.value();
}

void GetItemImageByIndexParams::setMaxWidth(qint32 newMaxWidth)  {
	m_maxWidth = newMaxWidth;
}

bool GetItemImageByIndexParams::maxWidthNull() const {
	// Nullable: true
	// Type Nullable: false
	

	return !m_maxWidth.has_value();
}

void GetItemImageByIndexParams::setMaxWidthNull() {
	m_maxWidth = std::nullopt;
}


const double &GetItemImageByIndexParams::percentPlayed() const {
	return m_percentPlayed.value();
}

void GetItemImageByIndexParams::setPercentPlayed(double newPercentPlayed)  {
	m_percentPlayed = newPercentPlayed;
}

bool GetItemImageByIndexParams::percentPlayedNull() const {
	// Nullable: true
	// Type Nullable: false
	

	return !m_percentPlayed.has_value();
}

void GetItemImageByIndexParams::setPercentPlayedNull() {
	m_percentPlayed = std::nullopt;
}


const qint32 &GetItemImageByIndexParams::quality() const {
	return m_quality.value();
}

void GetItemImageByIndexParams::setQuality(qint32 newQuality)  {
	m_quality = newQuality;
}

bool GetItemImageByIndexParams::qualityNull() const {
	// Nullable: true
	// Type Nullable: false
	

	return !m_quality.has_value();
}

void GetItemImageByIndexParams::setQualityNull() {
	m_quality = std::nullopt;
}


const QString &GetItemImageByIndexParams::tag() const {
	return m_tag;
}

void GetItemImageByIndexParams::setTag(QString newTag)  {
	m_tag = newTag;
}

bool GetItemImageByIndexParams::tagNull() const {
	// Nullable: true
	// Type Nullable: true
	

	return m_tag.isNull();
}

void GetItemImageByIndexParams::setTagNull() {
	m_tag.clear();
}


const qint32 &GetItemImageByIndexParams::unplayedCount() const {
	return m_unplayedCount.value();
}

void GetItemImageByIndexParams::setUnplayedCount(qint32 newUnplayedCount)  {
	m_unplayedCount = newUnplayedCount;
}

bool GetItemImageByIndexParams::unplayedCountNull() const {
	// Nullable: true
	// Type Nullable: false
	

	return !m_unplayedCount.has_value();
}

void GetItemImageByIndexParams::setUnplayedCountNull() {
	m_unplayedCount = std::nullopt;
}


const qint32 &GetItemImageByIndexParams::width() const {
	return m_width.value();
}

void GetItemImageByIndexParams::setWidth(qint32 newWidth)  {
	m_width = newWidth;
}

bool GetItemImageByIndexParams::widthNull() const {
	// Nullable: true
	// Type Nullable: false
	

	return !m_width.has_value();
}

void GetItemImageByIndexParams::setWidthNull() {
	m_width = std::nullopt;
}




// GetItemImageInfosParams

const QString &GetItemImageInfosParams::itemId() const {
	return m_itemId;
}

void GetItemImageInfosParams::setItemId(QString newItemId) {
	m_itemId = newItemId;
}




// GetItemsParams

const QString &GetItemsParams::adjacentTo() const {
	return m_adjacentTo;
}

void GetItemsParams::setAdjacentTo(QString newAdjacentTo)  {
	m_adjacentTo = newAdjacentTo;
}

bool GetItemsParams::adjacentToNull() const {
	// Nullable: true
	// Type Nullable: true
	

	return m_adjacentTo.isNull();
}

void GetItemsParams::setAdjacentToNull() {
	m_adjacentTo.clear();
}


const QStringList &GetItemsParams::albumArtistIds() const {
	return m_albumArtistIds;
}

void GetItemsParams::setAlbumArtistIds(QStringList newAlbumArtistIds)  {
	m_albumArtistIds = newAlbumArtistIds;
}

bool GetItemsParams::albumArtistIdsNull() const {
	// Nullable: true
	// Type Nullable: true
	

	return m_albumArtistIds.size() == 0;
}

void GetItemsParams::setAlbumArtistIdsNull() {
	m_albumArtistIds.clear();
}


const QStringList &GetItemsParams::albumIds() const {
	return m_albumIds;
}

void GetItemsParams::setAlbumIds(QStringList newAlbumIds)  {
	m_albumIds = newAlbumIds;
}

bool GetItemsParams::albumIdsNull() const {
	// Nullable: true
	// Type Nullable: true
	

	return m_albumIds.size() == 0;
}

void GetItemsParams::setAlbumIdsNull() {
	m_albumIds.clear();
}


const QStringList &GetItemsParams::albums() const {
	return m_albums;
}

void GetItemsParams::setAlbums(QStringList newAlbums)  {
	m_albums = newAlbums;
}

bool GetItemsParams::albumsNull() const {
	// Nullable: true
	// Type Nullable: true
	

	return m_albums.size() == 0;
}

void GetItemsParams::setAlbumsNull() {
	m_albums.clear();
}


const QStringList &GetItemsParams::artistIds() const {
	return m_artistIds;
}

void GetItemsParams::setArtistIds(QStringList newArtistIds)  {
	m_artistIds = newArtistIds;
}

bool GetItemsParams::artistIdsNull() const {
	// Nullable: true
	// Type Nullable: true
	

	return m_artistIds.size() == 0;
}

void GetItemsParams::setArtistIdsNull() {
	m_artistIds.clear();
}


const QStringList &GetItemsParams::artists() const {
	return m_artists;
}

void GetItemsParams::setArtists(QStringList newArtists)  {
	m_artists = newArtists;
}

bool GetItemsParams::artistsNull() const {
	// Nullable: true
	// Type Nullable: true
	

	return m_artists.size() == 0;
}

void GetItemsParams::setArtistsNull() {
	m_artists.clear();
}


const bool &GetItemsParams::collapseBoxSetItems() const {
	return m_collapseBoxSetItems.value();
}

void GetItemsParams::setCollapseBoxSetItems(bool newCollapseBoxSetItems)  {
	m_collapseBoxSetItems = newCollapseBoxSetItems;
}

bool GetItemsParams::collapseBoxSetItemsNull() const {
	// Nullable: true
	// Type Nullable: false
	

	return !m_collapseBoxSetItems.has_value();
}

void GetItemsParams::setCollapseBoxSetItemsNull() {
	m_collapseBoxSetItems = std::nullopt;
}


const QStringList &GetItemsParams::contributingArtistIds() const {
	return m_contributingArtistIds;
}

void GetItemsParams::setContributingArtistIds(QStringList newContributingArtistIds)  {
	m_contributingArtistIds = newContributingArtistIds;
}

bool GetItemsParams::contributingArtistIdsNull() const {
	// Nullable: true
	// Type Nullable: true
	

	return m_contributingArtistIds.size() == 0;
}

void GetItemsParams::setContributingArtistIdsNull() {
	m_contributingArtistIds.clear();
}


const QList<ImageType> &GetItemsParams::enableImageTypes() const {
	return m_enableImageTypes;
}

void GetItemsParams::setEnableImageTypes(QList<ImageType> newEnableImageTypes)  {
	m_enableImageTypes = newEnableImageTypes;
}

bool GetItemsParams::enableImageTypesNull() const {
	// Nullable: true
	// Type Nullable: true
	

	return m_enableImageTypes.size() == 0;
}

void GetItemsParams::setEnableImageTypesNull() {
	m_enableImageTypes.clear();
}


const bool &GetItemsParams::enableImages() const {
	return m_enableImages.value();
}

void GetItemsParams::setEnableImages(bool newEnableImages)  {
	m_enableImages = newEnableImages;
}

bool GetItemsParams::enableImagesNull() const {
	// Nullable: true
	// Type Nullable: false
	

	return !m_enableImages.has_value();
}

void GetItemsParams::setEnableImagesNull() {
	m_enableImages = std::nullopt;
}


const bool &GetItemsParams::enableTotalRecordCount() const {
	return m_enableTotalRecordCount.value();
}

void GetItemsParams::setEnableTotalRecordCount(bool newEnableTotalRecordCount)  {
	m_enableTotalRecordCount = newEnableTotalRecordCount;
}

bool GetItemsParams::enableTotalRecordCountNull() const {
	// Nullable: false
	// Type Nullable: false
	

	return !m_enableTotalRecordCount.has_value();
}

void GetItemsParams::setEnableTotalRecordCountNull() {
	m_enableTotalRecordCount = std::nullopt;
}


const bool &GetItemsParams::enableUserData() const {
	return m_enableUserData.value();
}

void GetItemsParams::setEnableUserData(bool newEnableUserData)  {
	m_enableUserData = newEnableUserData;
}

bool GetItemsParams::enableUserDataNull() const {
	// Nullable: true
	// Type Nullable: false
	

	return !m_enableUserData.has_value();
}

void GetItemsParams::setEnableUserDataNull() {
	m_enableUserData = std::nullopt;
}


const QStringList &GetItemsParams::excludeArtistIds() const {
	return m_excludeArtistIds;
}

void GetItemsParams::setExcludeArtistIds(QStringList newExcludeArtistIds)  {
	m_excludeArtistIds = newExcludeArtistIds;
}

bool GetItemsParams::excludeArtistIdsNull() const {
	// Nullable: true
	// Type Nullable: true
	

	return m_excludeArtistIds.size() == 0;
}

void GetItemsParams::setExcludeArtistIdsNull() {
	m_excludeArtistIds.clear();
}


const QStringList &GetItemsParams::excludeItemIds() const {
	return m_excludeItemIds;
}

void GetItemsParams::setExcludeItemIds(QStringList newExcludeItemIds)  {
	m_excludeItemIds = newExcludeItemIds;
}

bool GetItemsParams::excludeItemIdsNull() const {
	// Nullable: true
	// Type Nullable: true
	

	return m_excludeItemIds.size() == 0;
}

void GetItemsParams::setExcludeItemIdsNull() {
	m_excludeItemIds.clear();
}


const QStringList &GetItemsParams::excludeItemTypes() const {
	return m_excludeItemTypes;
}

void GetItemsParams::setExcludeItemTypes(QStringList newExcludeItemTypes)  {
	m_excludeItemTypes = newExcludeItemTypes;
}

bool GetItemsParams::excludeItemTypesNull() const {
	// Nullable: true
	// Type Nullable: true
	

	return m_excludeItemTypes.size() == 0;
}

void GetItemsParams::setExcludeItemTypesNull() {
	m_excludeItemTypes.clear();
}


const QList<LocationType> &GetItemsParams::excludeLocationTypes() const {
	return m_excludeLocationTypes;
}

void GetItemsParams::setExcludeLocationTypes(QList<LocationType> newExcludeLocationTypes)  {
	m_excludeLocationTypes = newExcludeLocationTypes;
}

bool GetItemsParams::excludeLocationTypesNull() const {
	// Nullable: true
	// Type Nullable: true
	

	return m_excludeLocationTypes.size() == 0;
}

void GetItemsParams::setExcludeLocationTypesNull() {
	m_excludeLocationTypes.clear();
}


const QList<ItemFields> &GetItemsParams::fields() const {
	return m_fields;
}

void GetItemsParams::setFields(QList<ItemFields> newFields)  {
	m_fields = newFields;
}

bool GetItemsParams::fieldsNull() const {
	// Nullable: true
	// Type Nullable: true
	

	return m_fields.size() == 0;
}

void GetItemsParams::setFieldsNull() {
	m_fields.clear();
}


const QList<ItemFilter> &GetItemsParams::filters() const {
	return m_filters;
}

void GetItemsParams::setFilters(QList<ItemFilter> newFilters)  {
	m_filters = newFilters;
}

bool GetItemsParams::filtersNull() const {
	// Nullable: true
	// Type Nullable: true
	

	return m_filters.size() == 0;
}

void GetItemsParams::setFiltersNull() {
	m_filters.clear();
}


const QStringList &GetItemsParams::genreIds() const {
	return m_genreIds;
}

void GetItemsParams::setGenreIds(QStringList newGenreIds)  {
	m_genreIds = newGenreIds;
}

bool GetItemsParams::genreIdsNull() const {
	// Nullable: true
	// Type Nullable: true
	

	return m_genreIds.size() == 0;
}

void GetItemsParams::setGenreIdsNull() {
	m_genreIds.clear();
}


const QStringList &GetItemsParams::genres() const {
	return m_genres;
}

void GetItemsParams::setGenres(QStringList newGenres)  {
	m_genres = newGenres;
}

bool GetItemsParams::genresNull() const {
	// Nullable: true
	// Type Nullable: true
	

	return m_genres.size() == 0;
}

void GetItemsParams::setGenresNull() {
	m_genres.clear();
}


const bool &GetItemsParams::hasImdbId() const {
	return m_hasImdbId.value();
}

void GetItemsParams::setHasImdbId(bool newHasImdbId)  {
	m_hasImdbId = newHasImdbId;
}

bool GetItemsParams::hasImdbIdNull() const {
	// Nullable: true
	// Type Nullable: false
	

	return !m_hasImdbId.has_value();
}

void GetItemsParams::setHasImdbIdNull() {
	m_hasImdbId = std::nullopt;
}


const bool &GetItemsParams::hasOfficialRating() const {
	return m_hasOfficialRating.value();
}

void GetItemsParams::setHasOfficialRating(bool newHasOfficialRating)  {
	m_hasOfficialRating = newHasOfficialRating;
}

bool GetItemsParams::hasOfficialRatingNull() const {
	// Nullable: true
	// Type Nullable: false
	

	return !m_hasOfficialRating.has_value();
}

void GetItemsParams::setHasOfficialRatingNull() {
	m_hasOfficialRating = std::nullopt;
}


const bool &GetItemsParams::hasOverview() const {
	return m_hasOverview.value();
}

void GetItemsParams::setHasOverview(bool newHasOverview)  {
	m_hasOverview = newHasOverview;
}

bool GetItemsParams::hasOverviewNull() const {
	// Nullable: true
	// Type Nullable: false
	

	return !m_hasOverview.has_value();
}

void GetItemsParams::setHasOverviewNull() {
	m_hasOverview = std::nullopt;
}


const bool &GetItemsParams::hasParentalRating() const {
	return m_hasParentalRating.value();
}

void GetItemsParams::setHasParentalRating(bool newHasParentalRating)  {
	m_hasParentalRating = newHasParentalRating;
}

bool GetItemsParams::hasParentalRatingNull() const {
	// Nullable: true
	// Type Nullable: false
	

	return !m_hasParentalRating.has_value();
}

void GetItemsParams::setHasParentalRatingNull() {
	m_hasParentalRating = std::nullopt;
}


const bool &GetItemsParams::hasSpecialFeature() const {
	return m_hasSpecialFeature.value();
}

void GetItemsParams::setHasSpecialFeature(bool newHasSpecialFeature)  {
	m_hasSpecialFeature = newHasSpecialFeature;
}

bool GetItemsParams::hasSpecialFeatureNull() const {
	// Nullable: true
	// Type Nullable: false
	

	return !m_hasSpecialFeature.has_value();
}

void GetItemsParams::setHasSpecialFeatureNull() {
	m_hasSpecialFeature = std::nullopt;
}


const bool &GetItemsParams::hasSubtitles() const {
	return m_hasSubtitles.value();
}

void GetItemsParams::setHasSubtitles(bool newHasSubtitles)  {
	m_hasSubtitles = newHasSubtitles;
}

bool GetItemsParams::hasSubtitlesNull() const {
	// Nullable: true
	// Type Nullable: false
	

	return !m_hasSubtitles.has_value();
}

void GetItemsParams::setHasSubtitlesNull() {
	m_hasSubtitles = std::nullopt;
}


const bool &GetItemsParams::hasThemeSong() const {
	return m_hasThemeSong.value();
}

void GetItemsParams::setHasThemeSong(bool newHasThemeSong)  {
	m_hasThemeSong = newHasThemeSong;
}

bool GetItemsParams::hasThemeSongNull() const {
	// Nullable: true
	// Type Nullable: false
	

	return !m_hasThemeSong.has_value();
}

void GetItemsParams::setHasThemeSongNull() {
	m_hasThemeSong = std::nullopt;
}


const bool &GetItemsParams::hasThemeVideo() const {
	return m_hasThemeVideo.value();
}

void GetItemsParams::setHasThemeVideo(bool newHasThemeVideo)  {
	m_hasThemeVideo = newHasThemeVideo;
}

bool GetItemsParams::hasThemeVideoNull() const {
	// Nullable: true
	// Type Nullable: false
	

	return !m_hasThemeVideo.has_value();
}

void GetItemsParams::setHasThemeVideoNull() {
	m_hasThemeVideo = std::nullopt;
}


const bool &GetItemsParams::hasTmdbId() const {
	return m_hasTmdbId.value();
}

void GetItemsParams::setHasTmdbId(bool newHasTmdbId)  {
	m_hasTmdbId = newHasTmdbId;
}

bool GetItemsParams::hasTmdbIdNull() const {
	// Nullable: true
	// Type Nullable: false
	

	return !m_hasTmdbId.has_value();
}

void GetItemsParams::setHasTmdbIdNull() {
	m_hasTmdbId = std::nullopt;
}


const bool &GetItemsParams::hasTrailer() const {
	return m_hasTrailer.value();
}

void GetItemsParams::setHasTrailer(bool newHasTrailer)  {
	m_hasTrailer = newHasTrailer;
}

bool GetItemsParams::hasTrailerNull() const {
	// Nullable: true
	// Type Nullable: false
	

	return !m_hasTrailer.has_value();
}

void GetItemsParams::setHasTrailerNull() {
	m_hasTrailer = std::nullopt;
}


const bool &GetItemsParams::hasTvdbId() const {
	return m_hasTvdbId.value();
}

void GetItemsParams::setHasTvdbId(bool newHasTvdbId)  {
	m_hasTvdbId = newHasTvdbId;
}

bool GetItemsParams::hasTvdbIdNull() const {
	// Nullable: true
	// Type Nullable: false
	

	return !m_hasTvdbId.has_value();
}

void GetItemsParams::setHasTvdbIdNull() {
	m_hasTvdbId = std::nullopt;
}


const QStringList &GetItemsParams::ids() const {
	return m_ids;
}

void GetItemsParams::setIds(QStringList newIds)  {
	m_ids = newIds;
}

bool GetItemsParams::idsNull() const {
	// Nullable: true
	// Type Nullable: true
	

	return m_ids.size() == 0;
}

void GetItemsParams::setIdsNull() {
	m_ids.clear();
}


const qint32 &GetItemsParams::imageTypeLimit() const {
	return m_imageTypeLimit.value();
}

void GetItemsParams::setImageTypeLimit(qint32 newImageTypeLimit)  {
	m_imageTypeLimit = newImageTypeLimit;
}

bool GetItemsParams::imageTypeLimitNull() const {
	// Nullable: true
	// Type Nullable: false
	

	return !m_imageTypeLimit.has_value();
}

void GetItemsParams::setImageTypeLimitNull() {
	m_imageTypeLimit = std::nullopt;
}


const QList<ImageType> &GetItemsParams::imageTypes() const {
	return m_imageTypes;
}

void GetItemsParams::setImageTypes(QList<ImageType> newImageTypes)  {
	m_imageTypes = newImageTypes;
}

bool GetItemsParams::imageTypesNull() const {
	// Nullable: true
	// Type Nullable: true
	

	return m_imageTypes.size() == 0;
}

void GetItemsParams::setImageTypesNull() {
	m_imageTypes.clear();
}


const QStringList &GetItemsParams::includeItemTypes() const {
	return m_includeItemTypes;
}

void GetItemsParams::setIncludeItemTypes(QStringList newIncludeItemTypes)  {
	m_includeItemTypes = newIncludeItemTypes;
}

bool GetItemsParams::includeItemTypesNull() const {
	// Nullable: true
	// Type Nullable: true
	

	return m_includeItemTypes.size() == 0;
}

void GetItemsParams::setIncludeItemTypesNull() {
	m_includeItemTypes.clear();
}


const bool &GetItemsParams::is3D() const {
	return m_is3D.value();
}

void GetItemsParams::setIs3D(bool newIs3D)  {
	m_is3D = newIs3D;
}

bool GetItemsParams::is3DNull() const {
	// Nullable: true
	// Type Nullable: false
	

	return !m_is3D.has_value();
}

void GetItemsParams::setIs3DNull() {
	m_is3D = std::nullopt;
}


const bool &GetItemsParams::is4K() const {
	return m_is4K.value();
}

void GetItemsParams::setIs4K(bool newIs4K)  {
	m_is4K = newIs4K;
}

bool GetItemsParams::is4KNull() const {
	// Nullable: true
	// Type Nullable: false
	

	return !m_is4K.has_value();
}

void GetItemsParams::setIs4KNull() {
	m_is4K = std::nullopt;
}


const bool &GetItemsParams::isFavorite() const {
	return m_isFavorite.value();
}

void GetItemsParams::setIsFavorite(bool newIsFavorite)  {
	m_isFavorite = newIsFavorite;
}

bool GetItemsParams::isFavoriteNull() const {
	// Nullable: true
	// Type Nullable: false
	

	return !m_isFavorite.has_value();
}

void GetItemsParams::setIsFavoriteNull() {
	m_isFavorite = std::nullopt;
}


const bool &GetItemsParams::isHd() const {
	return m_isHd.value();
}

void GetItemsParams::setIsHd(bool newIsHd)  {
	m_isHd = newIsHd;
}

bool GetItemsParams::isHdNull() const {
	// Nullable: true
	// Type Nullable: false
	

	return !m_isHd.has_value();
}

void GetItemsParams::setIsHdNull() {
	m_isHd = std::nullopt;
}


const bool &GetItemsParams::isLocked() const {
	return m_isLocked.value();
}

void GetItemsParams::setIsLocked(bool newIsLocked)  {
	m_isLocked = newIsLocked;
}

bool GetItemsParams::isLockedNull() const {
	// Nullable: true
	// Type Nullable: false
	

	return !m_isLocked.has_value();
}

void GetItemsParams::setIsLockedNull() {
	m_isLocked = std::nullopt;
}


const bool &GetItemsParams::isMissing() const {
	return m_isMissing.value();
}

void GetItemsParams::setIsMissing(bool newIsMissing)  {
	m_isMissing = newIsMissing;
}

bool GetItemsParams::isMissingNull() const {
	// Nullable: true
	// Type Nullable: false
	

	return !m_isMissing.has_value();
}

void GetItemsParams::setIsMissingNull() {
	m_isMissing = std::nullopt;
}


const bool &GetItemsParams::isPlaceHolder() const {
	return m_isPlaceHolder.value();
}

void GetItemsParams::setIsPlaceHolder(bool newIsPlaceHolder)  {
	m_isPlaceHolder = newIsPlaceHolder;
}

bool GetItemsParams::isPlaceHolderNull() const {
	// Nullable: true
	// Type Nullable: false
	

	return !m_isPlaceHolder.has_value();
}

void GetItemsParams::setIsPlaceHolderNull() {
	m_isPlaceHolder = std::nullopt;
}


const bool &GetItemsParams::isPlayed() const {
	return m_isPlayed.value();
}

void GetItemsParams::setIsPlayed(bool newIsPlayed)  {
	m_isPlayed = newIsPlayed;
}

bool GetItemsParams::isPlayedNull() const {
	// Nullable: true
	// Type Nullable: false
	

	return !m_isPlayed.has_value();
}

void GetItemsParams::setIsPlayedNull() {
	m_isPlayed = std::nullopt;
}


const bool &GetItemsParams::isUnaired() const {
	return m_isUnaired.value();
}

void GetItemsParams::setIsUnaired(bool newIsUnaired)  {
	m_isUnaired = newIsUnaired;
}

bool GetItemsParams::isUnairedNull() const {
	// Nullable: true
	// Type Nullable: false
	

	return !m_isUnaired.has_value();
}

void GetItemsParams::setIsUnairedNull() {
	m_isUnaired = std::nullopt;
}


const qint32 &GetItemsParams::limit() const {
	return m_limit.value();
}

void GetItemsParams::setLimit(qint32 newLimit)  {
	m_limit = newLimit;
}

bool GetItemsParams::limitNull() const {
	// Nullable: true
	// Type Nullable: false
	

	return !m_limit.has_value();
}

void GetItemsParams::setLimitNull() {
	m_limit = std::nullopt;
}


const QList<LocationType> &GetItemsParams::locationTypes() const {
	return m_locationTypes;
}

void GetItemsParams::setLocationTypes(QList<LocationType> newLocationTypes)  {
	m_locationTypes = newLocationTypes;
}

bool GetItemsParams::locationTypesNull() const {
	// Nullable: true
	// Type Nullable: true
	

	return m_locationTypes.size() == 0;
}

void GetItemsParams::setLocationTypesNull() {
	m_locationTypes.clear();
}


const qint32 &GetItemsParams::maxHeight() const {
	return m_maxHeight.value();
}

void GetItemsParams::setMaxHeight(qint32 newMaxHeight)  {
	m_maxHeight = newMaxHeight;
}

bool GetItemsParams::maxHeightNull() const {
	// Nullable: true
	// Type Nullable: false
	

	return !m_maxHeight.has_value();
}

void GetItemsParams::setMaxHeightNull() {
	m_maxHeight = std::nullopt;
}


const QString &GetItemsParams::maxOfficialRating() const {
	return m_maxOfficialRating;
}

void GetItemsParams::setMaxOfficialRating(QString newMaxOfficialRating)  {
	m_maxOfficialRating = newMaxOfficialRating;
}

bool GetItemsParams::maxOfficialRatingNull() const {
	// Nullable: true
	// Type Nullable: true
	

	return m_maxOfficialRating.isNull();
}

void GetItemsParams::setMaxOfficialRatingNull() {
	m_maxOfficialRating.clear();
}


const QDateTime &GetItemsParams::maxPremiereDate() const {
	return m_maxPremiereDate;
}

void GetItemsParams::setMaxPremiereDate(QDateTime newMaxPremiereDate)  {
	m_maxPremiereDate = newMaxPremiereDate;
}

bool GetItemsParams::maxPremiereDateNull() const {
	// Nullable: true
	// Type Nullable: true
	

	return m_maxPremiereDate.isNull();
}

void GetItemsParams::setMaxPremiereDateNull() {
	m_maxPremiereDate= QDateTime();
}


const qint32 &GetItemsParams::maxWidth() const {
	return m_maxWidth.value();
}

void GetItemsParams::setMaxWidth(qint32 newMaxWidth)  {
	m_maxWidth = newMaxWidth;
}

bool GetItemsParams::maxWidthNull() const {
	// Nullable: true
	// Type Nullable: false
	

	return !m_maxWidth.has_value();
}

void GetItemsParams::setMaxWidthNull() {
	m_maxWidth = std::nullopt;
}


const QStringList &GetItemsParams::mediaTypes() const {
	return m_mediaTypes;
}

void GetItemsParams::setMediaTypes(QStringList newMediaTypes)  {
	m_mediaTypes = newMediaTypes;
}

bool GetItemsParams::mediaTypesNull() const {
	// Nullable: true
	// Type Nullable: true
	

	return m_mediaTypes.size() == 0;
}

void GetItemsParams::setMediaTypesNull() {
	m_mediaTypes.clear();
}


const double &GetItemsParams::minCommunityRating() const {
	return m_minCommunityRating.value();
}

void GetItemsParams::setMinCommunityRating(double newMinCommunityRating)  {
	m_minCommunityRating = newMinCommunityRating;
}

bool GetItemsParams::minCommunityRatingNull() const {
	// Nullable: true
	// Type Nullable: false
	

	return !m_minCommunityRating.has_value();
}

void GetItemsParams::setMinCommunityRatingNull() {
	m_minCommunityRating = std::nullopt;
}


const double &GetItemsParams::minCriticRating() const {
	return m_minCriticRating.value();
}

void GetItemsParams::setMinCriticRating(double newMinCriticRating)  {
	m_minCriticRating = newMinCriticRating;
}

bool GetItemsParams::minCriticRatingNull() const {
	// Nullable: true
	// Type Nullable: false
	

	return !m_minCriticRating.has_value();
}

void GetItemsParams::setMinCriticRatingNull() {
	m_minCriticRating = std::nullopt;
}


const QDateTime &GetItemsParams::minDateLastSaved() const {
	return m_minDateLastSaved;
}

void GetItemsParams::setMinDateLastSaved(QDateTime newMinDateLastSaved)  {
	m_minDateLastSaved = newMinDateLastSaved;
}

bool GetItemsParams::minDateLastSavedNull() const {
	// Nullable: true
	// Type Nullable: true
	

	return m_minDateLastSaved.isNull();
}

void GetItemsParams::setMinDateLastSavedNull() {
	m_minDateLastSaved= QDateTime();
}


const QDateTime &GetItemsParams::minDateLastSavedForUser() const {
	return m_minDateLastSavedForUser;
}

void GetItemsParams::setMinDateLastSavedForUser(QDateTime newMinDateLastSavedForUser)  {
	m_minDateLastSavedForUser = newMinDateLastSavedForUser;
}

bool GetItemsParams::minDateLastSavedForUserNull() const {
	// Nullable: true
	// Type Nullable: true
	

	return m_minDateLastSavedForUser.isNull();
}

void GetItemsParams::setMinDateLastSavedForUserNull() {
	m_minDateLastSavedForUser= QDateTime();
}


const qint32 &GetItemsParams::minHeight() const {
	return m_minHeight.value();
}

void GetItemsParams::setMinHeight(qint32 newMinHeight)  {
	m_minHeight = newMinHeight;
}

bool GetItemsParams::minHeightNull() const {
	// Nullable: true
	// Type Nullable: false
	

	return !m_minHeight.has_value();
}

void GetItemsParams::setMinHeightNull() {
	m_minHeight = std::nullopt;
}


const QString &GetItemsParams::minOfficialRating() const {
	return m_minOfficialRating;
}

void GetItemsParams::setMinOfficialRating(QString newMinOfficialRating)  {
	m_minOfficialRating = newMinOfficialRating;
}

bool GetItemsParams::minOfficialRatingNull() const {
	// Nullable: true
	// Type Nullable: true
	

	return m_minOfficialRating.isNull();
}

void GetItemsParams::setMinOfficialRatingNull() {
	m_minOfficialRating.clear();
}


const QDateTime &GetItemsParams::minPremiereDate() const {
	return m_minPremiereDate;
}

void GetItemsParams::setMinPremiereDate(QDateTime newMinPremiereDate)  {
	m_minPremiereDate = newMinPremiereDate;
}

bool GetItemsParams::minPremiereDateNull() const {
	// Nullable: true
	// Type Nullable: true
	

	return m_minPremiereDate.isNull();
}

void GetItemsParams::setMinPremiereDateNull() {
	m_minPremiereDate= QDateTime();
}


const qint32 &GetItemsParams::minWidth() const {
	return m_minWidth.value();
}

void GetItemsParams::setMinWidth(qint32 newMinWidth)  {
	m_minWidth = newMinWidth;
}

bool GetItemsParams::minWidthNull() const {
	// Nullable: true
	// Type Nullable: false
	

	return !m_minWidth.has_value();
}

void GetItemsParams::setMinWidthNull() {
	m_minWidth = std::nullopt;
}


const QString &GetItemsParams::nameLessThan() const {
	return m_nameLessThan;
}

void GetItemsParams::setNameLessThan(QString newNameLessThan)  {
	m_nameLessThan = newNameLessThan;
}

bool GetItemsParams::nameLessThanNull() const {
	// Nullable: true
	// Type Nullable: true
	

	return m_nameLessThan.isNull();
}

void GetItemsParams::setNameLessThanNull() {
	m_nameLessThan.clear();
}


const QString &GetItemsParams::nameStartsWith() const {
	return m_nameStartsWith;
}

void GetItemsParams::setNameStartsWith(QString newNameStartsWith)  {
	m_nameStartsWith = newNameStartsWith;
}

bool GetItemsParams::nameStartsWithNull() const {
	// Nullable: true
	// Type Nullable: true
	

	return m_nameStartsWith.isNull();
}

void GetItemsParams::setNameStartsWithNull() {
	m_nameStartsWith.clear();
}


const QString &GetItemsParams::nameStartsWithOrGreater() const {
	return m_nameStartsWithOrGreater;
}

void GetItemsParams::setNameStartsWithOrGreater(QString newNameStartsWithOrGreater)  {
	m_nameStartsWithOrGreater = newNameStartsWithOrGreater;
}

bool GetItemsParams::nameStartsWithOrGreaterNull() const {
	// Nullable: true
	// Type Nullable: true
	

	return m_nameStartsWithOrGreater.isNull();
}

void GetItemsParams::setNameStartsWithOrGreaterNull() {
	m_nameStartsWithOrGreater.clear();
}


const QStringList &GetItemsParams::officialRatings() const {
	return m_officialRatings;
}

void GetItemsParams::setOfficialRatings(QStringList newOfficialRatings)  {
	m_officialRatings = newOfficialRatings;
}

bool GetItemsParams::officialRatingsNull() const {
	// Nullable: true
	// Type Nullable: true
	

	return m_officialRatings.size() == 0;
}

void GetItemsParams::setOfficialRatingsNull() {
	m_officialRatings.clear();
}


const QString &GetItemsParams::parentId() const {
	return m_parentId;
}

void GetItemsParams::setParentId(QString newParentId)  {
	m_parentId = newParentId;
}

bool GetItemsParams::parentIdNull() const {
	// Nullable: true
	// Type Nullable: true
	

	return m_parentId.isNull();
}

void GetItemsParams::setParentIdNull() {
	m_parentId.clear();
}


const qint32 &GetItemsParams::parentIndexNumber() const {
	return m_parentIndexNumber.value();
}

void GetItemsParams::setParentIndexNumber(qint32 newParentIndexNumber)  {
	m_parentIndexNumber = newParentIndexNumber;
}

bool GetItemsParams::parentIndexNumberNull() const {
	// Nullable: true
	// Type Nullable: false
	

	return !m_parentIndexNumber.has_value();
}

void GetItemsParams::setParentIndexNumberNull() {
	m_parentIndexNumber = std::nullopt;
}


const QString &GetItemsParams::person() const {
	return m_person;
}

void GetItemsParams::setPerson(QString newPerson)  {
	m_person = newPerson;
}

bool GetItemsParams::personNull() const {
	// Nullable: true
	// Type Nullable: true
	

	return m_person.isNull();
}

void GetItemsParams::setPersonNull() {
	m_person.clear();
}


const QStringList &GetItemsParams::personIds() const {
	return m_personIds;
}

void GetItemsParams::setPersonIds(QStringList newPersonIds)  {
	m_personIds = newPersonIds;
}

bool GetItemsParams::personIdsNull() const {
	// Nullable: true
	// Type Nullable: true
	

	return m_personIds.size() == 0;
}

void GetItemsParams::setPersonIdsNull() {
	m_personIds.clear();
}


const QStringList &GetItemsParams::personTypes() const {
	return m_personTypes;
}

void GetItemsParams::setPersonTypes(QStringList newPersonTypes)  {
	m_personTypes = newPersonTypes;
}

bool GetItemsParams::personTypesNull() const {
	// Nullable: true
	// Type Nullable: true
	

	return m_personTypes.size() == 0;
}

void GetItemsParams::setPersonTypesNull() {
	m_personTypes.clear();
}


const bool &GetItemsParams::recursive() const {
	return m_recursive.value();
}

void GetItemsParams::setRecursive(bool newRecursive)  {
	m_recursive = newRecursive;
}

bool GetItemsParams::recursiveNull() const {
	// Nullable: true
	// Type Nullable: false
	

	return !m_recursive.has_value();
}

void GetItemsParams::setRecursiveNull() {
	m_recursive = std::nullopt;
}


const QString &GetItemsParams::searchTerm() const {
	return m_searchTerm;
}

void GetItemsParams::setSearchTerm(QString newSearchTerm)  {
	m_searchTerm = newSearchTerm;
}

bool GetItemsParams::searchTermNull() const {
	// Nullable: true
	// Type Nullable: true
	

	return m_searchTerm.isNull();
}

void GetItemsParams::setSearchTermNull() {
	m_searchTerm.clear();
}


const QList<SeriesStatus> &GetItemsParams::seriesStatus() const {
	return m_seriesStatus;
}

void GetItemsParams::setSeriesStatus(QList<SeriesStatus> newSeriesStatus)  {
	m_seriesStatus = newSeriesStatus;
}

bool GetItemsParams::seriesStatusNull() const {
	// Nullable: true
	// Type Nullable: true
	

	return m_seriesStatus.size() == 0;
}

void GetItemsParams::setSeriesStatusNull() {
	m_seriesStatus.clear();
}


const QString &GetItemsParams::sortBy() const {
	return m_sortBy;
}

void GetItemsParams::setSortBy(QString newSortBy)  {
	m_sortBy = newSortBy;
}

bool GetItemsParams::sortByNull() const {
	// Nullable: true
	// Type Nullable: true
	

	return m_sortBy.isNull();
}

void GetItemsParams::setSortByNull() {
	m_sortBy.clear();
}


const QString &GetItemsParams::sortOrder() const {
	return m_sortOrder;
}

void GetItemsParams::setSortOrder(QString newSortOrder)  {
	m_sortOrder = newSortOrder;
}

bool GetItemsParams::sortOrderNull() const {
	// Nullable: true
	// Type Nullable: true
	

	return m_sortOrder.isNull();
}

void GetItemsParams::setSortOrderNull() {
	m_sortOrder.clear();
}


const qint32 &GetItemsParams::startIndex() const {
	return m_startIndex.value();
}

void GetItemsParams::setStartIndex(qint32 newStartIndex)  {
	m_startIndex = newStartIndex;
}

bool GetItemsParams::startIndexNull() const {
	// Nullable: true
	// Type Nullable: false
	

	return !m_startIndex.has_value();
}

void GetItemsParams::setStartIndexNull() {
	m_startIndex = std::nullopt;
}


const QStringList &GetItemsParams::studioIds() const {
	return m_studioIds;
}

void GetItemsParams::setStudioIds(QStringList newStudioIds)  {
	m_studioIds = newStudioIds;
}

bool GetItemsParams::studioIdsNull() const {
	// Nullable: true
	// Type Nullable: true
	

	return m_studioIds.size() == 0;
}

void GetItemsParams::setStudioIdsNull() {
	m_studioIds.clear();
}


const QStringList &GetItemsParams::studios() const {
	return m_studios;
}

void GetItemsParams::setStudios(QStringList newStudios)  {
	m_studios = newStudios;
}

bool GetItemsParams::studiosNull() const {
	// Nullable: true
	// Type Nullable: true
	

	return m_studios.size() == 0;
}

void GetItemsParams::setStudiosNull() {
	m_studios.clear();
}


const QStringList &GetItemsParams::tags() const {
	return m_tags;
}

void GetItemsParams::setTags(QStringList newTags)  {
	m_tags = newTags;
}

bool GetItemsParams::tagsNull() const {
	// Nullable: true
	// Type Nullable: true
	

	return m_tags.size() == 0;
}

void GetItemsParams::setTagsNull() {
	m_tags.clear();
}


const QString &GetItemsParams::userId() const {
	return m_userId;
}

void GetItemsParams::setUserId(QString newUserId)  {
	m_userId = newUserId;
}

bool GetItemsParams::userIdNull() const {
	// Nullable: true
	// Type Nullable: true
	

	return m_userId.isNull();
}

void GetItemsParams::setUserIdNull() {
	m_userId.clear();
}


const QList<VideoType> &GetItemsParams::videoTypes() const {
	return m_videoTypes;
}

void GetItemsParams::setVideoTypes(QList<VideoType> newVideoTypes)  {
	m_videoTypes = newVideoTypes;
}

bool GetItemsParams::videoTypesNull() const {
	// Nullable: true
	// Type Nullable: true
	

	return m_videoTypes.size() == 0;
}

void GetItemsParams::setVideoTypesNull() {
	m_videoTypes.clear();
}


const QList<qint32> &GetItemsParams::years() const {
	return m_years;
}

void GetItemsParams::setYears(QList<qint32> newYears)  {
	m_years = newYears;
}

bool GetItemsParams::yearsNull() const {
	// Nullable: true
	// Type Nullable: true
	

	return m_years.size() == 0;
}

void GetItemsParams::setYearsNull() {
	m_years.clear();
}




// GetItemsByUserIdParams

const QString &GetItemsByUserIdParams::userId() const {
	return m_userId;
}

void GetItemsByUserIdParams::setUserId(QString newUserId) {
	m_userId = newUserId;
}


const QString &GetItemsByUserIdParams::adjacentTo() const {
	return m_adjacentTo;
}

void GetItemsByUserIdParams::setAdjacentTo(QString newAdjacentTo)  {
	m_adjacentTo = newAdjacentTo;
}

bool GetItemsByUserIdParams::adjacentToNull() const {
	// Nullable: true
	// Type Nullable: true
	

	return m_adjacentTo.isNull();
}

void GetItemsByUserIdParams::setAdjacentToNull() {
	m_adjacentTo.clear();
}


const QStringList &GetItemsByUserIdParams::albumArtistIds() const {
	return m_albumArtistIds;
}

void GetItemsByUserIdParams::setAlbumArtistIds(QStringList newAlbumArtistIds)  {
	m_albumArtistIds = newAlbumArtistIds;
}

bool GetItemsByUserIdParams::albumArtistIdsNull() const {
	// Nullable: true
	// Type Nullable: true
	

	return m_albumArtistIds.size() == 0;
}

void GetItemsByUserIdParams::setAlbumArtistIdsNull() {
	m_albumArtistIds.clear();
}


const QStringList &GetItemsByUserIdParams::albumIds() const {
	return m_albumIds;
}

void GetItemsByUserIdParams::setAlbumIds(QStringList newAlbumIds)  {
	m_albumIds = newAlbumIds;
}

bool GetItemsByUserIdParams::albumIdsNull() const {
	// Nullable: true
	// Type Nullable: true
	

	return m_albumIds.size() == 0;
}

void GetItemsByUserIdParams::setAlbumIdsNull() {
	m_albumIds.clear();
}


const QStringList &GetItemsByUserIdParams::albums() const {
	return m_albums;
}

void GetItemsByUserIdParams::setAlbums(QStringList newAlbums)  {
	m_albums = newAlbums;
}

bool GetItemsByUserIdParams::albumsNull() const {
	// Nullable: true
	// Type Nullable: true
	

	return m_albums.size() == 0;
}

void GetItemsByUserIdParams::setAlbumsNull() {
	m_albums.clear();
}


const QStringList &GetItemsByUserIdParams::artistIds() const {
	return m_artistIds;
}

void GetItemsByUserIdParams::setArtistIds(QStringList newArtistIds)  {
	m_artistIds = newArtistIds;
}

bool GetItemsByUserIdParams::artistIdsNull() const {
	// Nullable: true
	// Type Nullable: true
	

	return m_artistIds.size() == 0;
}

void GetItemsByUserIdParams::setArtistIdsNull() {
	m_artistIds.clear();
}


const QStringList &GetItemsByUserIdParams::artists() const {
	return m_artists;
}

void GetItemsByUserIdParams::setArtists(QStringList newArtists)  {
	m_artists = newArtists;
}

bool GetItemsByUserIdParams::artistsNull() const {
	// Nullable: true
	// Type Nullable: true
	

	return m_artists.size() == 0;
}

void GetItemsByUserIdParams::setArtistsNull() {
	m_artists.clear();
}


const bool &GetItemsByUserIdParams::collapseBoxSetItems() const {
	return m_collapseBoxSetItems.value();
}

void GetItemsByUserIdParams::setCollapseBoxSetItems(bool newCollapseBoxSetItems)  {
	m_collapseBoxSetItems = newCollapseBoxSetItems;
}

bool GetItemsByUserIdParams::collapseBoxSetItemsNull() const {
	// Nullable: true
	// Type Nullable: false
	

	return !m_collapseBoxSetItems.has_value();
}

void GetItemsByUserIdParams::setCollapseBoxSetItemsNull() {
	m_collapseBoxSetItems = std::nullopt;
}


const QStringList &GetItemsByUserIdParams::contributingArtistIds() const {
	return m_contributingArtistIds;
}

void GetItemsByUserIdParams::setContributingArtistIds(QStringList newContributingArtistIds)  {
	m_contributingArtistIds = newContributingArtistIds;
}

bool GetItemsByUserIdParams::contributingArtistIdsNull() const {
	// Nullable: true
	// Type Nullable: true
	

	return m_contributingArtistIds.size() == 0;
}

void GetItemsByUserIdParams::setContributingArtistIdsNull() {
	m_contributingArtistIds.clear();
}


const QList<ImageType> &GetItemsByUserIdParams::enableImageTypes() const {
	return m_enableImageTypes;
}

void GetItemsByUserIdParams::setEnableImageTypes(QList<ImageType> newEnableImageTypes)  {
	m_enableImageTypes = newEnableImageTypes;
}

bool GetItemsByUserIdParams::enableImageTypesNull() const {
	// Nullable: true
	// Type Nullable: true
	

	return m_enableImageTypes.size() == 0;
}

void GetItemsByUserIdParams::setEnableImageTypesNull() {
	m_enableImageTypes.clear();
}


const bool &GetItemsByUserIdParams::enableImages() const {
	return m_enableImages.value();
}

void GetItemsByUserIdParams::setEnableImages(bool newEnableImages)  {
	m_enableImages = newEnableImages;
}

bool GetItemsByUserIdParams::enableImagesNull() const {
	// Nullable: true
	// Type Nullable: false
	

	return !m_enableImages.has_value();
}

void GetItemsByUserIdParams::setEnableImagesNull() {
	m_enableImages = std::nullopt;
}


const bool &GetItemsByUserIdParams::enableTotalRecordCount() const {
	return m_enableTotalRecordCount.value();
}

void GetItemsByUserIdParams::setEnableTotalRecordCount(bool newEnableTotalRecordCount)  {
	m_enableTotalRecordCount = newEnableTotalRecordCount;
}

bool GetItemsByUserIdParams::enableTotalRecordCountNull() const {
	// Nullable: false
	// Type Nullable: false
	

	return !m_enableTotalRecordCount.has_value();
}

void GetItemsByUserIdParams::setEnableTotalRecordCountNull() {
	m_enableTotalRecordCount = std::nullopt;
}


const bool &GetItemsByUserIdParams::enableUserData() const {
	return m_enableUserData.value();
}

void GetItemsByUserIdParams::setEnableUserData(bool newEnableUserData)  {
	m_enableUserData = newEnableUserData;
}

bool GetItemsByUserIdParams::enableUserDataNull() const {
	// Nullable: true
	// Type Nullable: false
	

	return !m_enableUserData.has_value();
}

void GetItemsByUserIdParams::setEnableUserDataNull() {
	m_enableUserData = std::nullopt;
}


const QStringList &GetItemsByUserIdParams::excludeArtistIds() const {
	return m_excludeArtistIds;
}

void GetItemsByUserIdParams::setExcludeArtistIds(QStringList newExcludeArtistIds)  {
	m_excludeArtistIds = newExcludeArtistIds;
}

bool GetItemsByUserIdParams::excludeArtistIdsNull() const {
	// Nullable: true
	// Type Nullable: true
	

	return m_excludeArtistIds.size() == 0;
}

void GetItemsByUserIdParams::setExcludeArtistIdsNull() {
	m_excludeArtistIds.clear();
}


const QStringList &GetItemsByUserIdParams::excludeItemIds() const {
	return m_excludeItemIds;
}

void GetItemsByUserIdParams::setExcludeItemIds(QStringList newExcludeItemIds)  {
	m_excludeItemIds = newExcludeItemIds;
}

bool GetItemsByUserIdParams::excludeItemIdsNull() const {
	// Nullable: true
	// Type Nullable: true
	

	return m_excludeItemIds.size() == 0;
}

void GetItemsByUserIdParams::setExcludeItemIdsNull() {
	m_excludeItemIds.clear();
}


const QStringList &GetItemsByUserIdParams::excludeItemTypes() const {
	return m_excludeItemTypes;
}

void GetItemsByUserIdParams::setExcludeItemTypes(QStringList newExcludeItemTypes)  {
	m_excludeItemTypes = newExcludeItemTypes;
}

bool GetItemsByUserIdParams::excludeItemTypesNull() const {
	// Nullable: true
	// Type Nullable: true
	

	return m_excludeItemTypes.size() == 0;
}

void GetItemsByUserIdParams::setExcludeItemTypesNull() {
	m_excludeItemTypes.clear();
}


const QList<LocationType> &GetItemsByUserIdParams::excludeLocationTypes() const {
	return m_excludeLocationTypes;
}

void GetItemsByUserIdParams::setExcludeLocationTypes(QList<LocationType> newExcludeLocationTypes)  {
	m_excludeLocationTypes = newExcludeLocationTypes;
}

bool GetItemsByUserIdParams::excludeLocationTypesNull() const {
	// Nullable: true
	// Type Nullable: true
	

	return m_excludeLocationTypes.size() == 0;
}

void GetItemsByUserIdParams::setExcludeLocationTypesNull() {
	m_excludeLocationTypes.clear();
}


const QList<ItemFields> &GetItemsByUserIdParams::fields() const {
	return m_fields;
}

void GetItemsByUserIdParams::setFields(QList<ItemFields> newFields)  {
	m_fields = newFields;
}

bool GetItemsByUserIdParams::fieldsNull() const {
	// Nullable: true
	// Type Nullable: true
	

	return m_fields.size() == 0;
}

void GetItemsByUserIdParams::setFieldsNull() {
	m_fields.clear();
}


const QList<ItemFilter> &GetItemsByUserIdParams::filters() const {
	return m_filters;
}

void GetItemsByUserIdParams::setFilters(QList<ItemFilter> newFilters)  {
	m_filters = newFilters;
}

bool GetItemsByUserIdParams::filtersNull() const {
	// Nullable: true
	// Type Nullable: true
	

	return m_filters.size() == 0;
}

void GetItemsByUserIdParams::setFiltersNull() {
	m_filters.clear();
}


const QStringList &GetItemsByUserIdParams::genreIds() const {
	return m_genreIds;
}

void GetItemsByUserIdParams::setGenreIds(QStringList newGenreIds)  {
	m_genreIds = newGenreIds;
}

bool GetItemsByUserIdParams::genreIdsNull() const {
	// Nullable: true
	// Type Nullable: true
	

	return m_genreIds.size() == 0;
}

void GetItemsByUserIdParams::setGenreIdsNull() {
	m_genreIds.clear();
}


const QStringList &GetItemsByUserIdParams::genres() const {
	return m_genres;
}

void GetItemsByUserIdParams::setGenres(QStringList newGenres)  {
	m_genres = newGenres;
}

bool GetItemsByUserIdParams::genresNull() const {
	// Nullable: true
	// Type Nullable: true
	

	return m_genres.size() == 0;
}

void GetItemsByUserIdParams::setGenresNull() {
	m_genres.clear();
}


const bool &GetItemsByUserIdParams::hasImdbId() const {
	return m_hasImdbId.value();
}

void GetItemsByUserIdParams::setHasImdbId(bool newHasImdbId)  {
	m_hasImdbId = newHasImdbId;
}

bool GetItemsByUserIdParams::hasImdbIdNull() const {
	// Nullable: true
	// Type Nullable: false
	

	return !m_hasImdbId.has_value();
}

void GetItemsByUserIdParams::setHasImdbIdNull() {
	m_hasImdbId = std::nullopt;
}


const bool &GetItemsByUserIdParams::hasOfficialRating() const {
	return m_hasOfficialRating.value();
}

void GetItemsByUserIdParams::setHasOfficialRating(bool newHasOfficialRating)  {
	m_hasOfficialRating = newHasOfficialRating;
}

bool GetItemsByUserIdParams::hasOfficialRatingNull() const {
	// Nullable: true
	// Type Nullable: false
	

	return !m_hasOfficialRating.has_value();
}

void GetItemsByUserIdParams::setHasOfficialRatingNull() {
	m_hasOfficialRating = std::nullopt;
}


const bool &GetItemsByUserIdParams::hasOverview() const {
	return m_hasOverview.value();
}

void GetItemsByUserIdParams::setHasOverview(bool newHasOverview)  {
	m_hasOverview = newHasOverview;
}

bool GetItemsByUserIdParams::hasOverviewNull() const {
	// Nullable: true
	// Type Nullable: false
	

	return !m_hasOverview.has_value();
}

void GetItemsByUserIdParams::setHasOverviewNull() {
	m_hasOverview = std::nullopt;
}


const bool &GetItemsByUserIdParams::hasParentalRating() const {
	return m_hasParentalRating.value();
}

void GetItemsByUserIdParams::setHasParentalRating(bool newHasParentalRating)  {
	m_hasParentalRating = newHasParentalRating;
}

bool GetItemsByUserIdParams::hasParentalRatingNull() const {
	// Nullable: true
	// Type Nullable: false
	

	return !m_hasParentalRating.has_value();
}

void GetItemsByUserIdParams::setHasParentalRatingNull() {
	m_hasParentalRating = std::nullopt;
}


const bool &GetItemsByUserIdParams::hasSpecialFeature() const {
	return m_hasSpecialFeature.value();
}

void GetItemsByUserIdParams::setHasSpecialFeature(bool newHasSpecialFeature)  {
	m_hasSpecialFeature = newHasSpecialFeature;
}

bool GetItemsByUserIdParams::hasSpecialFeatureNull() const {
	// Nullable: true
	// Type Nullable: false
	

	return !m_hasSpecialFeature.has_value();
}

void GetItemsByUserIdParams::setHasSpecialFeatureNull() {
	m_hasSpecialFeature = std::nullopt;
}


const bool &GetItemsByUserIdParams::hasSubtitles() const {
	return m_hasSubtitles.value();
}

void GetItemsByUserIdParams::setHasSubtitles(bool newHasSubtitles)  {
	m_hasSubtitles = newHasSubtitles;
}

bool GetItemsByUserIdParams::hasSubtitlesNull() const {
	// Nullable: true
	// Type Nullable: false
	

	return !m_hasSubtitles.has_value();
}

void GetItemsByUserIdParams::setHasSubtitlesNull() {
	m_hasSubtitles = std::nullopt;
}


const bool &GetItemsByUserIdParams::hasThemeSong() const {
	return m_hasThemeSong.value();
}

void GetItemsByUserIdParams::setHasThemeSong(bool newHasThemeSong)  {
	m_hasThemeSong = newHasThemeSong;
}

bool GetItemsByUserIdParams::hasThemeSongNull() const {
	// Nullable: true
	// Type Nullable: false
	

	return !m_hasThemeSong.has_value();
}

void GetItemsByUserIdParams::setHasThemeSongNull() {
	m_hasThemeSong = std::nullopt;
}


const bool &GetItemsByUserIdParams::hasThemeVideo() const {
	return m_hasThemeVideo.value();
}

void GetItemsByUserIdParams::setHasThemeVideo(bool newHasThemeVideo)  {
	m_hasThemeVideo = newHasThemeVideo;
}

bool GetItemsByUserIdParams::hasThemeVideoNull() const {
	// Nullable: true
	// Type Nullable: false
	

	return !m_hasThemeVideo.has_value();
}

void GetItemsByUserIdParams::setHasThemeVideoNull() {
	m_hasThemeVideo = std::nullopt;
}


const bool &GetItemsByUserIdParams::hasTmdbId() const {
	return m_hasTmdbId.value();
}

void GetItemsByUserIdParams::setHasTmdbId(bool newHasTmdbId)  {
	m_hasTmdbId = newHasTmdbId;
}

bool GetItemsByUserIdParams::hasTmdbIdNull() const {
	// Nullable: true
	// Type Nullable: false
	

	return !m_hasTmdbId.has_value();
}

void GetItemsByUserIdParams::setHasTmdbIdNull() {
	m_hasTmdbId = std::nullopt;
}


const bool &GetItemsByUserIdParams::hasTrailer() const {
	return m_hasTrailer.value();
}

void GetItemsByUserIdParams::setHasTrailer(bool newHasTrailer)  {
	m_hasTrailer = newHasTrailer;
}

bool GetItemsByUserIdParams::hasTrailerNull() const {
	// Nullable: true
	// Type Nullable: false
	

	return !m_hasTrailer.has_value();
}

void GetItemsByUserIdParams::setHasTrailerNull() {
	m_hasTrailer = std::nullopt;
}


const bool &GetItemsByUserIdParams::hasTvdbId() const {
	return m_hasTvdbId.value();
}

void GetItemsByUserIdParams::setHasTvdbId(bool newHasTvdbId)  {
	m_hasTvdbId = newHasTvdbId;
}

bool GetItemsByUserIdParams::hasTvdbIdNull() const {
	// Nullable: true
	// Type Nullable: false
	

	return !m_hasTvdbId.has_value();
}

void GetItemsByUserIdParams::setHasTvdbIdNull() {
	m_hasTvdbId = std::nullopt;
}


const QStringList &GetItemsByUserIdParams::ids() const {
	return m_ids;
}

void GetItemsByUserIdParams::setIds(QStringList newIds)  {
	m_ids = newIds;
}

bool GetItemsByUserIdParams::idsNull() const {
	// Nullable: true
	// Type Nullable: true
	

	return m_ids.size() == 0;
}

void GetItemsByUserIdParams::setIdsNull() {
	m_ids.clear();
}


const qint32 &GetItemsByUserIdParams::imageTypeLimit() const {
	return m_imageTypeLimit.value();
}

void GetItemsByUserIdParams::setImageTypeLimit(qint32 newImageTypeLimit)  {
	m_imageTypeLimit = newImageTypeLimit;
}

bool GetItemsByUserIdParams::imageTypeLimitNull() const {
	// Nullable: true
	// Type Nullable: false
	

	return !m_imageTypeLimit.has_value();
}

void GetItemsByUserIdParams::setImageTypeLimitNull() {
	m_imageTypeLimit = std::nullopt;
}


const QList<ImageType> &GetItemsByUserIdParams::imageTypes() const {
	return m_imageTypes;
}

void GetItemsByUserIdParams::setImageTypes(QList<ImageType> newImageTypes)  {
	m_imageTypes = newImageTypes;
}

bool GetItemsByUserIdParams::imageTypesNull() const {
	// Nullable: true
	// Type Nullable: true
	

	return m_imageTypes.size() == 0;
}

void GetItemsByUserIdParams::setImageTypesNull() {
	m_imageTypes.clear();
}


const QStringList &GetItemsByUserIdParams::includeItemTypes() const {
	return m_includeItemTypes;
}

void GetItemsByUserIdParams::setIncludeItemTypes(QStringList newIncludeItemTypes)  {
	m_includeItemTypes = newIncludeItemTypes;
}

bool GetItemsByUserIdParams::includeItemTypesNull() const {
	// Nullable: true
	// Type Nullable: true
	

	return m_includeItemTypes.size() == 0;
}

void GetItemsByUserIdParams::setIncludeItemTypesNull() {
	m_includeItemTypes.clear();
}


const bool &GetItemsByUserIdParams::is3D() const {
	return m_is3D.value();
}

void GetItemsByUserIdParams::setIs3D(bool newIs3D)  {
	m_is3D = newIs3D;
}

bool GetItemsByUserIdParams::is3DNull() const {
	// Nullable: true
	// Type Nullable: false
	

	return !m_is3D.has_value();
}

void GetItemsByUserIdParams::setIs3DNull() {
	m_is3D = std::nullopt;
}


const bool &GetItemsByUserIdParams::is4K() const {
	return m_is4K.value();
}

void GetItemsByUserIdParams::setIs4K(bool newIs4K)  {
	m_is4K = newIs4K;
}

bool GetItemsByUserIdParams::is4KNull() const {
	// Nullable: true
	// Type Nullable: false
	

	return !m_is4K.has_value();
}

void GetItemsByUserIdParams::setIs4KNull() {
	m_is4K = std::nullopt;
}


const bool &GetItemsByUserIdParams::isFavorite() const {
	return m_isFavorite.value();
}

void GetItemsByUserIdParams::setIsFavorite(bool newIsFavorite)  {
	m_isFavorite = newIsFavorite;
}

bool GetItemsByUserIdParams::isFavoriteNull() const {
	// Nullable: true
	// Type Nullable: false
	

	return !m_isFavorite.has_value();
}

void GetItemsByUserIdParams::setIsFavoriteNull() {
	m_isFavorite = std::nullopt;
}


const bool &GetItemsByUserIdParams::isHd() const {
	return m_isHd.value();
}

void GetItemsByUserIdParams::setIsHd(bool newIsHd)  {
	m_isHd = newIsHd;
}

bool GetItemsByUserIdParams::isHdNull() const {
	// Nullable: true
	// Type Nullable: false
	

	return !m_isHd.has_value();
}

void GetItemsByUserIdParams::setIsHdNull() {
	m_isHd = std::nullopt;
}


const bool &GetItemsByUserIdParams::isLocked() const {
	return m_isLocked.value();
}

void GetItemsByUserIdParams::setIsLocked(bool newIsLocked)  {
	m_isLocked = newIsLocked;
}

bool GetItemsByUserIdParams::isLockedNull() const {
	// Nullable: true
	// Type Nullable: false
	

	return !m_isLocked.has_value();
}

void GetItemsByUserIdParams::setIsLockedNull() {
	m_isLocked = std::nullopt;
}


const bool &GetItemsByUserIdParams::isMissing() const {
	return m_isMissing.value();
}

void GetItemsByUserIdParams::setIsMissing(bool newIsMissing)  {
	m_isMissing = newIsMissing;
}

bool GetItemsByUserIdParams::isMissingNull() const {
	// Nullable: true
	// Type Nullable: false
	

	return !m_isMissing.has_value();
}

void GetItemsByUserIdParams::setIsMissingNull() {
	m_isMissing = std::nullopt;
}


const bool &GetItemsByUserIdParams::isPlaceHolder() const {
	return m_isPlaceHolder.value();
}

void GetItemsByUserIdParams::setIsPlaceHolder(bool newIsPlaceHolder)  {
	m_isPlaceHolder = newIsPlaceHolder;
}

bool GetItemsByUserIdParams::isPlaceHolderNull() const {
	// Nullable: true
	// Type Nullable: false
	

	return !m_isPlaceHolder.has_value();
}

void GetItemsByUserIdParams::setIsPlaceHolderNull() {
	m_isPlaceHolder = std::nullopt;
}


const bool &GetItemsByUserIdParams::isPlayed() const {
	return m_isPlayed.value();
}

void GetItemsByUserIdParams::setIsPlayed(bool newIsPlayed)  {
	m_isPlayed = newIsPlayed;
}

bool GetItemsByUserIdParams::isPlayedNull() const {
	// Nullable: true
	// Type Nullable: false
	

	return !m_isPlayed.has_value();
}

void GetItemsByUserIdParams::setIsPlayedNull() {
	m_isPlayed = std::nullopt;
}


const bool &GetItemsByUserIdParams::isUnaired() const {
	return m_isUnaired.value();
}

void GetItemsByUserIdParams::setIsUnaired(bool newIsUnaired)  {
	m_isUnaired = newIsUnaired;
}

bool GetItemsByUserIdParams::isUnairedNull() const {
	// Nullable: true
	// Type Nullable: false
	

	return !m_isUnaired.has_value();
}

void GetItemsByUserIdParams::setIsUnairedNull() {
	m_isUnaired = std::nullopt;
}


const qint32 &GetItemsByUserIdParams::limit() const {
	return m_limit.value();
}

void GetItemsByUserIdParams::setLimit(qint32 newLimit)  {
	m_limit = newLimit;
}

bool GetItemsByUserIdParams::limitNull() const {
	// Nullable: true
	// Type Nullable: false
	

	return !m_limit.has_value();
}

void GetItemsByUserIdParams::setLimitNull() {
	m_limit = std::nullopt;
}


const QList<LocationType> &GetItemsByUserIdParams::locationTypes() const {
	return m_locationTypes;
}

void GetItemsByUserIdParams::setLocationTypes(QList<LocationType> newLocationTypes)  {
	m_locationTypes = newLocationTypes;
}

bool GetItemsByUserIdParams::locationTypesNull() const {
	// Nullable: true
	// Type Nullable: true
	

	return m_locationTypes.size() == 0;
}

void GetItemsByUserIdParams::setLocationTypesNull() {
	m_locationTypes.clear();
}


const qint32 &GetItemsByUserIdParams::maxHeight() const {
	return m_maxHeight.value();
}

void GetItemsByUserIdParams::setMaxHeight(qint32 newMaxHeight)  {
	m_maxHeight = newMaxHeight;
}

bool GetItemsByUserIdParams::maxHeightNull() const {
	// Nullable: true
	// Type Nullable: false
	

	return !m_maxHeight.has_value();
}

void GetItemsByUserIdParams::setMaxHeightNull() {
	m_maxHeight = std::nullopt;
}


const QString &GetItemsByUserIdParams::maxOfficialRating() const {
	return m_maxOfficialRating;
}

void GetItemsByUserIdParams::setMaxOfficialRating(QString newMaxOfficialRating)  {
	m_maxOfficialRating = newMaxOfficialRating;
}

bool GetItemsByUserIdParams::maxOfficialRatingNull() const {
	// Nullable: true
	// Type Nullable: true
	

	return m_maxOfficialRating.isNull();
}

void GetItemsByUserIdParams::setMaxOfficialRatingNull() {
	m_maxOfficialRating.clear();
}


const QDateTime &GetItemsByUserIdParams::maxPremiereDate() const {
	return m_maxPremiereDate;
}

void GetItemsByUserIdParams::setMaxPremiereDate(QDateTime newMaxPremiereDate)  {
	m_maxPremiereDate = newMaxPremiereDate;
}

bool GetItemsByUserIdParams::maxPremiereDateNull() const {
	// Nullable: true
	// Type Nullable: true
	

	return m_maxPremiereDate.isNull();
}

void GetItemsByUserIdParams::setMaxPremiereDateNull() {
	m_maxPremiereDate= QDateTime();
}


const qint32 &GetItemsByUserIdParams::maxWidth() const {
	return m_maxWidth.value();
}

void GetItemsByUserIdParams::setMaxWidth(qint32 newMaxWidth)  {
	m_maxWidth = newMaxWidth;
}

bool GetItemsByUserIdParams::maxWidthNull() const {
	// Nullable: true
	// Type Nullable: false
	

	return !m_maxWidth.has_value();
}

void GetItemsByUserIdParams::setMaxWidthNull() {
	m_maxWidth = std::nullopt;
}


const QStringList &GetItemsByUserIdParams::mediaTypes() const {
	return m_mediaTypes;
}

void GetItemsByUserIdParams::setMediaTypes(QStringList newMediaTypes)  {
	m_mediaTypes = newMediaTypes;
}

bool GetItemsByUserIdParams::mediaTypesNull() const {
	// Nullable: true
	// Type Nullable: true
	

	return m_mediaTypes.size() == 0;
}

void GetItemsByUserIdParams::setMediaTypesNull() {
	m_mediaTypes.clear();
}


const double &GetItemsByUserIdParams::minCommunityRating() const {
	return m_minCommunityRating.value();
}

void GetItemsByUserIdParams::setMinCommunityRating(double newMinCommunityRating)  {
	m_minCommunityRating = newMinCommunityRating;
}

bool GetItemsByUserIdParams::minCommunityRatingNull() const {
	// Nullable: true
	// Type Nullable: false
	

	return !m_minCommunityRating.has_value();
}

void GetItemsByUserIdParams::setMinCommunityRatingNull() {
	m_minCommunityRating = std::nullopt;
}


const double &GetItemsByUserIdParams::minCriticRating() const {
	return m_minCriticRating.value();
}

void GetItemsByUserIdParams::setMinCriticRating(double newMinCriticRating)  {
	m_minCriticRating = newMinCriticRating;
}

bool GetItemsByUserIdParams::minCriticRatingNull() const {
	// Nullable: true
	// Type Nullable: false
	

	return !m_minCriticRating.has_value();
}

void GetItemsByUserIdParams::setMinCriticRatingNull() {
	m_minCriticRating = std::nullopt;
}


const QDateTime &GetItemsByUserIdParams::minDateLastSaved() const {
	return m_minDateLastSaved;
}

void GetItemsByUserIdParams::setMinDateLastSaved(QDateTime newMinDateLastSaved)  {
	m_minDateLastSaved = newMinDateLastSaved;
}

bool GetItemsByUserIdParams::minDateLastSavedNull() const {
	// Nullable: true
	// Type Nullable: true
	

	return m_minDateLastSaved.isNull();
}

void GetItemsByUserIdParams::setMinDateLastSavedNull() {
	m_minDateLastSaved= QDateTime();
}


const QDateTime &GetItemsByUserIdParams::minDateLastSavedForUser() const {
	return m_minDateLastSavedForUser;
}

void GetItemsByUserIdParams::setMinDateLastSavedForUser(QDateTime newMinDateLastSavedForUser)  {
	m_minDateLastSavedForUser = newMinDateLastSavedForUser;
}

bool GetItemsByUserIdParams::minDateLastSavedForUserNull() const {
	// Nullable: true
	// Type Nullable: true
	

	return m_minDateLastSavedForUser.isNull();
}

void GetItemsByUserIdParams::setMinDateLastSavedForUserNull() {
	m_minDateLastSavedForUser= QDateTime();
}


const qint32 &GetItemsByUserIdParams::minHeight() const {
	return m_minHeight.value();
}

void GetItemsByUserIdParams::setMinHeight(qint32 newMinHeight)  {
	m_minHeight = newMinHeight;
}

bool GetItemsByUserIdParams::minHeightNull() const {
	// Nullable: true
	// Type Nullable: false
	

	return !m_minHeight.has_value();
}

void GetItemsByUserIdParams::setMinHeightNull() {
	m_minHeight = std::nullopt;
}


const QString &GetItemsByUserIdParams::minOfficialRating() const {
	return m_minOfficialRating;
}

void GetItemsByUserIdParams::setMinOfficialRating(QString newMinOfficialRating)  {
	m_minOfficialRating = newMinOfficialRating;
}

bool GetItemsByUserIdParams::minOfficialRatingNull() const {
	// Nullable: true
	// Type Nullable: true
	

	return m_minOfficialRating.isNull();
}

void GetItemsByUserIdParams::setMinOfficialRatingNull() {
	m_minOfficialRating.clear();
}


const QDateTime &GetItemsByUserIdParams::minPremiereDate() const {
	return m_minPremiereDate;
}

void GetItemsByUserIdParams::setMinPremiereDate(QDateTime newMinPremiereDate)  {
	m_minPremiereDate = newMinPremiereDate;
}

bool GetItemsByUserIdParams::minPremiereDateNull() const {
	// Nullable: true
	// Type Nullable: true
	

	return m_minPremiereDate.isNull();
}

void GetItemsByUserIdParams::setMinPremiereDateNull() {
	m_minPremiereDate= QDateTime();
}


const qint32 &GetItemsByUserIdParams::minWidth() const {
	return m_minWidth.value();
}

void GetItemsByUserIdParams::setMinWidth(qint32 newMinWidth)  {
	m_minWidth = newMinWidth;
}

bool GetItemsByUserIdParams::minWidthNull() const {
	// Nullable: true
	// Type Nullable: false
	

	return !m_minWidth.has_value();
}

void GetItemsByUserIdParams::setMinWidthNull() {
	m_minWidth = std::nullopt;
}


const QString &GetItemsByUserIdParams::nameLessThan() const {
	return m_nameLessThan;
}

void GetItemsByUserIdParams::setNameLessThan(QString newNameLessThan)  {
	m_nameLessThan = newNameLessThan;
}

bool GetItemsByUserIdParams::nameLessThanNull() const {
	// Nullable: true
	// Type Nullable: true
	

	return m_nameLessThan.isNull();
}

void GetItemsByUserIdParams::setNameLessThanNull() {
	m_nameLessThan.clear();
}


const QString &GetItemsByUserIdParams::nameStartsWith() const {
	return m_nameStartsWith;
}

void GetItemsByUserIdParams::setNameStartsWith(QString newNameStartsWith)  {
	m_nameStartsWith = newNameStartsWith;
}

bool GetItemsByUserIdParams::nameStartsWithNull() const {
	// Nullable: true
	// Type Nullable: true
	

	return m_nameStartsWith.isNull();
}

void GetItemsByUserIdParams::setNameStartsWithNull() {
	m_nameStartsWith.clear();
}


const QString &GetItemsByUserIdParams::nameStartsWithOrGreater() const {
	return m_nameStartsWithOrGreater;
}

void GetItemsByUserIdParams::setNameStartsWithOrGreater(QString newNameStartsWithOrGreater)  {
	m_nameStartsWithOrGreater = newNameStartsWithOrGreater;
}

bool GetItemsByUserIdParams::nameStartsWithOrGreaterNull() const {
	// Nullable: true
	// Type Nullable: true
	

	return m_nameStartsWithOrGreater.isNull();
}

void GetItemsByUserIdParams::setNameStartsWithOrGreaterNull() {
	m_nameStartsWithOrGreater.clear();
}


const QStringList &GetItemsByUserIdParams::officialRatings() const {
	return m_officialRatings;
}

void GetItemsByUserIdParams::setOfficialRatings(QStringList newOfficialRatings)  {
	m_officialRatings = newOfficialRatings;
}

bool GetItemsByUserIdParams::officialRatingsNull() const {
	// Nullable: true
	// Type Nullable: true
	

	return m_officialRatings.size() == 0;
}

void GetItemsByUserIdParams::setOfficialRatingsNull() {
	m_officialRatings.clear();
}


const QString &GetItemsByUserIdParams::parentId() const {
	return m_parentId;
}

void GetItemsByUserIdParams::setParentId(QString newParentId)  {
	m_parentId = newParentId;
}

bool GetItemsByUserIdParams::parentIdNull() const {
	// Nullable: true
	// Type Nullable: true
	

	return m_parentId.isNull();
}

void GetItemsByUserIdParams::setParentIdNull() {
	m_parentId.clear();
}


const qint32 &GetItemsByUserIdParams::parentIndexNumber() const {
	return m_parentIndexNumber.value();
}

void GetItemsByUserIdParams::setParentIndexNumber(qint32 newParentIndexNumber)  {
	m_parentIndexNumber = newParentIndexNumber;
}

bool GetItemsByUserIdParams::parentIndexNumberNull() const {
	// Nullable: true
	// Type Nullable: false
	

	return !m_parentIndexNumber.has_value();
}

void GetItemsByUserIdParams::setParentIndexNumberNull() {
	m_parentIndexNumber = std::nullopt;
}


const QString &GetItemsByUserIdParams::person() const {
	return m_person;
}

void GetItemsByUserIdParams::setPerson(QString newPerson)  {
	m_person = newPerson;
}

bool GetItemsByUserIdParams::personNull() const {
	// Nullable: true
	// Type Nullable: true
	

	return m_person.isNull();
}

void GetItemsByUserIdParams::setPersonNull() {
	m_person.clear();
}


const QStringList &GetItemsByUserIdParams::personIds() const {
	return m_personIds;
}

void GetItemsByUserIdParams::setPersonIds(QStringList newPersonIds)  {
	m_personIds = newPersonIds;
}

bool GetItemsByUserIdParams::personIdsNull() const {
	// Nullable: true
	// Type Nullable: true
	

	return m_personIds.size() == 0;
}

void GetItemsByUserIdParams::setPersonIdsNull() {
	m_personIds.clear();
}


const QStringList &GetItemsByUserIdParams::personTypes() const {
	return m_personTypes;
}

void GetItemsByUserIdParams::setPersonTypes(QStringList newPersonTypes)  {
	m_personTypes = newPersonTypes;
}

bool GetItemsByUserIdParams::personTypesNull() const {
	// Nullable: true
	// Type Nullable: true
	

	return m_personTypes.size() == 0;
}

void GetItemsByUserIdParams::setPersonTypesNull() {
	m_personTypes.clear();
}


const bool &GetItemsByUserIdParams::recursive() const {
	return m_recursive.value();
}

void GetItemsByUserIdParams::setRecursive(bool newRecursive)  {
	m_recursive = newRecursive;
}

bool GetItemsByUserIdParams::recursiveNull() const {
	// Nullable: true
	// Type Nullable: false
	

	return !m_recursive.has_value();
}

void GetItemsByUserIdParams::setRecursiveNull() {
	m_recursive = std::nullopt;
}


const QString &GetItemsByUserIdParams::searchTerm() const {
	return m_searchTerm;
}

void GetItemsByUserIdParams::setSearchTerm(QString newSearchTerm)  {
	m_searchTerm = newSearchTerm;
}

bool GetItemsByUserIdParams::searchTermNull() const {
	// Nullable: true
	// Type Nullable: true
	

	return m_searchTerm.isNull();
}

void GetItemsByUserIdParams::setSearchTermNull() {
	m_searchTerm.clear();
}


const QList<SeriesStatus> &GetItemsByUserIdParams::seriesStatus() const {
	return m_seriesStatus;
}

void GetItemsByUserIdParams::setSeriesStatus(QList<SeriesStatus> newSeriesStatus)  {
	m_seriesStatus = newSeriesStatus;
}

bool GetItemsByUserIdParams::seriesStatusNull() const {
	// Nullable: true
	// Type Nullable: true
	

	return m_seriesStatus.size() == 0;
}

void GetItemsByUserIdParams::setSeriesStatusNull() {
	m_seriesStatus.clear();
}


const QString &GetItemsByUserIdParams::sortBy() const {
	return m_sortBy;
}

void GetItemsByUserIdParams::setSortBy(QString newSortBy)  {
	m_sortBy = newSortBy;
}

bool GetItemsByUserIdParams::sortByNull() const {
	// Nullable: true
	// Type Nullable: true
	

	return m_sortBy.isNull();
}

void GetItemsByUserIdParams::setSortByNull() {
	m_sortBy.clear();
}


const QString &GetItemsByUserIdParams::sortOrder() const {
	return m_sortOrder;
}

void GetItemsByUserIdParams::setSortOrder(QString newSortOrder)  {
	m_sortOrder = newSortOrder;
}

bool GetItemsByUserIdParams::sortOrderNull() const {
	// Nullable: true
	// Type Nullable: true
	

	return m_sortOrder.isNull();
}

void GetItemsByUserIdParams::setSortOrderNull() {
	m_sortOrder.clear();
}


const qint32 &GetItemsByUserIdParams::startIndex() const {
	return m_startIndex.value();
}

void GetItemsByUserIdParams::setStartIndex(qint32 newStartIndex)  {
	m_startIndex = newStartIndex;
}

bool GetItemsByUserIdParams::startIndexNull() const {
	// Nullable: true
	// Type Nullable: false
	

	return !m_startIndex.has_value();
}

void GetItemsByUserIdParams::setStartIndexNull() {
	m_startIndex = std::nullopt;
}


const QStringList &GetItemsByUserIdParams::studioIds() const {
	return m_studioIds;
}

void GetItemsByUserIdParams::setStudioIds(QStringList newStudioIds)  {
	m_studioIds = newStudioIds;
}

bool GetItemsByUserIdParams::studioIdsNull() const {
	// Nullable: true
	// Type Nullable: true
	

	return m_studioIds.size() == 0;
}

void GetItemsByUserIdParams::setStudioIdsNull() {
	m_studioIds.clear();
}


const QStringList &GetItemsByUserIdParams::studios() const {
	return m_studios;
}

void GetItemsByUserIdParams::setStudios(QStringList newStudios)  {
	m_studios = newStudios;
}

bool GetItemsByUserIdParams::studiosNull() const {
	// Nullable: true
	// Type Nullable: true
	

	return m_studios.size() == 0;
}

void GetItemsByUserIdParams::setStudiosNull() {
	m_studios.clear();
}


const QStringList &GetItemsByUserIdParams::tags() const {
	return m_tags;
}

void GetItemsByUserIdParams::setTags(QStringList newTags)  {
	m_tags = newTags;
}

bool GetItemsByUserIdParams::tagsNull() const {
	// Nullable: true
	// Type Nullable: true
	

	return m_tags.size() == 0;
}

void GetItemsByUserIdParams::setTagsNull() {
	m_tags.clear();
}


const QList<VideoType> &GetItemsByUserIdParams::videoTypes() const {
	return m_videoTypes;
}

void GetItemsByUserIdParams::setVideoTypes(QList<VideoType> newVideoTypes)  {
	m_videoTypes = newVideoTypes;
}

bool GetItemsByUserIdParams::videoTypesNull() const {
	// Nullable: true
	// Type Nullable: true
	

	return m_videoTypes.size() == 0;
}

void GetItemsByUserIdParams::setVideoTypesNull() {
	m_videoTypes.clear();
}


const QList<qint32> &GetItemsByUserIdParams::years() const {
	return m_years;
}

void GetItemsByUserIdParams::setYears(QList<qint32> newYears)  {
	m_years = newYears;
}

bool GetItemsByUserIdParams::yearsNull() const {
	// Nullable: true
	// Type Nullable: true
	

	return m_years.size() == 0;
}

void GetItemsByUserIdParams::setYearsNull() {
	m_years.clear();
}




// GetKeysParams



// GetLatestChannelItemsParams

const QStringList &GetLatestChannelItemsParams::channelIds() const {
	return m_channelIds;
}

void GetLatestChannelItemsParams::setChannelIds(QStringList newChannelIds)  {
	m_channelIds = newChannelIds;
}

bool GetLatestChannelItemsParams::channelIdsNull() const {
	// Nullable: true
	// Type Nullable: true
	

	return m_channelIds.size() == 0;
}

void GetLatestChannelItemsParams::setChannelIdsNull() {
	m_channelIds.clear();
}


const QList<ItemFields> &GetLatestChannelItemsParams::fields() const {
	return m_fields;
}

void GetLatestChannelItemsParams::setFields(QList<ItemFields> newFields)  {
	m_fields = newFields;
}

bool GetLatestChannelItemsParams::fieldsNull() const {
	// Nullable: true
	// Type Nullable: true
	

	return m_fields.size() == 0;
}

void GetLatestChannelItemsParams::setFieldsNull() {
	m_fields.clear();
}


const QList<ItemFilter> &GetLatestChannelItemsParams::filters() const {
	return m_filters;
}

void GetLatestChannelItemsParams::setFilters(QList<ItemFilter> newFilters)  {
	m_filters = newFilters;
}

bool GetLatestChannelItemsParams::filtersNull() const {
	// Nullable: true
	// Type Nullable: true
	

	return m_filters.size() == 0;
}

void GetLatestChannelItemsParams::setFiltersNull() {
	m_filters.clear();
}


const qint32 &GetLatestChannelItemsParams::limit() const {
	return m_limit.value();
}

void GetLatestChannelItemsParams::setLimit(qint32 newLimit)  {
	m_limit = newLimit;
}

bool GetLatestChannelItemsParams::limitNull() const {
	// Nullable: true
	// Type Nullable: false
	

	return !m_limit.has_value();
}

void GetLatestChannelItemsParams::setLimitNull() {
	m_limit = std::nullopt;
}


const qint32 &GetLatestChannelItemsParams::startIndex() const {
	return m_startIndex.value();
}

void GetLatestChannelItemsParams::setStartIndex(qint32 newStartIndex)  {
	m_startIndex = newStartIndex;
}

bool GetLatestChannelItemsParams::startIndexNull() const {
	// Nullable: true
	// Type Nullable: false
	

	return !m_startIndex.has_value();
}

void GetLatestChannelItemsParams::setStartIndexNull() {
	m_startIndex = std::nullopt;
}


const QString &GetLatestChannelItemsParams::userId() const {
	return m_userId;
}

void GetLatestChannelItemsParams::setUserId(QString newUserId)  {
	m_userId = newUserId;
}

bool GetLatestChannelItemsParams::userIdNull() const {
	// Nullable: true
	// Type Nullable: true
	

	return m_userId.isNull();
}

void GetLatestChannelItemsParams::setUserIdNull() {
	m_userId.clear();
}




// GetLatestMediaParams

const QString &GetLatestMediaParams::userId() const {
	return m_userId;
}

void GetLatestMediaParams::setUserId(QString newUserId) {
	m_userId = newUserId;
}


const QList<ImageType> &GetLatestMediaParams::enableImageTypes() const {
	return m_enableImageTypes;
}

void GetLatestMediaParams::setEnableImageTypes(QList<ImageType> newEnableImageTypes)  {
	m_enableImageTypes = newEnableImageTypes;
}

bool GetLatestMediaParams::enableImageTypesNull() const {
	// Nullable: true
	// Type Nullable: true
	

	return m_enableImageTypes.size() == 0;
}

void GetLatestMediaParams::setEnableImageTypesNull() {
	m_enableImageTypes.clear();
}


const bool &GetLatestMediaParams::enableImages() const {
	return m_enableImages.value();
}

void GetLatestMediaParams::setEnableImages(bool newEnableImages)  {
	m_enableImages = newEnableImages;
}

bool GetLatestMediaParams::enableImagesNull() const {
	// Nullable: true
	// Type Nullable: false
	

	return !m_enableImages.has_value();
}

void GetLatestMediaParams::setEnableImagesNull() {
	m_enableImages = std::nullopt;
}


const bool &GetLatestMediaParams::enableUserData() const {
	return m_enableUserData.value();
}

void GetLatestMediaParams::setEnableUserData(bool newEnableUserData)  {
	m_enableUserData = newEnableUserData;
}

bool GetLatestMediaParams::enableUserDataNull() const {
	// Nullable: true
	// Type Nullable: false
	

	return !m_enableUserData.has_value();
}

void GetLatestMediaParams::setEnableUserDataNull() {
	m_enableUserData = std::nullopt;
}


const QList<ItemFields> &GetLatestMediaParams::fields() const {
	return m_fields;
}

void GetLatestMediaParams::setFields(QList<ItemFields> newFields)  {
	m_fields = newFields;
}

bool GetLatestMediaParams::fieldsNull() const {
	// Nullable: true
	// Type Nullable: true
	

	return m_fields.size() == 0;
}

void GetLatestMediaParams::setFieldsNull() {
	m_fields.clear();
}


const bool &GetLatestMediaParams::groupItems() const {
	return m_groupItems.value();
}

void GetLatestMediaParams::setGroupItems(bool newGroupItems)  {
	m_groupItems = newGroupItems;
}

bool GetLatestMediaParams::groupItemsNull() const {
	// Nullable: false
	// Type Nullable: false
	

	return !m_groupItems.has_value();
}

void GetLatestMediaParams::setGroupItemsNull() {
	m_groupItems = std::nullopt;
}


const qint32 &GetLatestMediaParams::imageTypeLimit() const {
	return m_imageTypeLimit.value();
}

void GetLatestMediaParams::setImageTypeLimit(qint32 newImageTypeLimit)  {
	m_imageTypeLimit = newImageTypeLimit;
}

bool GetLatestMediaParams::imageTypeLimitNull() const {
	// Nullable: true
	// Type Nullable: false
	

	return !m_imageTypeLimit.has_value();
}

void GetLatestMediaParams::setImageTypeLimitNull() {
	m_imageTypeLimit = std::nullopt;
}


const QStringList &GetLatestMediaParams::includeItemTypes() const {
	return m_includeItemTypes;
}

void GetLatestMediaParams::setIncludeItemTypes(QStringList newIncludeItemTypes)  {
	m_includeItemTypes = newIncludeItemTypes;
}

bool GetLatestMediaParams::includeItemTypesNull() const {
	// Nullable: true
	// Type Nullable: true
	

	return m_includeItemTypes.size() == 0;
}

void GetLatestMediaParams::setIncludeItemTypesNull() {
	m_includeItemTypes.clear();
}


const bool &GetLatestMediaParams::isPlayed() const {
	return m_isPlayed.value();
}

void GetLatestMediaParams::setIsPlayed(bool newIsPlayed)  {
	m_isPlayed = newIsPlayed;
}

bool GetLatestMediaParams::isPlayedNull() const {
	// Nullable: true
	// Type Nullable: false
	

	return !m_isPlayed.has_value();
}

void GetLatestMediaParams::setIsPlayedNull() {
	m_isPlayed = std::nullopt;
}


const qint32 &GetLatestMediaParams::limit() const {
	return m_limit.value();
}

void GetLatestMediaParams::setLimit(qint32 newLimit)  {
	m_limit = newLimit;
}

bool GetLatestMediaParams::limitNull() const {
	// Nullable: false
	// Type Nullable: false
	

	return !m_limit.has_value();
}

void GetLatestMediaParams::setLimitNull() {
	m_limit = std::nullopt;
}


const QString &GetLatestMediaParams::parentId() const {
	return m_parentId;
}

void GetLatestMediaParams::setParentId(QString newParentId)  {
	m_parentId = newParentId;
}

bool GetLatestMediaParams::parentIdNull() const {
	// Nullable: true
	// Type Nullable: true
	

	return m_parentId.isNull();
}

void GetLatestMediaParams::setParentIdNull() {
	m_parentId.clear();
}




// GetLibraryOptionsInfoParams

const bool &GetLibraryOptionsInfoParams::isNewLibrary() const {
	return m_isNewLibrary.value();
}

void GetLibraryOptionsInfoParams::setIsNewLibrary(bool newIsNewLibrary)  {
	m_isNewLibrary = newIsNewLibrary;
}

bool GetLibraryOptionsInfoParams::isNewLibraryNull() const {
	// Nullable: true
	// Type Nullable: false
	

	return !m_isNewLibrary.has_value();
}

void GetLibraryOptionsInfoParams::setIsNewLibraryNull() {
	m_isNewLibrary = std::nullopt;
}


const QString &GetLibraryOptionsInfoParams::libraryContentType() const {
	return m_libraryContentType;
}

void GetLibraryOptionsInfoParams::setLibraryContentType(QString newLibraryContentType)  {
	m_libraryContentType = newLibraryContentType;
}

bool GetLibraryOptionsInfoParams::libraryContentTypeNull() const {
	// Nullable: true
	// Type Nullable: true
	

	return m_libraryContentType.isNull();
}

void GetLibraryOptionsInfoParams::setLibraryContentTypeNull() {
	m_libraryContentType.clear();
}




// GetLineupsParams

const QString &GetLineupsParams::country() const {
	return m_country;
}

void GetLineupsParams::setCountry(QString newCountry)  {
	m_country = newCountry;
}

bool GetLineupsParams::countryNull() const {
	// Nullable: true
	// Type Nullable: true
	

	return m_country.isNull();
}

void GetLineupsParams::setCountryNull() {
	m_country.clear();
}


const QString &GetLineupsParams::jellyfinId() const {
	return m_jellyfinId;
}

void GetLineupsParams::setJellyfinId(QString newJellyfinId)  {
	m_jellyfinId = newJellyfinId;
}

bool GetLineupsParams::jellyfinIdNull() const {
	// Nullable: true
	// Type Nullable: true
	

	return m_jellyfinId.isNull();
}

void GetLineupsParams::setJellyfinIdNull() {
	m_jellyfinId.clear();
}


const QString &GetLineupsParams::location() const {
	return m_location;
}

void GetLineupsParams::setLocation(QString newLocation)  {
	m_location = newLocation;
}

bool GetLineupsParams::locationNull() const {
	// Nullable: true
	// Type Nullable: true
	

	return m_location.isNull();
}

void GetLineupsParams::setLocationNull() {
	m_location.clear();
}


const QString &GetLineupsParams::type() const {
	return m_type;
}

void GetLineupsParams::setType(QString newType)  {
	m_type = newType;
}

bool GetLineupsParams::typeNull() const {
	// Nullable: true
	// Type Nullable: true
	

	return m_type.isNull();
}

void GetLineupsParams::setTypeNull() {
	m_type.clear();
}




// GetLiveHlsStreamParams

const QString &GetLiveHlsStreamParams::itemId() const {
	return m_itemId;
}

void GetLiveHlsStreamParams::setItemId(QString newItemId) {
	m_itemId = newItemId;
}


const bool &GetLiveHlsStreamParams::allowAudioStreamCopy() const {
	return m_allowAudioStreamCopy.value();
}

void GetLiveHlsStreamParams::setAllowAudioStreamCopy(bool newAllowAudioStreamCopy)  {
	m_allowAudioStreamCopy = newAllowAudioStreamCopy;
}

bool GetLiveHlsStreamParams::allowAudioStreamCopyNull() const {
	// Nullable: true
	// Type Nullable: false
	

	return !m_allowAudioStreamCopy.has_value();
}

void GetLiveHlsStreamParams::setAllowAudioStreamCopyNull() {
	m_allowAudioStreamCopy = std::nullopt;
}


const bool &GetLiveHlsStreamParams::allowVideoStreamCopy() const {
	return m_allowVideoStreamCopy.value();
}

void GetLiveHlsStreamParams::setAllowVideoStreamCopy(bool newAllowVideoStreamCopy)  {
	m_allowVideoStreamCopy = newAllowVideoStreamCopy;
}

bool GetLiveHlsStreamParams::allowVideoStreamCopyNull() const {
	// Nullable: true
	// Type Nullable: false
	

	return !m_allowVideoStreamCopy.has_value();
}

void GetLiveHlsStreamParams::setAllowVideoStreamCopyNull() {
	m_allowVideoStreamCopy = std::nullopt;
}


const qint32 &GetLiveHlsStreamParams::audioBitRate() const {
	return m_audioBitRate.value();
}

void GetLiveHlsStreamParams::setAudioBitRate(qint32 newAudioBitRate)  {
	m_audioBitRate = newAudioBitRate;
}

bool GetLiveHlsStreamParams::audioBitRateNull() const {
	// Nullable: true
	// Type Nullable: false
	

	return !m_audioBitRate.has_value();
}

void GetLiveHlsStreamParams::setAudioBitRateNull() {
	m_audioBitRate = std::nullopt;
}


const qint32 &GetLiveHlsStreamParams::audioChannels() const {
	return m_audioChannels.value();
}

void GetLiveHlsStreamParams::setAudioChannels(qint32 newAudioChannels)  {
	m_audioChannels = newAudioChannels;
}

bool GetLiveHlsStreamParams::audioChannelsNull() const {
	// Nullable: true
	// Type Nullable: false
	

	return !m_audioChannels.has_value();
}

void GetLiveHlsStreamParams::setAudioChannelsNull() {
	m_audioChannels = std::nullopt;
}


const QString &GetLiveHlsStreamParams::audioCodec() const {
	return m_audioCodec;
}

void GetLiveHlsStreamParams::setAudioCodec(QString newAudioCodec)  {
	m_audioCodec = newAudioCodec;
}

bool GetLiveHlsStreamParams::audioCodecNull() const {
	// Nullable: true
	// Type Nullable: true
	

	return m_audioCodec.isNull();
}

void GetLiveHlsStreamParams::setAudioCodecNull() {
	m_audioCodec.clear();
}


const qint32 &GetLiveHlsStreamParams::audioSampleRate() const {
	return m_audioSampleRate.value();
}

void GetLiveHlsStreamParams::setAudioSampleRate(qint32 newAudioSampleRate)  {
	m_audioSampleRate = newAudioSampleRate;
}

bool GetLiveHlsStreamParams::audioSampleRateNull() const {
	// Nullable: true
	// Type Nullable: false
	

	return !m_audioSampleRate.has_value();
}

void GetLiveHlsStreamParams::setAudioSampleRateNull() {
	m_audioSampleRate = std::nullopt;
}


const qint32 &GetLiveHlsStreamParams::audioStreamIndex() const {
	return m_audioStreamIndex.value();
}

void GetLiveHlsStreamParams::setAudioStreamIndex(qint32 newAudioStreamIndex)  {
	m_audioStreamIndex = newAudioStreamIndex;
}

bool GetLiveHlsStreamParams::audioStreamIndexNull() const {
	// Nullable: true
	// Type Nullable: false
	

	return !m_audioStreamIndex.has_value();
}

void GetLiveHlsStreamParams::setAudioStreamIndexNull() {
	m_audioStreamIndex = std::nullopt;
}


const bool &GetLiveHlsStreamParams::breakOnNonKeyFrames() const {
	return m_breakOnNonKeyFrames.value();
}

void GetLiveHlsStreamParams::setBreakOnNonKeyFrames(bool newBreakOnNonKeyFrames)  {
	m_breakOnNonKeyFrames = newBreakOnNonKeyFrames;
}

bool GetLiveHlsStreamParams::breakOnNonKeyFramesNull() const {
	// Nullable: true
	// Type Nullable: false
	

	return !m_breakOnNonKeyFrames.has_value();
}

void GetLiveHlsStreamParams::setBreakOnNonKeyFramesNull() {
	m_breakOnNonKeyFrames = std::nullopt;
}


const QString &GetLiveHlsStreamParams::container() const {
	return m_container;
}

void GetLiveHlsStreamParams::setContainer(QString newContainer)  {
	m_container = newContainer;
}

bool GetLiveHlsStreamParams::containerNull() const {
	// Nullable: true
	// Type Nullable: true
	

	return m_container.isNull();
}

void GetLiveHlsStreamParams::setContainerNull() {
	m_container.clear();
}


const EncodingContext &GetLiveHlsStreamParams::context() const {
	return m_context;
}

void GetLiveHlsStreamParams::setContext(EncodingContext newContext)  {
	m_context = newContext;
}

bool GetLiveHlsStreamParams::contextNull() const {
	// Nullable: true
	// Type Nullable: true
	

	return m_context== EncodingContext::EnumNotSet;
}

void GetLiveHlsStreamParams::setContextNull() {
	m_context= EncodingContext::EnumNotSet;
}


const bool &GetLiveHlsStreamParams::copyTimestamps() const {
	return m_copyTimestamps.value();
}

void GetLiveHlsStreamParams::setCopyTimestamps(bool newCopyTimestamps)  {
	m_copyTimestamps = newCopyTimestamps;
}

bool GetLiveHlsStreamParams::copyTimestampsNull() const {
	// Nullable: true
	// Type Nullable: false
	

	return !m_copyTimestamps.has_value();
}

void GetLiveHlsStreamParams::setCopyTimestampsNull() {
	m_copyTimestamps = std::nullopt;
}


const qint32 &GetLiveHlsStreamParams::cpuCoreLimit() const {
	return m_cpuCoreLimit.value();
}

void GetLiveHlsStreamParams::setCpuCoreLimit(qint32 newCpuCoreLimit)  {
	m_cpuCoreLimit = newCpuCoreLimit;
}

bool GetLiveHlsStreamParams::cpuCoreLimitNull() const {
	// Nullable: true
	// Type Nullable: false
	

	return !m_cpuCoreLimit.has_value();
}

void GetLiveHlsStreamParams::setCpuCoreLimitNull() {
	m_cpuCoreLimit = std::nullopt;
}


const bool &GetLiveHlsStreamParams::deInterlace() const {
	return m_deInterlace.value();
}

void GetLiveHlsStreamParams::setDeInterlace(bool newDeInterlace)  {
	m_deInterlace = newDeInterlace;
}

bool GetLiveHlsStreamParams::deInterlaceNull() const {
	// Nullable: true
	// Type Nullable: false
	

	return !m_deInterlace.has_value();
}

void GetLiveHlsStreamParams::setDeInterlaceNull() {
	m_deInterlace = std::nullopt;
}


const QString &GetLiveHlsStreamParams::deviceId() const {
	return m_deviceId;
}

void GetLiveHlsStreamParams::setDeviceId(QString newDeviceId)  {
	m_deviceId = newDeviceId;
}

bool GetLiveHlsStreamParams::deviceIdNull() const {
	// Nullable: true
	// Type Nullable: true
	

	return m_deviceId.isNull();
}

void GetLiveHlsStreamParams::setDeviceIdNull() {
	m_deviceId.clear();
}


const QString &GetLiveHlsStreamParams::deviceProfileId() const {
	return m_deviceProfileId;
}

void GetLiveHlsStreamParams::setDeviceProfileId(QString newDeviceProfileId)  {
	m_deviceProfileId = newDeviceProfileId;
}

bool GetLiveHlsStreamParams::deviceProfileIdNull() const {
	// Nullable: true
	// Type Nullable: true
	

	return m_deviceProfileId.isNull();
}

void GetLiveHlsStreamParams::setDeviceProfileIdNull() {
	m_deviceProfileId.clear();
}


const bool &GetLiveHlsStreamParams::enableAutoStreamCopy() const {
	return m_enableAutoStreamCopy.value();
}

void GetLiveHlsStreamParams::setEnableAutoStreamCopy(bool newEnableAutoStreamCopy)  {
	m_enableAutoStreamCopy = newEnableAutoStreamCopy;
}

bool GetLiveHlsStreamParams::enableAutoStreamCopyNull() const {
	// Nullable: true
	// Type Nullable: false
	

	return !m_enableAutoStreamCopy.has_value();
}

void GetLiveHlsStreamParams::setEnableAutoStreamCopyNull() {
	m_enableAutoStreamCopy = std::nullopt;
}


const bool &GetLiveHlsStreamParams::enableMpegtsM2TsMode() const {
	return m_enableMpegtsM2TsMode.value();
}

void GetLiveHlsStreamParams::setEnableMpegtsM2TsMode(bool newEnableMpegtsM2TsMode)  {
	m_enableMpegtsM2TsMode = newEnableMpegtsM2TsMode;
}

bool GetLiveHlsStreamParams::enableMpegtsM2TsModeNull() const {
	// Nullable: true
	// Type Nullable: false
	

	return !m_enableMpegtsM2TsMode.has_value();
}

void GetLiveHlsStreamParams::setEnableMpegtsM2TsModeNull() {
	m_enableMpegtsM2TsMode = std::nullopt;
}


const bool &GetLiveHlsStreamParams::enableSubtitlesInManifest() const {
	return m_enableSubtitlesInManifest.value();
}

void GetLiveHlsStreamParams::setEnableSubtitlesInManifest(bool newEnableSubtitlesInManifest)  {
	m_enableSubtitlesInManifest = newEnableSubtitlesInManifest;
}

bool GetLiveHlsStreamParams::enableSubtitlesInManifestNull() const {
	// Nullable: true
	// Type Nullable: false
	

	return !m_enableSubtitlesInManifest.has_value();
}

void GetLiveHlsStreamParams::setEnableSubtitlesInManifestNull() {
	m_enableSubtitlesInManifest = std::nullopt;
}


const float &GetLiveHlsStreamParams::framerate() const {
	return m_framerate.value();
}

void GetLiveHlsStreamParams::setFramerate(float newFramerate)  {
	m_framerate = newFramerate;
}

bool GetLiveHlsStreamParams::framerateNull() const {
	// Nullable: true
	// Type Nullable: false
	

	return !m_framerate.has_value();
}

void GetLiveHlsStreamParams::setFramerateNull() {
	m_framerate = std::nullopt;
}


const qint32 &GetLiveHlsStreamParams::height() const {
	return m_height.value();
}

void GetLiveHlsStreamParams::setHeight(qint32 newHeight)  {
	m_height = newHeight;
}

bool GetLiveHlsStreamParams::heightNull() const {
	// Nullable: true
	// Type Nullable: false
	

	return !m_height.has_value();
}

void GetLiveHlsStreamParams::setHeightNull() {
	m_height = std::nullopt;
}


const QString &GetLiveHlsStreamParams::level() const {
	return m_level;
}

void GetLiveHlsStreamParams::setLevel(QString newLevel)  {
	m_level = newLevel;
}

bool GetLiveHlsStreamParams::levelNull() const {
	// Nullable: true
	// Type Nullable: true
	

	return m_level.isNull();
}

void GetLiveHlsStreamParams::setLevelNull() {
	m_level.clear();
}


const QString &GetLiveHlsStreamParams::liveStreamId() const {
	return m_liveStreamId;
}

void GetLiveHlsStreamParams::setLiveStreamId(QString newLiveStreamId)  {
	m_liveStreamId = newLiveStreamId;
}

bool GetLiveHlsStreamParams::liveStreamIdNull() const {
	// Nullable: true
	// Type Nullable: true
	

	return m_liveStreamId.isNull();
}

void GetLiveHlsStreamParams::setLiveStreamIdNull() {
	m_liveStreamId.clear();
}


const qint32 &GetLiveHlsStreamParams::maxAudioBitDepth() const {
	return m_maxAudioBitDepth.value();
}

void GetLiveHlsStreamParams::setMaxAudioBitDepth(qint32 newMaxAudioBitDepth)  {
	m_maxAudioBitDepth = newMaxAudioBitDepth;
}

bool GetLiveHlsStreamParams::maxAudioBitDepthNull() const {
	// Nullable: true
	// Type Nullable: false
	

	return !m_maxAudioBitDepth.has_value();
}

void GetLiveHlsStreamParams::setMaxAudioBitDepthNull() {
	m_maxAudioBitDepth = std::nullopt;
}


const qint32 &GetLiveHlsStreamParams::maxAudioChannels() const {
	return m_maxAudioChannels.value();
}

void GetLiveHlsStreamParams::setMaxAudioChannels(qint32 newMaxAudioChannels)  {
	m_maxAudioChannels = newMaxAudioChannels;
}

bool GetLiveHlsStreamParams::maxAudioChannelsNull() const {
	// Nullable: true
	// Type Nullable: false
	

	return !m_maxAudioChannels.has_value();
}

void GetLiveHlsStreamParams::setMaxAudioChannelsNull() {
	m_maxAudioChannels = std::nullopt;
}


const float &GetLiveHlsStreamParams::maxFramerate() const {
	return m_maxFramerate.value();
}

void GetLiveHlsStreamParams::setMaxFramerate(float newMaxFramerate)  {
	m_maxFramerate = newMaxFramerate;
}

bool GetLiveHlsStreamParams::maxFramerateNull() const {
	// Nullable: true
	// Type Nullable: false
	

	return !m_maxFramerate.has_value();
}

void GetLiveHlsStreamParams::setMaxFramerateNull() {
	m_maxFramerate = std::nullopt;
}


const qint32 &GetLiveHlsStreamParams::maxHeight() const {
	return m_maxHeight.value();
}

void GetLiveHlsStreamParams::setMaxHeight(qint32 newMaxHeight)  {
	m_maxHeight = newMaxHeight;
}

bool GetLiveHlsStreamParams::maxHeightNull() const {
	// Nullable: true
	// Type Nullable: false
	

	return !m_maxHeight.has_value();
}

void GetLiveHlsStreamParams::setMaxHeightNull() {
	m_maxHeight = std::nullopt;
}


const qint32 &GetLiveHlsStreamParams::maxRefFrames() const {
	return m_maxRefFrames.value();
}

void GetLiveHlsStreamParams::setMaxRefFrames(qint32 newMaxRefFrames)  {
	m_maxRefFrames = newMaxRefFrames;
}

bool GetLiveHlsStreamParams::maxRefFramesNull() const {
	// Nullable: true
	// Type Nullable: false
	

	return !m_maxRefFrames.has_value();
}

void GetLiveHlsStreamParams::setMaxRefFramesNull() {
	m_maxRefFrames = std::nullopt;
}


const qint32 &GetLiveHlsStreamParams::maxVideoBitDepth() const {
	return m_maxVideoBitDepth.value();
}

void GetLiveHlsStreamParams::setMaxVideoBitDepth(qint32 newMaxVideoBitDepth)  {
	m_maxVideoBitDepth = newMaxVideoBitDepth;
}

bool GetLiveHlsStreamParams::maxVideoBitDepthNull() const {
	// Nullable: true
	// Type Nullable: false
	

	return !m_maxVideoBitDepth.has_value();
}

void GetLiveHlsStreamParams::setMaxVideoBitDepthNull() {
	m_maxVideoBitDepth = std::nullopt;
}


const qint32 &GetLiveHlsStreamParams::maxWidth() const {
	return m_maxWidth.value();
}

void GetLiveHlsStreamParams::setMaxWidth(qint32 newMaxWidth)  {
	m_maxWidth = newMaxWidth;
}

bool GetLiveHlsStreamParams::maxWidthNull() const {
	// Nullable: true
	// Type Nullable: false
	

	return !m_maxWidth.has_value();
}

void GetLiveHlsStreamParams::setMaxWidthNull() {
	m_maxWidth = std::nullopt;
}


const QString &GetLiveHlsStreamParams::mediaSourceId() const {
	return m_mediaSourceId;
}

void GetLiveHlsStreamParams::setMediaSourceId(QString newMediaSourceId)  {
	m_mediaSourceId = newMediaSourceId;
}

bool GetLiveHlsStreamParams::mediaSourceIdNull() const {
	// Nullable: true
	// Type Nullable: true
	

	return m_mediaSourceId.isNull();
}

void GetLiveHlsStreamParams::setMediaSourceIdNull() {
	m_mediaSourceId.clear();
}


const qint32 &GetLiveHlsStreamParams::minSegments() const {
	return m_minSegments.value();
}

void GetLiveHlsStreamParams::setMinSegments(qint32 newMinSegments)  {
	m_minSegments = newMinSegments;
}

bool GetLiveHlsStreamParams::minSegmentsNull() const {
	// Nullable: true
	// Type Nullable: false
	

	return !m_minSegments.has_value();
}

void GetLiveHlsStreamParams::setMinSegmentsNull() {
	m_minSegments = std::nullopt;
}


const QString &GetLiveHlsStreamParams::params() const {
	return m_params;
}

void GetLiveHlsStreamParams::setParams(QString newParams)  {
	m_params = newParams;
}

bool GetLiveHlsStreamParams::paramsNull() const {
	// Nullable: true
	// Type Nullable: true
	

	return m_params.isNull();
}

void GetLiveHlsStreamParams::setParamsNull() {
	m_params.clear();
}


const QString &GetLiveHlsStreamParams::playSessionId() const {
	return m_playSessionId;
}

void GetLiveHlsStreamParams::setPlaySessionId(QString newPlaySessionId)  {
	m_playSessionId = newPlaySessionId;
}

bool GetLiveHlsStreamParams::playSessionIdNull() const {
	// Nullable: true
	// Type Nullable: true
	

	return m_playSessionId.isNull();
}

void GetLiveHlsStreamParams::setPlaySessionIdNull() {
	m_playSessionId.clear();
}


const QString &GetLiveHlsStreamParams::profile() const {
	return m_profile;
}

void GetLiveHlsStreamParams::setProfile(QString newProfile)  {
	m_profile = newProfile;
}

bool GetLiveHlsStreamParams::profileNull() const {
	// Nullable: true
	// Type Nullable: true
	

	return m_profile.isNull();
}

void GetLiveHlsStreamParams::setProfileNull() {
	m_profile.clear();
}


const bool &GetLiveHlsStreamParams::requireAvc() const {
	return m_requireAvc.value();
}

void GetLiveHlsStreamParams::setRequireAvc(bool newRequireAvc)  {
	m_requireAvc = newRequireAvc;
}

bool GetLiveHlsStreamParams::requireAvcNull() const {
	// Nullable: true
	// Type Nullable: false
	

	return !m_requireAvc.has_value();
}

void GetLiveHlsStreamParams::setRequireAvcNull() {
	m_requireAvc = std::nullopt;
}


const bool &GetLiveHlsStreamParams::requireNonAnamorphic() const {
	return m_requireNonAnamorphic.value();
}

void GetLiveHlsStreamParams::setRequireNonAnamorphic(bool newRequireNonAnamorphic)  {
	m_requireNonAnamorphic = newRequireNonAnamorphic;
}

bool GetLiveHlsStreamParams::requireNonAnamorphicNull() const {
	// Nullable: true
	// Type Nullable: false
	

	return !m_requireNonAnamorphic.has_value();
}

void GetLiveHlsStreamParams::setRequireNonAnamorphicNull() {
	m_requireNonAnamorphic = std::nullopt;
}


const QString &GetLiveHlsStreamParams::segmentContainer() const {
	return m_segmentContainer;
}

void GetLiveHlsStreamParams::setSegmentContainer(QString newSegmentContainer)  {
	m_segmentContainer = newSegmentContainer;
}

bool GetLiveHlsStreamParams::segmentContainerNull() const {
	// Nullable: true
	// Type Nullable: true
	

	return m_segmentContainer.isNull();
}

void GetLiveHlsStreamParams::setSegmentContainerNull() {
	m_segmentContainer.clear();
}


const qint32 &GetLiveHlsStreamParams::segmentLength() const {
	return m_segmentLength.value();
}

void GetLiveHlsStreamParams::setSegmentLength(qint32 newSegmentLength)  {
	m_segmentLength = newSegmentLength;
}

bool GetLiveHlsStreamParams::segmentLengthNull() const {
	// Nullable: true
	// Type Nullable: false
	

	return !m_segmentLength.has_value();
}

void GetLiveHlsStreamParams::setSegmentLengthNull() {
	m_segmentLength = std::nullopt;
}


const qint64 &GetLiveHlsStreamParams::startTimeTicks() const {
	return m_startTimeTicks.value();
}

void GetLiveHlsStreamParams::setStartTimeTicks(qint64 newStartTimeTicks)  {
	m_startTimeTicks = newStartTimeTicks;
}

bool GetLiveHlsStreamParams::startTimeTicksNull() const {
	// Nullable: true
	// Type Nullable: false
	

	return !m_startTimeTicks.has_value();
}

void GetLiveHlsStreamParams::setStartTimeTicksNull() {
	m_startTimeTicks = std::nullopt;
}


const bool &GetLiveHlsStreamParams::staticStreaming() const {
	return m_staticStreaming.value();
}

void GetLiveHlsStreamParams::setStaticStreaming(bool newStaticStreaming)  {
	m_staticStreaming = newStaticStreaming;
}

bool GetLiveHlsStreamParams::staticStreamingNull() const {
	// Nullable: true
	// Type Nullable: false
	

	return !m_staticStreaming.has_value();
}

void GetLiveHlsStreamParams::setStaticStreamingNull() {
	m_staticStreaming = std::nullopt;
}


const QJsonObject &GetLiveHlsStreamParams::streamOptions() const {
	return m_streamOptions;
}

void GetLiveHlsStreamParams::setStreamOptions(QJsonObject newStreamOptions)  {
	m_streamOptions = newStreamOptions;
}

bool GetLiveHlsStreamParams::streamOptionsNull() const {
	// Nullable: true
	// Type Nullable: true
	

	return m_streamOptions.isEmpty();
}

void GetLiveHlsStreamParams::setStreamOptionsNull() {
	m_streamOptions= QJsonObject();
}


const QString &GetLiveHlsStreamParams::subtitleCodec() const {
	return m_subtitleCodec;
}

void GetLiveHlsStreamParams::setSubtitleCodec(QString newSubtitleCodec)  {
	m_subtitleCodec = newSubtitleCodec;
}

bool GetLiveHlsStreamParams::subtitleCodecNull() const {
	// Nullable: true
	// Type Nullable: true
	

	return m_subtitleCodec.isNull();
}

void GetLiveHlsStreamParams::setSubtitleCodecNull() {
	m_subtitleCodec.clear();
}


const SubtitleDeliveryMethod &GetLiveHlsStreamParams::subtitleMethod() const {
	return m_subtitleMethod;
}

void GetLiveHlsStreamParams::setSubtitleMethod(SubtitleDeliveryMethod newSubtitleMethod)  {
	m_subtitleMethod = newSubtitleMethod;
}

bool GetLiveHlsStreamParams::subtitleMethodNull() const {
	// Nullable: true
	// Type Nullable: true
	

	return m_subtitleMethod== SubtitleDeliveryMethod::EnumNotSet;
}

void GetLiveHlsStreamParams::setSubtitleMethodNull() {
	m_subtitleMethod= SubtitleDeliveryMethod::EnumNotSet;
}


const qint32 &GetLiveHlsStreamParams::subtitleStreamIndex() const {
	return m_subtitleStreamIndex.value();
}

void GetLiveHlsStreamParams::setSubtitleStreamIndex(qint32 newSubtitleStreamIndex)  {
	m_subtitleStreamIndex = newSubtitleStreamIndex;
}

bool GetLiveHlsStreamParams::subtitleStreamIndexNull() const {
	// Nullable: true
	// Type Nullable: false
	

	return !m_subtitleStreamIndex.has_value();
}

void GetLiveHlsStreamParams::setSubtitleStreamIndexNull() {
	m_subtitleStreamIndex = std::nullopt;
}


const QString &GetLiveHlsStreamParams::tag() const {
	return m_tag;
}

void GetLiveHlsStreamParams::setTag(QString newTag)  {
	m_tag = newTag;
}

bool GetLiveHlsStreamParams::tagNull() const {
	// Nullable: true
	// Type Nullable: true
	

	return m_tag.isNull();
}

void GetLiveHlsStreamParams::setTagNull() {
	m_tag.clear();
}


const QString &GetLiveHlsStreamParams::transcodeReasons() const {
	return m_transcodeReasons;
}

void GetLiveHlsStreamParams::setTranscodeReasons(QString newTranscodeReasons)  {
	m_transcodeReasons = newTranscodeReasons;
}

bool GetLiveHlsStreamParams::transcodeReasonsNull() const {
	// Nullable: true
	// Type Nullable: true
	

	return m_transcodeReasons.isNull();
}

void GetLiveHlsStreamParams::setTranscodeReasonsNull() {
	m_transcodeReasons.clear();
}


const qint32 &GetLiveHlsStreamParams::transcodingMaxAudioChannels() const {
	return m_transcodingMaxAudioChannels.value();
}

void GetLiveHlsStreamParams::setTranscodingMaxAudioChannels(qint32 newTranscodingMaxAudioChannels)  {
	m_transcodingMaxAudioChannels = newTranscodingMaxAudioChannels;
}

bool GetLiveHlsStreamParams::transcodingMaxAudioChannelsNull() const {
	// Nullable: true
	// Type Nullable: false
	

	return !m_transcodingMaxAudioChannels.has_value();
}

void GetLiveHlsStreamParams::setTranscodingMaxAudioChannelsNull() {
	m_transcodingMaxAudioChannels = std::nullopt;
}


const qint32 &GetLiveHlsStreamParams::videoBitRate() const {
	return m_videoBitRate.value();
}

void GetLiveHlsStreamParams::setVideoBitRate(qint32 newVideoBitRate)  {
	m_videoBitRate = newVideoBitRate;
}

bool GetLiveHlsStreamParams::videoBitRateNull() const {
	// Nullable: true
	// Type Nullable: false
	

	return !m_videoBitRate.has_value();
}

void GetLiveHlsStreamParams::setVideoBitRateNull() {
	m_videoBitRate = std::nullopt;
}


const QString &GetLiveHlsStreamParams::videoCodec() const {
	return m_videoCodec;
}

void GetLiveHlsStreamParams::setVideoCodec(QString newVideoCodec)  {
	m_videoCodec = newVideoCodec;
}

bool GetLiveHlsStreamParams::videoCodecNull() const {
	// Nullable: true
	// Type Nullable: true
	

	return m_videoCodec.isNull();
}

void GetLiveHlsStreamParams::setVideoCodecNull() {
	m_videoCodec.clear();
}


const qint32 &GetLiveHlsStreamParams::videoStreamIndex() const {
	return m_videoStreamIndex.value();
}

void GetLiveHlsStreamParams::setVideoStreamIndex(qint32 newVideoStreamIndex)  {
	m_videoStreamIndex = newVideoStreamIndex;
}

bool GetLiveHlsStreamParams::videoStreamIndexNull() const {
	// Nullable: true
	// Type Nullable: false
	

	return !m_videoStreamIndex.has_value();
}

void GetLiveHlsStreamParams::setVideoStreamIndexNull() {
	m_videoStreamIndex = std::nullopt;
}


const qint32 &GetLiveHlsStreamParams::width() const {
	return m_width.value();
}

void GetLiveHlsStreamParams::setWidth(qint32 newWidth)  {
	m_width = newWidth;
}

bool GetLiveHlsStreamParams::widthNull() const {
	// Nullable: true
	// Type Nullable: false
	

	return !m_width.has_value();
}

void GetLiveHlsStreamParams::setWidthNull() {
	m_width = std::nullopt;
}




// GetLiveRecordingFileParams

const QString &GetLiveRecordingFileParams::recordingId() const {
	return m_recordingId;
}

void GetLiveRecordingFileParams::setRecordingId(QString newRecordingId) {
	m_recordingId = newRecordingId;
}




// GetLiveStreamFileParams

const QString &GetLiveStreamFileParams::container() const {
	return m_container;
}

void GetLiveStreamFileParams::setContainer(QString newContainer) {
	m_container = newContainer;
}


const QString &GetLiveStreamFileParams::streamId() const {
	return m_streamId;
}

void GetLiveStreamFileParams::setStreamId(QString newStreamId) {
	m_streamId = newStreamId;
}




// GetLiveTvChannelsParams

const bool &GetLiveTvChannelsParams::addCurrentProgram() const {
	return m_addCurrentProgram.value();
}

void GetLiveTvChannelsParams::setAddCurrentProgram(bool newAddCurrentProgram)  {
	m_addCurrentProgram = newAddCurrentProgram;
}

bool GetLiveTvChannelsParams::addCurrentProgramNull() const {
	// Nullable: false
	// Type Nullable: false
	

	return !m_addCurrentProgram.has_value();
}

void GetLiveTvChannelsParams::setAddCurrentProgramNull() {
	m_addCurrentProgram = std::nullopt;
}


const bool &GetLiveTvChannelsParams::enableFavoriteSorting() const {
	return m_enableFavoriteSorting.value();
}

void GetLiveTvChannelsParams::setEnableFavoriteSorting(bool newEnableFavoriteSorting)  {
	m_enableFavoriteSorting = newEnableFavoriteSorting;
}

bool GetLiveTvChannelsParams::enableFavoriteSortingNull() const {
	// Nullable: false
	// Type Nullable: false
	

	return !m_enableFavoriteSorting.has_value();
}

void GetLiveTvChannelsParams::setEnableFavoriteSortingNull() {
	m_enableFavoriteSorting = std::nullopt;
}


const QList<ImageType> &GetLiveTvChannelsParams::enableImageTypes() const {
	return m_enableImageTypes;
}

void GetLiveTvChannelsParams::setEnableImageTypes(QList<ImageType> newEnableImageTypes)  {
	m_enableImageTypes = newEnableImageTypes;
}

bool GetLiveTvChannelsParams::enableImageTypesNull() const {
	// Nullable: true
	// Type Nullable: true
	

	return m_enableImageTypes.size() == 0;
}

void GetLiveTvChannelsParams::setEnableImageTypesNull() {
	m_enableImageTypes.clear();
}


const bool &GetLiveTvChannelsParams::enableImages() const {
	return m_enableImages.value();
}

void GetLiveTvChannelsParams::setEnableImages(bool newEnableImages)  {
	m_enableImages = newEnableImages;
}

bool GetLiveTvChannelsParams::enableImagesNull() const {
	// Nullable: true
	// Type Nullable: false
	

	return !m_enableImages.has_value();
}

void GetLiveTvChannelsParams::setEnableImagesNull() {
	m_enableImages = std::nullopt;
}


const bool &GetLiveTvChannelsParams::enableUserData() const {
	return m_enableUserData.value();
}

void GetLiveTvChannelsParams::setEnableUserData(bool newEnableUserData)  {
	m_enableUserData = newEnableUserData;
}

bool GetLiveTvChannelsParams::enableUserDataNull() const {
	// Nullable: true
	// Type Nullable: false
	

	return !m_enableUserData.has_value();
}

void GetLiveTvChannelsParams::setEnableUserDataNull() {
	m_enableUserData = std::nullopt;
}


const QList<ItemFields> &GetLiveTvChannelsParams::fields() const {
	return m_fields;
}

void GetLiveTvChannelsParams::setFields(QList<ItemFields> newFields)  {
	m_fields = newFields;
}

bool GetLiveTvChannelsParams::fieldsNull() const {
	// Nullable: true
	// Type Nullable: true
	

	return m_fields.size() == 0;
}

void GetLiveTvChannelsParams::setFieldsNull() {
	m_fields.clear();
}


const qint32 &GetLiveTvChannelsParams::imageTypeLimit() const {
	return m_imageTypeLimit.value();
}

void GetLiveTvChannelsParams::setImageTypeLimit(qint32 newImageTypeLimit)  {
	m_imageTypeLimit = newImageTypeLimit;
}

bool GetLiveTvChannelsParams::imageTypeLimitNull() const {
	// Nullable: true
	// Type Nullable: false
	

	return !m_imageTypeLimit.has_value();
}

void GetLiveTvChannelsParams::setImageTypeLimitNull() {
	m_imageTypeLimit = std::nullopt;
}


const bool &GetLiveTvChannelsParams::isDisliked() const {
	return m_isDisliked.value();
}

void GetLiveTvChannelsParams::setIsDisliked(bool newIsDisliked)  {
	m_isDisliked = newIsDisliked;
}

bool GetLiveTvChannelsParams::isDislikedNull() const {
	// Nullable: true
	// Type Nullable: false
	

	return !m_isDisliked.has_value();
}

void GetLiveTvChannelsParams::setIsDislikedNull() {
	m_isDisliked = std::nullopt;
}


const bool &GetLiveTvChannelsParams::isFavorite() const {
	return m_isFavorite.value();
}

void GetLiveTvChannelsParams::setIsFavorite(bool newIsFavorite)  {
	m_isFavorite = newIsFavorite;
}

bool GetLiveTvChannelsParams::isFavoriteNull() const {
	// Nullable: true
	// Type Nullable: false
	

	return !m_isFavorite.has_value();
}

void GetLiveTvChannelsParams::setIsFavoriteNull() {
	m_isFavorite = std::nullopt;
}


const bool &GetLiveTvChannelsParams::isKids() const {
	return m_isKids.value();
}

void GetLiveTvChannelsParams::setIsKids(bool newIsKids)  {
	m_isKids = newIsKids;
}

bool GetLiveTvChannelsParams::isKidsNull() const {
	// Nullable: true
	// Type Nullable: false
	

	return !m_isKids.has_value();
}

void GetLiveTvChannelsParams::setIsKidsNull() {
	m_isKids = std::nullopt;
}


const bool &GetLiveTvChannelsParams::isLiked() const {
	return m_isLiked.value();
}

void GetLiveTvChannelsParams::setIsLiked(bool newIsLiked)  {
	m_isLiked = newIsLiked;
}

bool GetLiveTvChannelsParams::isLikedNull() const {
	// Nullable: true
	// Type Nullable: false
	

	return !m_isLiked.has_value();
}

void GetLiveTvChannelsParams::setIsLikedNull() {
	m_isLiked = std::nullopt;
}


const bool &GetLiveTvChannelsParams::isMovie() const {
	return m_isMovie.value();
}

void GetLiveTvChannelsParams::setIsMovie(bool newIsMovie)  {
	m_isMovie = newIsMovie;
}

bool GetLiveTvChannelsParams::isMovieNull() const {
	// Nullable: true
	// Type Nullable: false
	

	return !m_isMovie.has_value();
}

void GetLiveTvChannelsParams::setIsMovieNull() {
	m_isMovie = std::nullopt;
}


const bool &GetLiveTvChannelsParams::isNews() const {
	return m_isNews.value();
}

void GetLiveTvChannelsParams::setIsNews(bool newIsNews)  {
	m_isNews = newIsNews;
}

bool GetLiveTvChannelsParams::isNewsNull() const {
	// Nullable: true
	// Type Nullable: false
	

	return !m_isNews.has_value();
}

void GetLiveTvChannelsParams::setIsNewsNull() {
	m_isNews = std::nullopt;
}


const bool &GetLiveTvChannelsParams::isSeries() const {
	return m_isSeries.value();
}

void GetLiveTvChannelsParams::setIsSeries(bool newIsSeries)  {
	m_isSeries = newIsSeries;
}

bool GetLiveTvChannelsParams::isSeriesNull() const {
	// Nullable: true
	// Type Nullable: false
	

	return !m_isSeries.has_value();
}

void GetLiveTvChannelsParams::setIsSeriesNull() {
	m_isSeries = std::nullopt;
}


const bool &GetLiveTvChannelsParams::isSports() const {
	return m_isSports.value();
}

void GetLiveTvChannelsParams::setIsSports(bool newIsSports)  {
	m_isSports = newIsSports;
}

bool GetLiveTvChannelsParams::isSportsNull() const {
	// Nullable: true
	// Type Nullable: false
	

	return !m_isSports.has_value();
}

void GetLiveTvChannelsParams::setIsSportsNull() {
	m_isSports = std::nullopt;
}


const qint32 &GetLiveTvChannelsParams::limit() const {
	return m_limit.value();
}

void GetLiveTvChannelsParams::setLimit(qint32 newLimit)  {
	m_limit = newLimit;
}

bool GetLiveTvChannelsParams::limitNull() const {
	// Nullable: true
	// Type Nullable: false
	

	return !m_limit.has_value();
}

void GetLiveTvChannelsParams::setLimitNull() {
	m_limit = std::nullopt;
}


const QStringList &GetLiveTvChannelsParams::sortBy() const {
	return m_sortBy;
}

void GetLiveTvChannelsParams::setSortBy(QStringList newSortBy)  {
	m_sortBy = newSortBy;
}

bool GetLiveTvChannelsParams::sortByNull() const {
	// Nullable: true
	// Type Nullable: true
	

	return m_sortBy.size() == 0;
}

void GetLiveTvChannelsParams::setSortByNull() {
	m_sortBy.clear();
}


const SortOrder &GetLiveTvChannelsParams::sortOrder() const {
	return m_sortOrder;
}

void GetLiveTvChannelsParams::setSortOrder(SortOrder newSortOrder)  {
	m_sortOrder = newSortOrder;
}

bool GetLiveTvChannelsParams::sortOrderNull() const {
	// Nullable: true
	// Type Nullable: true
	

	return m_sortOrder== SortOrder::EnumNotSet;
}

void GetLiveTvChannelsParams::setSortOrderNull() {
	m_sortOrder= SortOrder::EnumNotSet;
}


const qint32 &GetLiveTvChannelsParams::startIndex() const {
	return m_startIndex.value();
}

void GetLiveTvChannelsParams::setStartIndex(qint32 newStartIndex)  {
	m_startIndex = newStartIndex;
}

bool GetLiveTvChannelsParams::startIndexNull() const {
	// Nullable: true
	// Type Nullable: false
	

	return !m_startIndex.has_value();
}

void GetLiveTvChannelsParams::setStartIndexNull() {
	m_startIndex = std::nullopt;
}


const ChannelType &GetLiveTvChannelsParams::type() const {
	return m_type;
}

void GetLiveTvChannelsParams::setType(ChannelType newType)  {
	m_type = newType;
}

bool GetLiveTvChannelsParams::typeNull() const {
	// Nullable: true
	// Type Nullable: true
	

	return m_type== ChannelType::EnumNotSet;
}

void GetLiveTvChannelsParams::setTypeNull() {
	m_type= ChannelType::EnumNotSet;
}


const QString &GetLiveTvChannelsParams::userId() const {
	return m_userId;
}

void GetLiveTvChannelsParams::setUserId(QString newUserId)  {
	m_userId = newUserId;
}

bool GetLiveTvChannelsParams::userIdNull() const {
	// Nullable: true
	// Type Nullable: true
	

	return m_userId.isNull();
}

void GetLiveTvChannelsParams::setUserIdNull() {
	m_userId.clear();
}




// GetLiveTvInfoParams



// GetLiveTvProgramsParams

const QStringList &GetLiveTvProgramsParams::channelIds() const {
	return m_channelIds;
}

void GetLiveTvProgramsParams::setChannelIds(QStringList newChannelIds)  {
	m_channelIds = newChannelIds;
}

bool GetLiveTvProgramsParams::channelIdsNull() const {
	// Nullable: true
	// Type Nullable: true
	

	return m_channelIds.size() == 0;
}

void GetLiveTvProgramsParams::setChannelIdsNull() {
	m_channelIds.clear();
}


const QList<ImageType> &GetLiveTvProgramsParams::enableImageTypes() const {
	return m_enableImageTypes;
}

void GetLiveTvProgramsParams::setEnableImageTypes(QList<ImageType> newEnableImageTypes)  {
	m_enableImageTypes = newEnableImageTypes;
}

bool GetLiveTvProgramsParams::enableImageTypesNull() const {
	// Nullable: true
	// Type Nullable: true
	

	return m_enableImageTypes.size() == 0;
}

void GetLiveTvProgramsParams::setEnableImageTypesNull() {
	m_enableImageTypes.clear();
}


const bool &GetLiveTvProgramsParams::enableImages() const {
	return m_enableImages.value();
}

void GetLiveTvProgramsParams::setEnableImages(bool newEnableImages)  {
	m_enableImages = newEnableImages;
}

bool GetLiveTvProgramsParams::enableImagesNull() const {
	// Nullable: true
	// Type Nullable: false
	

	return !m_enableImages.has_value();
}

void GetLiveTvProgramsParams::setEnableImagesNull() {
	m_enableImages = std::nullopt;
}


const bool &GetLiveTvProgramsParams::enableTotalRecordCount() const {
	return m_enableTotalRecordCount.value();
}

void GetLiveTvProgramsParams::setEnableTotalRecordCount(bool newEnableTotalRecordCount)  {
	m_enableTotalRecordCount = newEnableTotalRecordCount;
}

bool GetLiveTvProgramsParams::enableTotalRecordCountNull() const {
	// Nullable: false
	// Type Nullable: false
	

	return !m_enableTotalRecordCount.has_value();
}

void GetLiveTvProgramsParams::setEnableTotalRecordCountNull() {
	m_enableTotalRecordCount = std::nullopt;
}


const bool &GetLiveTvProgramsParams::enableUserData() const {
	return m_enableUserData.value();
}

void GetLiveTvProgramsParams::setEnableUserData(bool newEnableUserData)  {
	m_enableUserData = newEnableUserData;
}

bool GetLiveTvProgramsParams::enableUserDataNull() const {
	// Nullable: true
	// Type Nullable: false
	

	return !m_enableUserData.has_value();
}

void GetLiveTvProgramsParams::setEnableUserDataNull() {
	m_enableUserData = std::nullopt;
}


const QList<ItemFields> &GetLiveTvProgramsParams::fields() const {
	return m_fields;
}

void GetLiveTvProgramsParams::setFields(QList<ItemFields> newFields)  {
	m_fields = newFields;
}

bool GetLiveTvProgramsParams::fieldsNull() const {
	// Nullable: true
	// Type Nullable: true
	

	return m_fields.size() == 0;
}

void GetLiveTvProgramsParams::setFieldsNull() {
	m_fields.clear();
}


const QStringList &GetLiveTvProgramsParams::genreIds() const {
	return m_genreIds;
}

void GetLiveTvProgramsParams::setGenreIds(QStringList newGenreIds)  {
	m_genreIds = newGenreIds;
}

bool GetLiveTvProgramsParams::genreIdsNull() const {
	// Nullable: true
	// Type Nullable: true
	

	return m_genreIds.size() == 0;
}

void GetLiveTvProgramsParams::setGenreIdsNull() {
	m_genreIds.clear();
}


const QStringList &GetLiveTvProgramsParams::genres() const {
	return m_genres;
}

void GetLiveTvProgramsParams::setGenres(QStringList newGenres)  {
	m_genres = newGenres;
}

bool GetLiveTvProgramsParams::genresNull() const {
	// Nullable: true
	// Type Nullable: true
	

	return m_genres.size() == 0;
}

void GetLiveTvProgramsParams::setGenresNull() {
	m_genres.clear();
}


const bool &GetLiveTvProgramsParams::hasAired() const {
	return m_hasAired.value();
}

void GetLiveTvProgramsParams::setHasAired(bool newHasAired)  {
	m_hasAired = newHasAired;
}

bool GetLiveTvProgramsParams::hasAiredNull() const {
	// Nullable: true
	// Type Nullable: false
	

	return !m_hasAired.has_value();
}

void GetLiveTvProgramsParams::setHasAiredNull() {
	m_hasAired = std::nullopt;
}


const qint32 &GetLiveTvProgramsParams::imageTypeLimit() const {
	return m_imageTypeLimit.value();
}

void GetLiveTvProgramsParams::setImageTypeLimit(qint32 newImageTypeLimit)  {
	m_imageTypeLimit = newImageTypeLimit;
}

bool GetLiveTvProgramsParams::imageTypeLimitNull() const {
	// Nullable: true
	// Type Nullable: false
	

	return !m_imageTypeLimit.has_value();
}

void GetLiveTvProgramsParams::setImageTypeLimitNull() {
	m_imageTypeLimit = std::nullopt;
}


const bool &GetLiveTvProgramsParams::isAiring() const {
	return m_isAiring.value();
}

void GetLiveTvProgramsParams::setIsAiring(bool newIsAiring)  {
	m_isAiring = newIsAiring;
}

bool GetLiveTvProgramsParams::isAiringNull() const {
	// Nullable: true
	// Type Nullable: false
	

	return !m_isAiring.has_value();
}

void GetLiveTvProgramsParams::setIsAiringNull() {
	m_isAiring = std::nullopt;
}


const bool &GetLiveTvProgramsParams::isKids() const {
	return m_isKids.value();
}

void GetLiveTvProgramsParams::setIsKids(bool newIsKids)  {
	m_isKids = newIsKids;
}

bool GetLiveTvProgramsParams::isKidsNull() const {
	// Nullable: true
	// Type Nullable: false
	

	return !m_isKids.has_value();
}

void GetLiveTvProgramsParams::setIsKidsNull() {
	m_isKids = std::nullopt;
}


const bool &GetLiveTvProgramsParams::isMovie() const {
	return m_isMovie.value();
}

void GetLiveTvProgramsParams::setIsMovie(bool newIsMovie)  {
	m_isMovie = newIsMovie;
}

bool GetLiveTvProgramsParams::isMovieNull() const {
	// Nullable: true
	// Type Nullable: false
	

	return !m_isMovie.has_value();
}

void GetLiveTvProgramsParams::setIsMovieNull() {
	m_isMovie = std::nullopt;
}


const bool &GetLiveTvProgramsParams::isNews() const {
	return m_isNews.value();
}

void GetLiveTvProgramsParams::setIsNews(bool newIsNews)  {
	m_isNews = newIsNews;
}

bool GetLiveTvProgramsParams::isNewsNull() const {
	// Nullable: true
	// Type Nullable: false
	

	return !m_isNews.has_value();
}

void GetLiveTvProgramsParams::setIsNewsNull() {
	m_isNews = std::nullopt;
}


const bool &GetLiveTvProgramsParams::isSeries() const {
	return m_isSeries.value();
}

void GetLiveTvProgramsParams::setIsSeries(bool newIsSeries)  {
	m_isSeries = newIsSeries;
}

bool GetLiveTvProgramsParams::isSeriesNull() const {
	// Nullable: true
	// Type Nullable: false
	

	return !m_isSeries.has_value();
}

void GetLiveTvProgramsParams::setIsSeriesNull() {
	m_isSeries = std::nullopt;
}


const bool &GetLiveTvProgramsParams::isSports() const {
	return m_isSports.value();
}

void GetLiveTvProgramsParams::setIsSports(bool newIsSports)  {
	m_isSports = newIsSports;
}

bool GetLiveTvProgramsParams::isSportsNull() const {
	// Nullable: true
	// Type Nullable: false
	

	return !m_isSports.has_value();
}

void GetLiveTvProgramsParams::setIsSportsNull() {
	m_isSports = std::nullopt;
}


const QString &GetLiveTvProgramsParams::librarySeriesId() const {
	return m_librarySeriesId;
}

void GetLiveTvProgramsParams::setLibrarySeriesId(QString newLibrarySeriesId)  {
	m_librarySeriesId = newLibrarySeriesId;
}

bool GetLiveTvProgramsParams::librarySeriesIdNull() const {
	// Nullable: true
	// Type Nullable: true
	

	return m_librarySeriesId.isNull();
}

void GetLiveTvProgramsParams::setLibrarySeriesIdNull() {
	m_librarySeriesId.clear();
}


const qint32 &GetLiveTvProgramsParams::limit() const {
	return m_limit.value();
}

void GetLiveTvProgramsParams::setLimit(qint32 newLimit)  {
	m_limit = newLimit;
}

bool GetLiveTvProgramsParams::limitNull() const {
	// Nullable: true
	// Type Nullable: false
	

	return !m_limit.has_value();
}

void GetLiveTvProgramsParams::setLimitNull() {
	m_limit = std::nullopt;
}


const QDateTime &GetLiveTvProgramsParams::maxEndDate() const {
	return m_maxEndDate;
}

void GetLiveTvProgramsParams::setMaxEndDate(QDateTime newMaxEndDate)  {
	m_maxEndDate = newMaxEndDate;
}

bool GetLiveTvProgramsParams::maxEndDateNull() const {
	// Nullable: true
	// Type Nullable: true
	

	return m_maxEndDate.isNull();
}

void GetLiveTvProgramsParams::setMaxEndDateNull() {
	m_maxEndDate= QDateTime();
}


const QDateTime &GetLiveTvProgramsParams::maxStartDate() const {
	return m_maxStartDate;
}

void GetLiveTvProgramsParams::setMaxStartDate(QDateTime newMaxStartDate)  {
	m_maxStartDate = newMaxStartDate;
}

bool GetLiveTvProgramsParams::maxStartDateNull() const {
	// Nullable: true
	// Type Nullable: true
	

	return m_maxStartDate.isNull();
}

void GetLiveTvProgramsParams::setMaxStartDateNull() {
	m_maxStartDate= QDateTime();
}


const QDateTime &GetLiveTvProgramsParams::minEndDate() const {
	return m_minEndDate;
}

void GetLiveTvProgramsParams::setMinEndDate(QDateTime newMinEndDate)  {
	m_minEndDate = newMinEndDate;
}

bool GetLiveTvProgramsParams::minEndDateNull() const {
	// Nullable: true
	// Type Nullable: true
	

	return m_minEndDate.isNull();
}

void GetLiveTvProgramsParams::setMinEndDateNull() {
	m_minEndDate= QDateTime();
}


const QDateTime &GetLiveTvProgramsParams::minStartDate() const {
	return m_minStartDate;
}

void GetLiveTvProgramsParams::setMinStartDate(QDateTime newMinStartDate)  {
	m_minStartDate = newMinStartDate;
}

bool GetLiveTvProgramsParams::minStartDateNull() const {
	// Nullable: true
	// Type Nullable: true
	

	return m_minStartDate.isNull();
}

void GetLiveTvProgramsParams::setMinStartDateNull() {
	m_minStartDate= QDateTime();
}


const QString &GetLiveTvProgramsParams::seriesTimerId() const {
	return m_seriesTimerId;
}

void GetLiveTvProgramsParams::setSeriesTimerId(QString newSeriesTimerId)  {
	m_seriesTimerId = newSeriesTimerId;
}

bool GetLiveTvProgramsParams::seriesTimerIdNull() const {
	// Nullable: true
	// Type Nullable: true
	

	return m_seriesTimerId.isNull();
}

void GetLiveTvProgramsParams::setSeriesTimerIdNull() {
	m_seriesTimerId.clear();
}


const QString &GetLiveTvProgramsParams::sortBy() const {
	return m_sortBy;
}

void GetLiveTvProgramsParams::setSortBy(QString newSortBy)  {
	m_sortBy = newSortBy;
}

bool GetLiveTvProgramsParams::sortByNull() const {
	// Nullable: true
	// Type Nullable: true
	

	return m_sortBy.isNull();
}

void GetLiveTvProgramsParams::setSortByNull() {
	m_sortBy.clear();
}


const QString &GetLiveTvProgramsParams::sortOrder() const {
	return m_sortOrder;
}

void GetLiveTvProgramsParams::setSortOrder(QString newSortOrder)  {
	m_sortOrder = newSortOrder;
}

bool GetLiveTvProgramsParams::sortOrderNull() const {
	// Nullable: true
	// Type Nullable: true
	

	return m_sortOrder.isNull();
}

void GetLiveTvProgramsParams::setSortOrderNull() {
	m_sortOrder.clear();
}


const qint32 &GetLiveTvProgramsParams::startIndex() const {
	return m_startIndex.value();
}

void GetLiveTvProgramsParams::setStartIndex(qint32 newStartIndex)  {
	m_startIndex = newStartIndex;
}

bool GetLiveTvProgramsParams::startIndexNull() const {
	// Nullable: true
	// Type Nullable: false
	

	return !m_startIndex.has_value();
}

void GetLiveTvProgramsParams::setStartIndexNull() {
	m_startIndex = std::nullopt;
}


const QString &GetLiveTvProgramsParams::userId() const {
	return m_userId;
}

void GetLiveTvProgramsParams::setUserId(QString newUserId)  {
	m_userId = newUserId;
}

bool GetLiveTvProgramsParams::userIdNull() const {
	// Nullable: true
	// Type Nullable: true
	

	return m_userId.isNull();
}

void GetLiveTvProgramsParams::setUserIdNull() {
	m_userId.clear();
}




// GetLocalTrailersParams

const QString &GetLocalTrailersParams::itemId() const {
	return m_itemId;
}

void GetLocalTrailersParams::setItemId(QString newItemId) {
	m_itemId = newItemId;
}


const QString &GetLocalTrailersParams::userId() const {
	return m_userId;
}

void GetLocalTrailersParams::setUserId(QString newUserId) {
	m_userId = newUserId;
}




// GetLocalizationOptionsParams



// GetLogEntriesParams

const bool &GetLogEntriesParams::hasUserId() const {
	return m_hasUserId.value();
}

void GetLogEntriesParams::setHasUserId(bool newHasUserId)  {
	m_hasUserId = newHasUserId;
}

bool GetLogEntriesParams::hasUserIdNull() const {
	// Nullable: true
	// Type Nullable: false
	

	return !m_hasUserId.has_value();
}

void GetLogEntriesParams::setHasUserIdNull() {
	m_hasUserId = std::nullopt;
}


const qint32 &GetLogEntriesParams::limit() const {
	return m_limit.value();
}

void GetLogEntriesParams::setLimit(qint32 newLimit)  {
	m_limit = newLimit;
}

bool GetLogEntriesParams::limitNull() const {
	// Nullable: true
	// Type Nullable: false
	

	return !m_limit.has_value();
}

void GetLogEntriesParams::setLimitNull() {
	m_limit = std::nullopt;
}


const QDateTime &GetLogEntriesParams::minDate() const {
	return m_minDate;
}

void GetLogEntriesParams::setMinDate(QDateTime newMinDate)  {
	m_minDate = newMinDate;
}

bool GetLogEntriesParams::minDateNull() const {
	// Nullable: true
	// Type Nullable: true
	

	return m_minDate.isNull();
}

void GetLogEntriesParams::setMinDateNull() {
	m_minDate= QDateTime();
}


const qint32 &GetLogEntriesParams::startIndex() const {
	return m_startIndex.value();
}

void GetLogEntriesParams::setStartIndex(qint32 newStartIndex)  {
	m_startIndex = newStartIndex;
}

bool GetLogEntriesParams::startIndexNull() const {
	// Nullable: true
	// Type Nullable: false
	

	return !m_startIndex.has_value();
}

void GetLogEntriesParams::setStartIndexNull() {
	m_startIndex = std::nullopt;
}




// GetLogFileParams

const QString &GetLogFileParams::name() const {
	return m_name;
}

void GetLogFileParams::setName(QString newName) {
	m_name = newName;
}




// GetMasterHlsAudioPlaylistParams

const QString &GetMasterHlsAudioPlaylistParams::itemId() const {
	return m_itemId;
}

void GetMasterHlsAudioPlaylistParams::setItemId(QString newItemId) {
	m_itemId = newItemId;
}


const QString &GetMasterHlsAudioPlaylistParams::mediaSourceId() const {
	return m_mediaSourceId;
}

void GetMasterHlsAudioPlaylistParams::setMediaSourceId(QString newMediaSourceId) {
	m_mediaSourceId = newMediaSourceId;
}


const bool &GetMasterHlsAudioPlaylistParams::allowAudioStreamCopy() const {
	return m_allowAudioStreamCopy.value();
}

void GetMasterHlsAudioPlaylistParams::setAllowAudioStreamCopy(bool newAllowAudioStreamCopy)  {
	m_allowAudioStreamCopy = newAllowAudioStreamCopy;
}

bool GetMasterHlsAudioPlaylistParams::allowAudioStreamCopyNull() const {
	// Nullable: true
	// Type Nullable: false
	

	return !m_allowAudioStreamCopy.has_value();
}

void GetMasterHlsAudioPlaylistParams::setAllowAudioStreamCopyNull() {
	m_allowAudioStreamCopy = std::nullopt;
}


const bool &GetMasterHlsAudioPlaylistParams::allowVideoStreamCopy() const {
	return m_allowVideoStreamCopy.value();
}

void GetMasterHlsAudioPlaylistParams::setAllowVideoStreamCopy(bool newAllowVideoStreamCopy)  {
	m_allowVideoStreamCopy = newAllowVideoStreamCopy;
}

bool GetMasterHlsAudioPlaylistParams::allowVideoStreamCopyNull() const {
	// Nullable: true
	// Type Nullable: false
	

	return !m_allowVideoStreamCopy.has_value();
}

void GetMasterHlsAudioPlaylistParams::setAllowVideoStreamCopyNull() {
	m_allowVideoStreamCopy = std::nullopt;
}


const qint32 &GetMasterHlsAudioPlaylistParams::audioBitRate() const {
	return m_audioBitRate.value();
}

void GetMasterHlsAudioPlaylistParams::setAudioBitRate(qint32 newAudioBitRate)  {
	m_audioBitRate = newAudioBitRate;
}

bool GetMasterHlsAudioPlaylistParams::audioBitRateNull() const {
	// Nullable: true
	// Type Nullable: false
	

	return !m_audioBitRate.has_value();
}

void GetMasterHlsAudioPlaylistParams::setAudioBitRateNull() {
	m_audioBitRate = std::nullopt;
}


const qint32 &GetMasterHlsAudioPlaylistParams::audioChannels() const {
	return m_audioChannels.value();
}

void GetMasterHlsAudioPlaylistParams::setAudioChannels(qint32 newAudioChannels)  {
	m_audioChannels = newAudioChannels;
}

bool GetMasterHlsAudioPlaylistParams::audioChannelsNull() const {
	// Nullable: true
	// Type Nullable: false
	

	return !m_audioChannels.has_value();
}

void GetMasterHlsAudioPlaylistParams::setAudioChannelsNull() {
	m_audioChannels = std::nullopt;
}


const QString &GetMasterHlsAudioPlaylistParams::audioCodec() const {
	return m_audioCodec;
}

void GetMasterHlsAudioPlaylistParams::setAudioCodec(QString newAudioCodec)  {
	m_audioCodec = newAudioCodec;
}

bool GetMasterHlsAudioPlaylistParams::audioCodecNull() const {
	// Nullable: true
	// Type Nullable: true
	

	return m_audioCodec.isNull();
}

void GetMasterHlsAudioPlaylistParams::setAudioCodecNull() {
	m_audioCodec.clear();
}


const qint32 &GetMasterHlsAudioPlaylistParams::audioSampleRate() const {
	return m_audioSampleRate.value();
}

void GetMasterHlsAudioPlaylistParams::setAudioSampleRate(qint32 newAudioSampleRate)  {
	m_audioSampleRate = newAudioSampleRate;
}

bool GetMasterHlsAudioPlaylistParams::audioSampleRateNull() const {
	// Nullable: true
	// Type Nullable: false
	

	return !m_audioSampleRate.has_value();
}

void GetMasterHlsAudioPlaylistParams::setAudioSampleRateNull() {
	m_audioSampleRate = std::nullopt;
}


const qint32 &GetMasterHlsAudioPlaylistParams::audioStreamIndex() const {
	return m_audioStreamIndex.value();
}

void GetMasterHlsAudioPlaylistParams::setAudioStreamIndex(qint32 newAudioStreamIndex)  {
	m_audioStreamIndex = newAudioStreamIndex;
}

bool GetMasterHlsAudioPlaylistParams::audioStreamIndexNull() const {
	// Nullable: true
	// Type Nullable: false
	

	return !m_audioStreamIndex.has_value();
}

void GetMasterHlsAudioPlaylistParams::setAudioStreamIndexNull() {
	m_audioStreamIndex = std::nullopt;
}


const bool &GetMasterHlsAudioPlaylistParams::breakOnNonKeyFrames() const {
	return m_breakOnNonKeyFrames.value();
}

void GetMasterHlsAudioPlaylistParams::setBreakOnNonKeyFrames(bool newBreakOnNonKeyFrames)  {
	m_breakOnNonKeyFrames = newBreakOnNonKeyFrames;
}

bool GetMasterHlsAudioPlaylistParams::breakOnNonKeyFramesNull() const {
	// Nullable: true
	// Type Nullable: false
	

	return !m_breakOnNonKeyFrames.has_value();
}

void GetMasterHlsAudioPlaylistParams::setBreakOnNonKeyFramesNull() {
	m_breakOnNonKeyFrames = std::nullopt;
}


const EncodingContext &GetMasterHlsAudioPlaylistParams::context() const {
	return m_context;
}

void GetMasterHlsAudioPlaylistParams::setContext(EncodingContext newContext)  {
	m_context = newContext;
}

bool GetMasterHlsAudioPlaylistParams::contextNull() const {
	// Nullable: true
	// Type Nullable: true
	

	return m_context== EncodingContext::EnumNotSet;
}

void GetMasterHlsAudioPlaylistParams::setContextNull() {
	m_context= EncodingContext::EnumNotSet;
}


const bool &GetMasterHlsAudioPlaylistParams::copyTimestamps() const {
	return m_copyTimestamps.value();
}

void GetMasterHlsAudioPlaylistParams::setCopyTimestamps(bool newCopyTimestamps)  {
	m_copyTimestamps = newCopyTimestamps;
}

bool GetMasterHlsAudioPlaylistParams::copyTimestampsNull() const {
	// Nullable: true
	// Type Nullable: false
	

	return !m_copyTimestamps.has_value();
}

void GetMasterHlsAudioPlaylistParams::setCopyTimestampsNull() {
	m_copyTimestamps = std::nullopt;
}


const qint32 &GetMasterHlsAudioPlaylistParams::cpuCoreLimit() const {
	return m_cpuCoreLimit.value();
}

void GetMasterHlsAudioPlaylistParams::setCpuCoreLimit(qint32 newCpuCoreLimit)  {
	m_cpuCoreLimit = newCpuCoreLimit;
}

bool GetMasterHlsAudioPlaylistParams::cpuCoreLimitNull() const {
	// Nullable: true
	// Type Nullable: false
	

	return !m_cpuCoreLimit.has_value();
}

void GetMasterHlsAudioPlaylistParams::setCpuCoreLimitNull() {
	m_cpuCoreLimit = std::nullopt;
}


const bool &GetMasterHlsAudioPlaylistParams::deInterlace() const {
	return m_deInterlace.value();
}

void GetMasterHlsAudioPlaylistParams::setDeInterlace(bool newDeInterlace)  {
	m_deInterlace = newDeInterlace;
}

bool GetMasterHlsAudioPlaylistParams::deInterlaceNull() const {
	// Nullable: true
	// Type Nullable: false
	

	return !m_deInterlace.has_value();
}

void GetMasterHlsAudioPlaylistParams::setDeInterlaceNull() {
	m_deInterlace = std::nullopt;
}


const QString &GetMasterHlsAudioPlaylistParams::deviceId() const {
	return m_deviceId;
}

void GetMasterHlsAudioPlaylistParams::setDeviceId(QString newDeviceId)  {
	m_deviceId = newDeviceId;
}

bool GetMasterHlsAudioPlaylistParams::deviceIdNull() const {
	// Nullable: true
	// Type Nullable: true
	

	return m_deviceId.isNull();
}

void GetMasterHlsAudioPlaylistParams::setDeviceIdNull() {
	m_deviceId.clear();
}


const QString &GetMasterHlsAudioPlaylistParams::deviceProfileId() const {
	return m_deviceProfileId;
}

void GetMasterHlsAudioPlaylistParams::setDeviceProfileId(QString newDeviceProfileId)  {
	m_deviceProfileId = newDeviceProfileId;
}

bool GetMasterHlsAudioPlaylistParams::deviceProfileIdNull() const {
	// Nullable: true
	// Type Nullable: true
	

	return m_deviceProfileId.isNull();
}

void GetMasterHlsAudioPlaylistParams::setDeviceProfileIdNull() {
	m_deviceProfileId.clear();
}


const bool &GetMasterHlsAudioPlaylistParams::enableAdaptiveBitrateStreaming() const {
	return m_enableAdaptiveBitrateStreaming.value();
}

void GetMasterHlsAudioPlaylistParams::setEnableAdaptiveBitrateStreaming(bool newEnableAdaptiveBitrateStreaming)  {
	m_enableAdaptiveBitrateStreaming = newEnableAdaptiveBitrateStreaming;
}

bool GetMasterHlsAudioPlaylistParams::enableAdaptiveBitrateStreamingNull() const {
	// Nullable: false
	// Type Nullable: false
	

	return !m_enableAdaptiveBitrateStreaming.has_value();
}

void GetMasterHlsAudioPlaylistParams::setEnableAdaptiveBitrateStreamingNull() {
	m_enableAdaptiveBitrateStreaming = std::nullopt;
}


const bool &GetMasterHlsAudioPlaylistParams::enableAutoStreamCopy() const {
	return m_enableAutoStreamCopy.value();
}

void GetMasterHlsAudioPlaylistParams::setEnableAutoStreamCopy(bool newEnableAutoStreamCopy)  {
	m_enableAutoStreamCopy = newEnableAutoStreamCopy;
}

bool GetMasterHlsAudioPlaylistParams::enableAutoStreamCopyNull() const {
	// Nullable: true
	// Type Nullable: false
	

	return !m_enableAutoStreamCopy.has_value();
}

void GetMasterHlsAudioPlaylistParams::setEnableAutoStreamCopyNull() {
	m_enableAutoStreamCopy = std::nullopt;
}


const bool &GetMasterHlsAudioPlaylistParams::enableMpegtsM2TsMode() const {
	return m_enableMpegtsM2TsMode.value();
}

void GetMasterHlsAudioPlaylistParams::setEnableMpegtsM2TsMode(bool newEnableMpegtsM2TsMode)  {
	m_enableMpegtsM2TsMode = newEnableMpegtsM2TsMode;
}

bool GetMasterHlsAudioPlaylistParams::enableMpegtsM2TsModeNull() const {
	// Nullable: true
	// Type Nullable: false
	

	return !m_enableMpegtsM2TsMode.has_value();
}

void GetMasterHlsAudioPlaylistParams::setEnableMpegtsM2TsModeNull() {
	m_enableMpegtsM2TsMode = std::nullopt;
}


const float &GetMasterHlsAudioPlaylistParams::framerate() const {
	return m_framerate.value();
}

void GetMasterHlsAudioPlaylistParams::setFramerate(float newFramerate)  {
	m_framerate = newFramerate;
}

bool GetMasterHlsAudioPlaylistParams::framerateNull() const {
	// Nullable: true
	// Type Nullable: false
	

	return !m_framerate.has_value();
}

void GetMasterHlsAudioPlaylistParams::setFramerateNull() {
	m_framerate = std::nullopt;
}


const qint32 &GetMasterHlsAudioPlaylistParams::height() const {
	return m_height.value();
}

void GetMasterHlsAudioPlaylistParams::setHeight(qint32 newHeight)  {
	m_height = newHeight;
}

bool GetMasterHlsAudioPlaylistParams::heightNull() const {
	// Nullable: true
	// Type Nullable: false
	

	return !m_height.has_value();
}

void GetMasterHlsAudioPlaylistParams::setHeightNull() {
	m_height = std::nullopt;
}


const QString &GetMasterHlsAudioPlaylistParams::level() const {
	return m_level;
}

void GetMasterHlsAudioPlaylistParams::setLevel(QString newLevel)  {
	m_level = newLevel;
}

bool GetMasterHlsAudioPlaylistParams::levelNull() const {
	// Nullable: true
	// Type Nullable: true
	

	return m_level.isNull();
}

void GetMasterHlsAudioPlaylistParams::setLevelNull() {
	m_level.clear();
}


const QString &GetMasterHlsAudioPlaylistParams::liveStreamId() const {
	return m_liveStreamId;
}

void GetMasterHlsAudioPlaylistParams::setLiveStreamId(QString newLiveStreamId)  {
	m_liveStreamId = newLiveStreamId;
}

bool GetMasterHlsAudioPlaylistParams::liveStreamIdNull() const {
	// Nullable: true
	// Type Nullable: true
	

	return m_liveStreamId.isNull();
}

void GetMasterHlsAudioPlaylistParams::setLiveStreamIdNull() {
	m_liveStreamId.clear();
}


const qint32 &GetMasterHlsAudioPlaylistParams::maxAudioBitDepth() const {
	return m_maxAudioBitDepth.value();
}

void GetMasterHlsAudioPlaylistParams::setMaxAudioBitDepth(qint32 newMaxAudioBitDepth)  {
	m_maxAudioBitDepth = newMaxAudioBitDepth;
}

bool GetMasterHlsAudioPlaylistParams::maxAudioBitDepthNull() const {
	// Nullable: true
	// Type Nullable: false
	

	return !m_maxAudioBitDepth.has_value();
}

void GetMasterHlsAudioPlaylistParams::setMaxAudioBitDepthNull() {
	m_maxAudioBitDepth = std::nullopt;
}


const qint32 &GetMasterHlsAudioPlaylistParams::maxAudioChannels() const {
	return m_maxAudioChannels.value();
}

void GetMasterHlsAudioPlaylistParams::setMaxAudioChannels(qint32 newMaxAudioChannels)  {
	m_maxAudioChannels = newMaxAudioChannels;
}

bool GetMasterHlsAudioPlaylistParams::maxAudioChannelsNull() const {
	// Nullable: true
	// Type Nullable: false
	

	return !m_maxAudioChannels.has_value();
}

void GetMasterHlsAudioPlaylistParams::setMaxAudioChannelsNull() {
	m_maxAudioChannels = std::nullopt;
}


const float &GetMasterHlsAudioPlaylistParams::maxFramerate() const {
	return m_maxFramerate.value();
}

void GetMasterHlsAudioPlaylistParams::setMaxFramerate(float newMaxFramerate)  {
	m_maxFramerate = newMaxFramerate;
}

bool GetMasterHlsAudioPlaylistParams::maxFramerateNull() const {
	// Nullable: true
	// Type Nullable: false
	

	return !m_maxFramerate.has_value();
}

void GetMasterHlsAudioPlaylistParams::setMaxFramerateNull() {
	m_maxFramerate = std::nullopt;
}


const qint32 &GetMasterHlsAudioPlaylistParams::maxRefFrames() const {
	return m_maxRefFrames.value();
}

void GetMasterHlsAudioPlaylistParams::setMaxRefFrames(qint32 newMaxRefFrames)  {
	m_maxRefFrames = newMaxRefFrames;
}

bool GetMasterHlsAudioPlaylistParams::maxRefFramesNull() const {
	// Nullable: true
	// Type Nullable: false
	

	return !m_maxRefFrames.has_value();
}

void GetMasterHlsAudioPlaylistParams::setMaxRefFramesNull() {
	m_maxRefFrames = std::nullopt;
}


const qint32 &GetMasterHlsAudioPlaylistParams::maxStreamingBitrate() const {
	return m_maxStreamingBitrate.value();
}

void GetMasterHlsAudioPlaylistParams::setMaxStreamingBitrate(qint32 newMaxStreamingBitrate)  {
	m_maxStreamingBitrate = newMaxStreamingBitrate;
}

bool GetMasterHlsAudioPlaylistParams::maxStreamingBitrateNull() const {
	// Nullable: true
	// Type Nullable: false
	

	return !m_maxStreamingBitrate.has_value();
}

void GetMasterHlsAudioPlaylistParams::setMaxStreamingBitrateNull() {
	m_maxStreamingBitrate = std::nullopt;
}


const qint32 &GetMasterHlsAudioPlaylistParams::maxVideoBitDepth() const {
	return m_maxVideoBitDepth.value();
}

void GetMasterHlsAudioPlaylistParams::setMaxVideoBitDepth(qint32 newMaxVideoBitDepth)  {
	m_maxVideoBitDepth = newMaxVideoBitDepth;
}

bool GetMasterHlsAudioPlaylistParams::maxVideoBitDepthNull() const {
	// Nullable: true
	// Type Nullable: false
	

	return !m_maxVideoBitDepth.has_value();
}

void GetMasterHlsAudioPlaylistParams::setMaxVideoBitDepthNull() {
	m_maxVideoBitDepth = std::nullopt;
}


const qint32 &GetMasterHlsAudioPlaylistParams::minSegments() const {
	return m_minSegments.value();
}

void GetMasterHlsAudioPlaylistParams::setMinSegments(qint32 newMinSegments)  {
	m_minSegments = newMinSegments;
}

bool GetMasterHlsAudioPlaylistParams::minSegmentsNull() const {
	// Nullable: true
	// Type Nullable: false
	

	return !m_minSegments.has_value();
}

void GetMasterHlsAudioPlaylistParams::setMinSegmentsNull() {
	m_minSegments = std::nullopt;
}


const QString &GetMasterHlsAudioPlaylistParams::params() const {
	return m_params;
}

void GetMasterHlsAudioPlaylistParams::setParams(QString newParams)  {
	m_params = newParams;
}

bool GetMasterHlsAudioPlaylistParams::paramsNull() const {
	// Nullable: true
	// Type Nullable: true
	

	return m_params.isNull();
}

void GetMasterHlsAudioPlaylistParams::setParamsNull() {
	m_params.clear();
}


const QString &GetMasterHlsAudioPlaylistParams::playSessionId() const {
	return m_playSessionId;
}

void GetMasterHlsAudioPlaylistParams::setPlaySessionId(QString newPlaySessionId)  {
	m_playSessionId = newPlaySessionId;
}

bool GetMasterHlsAudioPlaylistParams::playSessionIdNull() const {
	// Nullable: true
	// Type Nullable: true
	

	return m_playSessionId.isNull();
}

void GetMasterHlsAudioPlaylistParams::setPlaySessionIdNull() {
	m_playSessionId.clear();
}


const QString &GetMasterHlsAudioPlaylistParams::profile() const {
	return m_profile;
}

void GetMasterHlsAudioPlaylistParams::setProfile(QString newProfile)  {
	m_profile = newProfile;
}

bool GetMasterHlsAudioPlaylistParams::profileNull() const {
	// Nullable: true
	// Type Nullable: true
	

	return m_profile.isNull();
}

void GetMasterHlsAudioPlaylistParams::setProfileNull() {
	m_profile.clear();
}


const bool &GetMasterHlsAudioPlaylistParams::requireAvc() const {
	return m_requireAvc.value();
}

void GetMasterHlsAudioPlaylistParams::setRequireAvc(bool newRequireAvc)  {
	m_requireAvc = newRequireAvc;
}

bool GetMasterHlsAudioPlaylistParams::requireAvcNull() const {
	// Nullable: true
	// Type Nullable: false
	

	return !m_requireAvc.has_value();
}

void GetMasterHlsAudioPlaylistParams::setRequireAvcNull() {
	m_requireAvc = std::nullopt;
}


const bool &GetMasterHlsAudioPlaylistParams::requireNonAnamorphic() const {
	return m_requireNonAnamorphic.value();
}

void GetMasterHlsAudioPlaylistParams::setRequireNonAnamorphic(bool newRequireNonAnamorphic)  {
	m_requireNonAnamorphic = newRequireNonAnamorphic;
}

bool GetMasterHlsAudioPlaylistParams::requireNonAnamorphicNull() const {
	// Nullable: true
	// Type Nullable: false
	

	return !m_requireNonAnamorphic.has_value();
}

void GetMasterHlsAudioPlaylistParams::setRequireNonAnamorphicNull() {
	m_requireNonAnamorphic = std::nullopt;
}


const QString &GetMasterHlsAudioPlaylistParams::segmentContainer() const {
	return m_segmentContainer;
}

void GetMasterHlsAudioPlaylistParams::setSegmentContainer(QString newSegmentContainer)  {
	m_segmentContainer = newSegmentContainer;
}

bool GetMasterHlsAudioPlaylistParams::segmentContainerNull() const {
	// Nullable: true
	// Type Nullable: true
	

	return m_segmentContainer.isNull();
}

void GetMasterHlsAudioPlaylistParams::setSegmentContainerNull() {
	m_segmentContainer.clear();
}


const qint32 &GetMasterHlsAudioPlaylistParams::segmentLength() const {
	return m_segmentLength.value();
}

void GetMasterHlsAudioPlaylistParams::setSegmentLength(qint32 newSegmentLength)  {
	m_segmentLength = newSegmentLength;
}

bool GetMasterHlsAudioPlaylistParams::segmentLengthNull() const {
	// Nullable: true
	// Type Nullable: false
	

	return !m_segmentLength.has_value();
}

void GetMasterHlsAudioPlaylistParams::setSegmentLengthNull() {
	m_segmentLength = std::nullopt;
}


const qint64 &GetMasterHlsAudioPlaylistParams::startTimeTicks() const {
	return m_startTimeTicks.value();
}

void GetMasterHlsAudioPlaylistParams::setStartTimeTicks(qint64 newStartTimeTicks)  {
	m_startTimeTicks = newStartTimeTicks;
}

bool GetMasterHlsAudioPlaylistParams::startTimeTicksNull() const {
	// Nullable: true
	// Type Nullable: false
	

	return !m_startTimeTicks.has_value();
}

void GetMasterHlsAudioPlaylistParams::setStartTimeTicksNull() {
	m_startTimeTicks = std::nullopt;
}


const bool &GetMasterHlsAudioPlaylistParams::staticStreaming() const {
	return m_staticStreaming.value();
}

void GetMasterHlsAudioPlaylistParams::setStaticStreaming(bool newStaticStreaming)  {
	m_staticStreaming = newStaticStreaming;
}

bool GetMasterHlsAudioPlaylistParams::staticStreamingNull() const {
	// Nullable: true
	// Type Nullable: false
	

	return !m_staticStreaming.has_value();
}

void GetMasterHlsAudioPlaylistParams::setStaticStreamingNull() {
	m_staticStreaming = std::nullopt;
}


const QJsonObject &GetMasterHlsAudioPlaylistParams::streamOptions() const {
	return m_streamOptions;
}

void GetMasterHlsAudioPlaylistParams::setStreamOptions(QJsonObject newStreamOptions)  {
	m_streamOptions = newStreamOptions;
}

bool GetMasterHlsAudioPlaylistParams::streamOptionsNull() const {
	// Nullable: true
	// Type Nullable: true
	

	return m_streamOptions.isEmpty();
}

void GetMasterHlsAudioPlaylistParams::setStreamOptionsNull() {
	m_streamOptions= QJsonObject();
}


const QString &GetMasterHlsAudioPlaylistParams::subtitleCodec() const {
	return m_subtitleCodec;
}

void GetMasterHlsAudioPlaylistParams::setSubtitleCodec(QString newSubtitleCodec)  {
	m_subtitleCodec = newSubtitleCodec;
}

bool GetMasterHlsAudioPlaylistParams::subtitleCodecNull() const {
	// Nullable: true
	// Type Nullable: true
	

	return m_subtitleCodec.isNull();
}

void GetMasterHlsAudioPlaylistParams::setSubtitleCodecNull() {
	m_subtitleCodec.clear();
}


const SubtitleDeliveryMethod &GetMasterHlsAudioPlaylistParams::subtitleMethod() const {
	return m_subtitleMethod;
}

void GetMasterHlsAudioPlaylistParams::setSubtitleMethod(SubtitleDeliveryMethod newSubtitleMethod)  {
	m_subtitleMethod = newSubtitleMethod;
}

bool GetMasterHlsAudioPlaylistParams::subtitleMethodNull() const {
	// Nullable: true
	// Type Nullable: true
	

	return m_subtitleMethod== SubtitleDeliveryMethod::EnumNotSet;
}

void GetMasterHlsAudioPlaylistParams::setSubtitleMethodNull() {
	m_subtitleMethod= SubtitleDeliveryMethod::EnumNotSet;
}


const qint32 &GetMasterHlsAudioPlaylistParams::subtitleStreamIndex() const {
	return m_subtitleStreamIndex.value();
}

void GetMasterHlsAudioPlaylistParams::setSubtitleStreamIndex(qint32 newSubtitleStreamIndex)  {
	m_subtitleStreamIndex = newSubtitleStreamIndex;
}

bool GetMasterHlsAudioPlaylistParams::subtitleStreamIndexNull() const {
	// Nullable: true
	// Type Nullable: false
	

	return !m_subtitleStreamIndex.has_value();
}

void GetMasterHlsAudioPlaylistParams::setSubtitleStreamIndexNull() {
	m_subtitleStreamIndex = std::nullopt;
}


const QString &GetMasterHlsAudioPlaylistParams::tag() const {
	return m_tag;
}

void GetMasterHlsAudioPlaylistParams::setTag(QString newTag)  {
	m_tag = newTag;
}

bool GetMasterHlsAudioPlaylistParams::tagNull() const {
	// Nullable: true
	// Type Nullable: true
	

	return m_tag.isNull();
}

void GetMasterHlsAudioPlaylistParams::setTagNull() {
	m_tag.clear();
}


const QString &GetMasterHlsAudioPlaylistParams::transcodeReasons() const {
	return m_transcodeReasons;
}

void GetMasterHlsAudioPlaylistParams::setTranscodeReasons(QString newTranscodeReasons)  {
	m_transcodeReasons = newTranscodeReasons;
}

bool GetMasterHlsAudioPlaylistParams::transcodeReasonsNull() const {
	// Nullable: true
	// Type Nullable: true
	

	return m_transcodeReasons.isNull();
}

void GetMasterHlsAudioPlaylistParams::setTranscodeReasonsNull() {
	m_transcodeReasons.clear();
}


const qint32 &GetMasterHlsAudioPlaylistParams::transcodingMaxAudioChannels() const {
	return m_transcodingMaxAudioChannels.value();
}

void GetMasterHlsAudioPlaylistParams::setTranscodingMaxAudioChannels(qint32 newTranscodingMaxAudioChannels)  {
	m_transcodingMaxAudioChannels = newTranscodingMaxAudioChannels;
}

bool GetMasterHlsAudioPlaylistParams::transcodingMaxAudioChannelsNull() const {
	// Nullable: true
	// Type Nullable: false
	

	return !m_transcodingMaxAudioChannels.has_value();
}

void GetMasterHlsAudioPlaylistParams::setTranscodingMaxAudioChannelsNull() {
	m_transcodingMaxAudioChannels = std::nullopt;
}


const qint32 &GetMasterHlsAudioPlaylistParams::videoBitRate() const {
	return m_videoBitRate.value();
}

void GetMasterHlsAudioPlaylistParams::setVideoBitRate(qint32 newVideoBitRate)  {
	m_videoBitRate = newVideoBitRate;
}

bool GetMasterHlsAudioPlaylistParams::videoBitRateNull() const {
	// Nullable: true
	// Type Nullable: false
	

	return !m_videoBitRate.has_value();
}

void GetMasterHlsAudioPlaylistParams::setVideoBitRateNull() {
	m_videoBitRate = std::nullopt;
}


const QString &GetMasterHlsAudioPlaylistParams::videoCodec() const {
	return m_videoCodec;
}

void GetMasterHlsAudioPlaylistParams::setVideoCodec(QString newVideoCodec)  {
	m_videoCodec = newVideoCodec;
}

bool GetMasterHlsAudioPlaylistParams::videoCodecNull() const {
	// Nullable: true
	// Type Nullable: true
	

	return m_videoCodec.isNull();
}

void GetMasterHlsAudioPlaylistParams::setVideoCodecNull() {
	m_videoCodec.clear();
}


const qint32 &GetMasterHlsAudioPlaylistParams::videoStreamIndex() const {
	return m_videoStreamIndex.value();
}

void GetMasterHlsAudioPlaylistParams::setVideoStreamIndex(qint32 newVideoStreamIndex)  {
	m_videoStreamIndex = newVideoStreamIndex;
}

bool GetMasterHlsAudioPlaylistParams::videoStreamIndexNull() const {
	// Nullable: true
	// Type Nullable: false
	

	return !m_videoStreamIndex.has_value();
}

void GetMasterHlsAudioPlaylistParams::setVideoStreamIndexNull() {
	m_videoStreamIndex = std::nullopt;
}


const qint32 &GetMasterHlsAudioPlaylistParams::width() const {
	return m_width.value();
}

void GetMasterHlsAudioPlaylistParams::setWidth(qint32 newWidth)  {
	m_width = newWidth;
}

bool GetMasterHlsAudioPlaylistParams::widthNull() const {
	// Nullable: true
	// Type Nullable: false
	

	return !m_width.has_value();
}

void GetMasterHlsAudioPlaylistParams::setWidthNull() {
	m_width = std::nullopt;
}




// GetMasterHlsVideoPlaylistParams

const QString &GetMasterHlsVideoPlaylistParams::itemId() const {
	return m_itemId;
}

void GetMasterHlsVideoPlaylistParams::setItemId(QString newItemId) {
	m_itemId = newItemId;
}


const QString &GetMasterHlsVideoPlaylistParams::mediaSourceId() const {
	return m_mediaSourceId;
}

void GetMasterHlsVideoPlaylistParams::setMediaSourceId(QString newMediaSourceId) {
	m_mediaSourceId = newMediaSourceId;
}


const bool &GetMasterHlsVideoPlaylistParams::allowAudioStreamCopy() const {
	return m_allowAudioStreamCopy.value();
}

void GetMasterHlsVideoPlaylistParams::setAllowAudioStreamCopy(bool newAllowAudioStreamCopy)  {
	m_allowAudioStreamCopy = newAllowAudioStreamCopy;
}

bool GetMasterHlsVideoPlaylistParams::allowAudioStreamCopyNull() const {
	// Nullable: true
	// Type Nullable: false
	

	return !m_allowAudioStreamCopy.has_value();
}

void GetMasterHlsVideoPlaylistParams::setAllowAudioStreamCopyNull() {
	m_allowAudioStreamCopy = std::nullopt;
}


const bool &GetMasterHlsVideoPlaylistParams::allowVideoStreamCopy() const {
	return m_allowVideoStreamCopy.value();
}

void GetMasterHlsVideoPlaylistParams::setAllowVideoStreamCopy(bool newAllowVideoStreamCopy)  {
	m_allowVideoStreamCopy = newAllowVideoStreamCopy;
}

bool GetMasterHlsVideoPlaylistParams::allowVideoStreamCopyNull() const {
	// Nullable: true
	// Type Nullable: false
	

	return !m_allowVideoStreamCopy.has_value();
}

void GetMasterHlsVideoPlaylistParams::setAllowVideoStreamCopyNull() {
	m_allowVideoStreamCopy = std::nullopt;
}


const qint32 &GetMasterHlsVideoPlaylistParams::audioBitRate() const {
	return m_audioBitRate.value();
}

void GetMasterHlsVideoPlaylistParams::setAudioBitRate(qint32 newAudioBitRate)  {
	m_audioBitRate = newAudioBitRate;
}

bool GetMasterHlsVideoPlaylistParams::audioBitRateNull() const {
	// Nullable: true
	// Type Nullable: false
	

	return !m_audioBitRate.has_value();
}

void GetMasterHlsVideoPlaylistParams::setAudioBitRateNull() {
	m_audioBitRate = std::nullopt;
}


const qint32 &GetMasterHlsVideoPlaylistParams::audioChannels() const {
	return m_audioChannels.value();
}

void GetMasterHlsVideoPlaylistParams::setAudioChannels(qint32 newAudioChannels)  {
	m_audioChannels = newAudioChannels;
}

bool GetMasterHlsVideoPlaylistParams::audioChannelsNull() const {
	// Nullable: true
	// Type Nullable: false
	

	return !m_audioChannels.has_value();
}

void GetMasterHlsVideoPlaylistParams::setAudioChannelsNull() {
	m_audioChannels = std::nullopt;
}


const QString &GetMasterHlsVideoPlaylistParams::audioCodec() const {
	return m_audioCodec;
}

void GetMasterHlsVideoPlaylistParams::setAudioCodec(QString newAudioCodec)  {
	m_audioCodec = newAudioCodec;
}

bool GetMasterHlsVideoPlaylistParams::audioCodecNull() const {
	// Nullable: true
	// Type Nullable: true
	

	return m_audioCodec.isNull();
}

void GetMasterHlsVideoPlaylistParams::setAudioCodecNull() {
	m_audioCodec.clear();
}


const qint32 &GetMasterHlsVideoPlaylistParams::audioSampleRate() const {
	return m_audioSampleRate.value();
}

void GetMasterHlsVideoPlaylistParams::setAudioSampleRate(qint32 newAudioSampleRate)  {
	m_audioSampleRate = newAudioSampleRate;
}

bool GetMasterHlsVideoPlaylistParams::audioSampleRateNull() const {
	// Nullable: true
	// Type Nullable: false
	

	return !m_audioSampleRate.has_value();
}

void GetMasterHlsVideoPlaylistParams::setAudioSampleRateNull() {
	m_audioSampleRate = std::nullopt;
}


const qint32 &GetMasterHlsVideoPlaylistParams::audioStreamIndex() const {
	return m_audioStreamIndex.value();
}

void GetMasterHlsVideoPlaylistParams::setAudioStreamIndex(qint32 newAudioStreamIndex)  {
	m_audioStreamIndex = newAudioStreamIndex;
}

bool GetMasterHlsVideoPlaylistParams::audioStreamIndexNull() const {
	// Nullable: true
	// Type Nullable: false
	

	return !m_audioStreamIndex.has_value();
}

void GetMasterHlsVideoPlaylistParams::setAudioStreamIndexNull() {
	m_audioStreamIndex = std::nullopt;
}


const bool &GetMasterHlsVideoPlaylistParams::breakOnNonKeyFrames() const {
	return m_breakOnNonKeyFrames.value();
}

void GetMasterHlsVideoPlaylistParams::setBreakOnNonKeyFrames(bool newBreakOnNonKeyFrames)  {
	m_breakOnNonKeyFrames = newBreakOnNonKeyFrames;
}

bool GetMasterHlsVideoPlaylistParams::breakOnNonKeyFramesNull() const {
	// Nullable: true
	// Type Nullable: false
	

	return !m_breakOnNonKeyFrames.has_value();
}

void GetMasterHlsVideoPlaylistParams::setBreakOnNonKeyFramesNull() {
	m_breakOnNonKeyFrames = std::nullopt;
}


const EncodingContext &GetMasterHlsVideoPlaylistParams::context() const {
	return m_context;
}

void GetMasterHlsVideoPlaylistParams::setContext(EncodingContext newContext)  {
	m_context = newContext;
}

bool GetMasterHlsVideoPlaylistParams::contextNull() const {
	// Nullable: true
	// Type Nullable: true
	

	return m_context== EncodingContext::EnumNotSet;
}

void GetMasterHlsVideoPlaylistParams::setContextNull() {
	m_context= EncodingContext::EnumNotSet;
}


const bool &GetMasterHlsVideoPlaylistParams::copyTimestamps() const {
	return m_copyTimestamps.value();
}

void GetMasterHlsVideoPlaylistParams::setCopyTimestamps(bool newCopyTimestamps)  {
	m_copyTimestamps = newCopyTimestamps;
}

bool GetMasterHlsVideoPlaylistParams::copyTimestampsNull() const {
	// Nullable: true
	// Type Nullable: false
	

	return !m_copyTimestamps.has_value();
}

void GetMasterHlsVideoPlaylistParams::setCopyTimestampsNull() {
	m_copyTimestamps = std::nullopt;
}


const qint32 &GetMasterHlsVideoPlaylistParams::cpuCoreLimit() const {
	return m_cpuCoreLimit.value();
}

void GetMasterHlsVideoPlaylistParams::setCpuCoreLimit(qint32 newCpuCoreLimit)  {
	m_cpuCoreLimit = newCpuCoreLimit;
}

bool GetMasterHlsVideoPlaylistParams::cpuCoreLimitNull() const {
	// Nullable: true
	// Type Nullable: false
	

	return !m_cpuCoreLimit.has_value();
}

void GetMasterHlsVideoPlaylistParams::setCpuCoreLimitNull() {
	m_cpuCoreLimit = std::nullopt;
}


const bool &GetMasterHlsVideoPlaylistParams::deInterlace() const {
	return m_deInterlace.value();
}

void GetMasterHlsVideoPlaylistParams::setDeInterlace(bool newDeInterlace)  {
	m_deInterlace = newDeInterlace;
}

bool GetMasterHlsVideoPlaylistParams::deInterlaceNull() const {
	// Nullable: true
	// Type Nullable: false
	

	return !m_deInterlace.has_value();
}

void GetMasterHlsVideoPlaylistParams::setDeInterlaceNull() {
	m_deInterlace = std::nullopt;
}


const QString &GetMasterHlsVideoPlaylistParams::deviceId() const {
	return m_deviceId;
}

void GetMasterHlsVideoPlaylistParams::setDeviceId(QString newDeviceId)  {
	m_deviceId = newDeviceId;
}

bool GetMasterHlsVideoPlaylistParams::deviceIdNull() const {
	// Nullable: true
	// Type Nullable: true
	

	return m_deviceId.isNull();
}

void GetMasterHlsVideoPlaylistParams::setDeviceIdNull() {
	m_deviceId.clear();
}


const QString &GetMasterHlsVideoPlaylistParams::deviceProfileId() const {
	return m_deviceProfileId;
}

void GetMasterHlsVideoPlaylistParams::setDeviceProfileId(QString newDeviceProfileId)  {
	m_deviceProfileId = newDeviceProfileId;
}

bool GetMasterHlsVideoPlaylistParams::deviceProfileIdNull() const {
	// Nullable: true
	// Type Nullable: true
	

	return m_deviceProfileId.isNull();
}

void GetMasterHlsVideoPlaylistParams::setDeviceProfileIdNull() {
	m_deviceProfileId.clear();
}


const bool &GetMasterHlsVideoPlaylistParams::enableAdaptiveBitrateStreaming() const {
	return m_enableAdaptiveBitrateStreaming.value();
}

void GetMasterHlsVideoPlaylistParams::setEnableAdaptiveBitrateStreaming(bool newEnableAdaptiveBitrateStreaming)  {
	m_enableAdaptiveBitrateStreaming = newEnableAdaptiveBitrateStreaming;
}

bool GetMasterHlsVideoPlaylistParams::enableAdaptiveBitrateStreamingNull() const {
	// Nullable: false
	// Type Nullable: false
	

	return !m_enableAdaptiveBitrateStreaming.has_value();
}

void GetMasterHlsVideoPlaylistParams::setEnableAdaptiveBitrateStreamingNull() {
	m_enableAdaptiveBitrateStreaming = std::nullopt;
}


const bool &GetMasterHlsVideoPlaylistParams::enableAutoStreamCopy() const {
	return m_enableAutoStreamCopy.value();
}

void GetMasterHlsVideoPlaylistParams::setEnableAutoStreamCopy(bool newEnableAutoStreamCopy)  {
	m_enableAutoStreamCopy = newEnableAutoStreamCopy;
}

bool GetMasterHlsVideoPlaylistParams::enableAutoStreamCopyNull() const {
	// Nullable: true
	// Type Nullable: false
	

	return !m_enableAutoStreamCopy.has_value();
}

void GetMasterHlsVideoPlaylistParams::setEnableAutoStreamCopyNull() {
	m_enableAutoStreamCopy = std::nullopt;
}


const bool &GetMasterHlsVideoPlaylistParams::enableMpegtsM2TsMode() const {
	return m_enableMpegtsM2TsMode.value();
}

void GetMasterHlsVideoPlaylistParams::setEnableMpegtsM2TsMode(bool newEnableMpegtsM2TsMode)  {
	m_enableMpegtsM2TsMode = newEnableMpegtsM2TsMode;
}

bool GetMasterHlsVideoPlaylistParams::enableMpegtsM2TsModeNull() const {
	// Nullable: true
	// Type Nullable: false
	

	return !m_enableMpegtsM2TsMode.has_value();
}

void GetMasterHlsVideoPlaylistParams::setEnableMpegtsM2TsModeNull() {
	m_enableMpegtsM2TsMode = std::nullopt;
}


const float &GetMasterHlsVideoPlaylistParams::framerate() const {
	return m_framerate.value();
}

void GetMasterHlsVideoPlaylistParams::setFramerate(float newFramerate)  {
	m_framerate = newFramerate;
}

bool GetMasterHlsVideoPlaylistParams::framerateNull() const {
	// Nullable: true
	// Type Nullable: false
	

	return !m_framerate.has_value();
}

void GetMasterHlsVideoPlaylistParams::setFramerateNull() {
	m_framerate = std::nullopt;
}


const qint32 &GetMasterHlsVideoPlaylistParams::height() const {
	return m_height.value();
}

void GetMasterHlsVideoPlaylistParams::setHeight(qint32 newHeight)  {
	m_height = newHeight;
}

bool GetMasterHlsVideoPlaylistParams::heightNull() const {
	// Nullable: true
	// Type Nullable: false
	

	return !m_height.has_value();
}

void GetMasterHlsVideoPlaylistParams::setHeightNull() {
	m_height = std::nullopt;
}


const QString &GetMasterHlsVideoPlaylistParams::level() const {
	return m_level;
}

void GetMasterHlsVideoPlaylistParams::setLevel(QString newLevel)  {
	m_level = newLevel;
}

bool GetMasterHlsVideoPlaylistParams::levelNull() const {
	// Nullable: true
	// Type Nullable: true
	

	return m_level.isNull();
}

void GetMasterHlsVideoPlaylistParams::setLevelNull() {
	m_level.clear();
}


const QString &GetMasterHlsVideoPlaylistParams::liveStreamId() const {
	return m_liveStreamId;
}

void GetMasterHlsVideoPlaylistParams::setLiveStreamId(QString newLiveStreamId)  {
	m_liveStreamId = newLiveStreamId;
}

bool GetMasterHlsVideoPlaylistParams::liveStreamIdNull() const {
	// Nullable: true
	// Type Nullable: true
	

	return m_liveStreamId.isNull();
}

void GetMasterHlsVideoPlaylistParams::setLiveStreamIdNull() {
	m_liveStreamId.clear();
}


const qint32 &GetMasterHlsVideoPlaylistParams::maxAudioBitDepth() const {
	return m_maxAudioBitDepth.value();
}

void GetMasterHlsVideoPlaylistParams::setMaxAudioBitDepth(qint32 newMaxAudioBitDepth)  {
	m_maxAudioBitDepth = newMaxAudioBitDepth;
}

bool GetMasterHlsVideoPlaylistParams::maxAudioBitDepthNull() const {
	// Nullable: true
	// Type Nullable: false
	

	return !m_maxAudioBitDepth.has_value();
}

void GetMasterHlsVideoPlaylistParams::setMaxAudioBitDepthNull() {
	m_maxAudioBitDepth = std::nullopt;
}


const qint32 &GetMasterHlsVideoPlaylistParams::maxAudioChannels() const {
	return m_maxAudioChannels.value();
}

void GetMasterHlsVideoPlaylistParams::setMaxAudioChannels(qint32 newMaxAudioChannels)  {
	m_maxAudioChannels = newMaxAudioChannels;
}

bool GetMasterHlsVideoPlaylistParams::maxAudioChannelsNull() const {
	// Nullable: true
	// Type Nullable: false
	

	return !m_maxAudioChannels.has_value();
}

void GetMasterHlsVideoPlaylistParams::setMaxAudioChannelsNull() {
	m_maxAudioChannels = std::nullopt;
}


const float &GetMasterHlsVideoPlaylistParams::maxFramerate() const {
	return m_maxFramerate.value();
}

void GetMasterHlsVideoPlaylistParams::setMaxFramerate(float newMaxFramerate)  {
	m_maxFramerate = newMaxFramerate;
}

bool GetMasterHlsVideoPlaylistParams::maxFramerateNull() const {
	// Nullable: true
	// Type Nullable: false
	

	return !m_maxFramerate.has_value();
}

void GetMasterHlsVideoPlaylistParams::setMaxFramerateNull() {
	m_maxFramerate = std::nullopt;
}


const qint32 &GetMasterHlsVideoPlaylistParams::maxRefFrames() const {
	return m_maxRefFrames.value();
}

void GetMasterHlsVideoPlaylistParams::setMaxRefFrames(qint32 newMaxRefFrames)  {
	m_maxRefFrames = newMaxRefFrames;
}

bool GetMasterHlsVideoPlaylistParams::maxRefFramesNull() const {
	// Nullable: true
	// Type Nullable: false
	

	return !m_maxRefFrames.has_value();
}

void GetMasterHlsVideoPlaylistParams::setMaxRefFramesNull() {
	m_maxRefFrames = std::nullopt;
}


const qint32 &GetMasterHlsVideoPlaylistParams::maxVideoBitDepth() const {
	return m_maxVideoBitDepth.value();
}

void GetMasterHlsVideoPlaylistParams::setMaxVideoBitDepth(qint32 newMaxVideoBitDepth)  {
	m_maxVideoBitDepth = newMaxVideoBitDepth;
}

bool GetMasterHlsVideoPlaylistParams::maxVideoBitDepthNull() const {
	// Nullable: true
	// Type Nullable: false
	

	return !m_maxVideoBitDepth.has_value();
}

void GetMasterHlsVideoPlaylistParams::setMaxVideoBitDepthNull() {
	m_maxVideoBitDepth = std::nullopt;
}


const qint32 &GetMasterHlsVideoPlaylistParams::minSegments() const {
	return m_minSegments.value();
}

void GetMasterHlsVideoPlaylistParams::setMinSegments(qint32 newMinSegments)  {
	m_minSegments = newMinSegments;
}

bool GetMasterHlsVideoPlaylistParams::minSegmentsNull() const {
	// Nullable: true
	// Type Nullable: false
	

	return !m_minSegments.has_value();
}

void GetMasterHlsVideoPlaylistParams::setMinSegmentsNull() {
	m_minSegments = std::nullopt;
}


const QString &GetMasterHlsVideoPlaylistParams::params() const {
	return m_params;
}

void GetMasterHlsVideoPlaylistParams::setParams(QString newParams)  {
	m_params = newParams;
}

bool GetMasterHlsVideoPlaylistParams::paramsNull() const {
	// Nullable: true
	// Type Nullable: true
	

	return m_params.isNull();
}

void GetMasterHlsVideoPlaylistParams::setParamsNull() {
	m_params.clear();
}


const QString &GetMasterHlsVideoPlaylistParams::playSessionId() const {
	return m_playSessionId;
}

void GetMasterHlsVideoPlaylistParams::setPlaySessionId(QString newPlaySessionId)  {
	m_playSessionId = newPlaySessionId;
}

bool GetMasterHlsVideoPlaylistParams::playSessionIdNull() const {
	// Nullable: true
	// Type Nullable: true
	

	return m_playSessionId.isNull();
}

void GetMasterHlsVideoPlaylistParams::setPlaySessionIdNull() {
	m_playSessionId.clear();
}


const QString &GetMasterHlsVideoPlaylistParams::profile() const {
	return m_profile;
}

void GetMasterHlsVideoPlaylistParams::setProfile(QString newProfile)  {
	m_profile = newProfile;
}

bool GetMasterHlsVideoPlaylistParams::profileNull() const {
	// Nullable: true
	// Type Nullable: true
	

	return m_profile.isNull();
}

void GetMasterHlsVideoPlaylistParams::setProfileNull() {
	m_profile.clear();
}


const bool &GetMasterHlsVideoPlaylistParams::requireAvc() const {
	return m_requireAvc.value();
}

void GetMasterHlsVideoPlaylistParams::setRequireAvc(bool newRequireAvc)  {
	m_requireAvc = newRequireAvc;
}

bool GetMasterHlsVideoPlaylistParams::requireAvcNull() const {
	// Nullable: true
	// Type Nullable: false
	

	return !m_requireAvc.has_value();
}

void GetMasterHlsVideoPlaylistParams::setRequireAvcNull() {
	m_requireAvc = std::nullopt;
}


const bool &GetMasterHlsVideoPlaylistParams::requireNonAnamorphic() const {
	return m_requireNonAnamorphic.value();
}

void GetMasterHlsVideoPlaylistParams::setRequireNonAnamorphic(bool newRequireNonAnamorphic)  {
	m_requireNonAnamorphic = newRequireNonAnamorphic;
}

bool GetMasterHlsVideoPlaylistParams::requireNonAnamorphicNull() const {
	// Nullable: true
	// Type Nullable: false
	

	return !m_requireNonAnamorphic.has_value();
}

void GetMasterHlsVideoPlaylistParams::setRequireNonAnamorphicNull() {
	m_requireNonAnamorphic = std::nullopt;
}


const QString &GetMasterHlsVideoPlaylistParams::segmentContainer() const {
	return m_segmentContainer;
}

void GetMasterHlsVideoPlaylistParams::setSegmentContainer(QString newSegmentContainer)  {
	m_segmentContainer = newSegmentContainer;
}

bool GetMasterHlsVideoPlaylistParams::segmentContainerNull() const {
	// Nullable: true
	// Type Nullable: true
	

	return m_segmentContainer.isNull();
}

void GetMasterHlsVideoPlaylistParams::setSegmentContainerNull() {
	m_segmentContainer.clear();
}


const qint32 &GetMasterHlsVideoPlaylistParams::segmentLength() const {
	return m_segmentLength.value();
}

void GetMasterHlsVideoPlaylistParams::setSegmentLength(qint32 newSegmentLength)  {
	m_segmentLength = newSegmentLength;
}

bool GetMasterHlsVideoPlaylistParams::segmentLengthNull() const {
	// Nullable: true
	// Type Nullable: false
	

	return !m_segmentLength.has_value();
}

void GetMasterHlsVideoPlaylistParams::setSegmentLengthNull() {
	m_segmentLength = std::nullopt;
}


const qint64 &GetMasterHlsVideoPlaylistParams::startTimeTicks() const {
	return m_startTimeTicks.value();
}

void GetMasterHlsVideoPlaylistParams::setStartTimeTicks(qint64 newStartTimeTicks)  {
	m_startTimeTicks = newStartTimeTicks;
}

bool GetMasterHlsVideoPlaylistParams::startTimeTicksNull() const {
	// Nullable: true
	// Type Nullable: false
	

	return !m_startTimeTicks.has_value();
}

void GetMasterHlsVideoPlaylistParams::setStartTimeTicksNull() {
	m_startTimeTicks = std::nullopt;
}


const bool &GetMasterHlsVideoPlaylistParams::staticStreaming() const {
	return m_staticStreaming.value();
}

void GetMasterHlsVideoPlaylistParams::setStaticStreaming(bool newStaticStreaming)  {
	m_staticStreaming = newStaticStreaming;
}

bool GetMasterHlsVideoPlaylistParams::staticStreamingNull() const {
	// Nullable: true
	// Type Nullable: false
	

	return !m_staticStreaming.has_value();
}

void GetMasterHlsVideoPlaylistParams::setStaticStreamingNull() {
	m_staticStreaming = std::nullopt;
}


const QJsonObject &GetMasterHlsVideoPlaylistParams::streamOptions() const {
	return m_streamOptions;
}

void GetMasterHlsVideoPlaylistParams::setStreamOptions(QJsonObject newStreamOptions)  {
	m_streamOptions = newStreamOptions;
}

bool GetMasterHlsVideoPlaylistParams::streamOptionsNull() const {
	// Nullable: true
	// Type Nullable: true
	

	return m_streamOptions.isEmpty();
}

void GetMasterHlsVideoPlaylistParams::setStreamOptionsNull() {
	m_streamOptions= QJsonObject();
}


const QString &GetMasterHlsVideoPlaylistParams::subtitleCodec() const {
	return m_subtitleCodec;
}

void GetMasterHlsVideoPlaylistParams::setSubtitleCodec(QString newSubtitleCodec)  {
	m_subtitleCodec = newSubtitleCodec;
}

bool GetMasterHlsVideoPlaylistParams::subtitleCodecNull() const {
	// Nullable: true
	// Type Nullable: true
	

	return m_subtitleCodec.isNull();
}

void GetMasterHlsVideoPlaylistParams::setSubtitleCodecNull() {
	m_subtitleCodec.clear();
}


const SubtitleDeliveryMethod &GetMasterHlsVideoPlaylistParams::subtitleMethod() const {
	return m_subtitleMethod;
}

void GetMasterHlsVideoPlaylistParams::setSubtitleMethod(SubtitleDeliveryMethod newSubtitleMethod)  {
	m_subtitleMethod = newSubtitleMethod;
}

bool GetMasterHlsVideoPlaylistParams::subtitleMethodNull() const {
	// Nullable: true
	// Type Nullable: true
	

	return m_subtitleMethod== SubtitleDeliveryMethod::EnumNotSet;
}

void GetMasterHlsVideoPlaylistParams::setSubtitleMethodNull() {
	m_subtitleMethod= SubtitleDeliveryMethod::EnumNotSet;
}


const qint32 &GetMasterHlsVideoPlaylistParams::subtitleStreamIndex() const {
	return m_subtitleStreamIndex.value();
}

void GetMasterHlsVideoPlaylistParams::setSubtitleStreamIndex(qint32 newSubtitleStreamIndex)  {
	m_subtitleStreamIndex = newSubtitleStreamIndex;
}

bool GetMasterHlsVideoPlaylistParams::subtitleStreamIndexNull() const {
	// Nullable: true
	// Type Nullable: false
	

	return !m_subtitleStreamIndex.has_value();
}

void GetMasterHlsVideoPlaylistParams::setSubtitleStreamIndexNull() {
	m_subtitleStreamIndex = std::nullopt;
}


const QString &GetMasterHlsVideoPlaylistParams::tag() const {
	return m_tag;
}

void GetMasterHlsVideoPlaylistParams::setTag(QString newTag)  {
	m_tag = newTag;
}

bool GetMasterHlsVideoPlaylistParams::tagNull() const {
	// Nullable: true
	// Type Nullable: true
	

	return m_tag.isNull();
}

void GetMasterHlsVideoPlaylistParams::setTagNull() {
	m_tag.clear();
}


const QString &GetMasterHlsVideoPlaylistParams::transcodeReasons() const {
	return m_transcodeReasons;
}

void GetMasterHlsVideoPlaylistParams::setTranscodeReasons(QString newTranscodeReasons)  {
	m_transcodeReasons = newTranscodeReasons;
}

bool GetMasterHlsVideoPlaylistParams::transcodeReasonsNull() const {
	// Nullable: true
	// Type Nullable: true
	

	return m_transcodeReasons.isNull();
}

void GetMasterHlsVideoPlaylistParams::setTranscodeReasonsNull() {
	m_transcodeReasons.clear();
}


const qint32 &GetMasterHlsVideoPlaylistParams::transcodingMaxAudioChannels() const {
	return m_transcodingMaxAudioChannels.value();
}

void GetMasterHlsVideoPlaylistParams::setTranscodingMaxAudioChannels(qint32 newTranscodingMaxAudioChannels)  {
	m_transcodingMaxAudioChannels = newTranscodingMaxAudioChannels;
}

bool GetMasterHlsVideoPlaylistParams::transcodingMaxAudioChannelsNull() const {
	// Nullable: true
	// Type Nullable: false
	

	return !m_transcodingMaxAudioChannels.has_value();
}

void GetMasterHlsVideoPlaylistParams::setTranscodingMaxAudioChannelsNull() {
	m_transcodingMaxAudioChannels = std::nullopt;
}


const qint32 &GetMasterHlsVideoPlaylistParams::videoBitRate() const {
	return m_videoBitRate.value();
}

void GetMasterHlsVideoPlaylistParams::setVideoBitRate(qint32 newVideoBitRate)  {
	m_videoBitRate = newVideoBitRate;
}

bool GetMasterHlsVideoPlaylistParams::videoBitRateNull() const {
	// Nullable: true
	// Type Nullable: false
	

	return !m_videoBitRate.has_value();
}

void GetMasterHlsVideoPlaylistParams::setVideoBitRateNull() {
	m_videoBitRate = std::nullopt;
}


const QString &GetMasterHlsVideoPlaylistParams::videoCodec() const {
	return m_videoCodec;
}

void GetMasterHlsVideoPlaylistParams::setVideoCodec(QString newVideoCodec)  {
	m_videoCodec = newVideoCodec;
}

bool GetMasterHlsVideoPlaylistParams::videoCodecNull() const {
	// Nullable: true
	// Type Nullable: true
	

	return m_videoCodec.isNull();
}

void GetMasterHlsVideoPlaylistParams::setVideoCodecNull() {
	m_videoCodec.clear();
}


const qint32 &GetMasterHlsVideoPlaylistParams::videoStreamIndex() const {
	return m_videoStreamIndex.value();
}

void GetMasterHlsVideoPlaylistParams::setVideoStreamIndex(qint32 newVideoStreamIndex)  {
	m_videoStreamIndex = newVideoStreamIndex;
}

bool GetMasterHlsVideoPlaylistParams::videoStreamIndexNull() const {
	// Nullable: true
	// Type Nullable: false
	

	return !m_videoStreamIndex.has_value();
}

void GetMasterHlsVideoPlaylistParams::setVideoStreamIndexNull() {
	m_videoStreamIndex = std::nullopt;
}


const qint32 &GetMasterHlsVideoPlaylistParams::width() const {
	return m_width.value();
}

void GetMasterHlsVideoPlaylistParams::setWidth(qint32 newWidth)  {
	m_width = newWidth;
}

bool GetMasterHlsVideoPlaylistParams::widthNull() const {
	// Nullable: true
	// Type Nullable: false
	

	return !m_width.has_value();
}

void GetMasterHlsVideoPlaylistParams::setWidthNull() {
	m_width = std::nullopt;
}




// GetMediaFoldersParams

const bool &GetMediaFoldersParams::isHidden() const {
	return m_isHidden.value();
}

void GetMediaFoldersParams::setIsHidden(bool newIsHidden)  {
	m_isHidden = newIsHidden;
}

bool GetMediaFoldersParams::isHiddenNull() const {
	// Nullable: true
	// Type Nullable: false
	

	return !m_isHidden.has_value();
}

void GetMediaFoldersParams::setIsHiddenNull() {
	m_isHidden = std::nullopt;
}




// GetMediaInfoImageParams

const QString &GetMediaInfoImageParams::name() const {
	return m_name;
}

void GetMediaInfoImageParams::setName(QString newName) {
	m_name = newName;
}


const QString &GetMediaInfoImageParams::theme() const {
	return m_theme;
}

void GetMediaInfoImageParams::setTheme(QString newTheme) {
	m_theme = newTheme;
}




// GetMediaInfoImagesParams



// GetMediaReceiverRegistrarParams

const QString &GetMediaReceiverRegistrarParams::serverId() const {
	return m_serverId;
}

void GetMediaReceiverRegistrarParams::setServerId(QString newServerId) {
	m_serverId = newServerId;
}




// GetMediaReceiverRegistrar_2Params

const QString &GetMediaReceiverRegistrar_2Params::serverId() const {
	return m_serverId;
}

void GetMediaReceiverRegistrar_2Params::setServerId(QString newServerId) {
	m_serverId = newServerId;
}




// GetMediaReceiverRegistrar_3Params

const QString &GetMediaReceiverRegistrar_3Params::serverId() const {
	return m_serverId;
}

void GetMediaReceiverRegistrar_3Params::setServerId(QString newServerId) {
	m_serverId = newServerId;
}




// GetMetadataEditorInfoParams

const QString &GetMetadataEditorInfoParams::itemId() const {
	return m_itemId;
}

void GetMetadataEditorInfoParams::setItemId(QString newItemId) {
	m_itemId = newItemId;
}




// GetMovieRecommendationsParams

const qint32 &GetMovieRecommendationsParams::categoryLimit() const {
	return m_categoryLimit.value();
}

void GetMovieRecommendationsParams::setCategoryLimit(qint32 newCategoryLimit)  {
	m_categoryLimit = newCategoryLimit;
}

bool GetMovieRecommendationsParams::categoryLimitNull() const {
	// Nullable: false
	// Type Nullable: false
	

	return !m_categoryLimit.has_value();
}

void GetMovieRecommendationsParams::setCategoryLimitNull() {
	m_categoryLimit = std::nullopt;
}


const QList<ItemFields> &GetMovieRecommendationsParams::fields() const {
	return m_fields;
}

void GetMovieRecommendationsParams::setFields(QList<ItemFields> newFields)  {
	m_fields = newFields;
}

bool GetMovieRecommendationsParams::fieldsNull() const {
	// Nullable: true
	// Type Nullable: true
	

	return m_fields.size() == 0;
}

void GetMovieRecommendationsParams::setFieldsNull() {
	m_fields.clear();
}


const qint32 &GetMovieRecommendationsParams::itemLimit() const {
	return m_itemLimit.value();
}

void GetMovieRecommendationsParams::setItemLimit(qint32 newItemLimit)  {
	m_itemLimit = newItemLimit;
}

bool GetMovieRecommendationsParams::itemLimitNull() const {
	// Nullable: false
	// Type Nullable: false
	

	return !m_itemLimit.has_value();
}

void GetMovieRecommendationsParams::setItemLimitNull() {
	m_itemLimit = std::nullopt;
}


const QString &GetMovieRecommendationsParams::parentId() const {
	return m_parentId;
}

void GetMovieRecommendationsParams::setParentId(QString newParentId)  {
	m_parentId = newParentId;
}

bool GetMovieRecommendationsParams::parentIdNull() const {
	// Nullable: true
	// Type Nullable: true
	

	return m_parentId.isNull();
}

void GetMovieRecommendationsParams::setParentIdNull() {
	m_parentId.clear();
}


const QString &GetMovieRecommendationsParams::userId() const {
	return m_userId;
}

void GetMovieRecommendationsParams::setUserId(QString newUserId)  {
	m_userId = newUserId;
}

bool GetMovieRecommendationsParams::userIdNull() const {
	// Nullable: true
	// Type Nullable: true
	

	return m_userId.isNull();
}

void GetMovieRecommendationsParams::setUserIdNull() {
	m_userId.clear();
}




// GetMovieRemoteSearchResultsParams

const QSharedPointer<MovieInfoRemoteSearchQuery> &GetMovieRemoteSearchResultsParams::body() const {
	return m_body;
}

void GetMovieRemoteSearchResultsParams::setBody(QSharedPointer<MovieInfoRemoteSearchQuery> newBody) {
	m_body = newBody;
}




// GetMusicAlbumRemoteSearchResultsParams

const QSharedPointer<AlbumInfoRemoteSearchQuery> &GetMusicAlbumRemoteSearchResultsParams::body() const {
	return m_body;
}

void GetMusicAlbumRemoteSearchResultsParams::setBody(QSharedPointer<AlbumInfoRemoteSearchQuery> newBody) {
	m_body = newBody;
}




// GetMusicArtistRemoteSearchResultsParams

const QSharedPointer<ArtistInfoRemoteSearchQuery> &GetMusicArtistRemoteSearchResultsParams::body() const {
	return m_body;
}

void GetMusicArtistRemoteSearchResultsParams::setBody(QSharedPointer<ArtistInfoRemoteSearchQuery> newBody) {
	m_body = newBody;
}




// GetMusicGenreParams

const QString &GetMusicGenreParams::genreName() const {
	return m_genreName;
}

void GetMusicGenreParams::setGenreName(QString newGenreName) {
	m_genreName = newGenreName;
}


const QString &GetMusicGenreParams::userId() const {
	return m_userId;
}

void GetMusicGenreParams::setUserId(QString newUserId)  {
	m_userId = newUserId;
}

bool GetMusicGenreParams::userIdNull() const {
	// Nullable: true
	// Type Nullable: true
	

	return m_userId.isNull();
}

void GetMusicGenreParams::setUserIdNull() {
	m_userId.clear();
}




// GetMusicGenreImageParams

const ImageType &GetMusicGenreImageParams::imageType() const {
	return m_imageType;
}

void GetMusicGenreImageParams::setImageType(ImageType newImageType) {
	m_imageType = newImageType;
}


const QString &GetMusicGenreImageParams::name() const {
	return m_name;
}

void GetMusicGenreImageParams::setName(QString newName) {
	m_name = newName;
}


const bool &GetMusicGenreImageParams::addPlayedIndicator() const {
	return m_addPlayedIndicator.value();
}

void GetMusicGenreImageParams::setAddPlayedIndicator(bool newAddPlayedIndicator)  {
	m_addPlayedIndicator = newAddPlayedIndicator;
}

bool GetMusicGenreImageParams::addPlayedIndicatorNull() const {
	// Nullable: true
	// Type Nullable: false
	

	return !m_addPlayedIndicator.has_value();
}

void GetMusicGenreImageParams::setAddPlayedIndicatorNull() {
	m_addPlayedIndicator = std::nullopt;
}


const QString &GetMusicGenreImageParams::backgroundColor() const {
	return m_backgroundColor;
}

void GetMusicGenreImageParams::setBackgroundColor(QString newBackgroundColor)  {
	m_backgroundColor = newBackgroundColor;
}

bool GetMusicGenreImageParams::backgroundColorNull() const {
	// Nullable: true
	// Type Nullable: true
	

	return m_backgroundColor.isNull();
}

void GetMusicGenreImageParams::setBackgroundColorNull() {
	m_backgroundColor.clear();
}


const qint32 &GetMusicGenreImageParams::blur() const {
	return m_blur.value();
}

void GetMusicGenreImageParams::setBlur(qint32 newBlur)  {
	m_blur = newBlur;
}

bool GetMusicGenreImageParams::blurNull() const {
	// Nullable: true
	// Type Nullable: false
	

	return !m_blur.has_value();
}

void GetMusicGenreImageParams::setBlurNull() {
	m_blur = std::nullopt;
}


const bool &GetMusicGenreImageParams::cropWhitespace() const {
	return m_cropWhitespace.value();
}

void GetMusicGenreImageParams::setCropWhitespace(bool newCropWhitespace)  {
	m_cropWhitespace = newCropWhitespace;
}

bool GetMusicGenreImageParams::cropWhitespaceNull() const {
	// Nullable: true
	// Type Nullable: false
	

	return !m_cropWhitespace.has_value();
}

void GetMusicGenreImageParams::setCropWhitespaceNull() {
	m_cropWhitespace = std::nullopt;
}


const QString &GetMusicGenreImageParams::foregroundLayer() const {
	return m_foregroundLayer;
}

void GetMusicGenreImageParams::setForegroundLayer(QString newForegroundLayer)  {
	m_foregroundLayer = newForegroundLayer;
}

bool GetMusicGenreImageParams::foregroundLayerNull() const {
	// Nullable: true
	// Type Nullable: true
	

	return m_foregroundLayer.isNull();
}

void GetMusicGenreImageParams::setForegroundLayerNull() {
	m_foregroundLayer.clear();
}


const ImageFormat &GetMusicGenreImageParams::format() const {
	return m_format;
}

void GetMusicGenreImageParams::setFormat(ImageFormat newFormat)  {
	m_format = newFormat;
}

bool GetMusicGenreImageParams::formatNull() const {
	// Nullable: true
	// Type Nullable: true
	

	return m_format== ImageFormat::EnumNotSet;
}

void GetMusicGenreImageParams::setFormatNull() {
	m_format= ImageFormat::EnumNotSet;
}


const qint32 &GetMusicGenreImageParams::height() const {
	return m_height.value();
}

void GetMusicGenreImageParams::setHeight(qint32 newHeight)  {
	m_height = newHeight;
}

bool GetMusicGenreImageParams::heightNull() const {
	// Nullable: true
	// Type Nullable: false
	

	return !m_height.has_value();
}

void GetMusicGenreImageParams::setHeightNull() {
	m_height = std::nullopt;
}


const qint32 &GetMusicGenreImageParams::imageIndex() const {
	return m_imageIndex.value();
}

void GetMusicGenreImageParams::setImageIndex(qint32 newImageIndex)  {
	m_imageIndex = newImageIndex;
}

bool GetMusicGenreImageParams::imageIndexNull() const {
	// Nullable: true
	// Type Nullable: false
	

	return !m_imageIndex.has_value();
}

void GetMusicGenreImageParams::setImageIndexNull() {
	m_imageIndex = std::nullopt;
}


const qint32 &GetMusicGenreImageParams::maxHeight() const {
	return m_maxHeight.value();
}

void GetMusicGenreImageParams::setMaxHeight(qint32 newMaxHeight)  {
	m_maxHeight = newMaxHeight;
}

bool GetMusicGenreImageParams::maxHeightNull() const {
	// Nullable: true
	// Type Nullable: false
	

	return !m_maxHeight.has_value();
}

void GetMusicGenreImageParams::setMaxHeightNull() {
	m_maxHeight = std::nullopt;
}


const qint32 &GetMusicGenreImageParams::maxWidth() const {
	return m_maxWidth.value();
}

void GetMusicGenreImageParams::setMaxWidth(qint32 newMaxWidth)  {
	m_maxWidth = newMaxWidth;
}

bool GetMusicGenreImageParams::maxWidthNull() const {
	// Nullable: true
	// Type Nullable: false
	

	return !m_maxWidth.has_value();
}

void GetMusicGenreImageParams::setMaxWidthNull() {
	m_maxWidth = std::nullopt;
}


const double &GetMusicGenreImageParams::percentPlayed() const {
	return m_percentPlayed.value();
}

void GetMusicGenreImageParams::setPercentPlayed(double newPercentPlayed)  {
	m_percentPlayed = newPercentPlayed;
}

bool GetMusicGenreImageParams::percentPlayedNull() const {
	// Nullable: true
	// Type Nullable: false
	

	return !m_percentPlayed.has_value();
}

void GetMusicGenreImageParams::setPercentPlayedNull() {
	m_percentPlayed = std::nullopt;
}


const qint32 &GetMusicGenreImageParams::quality() const {
	return m_quality.value();
}

void GetMusicGenreImageParams::setQuality(qint32 newQuality)  {
	m_quality = newQuality;
}

bool GetMusicGenreImageParams::qualityNull() const {
	// Nullable: true
	// Type Nullable: false
	

	return !m_quality.has_value();
}

void GetMusicGenreImageParams::setQualityNull() {
	m_quality = std::nullopt;
}


const QString &GetMusicGenreImageParams::tag() const {
	return m_tag;
}

void GetMusicGenreImageParams::setTag(QString newTag)  {
	m_tag = newTag;
}

bool GetMusicGenreImageParams::tagNull() const {
	// Nullable: true
	// Type Nullable: true
	

	return m_tag.isNull();
}

void GetMusicGenreImageParams::setTagNull() {
	m_tag.clear();
}


const qint32 &GetMusicGenreImageParams::unplayedCount() const {
	return m_unplayedCount.value();
}

void GetMusicGenreImageParams::setUnplayedCount(qint32 newUnplayedCount)  {
	m_unplayedCount = newUnplayedCount;
}

bool GetMusicGenreImageParams::unplayedCountNull() const {
	// Nullable: true
	// Type Nullable: false
	

	return !m_unplayedCount.has_value();
}

void GetMusicGenreImageParams::setUnplayedCountNull() {
	m_unplayedCount = std::nullopt;
}


const qint32 &GetMusicGenreImageParams::width() const {
	return m_width.value();
}

void GetMusicGenreImageParams::setWidth(qint32 newWidth)  {
	m_width = newWidth;
}

bool GetMusicGenreImageParams::widthNull() const {
	// Nullable: true
	// Type Nullable: false
	

	return !m_width.has_value();
}

void GetMusicGenreImageParams::setWidthNull() {
	m_width = std::nullopt;
}




// GetMusicGenreImageByIndexParams

const qint32 &GetMusicGenreImageByIndexParams::imageIndex() const {
	return m_imageIndex;
}

void GetMusicGenreImageByIndexParams::setImageIndex(qint32 newImageIndex) {
	m_imageIndex = newImageIndex;
}


const ImageType &GetMusicGenreImageByIndexParams::imageType() const {
	return m_imageType;
}

void GetMusicGenreImageByIndexParams::setImageType(ImageType newImageType) {
	m_imageType = newImageType;
}


const QString &GetMusicGenreImageByIndexParams::name() const {
	return m_name;
}

void GetMusicGenreImageByIndexParams::setName(QString newName) {
	m_name = newName;
}


const bool &GetMusicGenreImageByIndexParams::addPlayedIndicator() const {
	return m_addPlayedIndicator.value();
}

void GetMusicGenreImageByIndexParams::setAddPlayedIndicator(bool newAddPlayedIndicator)  {
	m_addPlayedIndicator = newAddPlayedIndicator;
}

bool GetMusicGenreImageByIndexParams::addPlayedIndicatorNull() const {
	// Nullable: true
	// Type Nullable: false
	

	return !m_addPlayedIndicator.has_value();
}

void GetMusicGenreImageByIndexParams::setAddPlayedIndicatorNull() {
	m_addPlayedIndicator = std::nullopt;
}


const QString &GetMusicGenreImageByIndexParams::backgroundColor() const {
	return m_backgroundColor;
}

void GetMusicGenreImageByIndexParams::setBackgroundColor(QString newBackgroundColor)  {
	m_backgroundColor = newBackgroundColor;
}

bool GetMusicGenreImageByIndexParams::backgroundColorNull() const {
	// Nullable: true
	// Type Nullable: true
	

	return m_backgroundColor.isNull();
}

void GetMusicGenreImageByIndexParams::setBackgroundColorNull() {
	m_backgroundColor.clear();
}


const qint32 &GetMusicGenreImageByIndexParams::blur() const {
	return m_blur.value();
}

void GetMusicGenreImageByIndexParams::setBlur(qint32 newBlur)  {
	m_blur = newBlur;
}

bool GetMusicGenreImageByIndexParams::blurNull() const {
	// Nullable: true
	// Type Nullable: false
	

	return !m_blur.has_value();
}

void GetMusicGenreImageByIndexParams::setBlurNull() {
	m_blur = std::nullopt;
}


const bool &GetMusicGenreImageByIndexParams::cropWhitespace() const {
	return m_cropWhitespace.value();
}

void GetMusicGenreImageByIndexParams::setCropWhitespace(bool newCropWhitespace)  {
	m_cropWhitespace = newCropWhitespace;
}

bool GetMusicGenreImageByIndexParams::cropWhitespaceNull() const {
	// Nullable: true
	// Type Nullable: false
	

	return !m_cropWhitespace.has_value();
}

void GetMusicGenreImageByIndexParams::setCropWhitespaceNull() {
	m_cropWhitespace = std::nullopt;
}


const QString &GetMusicGenreImageByIndexParams::foregroundLayer() const {
	return m_foregroundLayer;
}

void GetMusicGenreImageByIndexParams::setForegroundLayer(QString newForegroundLayer)  {
	m_foregroundLayer = newForegroundLayer;
}

bool GetMusicGenreImageByIndexParams::foregroundLayerNull() const {
	// Nullable: true
	// Type Nullable: true
	

	return m_foregroundLayer.isNull();
}

void GetMusicGenreImageByIndexParams::setForegroundLayerNull() {
	m_foregroundLayer.clear();
}


const ImageFormat &GetMusicGenreImageByIndexParams::format() const {
	return m_format;
}

void GetMusicGenreImageByIndexParams::setFormat(ImageFormat newFormat)  {
	m_format = newFormat;
}

bool GetMusicGenreImageByIndexParams::formatNull() const {
	// Nullable: true
	// Type Nullable: true
	

	return m_format== ImageFormat::EnumNotSet;
}

void GetMusicGenreImageByIndexParams::setFormatNull() {
	m_format= ImageFormat::EnumNotSet;
}


const qint32 &GetMusicGenreImageByIndexParams::height() const {
	return m_height.value();
}

void GetMusicGenreImageByIndexParams::setHeight(qint32 newHeight)  {
	m_height = newHeight;
}

bool GetMusicGenreImageByIndexParams::heightNull() const {
	// Nullable: true
	// Type Nullable: false
	

	return !m_height.has_value();
}

void GetMusicGenreImageByIndexParams::setHeightNull() {
	m_height = std::nullopt;
}


const qint32 &GetMusicGenreImageByIndexParams::maxHeight() const {
	return m_maxHeight.value();
}

void GetMusicGenreImageByIndexParams::setMaxHeight(qint32 newMaxHeight)  {
	m_maxHeight = newMaxHeight;
}

bool GetMusicGenreImageByIndexParams::maxHeightNull() const {
	// Nullable: true
	// Type Nullable: false
	

	return !m_maxHeight.has_value();
}

void GetMusicGenreImageByIndexParams::setMaxHeightNull() {
	m_maxHeight = std::nullopt;
}


const qint32 &GetMusicGenreImageByIndexParams::maxWidth() const {
	return m_maxWidth.value();
}

void GetMusicGenreImageByIndexParams::setMaxWidth(qint32 newMaxWidth)  {
	m_maxWidth = newMaxWidth;
}

bool GetMusicGenreImageByIndexParams::maxWidthNull() const {
	// Nullable: true
	// Type Nullable: false
	

	return !m_maxWidth.has_value();
}

void GetMusicGenreImageByIndexParams::setMaxWidthNull() {
	m_maxWidth = std::nullopt;
}


const double &GetMusicGenreImageByIndexParams::percentPlayed() const {
	return m_percentPlayed.value();
}

void GetMusicGenreImageByIndexParams::setPercentPlayed(double newPercentPlayed)  {
	m_percentPlayed = newPercentPlayed;
}

bool GetMusicGenreImageByIndexParams::percentPlayedNull() const {
	// Nullable: true
	// Type Nullable: false
	

	return !m_percentPlayed.has_value();
}

void GetMusicGenreImageByIndexParams::setPercentPlayedNull() {
	m_percentPlayed = std::nullopt;
}


const qint32 &GetMusicGenreImageByIndexParams::quality() const {
	return m_quality.value();
}

void GetMusicGenreImageByIndexParams::setQuality(qint32 newQuality)  {
	m_quality = newQuality;
}

bool GetMusicGenreImageByIndexParams::qualityNull() const {
	// Nullable: true
	// Type Nullable: false
	

	return !m_quality.has_value();
}

void GetMusicGenreImageByIndexParams::setQualityNull() {
	m_quality = std::nullopt;
}


const QString &GetMusicGenreImageByIndexParams::tag() const {
	return m_tag;
}

void GetMusicGenreImageByIndexParams::setTag(QString newTag)  {
	m_tag = newTag;
}

bool GetMusicGenreImageByIndexParams::tagNull() const {
	// Nullable: true
	// Type Nullable: true
	

	return m_tag.isNull();
}

void GetMusicGenreImageByIndexParams::setTagNull() {
	m_tag.clear();
}


const qint32 &GetMusicGenreImageByIndexParams::unplayedCount() const {
	return m_unplayedCount.value();
}

void GetMusicGenreImageByIndexParams::setUnplayedCount(qint32 newUnplayedCount)  {
	m_unplayedCount = newUnplayedCount;
}

bool GetMusicGenreImageByIndexParams::unplayedCountNull() const {
	// Nullable: true
	// Type Nullable: false
	

	return !m_unplayedCount.has_value();
}

void GetMusicGenreImageByIndexParams::setUnplayedCountNull() {
	m_unplayedCount = std::nullopt;
}


const qint32 &GetMusicGenreImageByIndexParams::width() const {
	return m_width.value();
}

void GetMusicGenreImageByIndexParams::setWidth(qint32 newWidth)  {
	m_width = newWidth;
}

bool GetMusicGenreImageByIndexParams::widthNull() const {
	// Nullable: true
	// Type Nullable: false
	

	return !m_width.has_value();
}

void GetMusicGenreImageByIndexParams::setWidthNull() {
	m_width = std::nullopt;
}




// GetMusicGenresParams

const QList<ImageType> &GetMusicGenresParams::enableImageTypes() const {
	return m_enableImageTypes;
}

void GetMusicGenresParams::setEnableImageTypes(QList<ImageType> newEnableImageTypes)  {
	m_enableImageTypes = newEnableImageTypes;
}

bool GetMusicGenresParams::enableImageTypesNull() const {
	// Nullable: true
	// Type Nullable: true
	

	return m_enableImageTypes.size() == 0;
}

void GetMusicGenresParams::setEnableImageTypesNull() {
	m_enableImageTypes.clear();
}


const bool &GetMusicGenresParams::enableImages() const {
	return m_enableImages.value();
}

void GetMusicGenresParams::setEnableImages(bool newEnableImages)  {
	m_enableImages = newEnableImages;
}

bool GetMusicGenresParams::enableImagesNull() const {
	// Nullable: true
	// Type Nullable: false
	

	return !m_enableImages.has_value();
}

void GetMusicGenresParams::setEnableImagesNull() {
	m_enableImages = std::nullopt;
}


const bool &GetMusicGenresParams::enableTotalRecordCount() const {
	return m_enableTotalRecordCount.value();
}

void GetMusicGenresParams::setEnableTotalRecordCount(bool newEnableTotalRecordCount)  {
	m_enableTotalRecordCount = newEnableTotalRecordCount;
}

bool GetMusicGenresParams::enableTotalRecordCountNull() const {
	// Nullable: false
	// Type Nullable: false
	

	return !m_enableTotalRecordCount.has_value();
}

void GetMusicGenresParams::setEnableTotalRecordCountNull() {
	m_enableTotalRecordCount = std::nullopt;
}


const QStringList &GetMusicGenresParams::excludeItemTypes() const {
	return m_excludeItemTypes;
}

void GetMusicGenresParams::setExcludeItemTypes(QStringList newExcludeItemTypes)  {
	m_excludeItemTypes = newExcludeItemTypes;
}

bool GetMusicGenresParams::excludeItemTypesNull() const {
	// Nullable: true
	// Type Nullable: true
	

	return m_excludeItemTypes.size() == 0;
}

void GetMusicGenresParams::setExcludeItemTypesNull() {
	m_excludeItemTypes.clear();
}


const QList<ItemFields> &GetMusicGenresParams::fields() const {
	return m_fields;
}

void GetMusicGenresParams::setFields(QList<ItemFields> newFields)  {
	m_fields = newFields;
}

bool GetMusicGenresParams::fieldsNull() const {
	// Nullable: true
	// Type Nullable: true
	

	return m_fields.size() == 0;
}

void GetMusicGenresParams::setFieldsNull() {
	m_fields.clear();
}


const qint32 &GetMusicGenresParams::imageTypeLimit() const {
	return m_imageTypeLimit.value();
}

void GetMusicGenresParams::setImageTypeLimit(qint32 newImageTypeLimit)  {
	m_imageTypeLimit = newImageTypeLimit;
}

bool GetMusicGenresParams::imageTypeLimitNull() const {
	// Nullable: true
	// Type Nullable: false
	

	return !m_imageTypeLimit.has_value();
}

void GetMusicGenresParams::setImageTypeLimitNull() {
	m_imageTypeLimit = std::nullopt;
}


const QStringList &GetMusicGenresParams::includeItemTypes() const {
	return m_includeItemTypes;
}

void GetMusicGenresParams::setIncludeItemTypes(QStringList newIncludeItemTypes)  {
	m_includeItemTypes = newIncludeItemTypes;
}

bool GetMusicGenresParams::includeItemTypesNull() const {
	// Nullable: true
	// Type Nullable: true
	

	return m_includeItemTypes.size() == 0;
}

void GetMusicGenresParams::setIncludeItemTypesNull() {
	m_includeItemTypes.clear();
}


const bool &GetMusicGenresParams::isFavorite() const {
	return m_isFavorite.value();
}

void GetMusicGenresParams::setIsFavorite(bool newIsFavorite)  {
	m_isFavorite = newIsFavorite;
}

bool GetMusicGenresParams::isFavoriteNull() const {
	// Nullable: true
	// Type Nullable: false
	

	return !m_isFavorite.has_value();
}

void GetMusicGenresParams::setIsFavoriteNull() {
	m_isFavorite = std::nullopt;
}


const qint32 &GetMusicGenresParams::limit() const {
	return m_limit.value();
}

void GetMusicGenresParams::setLimit(qint32 newLimit)  {
	m_limit = newLimit;
}

bool GetMusicGenresParams::limitNull() const {
	// Nullable: true
	// Type Nullable: false
	

	return !m_limit.has_value();
}

void GetMusicGenresParams::setLimitNull() {
	m_limit = std::nullopt;
}


const QString &GetMusicGenresParams::nameLessThan() const {
	return m_nameLessThan;
}

void GetMusicGenresParams::setNameLessThan(QString newNameLessThan)  {
	m_nameLessThan = newNameLessThan;
}

bool GetMusicGenresParams::nameLessThanNull() const {
	// Nullable: true
	// Type Nullable: true
	

	return m_nameLessThan.isNull();
}

void GetMusicGenresParams::setNameLessThanNull() {
	m_nameLessThan.clear();
}


const QString &GetMusicGenresParams::nameStartsWith() const {
	return m_nameStartsWith;
}

void GetMusicGenresParams::setNameStartsWith(QString newNameStartsWith)  {
	m_nameStartsWith = newNameStartsWith;
}

bool GetMusicGenresParams::nameStartsWithNull() const {
	// Nullable: true
	// Type Nullable: true
	

	return m_nameStartsWith.isNull();
}

void GetMusicGenresParams::setNameStartsWithNull() {
	m_nameStartsWith.clear();
}


const QString &GetMusicGenresParams::nameStartsWithOrGreater() const {
	return m_nameStartsWithOrGreater;
}

void GetMusicGenresParams::setNameStartsWithOrGreater(QString newNameStartsWithOrGreater)  {
	m_nameStartsWithOrGreater = newNameStartsWithOrGreater;
}

bool GetMusicGenresParams::nameStartsWithOrGreaterNull() const {
	// Nullable: true
	// Type Nullable: true
	

	return m_nameStartsWithOrGreater.isNull();
}

void GetMusicGenresParams::setNameStartsWithOrGreaterNull() {
	m_nameStartsWithOrGreater.clear();
}


const QString &GetMusicGenresParams::parentId() const {
	return m_parentId;
}

void GetMusicGenresParams::setParentId(QString newParentId)  {
	m_parentId = newParentId;
}

bool GetMusicGenresParams::parentIdNull() const {
	// Nullable: true
	// Type Nullable: true
	

	return m_parentId.isNull();
}

void GetMusicGenresParams::setParentIdNull() {
	m_parentId.clear();
}


const QString &GetMusicGenresParams::searchTerm() const {
	return m_searchTerm;
}

void GetMusicGenresParams::setSearchTerm(QString newSearchTerm)  {
	m_searchTerm = newSearchTerm;
}

bool GetMusicGenresParams::searchTermNull() const {
	// Nullable: true
	// Type Nullable: true
	

	return m_searchTerm.isNull();
}

void GetMusicGenresParams::setSearchTermNull() {
	m_searchTerm.clear();
}


const qint32 &GetMusicGenresParams::startIndex() const {
	return m_startIndex.value();
}

void GetMusicGenresParams::setStartIndex(qint32 newStartIndex)  {
	m_startIndex = newStartIndex;
}

bool GetMusicGenresParams::startIndexNull() const {
	// Nullable: true
	// Type Nullable: false
	

	return !m_startIndex.has_value();
}

void GetMusicGenresParams::setStartIndexNull() {
	m_startIndex = std::nullopt;
}


const QString &GetMusicGenresParams::userId() const {
	return m_userId;
}

void GetMusicGenresParams::setUserId(QString newUserId)  {
	m_userId = newUserId;
}

bool GetMusicGenresParams::userIdNull() const {
	// Nullable: true
	// Type Nullable: true
	

	return m_userId.isNull();
}

void GetMusicGenresParams::setUserIdNull() {
	m_userId.clear();
}




// GetMusicVideoRemoteSearchResultsParams

const QSharedPointer<MusicVideoInfoRemoteSearchQuery> &GetMusicVideoRemoteSearchResultsParams::body() const {
	return m_body;
}

void GetMusicVideoRemoteSearchResultsParams::setBody(QSharedPointer<MusicVideoInfoRemoteSearchQuery> newBody) {
	m_body = newBody;
}




// GetNamedConfigurationParams

const QString &GetNamedConfigurationParams::key() const {
	return m_key;
}

void GetNamedConfigurationParams::setKey(QString newKey) {
	m_key = newKey;
}




// GetNetworkSharesParams



// GetNextUpParams

const bool &GetNextUpParams::disableFirstEpisode() const {
	return m_disableFirstEpisode.value();
}

void GetNextUpParams::setDisableFirstEpisode(bool newDisableFirstEpisode)  {
	m_disableFirstEpisode = newDisableFirstEpisode;
}

bool GetNextUpParams::disableFirstEpisodeNull() const {
	// Nullable: false
	// Type Nullable: false
	

	return !m_disableFirstEpisode.has_value();
}

void GetNextUpParams::setDisableFirstEpisodeNull() {
	m_disableFirstEpisode = std::nullopt;
}


const QList<ImageType> &GetNextUpParams::enableImageTypes() const {
	return m_enableImageTypes;
}

void GetNextUpParams::setEnableImageTypes(QList<ImageType> newEnableImageTypes)  {
	m_enableImageTypes = newEnableImageTypes;
}

bool GetNextUpParams::enableImageTypesNull() const {
	// Nullable: true
	// Type Nullable: true
	

	return m_enableImageTypes.size() == 0;
}

void GetNextUpParams::setEnableImageTypesNull() {
	m_enableImageTypes.clear();
}


const bool &GetNextUpParams::enableImges() const {
	return m_enableImges.value();
}

void GetNextUpParams::setEnableImges(bool newEnableImges)  {
	m_enableImges = newEnableImges;
}

bool GetNextUpParams::enableImgesNull() const {
	// Nullable: true
	// Type Nullable: false
	

	return !m_enableImges.has_value();
}

void GetNextUpParams::setEnableImgesNull() {
	m_enableImges = std::nullopt;
}


const bool &GetNextUpParams::enableTotalRecordCount() const {
	return m_enableTotalRecordCount.value();
}

void GetNextUpParams::setEnableTotalRecordCount(bool newEnableTotalRecordCount)  {
	m_enableTotalRecordCount = newEnableTotalRecordCount;
}

bool GetNextUpParams::enableTotalRecordCountNull() const {
	// Nullable: false
	// Type Nullable: false
	

	return !m_enableTotalRecordCount.has_value();
}

void GetNextUpParams::setEnableTotalRecordCountNull() {
	m_enableTotalRecordCount = std::nullopt;
}


const bool &GetNextUpParams::enableUserData() const {
	return m_enableUserData.value();
}

void GetNextUpParams::setEnableUserData(bool newEnableUserData)  {
	m_enableUserData = newEnableUserData;
}

bool GetNextUpParams::enableUserDataNull() const {
	// Nullable: true
	// Type Nullable: false
	

	return !m_enableUserData.has_value();
}

void GetNextUpParams::setEnableUserDataNull() {
	m_enableUserData = std::nullopt;
}


const QList<ItemFields> &GetNextUpParams::fields() const {
	return m_fields;
}

void GetNextUpParams::setFields(QList<ItemFields> newFields)  {
	m_fields = newFields;
}

bool GetNextUpParams::fieldsNull() const {
	// Nullable: true
	// Type Nullable: true
	

	return m_fields.size() == 0;
}

void GetNextUpParams::setFieldsNull() {
	m_fields.clear();
}


const qint32 &GetNextUpParams::imageTypeLimit() const {
	return m_imageTypeLimit.value();
}

void GetNextUpParams::setImageTypeLimit(qint32 newImageTypeLimit)  {
	m_imageTypeLimit = newImageTypeLimit;
}

bool GetNextUpParams::imageTypeLimitNull() const {
	// Nullable: true
	// Type Nullable: false
	

	return !m_imageTypeLimit.has_value();
}

void GetNextUpParams::setImageTypeLimitNull() {
	m_imageTypeLimit = std::nullopt;
}


const qint32 &GetNextUpParams::limit() const {
	return m_limit.value();
}

void GetNextUpParams::setLimit(qint32 newLimit)  {
	m_limit = newLimit;
}

bool GetNextUpParams::limitNull() const {
	// Nullable: true
	// Type Nullable: false
	

	return !m_limit.has_value();
}

void GetNextUpParams::setLimitNull() {
	m_limit = std::nullopt;
}


const QString &GetNextUpParams::parentId() const {
	return m_parentId;
}

void GetNextUpParams::setParentId(QString newParentId)  {
	m_parentId = newParentId;
}

bool GetNextUpParams::parentIdNull() const {
	// Nullable: true
	// Type Nullable: true
	

	return m_parentId.isNull();
}

void GetNextUpParams::setParentIdNull() {
	m_parentId.clear();
}


const QString &GetNextUpParams::seriesId() const {
	return m_seriesId;
}

void GetNextUpParams::setSeriesId(QString newSeriesId)  {
	m_seriesId = newSeriesId;
}

bool GetNextUpParams::seriesIdNull() const {
	// Nullable: true
	// Type Nullable: true
	

	return m_seriesId.isNull();
}

void GetNextUpParams::setSeriesIdNull() {
	m_seriesId.clear();
}


const qint32 &GetNextUpParams::startIndex() const {
	return m_startIndex.value();
}

void GetNextUpParams::setStartIndex(qint32 newStartIndex)  {
	m_startIndex = newStartIndex;
}

bool GetNextUpParams::startIndexNull() const {
	// Nullable: true
	// Type Nullable: false
	

	return !m_startIndex.has_value();
}

void GetNextUpParams::setStartIndexNull() {
	m_startIndex = std::nullopt;
}


const QString &GetNextUpParams::userId() const {
	return m_userId;
}

void GetNextUpParams::setUserId(QString newUserId)  {
	m_userId = newUserId;
}

bool GetNextUpParams::userIdNull() const {
	// Nullable: true
	// Type Nullable: true
	

	return m_userId.isNull();
}

void GetNextUpParams::setUserIdNull() {
	m_userId.clear();
}




// GetNotificationServicesParams



// GetNotificationTypesParams



// GetNotificationsParams

const QString &GetNotificationsParams::userId() const {
	return m_userId;
}

void GetNotificationsParams::setUserId(QString newUserId) {
	m_userId = newUserId;
}




// GetNotificationsSummaryParams

const QString &GetNotificationsSummaryParams::userId() const {
	return m_userId;
}

void GetNotificationsSummaryParams::setUserId(QString newUserId) {
	m_userId = newUserId;
}




// GetPackageInfoParams

const QString &GetPackageInfoParams::name() const {
	return m_name;
}

void GetPackageInfoParams::setName(QString newName) {
	m_name = newName;
}


const QString &GetPackageInfoParams::assemblyGuid() const {
	return m_assemblyGuid;
}

void GetPackageInfoParams::setAssemblyGuid(QString newAssemblyGuid)  {
	m_assemblyGuid = newAssemblyGuid;
}

bool GetPackageInfoParams::assemblyGuidNull() const {
	// Nullable: true
	// Type Nullable: true
	

	return m_assemblyGuid.isNull();
}

void GetPackageInfoParams::setAssemblyGuidNull() {
	m_assemblyGuid.clear();
}




// GetPackagesParams



// GetParentPathParams

const QString &GetParentPathParams::path() const {
	return m_path;
}

void GetParentPathParams::setPath(QString newPath) {
	m_path = newPath;
}




// GetParentalRatingsParams



// GetPasswordResetProvidersParams



// GetPersonParams

const QString &GetPersonParams::name() const {
	return m_name;
}

void GetPersonParams::setName(QString newName) {
	m_name = newName;
}


const QString &GetPersonParams::userId() const {
	return m_userId;
}

void GetPersonParams::setUserId(QString newUserId)  {
	m_userId = newUserId;
}

bool GetPersonParams::userIdNull() const {
	// Nullable: true
	// Type Nullable: true
	

	return m_userId.isNull();
}

void GetPersonParams::setUserIdNull() {
	m_userId.clear();
}




// GetPersonImageParams

const ImageType &GetPersonImageParams::imageType() const {
	return m_imageType;
}

void GetPersonImageParams::setImageType(ImageType newImageType) {
	m_imageType = newImageType;
}


const QString &GetPersonImageParams::name() const {
	return m_name;
}

void GetPersonImageParams::setName(QString newName) {
	m_name = newName;
}


const bool &GetPersonImageParams::addPlayedIndicator() const {
	return m_addPlayedIndicator.value();
}

void GetPersonImageParams::setAddPlayedIndicator(bool newAddPlayedIndicator)  {
	m_addPlayedIndicator = newAddPlayedIndicator;
}

bool GetPersonImageParams::addPlayedIndicatorNull() const {
	// Nullable: true
	// Type Nullable: false
	

	return !m_addPlayedIndicator.has_value();
}

void GetPersonImageParams::setAddPlayedIndicatorNull() {
	m_addPlayedIndicator = std::nullopt;
}


const QString &GetPersonImageParams::backgroundColor() const {
	return m_backgroundColor;
}

void GetPersonImageParams::setBackgroundColor(QString newBackgroundColor)  {
	m_backgroundColor = newBackgroundColor;
}

bool GetPersonImageParams::backgroundColorNull() const {
	// Nullable: true
	// Type Nullable: true
	

	return m_backgroundColor.isNull();
}

void GetPersonImageParams::setBackgroundColorNull() {
	m_backgroundColor.clear();
}


const qint32 &GetPersonImageParams::blur() const {
	return m_blur.value();
}

void GetPersonImageParams::setBlur(qint32 newBlur)  {
	m_blur = newBlur;
}

bool GetPersonImageParams::blurNull() const {
	// Nullable: true
	// Type Nullable: false
	

	return !m_blur.has_value();
}

void GetPersonImageParams::setBlurNull() {
	m_blur = std::nullopt;
}


const bool &GetPersonImageParams::cropWhitespace() const {
	return m_cropWhitespace.value();
}

void GetPersonImageParams::setCropWhitespace(bool newCropWhitespace)  {
	m_cropWhitespace = newCropWhitespace;
}

bool GetPersonImageParams::cropWhitespaceNull() const {
	// Nullable: true
	// Type Nullable: false
	

	return !m_cropWhitespace.has_value();
}

void GetPersonImageParams::setCropWhitespaceNull() {
	m_cropWhitespace = std::nullopt;
}


const QString &GetPersonImageParams::foregroundLayer() const {
	return m_foregroundLayer;
}

void GetPersonImageParams::setForegroundLayer(QString newForegroundLayer)  {
	m_foregroundLayer = newForegroundLayer;
}

bool GetPersonImageParams::foregroundLayerNull() const {
	// Nullable: true
	// Type Nullable: true
	

	return m_foregroundLayer.isNull();
}

void GetPersonImageParams::setForegroundLayerNull() {
	m_foregroundLayer.clear();
}


const ImageFormat &GetPersonImageParams::format() const {
	return m_format;
}

void GetPersonImageParams::setFormat(ImageFormat newFormat)  {
	m_format = newFormat;
}

bool GetPersonImageParams::formatNull() const {
	// Nullable: true
	// Type Nullable: true
	

	return m_format== ImageFormat::EnumNotSet;
}

void GetPersonImageParams::setFormatNull() {
	m_format= ImageFormat::EnumNotSet;
}


const qint32 &GetPersonImageParams::height() const {
	return m_height.value();
}

void GetPersonImageParams::setHeight(qint32 newHeight)  {
	m_height = newHeight;
}

bool GetPersonImageParams::heightNull() const {
	// Nullable: true
	// Type Nullable: false
	

	return !m_height.has_value();
}

void GetPersonImageParams::setHeightNull() {
	m_height = std::nullopt;
}


const qint32 &GetPersonImageParams::imageIndex() const {
	return m_imageIndex.value();
}

void GetPersonImageParams::setImageIndex(qint32 newImageIndex)  {
	m_imageIndex = newImageIndex;
}

bool GetPersonImageParams::imageIndexNull() const {
	// Nullable: true
	// Type Nullable: false
	

	return !m_imageIndex.has_value();
}

void GetPersonImageParams::setImageIndexNull() {
	m_imageIndex = std::nullopt;
}


const qint32 &GetPersonImageParams::maxHeight() const {
	return m_maxHeight.value();
}

void GetPersonImageParams::setMaxHeight(qint32 newMaxHeight)  {
	m_maxHeight = newMaxHeight;
}

bool GetPersonImageParams::maxHeightNull() const {
	// Nullable: true
	// Type Nullable: false
	

	return !m_maxHeight.has_value();
}

void GetPersonImageParams::setMaxHeightNull() {
	m_maxHeight = std::nullopt;
}


const qint32 &GetPersonImageParams::maxWidth() const {
	return m_maxWidth.value();
}

void GetPersonImageParams::setMaxWidth(qint32 newMaxWidth)  {
	m_maxWidth = newMaxWidth;
}

bool GetPersonImageParams::maxWidthNull() const {
	// Nullable: true
	// Type Nullable: false
	

	return !m_maxWidth.has_value();
}

void GetPersonImageParams::setMaxWidthNull() {
	m_maxWidth = std::nullopt;
}


const double &GetPersonImageParams::percentPlayed() const {
	return m_percentPlayed.value();
}

void GetPersonImageParams::setPercentPlayed(double newPercentPlayed)  {
	m_percentPlayed = newPercentPlayed;
}

bool GetPersonImageParams::percentPlayedNull() const {
	// Nullable: true
	// Type Nullable: false
	

	return !m_percentPlayed.has_value();
}

void GetPersonImageParams::setPercentPlayedNull() {
	m_percentPlayed = std::nullopt;
}


const qint32 &GetPersonImageParams::quality() const {
	return m_quality.value();
}

void GetPersonImageParams::setQuality(qint32 newQuality)  {
	m_quality = newQuality;
}

bool GetPersonImageParams::qualityNull() const {
	// Nullable: true
	// Type Nullable: false
	

	return !m_quality.has_value();
}

void GetPersonImageParams::setQualityNull() {
	m_quality = std::nullopt;
}


const QString &GetPersonImageParams::tag() const {
	return m_tag;
}

void GetPersonImageParams::setTag(QString newTag)  {
	m_tag = newTag;
}

bool GetPersonImageParams::tagNull() const {
	// Nullable: true
	// Type Nullable: true
	

	return m_tag.isNull();
}

void GetPersonImageParams::setTagNull() {
	m_tag.clear();
}


const qint32 &GetPersonImageParams::unplayedCount() const {
	return m_unplayedCount.value();
}

void GetPersonImageParams::setUnplayedCount(qint32 newUnplayedCount)  {
	m_unplayedCount = newUnplayedCount;
}

bool GetPersonImageParams::unplayedCountNull() const {
	// Nullable: true
	// Type Nullable: false
	

	return !m_unplayedCount.has_value();
}

void GetPersonImageParams::setUnplayedCountNull() {
	m_unplayedCount = std::nullopt;
}


const qint32 &GetPersonImageParams::width() const {
	return m_width.value();
}

void GetPersonImageParams::setWidth(qint32 newWidth)  {
	m_width = newWidth;
}

bool GetPersonImageParams::widthNull() const {
	// Nullable: true
	// Type Nullable: false
	

	return !m_width.has_value();
}

void GetPersonImageParams::setWidthNull() {
	m_width = std::nullopt;
}




// GetPersonImageByIndexParams

const qint32 &GetPersonImageByIndexParams::imageIndex() const {
	return m_imageIndex;
}

void GetPersonImageByIndexParams::setImageIndex(qint32 newImageIndex) {
	m_imageIndex = newImageIndex;
}


const ImageType &GetPersonImageByIndexParams::imageType() const {
	return m_imageType;
}

void GetPersonImageByIndexParams::setImageType(ImageType newImageType) {
	m_imageType = newImageType;
}


const QString &GetPersonImageByIndexParams::name() const {
	return m_name;
}

void GetPersonImageByIndexParams::setName(QString newName) {
	m_name = newName;
}


const bool &GetPersonImageByIndexParams::addPlayedIndicator() const {
	return m_addPlayedIndicator.value();
}

void GetPersonImageByIndexParams::setAddPlayedIndicator(bool newAddPlayedIndicator)  {
	m_addPlayedIndicator = newAddPlayedIndicator;
}

bool GetPersonImageByIndexParams::addPlayedIndicatorNull() const {
	// Nullable: true
	// Type Nullable: false
	

	return !m_addPlayedIndicator.has_value();
}

void GetPersonImageByIndexParams::setAddPlayedIndicatorNull() {
	m_addPlayedIndicator = std::nullopt;
}


const QString &GetPersonImageByIndexParams::backgroundColor() const {
	return m_backgroundColor;
}

void GetPersonImageByIndexParams::setBackgroundColor(QString newBackgroundColor)  {
	m_backgroundColor = newBackgroundColor;
}

bool GetPersonImageByIndexParams::backgroundColorNull() const {
	// Nullable: true
	// Type Nullable: true
	

	return m_backgroundColor.isNull();
}

void GetPersonImageByIndexParams::setBackgroundColorNull() {
	m_backgroundColor.clear();
}


const qint32 &GetPersonImageByIndexParams::blur() const {
	return m_blur.value();
}

void GetPersonImageByIndexParams::setBlur(qint32 newBlur)  {
	m_blur = newBlur;
}

bool GetPersonImageByIndexParams::blurNull() const {
	// Nullable: true
	// Type Nullable: false
	

	return !m_blur.has_value();
}

void GetPersonImageByIndexParams::setBlurNull() {
	m_blur = std::nullopt;
}


const bool &GetPersonImageByIndexParams::cropWhitespace() const {
	return m_cropWhitespace.value();
}

void GetPersonImageByIndexParams::setCropWhitespace(bool newCropWhitespace)  {
	m_cropWhitespace = newCropWhitespace;
}

bool GetPersonImageByIndexParams::cropWhitespaceNull() const {
	// Nullable: true
	// Type Nullable: false
	

	return !m_cropWhitespace.has_value();
}

void GetPersonImageByIndexParams::setCropWhitespaceNull() {
	m_cropWhitespace = std::nullopt;
}


const QString &GetPersonImageByIndexParams::foregroundLayer() const {
	return m_foregroundLayer;
}

void GetPersonImageByIndexParams::setForegroundLayer(QString newForegroundLayer)  {
	m_foregroundLayer = newForegroundLayer;
}

bool GetPersonImageByIndexParams::foregroundLayerNull() const {
	// Nullable: true
	// Type Nullable: true
	

	return m_foregroundLayer.isNull();
}

void GetPersonImageByIndexParams::setForegroundLayerNull() {
	m_foregroundLayer.clear();
}


const ImageFormat &GetPersonImageByIndexParams::format() const {
	return m_format;
}

void GetPersonImageByIndexParams::setFormat(ImageFormat newFormat)  {
	m_format = newFormat;
}

bool GetPersonImageByIndexParams::formatNull() const {
	// Nullable: true
	// Type Nullable: true
	

	return m_format== ImageFormat::EnumNotSet;
}

void GetPersonImageByIndexParams::setFormatNull() {
	m_format= ImageFormat::EnumNotSet;
}


const qint32 &GetPersonImageByIndexParams::height() const {
	return m_height.value();
}

void GetPersonImageByIndexParams::setHeight(qint32 newHeight)  {
	m_height = newHeight;
}

bool GetPersonImageByIndexParams::heightNull() const {
	// Nullable: true
	// Type Nullable: false
	

	return !m_height.has_value();
}

void GetPersonImageByIndexParams::setHeightNull() {
	m_height = std::nullopt;
}


const qint32 &GetPersonImageByIndexParams::maxHeight() const {
	return m_maxHeight.value();
}

void GetPersonImageByIndexParams::setMaxHeight(qint32 newMaxHeight)  {
	m_maxHeight = newMaxHeight;
}

bool GetPersonImageByIndexParams::maxHeightNull() const {
	// Nullable: true
	// Type Nullable: false
	

	return !m_maxHeight.has_value();
}

void GetPersonImageByIndexParams::setMaxHeightNull() {
	m_maxHeight = std::nullopt;
}


const qint32 &GetPersonImageByIndexParams::maxWidth() const {
	return m_maxWidth.value();
}

void GetPersonImageByIndexParams::setMaxWidth(qint32 newMaxWidth)  {
	m_maxWidth = newMaxWidth;
}

bool GetPersonImageByIndexParams::maxWidthNull() const {
	// Nullable: true
	// Type Nullable: false
	

	return !m_maxWidth.has_value();
}

void GetPersonImageByIndexParams::setMaxWidthNull() {
	m_maxWidth = std::nullopt;
}


const double &GetPersonImageByIndexParams::percentPlayed() const {
	return m_percentPlayed.value();
}

void GetPersonImageByIndexParams::setPercentPlayed(double newPercentPlayed)  {
	m_percentPlayed = newPercentPlayed;
}

bool GetPersonImageByIndexParams::percentPlayedNull() const {
	// Nullable: true
	// Type Nullable: false
	

	return !m_percentPlayed.has_value();
}

void GetPersonImageByIndexParams::setPercentPlayedNull() {
	m_percentPlayed = std::nullopt;
}


const qint32 &GetPersonImageByIndexParams::quality() const {
	return m_quality.value();
}

void GetPersonImageByIndexParams::setQuality(qint32 newQuality)  {
	m_quality = newQuality;
}

bool GetPersonImageByIndexParams::qualityNull() const {
	// Nullable: true
	// Type Nullable: false
	

	return !m_quality.has_value();
}

void GetPersonImageByIndexParams::setQualityNull() {
	m_quality = std::nullopt;
}


const QString &GetPersonImageByIndexParams::tag() const {
	return m_tag;
}

void GetPersonImageByIndexParams::setTag(QString newTag)  {
	m_tag = newTag;
}

bool GetPersonImageByIndexParams::tagNull() const {
	// Nullable: true
	// Type Nullable: true
	

	return m_tag.isNull();
}

void GetPersonImageByIndexParams::setTagNull() {
	m_tag.clear();
}


const qint32 &GetPersonImageByIndexParams::unplayedCount() const {
	return m_unplayedCount.value();
}

void GetPersonImageByIndexParams::setUnplayedCount(qint32 newUnplayedCount)  {
	m_unplayedCount = newUnplayedCount;
}

bool GetPersonImageByIndexParams::unplayedCountNull() const {
	// Nullable: true
	// Type Nullable: false
	

	return !m_unplayedCount.has_value();
}

void GetPersonImageByIndexParams::setUnplayedCountNull() {
	m_unplayedCount = std::nullopt;
}


const qint32 &GetPersonImageByIndexParams::width() const {
	return m_width.value();
}

void GetPersonImageByIndexParams::setWidth(qint32 newWidth)  {
	m_width = newWidth;
}

bool GetPersonImageByIndexParams::widthNull() const {
	// Nullable: true
	// Type Nullable: false
	

	return !m_width.has_value();
}

void GetPersonImageByIndexParams::setWidthNull() {
	m_width = std::nullopt;
}




// GetPersonRemoteSearchResultsParams

const QSharedPointer<PersonLookupInfoRemoteSearchQuery> &GetPersonRemoteSearchResultsParams::body() const {
	return m_body;
}

void GetPersonRemoteSearchResultsParams::setBody(QSharedPointer<PersonLookupInfoRemoteSearchQuery> newBody) {
	m_body = newBody;
}




// GetPersonsParams

const QString &GetPersonsParams::appearsInItemId() const {
	return m_appearsInItemId;
}

void GetPersonsParams::setAppearsInItemId(QString newAppearsInItemId)  {
	m_appearsInItemId = newAppearsInItemId;
}

bool GetPersonsParams::appearsInItemIdNull() const {
	// Nullable: true
	// Type Nullable: true
	

	return m_appearsInItemId.isNull();
}

void GetPersonsParams::setAppearsInItemIdNull() {
	m_appearsInItemId.clear();
}


const QList<ImageType> &GetPersonsParams::enableImageTypes() const {
	return m_enableImageTypes;
}

void GetPersonsParams::setEnableImageTypes(QList<ImageType> newEnableImageTypes)  {
	m_enableImageTypes = newEnableImageTypes;
}

bool GetPersonsParams::enableImageTypesNull() const {
	// Nullable: true
	// Type Nullable: true
	

	return m_enableImageTypes.size() == 0;
}

void GetPersonsParams::setEnableImageTypesNull() {
	m_enableImageTypes.clear();
}


const bool &GetPersonsParams::enableImages() const {
	return m_enableImages.value();
}

void GetPersonsParams::setEnableImages(bool newEnableImages)  {
	m_enableImages = newEnableImages;
}

bool GetPersonsParams::enableImagesNull() const {
	// Nullable: true
	// Type Nullable: false
	

	return !m_enableImages.has_value();
}

void GetPersonsParams::setEnableImagesNull() {
	m_enableImages = std::nullopt;
}


const bool &GetPersonsParams::enableUserData() const {
	return m_enableUserData.value();
}

void GetPersonsParams::setEnableUserData(bool newEnableUserData)  {
	m_enableUserData = newEnableUserData;
}

bool GetPersonsParams::enableUserDataNull() const {
	// Nullable: true
	// Type Nullable: false
	

	return !m_enableUserData.has_value();
}

void GetPersonsParams::setEnableUserDataNull() {
	m_enableUserData = std::nullopt;
}


const QStringList &GetPersonsParams::excludePersonTypes() const {
	return m_excludePersonTypes;
}

void GetPersonsParams::setExcludePersonTypes(QStringList newExcludePersonTypes)  {
	m_excludePersonTypes = newExcludePersonTypes;
}

bool GetPersonsParams::excludePersonTypesNull() const {
	// Nullable: true
	// Type Nullable: true
	

	return m_excludePersonTypes.size() == 0;
}

void GetPersonsParams::setExcludePersonTypesNull() {
	m_excludePersonTypes.clear();
}


const QList<ItemFields> &GetPersonsParams::fields() const {
	return m_fields;
}

void GetPersonsParams::setFields(QList<ItemFields> newFields)  {
	m_fields = newFields;
}

bool GetPersonsParams::fieldsNull() const {
	// Nullable: true
	// Type Nullable: true
	

	return m_fields.size() == 0;
}

void GetPersonsParams::setFieldsNull() {
	m_fields.clear();
}


const QList<ItemFilter> &GetPersonsParams::filters() const {
	return m_filters;
}

void GetPersonsParams::setFilters(QList<ItemFilter> newFilters)  {
	m_filters = newFilters;
}

bool GetPersonsParams::filtersNull() const {
	// Nullable: true
	// Type Nullable: true
	

	return m_filters.size() == 0;
}

void GetPersonsParams::setFiltersNull() {
	m_filters.clear();
}


const qint32 &GetPersonsParams::imageTypeLimit() const {
	return m_imageTypeLimit.value();
}

void GetPersonsParams::setImageTypeLimit(qint32 newImageTypeLimit)  {
	m_imageTypeLimit = newImageTypeLimit;
}

bool GetPersonsParams::imageTypeLimitNull() const {
	// Nullable: true
	// Type Nullable: false
	

	return !m_imageTypeLimit.has_value();
}

void GetPersonsParams::setImageTypeLimitNull() {
	m_imageTypeLimit = std::nullopt;
}


const bool &GetPersonsParams::isFavorite() const {
	return m_isFavorite.value();
}

void GetPersonsParams::setIsFavorite(bool newIsFavorite)  {
	m_isFavorite = newIsFavorite;
}

bool GetPersonsParams::isFavoriteNull() const {
	// Nullable: true
	// Type Nullable: false
	

	return !m_isFavorite.has_value();
}

void GetPersonsParams::setIsFavoriteNull() {
	m_isFavorite = std::nullopt;
}


const qint32 &GetPersonsParams::limit() const {
	return m_limit.value();
}

void GetPersonsParams::setLimit(qint32 newLimit)  {
	m_limit = newLimit;
}

bool GetPersonsParams::limitNull() const {
	// Nullable: true
	// Type Nullable: false
	

	return !m_limit.has_value();
}

void GetPersonsParams::setLimitNull() {
	m_limit = std::nullopt;
}


const QStringList &GetPersonsParams::personTypes() const {
	return m_personTypes;
}

void GetPersonsParams::setPersonTypes(QStringList newPersonTypes)  {
	m_personTypes = newPersonTypes;
}

bool GetPersonsParams::personTypesNull() const {
	// Nullable: true
	// Type Nullable: true
	

	return m_personTypes.size() == 0;
}

void GetPersonsParams::setPersonTypesNull() {
	m_personTypes.clear();
}


const QString &GetPersonsParams::searchTerm() const {
	return m_searchTerm;
}

void GetPersonsParams::setSearchTerm(QString newSearchTerm)  {
	m_searchTerm = newSearchTerm;
}

bool GetPersonsParams::searchTermNull() const {
	// Nullable: true
	// Type Nullable: true
	

	return m_searchTerm.isNull();
}

void GetPersonsParams::setSearchTermNull() {
	m_searchTerm.clear();
}


const QString &GetPersonsParams::userId() const {
	return m_userId;
}

void GetPersonsParams::setUserId(QString newUserId)  {
	m_userId = newUserId;
}

bool GetPersonsParams::userIdNull() const {
	// Nullable: true
	// Type Nullable: true
	

	return m_userId.isNull();
}

void GetPersonsParams::setUserIdNull() {
	m_userId.clear();
}




// GetPhysicalPathsParams



// GetPingSystemParams



// GetPlaybackInfoParams

const QString &GetPlaybackInfoParams::itemId() const {
	return m_itemId;
}

void GetPlaybackInfoParams::setItemId(QString newItemId) {
	m_itemId = newItemId;
}


const QString &GetPlaybackInfoParams::userId() const {
	return m_userId;
}

void GetPlaybackInfoParams::setUserId(QString newUserId) {
	m_userId = newUserId;
}




// GetPlaylistItemsParams

const QString &GetPlaylistItemsParams::playlistId() const {
	return m_playlistId;
}

void GetPlaylistItemsParams::setPlaylistId(QString newPlaylistId) {
	m_playlistId = newPlaylistId;
}


const QString &GetPlaylistItemsParams::userId() const {
	return m_userId;
}

void GetPlaylistItemsParams::setUserId(QString newUserId) {
	m_userId = newUserId;
}


const QList<ImageType> &GetPlaylistItemsParams::enableImageTypes() const {
	return m_enableImageTypes;
}

void GetPlaylistItemsParams::setEnableImageTypes(QList<ImageType> newEnableImageTypes)  {
	m_enableImageTypes = newEnableImageTypes;
}

bool GetPlaylistItemsParams::enableImageTypesNull() const {
	// Nullable: true
	// Type Nullable: true
	

	return m_enableImageTypes.size() == 0;
}

void GetPlaylistItemsParams::setEnableImageTypesNull() {
	m_enableImageTypes.clear();
}


const bool &GetPlaylistItemsParams::enableImages() const {
	return m_enableImages.value();
}

void GetPlaylistItemsParams::setEnableImages(bool newEnableImages)  {
	m_enableImages = newEnableImages;
}

bool GetPlaylistItemsParams::enableImagesNull() const {
	// Nullable: true
	// Type Nullable: false
	

	return !m_enableImages.has_value();
}

void GetPlaylistItemsParams::setEnableImagesNull() {
	m_enableImages = std::nullopt;
}


const bool &GetPlaylistItemsParams::enableUserData() const {
	return m_enableUserData.value();
}

void GetPlaylistItemsParams::setEnableUserData(bool newEnableUserData)  {
	m_enableUserData = newEnableUserData;
}

bool GetPlaylistItemsParams::enableUserDataNull() const {
	// Nullable: true
	// Type Nullable: false
	

	return !m_enableUserData.has_value();
}

void GetPlaylistItemsParams::setEnableUserDataNull() {
	m_enableUserData = std::nullopt;
}


const QList<ItemFields> &GetPlaylistItemsParams::fields() const {
	return m_fields;
}

void GetPlaylistItemsParams::setFields(QList<ItemFields> newFields)  {
	m_fields = newFields;
}

bool GetPlaylistItemsParams::fieldsNull() const {
	// Nullable: true
	// Type Nullable: true
	

	return m_fields.size() == 0;
}

void GetPlaylistItemsParams::setFieldsNull() {
	m_fields.clear();
}


const qint32 &GetPlaylistItemsParams::imageTypeLimit() const {
	return m_imageTypeLimit.value();
}

void GetPlaylistItemsParams::setImageTypeLimit(qint32 newImageTypeLimit)  {
	m_imageTypeLimit = newImageTypeLimit;
}

bool GetPlaylistItemsParams::imageTypeLimitNull() const {
	// Nullable: true
	// Type Nullable: false
	

	return !m_imageTypeLimit.has_value();
}

void GetPlaylistItemsParams::setImageTypeLimitNull() {
	m_imageTypeLimit = std::nullopt;
}


const qint32 &GetPlaylistItemsParams::limit() const {
	return m_limit.value();
}

void GetPlaylistItemsParams::setLimit(qint32 newLimit)  {
	m_limit = newLimit;
}

bool GetPlaylistItemsParams::limitNull() const {
	// Nullable: true
	// Type Nullable: false
	

	return !m_limit.has_value();
}

void GetPlaylistItemsParams::setLimitNull() {
	m_limit = std::nullopt;
}


const qint32 &GetPlaylistItemsParams::startIndex() const {
	return m_startIndex.value();
}

void GetPlaylistItemsParams::setStartIndex(qint32 newStartIndex)  {
	m_startIndex = newStartIndex;
}

bool GetPlaylistItemsParams::startIndexNull() const {
	// Nullable: true
	// Type Nullable: false
	

	return !m_startIndex.has_value();
}

void GetPlaylistItemsParams::setStartIndexNull() {
	m_startIndex = std::nullopt;
}




// GetPluginConfigurationParams

const QString &GetPluginConfigurationParams::pluginId() const {
	return m_pluginId;
}

void GetPluginConfigurationParams::setPluginId(QString newPluginId) {
	m_pluginId = newPluginId;
}




// GetPluginImageParams

const QString &GetPluginImageParams::pluginId() const {
	return m_pluginId;
}

void GetPluginImageParams::setPluginId(QString newPluginId) {
	m_pluginId = newPluginId;
}


const QSharedPointer<Version> &GetPluginImageParams::version() const {
	return m_version;
}

void GetPluginImageParams::setVersion(QSharedPointer<Version> newVersion) {
	m_version = newVersion;
}




// GetPluginManifestParams

const QString &GetPluginManifestParams::pluginId() const {
	return m_pluginId;
}

void GetPluginManifestParams::setPluginId(QString newPluginId) {
	m_pluginId = newPluginId;
}




// GetPluginsParams



// GetPostedPlaybackInfoParams

const QString &GetPostedPlaybackInfoParams::itemId() const {
	return m_itemId;
}

void GetPostedPlaybackInfoParams::setItemId(QString newItemId) {
	m_itemId = newItemId;
}


const bool &GetPostedPlaybackInfoParams::allowAudioStreamCopy() const {
	return m_allowAudioStreamCopy.value();
}

void GetPostedPlaybackInfoParams::setAllowAudioStreamCopy(bool newAllowAudioStreamCopy)  {
	m_allowAudioStreamCopy = newAllowAudioStreamCopy;
}

bool GetPostedPlaybackInfoParams::allowAudioStreamCopyNull() const {
	// Nullable: true
	// Type Nullable: false
	

	return !m_allowAudioStreamCopy.has_value();
}

void GetPostedPlaybackInfoParams::setAllowAudioStreamCopyNull() {
	m_allowAudioStreamCopy = std::nullopt;
}


const bool &GetPostedPlaybackInfoParams::allowVideoStreamCopy() const {
	return m_allowVideoStreamCopy.value();
}

void GetPostedPlaybackInfoParams::setAllowVideoStreamCopy(bool newAllowVideoStreamCopy)  {
	m_allowVideoStreamCopy = newAllowVideoStreamCopy;
}

bool GetPostedPlaybackInfoParams::allowVideoStreamCopyNull() const {
	// Nullable: true
	// Type Nullable: false
	

	return !m_allowVideoStreamCopy.has_value();
}

void GetPostedPlaybackInfoParams::setAllowVideoStreamCopyNull() {
	m_allowVideoStreamCopy = std::nullopt;
}


const qint32 &GetPostedPlaybackInfoParams::audioStreamIndex() const {
	return m_audioStreamIndex.value();
}

void GetPostedPlaybackInfoParams::setAudioStreamIndex(qint32 newAudioStreamIndex)  {
	m_audioStreamIndex = newAudioStreamIndex;
}

bool GetPostedPlaybackInfoParams::audioStreamIndexNull() const {
	// Nullable: true
	// Type Nullable: false
	

	return !m_audioStreamIndex.has_value();
}

void GetPostedPlaybackInfoParams::setAudioStreamIndexNull() {
	m_audioStreamIndex = std::nullopt;
}


const bool &GetPostedPlaybackInfoParams::autoOpenLiveStream() const {
	return m_autoOpenLiveStream.value();
}

void GetPostedPlaybackInfoParams::setAutoOpenLiveStream(bool newAutoOpenLiveStream)  {
	m_autoOpenLiveStream = newAutoOpenLiveStream;
}

bool GetPostedPlaybackInfoParams::autoOpenLiveStreamNull() const {
	// Nullable: true
	// Type Nullable: false
	

	return !m_autoOpenLiveStream.has_value();
}

void GetPostedPlaybackInfoParams::setAutoOpenLiveStreamNull() {
	m_autoOpenLiveStream = std::nullopt;
}


const bool &GetPostedPlaybackInfoParams::enableDirectPlay() const {
	return m_enableDirectPlay.value();
}

void GetPostedPlaybackInfoParams::setEnableDirectPlay(bool newEnableDirectPlay)  {
	m_enableDirectPlay = newEnableDirectPlay;
}

bool GetPostedPlaybackInfoParams::enableDirectPlayNull() const {
	// Nullable: true
	// Type Nullable: false
	

	return !m_enableDirectPlay.has_value();
}

void GetPostedPlaybackInfoParams::setEnableDirectPlayNull() {
	m_enableDirectPlay = std::nullopt;
}


const bool &GetPostedPlaybackInfoParams::enableDirectStream() const {
	return m_enableDirectStream.value();
}

void GetPostedPlaybackInfoParams::setEnableDirectStream(bool newEnableDirectStream)  {
	m_enableDirectStream = newEnableDirectStream;
}

bool GetPostedPlaybackInfoParams::enableDirectStreamNull() const {
	// Nullable: true
	// Type Nullable: false
	

	return !m_enableDirectStream.has_value();
}

void GetPostedPlaybackInfoParams::setEnableDirectStreamNull() {
	m_enableDirectStream = std::nullopt;
}


const bool &GetPostedPlaybackInfoParams::enableTranscoding() const {
	return m_enableTranscoding.value();
}

void GetPostedPlaybackInfoParams::setEnableTranscoding(bool newEnableTranscoding)  {
	m_enableTranscoding = newEnableTranscoding;
}

bool GetPostedPlaybackInfoParams::enableTranscodingNull() const {
	// Nullable: true
	// Type Nullable: false
	

	return !m_enableTranscoding.has_value();
}

void GetPostedPlaybackInfoParams::setEnableTranscodingNull() {
	m_enableTranscoding = std::nullopt;
}


const QString &GetPostedPlaybackInfoParams::liveStreamId() const {
	return m_liveStreamId;
}

void GetPostedPlaybackInfoParams::setLiveStreamId(QString newLiveStreamId)  {
	m_liveStreamId = newLiveStreamId;
}

bool GetPostedPlaybackInfoParams::liveStreamIdNull() const {
	// Nullable: true
	// Type Nullable: true
	

	return m_liveStreamId.isNull();
}

void GetPostedPlaybackInfoParams::setLiveStreamIdNull() {
	m_liveStreamId.clear();
}


const qint32 &GetPostedPlaybackInfoParams::maxAudioChannels() const {
	return m_maxAudioChannels.value();
}

void GetPostedPlaybackInfoParams::setMaxAudioChannels(qint32 newMaxAudioChannels)  {
	m_maxAudioChannels = newMaxAudioChannels;
}

bool GetPostedPlaybackInfoParams::maxAudioChannelsNull() const {
	// Nullable: true
	// Type Nullable: false
	

	return !m_maxAudioChannels.has_value();
}

void GetPostedPlaybackInfoParams::setMaxAudioChannelsNull() {
	m_maxAudioChannels = std::nullopt;
}


const qint32 &GetPostedPlaybackInfoParams::maxStreamingBitrate() const {
	return m_maxStreamingBitrate.value();
}

void GetPostedPlaybackInfoParams::setMaxStreamingBitrate(qint32 newMaxStreamingBitrate)  {
	m_maxStreamingBitrate = newMaxStreamingBitrate;
}

bool GetPostedPlaybackInfoParams::maxStreamingBitrateNull() const {
	// Nullable: true
	// Type Nullable: false
	

	return !m_maxStreamingBitrate.has_value();
}

void GetPostedPlaybackInfoParams::setMaxStreamingBitrateNull() {
	m_maxStreamingBitrate = std::nullopt;
}


const QString &GetPostedPlaybackInfoParams::mediaSourceId() const {
	return m_mediaSourceId;
}

void GetPostedPlaybackInfoParams::setMediaSourceId(QString newMediaSourceId)  {
	m_mediaSourceId = newMediaSourceId;
}

bool GetPostedPlaybackInfoParams::mediaSourceIdNull() const {
	// Nullable: true
	// Type Nullable: true
	

	return m_mediaSourceId.isNull();
}

void GetPostedPlaybackInfoParams::setMediaSourceIdNull() {
	m_mediaSourceId.clear();
}


const qint64 &GetPostedPlaybackInfoParams::startTimeTicks() const {
	return m_startTimeTicks.value();
}

void GetPostedPlaybackInfoParams::setStartTimeTicks(qint64 newStartTimeTicks)  {
	m_startTimeTicks = newStartTimeTicks;
}

bool GetPostedPlaybackInfoParams::startTimeTicksNull() const {
	// Nullable: true
	// Type Nullable: false
	

	return !m_startTimeTicks.has_value();
}

void GetPostedPlaybackInfoParams::setStartTimeTicksNull() {
	m_startTimeTicks = std::nullopt;
}


const qint32 &GetPostedPlaybackInfoParams::subtitleStreamIndex() const {
	return m_subtitleStreamIndex.value();
}

void GetPostedPlaybackInfoParams::setSubtitleStreamIndex(qint32 newSubtitleStreamIndex)  {
	m_subtitleStreamIndex = newSubtitleStreamIndex;
}

bool GetPostedPlaybackInfoParams::subtitleStreamIndexNull() const {
	// Nullable: true
	// Type Nullable: false
	

	return !m_subtitleStreamIndex.has_value();
}

void GetPostedPlaybackInfoParams::setSubtitleStreamIndexNull() {
	m_subtitleStreamIndex = std::nullopt;
}


const QString &GetPostedPlaybackInfoParams::userId() const {
	return m_userId;
}

void GetPostedPlaybackInfoParams::setUserId(QString newUserId)  {
	m_userId = newUserId;
}

bool GetPostedPlaybackInfoParams::userIdNull() const {
	// Nullable: true
	// Type Nullable: true
	

	return m_userId.isNull();
}

void GetPostedPlaybackInfoParams::setUserIdNull() {
	m_userId.clear();
}


const QSharedPointer<PlaybackInfoDto> &GetPostedPlaybackInfoParams::body() const {
	return m_body;
}

void GetPostedPlaybackInfoParams::setBody(QSharedPointer<PlaybackInfoDto> newBody) {
	m_body = newBody;
}




// GetProfileParams

const QString &GetProfileParams::profileId() const {
	return m_profileId;
}

void GetProfileParams::setProfileId(QString newProfileId) {
	m_profileId = newProfileId;
}




// GetProfileInfosParams



// GetProgramParams

const QString &GetProgramParams::programId() const {
	return m_programId;
}

void GetProgramParams::setProgramId(QString newProgramId) {
	m_programId = newProgramId;
}


const QString &GetProgramParams::userId() const {
	return m_userId;
}

void GetProgramParams::setUserId(QString newUserId)  {
	m_userId = newUserId;
}

bool GetProgramParams::userIdNull() const {
	// Nullable: true
	// Type Nullable: true
	

	return m_userId.isNull();
}

void GetProgramParams::setUserIdNull() {
	m_userId.clear();
}




// GetProgramsParams

const QSharedPointer<GetProgramsDto> &GetProgramsParams::body() const {
	return m_body;
}

void GetProgramsParams::setBody(QSharedPointer<GetProgramsDto> newBody) {
	m_body = newBody;
}




// GetPublicSystemInfoParams



// GetPublicUsersParams



// GetQueryFiltersParams

const QStringList &GetQueryFiltersParams::includeItemTypes() const {
	return m_includeItemTypes;
}

void GetQueryFiltersParams::setIncludeItemTypes(QStringList newIncludeItemTypes)  {
	m_includeItemTypes = newIncludeItemTypes;
}

bool GetQueryFiltersParams::includeItemTypesNull() const {
	// Nullable: true
	// Type Nullable: true
	

	return m_includeItemTypes.size() == 0;
}

void GetQueryFiltersParams::setIncludeItemTypesNull() {
	m_includeItemTypes.clear();
}


const bool &GetQueryFiltersParams::isAiring() const {
	return m_isAiring.value();
}

void GetQueryFiltersParams::setIsAiring(bool newIsAiring)  {
	m_isAiring = newIsAiring;
}

bool GetQueryFiltersParams::isAiringNull() const {
	// Nullable: true
	// Type Nullable: false
	

	return !m_isAiring.has_value();
}

void GetQueryFiltersParams::setIsAiringNull() {
	m_isAiring = std::nullopt;
}


const bool &GetQueryFiltersParams::isKids() const {
	return m_isKids.value();
}

void GetQueryFiltersParams::setIsKids(bool newIsKids)  {
	m_isKids = newIsKids;
}

bool GetQueryFiltersParams::isKidsNull() const {
	// Nullable: true
	// Type Nullable: false
	

	return !m_isKids.has_value();
}

void GetQueryFiltersParams::setIsKidsNull() {
	m_isKids = std::nullopt;
}


const bool &GetQueryFiltersParams::isMovie() const {
	return m_isMovie.value();
}

void GetQueryFiltersParams::setIsMovie(bool newIsMovie)  {
	m_isMovie = newIsMovie;
}

bool GetQueryFiltersParams::isMovieNull() const {
	// Nullable: true
	// Type Nullable: false
	

	return !m_isMovie.has_value();
}

void GetQueryFiltersParams::setIsMovieNull() {
	m_isMovie = std::nullopt;
}


const bool &GetQueryFiltersParams::isNews() const {
	return m_isNews.value();
}

void GetQueryFiltersParams::setIsNews(bool newIsNews)  {
	m_isNews = newIsNews;
}

bool GetQueryFiltersParams::isNewsNull() const {
	// Nullable: true
	// Type Nullable: false
	

	return !m_isNews.has_value();
}

void GetQueryFiltersParams::setIsNewsNull() {
	m_isNews = std::nullopt;
}


const bool &GetQueryFiltersParams::isSeries() const {
	return m_isSeries.value();
}

void GetQueryFiltersParams::setIsSeries(bool newIsSeries)  {
	m_isSeries = newIsSeries;
}

bool GetQueryFiltersParams::isSeriesNull() const {
	// Nullable: true
	// Type Nullable: false
	

	return !m_isSeries.has_value();
}

void GetQueryFiltersParams::setIsSeriesNull() {
	m_isSeries = std::nullopt;
}


const bool &GetQueryFiltersParams::isSports() const {
	return m_isSports.value();
}

void GetQueryFiltersParams::setIsSports(bool newIsSports)  {
	m_isSports = newIsSports;
}

bool GetQueryFiltersParams::isSportsNull() const {
	// Nullable: true
	// Type Nullable: false
	

	return !m_isSports.has_value();
}

void GetQueryFiltersParams::setIsSportsNull() {
	m_isSports = std::nullopt;
}


const QString &GetQueryFiltersParams::parentId() const {
	return m_parentId;
}

void GetQueryFiltersParams::setParentId(QString newParentId)  {
	m_parentId = newParentId;
}

bool GetQueryFiltersParams::parentIdNull() const {
	// Nullable: true
	// Type Nullable: true
	

	return m_parentId.isNull();
}

void GetQueryFiltersParams::setParentIdNull() {
	m_parentId.clear();
}


const bool &GetQueryFiltersParams::recursive() const {
	return m_recursive.value();
}

void GetQueryFiltersParams::setRecursive(bool newRecursive)  {
	m_recursive = newRecursive;
}

bool GetQueryFiltersParams::recursiveNull() const {
	// Nullable: true
	// Type Nullable: false
	

	return !m_recursive.has_value();
}

void GetQueryFiltersParams::setRecursiveNull() {
	m_recursive = std::nullopt;
}


const QString &GetQueryFiltersParams::userId() const {
	return m_userId;
}

void GetQueryFiltersParams::setUserId(QString newUserId)  {
	m_userId = newUserId;
}

bool GetQueryFiltersParams::userIdNull() const {
	// Nullable: true
	// Type Nullable: true
	

	return m_userId.isNull();
}

void GetQueryFiltersParams::setUserIdNull() {
	m_userId.clear();
}




// GetQueryFiltersLegacyParams

const QStringList &GetQueryFiltersLegacyParams::includeItemTypes() const {
	return m_includeItemTypes;
}

void GetQueryFiltersLegacyParams::setIncludeItemTypes(QStringList newIncludeItemTypes)  {
	m_includeItemTypes = newIncludeItemTypes;
}

bool GetQueryFiltersLegacyParams::includeItemTypesNull() const {
	// Nullable: true
	// Type Nullable: true
	

	return m_includeItemTypes.size() == 0;
}

void GetQueryFiltersLegacyParams::setIncludeItemTypesNull() {
	m_includeItemTypes.clear();
}


const QStringList &GetQueryFiltersLegacyParams::mediaTypes() const {
	return m_mediaTypes;
}

void GetQueryFiltersLegacyParams::setMediaTypes(QStringList newMediaTypes)  {
	m_mediaTypes = newMediaTypes;
}

bool GetQueryFiltersLegacyParams::mediaTypesNull() const {
	// Nullable: true
	// Type Nullable: true
	

	return m_mediaTypes.size() == 0;
}

void GetQueryFiltersLegacyParams::setMediaTypesNull() {
	m_mediaTypes.clear();
}


const QString &GetQueryFiltersLegacyParams::parentId() const {
	return m_parentId;
}

void GetQueryFiltersLegacyParams::setParentId(QString newParentId)  {
	m_parentId = newParentId;
}

bool GetQueryFiltersLegacyParams::parentIdNull() const {
	// Nullable: true
	// Type Nullable: true
	

	return m_parentId.isNull();
}

void GetQueryFiltersLegacyParams::setParentIdNull() {
	m_parentId.clear();
}


const QString &GetQueryFiltersLegacyParams::userId() const {
	return m_userId;
}

void GetQueryFiltersLegacyParams::setUserId(QString newUserId)  {
	m_userId = newUserId;
}

bool GetQueryFiltersLegacyParams::userIdNull() const {
	// Nullable: true
	// Type Nullable: true
	

	return m_userId.isNull();
}

void GetQueryFiltersLegacyParams::setUserIdNull() {
	m_userId.clear();
}




// GetRatingImageParams

const QString &GetRatingImageParams::name() const {
	return m_name;
}

void GetRatingImageParams::setName(QString newName) {
	m_name = newName;
}


const QString &GetRatingImageParams::theme() const {
	return m_theme;
}

void GetRatingImageParams::setTheme(QString newTheme) {
	m_theme = newTheme;
}




// GetRatingImagesParams



// GetRecommendedProgramsParams

const QList<ImageType> &GetRecommendedProgramsParams::enableImageTypes() const {
	return m_enableImageTypes;
}

void GetRecommendedProgramsParams::setEnableImageTypes(QList<ImageType> newEnableImageTypes)  {
	m_enableImageTypes = newEnableImageTypes;
}

bool GetRecommendedProgramsParams::enableImageTypesNull() const {
	// Nullable: true
	// Type Nullable: true
	

	return m_enableImageTypes.size() == 0;
}

void GetRecommendedProgramsParams::setEnableImageTypesNull() {
	m_enableImageTypes.clear();
}


const bool &GetRecommendedProgramsParams::enableImages() const {
	return m_enableImages.value();
}

void GetRecommendedProgramsParams::setEnableImages(bool newEnableImages)  {
	m_enableImages = newEnableImages;
}

bool GetRecommendedProgramsParams::enableImagesNull() const {
	// Nullable: true
	// Type Nullable: false
	

	return !m_enableImages.has_value();
}

void GetRecommendedProgramsParams::setEnableImagesNull() {
	m_enableImages = std::nullopt;
}


const bool &GetRecommendedProgramsParams::enableTotalRecordCount() const {
	return m_enableTotalRecordCount.value();
}

void GetRecommendedProgramsParams::setEnableTotalRecordCount(bool newEnableTotalRecordCount)  {
	m_enableTotalRecordCount = newEnableTotalRecordCount;
}

bool GetRecommendedProgramsParams::enableTotalRecordCountNull() const {
	// Nullable: false
	// Type Nullable: false
	

	return !m_enableTotalRecordCount.has_value();
}

void GetRecommendedProgramsParams::setEnableTotalRecordCountNull() {
	m_enableTotalRecordCount = std::nullopt;
}


const bool &GetRecommendedProgramsParams::enableUserData() const {
	return m_enableUserData.value();
}

void GetRecommendedProgramsParams::setEnableUserData(bool newEnableUserData)  {
	m_enableUserData = newEnableUserData;
}

bool GetRecommendedProgramsParams::enableUserDataNull() const {
	// Nullable: true
	// Type Nullable: false
	

	return !m_enableUserData.has_value();
}

void GetRecommendedProgramsParams::setEnableUserDataNull() {
	m_enableUserData = std::nullopt;
}


const QList<ItemFields> &GetRecommendedProgramsParams::fields() const {
	return m_fields;
}

void GetRecommendedProgramsParams::setFields(QList<ItemFields> newFields)  {
	m_fields = newFields;
}

bool GetRecommendedProgramsParams::fieldsNull() const {
	// Nullable: true
	// Type Nullable: true
	

	return m_fields.size() == 0;
}

void GetRecommendedProgramsParams::setFieldsNull() {
	m_fields.clear();
}


const QStringList &GetRecommendedProgramsParams::genreIds() const {
	return m_genreIds;
}

void GetRecommendedProgramsParams::setGenreIds(QStringList newGenreIds)  {
	m_genreIds = newGenreIds;
}

bool GetRecommendedProgramsParams::genreIdsNull() const {
	// Nullable: true
	// Type Nullable: true
	

	return m_genreIds.size() == 0;
}

void GetRecommendedProgramsParams::setGenreIdsNull() {
	m_genreIds.clear();
}


const bool &GetRecommendedProgramsParams::hasAired() const {
	return m_hasAired.value();
}

void GetRecommendedProgramsParams::setHasAired(bool newHasAired)  {
	m_hasAired = newHasAired;
}

bool GetRecommendedProgramsParams::hasAiredNull() const {
	// Nullable: true
	// Type Nullable: false
	

	return !m_hasAired.has_value();
}

void GetRecommendedProgramsParams::setHasAiredNull() {
	m_hasAired = std::nullopt;
}


const qint32 &GetRecommendedProgramsParams::imageTypeLimit() const {
	return m_imageTypeLimit.value();
}

void GetRecommendedProgramsParams::setImageTypeLimit(qint32 newImageTypeLimit)  {
	m_imageTypeLimit = newImageTypeLimit;
}

bool GetRecommendedProgramsParams::imageTypeLimitNull() const {
	// Nullable: true
	// Type Nullable: false
	

	return !m_imageTypeLimit.has_value();
}

void GetRecommendedProgramsParams::setImageTypeLimitNull() {
	m_imageTypeLimit = std::nullopt;
}


const bool &GetRecommendedProgramsParams::isAiring() const {
	return m_isAiring.value();
}

void GetRecommendedProgramsParams::setIsAiring(bool newIsAiring)  {
	m_isAiring = newIsAiring;
}

bool GetRecommendedProgramsParams::isAiringNull() const {
	// Nullable: true
	// Type Nullable: false
	

	return !m_isAiring.has_value();
}

void GetRecommendedProgramsParams::setIsAiringNull() {
	m_isAiring = std::nullopt;
}


const bool &GetRecommendedProgramsParams::isKids() const {
	return m_isKids.value();
}

void GetRecommendedProgramsParams::setIsKids(bool newIsKids)  {
	m_isKids = newIsKids;
}

bool GetRecommendedProgramsParams::isKidsNull() const {
	// Nullable: true
	// Type Nullable: false
	

	return !m_isKids.has_value();
}

void GetRecommendedProgramsParams::setIsKidsNull() {
	m_isKids = std::nullopt;
}


const bool &GetRecommendedProgramsParams::isMovie() const {
	return m_isMovie.value();
}

void GetRecommendedProgramsParams::setIsMovie(bool newIsMovie)  {
	m_isMovie = newIsMovie;
}

bool GetRecommendedProgramsParams::isMovieNull() const {
	// Nullable: true
	// Type Nullable: false
	

	return !m_isMovie.has_value();
}

void GetRecommendedProgramsParams::setIsMovieNull() {
	m_isMovie = std::nullopt;
}


const bool &GetRecommendedProgramsParams::isNews() const {
	return m_isNews.value();
}

void GetRecommendedProgramsParams::setIsNews(bool newIsNews)  {
	m_isNews = newIsNews;
}

bool GetRecommendedProgramsParams::isNewsNull() const {
	// Nullable: true
	// Type Nullable: false
	

	return !m_isNews.has_value();
}

void GetRecommendedProgramsParams::setIsNewsNull() {
	m_isNews = std::nullopt;
}


const bool &GetRecommendedProgramsParams::isSeries() const {
	return m_isSeries.value();
}

void GetRecommendedProgramsParams::setIsSeries(bool newIsSeries)  {
	m_isSeries = newIsSeries;
}

bool GetRecommendedProgramsParams::isSeriesNull() const {
	// Nullable: true
	// Type Nullable: false
	

	return !m_isSeries.has_value();
}

void GetRecommendedProgramsParams::setIsSeriesNull() {
	m_isSeries = std::nullopt;
}


const bool &GetRecommendedProgramsParams::isSports() const {
	return m_isSports.value();
}

void GetRecommendedProgramsParams::setIsSports(bool newIsSports)  {
	m_isSports = newIsSports;
}

bool GetRecommendedProgramsParams::isSportsNull() const {
	// Nullable: true
	// Type Nullable: false
	

	return !m_isSports.has_value();
}

void GetRecommendedProgramsParams::setIsSportsNull() {
	m_isSports = std::nullopt;
}


const qint32 &GetRecommendedProgramsParams::limit() const {
	return m_limit.value();
}

void GetRecommendedProgramsParams::setLimit(qint32 newLimit)  {
	m_limit = newLimit;
}

bool GetRecommendedProgramsParams::limitNull() const {
	// Nullable: true
	// Type Nullable: false
	

	return !m_limit.has_value();
}

void GetRecommendedProgramsParams::setLimitNull() {
	m_limit = std::nullopt;
}


const QString &GetRecommendedProgramsParams::userId() const {
	return m_userId;
}

void GetRecommendedProgramsParams::setUserId(QString newUserId)  {
	m_userId = newUserId;
}

bool GetRecommendedProgramsParams::userIdNull() const {
	// Nullable: true
	// Type Nullable: true
	

	return m_userId.isNull();
}

void GetRecommendedProgramsParams::setUserIdNull() {
	m_userId.clear();
}




// GetRecordingParams

const QString &GetRecordingParams::recordingId() const {
	return m_recordingId;
}

void GetRecordingParams::setRecordingId(QString newRecordingId) {
	m_recordingId = newRecordingId;
}


const QString &GetRecordingParams::userId() const {
	return m_userId;
}

void GetRecordingParams::setUserId(QString newUserId)  {
	m_userId = newUserId;
}

bool GetRecordingParams::userIdNull() const {
	// Nullable: true
	// Type Nullable: true
	

	return m_userId.isNull();
}

void GetRecordingParams::setUserIdNull() {
	m_userId.clear();
}




// GetRecordingFoldersParams

const QString &GetRecordingFoldersParams::userId() const {
	return m_userId;
}

void GetRecordingFoldersParams::setUserId(QString newUserId)  {
	m_userId = newUserId;
}

bool GetRecordingFoldersParams::userIdNull() const {
	// Nullable: true
	// Type Nullable: true
	

	return m_userId.isNull();
}

void GetRecordingFoldersParams::setUserIdNull() {
	m_userId.clear();
}




// GetRecordingGroupParams

const QString &GetRecordingGroupParams::groupId() const {
	return m_groupId;
}

void GetRecordingGroupParams::setGroupId(QString newGroupId) {
	m_groupId = newGroupId;
}




// GetRecordingGroupsParams

const QString &GetRecordingGroupsParams::userId() const {
	return m_userId;
}

void GetRecordingGroupsParams::setUserId(QString newUserId)  {
	m_userId = newUserId;
}

bool GetRecordingGroupsParams::userIdNull() const {
	// Nullable: true
	// Type Nullable: true
	

	return m_userId.isNull();
}

void GetRecordingGroupsParams::setUserIdNull() {
	m_userId.clear();
}




// GetRecordingsParams

const QString &GetRecordingsParams::channelId() const {
	return m_channelId;
}

void GetRecordingsParams::setChannelId(QString newChannelId)  {
	m_channelId = newChannelId;
}

bool GetRecordingsParams::channelIdNull() const {
	// Nullable: true
	// Type Nullable: true
	

	return m_channelId.isNull();
}

void GetRecordingsParams::setChannelIdNull() {
	m_channelId.clear();
}


const QList<ImageType> &GetRecordingsParams::enableImageTypes() const {
	return m_enableImageTypes;
}

void GetRecordingsParams::setEnableImageTypes(QList<ImageType> newEnableImageTypes)  {
	m_enableImageTypes = newEnableImageTypes;
}

bool GetRecordingsParams::enableImageTypesNull() const {
	// Nullable: true
	// Type Nullable: true
	

	return m_enableImageTypes.size() == 0;
}

void GetRecordingsParams::setEnableImageTypesNull() {
	m_enableImageTypes.clear();
}


const bool &GetRecordingsParams::enableImages() const {
	return m_enableImages.value();
}

void GetRecordingsParams::setEnableImages(bool newEnableImages)  {
	m_enableImages = newEnableImages;
}

bool GetRecordingsParams::enableImagesNull() const {
	// Nullable: true
	// Type Nullable: false
	

	return !m_enableImages.has_value();
}

void GetRecordingsParams::setEnableImagesNull() {
	m_enableImages = std::nullopt;
}


const bool &GetRecordingsParams::enableTotalRecordCount() const {
	return m_enableTotalRecordCount.value();
}

void GetRecordingsParams::setEnableTotalRecordCount(bool newEnableTotalRecordCount)  {
	m_enableTotalRecordCount = newEnableTotalRecordCount;
}

bool GetRecordingsParams::enableTotalRecordCountNull() const {
	// Nullable: false
	// Type Nullable: false
	

	return !m_enableTotalRecordCount.has_value();
}

void GetRecordingsParams::setEnableTotalRecordCountNull() {
	m_enableTotalRecordCount = std::nullopt;
}


const bool &GetRecordingsParams::enableUserData() const {
	return m_enableUserData.value();
}

void GetRecordingsParams::setEnableUserData(bool newEnableUserData)  {
	m_enableUserData = newEnableUserData;
}

bool GetRecordingsParams::enableUserDataNull() const {
	// Nullable: true
	// Type Nullable: false
	

	return !m_enableUserData.has_value();
}

void GetRecordingsParams::setEnableUserDataNull() {
	m_enableUserData = std::nullopt;
}


const QList<ItemFields> &GetRecordingsParams::fields() const {
	return m_fields;
}

void GetRecordingsParams::setFields(QList<ItemFields> newFields)  {
	m_fields = newFields;
}

bool GetRecordingsParams::fieldsNull() const {
	// Nullable: true
	// Type Nullable: true
	

	return m_fields.size() == 0;
}

void GetRecordingsParams::setFieldsNull() {
	m_fields.clear();
}


const qint32 &GetRecordingsParams::imageTypeLimit() const {
	return m_imageTypeLimit.value();
}

void GetRecordingsParams::setImageTypeLimit(qint32 newImageTypeLimit)  {
	m_imageTypeLimit = newImageTypeLimit;
}

bool GetRecordingsParams::imageTypeLimitNull() const {
	// Nullable: true
	// Type Nullable: false
	

	return !m_imageTypeLimit.has_value();
}

void GetRecordingsParams::setImageTypeLimitNull() {
	m_imageTypeLimit = std::nullopt;
}


const bool &GetRecordingsParams::isInProgress() const {
	return m_isInProgress.value();
}

void GetRecordingsParams::setIsInProgress(bool newIsInProgress)  {
	m_isInProgress = newIsInProgress;
}

bool GetRecordingsParams::isInProgressNull() const {
	// Nullable: true
	// Type Nullable: false
	

	return !m_isInProgress.has_value();
}

void GetRecordingsParams::setIsInProgressNull() {
	m_isInProgress = std::nullopt;
}


const bool &GetRecordingsParams::isKids() const {
	return m_isKids.value();
}

void GetRecordingsParams::setIsKids(bool newIsKids)  {
	m_isKids = newIsKids;
}

bool GetRecordingsParams::isKidsNull() const {
	// Nullable: true
	// Type Nullable: false
	

	return !m_isKids.has_value();
}

void GetRecordingsParams::setIsKidsNull() {
	m_isKids = std::nullopt;
}


const bool &GetRecordingsParams::isLibraryItem() const {
	return m_isLibraryItem.value();
}

void GetRecordingsParams::setIsLibraryItem(bool newIsLibraryItem)  {
	m_isLibraryItem = newIsLibraryItem;
}

bool GetRecordingsParams::isLibraryItemNull() const {
	// Nullable: true
	// Type Nullable: false
	

	return !m_isLibraryItem.has_value();
}

void GetRecordingsParams::setIsLibraryItemNull() {
	m_isLibraryItem = std::nullopt;
}


const bool &GetRecordingsParams::isMovie() const {
	return m_isMovie.value();
}

void GetRecordingsParams::setIsMovie(bool newIsMovie)  {
	m_isMovie = newIsMovie;
}

bool GetRecordingsParams::isMovieNull() const {
	// Nullable: true
	// Type Nullable: false
	

	return !m_isMovie.has_value();
}

void GetRecordingsParams::setIsMovieNull() {
	m_isMovie = std::nullopt;
}


const bool &GetRecordingsParams::isNews() const {
	return m_isNews.value();
}

void GetRecordingsParams::setIsNews(bool newIsNews)  {
	m_isNews = newIsNews;
}

bool GetRecordingsParams::isNewsNull() const {
	// Nullable: true
	// Type Nullable: false
	

	return !m_isNews.has_value();
}

void GetRecordingsParams::setIsNewsNull() {
	m_isNews = std::nullopt;
}


const bool &GetRecordingsParams::isSeries() const {
	return m_isSeries.value();
}

void GetRecordingsParams::setIsSeries(bool newIsSeries)  {
	m_isSeries = newIsSeries;
}

bool GetRecordingsParams::isSeriesNull() const {
	// Nullable: true
	// Type Nullable: false
	

	return !m_isSeries.has_value();
}

void GetRecordingsParams::setIsSeriesNull() {
	m_isSeries = std::nullopt;
}


const bool &GetRecordingsParams::isSports() const {
	return m_isSports.value();
}

void GetRecordingsParams::setIsSports(bool newIsSports)  {
	m_isSports = newIsSports;
}

bool GetRecordingsParams::isSportsNull() const {
	// Nullable: true
	// Type Nullable: false
	

	return !m_isSports.has_value();
}

void GetRecordingsParams::setIsSportsNull() {
	m_isSports = std::nullopt;
}


const qint32 &GetRecordingsParams::limit() const {
	return m_limit.value();
}

void GetRecordingsParams::setLimit(qint32 newLimit)  {
	m_limit = newLimit;
}

bool GetRecordingsParams::limitNull() const {
	// Nullable: true
	// Type Nullable: false
	

	return !m_limit.has_value();
}

void GetRecordingsParams::setLimitNull() {
	m_limit = std::nullopt;
}


const QString &GetRecordingsParams::seriesTimerId() const {
	return m_seriesTimerId;
}

void GetRecordingsParams::setSeriesTimerId(QString newSeriesTimerId)  {
	m_seriesTimerId = newSeriesTimerId;
}

bool GetRecordingsParams::seriesTimerIdNull() const {
	// Nullable: true
	// Type Nullable: true
	

	return m_seriesTimerId.isNull();
}

void GetRecordingsParams::setSeriesTimerIdNull() {
	m_seriesTimerId.clear();
}


const qint32 &GetRecordingsParams::startIndex() const {
	return m_startIndex.value();
}

void GetRecordingsParams::setStartIndex(qint32 newStartIndex)  {
	m_startIndex = newStartIndex;
}

bool GetRecordingsParams::startIndexNull() const {
	// Nullable: true
	// Type Nullable: false
	

	return !m_startIndex.has_value();
}

void GetRecordingsParams::setStartIndexNull() {
	m_startIndex = std::nullopt;
}


const RecordingStatus &GetRecordingsParams::status() const {
	return m_status;
}

void GetRecordingsParams::setStatus(RecordingStatus newStatus)  {
	m_status = newStatus;
}

bool GetRecordingsParams::statusNull() const {
	// Nullable: true
	// Type Nullable: true
	

	return m_status== RecordingStatus::EnumNotSet;
}

void GetRecordingsParams::setStatusNull() {
	m_status= RecordingStatus::EnumNotSet;
}


const QString &GetRecordingsParams::userId() const {
	return m_userId;
}

void GetRecordingsParams::setUserId(QString newUserId)  {
	m_userId = newUserId;
}

bool GetRecordingsParams::userIdNull() const {
	// Nullable: true
	// Type Nullable: true
	

	return m_userId.isNull();
}

void GetRecordingsParams::setUserIdNull() {
	m_userId.clear();
}




// GetRecordingsSeriesParams

const QString &GetRecordingsSeriesParams::channelId() const {
	return m_channelId;
}

void GetRecordingsSeriesParams::setChannelId(QString newChannelId)  {
	m_channelId = newChannelId;
}

bool GetRecordingsSeriesParams::channelIdNull() const {
	// Nullable: true
	// Type Nullable: true
	

	return m_channelId.isNull();
}

void GetRecordingsSeriesParams::setChannelIdNull() {
	m_channelId.clear();
}


const QList<ImageType> &GetRecordingsSeriesParams::enableImageTypes() const {
	return m_enableImageTypes;
}

void GetRecordingsSeriesParams::setEnableImageTypes(QList<ImageType> newEnableImageTypes)  {
	m_enableImageTypes = newEnableImageTypes;
}

bool GetRecordingsSeriesParams::enableImageTypesNull() const {
	// Nullable: true
	// Type Nullable: true
	

	return m_enableImageTypes.size() == 0;
}

void GetRecordingsSeriesParams::setEnableImageTypesNull() {
	m_enableImageTypes.clear();
}


const bool &GetRecordingsSeriesParams::enableImages() const {
	return m_enableImages.value();
}

void GetRecordingsSeriesParams::setEnableImages(bool newEnableImages)  {
	m_enableImages = newEnableImages;
}

bool GetRecordingsSeriesParams::enableImagesNull() const {
	// Nullable: true
	// Type Nullable: false
	

	return !m_enableImages.has_value();
}

void GetRecordingsSeriesParams::setEnableImagesNull() {
	m_enableImages = std::nullopt;
}


const bool &GetRecordingsSeriesParams::enableTotalRecordCount() const {
	return m_enableTotalRecordCount.value();
}

void GetRecordingsSeriesParams::setEnableTotalRecordCount(bool newEnableTotalRecordCount)  {
	m_enableTotalRecordCount = newEnableTotalRecordCount;
}

bool GetRecordingsSeriesParams::enableTotalRecordCountNull() const {
	// Nullable: false
	// Type Nullable: false
	

	return !m_enableTotalRecordCount.has_value();
}

void GetRecordingsSeriesParams::setEnableTotalRecordCountNull() {
	m_enableTotalRecordCount = std::nullopt;
}


const bool &GetRecordingsSeriesParams::enableUserData() const {
	return m_enableUserData.value();
}

void GetRecordingsSeriesParams::setEnableUserData(bool newEnableUserData)  {
	m_enableUserData = newEnableUserData;
}

bool GetRecordingsSeriesParams::enableUserDataNull() const {
	// Nullable: true
	// Type Nullable: false
	

	return !m_enableUserData.has_value();
}

void GetRecordingsSeriesParams::setEnableUserDataNull() {
	m_enableUserData = std::nullopt;
}


const QList<ItemFields> &GetRecordingsSeriesParams::fields() const {
	return m_fields;
}

void GetRecordingsSeriesParams::setFields(QList<ItemFields> newFields)  {
	m_fields = newFields;
}

bool GetRecordingsSeriesParams::fieldsNull() const {
	// Nullable: true
	// Type Nullable: true
	

	return m_fields.size() == 0;
}

void GetRecordingsSeriesParams::setFieldsNull() {
	m_fields.clear();
}


const QString &GetRecordingsSeriesParams::groupId() const {
	return m_groupId;
}

void GetRecordingsSeriesParams::setGroupId(QString newGroupId)  {
	m_groupId = newGroupId;
}

bool GetRecordingsSeriesParams::groupIdNull() const {
	// Nullable: true
	// Type Nullable: true
	

	return m_groupId.isNull();
}

void GetRecordingsSeriesParams::setGroupIdNull() {
	m_groupId.clear();
}


const qint32 &GetRecordingsSeriesParams::imageTypeLimit() const {
	return m_imageTypeLimit.value();
}

void GetRecordingsSeriesParams::setImageTypeLimit(qint32 newImageTypeLimit)  {
	m_imageTypeLimit = newImageTypeLimit;
}

bool GetRecordingsSeriesParams::imageTypeLimitNull() const {
	// Nullable: true
	// Type Nullable: false
	

	return !m_imageTypeLimit.has_value();
}

void GetRecordingsSeriesParams::setImageTypeLimitNull() {
	m_imageTypeLimit = std::nullopt;
}


const bool &GetRecordingsSeriesParams::isInProgress() const {
	return m_isInProgress.value();
}

void GetRecordingsSeriesParams::setIsInProgress(bool newIsInProgress)  {
	m_isInProgress = newIsInProgress;
}

bool GetRecordingsSeriesParams::isInProgressNull() const {
	// Nullable: true
	// Type Nullable: false
	

	return !m_isInProgress.has_value();
}

void GetRecordingsSeriesParams::setIsInProgressNull() {
	m_isInProgress = std::nullopt;
}


const qint32 &GetRecordingsSeriesParams::limit() const {
	return m_limit.value();
}

void GetRecordingsSeriesParams::setLimit(qint32 newLimit)  {
	m_limit = newLimit;
}

bool GetRecordingsSeriesParams::limitNull() const {
	// Nullable: true
	// Type Nullable: false
	

	return !m_limit.has_value();
}

void GetRecordingsSeriesParams::setLimitNull() {
	m_limit = std::nullopt;
}


const QString &GetRecordingsSeriesParams::seriesTimerId() const {
	return m_seriesTimerId;
}

void GetRecordingsSeriesParams::setSeriesTimerId(QString newSeriesTimerId)  {
	m_seriesTimerId = newSeriesTimerId;
}

bool GetRecordingsSeriesParams::seriesTimerIdNull() const {
	// Nullable: true
	// Type Nullable: true
	

	return m_seriesTimerId.isNull();
}

void GetRecordingsSeriesParams::setSeriesTimerIdNull() {
	m_seriesTimerId.clear();
}


const qint32 &GetRecordingsSeriesParams::startIndex() const {
	return m_startIndex.value();
}

void GetRecordingsSeriesParams::setStartIndex(qint32 newStartIndex)  {
	m_startIndex = newStartIndex;
}

bool GetRecordingsSeriesParams::startIndexNull() const {
	// Nullable: true
	// Type Nullable: false
	

	return !m_startIndex.has_value();
}

void GetRecordingsSeriesParams::setStartIndexNull() {
	m_startIndex = std::nullopt;
}


const RecordingStatus &GetRecordingsSeriesParams::status() const {
	return m_status;
}

void GetRecordingsSeriesParams::setStatus(RecordingStatus newStatus)  {
	m_status = newStatus;
}

bool GetRecordingsSeriesParams::statusNull() const {
	// Nullable: true
	// Type Nullable: true
	

	return m_status== RecordingStatus::EnumNotSet;
}

void GetRecordingsSeriesParams::setStatusNull() {
	m_status= RecordingStatus::EnumNotSet;
}


const QString &GetRecordingsSeriesParams::userId() const {
	return m_userId;
}

void GetRecordingsSeriesParams::setUserId(QString newUserId)  {
	m_userId = newUserId;
}

bool GetRecordingsSeriesParams::userIdNull() const {
	// Nullable: true
	// Type Nullable: true
	

	return m_userId.isNull();
}

void GetRecordingsSeriesParams::setUserIdNull() {
	m_userId.clear();
}




// GetRemoteImageParams

const QString &GetRemoteImageParams::imageUrl() const {
	return m_imageUrl;
}

void GetRemoteImageParams::setImageUrl(QString newImageUrl) {
	m_imageUrl = newImageUrl;
}




// GetRemoteImageProvidersParams

const QString &GetRemoteImageProvidersParams::itemId() const {
	return m_itemId;
}

void GetRemoteImageProvidersParams::setItemId(QString newItemId) {
	m_itemId = newItemId;
}




// GetRemoteImagesParams

const QString &GetRemoteImagesParams::itemId() const {
	return m_itemId;
}

void GetRemoteImagesParams::setItemId(QString newItemId) {
	m_itemId = newItemId;
}


const bool &GetRemoteImagesParams::includeAllLanguages() const {
	return m_includeAllLanguages.value();
}

void GetRemoteImagesParams::setIncludeAllLanguages(bool newIncludeAllLanguages)  {
	m_includeAllLanguages = newIncludeAllLanguages;
}

bool GetRemoteImagesParams::includeAllLanguagesNull() const {
	// Nullable: false
	// Type Nullable: false
	

	return !m_includeAllLanguages.has_value();
}

void GetRemoteImagesParams::setIncludeAllLanguagesNull() {
	m_includeAllLanguages = std::nullopt;
}


const qint32 &GetRemoteImagesParams::limit() const {
	return m_limit.value();
}

void GetRemoteImagesParams::setLimit(qint32 newLimit)  {
	m_limit = newLimit;
}

bool GetRemoteImagesParams::limitNull() const {
	// Nullable: true
	// Type Nullable: false
	

	return !m_limit.has_value();
}

void GetRemoteImagesParams::setLimitNull() {
	m_limit = std::nullopt;
}


const QString &GetRemoteImagesParams::providerName() const {
	return m_providerName;
}

void GetRemoteImagesParams::setProviderName(QString newProviderName)  {
	m_providerName = newProviderName;
}

bool GetRemoteImagesParams::providerNameNull() const {
	// Nullable: true
	// Type Nullable: true
	

	return m_providerName.isNull();
}

void GetRemoteImagesParams::setProviderNameNull() {
	m_providerName.clear();
}


const qint32 &GetRemoteImagesParams::startIndex() const {
	return m_startIndex.value();
}

void GetRemoteImagesParams::setStartIndex(qint32 newStartIndex)  {
	m_startIndex = newStartIndex;
}

bool GetRemoteImagesParams::startIndexNull() const {
	// Nullable: true
	// Type Nullable: false
	

	return !m_startIndex.has_value();
}

void GetRemoteImagesParams::setStartIndexNull() {
	m_startIndex = std::nullopt;
}


const ImageType &GetRemoteImagesParams::type() const {
	return m_type;
}

void GetRemoteImagesParams::setType(ImageType newType)  {
	m_type = newType;
}

bool GetRemoteImagesParams::typeNull() const {
	// Nullable: true
	// Type Nullable: true
	

	return m_type== ImageType::EnumNotSet;
}

void GetRemoteImagesParams::setTypeNull() {
	m_type= ImageType::EnumNotSet;
}




// GetRemoteSearchImageParams

const QString &GetRemoteSearchImageParams::imageUrl() const {
	return m_imageUrl;
}

void GetRemoteSearchImageParams::setImageUrl(QString newImageUrl) {
	m_imageUrl = newImageUrl;
}


const QString &GetRemoteSearchImageParams::providerName() const {
	return m_providerName;
}

void GetRemoteSearchImageParams::setProviderName(QString newProviderName) {
	m_providerName = newProviderName;
}




// GetRemoteSubtitlesParams

const QString &GetRemoteSubtitlesParams::jellyfinId() const {
	return m_jellyfinId;
}

void GetRemoteSubtitlesParams::setJellyfinId(QString newJellyfinId) {
	m_jellyfinId = newJellyfinId;
}




// GetRepositoriesParams



// GetResumeItemsParams

const QString &GetResumeItemsParams::userId() const {
	return m_userId;
}

void GetResumeItemsParams::setUserId(QString newUserId) {
	m_userId = newUserId;
}


const QList<ImageType> &GetResumeItemsParams::enableImageTypes() const {
	return m_enableImageTypes;
}

void GetResumeItemsParams::setEnableImageTypes(QList<ImageType> newEnableImageTypes)  {
	m_enableImageTypes = newEnableImageTypes;
}

bool GetResumeItemsParams::enableImageTypesNull() const {
	// Nullable: true
	// Type Nullable: true
	

	return m_enableImageTypes.size() == 0;
}

void GetResumeItemsParams::setEnableImageTypesNull() {
	m_enableImageTypes.clear();
}


const bool &GetResumeItemsParams::enableImages() const {
	return m_enableImages.value();
}

void GetResumeItemsParams::setEnableImages(bool newEnableImages)  {
	m_enableImages = newEnableImages;
}

bool GetResumeItemsParams::enableImagesNull() const {
	// Nullable: true
	// Type Nullable: false
	

	return !m_enableImages.has_value();
}

void GetResumeItemsParams::setEnableImagesNull() {
	m_enableImages = std::nullopt;
}


const bool &GetResumeItemsParams::enableTotalRecordCount() const {
	return m_enableTotalRecordCount.value();
}

void GetResumeItemsParams::setEnableTotalRecordCount(bool newEnableTotalRecordCount)  {
	m_enableTotalRecordCount = newEnableTotalRecordCount;
}

bool GetResumeItemsParams::enableTotalRecordCountNull() const {
	// Nullable: false
	// Type Nullable: false
	

	return !m_enableTotalRecordCount.has_value();
}

void GetResumeItemsParams::setEnableTotalRecordCountNull() {
	m_enableTotalRecordCount = std::nullopt;
}


const bool &GetResumeItemsParams::enableUserData() const {
	return m_enableUserData.value();
}

void GetResumeItemsParams::setEnableUserData(bool newEnableUserData)  {
	m_enableUserData = newEnableUserData;
}

bool GetResumeItemsParams::enableUserDataNull() const {
	// Nullable: true
	// Type Nullable: false
	

	return !m_enableUserData.has_value();
}

void GetResumeItemsParams::setEnableUserDataNull() {
	m_enableUserData = std::nullopt;
}


const QStringList &GetResumeItemsParams::excludeItemTypes() const {
	return m_excludeItemTypes;
}

void GetResumeItemsParams::setExcludeItemTypes(QStringList newExcludeItemTypes)  {
	m_excludeItemTypes = newExcludeItemTypes;
}

bool GetResumeItemsParams::excludeItemTypesNull() const {
	// Nullable: true
	// Type Nullable: true
	

	return m_excludeItemTypes.size() == 0;
}

void GetResumeItemsParams::setExcludeItemTypesNull() {
	m_excludeItemTypes.clear();
}


const QList<ItemFields> &GetResumeItemsParams::fields() const {
	return m_fields;
}

void GetResumeItemsParams::setFields(QList<ItemFields> newFields)  {
	m_fields = newFields;
}

bool GetResumeItemsParams::fieldsNull() const {
	// Nullable: true
	// Type Nullable: true
	

	return m_fields.size() == 0;
}

void GetResumeItemsParams::setFieldsNull() {
	m_fields.clear();
}


const qint32 &GetResumeItemsParams::imageTypeLimit() const {
	return m_imageTypeLimit.value();
}

void GetResumeItemsParams::setImageTypeLimit(qint32 newImageTypeLimit)  {
	m_imageTypeLimit = newImageTypeLimit;
}

bool GetResumeItemsParams::imageTypeLimitNull() const {
	// Nullable: true
	// Type Nullable: false
	

	return !m_imageTypeLimit.has_value();
}

void GetResumeItemsParams::setImageTypeLimitNull() {
	m_imageTypeLimit = std::nullopt;
}


const QStringList &GetResumeItemsParams::includeItemTypes() const {
	return m_includeItemTypes;
}

void GetResumeItemsParams::setIncludeItemTypes(QStringList newIncludeItemTypes)  {
	m_includeItemTypes = newIncludeItemTypes;
}

bool GetResumeItemsParams::includeItemTypesNull() const {
	// Nullable: true
	// Type Nullable: true
	

	return m_includeItemTypes.size() == 0;
}

void GetResumeItemsParams::setIncludeItemTypesNull() {
	m_includeItemTypes.clear();
}


const qint32 &GetResumeItemsParams::limit() const {
	return m_limit.value();
}

void GetResumeItemsParams::setLimit(qint32 newLimit)  {
	m_limit = newLimit;
}

bool GetResumeItemsParams::limitNull() const {
	// Nullable: true
	// Type Nullable: false
	

	return !m_limit.has_value();
}

void GetResumeItemsParams::setLimitNull() {
	m_limit = std::nullopt;
}


const QStringList &GetResumeItemsParams::mediaTypes() const {
	return m_mediaTypes;
}

void GetResumeItemsParams::setMediaTypes(QStringList newMediaTypes)  {
	m_mediaTypes = newMediaTypes;
}

bool GetResumeItemsParams::mediaTypesNull() const {
	// Nullable: true
	// Type Nullable: true
	

	return m_mediaTypes.size() == 0;
}

void GetResumeItemsParams::setMediaTypesNull() {
	m_mediaTypes.clear();
}


const QString &GetResumeItemsParams::parentId() const {
	return m_parentId;
}

void GetResumeItemsParams::setParentId(QString newParentId)  {
	m_parentId = newParentId;
}

bool GetResumeItemsParams::parentIdNull() const {
	// Nullable: true
	// Type Nullable: true
	

	return m_parentId.isNull();
}

void GetResumeItemsParams::setParentIdNull() {
	m_parentId.clear();
}


const QString &GetResumeItemsParams::searchTerm() const {
	return m_searchTerm;
}

void GetResumeItemsParams::setSearchTerm(QString newSearchTerm)  {
	m_searchTerm = newSearchTerm;
}

bool GetResumeItemsParams::searchTermNull() const {
	// Nullable: true
	// Type Nullable: true
	

	return m_searchTerm.isNull();
}

void GetResumeItemsParams::setSearchTermNull() {
	m_searchTerm.clear();
}


const qint32 &GetResumeItemsParams::startIndex() const {
	return m_startIndex.value();
}

void GetResumeItemsParams::setStartIndex(qint32 newStartIndex)  {
	m_startIndex = newStartIndex;
}

bool GetResumeItemsParams::startIndexNull() const {
	// Nullable: true
	// Type Nullable: false
	

	return !m_startIndex.has_value();
}

void GetResumeItemsParams::setStartIndexNull() {
	m_startIndex = std::nullopt;
}




// GetRootFolderParams

const QString &GetRootFolderParams::userId() const {
	return m_userId;
}

void GetRootFolderParams::setUserId(QString newUserId) {
	m_userId = newUserId;
}




// GetSchedulesDirectCountriesParams



// GetSeasonsParams

const QString &GetSeasonsParams::seriesId() const {
	return m_seriesId;
}

void GetSeasonsParams::setSeriesId(QString newSeriesId) {
	m_seriesId = newSeriesId;
}


const QString &GetSeasonsParams::adjacentTo() const {
	return m_adjacentTo;
}

void GetSeasonsParams::setAdjacentTo(QString newAdjacentTo)  {
	m_adjacentTo = newAdjacentTo;
}

bool GetSeasonsParams::adjacentToNull() const {
	// Nullable: true
	// Type Nullable: true
	

	return m_adjacentTo.isNull();
}

void GetSeasonsParams::setAdjacentToNull() {
	m_adjacentTo.clear();
}


const QList<ImageType> &GetSeasonsParams::enableImageTypes() const {
	return m_enableImageTypes;
}

void GetSeasonsParams::setEnableImageTypes(QList<ImageType> newEnableImageTypes)  {
	m_enableImageTypes = newEnableImageTypes;
}

bool GetSeasonsParams::enableImageTypesNull() const {
	// Nullable: true
	// Type Nullable: true
	

	return m_enableImageTypes.size() == 0;
}

void GetSeasonsParams::setEnableImageTypesNull() {
	m_enableImageTypes.clear();
}


const bool &GetSeasonsParams::enableImages() const {
	return m_enableImages.value();
}

void GetSeasonsParams::setEnableImages(bool newEnableImages)  {
	m_enableImages = newEnableImages;
}

bool GetSeasonsParams::enableImagesNull() const {
	// Nullable: true
	// Type Nullable: false
	

	return !m_enableImages.has_value();
}

void GetSeasonsParams::setEnableImagesNull() {
	m_enableImages = std::nullopt;
}


const bool &GetSeasonsParams::enableUserData() const {
	return m_enableUserData.value();
}

void GetSeasonsParams::setEnableUserData(bool newEnableUserData)  {
	m_enableUserData = newEnableUserData;
}

bool GetSeasonsParams::enableUserDataNull() const {
	// Nullable: true
	// Type Nullable: false
	

	return !m_enableUserData.has_value();
}

void GetSeasonsParams::setEnableUserDataNull() {
	m_enableUserData = std::nullopt;
}


const QList<ItemFields> &GetSeasonsParams::fields() const {
	return m_fields;
}

void GetSeasonsParams::setFields(QList<ItemFields> newFields)  {
	m_fields = newFields;
}

bool GetSeasonsParams::fieldsNull() const {
	// Nullable: true
	// Type Nullable: true
	

	return m_fields.size() == 0;
}

void GetSeasonsParams::setFieldsNull() {
	m_fields.clear();
}


const qint32 &GetSeasonsParams::imageTypeLimit() const {
	return m_imageTypeLimit.value();
}

void GetSeasonsParams::setImageTypeLimit(qint32 newImageTypeLimit)  {
	m_imageTypeLimit = newImageTypeLimit;
}

bool GetSeasonsParams::imageTypeLimitNull() const {
	// Nullable: true
	// Type Nullable: false
	

	return !m_imageTypeLimit.has_value();
}

void GetSeasonsParams::setImageTypeLimitNull() {
	m_imageTypeLimit = std::nullopt;
}


const bool &GetSeasonsParams::isMissing() const {
	return m_isMissing.value();
}

void GetSeasonsParams::setIsMissing(bool newIsMissing)  {
	m_isMissing = newIsMissing;
}

bool GetSeasonsParams::isMissingNull() const {
	// Nullable: true
	// Type Nullable: false
	

	return !m_isMissing.has_value();
}

void GetSeasonsParams::setIsMissingNull() {
	m_isMissing = std::nullopt;
}


const bool &GetSeasonsParams::isSpecialSeason() const {
	return m_isSpecialSeason.value();
}

void GetSeasonsParams::setIsSpecialSeason(bool newIsSpecialSeason)  {
	m_isSpecialSeason = newIsSpecialSeason;
}

bool GetSeasonsParams::isSpecialSeasonNull() const {
	// Nullable: true
	// Type Nullable: false
	

	return !m_isSpecialSeason.has_value();
}

void GetSeasonsParams::setIsSpecialSeasonNull() {
	m_isSpecialSeason = std::nullopt;
}


const QString &GetSeasonsParams::userId() const {
	return m_userId;
}

void GetSeasonsParams::setUserId(QString newUserId)  {
	m_userId = newUserId;
}

bool GetSeasonsParams::userIdNull() const {
	// Nullable: true
	// Type Nullable: true
	

	return m_userId.isNull();
}

void GetSeasonsParams::setUserIdNull() {
	m_userId.clear();
}




// GetSeriesRemoteSearchResultsParams

const QSharedPointer<SeriesInfoRemoteSearchQuery> &GetSeriesRemoteSearchResultsParams::body() const {
	return m_body;
}

void GetSeriesRemoteSearchResultsParams::setBody(QSharedPointer<SeriesInfoRemoteSearchQuery> newBody) {
	m_body = newBody;
}




// GetSeriesTimerParams

const QString &GetSeriesTimerParams::timerId() const {
	return m_timerId;
}

void GetSeriesTimerParams::setTimerId(QString newTimerId) {
	m_timerId = newTimerId;
}




// GetSeriesTimersParams

const QString &GetSeriesTimersParams::sortBy() const {
	return m_sortBy;
}

void GetSeriesTimersParams::setSortBy(QString newSortBy)  {
	m_sortBy = newSortBy;
}

bool GetSeriesTimersParams::sortByNull() const {
	// Nullable: true
	// Type Nullable: true
	

	return m_sortBy.isNull();
}

void GetSeriesTimersParams::setSortByNull() {
	m_sortBy.clear();
}


const SortOrder &GetSeriesTimersParams::sortOrder() const {
	return m_sortOrder;
}

void GetSeriesTimersParams::setSortOrder(SortOrder newSortOrder)  {
	m_sortOrder = newSortOrder;
}

bool GetSeriesTimersParams::sortOrderNull() const {
	// Nullable: true
	// Type Nullable: true
	

	return m_sortOrder== SortOrder::EnumNotSet;
}

void GetSeriesTimersParams::setSortOrderNull() {
	m_sortOrder= SortOrder::EnumNotSet;
}




// GetServerLogsParams



// GetSessionsParams

const qint32 &GetSessionsParams::activeWithinSeconds() const {
	return m_activeWithinSeconds.value();
}

void GetSessionsParams::setActiveWithinSeconds(qint32 newActiveWithinSeconds)  {
	m_activeWithinSeconds = newActiveWithinSeconds;
}

bool GetSessionsParams::activeWithinSecondsNull() const {
	// Nullable: true
	// Type Nullable: false
	

	return !m_activeWithinSeconds.has_value();
}

void GetSessionsParams::setActiveWithinSecondsNull() {
	m_activeWithinSeconds = std::nullopt;
}


const QString &GetSessionsParams::controllableByUserId() const {
	return m_controllableByUserId;
}

void GetSessionsParams::setControllableByUserId(QString newControllableByUserId)  {
	m_controllableByUserId = newControllableByUserId;
}

bool GetSessionsParams::controllableByUserIdNull() const {
	// Nullable: true
	// Type Nullable: true
	

	return m_controllableByUserId.isNull();
}

void GetSessionsParams::setControllableByUserIdNull() {
	m_controllableByUserId.clear();
}


const QString &GetSessionsParams::deviceId() const {
	return m_deviceId;
}

void GetSessionsParams::setDeviceId(QString newDeviceId)  {
	m_deviceId = newDeviceId;
}

bool GetSessionsParams::deviceIdNull() const {
	// Nullable: true
	// Type Nullable: true
	

	return m_deviceId.isNull();
}

void GetSessionsParams::setDeviceIdNull() {
	m_deviceId.clear();
}




// GetSimilarAlbumsParams

const QString &GetSimilarAlbumsParams::itemId() const {
	return m_itemId;
}

void GetSimilarAlbumsParams::setItemId(QString newItemId) {
	m_itemId = newItemId;
}


const QStringList &GetSimilarAlbumsParams::excludeArtistIds() const {
	return m_excludeArtistIds;
}

void GetSimilarAlbumsParams::setExcludeArtistIds(QStringList newExcludeArtistIds)  {
	m_excludeArtistIds = newExcludeArtistIds;
}

bool GetSimilarAlbumsParams::excludeArtistIdsNull() const {
	// Nullable: true
	// Type Nullable: true
	

	return m_excludeArtistIds.size() == 0;
}

void GetSimilarAlbumsParams::setExcludeArtistIdsNull() {
	m_excludeArtistIds.clear();
}


const QList<ItemFields> &GetSimilarAlbumsParams::fields() const {
	return m_fields;
}

void GetSimilarAlbumsParams::setFields(QList<ItemFields> newFields)  {
	m_fields = newFields;
}

bool GetSimilarAlbumsParams::fieldsNull() const {
	// Nullable: true
	// Type Nullable: true
	

	return m_fields.size() == 0;
}

void GetSimilarAlbumsParams::setFieldsNull() {
	m_fields.clear();
}


const qint32 &GetSimilarAlbumsParams::limit() const {
	return m_limit.value();
}

void GetSimilarAlbumsParams::setLimit(qint32 newLimit)  {
	m_limit = newLimit;
}

bool GetSimilarAlbumsParams::limitNull() const {
	// Nullable: true
	// Type Nullable: false
	

	return !m_limit.has_value();
}

void GetSimilarAlbumsParams::setLimitNull() {
	m_limit = std::nullopt;
}


const QString &GetSimilarAlbumsParams::userId() const {
	return m_userId;
}

void GetSimilarAlbumsParams::setUserId(QString newUserId)  {
	m_userId = newUserId;
}

bool GetSimilarAlbumsParams::userIdNull() const {
	// Nullable: true
	// Type Nullable: true
	

	return m_userId.isNull();
}

void GetSimilarAlbumsParams::setUserIdNull() {
	m_userId.clear();
}




// GetSimilarArtistsParams

const QString &GetSimilarArtistsParams::itemId() const {
	return m_itemId;
}

void GetSimilarArtistsParams::setItemId(QString newItemId) {
	m_itemId = newItemId;
}


const QStringList &GetSimilarArtistsParams::excludeArtistIds() const {
	return m_excludeArtistIds;
}

void GetSimilarArtistsParams::setExcludeArtistIds(QStringList newExcludeArtistIds)  {
	m_excludeArtistIds = newExcludeArtistIds;
}

bool GetSimilarArtistsParams::excludeArtistIdsNull() const {
	// Nullable: true
	// Type Nullable: true
	

	return m_excludeArtistIds.size() == 0;
}

void GetSimilarArtistsParams::setExcludeArtistIdsNull() {
	m_excludeArtistIds.clear();
}


const QList<ItemFields> &GetSimilarArtistsParams::fields() const {
	return m_fields;
}

void GetSimilarArtistsParams::setFields(QList<ItemFields> newFields)  {
	m_fields = newFields;
}

bool GetSimilarArtistsParams::fieldsNull() const {
	// Nullable: true
	// Type Nullable: true
	

	return m_fields.size() == 0;
}

void GetSimilarArtistsParams::setFieldsNull() {
	m_fields.clear();
}


const qint32 &GetSimilarArtistsParams::limit() const {
	return m_limit.value();
}

void GetSimilarArtistsParams::setLimit(qint32 newLimit)  {
	m_limit = newLimit;
}

bool GetSimilarArtistsParams::limitNull() const {
	// Nullable: true
	// Type Nullable: false
	

	return !m_limit.has_value();
}

void GetSimilarArtistsParams::setLimitNull() {
	m_limit = std::nullopt;
}


const QString &GetSimilarArtistsParams::userId() const {
	return m_userId;
}

void GetSimilarArtistsParams::setUserId(QString newUserId)  {
	m_userId = newUserId;
}

bool GetSimilarArtistsParams::userIdNull() const {
	// Nullable: true
	// Type Nullable: true
	

	return m_userId.isNull();
}

void GetSimilarArtistsParams::setUserIdNull() {
	m_userId.clear();
}




// GetSimilarItemsParams

const QString &GetSimilarItemsParams::itemId() const {
	return m_itemId;
}

void GetSimilarItemsParams::setItemId(QString newItemId) {
	m_itemId = newItemId;
}


const QStringList &GetSimilarItemsParams::excludeArtistIds() const {
	return m_excludeArtistIds;
}

void GetSimilarItemsParams::setExcludeArtistIds(QStringList newExcludeArtistIds)  {
	m_excludeArtistIds = newExcludeArtistIds;
}

bool GetSimilarItemsParams::excludeArtistIdsNull() const {
	// Nullable: true
	// Type Nullable: true
	

	return m_excludeArtistIds.size() == 0;
}

void GetSimilarItemsParams::setExcludeArtistIdsNull() {
	m_excludeArtistIds.clear();
}


const QList<ItemFields> &GetSimilarItemsParams::fields() const {
	return m_fields;
}

void GetSimilarItemsParams::setFields(QList<ItemFields> newFields)  {
	m_fields = newFields;
}

bool GetSimilarItemsParams::fieldsNull() const {
	// Nullable: true
	// Type Nullable: true
	

	return m_fields.size() == 0;
}

void GetSimilarItemsParams::setFieldsNull() {
	m_fields.clear();
}


const qint32 &GetSimilarItemsParams::limit() const {
	return m_limit.value();
}

void GetSimilarItemsParams::setLimit(qint32 newLimit)  {
	m_limit = newLimit;
}

bool GetSimilarItemsParams::limitNull() const {
	// Nullable: true
	// Type Nullable: false
	

	return !m_limit.has_value();
}

void GetSimilarItemsParams::setLimitNull() {
	m_limit = std::nullopt;
}


const QString &GetSimilarItemsParams::userId() const {
	return m_userId;
}

void GetSimilarItemsParams::setUserId(QString newUserId)  {
	m_userId = newUserId;
}

bool GetSimilarItemsParams::userIdNull() const {
	// Nullable: true
	// Type Nullable: true
	

	return m_userId.isNull();
}

void GetSimilarItemsParams::setUserIdNull() {
	m_userId.clear();
}




// GetSimilarMoviesParams

const QString &GetSimilarMoviesParams::itemId() const {
	return m_itemId;
}

void GetSimilarMoviesParams::setItemId(QString newItemId) {
	m_itemId = newItemId;
}


const QStringList &GetSimilarMoviesParams::excludeArtistIds() const {
	return m_excludeArtistIds;
}

void GetSimilarMoviesParams::setExcludeArtistIds(QStringList newExcludeArtistIds)  {
	m_excludeArtistIds = newExcludeArtistIds;
}

bool GetSimilarMoviesParams::excludeArtistIdsNull() const {
	// Nullable: true
	// Type Nullable: true
	

	return m_excludeArtistIds.size() == 0;
}

void GetSimilarMoviesParams::setExcludeArtistIdsNull() {
	m_excludeArtistIds.clear();
}


const QList<ItemFields> &GetSimilarMoviesParams::fields() const {
	return m_fields;
}

void GetSimilarMoviesParams::setFields(QList<ItemFields> newFields)  {
	m_fields = newFields;
}

bool GetSimilarMoviesParams::fieldsNull() const {
	// Nullable: true
	// Type Nullable: true
	

	return m_fields.size() == 0;
}

void GetSimilarMoviesParams::setFieldsNull() {
	m_fields.clear();
}


const qint32 &GetSimilarMoviesParams::limit() const {
	return m_limit.value();
}

void GetSimilarMoviesParams::setLimit(qint32 newLimit)  {
	m_limit = newLimit;
}

bool GetSimilarMoviesParams::limitNull() const {
	// Nullable: true
	// Type Nullable: false
	

	return !m_limit.has_value();
}

void GetSimilarMoviesParams::setLimitNull() {
	m_limit = std::nullopt;
}


const QString &GetSimilarMoviesParams::userId() const {
	return m_userId;
}

void GetSimilarMoviesParams::setUserId(QString newUserId)  {
	m_userId = newUserId;
}

bool GetSimilarMoviesParams::userIdNull() const {
	// Nullable: true
	// Type Nullable: true
	

	return m_userId.isNull();
}

void GetSimilarMoviesParams::setUserIdNull() {
	m_userId.clear();
}




// GetSimilarShowsParams

const QString &GetSimilarShowsParams::itemId() const {
	return m_itemId;
}

void GetSimilarShowsParams::setItemId(QString newItemId) {
	m_itemId = newItemId;
}


const QStringList &GetSimilarShowsParams::excludeArtistIds() const {
	return m_excludeArtistIds;
}

void GetSimilarShowsParams::setExcludeArtistIds(QStringList newExcludeArtistIds)  {
	m_excludeArtistIds = newExcludeArtistIds;
}

bool GetSimilarShowsParams::excludeArtistIdsNull() const {
	// Nullable: true
	// Type Nullable: true
	

	return m_excludeArtistIds.size() == 0;
}

void GetSimilarShowsParams::setExcludeArtistIdsNull() {
	m_excludeArtistIds.clear();
}


const QList<ItemFields> &GetSimilarShowsParams::fields() const {
	return m_fields;
}

void GetSimilarShowsParams::setFields(QList<ItemFields> newFields)  {
	m_fields = newFields;
}

bool GetSimilarShowsParams::fieldsNull() const {
	// Nullable: true
	// Type Nullable: true
	

	return m_fields.size() == 0;
}

void GetSimilarShowsParams::setFieldsNull() {
	m_fields.clear();
}


const qint32 &GetSimilarShowsParams::limit() const {
	return m_limit.value();
}

void GetSimilarShowsParams::setLimit(qint32 newLimit)  {
	m_limit = newLimit;
}

bool GetSimilarShowsParams::limitNull() const {
	// Nullable: true
	// Type Nullable: false
	

	return !m_limit.has_value();
}

void GetSimilarShowsParams::setLimitNull() {
	m_limit = std::nullopt;
}


const QString &GetSimilarShowsParams::userId() const {
	return m_userId;
}

void GetSimilarShowsParams::setUserId(QString newUserId)  {
	m_userId = newUserId;
}

bool GetSimilarShowsParams::userIdNull() const {
	// Nullable: true
	// Type Nullable: true
	

	return m_userId.isNull();
}

void GetSimilarShowsParams::setUserIdNull() {
	m_userId.clear();
}




// GetSimilarTrailersParams

const QString &GetSimilarTrailersParams::itemId() const {
	return m_itemId;
}

void GetSimilarTrailersParams::setItemId(QString newItemId) {
	m_itemId = newItemId;
}


const QStringList &GetSimilarTrailersParams::excludeArtistIds() const {
	return m_excludeArtistIds;
}

void GetSimilarTrailersParams::setExcludeArtistIds(QStringList newExcludeArtistIds)  {
	m_excludeArtistIds = newExcludeArtistIds;
}

bool GetSimilarTrailersParams::excludeArtistIdsNull() const {
	// Nullable: true
	// Type Nullable: true
	

	return m_excludeArtistIds.size() == 0;
}

void GetSimilarTrailersParams::setExcludeArtistIdsNull() {
	m_excludeArtistIds.clear();
}


const QList<ItemFields> &GetSimilarTrailersParams::fields() const {
	return m_fields;
}

void GetSimilarTrailersParams::setFields(QList<ItemFields> newFields)  {
	m_fields = newFields;
}

bool GetSimilarTrailersParams::fieldsNull() const {
	// Nullable: true
	// Type Nullable: true
	

	return m_fields.size() == 0;
}

void GetSimilarTrailersParams::setFieldsNull() {
	m_fields.clear();
}


const qint32 &GetSimilarTrailersParams::limit() const {
	return m_limit.value();
}

void GetSimilarTrailersParams::setLimit(qint32 newLimit)  {
	m_limit = newLimit;
}

bool GetSimilarTrailersParams::limitNull() const {
	// Nullable: true
	// Type Nullable: false
	

	return !m_limit.has_value();
}

void GetSimilarTrailersParams::setLimitNull() {
	m_limit = std::nullopt;
}


const QString &GetSimilarTrailersParams::userId() const {
	return m_userId;
}

void GetSimilarTrailersParams::setUserId(QString newUserId)  {
	m_userId = newUserId;
}

bool GetSimilarTrailersParams::userIdNull() const {
	// Nullable: true
	// Type Nullable: true
	

	return m_userId.isNull();
}

void GetSimilarTrailersParams::setUserIdNull() {
	m_userId.clear();
}




// GetSpecialFeaturesParams

const QString &GetSpecialFeaturesParams::itemId() const {
	return m_itemId;
}

void GetSpecialFeaturesParams::setItemId(QString newItemId) {
	m_itemId = newItemId;
}


const QString &GetSpecialFeaturesParams::userId() const {
	return m_userId;
}

void GetSpecialFeaturesParams::setUserId(QString newUserId) {
	m_userId = newUserId;
}




// GetStartupConfigurationParams



// GetStatusParams



// GetStudioParams

const QString &GetStudioParams::name() const {
	return m_name;
}

void GetStudioParams::setName(QString newName) {
	m_name = newName;
}


const QString &GetStudioParams::userId() const {
	return m_userId;
}

void GetStudioParams::setUserId(QString newUserId)  {
	m_userId = newUserId;
}

bool GetStudioParams::userIdNull() const {
	// Nullable: true
	// Type Nullable: true
	

	return m_userId.isNull();
}

void GetStudioParams::setUserIdNull() {
	m_userId.clear();
}




// GetStudioImageParams

const ImageType &GetStudioImageParams::imageType() const {
	return m_imageType;
}

void GetStudioImageParams::setImageType(ImageType newImageType) {
	m_imageType = newImageType;
}


const QString &GetStudioImageParams::name() const {
	return m_name;
}

void GetStudioImageParams::setName(QString newName) {
	m_name = newName;
}


const bool &GetStudioImageParams::addPlayedIndicator() const {
	return m_addPlayedIndicator.value();
}

void GetStudioImageParams::setAddPlayedIndicator(bool newAddPlayedIndicator)  {
	m_addPlayedIndicator = newAddPlayedIndicator;
}

bool GetStudioImageParams::addPlayedIndicatorNull() const {
	// Nullable: true
	// Type Nullable: false
	

	return !m_addPlayedIndicator.has_value();
}

void GetStudioImageParams::setAddPlayedIndicatorNull() {
	m_addPlayedIndicator = std::nullopt;
}


const QString &GetStudioImageParams::backgroundColor() const {
	return m_backgroundColor;
}

void GetStudioImageParams::setBackgroundColor(QString newBackgroundColor)  {
	m_backgroundColor = newBackgroundColor;
}

bool GetStudioImageParams::backgroundColorNull() const {
	// Nullable: true
	// Type Nullable: true
	

	return m_backgroundColor.isNull();
}

void GetStudioImageParams::setBackgroundColorNull() {
	m_backgroundColor.clear();
}


const qint32 &GetStudioImageParams::blur() const {
	return m_blur.value();
}

void GetStudioImageParams::setBlur(qint32 newBlur)  {
	m_blur = newBlur;
}

bool GetStudioImageParams::blurNull() const {
	// Nullable: true
	// Type Nullable: false
	

	return !m_blur.has_value();
}

void GetStudioImageParams::setBlurNull() {
	m_blur = std::nullopt;
}


const bool &GetStudioImageParams::cropWhitespace() const {
	return m_cropWhitespace.value();
}

void GetStudioImageParams::setCropWhitespace(bool newCropWhitespace)  {
	m_cropWhitespace = newCropWhitespace;
}

bool GetStudioImageParams::cropWhitespaceNull() const {
	// Nullable: true
	// Type Nullable: false
	

	return !m_cropWhitespace.has_value();
}

void GetStudioImageParams::setCropWhitespaceNull() {
	m_cropWhitespace = std::nullopt;
}


const QString &GetStudioImageParams::foregroundLayer() const {
	return m_foregroundLayer;
}

void GetStudioImageParams::setForegroundLayer(QString newForegroundLayer)  {
	m_foregroundLayer = newForegroundLayer;
}

bool GetStudioImageParams::foregroundLayerNull() const {
	// Nullable: true
	// Type Nullable: true
	

	return m_foregroundLayer.isNull();
}

void GetStudioImageParams::setForegroundLayerNull() {
	m_foregroundLayer.clear();
}


const ImageFormat &GetStudioImageParams::format() const {
	return m_format;
}

void GetStudioImageParams::setFormat(ImageFormat newFormat)  {
	m_format = newFormat;
}

bool GetStudioImageParams::formatNull() const {
	// Nullable: true
	// Type Nullable: true
	

	return m_format== ImageFormat::EnumNotSet;
}

void GetStudioImageParams::setFormatNull() {
	m_format= ImageFormat::EnumNotSet;
}


const qint32 &GetStudioImageParams::height() const {
	return m_height.value();
}

void GetStudioImageParams::setHeight(qint32 newHeight)  {
	m_height = newHeight;
}

bool GetStudioImageParams::heightNull() const {
	// Nullable: true
	// Type Nullable: false
	

	return !m_height.has_value();
}

void GetStudioImageParams::setHeightNull() {
	m_height = std::nullopt;
}


const qint32 &GetStudioImageParams::imageIndex() const {
	return m_imageIndex.value();
}

void GetStudioImageParams::setImageIndex(qint32 newImageIndex)  {
	m_imageIndex = newImageIndex;
}

bool GetStudioImageParams::imageIndexNull() const {
	// Nullable: true
	// Type Nullable: false
	

	return !m_imageIndex.has_value();
}

void GetStudioImageParams::setImageIndexNull() {
	m_imageIndex = std::nullopt;
}


const qint32 &GetStudioImageParams::maxHeight() const {
	return m_maxHeight.value();
}

void GetStudioImageParams::setMaxHeight(qint32 newMaxHeight)  {
	m_maxHeight = newMaxHeight;
}

bool GetStudioImageParams::maxHeightNull() const {
	// Nullable: true
	// Type Nullable: false
	

	return !m_maxHeight.has_value();
}

void GetStudioImageParams::setMaxHeightNull() {
	m_maxHeight = std::nullopt;
}


const qint32 &GetStudioImageParams::maxWidth() const {
	return m_maxWidth.value();
}

void GetStudioImageParams::setMaxWidth(qint32 newMaxWidth)  {
	m_maxWidth = newMaxWidth;
}

bool GetStudioImageParams::maxWidthNull() const {
	// Nullable: true
	// Type Nullable: false
	

	return !m_maxWidth.has_value();
}

void GetStudioImageParams::setMaxWidthNull() {
	m_maxWidth = std::nullopt;
}


const double &GetStudioImageParams::percentPlayed() const {
	return m_percentPlayed.value();
}

void GetStudioImageParams::setPercentPlayed(double newPercentPlayed)  {
	m_percentPlayed = newPercentPlayed;
}

bool GetStudioImageParams::percentPlayedNull() const {
	// Nullable: true
	// Type Nullable: false
	

	return !m_percentPlayed.has_value();
}

void GetStudioImageParams::setPercentPlayedNull() {
	m_percentPlayed = std::nullopt;
}


const qint32 &GetStudioImageParams::quality() const {
	return m_quality.value();
}

void GetStudioImageParams::setQuality(qint32 newQuality)  {
	m_quality = newQuality;
}

bool GetStudioImageParams::qualityNull() const {
	// Nullable: true
	// Type Nullable: false
	

	return !m_quality.has_value();
}

void GetStudioImageParams::setQualityNull() {
	m_quality = std::nullopt;
}


const QString &GetStudioImageParams::tag() const {
	return m_tag;
}

void GetStudioImageParams::setTag(QString newTag)  {
	m_tag = newTag;
}

bool GetStudioImageParams::tagNull() const {
	// Nullable: true
	// Type Nullable: true
	

	return m_tag.isNull();
}

void GetStudioImageParams::setTagNull() {
	m_tag.clear();
}


const qint32 &GetStudioImageParams::unplayedCount() const {
	return m_unplayedCount.value();
}

void GetStudioImageParams::setUnplayedCount(qint32 newUnplayedCount)  {
	m_unplayedCount = newUnplayedCount;
}

bool GetStudioImageParams::unplayedCountNull() const {
	// Nullable: true
	// Type Nullable: false
	

	return !m_unplayedCount.has_value();
}

void GetStudioImageParams::setUnplayedCountNull() {
	m_unplayedCount = std::nullopt;
}


const qint32 &GetStudioImageParams::width() const {
	return m_width.value();
}

void GetStudioImageParams::setWidth(qint32 newWidth)  {
	m_width = newWidth;
}

bool GetStudioImageParams::widthNull() const {
	// Nullable: true
	// Type Nullable: false
	

	return !m_width.has_value();
}

void GetStudioImageParams::setWidthNull() {
	m_width = std::nullopt;
}




// GetStudioImageByIndexParams

const qint32 &GetStudioImageByIndexParams::imageIndex() const {
	return m_imageIndex;
}

void GetStudioImageByIndexParams::setImageIndex(qint32 newImageIndex) {
	m_imageIndex = newImageIndex;
}


const ImageType &GetStudioImageByIndexParams::imageType() const {
	return m_imageType;
}

void GetStudioImageByIndexParams::setImageType(ImageType newImageType) {
	m_imageType = newImageType;
}


const QString &GetStudioImageByIndexParams::name() const {
	return m_name;
}

void GetStudioImageByIndexParams::setName(QString newName) {
	m_name = newName;
}


const bool &GetStudioImageByIndexParams::addPlayedIndicator() const {
	return m_addPlayedIndicator.value();
}

void GetStudioImageByIndexParams::setAddPlayedIndicator(bool newAddPlayedIndicator)  {
	m_addPlayedIndicator = newAddPlayedIndicator;
}

bool GetStudioImageByIndexParams::addPlayedIndicatorNull() const {
	// Nullable: true
	// Type Nullable: false
	

	return !m_addPlayedIndicator.has_value();
}

void GetStudioImageByIndexParams::setAddPlayedIndicatorNull() {
	m_addPlayedIndicator = std::nullopt;
}


const QString &GetStudioImageByIndexParams::backgroundColor() const {
	return m_backgroundColor;
}

void GetStudioImageByIndexParams::setBackgroundColor(QString newBackgroundColor)  {
	m_backgroundColor = newBackgroundColor;
}

bool GetStudioImageByIndexParams::backgroundColorNull() const {
	// Nullable: true
	// Type Nullable: true
	

	return m_backgroundColor.isNull();
}

void GetStudioImageByIndexParams::setBackgroundColorNull() {
	m_backgroundColor.clear();
}


const qint32 &GetStudioImageByIndexParams::blur() const {
	return m_blur.value();
}

void GetStudioImageByIndexParams::setBlur(qint32 newBlur)  {
	m_blur = newBlur;
}

bool GetStudioImageByIndexParams::blurNull() const {
	// Nullable: true
	// Type Nullable: false
	

	return !m_blur.has_value();
}

void GetStudioImageByIndexParams::setBlurNull() {
	m_blur = std::nullopt;
}


const bool &GetStudioImageByIndexParams::cropWhitespace() const {
	return m_cropWhitespace.value();
}

void GetStudioImageByIndexParams::setCropWhitespace(bool newCropWhitespace)  {
	m_cropWhitespace = newCropWhitespace;
}

bool GetStudioImageByIndexParams::cropWhitespaceNull() const {
	// Nullable: true
	// Type Nullable: false
	

	return !m_cropWhitespace.has_value();
}

void GetStudioImageByIndexParams::setCropWhitespaceNull() {
	m_cropWhitespace = std::nullopt;
}


const QString &GetStudioImageByIndexParams::foregroundLayer() const {
	return m_foregroundLayer;
}

void GetStudioImageByIndexParams::setForegroundLayer(QString newForegroundLayer)  {
	m_foregroundLayer = newForegroundLayer;
}

bool GetStudioImageByIndexParams::foregroundLayerNull() const {
	// Nullable: true
	// Type Nullable: true
	

	return m_foregroundLayer.isNull();
}

void GetStudioImageByIndexParams::setForegroundLayerNull() {
	m_foregroundLayer.clear();
}


const ImageFormat &GetStudioImageByIndexParams::format() const {
	return m_format;
}

void GetStudioImageByIndexParams::setFormat(ImageFormat newFormat)  {
	m_format = newFormat;
}

bool GetStudioImageByIndexParams::formatNull() const {
	// Nullable: true
	// Type Nullable: true
	

	return m_format== ImageFormat::EnumNotSet;
}

void GetStudioImageByIndexParams::setFormatNull() {
	m_format= ImageFormat::EnumNotSet;
}


const qint32 &GetStudioImageByIndexParams::height() const {
	return m_height.value();
}

void GetStudioImageByIndexParams::setHeight(qint32 newHeight)  {
	m_height = newHeight;
}

bool GetStudioImageByIndexParams::heightNull() const {
	// Nullable: true
	// Type Nullable: false
	

	return !m_height.has_value();
}

void GetStudioImageByIndexParams::setHeightNull() {
	m_height = std::nullopt;
}


const qint32 &GetStudioImageByIndexParams::maxHeight() const {
	return m_maxHeight.value();
}

void GetStudioImageByIndexParams::setMaxHeight(qint32 newMaxHeight)  {
	m_maxHeight = newMaxHeight;
}

bool GetStudioImageByIndexParams::maxHeightNull() const {
	// Nullable: true
	// Type Nullable: false
	

	return !m_maxHeight.has_value();
}

void GetStudioImageByIndexParams::setMaxHeightNull() {
	m_maxHeight = std::nullopt;
}


const qint32 &GetStudioImageByIndexParams::maxWidth() const {
	return m_maxWidth.value();
}

void GetStudioImageByIndexParams::setMaxWidth(qint32 newMaxWidth)  {
	m_maxWidth = newMaxWidth;
}

bool GetStudioImageByIndexParams::maxWidthNull() const {
	// Nullable: true
	// Type Nullable: false
	

	return !m_maxWidth.has_value();
}

void GetStudioImageByIndexParams::setMaxWidthNull() {
	m_maxWidth = std::nullopt;
}


const double &GetStudioImageByIndexParams::percentPlayed() const {
	return m_percentPlayed.value();
}

void GetStudioImageByIndexParams::setPercentPlayed(double newPercentPlayed)  {
	m_percentPlayed = newPercentPlayed;
}

bool GetStudioImageByIndexParams::percentPlayedNull() const {
	// Nullable: true
	// Type Nullable: false
	

	return !m_percentPlayed.has_value();
}

void GetStudioImageByIndexParams::setPercentPlayedNull() {
	m_percentPlayed = std::nullopt;
}


const qint32 &GetStudioImageByIndexParams::quality() const {
	return m_quality.value();
}

void GetStudioImageByIndexParams::setQuality(qint32 newQuality)  {
	m_quality = newQuality;
}

bool GetStudioImageByIndexParams::qualityNull() const {
	// Nullable: true
	// Type Nullable: false
	

	return !m_quality.has_value();
}

void GetStudioImageByIndexParams::setQualityNull() {
	m_quality = std::nullopt;
}


const QString &GetStudioImageByIndexParams::tag() const {
	return m_tag;
}

void GetStudioImageByIndexParams::setTag(QString newTag)  {
	m_tag = newTag;
}

bool GetStudioImageByIndexParams::tagNull() const {
	// Nullable: true
	// Type Nullable: true
	

	return m_tag.isNull();
}

void GetStudioImageByIndexParams::setTagNull() {
	m_tag.clear();
}


const qint32 &GetStudioImageByIndexParams::unplayedCount() const {
	return m_unplayedCount.value();
}

void GetStudioImageByIndexParams::setUnplayedCount(qint32 newUnplayedCount)  {
	m_unplayedCount = newUnplayedCount;
}

bool GetStudioImageByIndexParams::unplayedCountNull() const {
	// Nullable: true
	// Type Nullable: false
	

	return !m_unplayedCount.has_value();
}

void GetStudioImageByIndexParams::setUnplayedCountNull() {
	m_unplayedCount = std::nullopt;
}


const qint32 &GetStudioImageByIndexParams::width() const {
	return m_width.value();
}

void GetStudioImageByIndexParams::setWidth(qint32 newWidth)  {
	m_width = newWidth;
}

bool GetStudioImageByIndexParams::widthNull() const {
	// Nullable: true
	// Type Nullable: false
	

	return !m_width.has_value();
}

void GetStudioImageByIndexParams::setWidthNull() {
	m_width = std::nullopt;
}




// GetStudiosParams

const QList<ImageType> &GetStudiosParams::enableImageTypes() const {
	return m_enableImageTypes;
}

void GetStudiosParams::setEnableImageTypes(QList<ImageType> newEnableImageTypes)  {
	m_enableImageTypes = newEnableImageTypes;
}

bool GetStudiosParams::enableImageTypesNull() const {
	// Nullable: true
	// Type Nullable: true
	

	return m_enableImageTypes.size() == 0;
}

void GetStudiosParams::setEnableImageTypesNull() {
	m_enableImageTypes.clear();
}


const bool &GetStudiosParams::enableImages() const {
	return m_enableImages.value();
}

void GetStudiosParams::setEnableImages(bool newEnableImages)  {
	m_enableImages = newEnableImages;
}

bool GetStudiosParams::enableImagesNull() const {
	// Nullable: true
	// Type Nullable: false
	

	return !m_enableImages.has_value();
}

void GetStudiosParams::setEnableImagesNull() {
	m_enableImages = std::nullopt;
}


const bool &GetStudiosParams::enableTotalRecordCount() const {
	return m_enableTotalRecordCount.value();
}

void GetStudiosParams::setEnableTotalRecordCount(bool newEnableTotalRecordCount)  {
	m_enableTotalRecordCount = newEnableTotalRecordCount;
}

bool GetStudiosParams::enableTotalRecordCountNull() const {
	// Nullable: false
	// Type Nullable: false
	

	return !m_enableTotalRecordCount.has_value();
}

void GetStudiosParams::setEnableTotalRecordCountNull() {
	m_enableTotalRecordCount = std::nullopt;
}


const bool &GetStudiosParams::enableUserData() const {
	return m_enableUserData.value();
}

void GetStudiosParams::setEnableUserData(bool newEnableUserData)  {
	m_enableUserData = newEnableUserData;
}

bool GetStudiosParams::enableUserDataNull() const {
	// Nullable: true
	// Type Nullable: false
	

	return !m_enableUserData.has_value();
}

void GetStudiosParams::setEnableUserDataNull() {
	m_enableUserData = std::nullopt;
}


const QStringList &GetStudiosParams::excludeItemTypes() const {
	return m_excludeItemTypes;
}

void GetStudiosParams::setExcludeItemTypes(QStringList newExcludeItemTypes)  {
	m_excludeItemTypes = newExcludeItemTypes;
}

bool GetStudiosParams::excludeItemTypesNull() const {
	// Nullable: true
	// Type Nullable: true
	

	return m_excludeItemTypes.size() == 0;
}

void GetStudiosParams::setExcludeItemTypesNull() {
	m_excludeItemTypes.clear();
}


const QList<ItemFields> &GetStudiosParams::fields() const {
	return m_fields;
}

void GetStudiosParams::setFields(QList<ItemFields> newFields)  {
	m_fields = newFields;
}

bool GetStudiosParams::fieldsNull() const {
	// Nullable: true
	// Type Nullable: true
	

	return m_fields.size() == 0;
}

void GetStudiosParams::setFieldsNull() {
	m_fields.clear();
}


const qint32 &GetStudiosParams::imageTypeLimit() const {
	return m_imageTypeLimit.value();
}

void GetStudiosParams::setImageTypeLimit(qint32 newImageTypeLimit)  {
	m_imageTypeLimit = newImageTypeLimit;
}

bool GetStudiosParams::imageTypeLimitNull() const {
	// Nullable: true
	// Type Nullable: false
	

	return !m_imageTypeLimit.has_value();
}

void GetStudiosParams::setImageTypeLimitNull() {
	m_imageTypeLimit = std::nullopt;
}


const QStringList &GetStudiosParams::includeItemTypes() const {
	return m_includeItemTypes;
}

void GetStudiosParams::setIncludeItemTypes(QStringList newIncludeItemTypes)  {
	m_includeItemTypes = newIncludeItemTypes;
}

bool GetStudiosParams::includeItemTypesNull() const {
	// Nullable: true
	// Type Nullable: true
	

	return m_includeItemTypes.size() == 0;
}

void GetStudiosParams::setIncludeItemTypesNull() {
	m_includeItemTypes.clear();
}


const bool &GetStudiosParams::isFavorite() const {
	return m_isFavorite.value();
}

void GetStudiosParams::setIsFavorite(bool newIsFavorite)  {
	m_isFavorite = newIsFavorite;
}

bool GetStudiosParams::isFavoriteNull() const {
	// Nullable: true
	// Type Nullable: false
	

	return !m_isFavorite.has_value();
}

void GetStudiosParams::setIsFavoriteNull() {
	m_isFavorite = std::nullopt;
}


const qint32 &GetStudiosParams::limit() const {
	return m_limit.value();
}

void GetStudiosParams::setLimit(qint32 newLimit)  {
	m_limit = newLimit;
}

bool GetStudiosParams::limitNull() const {
	// Nullable: true
	// Type Nullable: false
	

	return !m_limit.has_value();
}

void GetStudiosParams::setLimitNull() {
	m_limit = std::nullopt;
}


const QString &GetStudiosParams::nameLessThan() const {
	return m_nameLessThan;
}

void GetStudiosParams::setNameLessThan(QString newNameLessThan)  {
	m_nameLessThan = newNameLessThan;
}

bool GetStudiosParams::nameLessThanNull() const {
	// Nullable: true
	// Type Nullable: true
	

	return m_nameLessThan.isNull();
}

void GetStudiosParams::setNameLessThanNull() {
	m_nameLessThan.clear();
}


const QString &GetStudiosParams::nameStartsWith() const {
	return m_nameStartsWith;
}

void GetStudiosParams::setNameStartsWith(QString newNameStartsWith)  {
	m_nameStartsWith = newNameStartsWith;
}

bool GetStudiosParams::nameStartsWithNull() const {
	// Nullable: true
	// Type Nullable: true
	

	return m_nameStartsWith.isNull();
}

void GetStudiosParams::setNameStartsWithNull() {
	m_nameStartsWith.clear();
}


const QString &GetStudiosParams::nameStartsWithOrGreater() const {
	return m_nameStartsWithOrGreater;
}

void GetStudiosParams::setNameStartsWithOrGreater(QString newNameStartsWithOrGreater)  {
	m_nameStartsWithOrGreater = newNameStartsWithOrGreater;
}

bool GetStudiosParams::nameStartsWithOrGreaterNull() const {
	// Nullable: true
	// Type Nullable: true
	

	return m_nameStartsWithOrGreater.isNull();
}

void GetStudiosParams::setNameStartsWithOrGreaterNull() {
	m_nameStartsWithOrGreater.clear();
}


const QString &GetStudiosParams::parentId() const {
	return m_parentId;
}

void GetStudiosParams::setParentId(QString newParentId)  {
	m_parentId = newParentId;
}

bool GetStudiosParams::parentIdNull() const {
	// Nullable: true
	// Type Nullable: true
	

	return m_parentId.isNull();
}

void GetStudiosParams::setParentIdNull() {
	m_parentId.clear();
}


const QString &GetStudiosParams::searchTerm() const {
	return m_searchTerm;
}

void GetStudiosParams::setSearchTerm(QString newSearchTerm)  {
	m_searchTerm = newSearchTerm;
}

bool GetStudiosParams::searchTermNull() const {
	// Nullable: true
	// Type Nullable: true
	

	return m_searchTerm.isNull();
}

void GetStudiosParams::setSearchTermNull() {
	m_searchTerm.clear();
}


const qint32 &GetStudiosParams::startIndex() const {
	return m_startIndex.value();
}

void GetStudiosParams::setStartIndex(qint32 newStartIndex)  {
	m_startIndex = newStartIndex;
}

bool GetStudiosParams::startIndexNull() const {
	// Nullable: true
	// Type Nullable: false
	

	return !m_startIndex.has_value();
}

void GetStudiosParams::setStartIndexNull() {
	m_startIndex = std::nullopt;
}


const QString &GetStudiosParams::userId() const {
	return m_userId;
}

void GetStudiosParams::setUserId(QString newUserId)  {
	m_userId = newUserId;
}

bool GetStudiosParams::userIdNull() const {
	// Nullable: true
	// Type Nullable: true
	

	return m_userId.isNull();
}

void GetStudiosParams::setUserIdNull() {
	m_userId.clear();
}




// GetSubtitleParams

const QString &GetSubtitleParams::format() const {
	return m_format;
}

void GetSubtitleParams::setFormat(QString newFormat) {
	m_format = newFormat;
}


const qint32 &GetSubtitleParams::index() const {
	return m_index;
}

void GetSubtitleParams::setIndex(qint32 newIndex) {
	m_index = newIndex;
}


const QString &GetSubtitleParams::itemId() const {
	return m_itemId;
}

void GetSubtitleParams::setItemId(QString newItemId) {
	m_itemId = newItemId;
}


const QString &GetSubtitleParams::mediaSourceId() const {
	return m_mediaSourceId;
}

void GetSubtitleParams::setMediaSourceId(QString newMediaSourceId) {
	m_mediaSourceId = newMediaSourceId;
}


const bool &GetSubtitleParams::addVttTimeMap() const {
	return m_addVttTimeMap.value();
}

void GetSubtitleParams::setAddVttTimeMap(bool newAddVttTimeMap)  {
	m_addVttTimeMap = newAddVttTimeMap;
}

bool GetSubtitleParams::addVttTimeMapNull() const {
	// Nullable: false
	// Type Nullable: false
	

	return !m_addVttTimeMap.has_value();
}

void GetSubtitleParams::setAddVttTimeMapNull() {
	m_addVttTimeMap = std::nullopt;
}


const bool &GetSubtitleParams::copyTimestamps() const {
	return m_copyTimestamps.value();
}

void GetSubtitleParams::setCopyTimestamps(bool newCopyTimestamps)  {
	m_copyTimestamps = newCopyTimestamps;
}

bool GetSubtitleParams::copyTimestampsNull() const {
	// Nullable: false
	// Type Nullable: false
	

	return !m_copyTimestamps.has_value();
}

void GetSubtitleParams::setCopyTimestampsNull() {
	m_copyTimestamps = std::nullopt;
}


const qint64 &GetSubtitleParams::endPositionTicks() const {
	return m_endPositionTicks.value();
}

void GetSubtitleParams::setEndPositionTicks(qint64 newEndPositionTicks)  {
	m_endPositionTicks = newEndPositionTicks;
}

bool GetSubtitleParams::endPositionTicksNull() const {
	// Nullable: true
	// Type Nullable: false
	

	return !m_endPositionTicks.has_value();
}

void GetSubtitleParams::setEndPositionTicksNull() {
	m_endPositionTicks = std::nullopt;
}


const qint64 &GetSubtitleParams::startPositionTicks() const {
	return m_startPositionTicks.value();
}

void GetSubtitleParams::setStartPositionTicks(qint64 newStartPositionTicks)  {
	m_startPositionTicks = newStartPositionTicks;
}

bool GetSubtitleParams::startPositionTicksNull() const {
	// Nullable: false
	// Type Nullable: false
	

	return !m_startPositionTicks.has_value();
}

void GetSubtitleParams::setStartPositionTicksNull() {
	m_startPositionTicks = std::nullopt;
}




// GetSubtitlePlaylistParams

const qint32 &GetSubtitlePlaylistParams::index() const {
	return m_index;
}

void GetSubtitlePlaylistParams::setIndex(qint32 newIndex) {
	m_index = newIndex;
}


const QString &GetSubtitlePlaylistParams::itemId() const {
	return m_itemId;
}

void GetSubtitlePlaylistParams::setItemId(QString newItemId) {
	m_itemId = newItemId;
}


const QString &GetSubtitlePlaylistParams::mediaSourceId() const {
	return m_mediaSourceId;
}

void GetSubtitlePlaylistParams::setMediaSourceId(QString newMediaSourceId) {
	m_mediaSourceId = newMediaSourceId;
}


const qint32 &GetSubtitlePlaylistParams::segmentLength() const {
	return m_segmentLength;
}

void GetSubtitlePlaylistParams::setSegmentLength(qint32 newSegmentLength) {
	m_segmentLength = newSegmentLength;
}




// GetSubtitleWithTicksParams

const QString &GetSubtitleWithTicksParams::format() const {
	return m_format;
}

void GetSubtitleWithTicksParams::setFormat(QString newFormat) {
	m_format = newFormat;
}


const qint32 &GetSubtitleWithTicksParams::index() const {
	return m_index;
}

void GetSubtitleWithTicksParams::setIndex(qint32 newIndex) {
	m_index = newIndex;
}


const QString &GetSubtitleWithTicksParams::itemId() const {
	return m_itemId;
}

void GetSubtitleWithTicksParams::setItemId(QString newItemId) {
	m_itemId = newItemId;
}


const QString &GetSubtitleWithTicksParams::mediaSourceId() const {
	return m_mediaSourceId;
}

void GetSubtitleWithTicksParams::setMediaSourceId(QString newMediaSourceId) {
	m_mediaSourceId = newMediaSourceId;
}


const qint64 &GetSubtitleWithTicksParams::startPositionTicks() const {
	return m_startPositionTicks;
}

void GetSubtitleWithTicksParams::setStartPositionTicks(qint64 newStartPositionTicks) {
	m_startPositionTicks = newStartPositionTicks;
}


const bool &GetSubtitleWithTicksParams::addVttTimeMap() const {
	return m_addVttTimeMap.value();
}

void GetSubtitleWithTicksParams::setAddVttTimeMap(bool newAddVttTimeMap)  {
	m_addVttTimeMap = newAddVttTimeMap;
}

bool GetSubtitleWithTicksParams::addVttTimeMapNull() const {
	// Nullable: false
	// Type Nullable: false
	

	return !m_addVttTimeMap.has_value();
}

void GetSubtitleWithTicksParams::setAddVttTimeMapNull() {
	m_addVttTimeMap = std::nullopt;
}


const bool &GetSubtitleWithTicksParams::copyTimestamps() const {
	return m_copyTimestamps.value();
}

void GetSubtitleWithTicksParams::setCopyTimestamps(bool newCopyTimestamps)  {
	m_copyTimestamps = newCopyTimestamps;
}

bool GetSubtitleWithTicksParams::copyTimestampsNull() const {
	// Nullable: false
	// Type Nullable: false
	

	return !m_copyTimestamps.has_value();
}

void GetSubtitleWithTicksParams::setCopyTimestampsNull() {
	m_copyTimestamps = std::nullopt;
}


const qint64 &GetSubtitleWithTicksParams::endPositionTicks() const {
	return m_endPositionTicks.value();
}

void GetSubtitleWithTicksParams::setEndPositionTicks(qint64 newEndPositionTicks)  {
	m_endPositionTicks = newEndPositionTicks;
}

bool GetSubtitleWithTicksParams::endPositionTicksNull() const {
	// Nullable: true
	// Type Nullable: false
	

	return !m_endPositionTicks.has_value();
}

void GetSubtitleWithTicksParams::setEndPositionTicksNull() {
	m_endPositionTicks = std::nullopt;
}




// GetSuggestionsParams

const QString &GetSuggestionsParams::userId() const {
	return m_userId;
}

void GetSuggestionsParams::setUserId(QString newUserId) {
	m_userId = newUserId;
}


const bool &GetSuggestionsParams::enableTotalRecordCount() const {
	return m_enableTotalRecordCount.value();
}

void GetSuggestionsParams::setEnableTotalRecordCount(bool newEnableTotalRecordCount)  {
	m_enableTotalRecordCount = newEnableTotalRecordCount;
}

bool GetSuggestionsParams::enableTotalRecordCountNull() const {
	// Nullable: false
	// Type Nullable: false
	

	return !m_enableTotalRecordCount.has_value();
}

void GetSuggestionsParams::setEnableTotalRecordCountNull() {
	m_enableTotalRecordCount = std::nullopt;
}


const qint32 &GetSuggestionsParams::limit() const {
	return m_limit.value();
}

void GetSuggestionsParams::setLimit(qint32 newLimit)  {
	m_limit = newLimit;
}

bool GetSuggestionsParams::limitNull() const {
	// Nullable: true
	// Type Nullable: false
	

	return !m_limit.has_value();
}

void GetSuggestionsParams::setLimitNull() {
	m_limit = std::nullopt;
}


const QStringList &GetSuggestionsParams::mediaType() const {
	return m_mediaType;
}

void GetSuggestionsParams::setMediaType(QStringList newMediaType)  {
	m_mediaType = newMediaType;
}

bool GetSuggestionsParams::mediaTypeNull() const {
	// Nullable: true
	// Type Nullable: true
	

	return m_mediaType.size() == 0;
}

void GetSuggestionsParams::setMediaTypeNull() {
	m_mediaType.clear();
}


const qint32 &GetSuggestionsParams::startIndex() const {
	return m_startIndex.value();
}

void GetSuggestionsParams::setStartIndex(qint32 newStartIndex)  {
	m_startIndex = newStartIndex;
}

bool GetSuggestionsParams::startIndexNull() const {
	// Nullable: true
	// Type Nullable: false
	

	return !m_startIndex.has_value();
}

void GetSuggestionsParams::setStartIndexNull() {
	m_startIndex = std::nullopt;
}


const QStringList &GetSuggestionsParams::type() const {
	return m_type;
}

void GetSuggestionsParams::setType(QStringList newType)  {
	m_type = newType;
}

bool GetSuggestionsParams::typeNull() const {
	// Nullable: true
	// Type Nullable: true
	

	return m_type.size() == 0;
}

void GetSuggestionsParams::setTypeNull() {
	m_type.clear();
}




// GetSystemInfoParams



// GetTaskParams

const QString &GetTaskParams::taskId() const {
	return m_taskId;
}

void GetTaskParams::setTaskId(QString newTaskId) {
	m_taskId = newTaskId;
}




// GetTasksParams

const bool &GetTasksParams::isEnabled() const {
	return m_isEnabled.value();
}

void GetTasksParams::setIsEnabled(bool newIsEnabled)  {
	m_isEnabled = newIsEnabled;
}

bool GetTasksParams::isEnabledNull() const {
	// Nullable: true
	// Type Nullable: false
	

	return !m_isEnabled.has_value();
}

void GetTasksParams::setIsEnabledNull() {
	m_isEnabled = std::nullopt;
}


const bool &GetTasksParams::isHidden() const {
	return m_isHidden.value();
}

void GetTasksParams::setIsHidden(bool newIsHidden)  {
	m_isHidden = newIsHidden;
}

bool GetTasksParams::isHiddenNull() const {
	// Nullable: true
	// Type Nullable: false
	

	return !m_isHidden.has_value();
}

void GetTasksParams::setIsHiddenNull() {
	m_isHidden = std::nullopt;
}




// GetThemeMediaParams

const QString &GetThemeMediaParams::itemId() const {
	return m_itemId;
}

void GetThemeMediaParams::setItemId(QString newItemId) {
	m_itemId = newItemId;
}


const bool &GetThemeMediaParams::inheritFromParent() const {
	return m_inheritFromParent.value();
}

void GetThemeMediaParams::setInheritFromParent(bool newInheritFromParent)  {
	m_inheritFromParent = newInheritFromParent;
}

bool GetThemeMediaParams::inheritFromParentNull() const {
	// Nullable: false
	// Type Nullable: false
	

	return !m_inheritFromParent.has_value();
}

void GetThemeMediaParams::setInheritFromParentNull() {
	m_inheritFromParent = std::nullopt;
}


const QString &GetThemeMediaParams::userId() const {
	return m_userId;
}

void GetThemeMediaParams::setUserId(QString newUserId)  {
	m_userId = newUserId;
}

bool GetThemeMediaParams::userIdNull() const {
	// Nullable: true
	// Type Nullable: true
	

	return m_userId.isNull();
}

void GetThemeMediaParams::setUserIdNull() {
	m_userId.clear();
}




// GetThemeSongsParams

const QString &GetThemeSongsParams::itemId() const {
	return m_itemId;
}

void GetThemeSongsParams::setItemId(QString newItemId) {
	m_itemId = newItemId;
}


const bool &GetThemeSongsParams::inheritFromParent() const {
	return m_inheritFromParent.value();
}

void GetThemeSongsParams::setInheritFromParent(bool newInheritFromParent)  {
	m_inheritFromParent = newInheritFromParent;
}

bool GetThemeSongsParams::inheritFromParentNull() const {
	// Nullable: false
	// Type Nullable: false
	

	return !m_inheritFromParent.has_value();
}

void GetThemeSongsParams::setInheritFromParentNull() {
	m_inheritFromParent = std::nullopt;
}


const QString &GetThemeSongsParams::userId() const {
	return m_userId;
}

void GetThemeSongsParams::setUserId(QString newUserId)  {
	m_userId = newUserId;
}

bool GetThemeSongsParams::userIdNull() const {
	// Nullable: true
	// Type Nullable: true
	

	return m_userId.isNull();
}

void GetThemeSongsParams::setUserIdNull() {
	m_userId.clear();
}




// GetThemeVideosParams

const QString &GetThemeVideosParams::itemId() const {
	return m_itemId;
}

void GetThemeVideosParams::setItemId(QString newItemId) {
	m_itemId = newItemId;
}


const bool &GetThemeVideosParams::inheritFromParent() const {
	return m_inheritFromParent.value();
}

void GetThemeVideosParams::setInheritFromParent(bool newInheritFromParent)  {
	m_inheritFromParent = newInheritFromParent;
}

bool GetThemeVideosParams::inheritFromParentNull() const {
	// Nullable: false
	// Type Nullable: false
	

	return !m_inheritFromParent.has_value();
}

void GetThemeVideosParams::setInheritFromParentNull() {
	m_inheritFromParent = std::nullopt;
}


const QString &GetThemeVideosParams::userId() const {
	return m_userId;
}

void GetThemeVideosParams::setUserId(QString newUserId)  {
	m_userId = newUserId;
}

bool GetThemeVideosParams::userIdNull() const {
	// Nullable: true
	// Type Nullable: true
	

	return m_userId.isNull();
}

void GetThemeVideosParams::setUserIdNull() {
	m_userId.clear();
}




// GetTimerParams

const QString &GetTimerParams::timerId() const {
	return m_timerId;
}

void GetTimerParams::setTimerId(QString newTimerId) {
	m_timerId = newTimerId;
}




// GetTimersParams

const QString &GetTimersParams::channelId() const {
	return m_channelId;
}

void GetTimersParams::setChannelId(QString newChannelId)  {
	m_channelId = newChannelId;
}

bool GetTimersParams::channelIdNull() const {
	// Nullable: true
	// Type Nullable: true
	

	return m_channelId.isNull();
}

void GetTimersParams::setChannelIdNull() {
	m_channelId.clear();
}


const bool &GetTimersParams::isActive() const {
	return m_isActive.value();
}

void GetTimersParams::setIsActive(bool newIsActive)  {
	m_isActive = newIsActive;
}

bool GetTimersParams::isActiveNull() const {
	// Nullable: true
	// Type Nullable: false
	

	return !m_isActive.has_value();
}

void GetTimersParams::setIsActiveNull() {
	m_isActive = std::nullopt;
}


const bool &GetTimersParams::isScheduled() const {
	return m_isScheduled.value();
}

void GetTimersParams::setIsScheduled(bool newIsScheduled)  {
	m_isScheduled = newIsScheduled;
}

bool GetTimersParams::isScheduledNull() const {
	// Nullable: true
	// Type Nullable: false
	

	return !m_isScheduled.has_value();
}

void GetTimersParams::setIsScheduledNull() {
	m_isScheduled = std::nullopt;
}


const QString &GetTimersParams::seriesTimerId() const {
	return m_seriesTimerId;
}

void GetTimersParams::setSeriesTimerId(QString newSeriesTimerId)  {
	m_seriesTimerId = newSeriesTimerId;
}

bool GetTimersParams::seriesTimerIdNull() const {
	// Nullable: true
	// Type Nullable: true
	

	return m_seriesTimerId.isNull();
}

void GetTimersParams::setSeriesTimerIdNull() {
	m_seriesTimerId.clear();
}




// GetTrailerRemoteSearchResultsParams

const QSharedPointer<TrailerInfoRemoteSearchQuery> &GetTrailerRemoteSearchResultsParams::body() const {
	return m_body;
}

void GetTrailerRemoteSearchResultsParams::setBody(QSharedPointer<TrailerInfoRemoteSearchQuery> newBody) {
	m_body = newBody;
}




// GetTrailersParams

const QString &GetTrailersParams::adjacentTo() const {
	return m_adjacentTo;
}

void GetTrailersParams::setAdjacentTo(QString newAdjacentTo)  {
	m_adjacentTo = newAdjacentTo;
}

bool GetTrailersParams::adjacentToNull() const {
	// Nullable: true
	// Type Nullable: true
	

	return m_adjacentTo.isNull();
}

void GetTrailersParams::setAdjacentToNull() {
	m_adjacentTo.clear();
}


const QStringList &GetTrailersParams::albumArtistIds() const {
	return m_albumArtistIds;
}

void GetTrailersParams::setAlbumArtistIds(QStringList newAlbumArtistIds)  {
	m_albumArtistIds = newAlbumArtistIds;
}

bool GetTrailersParams::albumArtistIdsNull() const {
	// Nullable: true
	// Type Nullable: true
	

	return m_albumArtistIds.size() == 0;
}

void GetTrailersParams::setAlbumArtistIdsNull() {
	m_albumArtistIds.clear();
}


const QStringList &GetTrailersParams::albumIds() const {
	return m_albumIds;
}

void GetTrailersParams::setAlbumIds(QStringList newAlbumIds)  {
	m_albumIds = newAlbumIds;
}

bool GetTrailersParams::albumIdsNull() const {
	// Nullable: true
	// Type Nullable: true
	

	return m_albumIds.size() == 0;
}

void GetTrailersParams::setAlbumIdsNull() {
	m_albumIds.clear();
}


const QStringList &GetTrailersParams::albums() const {
	return m_albums;
}

void GetTrailersParams::setAlbums(QStringList newAlbums)  {
	m_albums = newAlbums;
}

bool GetTrailersParams::albumsNull() const {
	// Nullable: true
	// Type Nullable: true
	

	return m_albums.size() == 0;
}

void GetTrailersParams::setAlbumsNull() {
	m_albums.clear();
}


const QStringList &GetTrailersParams::artistIds() const {
	return m_artistIds;
}

void GetTrailersParams::setArtistIds(QStringList newArtistIds)  {
	m_artistIds = newArtistIds;
}

bool GetTrailersParams::artistIdsNull() const {
	// Nullable: true
	// Type Nullable: true
	

	return m_artistIds.size() == 0;
}

void GetTrailersParams::setArtistIdsNull() {
	m_artistIds.clear();
}


const QStringList &GetTrailersParams::artists() const {
	return m_artists;
}

void GetTrailersParams::setArtists(QStringList newArtists)  {
	m_artists = newArtists;
}

bool GetTrailersParams::artistsNull() const {
	// Nullable: true
	// Type Nullable: true
	

	return m_artists.size() == 0;
}

void GetTrailersParams::setArtistsNull() {
	m_artists.clear();
}


const bool &GetTrailersParams::collapseBoxSetItems() const {
	return m_collapseBoxSetItems.value();
}

void GetTrailersParams::setCollapseBoxSetItems(bool newCollapseBoxSetItems)  {
	m_collapseBoxSetItems = newCollapseBoxSetItems;
}

bool GetTrailersParams::collapseBoxSetItemsNull() const {
	// Nullable: true
	// Type Nullable: false
	

	return !m_collapseBoxSetItems.has_value();
}

void GetTrailersParams::setCollapseBoxSetItemsNull() {
	m_collapseBoxSetItems = std::nullopt;
}


const QStringList &GetTrailersParams::contributingArtistIds() const {
	return m_contributingArtistIds;
}

void GetTrailersParams::setContributingArtistIds(QStringList newContributingArtistIds)  {
	m_contributingArtistIds = newContributingArtistIds;
}

bool GetTrailersParams::contributingArtistIdsNull() const {
	// Nullable: true
	// Type Nullable: true
	

	return m_contributingArtistIds.size() == 0;
}

void GetTrailersParams::setContributingArtistIdsNull() {
	m_contributingArtistIds.clear();
}


const QList<ImageType> &GetTrailersParams::enableImageTypes() const {
	return m_enableImageTypes;
}

void GetTrailersParams::setEnableImageTypes(QList<ImageType> newEnableImageTypes)  {
	m_enableImageTypes = newEnableImageTypes;
}

bool GetTrailersParams::enableImageTypesNull() const {
	// Nullable: true
	// Type Nullable: true
	

	return m_enableImageTypes.size() == 0;
}

void GetTrailersParams::setEnableImageTypesNull() {
	m_enableImageTypes.clear();
}


const bool &GetTrailersParams::enableImages() const {
	return m_enableImages.value();
}

void GetTrailersParams::setEnableImages(bool newEnableImages)  {
	m_enableImages = newEnableImages;
}

bool GetTrailersParams::enableImagesNull() const {
	// Nullable: true
	// Type Nullable: false
	

	return !m_enableImages.has_value();
}

void GetTrailersParams::setEnableImagesNull() {
	m_enableImages = std::nullopt;
}


const bool &GetTrailersParams::enableTotalRecordCount() const {
	return m_enableTotalRecordCount.value();
}

void GetTrailersParams::setEnableTotalRecordCount(bool newEnableTotalRecordCount)  {
	m_enableTotalRecordCount = newEnableTotalRecordCount;
}

bool GetTrailersParams::enableTotalRecordCountNull() const {
	// Nullable: false
	// Type Nullable: false
	

	return !m_enableTotalRecordCount.has_value();
}

void GetTrailersParams::setEnableTotalRecordCountNull() {
	m_enableTotalRecordCount = std::nullopt;
}


const bool &GetTrailersParams::enableUserData() const {
	return m_enableUserData.value();
}

void GetTrailersParams::setEnableUserData(bool newEnableUserData)  {
	m_enableUserData = newEnableUserData;
}

bool GetTrailersParams::enableUserDataNull() const {
	// Nullable: true
	// Type Nullable: false
	

	return !m_enableUserData.has_value();
}

void GetTrailersParams::setEnableUserDataNull() {
	m_enableUserData = std::nullopt;
}


const QStringList &GetTrailersParams::excludeArtistIds() const {
	return m_excludeArtistIds;
}

void GetTrailersParams::setExcludeArtistIds(QStringList newExcludeArtistIds)  {
	m_excludeArtistIds = newExcludeArtistIds;
}

bool GetTrailersParams::excludeArtistIdsNull() const {
	// Nullable: true
	// Type Nullable: true
	

	return m_excludeArtistIds.size() == 0;
}

void GetTrailersParams::setExcludeArtistIdsNull() {
	m_excludeArtistIds.clear();
}


const QStringList &GetTrailersParams::excludeItemIds() const {
	return m_excludeItemIds;
}

void GetTrailersParams::setExcludeItemIds(QStringList newExcludeItemIds)  {
	m_excludeItemIds = newExcludeItemIds;
}

bool GetTrailersParams::excludeItemIdsNull() const {
	// Nullable: true
	// Type Nullable: true
	

	return m_excludeItemIds.size() == 0;
}

void GetTrailersParams::setExcludeItemIdsNull() {
	m_excludeItemIds.clear();
}


const QStringList &GetTrailersParams::excludeItemTypes() const {
	return m_excludeItemTypes;
}

void GetTrailersParams::setExcludeItemTypes(QStringList newExcludeItemTypes)  {
	m_excludeItemTypes = newExcludeItemTypes;
}

bool GetTrailersParams::excludeItemTypesNull() const {
	// Nullable: true
	// Type Nullable: true
	

	return m_excludeItemTypes.size() == 0;
}

void GetTrailersParams::setExcludeItemTypesNull() {
	m_excludeItemTypes.clear();
}


const QList<LocationType> &GetTrailersParams::excludeLocationTypes() const {
	return m_excludeLocationTypes;
}

void GetTrailersParams::setExcludeLocationTypes(QList<LocationType> newExcludeLocationTypes)  {
	m_excludeLocationTypes = newExcludeLocationTypes;
}

bool GetTrailersParams::excludeLocationTypesNull() const {
	// Nullable: true
	// Type Nullable: true
	

	return m_excludeLocationTypes.size() == 0;
}

void GetTrailersParams::setExcludeLocationTypesNull() {
	m_excludeLocationTypes.clear();
}


const QList<ItemFields> &GetTrailersParams::fields() const {
	return m_fields;
}

void GetTrailersParams::setFields(QList<ItemFields> newFields)  {
	m_fields = newFields;
}

bool GetTrailersParams::fieldsNull() const {
	// Nullable: true
	// Type Nullable: true
	

	return m_fields.size() == 0;
}

void GetTrailersParams::setFieldsNull() {
	m_fields.clear();
}


const QList<ItemFilter> &GetTrailersParams::filters() const {
	return m_filters;
}

void GetTrailersParams::setFilters(QList<ItemFilter> newFilters)  {
	m_filters = newFilters;
}

bool GetTrailersParams::filtersNull() const {
	// Nullable: true
	// Type Nullable: true
	

	return m_filters.size() == 0;
}

void GetTrailersParams::setFiltersNull() {
	m_filters.clear();
}


const QStringList &GetTrailersParams::genreIds() const {
	return m_genreIds;
}

void GetTrailersParams::setGenreIds(QStringList newGenreIds)  {
	m_genreIds = newGenreIds;
}

bool GetTrailersParams::genreIdsNull() const {
	// Nullable: true
	// Type Nullable: true
	

	return m_genreIds.size() == 0;
}

void GetTrailersParams::setGenreIdsNull() {
	m_genreIds.clear();
}


const QStringList &GetTrailersParams::genres() const {
	return m_genres;
}

void GetTrailersParams::setGenres(QStringList newGenres)  {
	m_genres = newGenres;
}

bool GetTrailersParams::genresNull() const {
	// Nullable: true
	// Type Nullable: true
	

	return m_genres.size() == 0;
}

void GetTrailersParams::setGenresNull() {
	m_genres.clear();
}


const bool &GetTrailersParams::hasImdbId() const {
	return m_hasImdbId.value();
}

void GetTrailersParams::setHasImdbId(bool newHasImdbId)  {
	m_hasImdbId = newHasImdbId;
}

bool GetTrailersParams::hasImdbIdNull() const {
	// Nullable: true
	// Type Nullable: false
	

	return !m_hasImdbId.has_value();
}

void GetTrailersParams::setHasImdbIdNull() {
	m_hasImdbId = std::nullopt;
}


const bool &GetTrailersParams::hasOfficialRating() const {
	return m_hasOfficialRating.value();
}

void GetTrailersParams::setHasOfficialRating(bool newHasOfficialRating)  {
	m_hasOfficialRating = newHasOfficialRating;
}

bool GetTrailersParams::hasOfficialRatingNull() const {
	// Nullable: true
	// Type Nullable: false
	

	return !m_hasOfficialRating.has_value();
}

void GetTrailersParams::setHasOfficialRatingNull() {
	m_hasOfficialRating = std::nullopt;
}


const bool &GetTrailersParams::hasOverview() const {
	return m_hasOverview.value();
}

void GetTrailersParams::setHasOverview(bool newHasOverview)  {
	m_hasOverview = newHasOverview;
}

bool GetTrailersParams::hasOverviewNull() const {
	// Nullable: true
	// Type Nullable: false
	

	return !m_hasOverview.has_value();
}

void GetTrailersParams::setHasOverviewNull() {
	m_hasOverview = std::nullopt;
}


const bool &GetTrailersParams::hasParentalRating() const {
	return m_hasParentalRating.value();
}

void GetTrailersParams::setHasParentalRating(bool newHasParentalRating)  {
	m_hasParentalRating = newHasParentalRating;
}

bool GetTrailersParams::hasParentalRatingNull() const {
	// Nullable: true
	// Type Nullable: false
	

	return !m_hasParentalRating.has_value();
}

void GetTrailersParams::setHasParentalRatingNull() {
	m_hasParentalRating = std::nullopt;
}


const bool &GetTrailersParams::hasSpecialFeature() const {
	return m_hasSpecialFeature.value();
}

void GetTrailersParams::setHasSpecialFeature(bool newHasSpecialFeature)  {
	m_hasSpecialFeature = newHasSpecialFeature;
}

bool GetTrailersParams::hasSpecialFeatureNull() const {
	// Nullable: true
	// Type Nullable: false
	

	return !m_hasSpecialFeature.has_value();
}

void GetTrailersParams::setHasSpecialFeatureNull() {
	m_hasSpecialFeature = std::nullopt;
}


const bool &GetTrailersParams::hasSubtitles() const {
	return m_hasSubtitles.value();
}

void GetTrailersParams::setHasSubtitles(bool newHasSubtitles)  {
	m_hasSubtitles = newHasSubtitles;
}

bool GetTrailersParams::hasSubtitlesNull() const {
	// Nullable: true
	// Type Nullable: false
	

	return !m_hasSubtitles.has_value();
}

void GetTrailersParams::setHasSubtitlesNull() {
	m_hasSubtitles = std::nullopt;
}


const bool &GetTrailersParams::hasThemeSong() const {
	return m_hasThemeSong.value();
}

void GetTrailersParams::setHasThemeSong(bool newHasThemeSong)  {
	m_hasThemeSong = newHasThemeSong;
}

bool GetTrailersParams::hasThemeSongNull() const {
	// Nullable: true
	// Type Nullable: false
	

	return !m_hasThemeSong.has_value();
}

void GetTrailersParams::setHasThemeSongNull() {
	m_hasThemeSong = std::nullopt;
}


const bool &GetTrailersParams::hasThemeVideo() const {
	return m_hasThemeVideo.value();
}

void GetTrailersParams::setHasThemeVideo(bool newHasThemeVideo)  {
	m_hasThemeVideo = newHasThemeVideo;
}

bool GetTrailersParams::hasThemeVideoNull() const {
	// Nullable: true
	// Type Nullable: false
	

	return !m_hasThemeVideo.has_value();
}

void GetTrailersParams::setHasThemeVideoNull() {
	m_hasThemeVideo = std::nullopt;
}


const bool &GetTrailersParams::hasTmdbId() const {
	return m_hasTmdbId.value();
}

void GetTrailersParams::setHasTmdbId(bool newHasTmdbId)  {
	m_hasTmdbId = newHasTmdbId;
}

bool GetTrailersParams::hasTmdbIdNull() const {
	// Nullable: true
	// Type Nullable: false
	

	return !m_hasTmdbId.has_value();
}

void GetTrailersParams::setHasTmdbIdNull() {
	m_hasTmdbId = std::nullopt;
}


const bool &GetTrailersParams::hasTrailer() const {
	return m_hasTrailer.value();
}

void GetTrailersParams::setHasTrailer(bool newHasTrailer)  {
	m_hasTrailer = newHasTrailer;
}

bool GetTrailersParams::hasTrailerNull() const {
	// Nullable: true
	// Type Nullable: false
	

	return !m_hasTrailer.has_value();
}

void GetTrailersParams::setHasTrailerNull() {
	m_hasTrailer = std::nullopt;
}


const bool &GetTrailersParams::hasTvdbId() const {
	return m_hasTvdbId.value();
}

void GetTrailersParams::setHasTvdbId(bool newHasTvdbId)  {
	m_hasTvdbId = newHasTvdbId;
}

bool GetTrailersParams::hasTvdbIdNull() const {
	// Nullable: true
	// Type Nullable: false
	

	return !m_hasTvdbId.has_value();
}

void GetTrailersParams::setHasTvdbIdNull() {
	m_hasTvdbId = std::nullopt;
}


const QStringList &GetTrailersParams::ids() const {
	return m_ids;
}

void GetTrailersParams::setIds(QStringList newIds)  {
	m_ids = newIds;
}

bool GetTrailersParams::idsNull() const {
	// Nullable: true
	// Type Nullable: true
	

	return m_ids.size() == 0;
}

void GetTrailersParams::setIdsNull() {
	m_ids.clear();
}


const qint32 &GetTrailersParams::imageTypeLimit() const {
	return m_imageTypeLimit.value();
}

void GetTrailersParams::setImageTypeLimit(qint32 newImageTypeLimit)  {
	m_imageTypeLimit = newImageTypeLimit;
}

bool GetTrailersParams::imageTypeLimitNull() const {
	// Nullable: true
	// Type Nullable: false
	

	return !m_imageTypeLimit.has_value();
}

void GetTrailersParams::setImageTypeLimitNull() {
	m_imageTypeLimit = std::nullopt;
}


const QList<ImageType> &GetTrailersParams::imageTypes() const {
	return m_imageTypes;
}

void GetTrailersParams::setImageTypes(QList<ImageType> newImageTypes)  {
	m_imageTypes = newImageTypes;
}

bool GetTrailersParams::imageTypesNull() const {
	// Nullable: true
	// Type Nullable: true
	

	return m_imageTypes.size() == 0;
}

void GetTrailersParams::setImageTypesNull() {
	m_imageTypes.clear();
}


const bool &GetTrailersParams::is3D() const {
	return m_is3D.value();
}

void GetTrailersParams::setIs3D(bool newIs3D)  {
	m_is3D = newIs3D;
}

bool GetTrailersParams::is3DNull() const {
	// Nullable: true
	// Type Nullable: false
	

	return !m_is3D.has_value();
}

void GetTrailersParams::setIs3DNull() {
	m_is3D = std::nullopt;
}


const bool &GetTrailersParams::is4K() const {
	return m_is4K.value();
}

void GetTrailersParams::setIs4K(bool newIs4K)  {
	m_is4K = newIs4K;
}

bool GetTrailersParams::is4KNull() const {
	// Nullable: true
	// Type Nullable: false
	

	return !m_is4K.has_value();
}

void GetTrailersParams::setIs4KNull() {
	m_is4K = std::nullopt;
}


const bool &GetTrailersParams::isFavorite() const {
	return m_isFavorite.value();
}

void GetTrailersParams::setIsFavorite(bool newIsFavorite)  {
	m_isFavorite = newIsFavorite;
}

bool GetTrailersParams::isFavoriteNull() const {
	// Nullable: true
	// Type Nullable: false
	

	return !m_isFavorite.has_value();
}

void GetTrailersParams::setIsFavoriteNull() {
	m_isFavorite = std::nullopt;
}


const bool &GetTrailersParams::isHd() const {
	return m_isHd.value();
}

void GetTrailersParams::setIsHd(bool newIsHd)  {
	m_isHd = newIsHd;
}

bool GetTrailersParams::isHdNull() const {
	// Nullable: true
	// Type Nullable: false
	

	return !m_isHd.has_value();
}

void GetTrailersParams::setIsHdNull() {
	m_isHd = std::nullopt;
}


const bool &GetTrailersParams::isLocked() const {
	return m_isLocked.value();
}

void GetTrailersParams::setIsLocked(bool newIsLocked)  {
	m_isLocked = newIsLocked;
}

bool GetTrailersParams::isLockedNull() const {
	// Nullable: true
	// Type Nullable: false
	

	return !m_isLocked.has_value();
}

void GetTrailersParams::setIsLockedNull() {
	m_isLocked = std::nullopt;
}


const bool &GetTrailersParams::isMissing() const {
	return m_isMissing.value();
}

void GetTrailersParams::setIsMissing(bool newIsMissing)  {
	m_isMissing = newIsMissing;
}

bool GetTrailersParams::isMissingNull() const {
	// Nullable: true
	// Type Nullable: false
	

	return !m_isMissing.has_value();
}

void GetTrailersParams::setIsMissingNull() {
	m_isMissing = std::nullopt;
}


const bool &GetTrailersParams::isPlaceHolder() const {
	return m_isPlaceHolder.value();
}

void GetTrailersParams::setIsPlaceHolder(bool newIsPlaceHolder)  {
	m_isPlaceHolder = newIsPlaceHolder;
}

bool GetTrailersParams::isPlaceHolderNull() const {
	// Nullable: true
	// Type Nullable: false
	

	return !m_isPlaceHolder.has_value();
}

void GetTrailersParams::setIsPlaceHolderNull() {
	m_isPlaceHolder = std::nullopt;
}


const bool &GetTrailersParams::isPlayed() const {
	return m_isPlayed.value();
}

void GetTrailersParams::setIsPlayed(bool newIsPlayed)  {
	m_isPlayed = newIsPlayed;
}

bool GetTrailersParams::isPlayedNull() const {
	// Nullable: true
	// Type Nullable: false
	

	return !m_isPlayed.has_value();
}

void GetTrailersParams::setIsPlayedNull() {
	m_isPlayed = std::nullopt;
}


const bool &GetTrailersParams::isUnaired() const {
	return m_isUnaired.value();
}

void GetTrailersParams::setIsUnaired(bool newIsUnaired)  {
	m_isUnaired = newIsUnaired;
}

bool GetTrailersParams::isUnairedNull() const {
	// Nullable: true
	// Type Nullable: false
	

	return !m_isUnaired.has_value();
}

void GetTrailersParams::setIsUnairedNull() {
	m_isUnaired = std::nullopt;
}


const qint32 &GetTrailersParams::limit() const {
	return m_limit.value();
}

void GetTrailersParams::setLimit(qint32 newLimit)  {
	m_limit = newLimit;
}

bool GetTrailersParams::limitNull() const {
	// Nullable: true
	// Type Nullable: false
	

	return !m_limit.has_value();
}

void GetTrailersParams::setLimitNull() {
	m_limit = std::nullopt;
}


const QList<LocationType> &GetTrailersParams::locationTypes() const {
	return m_locationTypes;
}

void GetTrailersParams::setLocationTypes(QList<LocationType> newLocationTypes)  {
	m_locationTypes = newLocationTypes;
}

bool GetTrailersParams::locationTypesNull() const {
	// Nullable: true
	// Type Nullable: true
	

	return m_locationTypes.size() == 0;
}

void GetTrailersParams::setLocationTypesNull() {
	m_locationTypes.clear();
}


const qint32 &GetTrailersParams::maxHeight() const {
	return m_maxHeight.value();
}

void GetTrailersParams::setMaxHeight(qint32 newMaxHeight)  {
	m_maxHeight = newMaxHeight;
}

bool GetTrailersParams::maxHeightNull() const {
	// Nullable: true
	// Type Nullable: false
	

	return !m_maxHeight.has_value();
}

void GetTrailersParams::setMaxHeightNull() {
	m_maxHeight = std::nullopt;
}


const QString &GetTrailersParams::maxOfficialRating() const {
	return m_maxOfficialRating;
}

void GetTrailersParams::setMaxOfficialRating(QString newMaxOfficialRating)  {
	m_maxOfficialRating = newMaxOfficialRating;
}

bool GetTrailersParams::maxOfficialRatingNull() const {
	// Nullable: true
	// Type Nullable: true
	

	return m_maxOfficialRating.isNull();
}

void GetTrailersParams::setMaxOfficialRatingNull() {
	m_maxOfficialRating.clear();
}


const QDateTime &GetTrailersParams::maxPremiereDate() const {
	return m_maxPremiereDate;
}

void GetTrailersParams::setMaxPremiereDate(QDateTime newMaxPremiereDate)  {
	m_maxPremiereDate = newMaxPremiereDate;
}

bool GetTrailersParams::maxPremiereDateNull() const {
	// Nullable: true
	// Type Nullable: true
	

	return m_maxPremiereDate.isNull();
}

void GetTrailersParams::setMaxPremiereDateNull() {
	m_maxPremiereDate= QDateTime();
}


const qint32 &GetTrailersParams::maxWidth() const {
	return m_maxWidth.value();
}

void GetTrailersParams::setMaxWidth(qint32 newMaxWidth)  {
	m_maxWidth = newMaxWidth;
}

bool GetTrailersParams::maxWidthNull() const {
	// Nullable: true
	// Type Nullable: false
	

	return !m_maxWidth.has_value();
}

void GetTrailersParams::setMaxWidthNull() {
	m_maxWidth = std::nullopt;
}


const QStringList &GetTrailersParams::mediaTypes() const {
	return m_mediaTypes;
}

void GetTrailersParams::setMediaTypes(QStringList newMediaTypes)  {
	m_mediaTypes = newMediaTypes;
}

bool GetTrailersParams::mediaTypesNull() const {
	// Nullable: true
	// Type Nullable: true
	

	return m_mediaTypes.size() == 0;
}

void GetTrailersParams::setMediaTypesNull() {
	m_mediaTypes.clear();
}


const double &GetTrailersParams::minCommunityRating() const {
	return m_minCommunityRating.value();
}

void GetTrailersParams::setMinCommunityRating(double newMinCommunityRating)  {
	m_minCommunityRating = newMinCommunityRating;
}

bool GetTrailersParams::minCommunityRatingNull() const {
	// Nullable: true
	// Type Nullable: false
	

	return !m_minCommunityRating.has_value();
}

void GetTrailersParams::setMinCommunityRatingNull() {
	m_minCommunityRating = std::nullopt;
}


const double &GetTrailersParams::minCriticRating() const {
	return m_minCriticRating.value();
}

void GetTrailersParams::setMinCriticRating(double newMinCriticRating)  {
	m_minCriticRating = newMinCriticRating;
}

bool GetTrailersParams::minCriticRatingNull() const {
	// Nullable: true
	// Type Nullable: false
	

	return !m_minCriticRating.has_value();
}

void GetTrailersParams::setMinCriticRatingNull() {
	m_minCriticRating = std::nullopt;
}


const QDateTime &GetTrailersParams::minDateLastSaved() const {
	return m_minDateLastSaved;
}

void GetTrailersParams::setMinDateLastSaved(QDateTime newMinDateLastSaved)  {
	m_minDateLastSaved = newMinDateLastSaved;
}

bool GetTrailersParams::minDateLastSavedNull() const {
	// Nullable: true
	// Type Nullable: true
	

	return m_minDateLastSaved.isNull();
}

void GetTrailersParams::setMinDateLastSavedNull() {
	m_minDateLastSaved= QDateTime();
}


const QDateTime &GetTrailersParams::minDateLastSavedForUser() const {
	return m_minDateLastSavedForUser;
}

void GetTrailersParams::setMinDateLastSavedForUser(QDateTime newMinDateLastSavedForUser)  {
	m_minDateLastSavedForUser = newMinDateLastSavedForUser;
}

bool GetTrailersParams::minDateLastSavedForUserNull() const {
	// Nullable: true
	// Type Nullable: true
	

	return m_minDateLastSavedForUser.isNull();
}

void GetTrailersParams::setMinDateLastSavedForUserNull() {
	m_minDateLastSavedForUser= QDateTime();
}


const qint32 &GetTrailersParams::minHeight() const {
	return m_minHeight.value();
}

void GetTrailersParams::setMinHeight(qint32 newMinHeight)  {
	m_minHeight = newMinHeight;
}

bool GetTrailersParams::minHeightNull() const {
	// Nullable: true
	// Type Nullable: false
	

	return !m_minHeight.has_value();
}

void GetTrailersParams::setMinHeightNull() {
	m_minHeight = std::nullopt;
}


const QString &GetTrailersParams::minOfficialRating() const {
	return m_minOfficialRating;
}

void GetTrailersParams::setMinOfficialRating(QString newMinOfficialRating)  {
	m_minOfficialRating = newMinOfficialRating;
}

bool GetTrailersParams::minOfficialRatingNull() const {
	// Nullable: true
	// Type Nullable: true
	

	return m_minOfficialRating.isNull();
}

void GetTrailersParams::setMinOfficialRatingNull() {
	m_minOfficialRating.clear();
}


const QDateTime &GetTrailersParams::minPremiereDate() const {
	return m_minPremiereDate;
}

void GetTrailersParams::setMinPremiereDate(QDateTime newMinPremiereDate)  {
	m_minPremiereDate = newMinPremiereDate;
}

bool GetTrailersParams::minPremiereDateNull() const {
	// Nullable: true
	// Type Nullable: true
	

	return m_minPremiereDate.isNull();
}

void GetTrailersParams::setMinPremiereDateNull() {
	m_minPremiereDate= QDateTime();
}


const qint32 &GetTrailersParams::minWidth() const {
	return m_minWidth.value();
}

void GetTrailersParams::setMinWidth(qint32 newMinWidth)  {
	m_minWidth = newMinWidth;
}

bool GetTrailersParams::minWidthNull() const {
	// Nullable: true
	// Type Nullable: false
	

	return !m_minWidth.has_value();
}

void GetTrailersParams::setMinWidthNull() {
	m_minWidth = std::nullopt;
}


const QString &GetTrailersParams::nameLessThan() const {
	return m_nameLessThan;
}

void GetTrailersParams::setNameLessThan(QString newNameLessThan)  {
	m_nameLessThan = newNameLessThan;
}

bool GetTrailersParams::nameLessThanNull() const {
	// Nullable: true
	// Type Nullable: true
	

	return m_nameLessThan.isNull();
}

void GetTrailersParams::setNameLessThanNull() {
	m_nameLessThan.clear();
}


const QString &GetTrailersParams::nameStartsWith() const {
	return m_nameStartsWith;
}

void GetTrailersParams::setNameStartsWith(QString newNameStartsWith)  {
	m_nameStartsWith = newNameStartsWith;
}

bool GetTrailersParams::nameStartsWithNull() const {
	// Nullable: true
	// Type Nullable: true
	

	return m_nameStartsWith.isNull();
}

void GetTrailersParams::setNameStartsWithNull() {
	m_nameStartsWith.clear();
}


const QString &GetTrailersParams::nameStartsWithOrGreater() const {
	return m_nameStartsWithOrGreater;
}

void GetTrailersParams::setNameStartsWithOrGreater(QString newNameStartsWithOrGreater)  {
	m_nameStartsWithOrGreater = newNameStartsWithOrGreater;
}

bool GetTrailersParams::nameStartsWithOrGreaterNull() const {
	// Nullable: true
	// Type Nullable: true
	

	return m_nameStartsWithOrGreater.isNull();
}

void GetTrailersParams::setNameStartsWithOrGreaterNull() {
	m_nameStartsWithOrGreater.clear();
}


const QStringList &GetTrailersParams::officialRatings() const {
	return m_officialRatings;
}

void GetTrailersParams::setOfficialRatings(QStringList newOfficialRatings)  {
	m_officialRatings = newOfficialRatings;
}

bool GetTrailersParams::officialRatingsNull() const {
	// Nullable: true
	// Type Nullable: true
	

	return m_officialRatings.size() == 0;
}

void GetTrailersParams::setOfficialRatingsNull() {
	m_officialRatings.clear();
}


const QString &GetTrailersParams::parentId() const {
	return m_parentId;
}

void GetTrailersParams::setParentId(QString newParentId)  {
	m_parentId = newParentId;
}

bool GetTrailersParams::parentIdNull() const {
	// Nullable: true
	// Type Nullable: true
	

	return m_parentId.isNull();
}

void GetTrailersParams::setParentIdNull() {
	m_parentId.clear();
}


const qint32 &GetTrailersParams::parentIndexNumber() const {
	return m_parentIndexNumber.value();
}

void GetTrailersParams::setParentIndexNumber(qint32 newParentIndexNumber)  {
	m_parentIndexNumber = newParentIndexNumber;
}

bool GetTrailersParams::parentIndexNumberNull() const {
	// Nullable: true
	// Type Nullable: false
	

	return !m_parentIndexNumber.has_value();
}

void GetTrailersParams::setParentIndexNumberNull() {
	m_parentIndexNumber = std::nullopt;
}


const QString &GetTrailersParams::person() const {
	return m_person;
}

void GetTrailersParams::setPerson(QString newPerson)  {
	m_person = newPerson;
}

bool GetTrailersParams::personNull() const {
	// Nullable: true
	// Type Nullable: true
	

	return m_person.isNull();
}

void GetTrailersParams::setPersonNull() {
	m_person.clear();
}


const QStringList &GetTrailersParams::personIds() const {
	return m_personIds;
}

void GetTrailersParams::setPersonIds(QStringList newPersonIds)  {
	m_personIds = newPersonIds;
}

bool GetTrailersParams::personIdsNull() const {
	// Nullable: true
	// Type Nullable: true
	

	return m_personIds.size() == 0;
}

void GetTrailersParams::setPersonIdsNull() {
	m_personIds.clear();
}


const QStringList &GetTrailersParams::personTypes() const {
	return m_personTypes;
}

void GetTrailersParams::setPersonTypes(QStringList newPersonTypes)  {
	m_personTypes = newPersonTypes;
}

bool GetTrailersParams::personTypesNull() const {
	// Nullable: true
	// Type Nullable: true
	

	return m_personTypes.size() == 0;
}

void GetTrailersParams::setPersonTypesNull() {
	m_personTypes.clear();
}


const bool &GetTrailersParams::recursive() const {
	return m_recursive.value();
}

void GetTrailersParams::setRecursive(bool newRecursive)  {
	m_recursive = newRecursive;
}

bool GetTrailersParams::recursiveNull() const {
	// Nullable: true
	// Type Nullable: false
	

	return !m_recursive.has_value();
}

void GetTrailersParams::setRecursiveNull() {
	m_recursive = std::nullopt;
}


const QString &GetTrailersParams::searchTerm() const {
	return m_searchTerm;
}

void GetTrailersParams::setSearchTerm(QString newSearchTerm)  {
	m_searchTerm = newSearchTerm;
}

bool GetTrailersParams::searchTermNull() const {
	// Nullable: true
	// Type Nullable: true
	

	return m_searchTerm.isNull();
}

void GetTrailersParams::setSearchTermNull() {
	m_searchTerm.clear();
}


const QList<SeriesStatus> &GetTrailersParams::seriesStatus() const {
	return m_seriesStatus;
}

void GetTrailersParams::setSeriesStatus(QList<SeriesStatus> newSeriesStatus)  {
	m_seriesStatus = newSeriesStatus;
}

bool GetTrailersParams::seriesStatusNull() const {
	// Nullable: true
	// Type Nullable: true
	

	return m_seriesStatus.size() == 0;
}

void GetTrailersParams::setSeriesStatusNull() {
	m_seriesStatus.clear();
}


const QString &GetTrailersParams::sortBy() const {
	return m_sortBy;
}

void GetTrailersParams::setSortBy(QString newSortBy)  {
	m_sortBy = newSortBy;
}

bool GetTrailersParams::sortByNull() const {
	// Nullable: true
	// Type Nullable: true
	

	return m_sortBy.isNull();
}

void GetTrailersParams::setSortByNull() {
	m_sortBy.clear();
}


const QString &GetTrailersParams::sortOrder() const {
	return m_sortOrder;
}

void GetTrailersParams::setSortOrder(QString newSortOrder)  {
	m_sortOrder = newSortOrder;
}

bool GetTrailersParams::sortOrderNull() const {
	// Nullable: true
	// Type Nullable: true
	

	return m_sortOrder.isNull();
}

void GetTrailersParams::setSortOrderNull() {
	m_sortOrder.clear();
}


const qint32 &GetTrailersParams::startIndex() const {
	return m_startIndex.value();
}

void GetTrailersParams::setStartIndex(qint32 newStartIndex)  {
	m_startIndex = newStartIndex;
}

bool GetTrailersParams::startIndexNull() const {
	// Nullable: true
	// Type Nullable: false
	

	return !m_startIndex.has_value();
}

void GetTrailersParams::setStartIndexNull() {
	m_startIndex = std::nullopt;
}


const QStringList &GetTrailersParams::studioIds() const {
	return m_studioIds;
}

void GetTrailersParams::setStudioIds(QStringList newStudioIds)  {
	m_studioIds = newStudioIds;
}

bool GetTrailersParams::studioIdsNull() const {
	// Nullable: true
	// Type Nullable: true
	

	return m_studioIds.size() == 0;
}

void GetTrailersParams::setStudioIdsNull() {
	m_studioIds.clear();
}


const QStringList &GetTrailersParams::studios() const {
	return m_studios;
}

void GetTrailersParams::setStudios(QStringList newStudios)  {
	m_studios = newStudios;
}

bool GetTrailersParams::studiosNull() const {
	// Nullable: true
	// Type Nullable: true
	

	return m_studios.size() == 0;
}

void GetTrailersParams::setStudiosNull() {
	m_studios.clear();
}


const QStringList &GetTrailersParams::tags() const {
	return m_tags;
}

void GetTrailersParams::setTags(QStringList newTags)  {
	m_tags = newTags;
}

bool GetTrailersParams::tagsNull() const {
	// Nullable: true
	// Type Nullable: true
	

	return m_tags.size() == 0;
}

void GetTrailersParams::setTagsNull() {
	m_tags.clear();
}


const QString &GetTrailersParams::userId() const {
	return m_userId;
}

void GetTrailersParams::setUserId(QString newUserId)  {
	m_userId = newUserId;
}

bool GetTrailersParams::userIdNull() const {
	// Nullable: true
	// Type Nullable: true
	

	return m_userId.isNull();
}

void GetTrailersParams::setUserIdNull() {
	m_userId.clear();
}


const QList<VideoType> &GetTrailersParams::videoTypes() const {
	return m_videoTypes;
}

void GetTrailersParams::setVideoTypes(QList<VideoType> newVideoTypes)  {
	m_videoTypes = newVideoTypes;
}

bool GetTrailersParams::videoTypesNull() const {
	// Nullable: true
	// Type Nullable: true
	

	return m_videoTypes.size() == 0;
}

void GetTrailersParams::setVideoTypesNull() {
	m_videoTypes.clear();
}


const QList<qint32> &GetTrailersParams::years() const {
	return m_years;
}

void GetTrailersParams::setYears(QList<qint32> newYears)  {
	m_years = newYears;
}

bool GetTrailersParams::yearsNull() const {
	// Nullable: true
	// Type Nullable: true
	

	return m_years.size() == 0;
}

void GetTrailersParams::setYearsNull() {
	m_years.clear();
}




// GetTunerHostTypesParams



// GetUniversalAudioStreamParams

const QString &GetUniversalAudioStreamParams::itemId() const {
	return m_itemId;
}

void GetUniversalAudioStreamParams::setItemId(QString newItemId) {
	m_itemId = newItemId;
}


const qint32 &GetUniversalAudioStreamParams::audioBitRate() const {
	return m_audioBitRate.value();
}

void GetUniversalAudioStreamParams::setAudioBitRate(qint32 newAudioBitRate)  {
	m_audioBitRate = newAudioBitRate;
}

bool GetUniversalAudioStreamParams::audioBitRateNull() const {
	// Nullable: true
	// Type Nullable: false
	

	return !m_audioBitRate.has_value();
}

void GetUniversalAudioStreamParams::setAudioBitRateNull() {
	m_audioBitRate = std::nullopt;
}


const QString &GetUniversalAudioStreamParams::audioCodec() const {
	return m_audioCodec;
}

void GetUniversalAudioStreamParams::setAudioCodec(QString newAudioCodec)  {
	m_audioCodec = newAudioCodec;
}

bool GetUniversalAudioStreamParams::audioCodecNull() const {
	// Nullable: true
	// Type Nullable: true
	

	return m_audioCodec.isNull();
}

void GetUniversalAudioStreamParams::setAudioCodecNull() {
	m_audioCodec.clear();
}


const bool &GetUniversalAudioStreamParams::breakOnNonKeyFrames() const {
	return m_breakOnNonKeyFrames.value();
}

void GetUniversalAudioStreamParams::setBreakOnNonKeyFrames(bool newBreakOnNonKeyFrames)  {
	m_breakOnNonKeyFrames = newBreakOnNonKeyFrames;
}

bool GetUniversalAudioStreamParams::breakOnNonKeyFramesNull() const {
	// Nullable: true
	// Type Nullable: false
	

	return !m_breakOnNonKeyFrames.has_value();
}

void GetUniversalAudioStreamParams::setBreakOnNonKeyFramesNull() {
	m_breakOnNonKeyFrames = std::nullopt;
}


const QStringList &GetUniversalAudioStreamParams::container() const {
	return m_container;
}

void GetUniversalAudioStreamParams::setContainer(QStringList newContainer)  {
	m_container = newContainer;
}

bool GetUniversalAudioStreamParams::containerNull() const {
	// Nullable: true
	// Type Nullable: true
	

	return m_container.size() == 0;
}

void GetUniversalAudioStreamParams::setContainerNull() {
	m_container.clear();
}


const QString &GetUniversalAudioStreamParams::deviceId() const {
	return m_deviceId;
}

void GetUniversalAudioStreamParams::setDeviceId(QString newDeviceId)  {
	m_deviceId = newDeviceId;
}

bool GetUniversalAudioStreamParams::deviceIdNull() const {
	// Nullable: true
	// Type Nullable: true
	

	return m_deviceId.isNull();
}

void GetUniversalAudioStreamParams::setDeviceIdNull() {
	m_deviceId.clear();
}


const bool &GetUniversalAudioStreamParams::enableRedirection() const {
	return m_enableRedirection.value();
}

void GetUniversalAudioStreamParams::setEnableRedirection(bool newEnableRedirection)  {
	m_enableRedirection = newEnableRedirection;
}

bool GetUniversalAudioStreamParams::enableRedirectionNull() const {
	// Nullable: false
	// Type Nullable: false
	

	return !m_enableRedirection.has_value();
}

void GetUniversalAudioStreamParams::setEnableRedirectionNull() {
	m_enableRedirection = std::nullopt;
}


const bool &GetUniversalAudioStreamParams::enableRemoteMedia() const {
	return m_enableRemoteMedia.value();
}

void GetUniversalAudioStreamParams::setEnableRemoteMedia(bool newEnableRemoteMedia)  {
	m_enableRemoteMedia = newEnableRemoteMedia;
}

bool GetUniversalAudioStreamParams::enableRemoteMediaNull() const {
	// Nullable: true
	// Type Nullable: false
	

	return !m_enableRemoteMedia.has_value();
}

void GetUniversalAudioStreamParams::setEnableRemoteMediaNull() {
	m_enableRemoteMedia = std::nullopt;
}


const qint32 &GetUniversalAudioStreamParams::maxAudioBitDepth() const {
	return m_maxAudioBitDepth.value();
}

void GetUniversalAudioStreamParams::setMaxAudioBitDepth(qint32 newMaxAudioBitDepth)  {
	m_maxAudioBitDepth = newMaxAudioBitDepth;
}

bool GetUniversalAudioStreamParams::maxAudioBitDepthNull() const {
	// Nullable: true
	// Type Nullable: false
	

	return !m_maxAudioBitDepth.has_value();
}

void GetUniversalAudioStreamParams::setMaxAudioBitDepthNull() {
	m_maxAudioBitDepth = std::nullopt;
}


const qint32 &GetUniversalAudioStreamParams::maxAudioChannels() const {
	return m_maxAudioChannels.value();
}

void GetUniversalAudioStreamParams::setMaxAudioChannels(qint32 newMaxAudioChannels)  {
	m_maxAudioChannels = newMaxAudioChannels;
}

bool GetUniversalAudioStreamParams::maxAudioChannelsNull() const {
	// Nullable: true
	// Type Nullable: false
	

	return !m_maxAudioChannels.has_value();
}

void GetUniversalAudioStreamParams::setMaxAudioChannelsNull() {
	m_maxAudioChannels = std::nullopt;
}


const qint32 &GetUniversalAudioStreamParams::maxAudioSampleRate() const {
	return m_maxAudioSampleRate.value();
}

void GetUniversalAudioStreamParams::setMaxAudioSampleRate(qint32 newMaxAudioSampleRate)  {
	m_maxAudioSampleRate = newMaxAudioSampleRate;
}

bool GetUniversalAudioStreamParams::maxAudioSampleRateNull() const {
	// Nullable: true
	// Type Nullable: false
	

	return !m_maxAudioSampleRate.has_value();
}

void GetUniversalAudioStreamParams::setMaxAudioSampleRateNull() {
	m_maxAudioSampleRate = std::nullopt;
}


const qint32 &GetUniversalAudioStreamParams::maxStreamingBitrate() const {
	return m_maxStreamingBitrate.value();
}

void GetUniversalAudioStreamParams::setMaxStreamingBitrate(qint32 newMaxStreamingBitrate)  {
	m_maxStreamingBitrate = newMaxStreamingBitrate;
}

bool GetUniversalAudioStreamParams::maxStreamingBitrateNull() const {
	// Nullable: true
	// Type Nullable: false
	

	return !m_maxStreamingBitrate.has_value();
}

void GetUniversalAudioStreamParams::setMaxStreamingBitrateNull() {
	m_maxStreamingBitrate = std::nullopt;
}


const QString &GetUniversalAudioStreamParams::mediaSourceId() const {
	return m_mediaSourceId;
}

void GetUniversalAudioStreamParams::setMediaSourceId(QString newMediaSourceId)  {
	m_mediaSourceId = newMediaSourceId;
}

bool GetUniversalAudioStreamParams::mediaSourceIdNull() const {
	// Nullable: true
	// Type Nullable: true
	

	return m_mediaSourceId.isNull();
}

void GetUniversalAudioStreamParams::setMediaSourceIdNull() {
	m_mediaSourceId.clear();
}


const qint64 &GetUniversalAudioStreamParams::startTimeTicks() const {
	return m_startTimeTicks.value();
}

void GetUniversalAudioStreamParams::setStartTimeTicks(qint64 newStartTimeTicks)  {
	m_startTimeTicks = newStartTimeTicks;
}

bool GetUniversalAudioStreamParams::startTimeTicksNull() const {
	// Nullable: true
	// Type Nullable: false
	

	return !m_startTimeTicks.has_value();
}

void GetUniversalAudioStreamParams::setStartTimeTicksNull() {
	m_startTimeTicks = std::nullopt;
}


const qint32 &GetUniversalAudioStreamParams::transcodingAudioChannels() const {
	return m_transcodingAudioChannels.value();
}

void GetUniversalAudioStreamParams::setTranscodingAudioChannels(qint32 newTranscodingAudioChannels)  {
	m_transcodingAudioChannels = newTranscodingAudioChannels;
}

bool GetUniversalAudioStreamParams::transcodingAudioChannelsNull() const {
	// Nullable: true
	// Type Nullable: false
	

	return !m_transcodingAudioChannels.has_value();
}

void GetUniversalAudioStreamParams::setTranscodingAudioChannelsNull() {
	m_transcodingAudioChannels = std::nullopt;
}


const QString &GetUniversalAudioStreamParams::transcodingContainer() const {
	return m_transcodingContainer;
}

void GetUniversalAudioStreamParams::setTranscodingContainer(QString newTranscodingContainer)  {
	m_transcodingContainer = newTranscodingContainer;
}

bool GetUniversalAudioStreamParams::transcodingContainerNull() const {
	// Nullable: true
	// Type Nullable: true
	

	return m_transcodingContainer.isNull();
}

void GetUniversalAudioStreamParams::setTranscodingContainerNull() {
	m_transcodingContainer.clear();
}


const QString &GetUniversalAudioStreamParams::transcodingProtocol() const {
	return m_transcodingProtocol;
}

void GetUniversalAudioStreamParams::setTranscodingProtocol(QString newTranscodingProtocol)  {
	m_transcodingProtocol = newTranscodingProtocol;
}

bool GetUniversalAudioStreamParams::transcodingProtocolNull() const {
	// Nullable: true
	// Type Nullable: true
	

	return m_transcodingProtocol.isNull();
}

void GetUniversalAudioStreamParams::setTranscodingProtocolNull() {
	m_transcodingProtocol.clear();
}


const QString &GetUniversalAudioStreamParams::userId() const {
	return m_userId;
}

void GetUniversalAudioStreamParams::setUserId(QString newUserId)  {
	m_userId = newUserId;
}

bool GetUniversalAudioStreamParams::userIdNull() const {
	// Nullable: true
	// Type Nullable: true
	

	return m_userId.isNull();
}

void GetUniversalAudioStreamParams::setUserIdNull() {
	m_userId.clear();
}




// GetUpcomingEpisodesParams

const QList<ImageType> &GetUpcomingEpisodesParams::enableImageTypes() const {
	return m_enableImageTypes;
}

void GetUpcomingEpisodesParams::setEnableImageTypes(QList<ImageType> newEnableImageTypes)  {
	m_enableImageTypes = newEnableImageTypes;
}

bool GetUpcomingEpisodesParams::enableImageTypesNull() const {
	// Nullable: true
	// Type Nullable: true
	

	return m_enableImageTypes.size() == 0;
}

void GetUpcomingEpisodesParams::setEnableImageTypesNull() {
	m_enableImageTypes.clear();
}


const bool &GetUpcomingEpisodesParams::enableImges() const {
	return m_enableImges.value();
}

void GetUpcomingEpisodesParams::setEnableImges(bool newEnableImges)  {
	m_enableImges = newEnableImges;
}

bool GetUpcomingEpisodesParams::enableImgesNull() const {
	// Nullable: true
	// Type Nullable: false
	

	return !m_enableImges.has_value();
}

void GetUpcomingEpisodesParams::setEnableImgesNull() {
	m_enableImges = std::nullopt;
}


const bool &GetUpcomingEpisodesParams::enableUserData() const {
	return m_enableUserData.value();
}

void GetUpcomingEpisodesParams::setEnableUserData(bool newEnableUserData)  {
	m_enableUserData = newEnableUserData;
}

bool GetUpcomingEpisodesParams::enableUserDataNull() const {
	// Nullable: true
	// Type Nullable: false
	

	return !m_enableUserData.has_value();
}

void GetUpcomingEpisodesParams::setEnableUserDataNull() {
	m_enableUserData = std::nullopt;
}


const QList<ItemFields> &GetUpcomingEpisodesParams::fields() const {
	return m_fields;
}

void GetUpcomingEpisodesParams::setFields(QList<ItemFields> newFields)  {
	m_fields = newFields;
}

bool GetUpcomingEpisodesParams::fieldsNull() const {
	// Nullable: true
	// Type Nullable: true
	

	return m_fields.size() == 0;
}

void GetUpcomingEpisodesParams::setFieldsNull() {
	m_fields.clear();
}


const qint32 &GetUpcomingEpisodesParams::imageTypeLimit() const {
	return m_imageTypeLimit.value();
}

void GetUpcomingEpisodesParams::setImageTypeLimit(qint32 newImageTypeLimit)  {
	m_imageTypeLimit = newImageTypeLimit;
}

bool GetUpcomingEpisodesParams::imageTypeLimitNull() const {
	// Nullable: true
	// Type Nullable: false
	

	return !m_imageTypeLimit.has_value();
}

void GetUpcomingEpisodesParams::setImageTypeLimitNull() {
	m_imageTypeLimit = std::nullopt;
}


const qint32 &GetUpcomingEpisodesParams::limit() const {
	return m_limit.value();
}

void GetUpcomingEpisodesParams::setLimit(qint32 newLimit)  {
	m_limit = newLimit;
}

bool GetUpcomingEpisodesParams::limitNull() const {
	// Nullable: true
	// Type Nullable: false
	

	return !m_limit.has_value();
}

void GetUpcomingEpisodesParams::setLimitNull() {
	m_limit = std::nullopt;
}


const QString &GetUpcomingEpisodesParams::parentId() const {
	return m_parentId;
}

void GetUpcomingEpisodesParams::setParentId(QString newParentId)  {
	m_parentId = newParentId;
}

bool GetUpcomingEpisodesParams::parentIdNull() const {
	// Nullable: true
	// Type Nullable: true
	

	return m_parentId.isNull();
}

void GetUpcomingEpisodesParams::setParentIdNull() {
	m_parentId.clear();
}


const qint32 &GetUpcomingEpisodesParams::startIndex() const {
	return m_startIndex.value();
}

void GetUpcomingEpisodesParams::setStartIndex(qint32 newStartIndex)  {
	m_startIndex = newStartIndex;
}

bool GetUpcomingEpisodesParams::startIndexNull() const {
	// Nullable: true
	// Type Nullable: false
	

	return !m_startIndex.has_value();
}

void GetUpcomingEpisodesParams::setStartIndexNull() {
	m_startIndex = std::nullopt;
}


const QString &GetUpcomingEpisodesParams::userId() const {
	return m_userId;
}

void GetUpcomingEpisodesParams::setUserId(QString newUserId)  {
	m_userId = newUserId;
}

bool GetUpcomingEpisodesParams::userIdNull() const {
	// Nullable: true
	// Type Nullable: true
	

	return m_userId.isNull();
}

void GetUpcomingEpisodesParams::setUserIdNull() {
	m_userId.clear();
}




// GetUserByIdParams

const QString &GetUserByIdParams::userId() const {
	return m_userId;
}

void GetUserByIdParams::setUserId(QString newUserId) {
	m_userId = newUserId;
}




// GetUserImageParams

const ImageType &GetUserImageParams::imageType() const {
	return m_imageType;
}

void GetUserImageParams::setImageType(ImageType newImageType) {
	m_imageType = newImageType;
}


const QString &GetUserImageParams::userId() const {
	return m_userId;
}

void GetUserImageParams::setUserId(QString newUserId) {
	m_userId = newUserId;
}


const bool &GetUserImageParams::addPlayedIndicator() const {
	return m_addPlayedIndicator.value();
}

void GetUserImageParams::setAddPlayedIndicator(bool newAddPlayedIndicator)  {
	m_addPlayedIndicator = newAddPlayedIndicator;
}

bool GetUserImageParams::addPlayedIndicatorNull() const {
	// Nullable: true
	// Type Nullable: false
	

	return !m_addPlayedIndicator.has_value();
}

void GetUserImageParams::setAddPlayedIndicatorNull() {
	m_addPlayedIndicator = std::nullopt;
}


const QString &GetUserImageParams::backgroundColor() const {
	return m_backgroundColor;
}

void GetUserImageParams::setBackgroundColor(QString newBackgroundColor)  {
	m_backgroundColor = newBackgroundColor;
}

bool GetUserImageParams::backgroundColorNull() const {
	// Nullable: true
	// Type Nullable: true
	

	return m_backgroundColor.isNull();
}

void GetUserImageParams::setBackgroundColorNull() {
	m_backgroundColor.clear();
}


const qint32 &GetUserImageParams::blur() const {
	return m_blur.value();
}

void GetUserImageParams::setBlur(qint32 newBlur)  {
	m_blur = newBlur;
}

bool GetUserImageParams::blurNull() const {
	// Nullable: true
	// Type Nullable: false
	

	return !m_blur.has_value();
}

void GetUserImageParams::setBlurNull() {
	m_blur = std::nullopt;
}


const bool &GetUserImageParams::cropWhitespace() const {
	return m_cropWhitespace.value();
}

void GetUserImageParams::setCropWhitespace(bool newCropWhitespace)  {
	m_cropWhitespace = newCropWhitespace;
}

bool GetUserImageParams::cropWhitespaceNull() const {
	// Nullable: true
	// Type Nullable: false
	

	return !m_cropWhitespace.has_value();
}

void GetUserImageParams::setCropWhitespaceNull() {
	m_cropWhitespace = std::nullopt;
}


const QString &GetUserImageParams::foregroundLayer() const {
	return m_foregroundLayer;
}

void GetUserImageParams::setForegroundLayer(QString newForegroundLayer)  {
	m_foregroundLayer = newForegroundLayer;
}

bool GetUserImageParams::foregroundLayerNull() const {
	// Nullable: true
	// Type Nullable: true
	

	return m_foregroundLayer.isNull();
}

void GetUserImageParams::setForegroundLayerNull() {
	m_foregroundLayer.clear();
}


const ImageFormat &GetUserImageParams::format() const {
	return m_format;
}

void GetUserImageParams::setFormat(ImageFormat newFormat)  {
	m_format = newFormat;
}

bool GetUserImageParams::formatNull() const {
	// Nullable: true
	// Type Nullable: true
	

	return m_format== ImageFormat::EnumNotSet;
}

void GetUserImageParams::setFormatNull() {
	m_format= ImageFormat::EnumNotSet;
}


const qint32 &GetUserImageParams::height() const {
	return m_height.value();
}

void GetUserImageParams::setHeight(qint32 newHeight)  {
	m_height = newHeight;
}

bool GetUserImageParams::heightNull() const {
	// Nullable: true
	// Type Nullable: false
	

	return !m_height.has_value();
}

void GetUserImageParams::setHeightNull() {
	m_height = std::nullopt;
}


const qint32 &GetUserImageParams::imageIndex() const {
	return m_imageIndex.value();
}

void GetUserImageParams::setImageIndex(qint32 newImageIndex)  {
	m_imageIndex = newImageIndex;
}

bool GetUserImageParams::imageIndexNull() const {
	// Nullable: true
	// Type Nullable: false
	

	return !m_imageIndex.has_value();
}

void GetUserImageParams::setImageIndexNull() {
	m_imageIndex = std::nullopt;
}


const qint32 &GetUserImageParams::maxHeight() const {
	return m_maxHeight.value();
}

void GetUserImageParams::setMaxHeight(qint32 newMaxHeight)  {
	m_maxHeight = newMaxHeight;
}

bool GetUserImageParams::maxHeightNull() const {
	// Nullable: true
	// Type Nullable: false
	

	return !m_maxHeight.has_value();
}

void GetUserImageParams::setMaxHeightNull() {
	m_maxHeight = std::nullopt;
}


const qint32 &GetUserImageParams::maxWidth() const {
	return m_maxWidth.value();
}

void GetUserImageParams::setMaxWidth(qint32 newMaxWidth)  {
	m_maxWidth = newMaxWidth;
}

bool GetUserImageParams::maxWidthNull() const {
	// Nullable: true
	// Type Nullable: false
	

	return !m_maxWidth.has_value();
}

void GetUserImageParams::setMaxWidthNull() {
	m_maxWidth = std::nullopt;
}


const double &GetUserImageParams::percentPlayed() const {
	return m_percentPlayed.value();
}

void GetUserImageParams::setPercentPlayed(double newPercentPlayed)  {
	m_percentPlayed = newPercentPlayed;
}

bool GetUserImageParams::percentPlayedNull() const {
	// Nullable: true
	// Type Nullable: false
	

	return !m_percentPlayed.has_value();
}

void GetUserImageParams::setPercentPlayedNull() {
	m_percentPlayed = std::nullopt;
}


const qint32 &GetUserImageParams::quality() const {
	return m_quality.value();
}

void GetUserImageParams::setQuality(qint32 newQuality)  {
	m_quality = newQuality;
}

bool GetUserImageParams::qualityNull() const {
	// Nullable: true
	// Type Nullable: false
	

	return !m_quality.has_value();
}

void GetUserImageParams::setQualityNull() {
	m_quality = std::nullopt;
}


const QString &GetUserImageParams::tag() const {
	return m_tag;
}

void GetUserImageParams::setTag(QString newTag)  {
	m_tag = newTag;
}

bool GetUserImageParams::tagNull() const {
	// Nullable: true
	// Type Nullable: true
	

	return m_tag.isNull();
}

void GetUserImageParams::setTagNull() {
	m_tag.clear();
}


const qint32 &GetUserImageParams::unplayedCount() const {
	return m_unplayedCount.value();
}

void GetUserImageParams::setUnplayedCount(qint32 newUnplayedCount)  {
	m_unplayedCount = newUnplayedCount;
}

bool GetUserImageParams::unplayedCountNull() const {
	// Nullable: true
	// Type Nullable: false
	

	return !m_unplayedCount.has_value();
}

void GetUserImageParams::setUnplayedCountNull() {
	m_unplayedCount = std::nullopt;
}


const qint32 &GetUserImageParams::width() const {
	return m_width.value();
}

void GetUserImageParams::setWidth(qint32 newWidth)  {
	m_width = newWidth;
}

bool GetUserImageParams::widthNull() const {
	// Nullable: true
	// Type Nullable: false
	

	return !m_width.has_value();
}

void GetUserImageParams::setWidthNull() {
	m_width = std::nullopt;
}




// GetUserImageByIndexParams

const qint32 &GetUserImageByIndexParams::imageIndex() const {
	return m_imageIndex;
}

void GetUserImageByIndexParams::setImageIndex(qint32 newImageIndex) {
	m_imageIndex = newImageIndex;
}


const ImageType &GetUserImageByIndexParams::imageType() const {
	return m_imageType;
}

void GetUserImageByIndexParams::setImageType(ImageType newImageType) {
	m_imageType = newImageType;
}


const QString &GetUserImageByIndexParams::userId() const {
	return m_userId;
}

void GetUserImageByIndexParams::setUserId(QString newUserId) {
	m_userId = newUserId;
}


const bool &GetUserImageByIndexParams::addPlayedIndicator() const {
	return m_addPlayedIndicator.value();
}

void GetUserImageByIndexParams::setAddPlayedIndicator(bool newAddPlayedIndicator)  {
	m_addPlayedIndicator = newAddPlayedIndicator;
}

bool GetUserImageByIndexParams::addPlayedIndicatorNull() const {
	// Nullable: true
	// Type Nullable: false
	

	return !m_addPlayedIndicator.has_value();
}

void GetUserImageByIndexParams::setAddPlayedIndicatorNull() {
	m_addPlayedIndicator = std::nullopt;
}


const QString &GetUserImageByIndexParams::backgroundColor() const {
	return m_backgroundColor;
}

void GetUserImageByIndexParams::setBackgroundColor(QString newBackgroundColor)  {
	m_backgroundColor = newBackgroundColor;
}

bool GetUserImageByIndexParams::backgroundColorNull() const {
	// Nullable: true
	// Type Nullable: true
	

	return m_backgroundColor.isNull();
}

void GetUserImageByIndexParams::setBackgroundColorNull() {
	m_backgroundColor.clear();
}


const qint32 &GetUserImageByIndexParams::blur() const {
	return m_blur.value();
}

void GetUserImageByIndexParams::setBlur(qint32 newBlur)  {
	m_blur = newBlur;
}

bool GetUserImageByIndexParams::blurNull() const {
	// Nullable: true
	// Type Nullable: false
	

	return !m_blur.has_value();
}

void GetUserImageByIndexParams::setBlurNull() {
	m_blur = std::nullopt;
}


const bool &GetUserImageByIndexParams::cropWhitespace() const {
	return m_cropWhitespace.value();
}

void GetUserImageByIndexParams::setCropWhitespace(bool newCropWhitespace)  {
	m_cropWhitespace = newCropWhitespace;
}

bool GetUserImageByIndexParams::cropWhitespaceNull() const {
	// Nullable: true
	// Type Nullable: false
	

	return !m_cropWhitespace.has_value();
}

void GetUserImageByIndexParams::setCropWhitespaceNull() {
	m_cropWhitespace = std::nullopt;
}


const QString &GetUserImageByIndexParams::foregroundLayer() const {
	return m_foregroundLayer;
}

void GetUserImageByIndexParams::setForegroundLayer(QString newForegroundLayer)  {
	m_foregroundLayer = newForegroundLayer;
}

bool GetUserImageByIndexParams::foregroundLayerNull() const {
	// Nullable: true
	// Type Nullable: true
	

	return m_foregroundLayer.isNull();
}

void GetUserImageByIndexParams::setForegroundLayerNull() {
	m_foregroundLayer.clear();
}


const ImageFormat &GetUserImageByIndexParams::format() const {
	return m_format;
}

void GetUserImageByIndexParams::setFormat(ImageFormat newFormat)  {
	m_format = newFormat;
}

bool GetUserImageByIndexParams::formatNull() const {
	// Nullable: true
	// Type Nullable: true
	

	return m_format== ImageFormat::EnumNotSet;
}

void GetUserImageByIndexParams::setFormatNull() {
	m_format= ImageFormat::EnumNotSet;
}


const qint32 &GetUserImageByIndexParams::height() const {
	return m_height.value();
}

void GetUserImageByIndexParams::setHeight(qint32 newHeight)  {
	m_height = newHeight;
}

bool GetUserImageByIndexParams::heightNull() const {
	// Nullable: true
	// Type Nullable: false
	

	return !m_height.has_value();
}

void GetUserImageByIndexParams::setHeightNull() {
	m_height = std::nullopt;
}


const qint32 &GetUserImageByIndexParams::maxHeight() const {
	return m_maxHeight.value();
}

void GetUserImageByIndexParams::setMaxHeight(qint32 newMaxHeight)  {
	m_maxHeight = newMaxHeight;
}

bool GetUserImageByIndexParams::maxHeightNull() const {
	// Nullable: true
	// Type Nullable: false
	

	return !m_maxHeight.has_value();
}

void GetUserImageByIndexParams::setMaxHeightNull() {
	m_maxHeight = std::nullopt;
}


const qint32 &GetUserImageByIndexParams::maxWidth() const {
	return m_maxWidth.value();
}

void GetUserImageByIndexParams::setMaxWidth(qint32 newMaxWidth)  {
	m_maxWidth = newMaxWidth;
}

bool GetUserImageByIndexParams::maxWidthNull() const {
	// Nullable: true
	// Type Nullable: false
	

	return !m_maxWidth.has_value();
}

void GetUserImageByIndexParams::setMaxWidthNull() {
	m_maxWidth = std::nullopt;
}


const double &GetUserImageByIndexParams::percentPlayed() const {
	return m_percentPlayed.value();
}

void GetUserImageByIndexParams::setPercentPlayed(double newPercentPlayed)  {
	m_percentPlayed = newPercentPlayed;
}

bool GetUserImageByIndexParams::percentPlayedNull() const {
	// Nullable: true
	// Type Nullable: false
	

	return !m_percentPlayed.has_value();
}

void GetUserImageByIndexParams::setPercentPlayedNull() {
	m_percentPlayed = std::nullopt;
}


const qint32 &GetUserImageByIndexParams::quality() const {
	return m_quality.value();
}

void GetUserImageByIndexParams::setQuality(qint32 newQuality)  {
	m_quality = newQuality;
}

bool GetUserImageByIndexParams::qualityNull() const {
	// Nullable: true
	// Type Nullable: false
	

	return !m_quality.has_value();
}

void GetUserImageByIndexParams::setQualityNull() {
	m_quality = std::nullopt;
}


const QString &GetUserImageByIndexParams::tag() const {
	return m_tag;
}

void GetUserImageByIndexParams::setTag(QString newTag)  {
	m_tag = newTag;
}

bool GetUserImageByIndexParams::tagNull() const {
	// Nullable: true
	// Type Nullable: true
	

	return m_tag.isNull();
}

void GetUserImageByIndexParams::setTagNull() {
	m_tag.clear();
}


const qint32 &GetUserImageByIndexParams::unplayedCount() const {
	return m_unplayedCount.value();
}

void GetUserImageByIndexParams::setUnplayedCount(qint32 newUnplayedCount)  {
	m_unplayedCount = newUnplayedCount;
}

bool GetUserImageByIndexParams::unplayedCountNull() const {
	// Nullable: true
	// Type Nullable: false
	

	return !m_unplayedCount.has_value();
}

void GetUserImageByIndexParams::setUnplayedCountNull() {
	m_unplayedCount = std::nullopt;
}


const qint32 &GetUserImageByIndexParams::width() const {
	return m_width.value();
}

void GetUserImageByIndexParams::setWidth(qint32 newWidth)  {
	m_width = newWidth;
}

bool GetUserImageByIndexParams::widthNull() const {
	// Nullable: true
	// Type Nullable: false
	

	return !m_width.has_value();
}

void GetUserImageByIndexParams::setWidthNull() {
	m_width = std::nullopt;
}




// GetUserViewsParams

const QString &GetUserViewsParams::userId() const {
	return m_userId;
}

void GetUserViewsParams::setUserId(QString newUserId) {
	m_userId = newUserId;
}


const bool &GetUserViewsParams::includeExternalContent() const {
	return m_includeExternalContent.value();
}

void GetUserViewsParams::setIncludeExternalContent(bool newIncludeExternalContent)  {
	m_includeExternalContent = newIncludeExternalContent;
}

bool GetUserViewsParams::includeExternalContentNull() const {
	// Nullable: true
	// Type Nullable: false
	

	return !m_includeExternalContent.has_value();
}

void GetUserViewsParams::setIncludeExternalContentNull() {
	m_includeExternalContent = std::nullopt;
}


const bool &GetUserViewsParams::includeHidden() const {
	return m_includeHidden.value();
}

void GetUserViewsParams::setIncludeHidden(bool newIncludeHidden)  {
	m_includeHidden = newIncludeHidden;
}

bool GetUserViewsParams::includeHiddenNull() const {
	// Nullable: false
	// Type Nullable: false
	

	return !m_includeHidden.has_value();
}

void GetUserViewsParams::setIncludeHiddenNull() {
	m_includeHidden = std::nullopt;
}


const QStringList &GetUserViewsParams::presetViews() const {
	return m_presetViews;
}

void GetUserViewsParams::setPresetViews(QStringList newPresetViews)  {
	m_presetViews = newPresetViews;
}

bool GetUserViewsParams::presetViewsNull() const {
	// Nullable: true
	// Type Nullable: true
	

	return m_presetViews.size() == 0;
}

void GetUserViewsParams::setPresetViewsNull() {
	m_presetViews.clear();
}




// GetUsersParams

const bool &GetUsersParams::isDisabled() const {
	return m_isDisabled.value();
}

void GetUsersParams::setIsDisabled(bool newIsDisabled)  {
	m_isDisabled = newIsDisabled;
}

bool GetUsersParams::isDisabledNull() const {
	// Nullable: true
	// Type Nullable: false
	

	return !m_isDisabled.has_value();
}

void GetUsersParams::setIsDisabledNull() {
	m_isDisabled = std::nullopt;
}


const bool &GetUsersParams::isHidden() const {
	return m_isHidden.value();
}

void GetUsersParams::setIsHidden(bool newIsHidden)  {
	m_isHidden = newIsHidden;
}

bool GetUsersParams::isHiddenNull() const {
	// Nullable: true
	// Type Nullable: false
	

	return !m_isHidden.has_value();
}

void GetUsersParams::setIsHiddenNull() {
	m_isHidden = std::nullopt;
}




// GetUtcTimeParams



// GetVariantHlsAudioPlaylistParams

const QString &GetVariantHlsAudioPlaylistParams::itemId() const {
	return m_itemId;
}

void GetVariantHlsAudioPlaylistParams::setItemId(QString newItemId) {
	m_itemId = newItemId;
}


const bool &GetVariantHlsAudioPlaylistParams::allowAudioStreamCopy() const {
	return m_allowAudioStreamCopy.value();
}

void GetVariantHlsAudioPlaylistParams::setAllowAudioStreamCopy(bool newAllowAudioStreamCopy)  {
	m_allowAudioStreamCopy = newAllowAudioStreamCopy;
}

bool GetVariantHlsAudioPlaylistParams::allowAudioStreamCopyNull() const {
	// Nullable: true
	// Type Nullable: false
	

	return !m_allowAudioStreamCopy.has_value();
}

void GetVariantHlsAudioPlaylistParams::setAllowAudioStreamCopyNull() {
	m_allowAudioStreamCopy = std::nullopt;
}


const bool &GetVariantHlsAudioPlaylistParams::allowVideoStreamCopy() const {
	return m_allowVideoStreamCopy.value();
}

void GetVariantHlsAudioPlaylistParams::setAllowVideoStreamCopy(bool newAllowVideoStreamCopy)  {
	m_allowVideoStreamCopy = newAllowVideoStreamCopy;
}

bool GetVariantHlsAudioPlaylistParams::allowVideoStreamCopyNull() const {
	// Nullable: true
	// Type Nullable: false
	

	return !m_allowVideoStreamCopy.has_value();
}

void GetVariantHlsAudioPlaylistParams::setAllowVideoStreamCopyNull() {
	m_allowVideoStreamCopy = std::nullopt;
}


const qint32 &GetVariantHlsAudioPlaylistParams::audioBitRate() const {
	return m_audioBitRate.value();
}

void GetVariantHlsAudioPlaylistParams::setAudioBitRate(qint32 newAudioBitRate)  {
	m_audioBitRate = newAudioBitRate;
}

bool GetVariantHlsAudioPlaylistParams::audioBitRateNull() const {
	// Nullable: true
	// Type Nullable: false
	

	return !m_audioBitRate.has_value();
}

void GetVariantHlsAudioPlaylistParams::setAudioBitRateNull() {
	m_audioBitRate = std::nullopt;
}


const qint32 &GetVariantHlsAudioPlaylistParams::audioChannels() const {
	return m_audioChannels.value();
}

void GetVariantHlsAudioPlaylistParams::setAudioChannels(qint32 newAudioChannels)  {
	m_audioChannels = newAudioChannels;
}

bool GetVariantHlsAudioPlaylistParams::audioChannelsNull() const {
	// Nullable: true
	// Type Nullable: false
	

	return !m_audioChannels.has_value();
}

void GetVariantHlsAudioPlaylistParams::setAudioChannelsNull() {
	m_audioChannels = std::nullopt;
}


const QString &GetVariantHlsAudioPlaylistParams::audioCodec() const {
	return m_audioCodec;
}

void GetVariantHlsAudioPlaylistParams::setAudioCodec(QString newAudioCodec)  {
	m_audioCodec = newAudioCodec;
}

bool GetVariantHlsAudioPlaylistParams::audioCodecNull() const {
	// Nullable: true
	// Type Nullable: true
	

	return m_audioCodec.isNull();
}

void GetVariantHlsAudioPlaylistParams::setAudioCodecNull() {
	m_audioCodec.clear();
}


const qint32 &GetVariantHlsAudioPlaylistParams::audioSampleRate() const {
	return m_audioSampleRate.value();
}

void GetVariantHlsAudioPlaylistParams::setAudioSampleRate(qint32 newAudioSampleRate)  {
	m_audioSampleRate = newAudioSampleRate;
}

bool GetVariantHlsAudioPlaylistParams::audioSampleRateNull() const {
	// Nullable: true
	// Type Nullable: false
	

	return !m_audioSampleRate.has_value();
}

void GetVariantHlsAudioPlaylistParams::setAudioSampleRateNull() {
	m_audioSampleRate = std::nullopt;
}


const qint32 &GetVariantHlsAudioPlaylistParams::audioStreamIndex() const {
	return m_audioStreamIndex.value();
}

void GetVariantHlsAudioPlaylistParams::setAudioStreamIndex(qint32 newAudioStreamIndex)  {
	m_audioStreamIndex = newAudioStreamIndex;
}

bool GetVariantHlsAudioPlaylistParams::audioStreamIndexNull() const {
	// Nullable: true
	// Type Nullable: false
	

	return !m_audioStreamIndex.has_value();
}

void GetVariantHlsAudioPlaylistParams::setAudioStreamIndexNull() {
	m_audioStreamIndex = std::nullopt;
}


const bool &GetVariantHlsAudioPlaylistParams::breakOnNonKeyFrames() const {
	return m_breakOnNonKeyFrames.value();
}

void GetVariantHlsAudioPlaylistParams::setBreakOnNonKeyFrames(bool newBreakOnNonKeyFrames)  {
	m_breakOnNonKeyFrames = newBreakOnNonKeyFrames;
}

bool GetVariantHlsAudioPlaylistParams::breakOnNonKeyFramesNull() const {
	// Nullable: true
	// Type Nullable: false
	

	return !m_breakOnNonKeyFrames.has_value();
}

void GetVariantHlsAudioPlaylistParams::setBreakOnNonKeyFramesNull() {
	m_breakOnNonKeyFrames = std::nullopt;
}


const EncodingContext &GetVariantHlsAudioPlaylistParams::context() const {
	return m_context;
}

void GetVariantHlsAudioPlaylistParams::setContext(EncodingContext newContext)  {
	m_context = newContext;
}

bool GetVariantHlsAudioPlaylistParams::contextNull() const {
	// Nullable: true
	// Type Nullable: true
	

	return m_context== EncodingContext::EnumNotSet;
}

void GetVariantHlsAudioPlaylistParams::setContextNull() {
	m_context= EncodingContext::EnumNotSet;
}


const bool &GetVariantHlsAudioPlaylistParams::copyTimestamps() const {
	return m_copyTimestamps.value();
}

void GetVariantHlsAudioPlaylistParams::setCopyTimestamps(bool newCopyTimestamps)  {
	m_copyTimestamps = newCopyTimestamps;
}

bool GetVariantHlsAudioPlaylistParams::copyTimestampsNull() const {
	// Nullable: true
	// Type Nullable: false
	

	return !m_copyTimestamps.has_value();
}

void GetVariantHlsAudioPlaylistParams::setCopyTimestampsNull() {
	m_copyTimestamps = std::nullopt;
}


const qint32 &GetVariantHlsAudioPlaylistParams::cpuCoreLimit() const {
	return m_cpuCoreLimit.value();
}

void GetVariantHlsAudioPlaylistParams::setCpuCoreLimit(qint32 newCpuCoreLimit)  {
	m_cpuCoreLimit = newCpuCoreLimit;
}

bool GetVariantHlsAudioPlaylistParams::cpuCoreLimitNull() const {
	// Nullable: true
	// Type Nullable: false
	

	return !m_cpuCoreLimit.has_value();
}

void GetVariantHlsAudioPlaylistParams::setCpuCoreLimitNull() {
	m_cpuCoreLimit = std::nullopt;
}


const bool &GetVariantHlsAudioPlaylistParams::deInterlace() const {
	return m_deInterlace.value();
}

void GetVariantHlsAudioPlaylistParams::setDeInterlace(bool newDeInterlace)  {
	m_deInterlace = newDeInterlace;
}

bool GetVariantHlsAudioPlaylistParams::deInterlaceNull() const {
	// Nullable: true
	// Type Nullable: false
	

	return !m_deInterlace.has_value();
}

void GetVariantHlsAudioPlaylistParams::setDeInterlaceNull() {
	m_deInterlace = std::nullopt;
}


const QString &GetVariantHlsAudioPlaylistParams::deviceId() const {
	return m_deviceId;
}

void GetVariantHlsAudioPlaylistParams::setDeviceId(QString newDeviceId)  {
	m_deviceId = newDeviceId;
}

bool GetVariantHlsAudioPlaylistParams::deviceIdNull() const {
	// Nullable: true
	// Type Nullable: true
	

	return m_deviceId.isNull();
}

void GetVariantHlsAudioPlaylistParams::setDeviceIdNull() {
	m_deviceId.clear();
}


const QString &GetVariantHlsAudioPlaylistParams::deviceProfileId() const {
	return m_deviceProfileId;
}

void GetVariantHlsAudioPlaylistParams::setDeviceProfileId(QString newDeviceProfileId)  {
	m_deviceProfileId = newDeviceProfileId;
}

bool GetVariantHlsAudioPlaylistParams::deviceProfileIdNull() const {
	// Nullable: true
	// Type Nullable: true
	

	return m_deviceProfileId.isNull();
}

void GetVariantHlsAudioPlaylistParams::setDeviceProfileIdNull() {
	m_deviceProfileId.clear();
}


const bool &GetVariantHlsAudioPlaylistParams::enableAutoStreamCopy() const {
	return m_enableAutoStreamCopy.value();
}

void GetVariantHlsAudioPlaylistParams::setEnableAutoStreamCopy(bool newEnableAutoStreamCopy)  {
	m_enableAutoStreamCopy = newEnableAutoStreamCopy;
}

bool GetVariantHlsAudioPlaylistParams::enableAutoStreamCopyNull() const {
	// Nullable: true
	// Type Nullable: false
	

	return !m_enableAutoStreamCopy.has_value();
}

void GetVariantHlsAudioPlaylistParams::setEnableAutoStreamCopyNull() {
	m_enableAutoStreamCopy = std::nullopt;
}


const bool &GetVariantHlsAudioPlaylistParams::enableMpegtsM2TsMode() const {
	return m_enableMpegtsM2TsMode.value();
}

void GetVariantHlsAudioPlaylistParams::setEnableMpegtsM2TsMode(bool newEnableMpegtsM2TsMode)  {
	m_enableMpegtsM2TsMode = newEnableMpegtsM2TsMode;
}

bool GetVariantHlsAudioPlaylistParams::enableMpegtsM2TsModeNull() const {
	// Nullable: true
	// Type Nullable: false
	

	return !m_enableMpegtsM2TsMode.has_value();
}

void GetVariantHlsAudioPlaylistParams::setEnableMpegtsM2TsModeNull() {
	m_enableMpegtsM2TsMode = std::nullopt;
}


const float &GetVariantHlsAudioPlaylistParams::framerate() const {
	return m_framerate.value();
}

void GetVariantHlsAudioPlaylistParams::setFramerate(float newFramerate)  {
	m_framerate = newFramerate;
}

bool GetVariantHlsAudioPlaylistParams::framerateNull() const {
	// Nullable: true
	// Type Nullable: false
	

	return !m_framerate.has_value();
}

void GetVariantHlsAudioPlaylistParams::setFramerateNull() {
	m_framerate = std::nullopt;
}


const qint32 &GetVariantHlsAudioPlaylistParams::height() const {
	return m_height.value();
}

void GetVariantHlsAudioPlaylistParams::setHeight(qint32 newHeight)  {
	m_height = newHeight;
}

bool GetVariantHlsAudioPlaylistParams::heightNull() const {
	// Nullable: true
	// Type Nullable: false
	

	return !m_height.has_value();
}

void GetVariantHlsAudioPlaylistParams::setHeightNull() {
	m_height = std::nullopt;
}


const QString &GetVariantHlsAudioPlaylistParams::level() const {
	return m_level;
}

void GetVariantHlsAudioPlaylistParams::setLevel(QString newLevel)  {
	m_level = newLevel;
}

bool GetVariantHlsAudioPlaylistParams::levelNull() const {
	// Nullable: true
	// Type Nullable: true
	

	return m_level.isNull();
}

void GetVariantHlsAudioPlaylistParams::setLevelNull() {
	m_level.clear();
}


const QString &GetVariantHlsAudioPlaylistParams::liveStreamId() const {
	return m_liveStreamId;
}

void GetVariantHlsAudioPlaylistParams::setLiveStreamId(QString newLiveStreamId)  {
	m_liveStreamId = newLiveStreamId;
}

bool GetVariantHlsAudioPlaylistParams::liveStreamIdNull() const {
	// Nullable: true
	// Type Nullable: true
	

	return m_liveStreamId.isNull();
}

void GetVariantHlsAudioPlaylistParams::setLiveStreamIdNull() {
	m_liveStreamId.clear();
}


const qint32 &GetVariantHlsAudioPlaylistParams::maxAudioBitDepth() const {
	return m_maxAudioBitDepth.value();
}

void GetVariantHlsAudioPlaylistParams::setMaxAudioBitDepth(qint32 newMaxAudioBitDepth)  {
	m_maxAudioBitDepth = newMaxAudioBitDepth;
}

bool GetVariantHlsAudioPlaylistParams::maxAudioBitDepthNull() const {
	// Nullable: true
	// Type Nullable: false
	

	return !m_maxAudioBitDepth.has_value();
}

void GetVariantHlsAudioPlaylistParams::setMaxAudioBitDepthNull() {
	m_maxAudioBitDepth = std::nullopt;
}


const qint32 &GetVariantHlsAudioPlaylistParams::maxAudioChannels() const {
	return m_maxAudioChannels.value();
}

void GetVariantHlsAudioPlaylistParams::setMaxAudioChannels(qint32 newMaxAudioChannels)  {
	m_maxAudioChannels = newMaxAudioChannels;
}

bool GetVariantHlsAudioPlaylistParams::maxAudioChannelsNull() const {
	// Nullable: true
	// Type Nullable: false
	

	return !m_maxAudioChannels.has_value();
}

void GetVariantHlsAudioPlaylistParams::setMaxAudioChannelsNull() {
	m_maxAudioChannels = std::nullopt;
}


const float &GetVariantHlsAudioPlaylistParams::maxFramerate() const {
	return m_maxFramerate.value();
}

void GetVariantHlsAudioPlaylistParams::setMaxFramerate(float newMaxFramerate)  {
	m_maxFramerate = newMaxFramerate;
}

bool GetVariantHlsAudioPlaylistParams::maxFramerateNull() const {
	// Nullable: true
	// Type Nullable: false
	

	return !m_maxFramerate.has_value();
}

void GetVariantHlsAudioPlaylistParams::setMaxFramerateNull() {
	m_maxFramerate = std::nullopt;
}


const qint32 &GetVariantHlsAudioPlaylistParams::maxRefFrames() const {
	return m_maxRefFrames.value();
}

void GetVariantHlsAudioPlaylistParams::setMaxRefFrames(qint32 newMaxRefFrames)  {
	m_maxRefFrames = newMaxRefFrames;
}

bool GetVariantHlsAudioPlaylistParams::maxRefFramesNull() const {
	// Nullable: true
	// Type Nullable: false
	

	return !m_maxRefFrames.has_value();
}

void GetVariantHlsAudioPlaylistParams::setMaxRefFramesNull() {
	m_maxRefFrames = std::nullopt;
}


const qint32 &GetVariantHlsAudioPlaylistParams::maxStreamingBitrate() const {
	return m_maxStreamingBitrate.value();
}

void GetVariantHlsAudioPlaylistParams::setMaxStreamingBitrate(qint32 newMaxStreamingBitrate)  {
	m_maxStreamingBitrate = newMaxStreamingBitrate;
}

bool GetVariantHlsAudioPlaylistParams::maxStreamingBitrateNull() const {
	// Nullable: true
	// Type Nullable: false
	

	return !m_maxStreamingBitrate.has_value();
}

void GetVariantHlsAudioPlaylistParams::setMaxStreamingBitrateNull() {
	m_maxStreamingBitrate = std::nullopt;
}


const qint32 &GetVariantHlsAudioPlaylistParams::maxVideoBitDepth() const {
	return m_maxVideoBitDepth.value();
}

void GetVariantHlsAudioPlaylistParams::setMaxVideoBitDepth(qint32 newMaxVideoBitDepth)  {
	m_maxVideoBitDepth = newMaxVideoBitDepth;
}

bool GetVariantHlsAudioPlaylistParams::maxVideoBitDepthNull() const {
	// Nullable: true
	// Type Nullable: false
	

	return !m_maxVideoBitDepth.has_value();
}

void GetVariantHlsAudioPlaylistParams::setMaxVideoBitDepthNull() {
	m_maxVideoBitDepth = std::nullopt;
}


const QString &GetVariantHlsAudioPlaylistParams::mediaSourceId() const {
	return m_mediaSourceId;
}

void GetVariantHlsAudioPlaylistParams::setMediaSourceId(QString newMediaSourceId)  {
	m_mediaSourceId = newMediaSourceId;
}

bool GetVariantHlsAudioPlaylistParams::mediaSourceIdNull() const {
	// Nullable: true
	// Type Nullable: true
	

	return m_mediaSourceId.isNull();
}

void GetVariantHlsAudioPlaylistParams::setMediaSourceIdNull() {
	m_mediaSourceId.clear();
}


const qint32 &GetVariantHlsAudioPlaylistParams::minSegments() const {
	return m_minSegments.value();
}

void GetVariantHlsAudioPlaylistParams::setMinSegments(qint32 newMinSegments)  {
	m_minSegments = newMinSegments;
}

bool GetVariantHlsAudioPlaylistParams::minSegmentsNull() const {
	// Nullable: true
	// Type Nullable: false
	

	return !m_minSegments.has_value();
}

void GetVariantHlsAudioPlaylistParams::setMinSegmentsNull() {
	m_minSegments = std::nullopt;
}


const QString &GetVariantHlsAudioPlaylistParams::params() const {
	return m_params;
}

void GetVariantHlsAudioPlaylistParams::setParams(QString newParams)  {
	m_params = newParams;
}

bool GetVariantHlsAudioPlaylistParams::paramsNull() const {
	// Nullable: true
	// Type Nullable: true
	

	return m_params.isNull();
}

void GetVariantHlsAudioPlaylistParams::setParamsNull() {
	m_params.clear();
}


const QString &GetVariantHlsAudioPlaylistParams::playSessionId() const {
	return m_playSessionId;
}

void GetVariantHlsAudioPlaylistParams::setPlaySessionId(QString newPlaySessionId)  {
	m_playSessionId = newPlaySessionId;
}

bool GetVariantHlsAudioPlaylistParams::playSessionIdNull() const {
	// Nullable: true
	// Type Nullable: true
	

	return m_playSessionId.isNull();
}

void GetVariantHlsAudioPlaylistParams::setPlaySessionIdNull() {
	m_playSessionId.clear();
}


const QString &GetVariantHlsAudioPlaylistParams::profile() const {
	return m_profile;
}

void GetVariantHlsAudioPlaylistParams::setProfile(QString newProfile)  {
	m_profile = newProfile;
}

bool GetVariantHlsAudioPlaylistParams::profileNull() const {
	// Nullable: true
	// Type Nullable: true
	

	return m_profile.isNull();
}

void GetVariantHlsAudioPlaylistParams::setProfileNull() {
	m_profile.clear();
}


const bool &GetVariantHlsAudioPlaylistParams::requireAvc() const {
	return m_requireAvc.value();
}

void GetVariantHlsAudioPlaylistParams::setRequireAvc(bool newRequireAvc)  {
	m_requireAvc = newRequireAvc;
}

bool GetVariantHlsAudioPlaylistParams::requireAvcNull() const {
	// Nullable: true
	// Type Nullable: false
	

	return !m_requireAvc.has_value();
}

void GetVariantHlsAudioPlaylistParams::setRequireAvcNull() {
	m_requireAvc = std::nullopt;
}


const bool &GetVariantHlsAudioPlaylistParams::requireNonAnamorphic() const {
	return m_requireNonAnamorphic.value();
}

void GetVariantHlsAudioPlaylistParams::setRequireNonAnamorphic(bool newRequireNonAnamorphic)  {
	m_requireNonAnamorphic = newRequireNonAnamorphic;
}

bool GetVariantHlsAudioPlaylistParams::requireNonAnamorphicNull() const {
	// Nullable: true
	// Type Nullable: false
	

	return !m_requireNonAnamorphic.has_value();
}

void GetVariantHlsAudioPlaylistParams::setRequireNonAnamorphicNull() {
	m_requireNonAnamorphic = std::nullopt;
}


const QString &GetVariantHlsAudioPlaylistParams::segmentContainer() const {
	return m_segmentContainer;
}

void GetVariantHlsAudioPlaylistParams::setSegmentContainer(QString newSegmentContainer)  {
	m_segmentContainer = newSegmentContainer;
}

bool GetVariantHlsAudioPlaylistParams::segmentContainerNull() const {
	// Nullable: true
	// Type Nullable: true
	

	return m_segmentContainer.isNull();
}

void GetVariantHlsAudioPlaylistParams::setSegmentContainerNull() {
	m_segmentContainer.clear();
}


const qint32 &GetVariantHlsAudioPlaylistParams::segmentLength() const {
	return m_segmentLength.value();
}

void GetVariantHlsAudioPlaylistParams::setSegmentLength(qint32 newSegmentLength)  {
	m_segmentLength = newSegmentLength;
}

bool GetVariantHlsAudioPlaylistParams::segmentLengthNull() const {
	// Nullable: true
	// Type Nullable: false
	

	return !m_segmentLength.has_value();
}

void GetVariantHlsAudioPlaylistParams::setSegmentLengthNull() {
	m_segmentLength = std::nullopt;
}


const qint64 &GetVariantHlsAudioPlaylistParams::startTimeTicks() const {
	return m_startTimeTicks.value();
}

void GetVariantHlsAudioPlaylistParams::setStartTimeTicks(qint64 newStartTimeTicks)  {
	m_startTimeTicks = newStartTimeTicks;
}

bool GetVariantHlsAudioPlaylistParams::startTimeTicksNull() const {
	// Nullable: true
	// Type Nullable: false
	

	return !m_startTimeTicks.has_value();
}

void GetVariantHlsAudioPlaylistParams::setStartTimeTicksNull() {
	m_startTimeTicks = std::nullopt;
}


const bool &GetVariantHlsAudioPlaylistParams::staticStreaming() const {
	return m_staticStreaming.value();
}

void GetVariantHlsAudioPlaylistParams::setStaticStreaming(bool newStaticStreaming)  {
	m_staticStreaming = newStaticStreaming;
}

bool GetVariantHlsAudioPlaylistParams::staticStreamingNull() const {
	// Nullable: true
	// Type Nullable: false
	

	return !m_staticStreaming.has_value();
}

void GetVariantHlsAudioPlaylistParams::setStaticStreamingNull() {
	m_staticStreaming = std::nullopt;
}


const QJsonObject &GetVariantHlsAudioPlaylistParams::streamOptions() const {
	return m_streamOptions;
}

void GetVariantHlsAudioPlaylistParams::setStreamOptions(QJsonObject newStreamOptions)  {
	m_streamOptions = newStreamOptions;
}

bool GetVariantHlsAudioPlaylistParams::streamOptionsNull() const {
	// Nullable: true
	// Type Nullable: true
	

	return m_streamOptions.isEmpty();
}

void GetVariantHlsAudioPlaylistParams::setStreamOptionsNull() {
	m_streamOptions= QJsonObject();
}


const QString &GetVariantHlsAudioPlaylistParams::subtitleCodec() const {
	return m_subtitleCodec;
}

void GetVariantHlsAudioPlaylistParams::setSubtitleCodec(QString newSubtitleCodec)  {
	m_subtitleCodec = newSubtitleCodec;
}

bool GetVariantHlsAudioPlaylistParams::subtitleCodecNull() const {
	// Nullable: true
	// Type Nullable: true
	

	return m_subtitleCodec.isNull();
}

void GetVariantHlsAudioPlaylistParams::setSubtitleCodecNull() {
	m_subtitleCodec.clear();
}


const SubtitleDeliveryMethod &GetVariantHlsAudioPlaylistParams::subtitleMethod() const {
	return m_subtitleMethod;
}

void GetVariantHlsAudioPlaylistParams::setSubtitleMethod(SubtitleDeliveryMethod newSubtitleMethod)  {
	m_subtitleMethod = newSubtitleMethod;
}

bool GetVariantHlsAudioPlaylistParams::subtitleMethodNull() const {
	// Nullable: true
	// Type Nullable: true
	

	return m_subtitleMethod== SubtitleDeliveryMethod::EnumNotSet;
}

void GetVariantHlsAudioPlaylistParams::setSubtitleMethodNull() {
	m_subtitleMethod= SubtitleDeliveryMethod::EnumNotSet;
}


const qint32 &GetVariantHlsAudioPlaylistParams::subtitleStreamIndex() const {
	return m_subtitleStreamIndex.value();
}

void GetVariantHlsAudioPlaylistParams::setSubtitleStreamIndex(qint32 newSubtitleStreamIndex)  {
	m_subtitleStreamIndex = newSubtitleStreamIndex;
}

bool GetVariantHlsAudioPlaylistParams::subtitleStreamIndexNull() const {
	// Nullable: true
	// Type Nullable: false
	

	return !m_subtitleStreamIndex.has_value();
}

void GetVariantHlsAudioPlaylistParams::setSubtitleStreamIndexNull() {
	m_subtitleStreamIndex = std::nullopt;
}


const QString &GetVariantHlsAudioPlaylistParams::tag() const {
	return m_tag;
}

void GetVariantHlsAudioPlaylistParams::setTag(QString newTag)  {
	m_tag = newTag;
}

bool GetVariantHlsAudioPlaylistParams::tagNull() const {
	// Nullable: true
	// Type Nullable: true
	

	return m_tag.isNull();
}

void GetVariantHlsAudioPlaylistParams::setTagNull() {
	m_tag.clear();
}


const QString &GetVariantHlsAudioPlaylistParams::transcodeReasons() const {
	return m_transcodeReasons;
}

void GetVariantHlsAudioPlaylistParams::setTranscodeReasons(QString newTranscodeReasons)  {
	m_transcodeReasons = newTranscodeReasons;
}

bool GetVariantHlsAudioPlaylistParams::transcodeReasonsNull() const {
	// Nullable: true
	// Type Nullable: true
	

	return m_transcodeReasons.isNull();
}

void GetVariantHlsAudioPlaylistParams::setTranscodeReasonsNull() {
	m_transcodeReasons.clear();
}


const qint32 &GetVariantHlsAudioPlaylistParams::transcodingMaxAudioChannels() const {
	return m_transcodingMaxAudioChannels.value();
}

void GetVariantHlsAudioPlaylistParams::setTranscodingMaxAudioChannels(qint32 newTranscodingMaxAudioChannels)  {
	m_transcodingMaxAudioChannels = newTranscodingMaxAudioChannels;
}

bool GetVariantHlsAudioPlaylistParams::transcodingMaxAudioChannelsNull() const {
	// Nullable: true
	// Type Nullable: false
	

	return !m_transcodingMaxAudioChannels.has_value();
}

void GetVariantHlsAudioPlaylistParams::setTranscodingMaxAudioChannelsNull() {
	m_transcodingMaxAudioChannels = std::nullopt;
}


const qint32 &GetVariantHlsAudioPlaylistParams::videoBitRate() const {
	return m_videoBitRate.value();
}

void GetVariantHlsAudioPlaylistParams::setVideoBitRate(qint32 newVideoBitRate)  {
	m_videoBitRate = newVideoBitRate;
}

bool GetVariantHlsAudioPlaylistParams::videoBitRateNull() const {
	// Nullable: true
	// Type Nullable: false
	

	return !m_videoBitRate.has_value();
}

void GetVariantHlsAudioPlaylistParams::setVideoBitRateNull() {
	m_videoBitRate = std::nullopt;
}


const QString &GetVariantHlsAudioPlaylistParams::videoCodec() const {
	return m_videoCodec;
}

void GetVariantHlsAudioPlaylistParams::setVideoCodec(QString newVideoCodec)  {
	m_videoCodec = newVideoCodec;
}

bool GetVariantHlsAudioPlaylistParams::videoCodecNull() const {
	// Nullable: true
	// Type Nullable: true
	

	return m_videoCodec.isNull();
}

void GetVariantHlsAudioPlaylistParams::setVideoCodecNull() {
	m_videoCodec.clear();
}


const qint32 &GetVariantHlsAudioPlaylistParams::videoStreamIndex() const {
	return m_videoStreamIndex.value();
}

void GetVariantHlsAudioPlaylistParams::setVideoStreamIndex(qint32 newVideoStreamIndex)  {
	m_videoStreamIndex = newVideoStreamIndex;
}

bool GetVariantHlsAudioPlaylistParams::videoStreamIndexNull() const {
	// Nullable: true
	// Type Nullable: false
	

	return !m_videoStreamIndex.has_value();
}

void GetVariantHlsAudioPlaylistParams::setVideoStreamIndexNull() {
	m_videoStreamIndex = std::nullopt;
}


const qint32 &GetVariantHlsAudioPlaylistParams::width() const {
	return m_width.value();
}

void GetVariantHlsAudioPlaylistParams::setWidth(qint32 newWidth)  {
	m_width = newWidth;
}

bool GetVariantHlsAudioPlaylistParams::widthNull() const {
	// Nullable: true
	// Type Nullable: false
	

	return !m_width.has_value();
}

void GetVariantHlsAudioPlaylistParams::setWidthNull() {
	m_width = std::nullopt;
}




// GetVariantHlsVideoPlaylistParams

const QString &GetVariantHlsVideoPlaylistParams::itemId() const {
	return m_itemId;
}

void GetVariantHlsVideoPlaylistParams::setItemId(QString newItemId) {
	m_itemId = newItemId;
}


const bool &GetVariantHlsVideoPlaylistParams::allowAudioStreamCopy() const {
	return m_allowAudioStreamCopy.value();
}

void GetVariantHlsVideoPlaylistParams::setAllowAudioStreamCopy(bool newAllowAudioStreamCopy)  {
	m_allowAudioStreamCopy = newAllowAudioStreamCopy;
}

bool GetVariantHlsVideoPlaylistParams::allowAudioStreamCopyNull() const {
	// Nullable: true
	// Type Nullable: false
	

	return !m_allowAudioStreamCopy.has_value();
}

void GetVariantHlsVideoPlaylistParams::setAllowAudioStreamCopyNull() {
	m_allowAudioStreamCopy = std::nullopt;
}


const bool &GetVariantHlsVideoPlaylistParams::allowVideoStreamCopy() const {
	return m_allowVideoStreamCopy.value();
}

void GetVariantHlsVideoPlaylistParams::setAllowVideoStreamCopy(bool newAllowVideoStreamCopy)  {
	m_allowVideoStreamCopy = newAllowVideoStreamCopy;
}

bool GetVariantHlsVideoPlaylistParams::allowVideoStreamCopyNull() const {
	// Nullable: true
	// Type Nullable: false
	

	return !m_allowVideoStreamCopy.has_value();
}

void GetVariantHlsVideoPlaylistParams::setAllowVideoStreamCopyNull() {
	m_allowVideoStreamCopy = std::nullopt;
}


const qint32 &GetVariantHlsVideoPlaylistParams::audioBitRate() const {
	return m_audioBitRate.value();
}

void GetVariantHlsVideoPlaylistParams::setAudioBitRate(qint32 newAudioBitRate)  {
	m_audioBitRate = newAudioBitRate;
}

bool GetVariantHlsVideoPlaylistParams::audioBitRateNull() const {
	// Nullable: true
	// Type Nullable: false
	

	return !m_audioBitRate.has_value();
}

void GetVariantHlsVideoPlaylistParams::setAudioBitRateNull() {
	m_audioBitRate = std::nullopt;
}


const qint32 &GetVariantHlsVideoPlaylistParams::audioChannels() const {
	return m_audioChannels.value();
}

void GetVariantHlsVideoPlaylistParams::setAudioChannels(qint32 newAudioChannels)  {
	m_audioChannels = newAudioChannels;
}

bool GetVariantHlsVideoPlaylistParams::audioChannelsNull() const {
	// Nullable: true
	// Type Nullable: false
	

	return !m_audioChannels.has_value();
}

void GetVariantHlsVideoPlaylistParams::setAudioChannelsNull() {
	m_audioChannels = std::nullopt;
}


const QString &GetVariantHlsVideoPlaylistParams::audioCodec() const {
	return m_audioCodec;
}

void GetVariantHlsVideoPlaylistParams::setAudioCodec(QString newAudioCodec)  {
	m_audioCodec = newAudioCodec;
}

bool GetVariantHlsVideoPlaylistParams::audioCodecNull() const {
	// Nullable: true
	// Type Nullable: true
	

	return m_audioCodec.isNull();
}

void GetVariantHlsVideoPlaylistParams::setAudioCodecNull() {
	m_audioCodec.clear();
}


const qint32 &GetVariantHlsVideoPlaylistParams::audioSampleRate() const {
	return m_audioSampleRate.value();
}

void GetVariantHlsVideoPlaylistParams::setAudioSampleRate(qint32 newAudioSampleRate)  {
	m_audioSampleRate = newAudioSampleRate;
}

bool GetVariantHlsVideoPlaylistParams::audioSampleRateNull() const {
	// Nullable: true
	// Type Nullable: false
	

	return !m_audioSampleRate.has_value();
}

void GetVariantHlsVideoPlaylistParams::setAudioSampleRateNull() {
	m_audioSampleRate = std::nullopt;
}


const qint32 &GetVariantHlsVideoPlaylistParams::audioStreamIndex() const {
	return m_audioStreamIndex.value();
}

void GetVariantHlsVideoPlaylistParams::setAudioStreamIndex(qint32 newAudioStreamIndex)  {
	m_audioStreamIndex = newAudioStreamIndex;
}

bool GetVariantHlsVideoPlaylistParams::audioStreamIndexNull() const {
	// Nullable: true
	// Type Nullable: false
	

	return !m_audioStreamIndex.has_value();
}

void GetVariantHlsVideoPlaylistParams::setAudioStreamIndexNull() {
	m_audioStreamIndex = std::nullopt;
}


const bool &GetVariantHlsVideoPlaylistParams::breakOnNonKeyFrames() const {
	return m_breakOnNonKeyFrames.value();
}

void GetVariantHlsVideoPlaylistParams::setBreakOnNonKeyFrames(bool newBreakOnNonKeyFrames)  {
	m_breakOnNonKeyFrames = newBreakOnNonKeyFrames;
}

bool GetVariantHlsVideoPlaylistParams::breakOnNonKeyFramesNull() const {
	// Nullable: true
	// Type Nullable: false
	

	return !m_breakOnNonKeyFrames.has_value();
}

void GetVariantHlsVideoPlaylistParams::setBreakOnNonKeyFramesNull() {
	m_breakOnNonKeyFrames = std::nullopt;
}


const EncodingContext &GetVariantHlsVideoPlaylistParams::context() const {
	return m_context;
}

void GetVariantHlsVideoPlaylistParams::setContext(EncodingContext newContext)  {
	m_context = newContext;
}

bool GetVariantHlsVideoPlaylistParams::contextNull() const {
	// Nullable: true
	// Type Nullable: true
	

	return m_context== EncodingContext::EnumNotSet;
}

void GetVariantHlsVideoPlaylistParams::setContextNull() {
	m_context= EncodingContext::EnumNotSet;
}


const bool &GetVariantHlsVideoPlaylistParams::copyTimestamps() const {
	return m_copyTimestamps.value();
}

void GetVariantHlsVideoPlaylistParams::setCopyTimestamps(bool newCopyTimestamps)  {
	m_copyTimestamps = newCopyTimestamps;
}

bool GetVariantHlsVideoPlaylistParams::copyTimestampsNull() const {
	// Nullable: true
	// Type Nullable: false
	

	return !m_copyTimestamps.has_value();
}

void GetVariantHlsVideoPlaylistParams::setCopyTimestampsNull() {
	m_copyTimestamps = std::nullopt;
}


const qint32 &GetVariantHlsVideoPlaylistParams::cpuCoreLimit() const {
	return m_cpuCoreLimit.value();
}

void GetVariantHlsVideoPlaylistParams::setCpuCoreLimit(qint32 newCpuCoreLimit)  {
	m_cpuCoreLimit = newCpuCoreLimit;
}

bool GetVariantHlsVideoPlaylistParams::cpuCoreLimitNull() const {
	// Nullable: true
	// Type Nullable: false
	

	return !m_cpuCoreLimit.has_value();
}

void GetVariantHlsVideoPlaylistParams::setCpuCoreLimitNull() {
	m_cpuCoreLimit = std::nullopt;
}


const bool &GetVariantHlsVideoPlaylistParams::deInterlace() const {
	return m_deInterlace.value();
}

void GetVariantHlsVideoPlaylistParams::setDeInterlace(bool newDeInterlace)  {
	m_deInterlace = newDeInterlace;
}

bool GetVariantHlsVideoPlaylistParams::deInterlaceNull() const {
	// Nullable: true
	// Type Nullable: false
	

	return !m_deInterlace.has_value();
}

void GetVariantHlsVideoPlaylistParams::setDeInterlaceNull() {
	m_deInterlace = std::nullopt;
}


const QString &GetVariantHlsVideoPlaylistParams::deviceId() const {
	return m_deviceId;
}

void GetVariantHlsVideoPlaylistParams::setDeviceId(QString newDeviceId)  {
	m_deviceId = newDeviceId;
}

bool GetVariantHlsVideoPlaylistParams::deviceIdNull() const {
	// Nullable: true
	// Type Nullable: true
	

	return m_deviceId.isNull();
}

void GetVariantHlsVideoPlaylistParams::setDeviceIdNull() {
	m_deviceId.clear();
}


const QString &GetVariantHlsVideoPlaylistParams::deviceProfileId() const {
	return m_deviceProfileId;
}

void GetVariantHlsVideoPlaylistParams::setDeviceProfileId(QString newDeviceProfileId)  {
	m_deviceProfileId = newDeviceProfileId;
}

bool GetVariantHlsVideoPlaylistParams::deviceProfileIdNull() const {
	// Nullable: true
	// Type Nullable: true
	

	return m_deviceProfileId.isNull();
}

void GetVariantHlsVideoPlaylistParams::setDeviceProfileIdNull() {
	m_deviceProfileId.clear();
}


const bool &GetVariantHlsVideoPlaylistParams::enableAutoStreamCopy() const {
	return m_enableAutoStreamCopy.value();
}

void GetVariantHlsVideoPlaylistParams::setEnableAutoStreamCopy(bool newEnableAutoStreamCopy)  {
	m_enableAutoStreamCopy = newEnableAutoStreamCopy;
}

bool GetVariantHlsVideoPlaylistParams::enableAutoStreamCopyNull() const {
	// Nullable: true
	// Type Nullable: false
	

	return !m_enableAutoStreamCopy.has_value();
}

void GetVariantHlsVideoPlaylistParams::setEnableAutoStreamCopyNull() {
	m_enableAutoStreamCopy = std::nullopt;
}


const bool &GetVariantHlsVideoPlaylistParams::enableMpegtsM2TsMode() const {
	return m_enableMpegtsM2TsMode.value();
}

void GetVariantHlsVideoPlaylistParams::setEnableMpegtsM2TsMode(bool newEnableMpegtsM2TsMode)  {
	m_enableMpegtsM2TsMode = newEnableMpegtsM2TsMode;
}

bool GetVariantHlsVideoPlaylistParams::enableMpegtsM2TsModeNull() const {
	// Nullable: true
	// Type Nullable: false
	

	return !m_enableMpegtsM2TsMode.has_value();
}

void GetVariantHlsVideoPlaylistParams::setEnableMpegtsM2TsModeNull() {
	m_enableMpegtsM2TsMode = std::nullopt;
}


const float &GetVariantHlsVideoPlaylistParams::framerate() const {
	return m_framerate.value();
}

void GetVariantHlsVideoPlaylistParams::setFramerate(float newFramerate)  {
	m_framerate = newFramerate;
}

bool GetVariantHlsVideoPlaylistParams::framerateNull() const {
	// Nullable: true
	// Type Nullable: false
	

	return !m_framerate.has_value();
}

void GetVariantHlsVideoPlaylistParams::setFramerateNull() {
	m_framerate = std::nullopt;
}


const qint32 &GetVariantHlsVideoPlaylistParams::height() const {
	return m_height.value();
}

void GetVariantHlsVideoPlaylistParams::setHeight(qint32 newHeight)  {
	m_height = newHeight;
}

bool GetVariantHlsVideoPlaylistParams::heightNull() const {
	// Nullable: true
	// Type Nullable: false
	

	return !m_height.has_value();
}

void GetVariantHlsVideoPlaylistParams::setHeightNull() {
	m_height = std::nullopt;
}


const QString &GetVariantHlsVideoPlaylistParams::level() const {
	return m_level;
}

void GetVariantHlsVideoPlaylistParams::setLevel(QString newLevel)  {
	m_level = newLevel;
}

bool GetVariantHlsVideoPlaylistParams::levelNull() const {
	// Nullable: true
	// Type Nullable: true
	

	return m_level.isNull();
}

void GetVariantHlsVideoPlaylistParams::setLevelNull() {
	m_level.clear();
}


const QString &GetVariantHlsVideoPlaylistParams::liveStreamId() const {
	return m_liveStreamId;
}

void GetVariantHlsVideoPlaylistParams::setLiveStreamId(QString newLiveStreamId)  {
	m_liveStreamId = newLiveStreamId;
}

bool GetVariantHlsVideoPlaylistParams::liveStreamIdNull() const {
	// Nullable: true
	// Type Nullable: true
	

	return m_liveStreamId.isNull();
}

void GetVariantHlsVideoPlaylistParams::setLiveStreamIdNull() {
	m_liveStreamId.clear();
}


const qint32 &GetVariantHlsVideoPlaylistParams::maxAudioBitDepth() const {
	return m_maxAudioBitDepth.value();
}

void GetVariantHlsVideoPlaylistParams::setMaxAudioBitDepth(qint32 newMaxAudioBitDepth)  {
	m_maxAudioBitDepth = newMaxAudioBitDepth;
}

bool GetVariantHlsVideoPlaylistParams::maxAudioBitDepthNull() const {
	// Nullable: true
	// Type Nullable: false
	

	return !m_maxAudioBitDepth.has_value();
}

void GetVariantHlsVideoPlaylistParams::setMaxAudioBitDepthNull() {
	m_maxAudioBitDepth = std::nullopt;
}


const qint32 &GetVariantHlsVideoPlaylistParams::maxAudioChannels() const {
	return m_maxAudioChannels.value();
}

void GetVariantHlsVideoPlaylistParams::setMaxAudioChannels(qint32 newMaxAudioChannels)  {
	m_maxAudioChannels = newMaxAudioChannels;
}

bool GetVariantHlsVideoPlaylistParams::maxAudioChannelsNull() const {
	// Nullable: true
	// Type Nullable: false
	

	return !m_maxAudioChannels.has_value();
}

void GetVariantHlsVideoPlaylistParams::setMaxAudioChannelsNull() {
	m_maxAudioChannels = std::nullopt;
}


const float &GetVariantHlsVideoPlaylistParams::maxFramerate() const {
	return m_maxFramerate.value();
}

void GetVariantHlsVideoPlaylistParams::setMaxFramerate(float newMaxFramerate)  {
	m_maxFramerate = newMaxFramerate;
}

bool GetVariantHlsVideoPlaylistParams::maxFramerateNull() const {
	// Nullable: true
	// Type Nullable: false
	

	return !m_maxFramerate.has_value();
}

void GetVariantHlsVideoPlaylistParams::setMaxFramerateNull() {
	m_maxFramerate = std::nullopt;
}


const qint32 &GetVariantHlsVideoPlaylistParams::maxRefFrames() const {
	return m_maxRefFrames.value();
}

void GetVariantHlsVideoPlaylistParams::setMaxRefFrames(qint32 newMaxRefFrames)  {
	m_maxRefFrames = newMaxRefFrames;
}

bool GetVariantHlsVideoPlaylistParams::maxRefFramesNull() const {
	// Nullable: true
	// Type Nullable: false
	

	return !m_maxRefFrames.has_value();
}

void GetVariantHlsVideoPlaylistParams::setMaxRefFramesNull() {
	m_maxRefFrames = std::nullopt;
}


const qint32 &GetVariantHlsVideoPlaylistParams::maxVideoBitDepth() const {
	return m_maxVideoBitDepth.value();
}

void GetVariantHlsVideoPlaylistParams::setMaxVideoBitDepth(qint32 newMaxVideoBitDepth)  {
	m_maxVideoBitDepth = newMaxVideoBitDepth;
}

bool GetVariantHlsVideoPlaylistParams::maxVideoBitDepthNull() const {
	// Nullable: true
	// Type Nullable: false
	

	return !m_maxVideoBitDepth.has_value();
}

void GetVariantHlsVideoPlaylistParams::setMaxVideoBitDepthNull() {
	m_maxVideoBitDepth = std::nullopt;
}


const QString &GetVariantHlsVideoPlaylistParams::mediaSourceId() const {
	return m_mediaSourceId;
}

void GetVariantHlsVideoPlaylistParams::setMediaSourceId(QString newMediaSourceId)  {
	m_mediaSourceId = newMediaSourceId;
}

bool GetVariantHlsVideoPlaylistParams::mediaSourceIdNull() const {
	// Nullable: true
	// Type Nullable: true
	

	return m_mediaSourceId.isNull();
}

void GetVariantHlsVideoPlaylistParams::setMediaSourceIdNull() {
	m_mediaSourceId.clear();
}


const qint32 &GetVariantHlsVideoPlaylistParams::minSegments() const {
	return m_minSegments.value();
}

void GetVariantHlsVideoPlaylistParams::setMinSegments(qint32 newMinSegments)  {
	m_minSegments = newMinSegments;
}

bool GetVariantHlsVideoPlaylistParams::minSegmentsNull() const {
	// Nullable: true
	// Type Nullable: false
	

	return !m_minSegments.has_value();
}

void GetVariantHlsVideoPlaylistParams::setMinSegmentsNull() {
	m_minSegments = std::nullopt;
}


const QString &GetVariantHlsVideoPlaylistParams::params() const {
	return m_params;
}

void GetVariantHlsVideoPlaylistParams::setParams(QString newParams)  {
	m_params = newParams;
}

bool GetVariantHlsVideoPlaylistParams::paramsNull() const {
	// Nullable: true
	// Type Nullable: true
	

	return m_params.isNull();
}

void GetVariantHlsVideoPlaylistParams::setParamsNull() {
	m_params.clear();
}


const QString &GetVariantHlsVideoPlaylistParams::playSessionId() const {
	return m_playSessionId;
}

void GetVariantHlsVideoPlaylistParams::setPlaySessionId(QString newPlaySessionId)  {
	m_playSessionId = newPlaySessionId;
}

bool GetVariantHlsVideoPlaylistParams::playSessionIdNull() const {
	// Nullable: true
	// Type Nullable: true
	

	return m_playSessionId.isNull();
}

void GetVariantHlsVideoPlaylistParams::setPlaySessionIdNull() {
	m_playSessionId.clear();
}


const QString &GetVariantHlsVideoPlaylistParams::profile() const {
	return m_profile;
}

void GetVariantHlsVideoPlaylistParams::setProfile(QString newProfile)  {
	m_profile = newProfile;
}

bool GetVariantHlsVideoPlaylistParams::profileNull() const {
	// Nullable: true
	// Type Nullable: true
	

	return m_profile.isNull();
}

void GetVariantHlsVideoPlaylistParams::setProfileNull() {
	m_profile.clear();
}


const bool &GetVariantHlsVideoPlaylistParams::requireAvc() const {
	return m_requireAvc.value();
}

void GetVariantHlsVideoPlaylistParams::setRequireAvc(bool newRequireAvc)  {
	m_requireAvc = newRequireAvc;
}

bool GetVariantHlsVideoPlaylistParams::requireAvcNull() const {
	// Nullable: true
	// Type Nullable: false
	

	return !m_requireAvc.has_value();
}

void GetVariantHlsVideoPlaylistParams::setRequireAvcNull() {
	m_requireAvc = std::nullopt;
}


const bool &GetVariantHlsVideoPlaylistParams::requireNonAnamorphic() const {
	return m_requireNonAnamorphic.value();
}

void GetVariantHlsVideoPlaylistParams::setRequireNonAnamorphic(bool newRequireNonAnamorphic)  {
	m_requireNonAnamorphic = newRequireNonAnamorphic;
}

bool GetVariantHlsVideoPlaylistParams::requireNonAnamorphicNull() const {
	// Nullable: true
	// Type Nullable: false
	

	return !m_requireNonAnamorphic.has_value();
}

void GetVariantHlsVideoPlaylistParams::setRequireNonAnamorphicNull() {
	m_requireNonAnamorphic = std::nullopt;
}


const QString &GetVariantHlsVideoPlaylistParams::segmentContainer() const {
	return m_segmentContainer;
}

void GetVariantHlsVideoPlaylistParams::setSegmentContainer(QString newSegmentContainer)  {
	m_segmentContainer = newSegmentContainer;
}

bool GetVariantHlsVideoPlaylistParams::segmentContainerNull() const {
	// Nullable: true
	// Type Nullable: true
	

	return m_segmentContainer.isNull();
}

void GetVariantHlsVideoPlaylistParams::setSegmentContainerNull() {
	m_segmentContainer.clear();
}


const qint32 &GetVariantHlsVideoPlaylistParams::segmentLength() const {
	return m_segmentLength.value();
}

void GetVariantHlsVideoPlaylistParams::setSegmentLength(qint32 newSegmentLength)  {
	m_segmentLength = newSegmentLength;
}

bool GetVariantHlsVideoPlaylistParams::segmentLengthNull() const {
	// Nullable: true
	// Type Nullable: false
	

	return !m_segmentLength.has_value();
}

void GetVariantHlsVideoPlaylistParams::setSegmentLengthNull() {
	m_segmentLength = std::nullopt;
}


const qint64 &GetVariantHlsVideoPlaylistParams::startTimeTicks() const {
	return m_startTimeTicks.value();
}

void GetVariantHlsVideoPlaylistParams::setStartTimeTicks(qint64 newStartTimeTicks)  {
	m_startTimeTicks = newStartTimeTicks;
}

bool GetVariantHlsVideoPlaylistParams::startTimeTicksNull() const {
	// Nullable: true
	// Type Nullable: false
	

	return !m_startTimeTicks.has_value();
}

void GetVariantHlsVideoPlaylistParams::setStartTimeTicksNull() {
	m_startTimeTicks = std::nullopt;
}


const bool &GetVariantHlsVideoPlaylistParams::staticStreaming() const {
	return m_staticStreaming.value();
}

void GetVariantHlsVideoPlaylistParams::setStaticStreaming(bool newStaticStreaming)  {
	m_staticStreaming = newStaticStreaming;
}

bool GetVariantHlsVideoPlaylistParams::staticStreamingNull() const {
	// Nullable: true
	// Type Nullable: false
	

	return !m_staticStreaming.has_value();
}

void GetVariantHlsVideoPlaylistParams::setStaticStreamingNull() {
	m_staticStreaming = std::nullopt;
}


const QJsonObject &GetVariantHlsVideoPlaylistParams::streamOptions() const {
	return m_streamOptions;
}

void GetVariantHlsVideoPlaylistParams::setStreamOptions(QJsonObject newStreamOptions)  {
	m_streamOptions = newStreamOptions;
}

bool GetVariantHlsVideoPlaylistParams::streamOptionsNull() const {
	// Nullable: true
	// Type Nullable: true
	

	return m_streamOptions.isEmpty();
}

void GetVariantHlsVideoPlaylistParams::setStreamOptionsNull() {
	m_streamOptions= QJsonObject();
}


const QString &GetVariantHlsVideoPlaylistParams::subtitleCodec() const {
	return m_subtitleCodec;
}

void GetVariantHlsVideoPlaylistParams::setSubtitleCodec(QString newSubtitleCodec)  {
	m_subtitleCodec = newSubtitleCodec;
}

bool GetVariantHlsVideoPlaylistParams::subtitleCodecNull() const {
	// Nullable: true
	// Type Nullable: true
	

	return m_subtitleCodec.isNull();
}

void GetVariantHlsVideoPlaylistParams::setSubtitleCodecNull() {
	m_subtitleCodec.clear();
}


const SubtitleDeliveryMethod &GetVariantHlsVideoPlaylistParams::subtitleMethod() const {
	return m_subtitleMethod;
}

void GetVariantHlsVideoPlaylistParams::setSubtitleMethod(SubtitleDeliveryMethod newSubtitleMethod)  {
	m_subtitleMethod = newSubtitleMethod;
}

bool GetVariantHlsVideoPlaylistParams::subtitleMethodNull() const {
	// Nullable: true
	// Type Nullable: true
	

	return m_subtitleMethod== SubtitleDeliveryMethod::EnumNotSet;
}

void GetVariantHlsVideoPlaylistParams::setSubtitleMethodNull() {
	m_subtitleMethod= SubtitleDeliveryMethod::EnumNotSet;
}


const qint32 &GetVariantHlsVideoPlaylistParams::subtitleStreamIndex() const {
	return m_subtitleStreamIndex.value();
}

void GetVariantHlsVideoPlaylistParams::setSubtitleStreamIndex(qint32 newSubtitleStreamIndex)  {
	m_subtitleStreamIndex = newSubtitleStreamIndex;
}

bool GetVariantHlsVideoPlaylistParams::subtitleStreamIndexNull() const {
	// Nullable: true
	// Type Nullable: false
	

	return !m_subtitleStreamIndex.has_value();
}

void GetVariantHlsVideoPlaylistParams::setSubtitleStreamIndexNull() {
	m_subtitleStreamIndex = std::nullopt;
}


const QString &GetVariantHlsVideoPlaylistParams::tag() const {
	return m_tag;
}

void GetVariantHlsVideoPlaylistParams::setTag(QString newTag)  {
	m_tag = newTag;
}

bool GetVariantHlsVideoPlaylistParams::tagNull() const {
	// Nullable: true
	// Type Nullable: true
	

	return m_tag.isNull();
}

void GetVariantHlsVideoPlaylistParams::setTagNull() {
	m_tag.clear();
}


const QString &GetVariantHlsVideoPlaylistParams::transcodeReasons() const {
	return m_transcodeReasons;
}

void GetVariantHlsVideoPlaylistParams::setTranscodeReasons(QString newTranscodeReasons)  {
	m_transcodeReasons = newTranscodeReasons;
}

bool GetVariantHlsVideoPlaylistParams::transcodeReasonsNull() const {
	// Nullable: true
	// Type Nullable: true
	

	return m_transcodeReasons.isNull();
}

void GetVariantHlsVideoPlaylistParams::setTranscodeReasonsNull() {
	m_transcodeReasons.clear();
}


const qint32 &GetVariantHlsVideoPlaylistParams::transcodingMaxAudioChannels() const {
	return m_transcodingMaxAudioChannels.value();
}

void GetVariantHlsVideoPlaylistParams::setTranscodingMaxAudioChannels(qint32 newTranscodingMaxAudioChannels)  {
	m_transcodingMaxAudioChannels = newTranscodingMaxAudioChannels;
}

bool GetVariantHlsVideoPlaylistParams::transcodingMaxAudioChannelsNull() const {
	// Nullable: true
	// Type Nullable: false
	

	return !m_transcodingMaxAudioChannels.has_value();
}

void GetVariantHlsVideoPlaylistParams::setTranscodingMaxAudioChannelsNull() {
	m_transcodingMaxAudioChannels = std::nullopt;
}


const qint32 &GetVariantHlsVideoPlaylistParams::videoBitRate() const {
	return m_videoBitRate.value();
}

void GetVariantHlsVideoPlaylistParams::setVideoBitRate(qint32 newVideoBitRate)  {
	m_videoBitRate = newVideoBitRate;
}

bool GetVariantHlsVideoPlaylistParams::videoBitRateNull() const {
	// Nullable: true
	// Type Nullable: false
	

	return !m_videoBitRate.has_value();
}

void GetVariantHlsVideoPlaylistParams::setVideoBitRateNull() {
	m_videoBitRate = std::nullopt;
}


const QString &GetVariantHlsVideoPlaylistParams::videoCodec() const {
	return m_videoCodec;
}

void GetVariantHlsVideoPlaylistParams::setVideoCodec(QString newVideoCodec)  {
	m_videoCodec = newVideoCodec;
}

bool GetVariantHlsVideoPlaylistParams::videoCodecNull() const {
	// Nullable: true
	// Type Nullable: true
	

	return m_videoCodec.isNull();
}

void GetVariantHlsVideoPlaylistParams::setVideoCodecNull() {
	m_videoCodec.clear();
}


const qint32 &GetVariantHlsVideoPlaylistParams::videoStreamIndex() const {
	return m_videoStreamIndex.value();
}

void GetVariantHlsVideoPlaylistParams::setVideoStreamIndex(qint32 newVideoStreamIndex)  {
	m_videoStreamIndex = newVideoStreamIndex;
}

bool GetVariantHlsVideoPlaylistParams::videoStreamIndexNull() const {
	// Nullable: true
	// Type Nullable: false
	

	return !m_videoStreamIndex.has_value();
}

void GetVariantHlsVideoPlaylistParams::setVideoStreamIndexNull() {
	m_videoStreamIndex = std::nullopt;
}


const qint32 &GetVariantHlsVideoPlaylistParams::width() const {
	return m_width.value();
}

void GetVariantHlsVideoPlaylistParams::setWidth(qint32 newWidth)  {
	m_width = newWidth;
}

bool GetVariantHlsVideoPlaylistParams::widthNull() const {
	// Nullable: true
	// Type Nullable: false
	

	return !m_width.has_value();
}

void GetVariantHlsVideoPlaylistParams::setWidthNull() {
	m_width = std::nullopt;
}




// GetVideoStreamParams

const QString &GetVideoStreamParams::itemId() const {
	return m_itemId;
}

void GetVideoStreamParams::setItemId(QString newItemId) {
	m_itemId = newItemId;
}


const bool &GetVideoStreamParams::allowAudioStreamCopy() const {
	return m_allowAudioStreamCopy.value();
}

void GetVideoStreamParams::setAllowAudioStreamCopy(bool newAllowAudioStreamCopy)  {
	m_allowAudioStreamCopy = newAllowAudioStreamCopy;
}

bool GetVideoStreamParams::allowAudioStreamCopyNull() const {
	// Nullable: true
	// Type Nullable: false
	

	return !m_allowAudioStreamCopy.has_value();
}

void GetVideoStreamParams::setAllowAudioStreamCopyNull() {
	m_allowAudioStreamCopy = std::nullopt;
}


const bool &GetVideoStreamParams::allowVideoStreamCopy() const {
	return m_allowVideoStreamCopy.value();
}

void GetVideoStreamParams::setAllowVideoStreamCopy(bool newAllowVideoStreamCopy)  {
	m_allowVideoStreamCopy = newAllowVideoStreamCopy;
}

bool GetVideoStreamParams::allowVideoStreamCopyNull() const {
	// Nullable: true
	// Type Nullable: false
	

	return !m_allowVideoStreamCopy.has_value();
}

void GetVideoStreamParams::setAllowVideoStreamCopyNull() {
	m_allowVideoStreamCopy = std::nullopt;
}


const qint32 &GetVideoStreamParams::audioBitRate() const {
	return m_audioBitRate.value();
}

void GetVideoStreamParams::setAudioBitRate(qint32 newAudioBitRate)  {
	m_audioBitRate = newAudioBitRate;
}

bool GetVideoStreamParams::audioBitRateNull() const {
	// Nullable: true
	// Type Nullable: false
	

	return !m_audioBitRate.has_value();
}

void GetVideoStreamParams::setAudioBitRateNull() {
	m_audioBitRate = std::nullopt;
}


const qint32 &GetVideoStreamParams::audioChannels() const {
	return m_audioChannels.value();
}

void GetVideoStreamParams::setAudioChannels(qint32 newAudioChannels)  {
	m_audioChannels = newAudioChannels;
}

bool GetVideoStreamParams::audioChannelsNull() const {
	// Nullable: true
	// Type Nullable: false
	

	return !m_audioChannels.has_value();
}

void GetVideoStreamParams::setAudioChannelsNull() {
	m_audioChannels = std::nullopt;
}


const QString &GetVideoStreamParams::audioCodec() const {
	return m_audioCodec;
}

void GetVideoStreamParams::setAudioCodec(QString newAudioCodec)  {
	m_audioCodec = newAudioCodec;
}

bool GetVideoStreamParams::audioCodecNull() const {
	// Nullable: true
	// Type Nullable: true
	

	return m_audioCodec.isNull();
}

void GetVideoStreamParams::setAudioCodecNull() {
	m_audioCodec.clear();
}


const qint32 &GetVideoStreamParams::audioSampleRate() const {
	return m_audioSampleRate.value();
}

void GetVideoStreamParams::setAudioSampleRate(qint32 newAudioSampleRate)  {
	m_audioSampleRate = newAudioSampleRate;
}

bool GetVideoStreamParams::audioSampleRateNull() const {
	// Nullable: true
	// Type Nullable: false
	

	return !m_audioSampleRate.has_value();
}

void GetVideoStreamParams::setAudioSampleRateNull() {
	m_audioSampleRate = std::nullopt;
}


const qint32 &GetVideoStreamParams::audioStreamIndex() const {
	return m_audioStreamIndex.value();
}

void GetVideoStreamParams::setAudioStreamIndex(qint32 newAudioStreamIndex)  {
	m_audioStreamIndex = newAudioStreamIndex;
}

bool GetVideoStreamParams::audioStreamIndexNull() const {
	// Nullable: true
	// Type Nullable: false
	

	return !m_audioStreamIndex.has_value();
}

void GetVideoStreamParams::setAudioStreamIndexNull() {
	m_audioStreamIndex = std::nullopt;
}


const bool &GetVideoStreamParams::breakOnNonKeyFrames() const {
	return m_breakOnNonKeyFrames.value();
}

void GetVideoStreamParams::setBreakOnNonKeyFrames(bool newBreakOnNonKeyFrames)  {
	m_breakOnNonKeyFrames = newBreakOnNonKeyFrames;
}

bool GetVideoStreamParams::breakOnNonKeyFramesNull() const {
	// Nullable: true
	// Type Nullable: false
	

	return !m_breakOnNonKeyFrames.has_value();
}

void GetVideoStreamParams::setBreakOnNonKeyFramesNull() {
	m_breakOnNonKeyFrames = std::nullopt;
}


const QString &GetVideoStreamParams::container() const {
	return m_container;
}

void GetVideoStreamParams::setContainer(QString newContainer)  {
	m_container = newContainer;
}

bool GetVideoStreamParams::containerNull() const {
	// Nullable: true
	// Type Nullable: true
	

	return m_container.isNull();
}

void GetVideoStreamParams::setContainerNull() {
	m_container.clear();
}


const EncodingContext &GetVideoStreamParams::context() const {
	return m_context;
}

void GetVideoStreamParams::setContext(EncodingContext newContext)  {
	m_context = newContext;
}

bool GetVideoStreamParams::contextNull() const {
	// Nullable: true
	// Type Nullable: true
	

	return m_context== EncodingContext::EnumNotSet;
}

void GetVideoStreamParams::setContextNull() {
	m_context= EncodingContext::EnumNotSet;
}


const bool &GetVideoStreamParams::copyTimestamps() const {
	return m_copyTimestamps.value();
}

void GetVideoStreamParams::setCopyTimestamps(bool newCopyTimestamps)  {
	m_copyTimestamps = newCopyTimestamps;
}

bool GetVideoStreamParams::copyTimestampsNull() const {
	// Nullable: true
	// Type Nullable: false
	

	return !m_copyTimestamps.has_value();
}

void GetVideoStreamParams::setCopyTimestampsNull() {
	m_copyTimestamps = std::nullopt;
}


const qint32 &GetVideoStreamParams::cpuCoreLimit() const {
	return m_cpuCoreLimit.value();
}

void GetVideoStreamParams::setCpuCoreLimit(qint32 newCpuCoreLimit)  {
	m_cpuCoreLimit = newCpuCoreLimit;
}

bool GetVideoStreamParams::cpuCoreLimitNull() const {
	// Nullable: true
	// Type Nullable: false
	

	return !m_cpuCoreLimit.has_value();
}

void GetVideoStreamParams::setCpuCoreLimitNull() {
	m_cpuCoreLimit = std::nullopt;
}


const bool &GetVideoStreamParams::deInterlace() const {
	return m_deInterlace.value();
}

void GetVideoStreamParams::setDeInterlace(bool newDeInterlace)  {
	m_deInterlace = newDeInterlace;
}

bool GetVideoStreamParams::deInterlaceNull() const {
	// Nullable: true
	// Type Nullable: false
	

	return !m_deInterlace.has_value();
}

void GetVideoStreamParams::setDeInterlaceNull() {
	m_deInterlace = std::nullopt;
}


const QString &GetVideoStreamParams::deviceId() const {
	return m_deviceId;
}

void GetVideoStreamParams::setDeviceId(QString newDeviceId)  {
	m_deviceId = newDeviceId;
}

bool GetVideoStreamParams::deviceIdNull() const {
	// Nullable: true
	// Type Nullable: true
	

	return m_deviceId.isNull();
}

void GetVideoStreamParams::setDeviceIdNull() {
	m_deviceId.clear();
}


const QString &GetVideoStreamParams::deviceProfileId() const {
	return m_deviceProfileId;
}

void GetVideoStreamParams::setDeviceProfileId(QString newDeviceProfileId)  {
	m_deviceProfileId = newDeviceProfileId;
}

bool GetVideoStreamParams::deviceProfileIdNull() const {
	// Nullable: true
	// Type Nullable: true
	

	return m_deviceProfileId.isNull();
}

void GetVideoStreamParams::setDeviceProfileIdNull() {
	m_deviceProfileId.clear();
}


const bool &GetVideoStreamParams::enableAutoStreamCopy() const {
	return m_enableAutoStreamCopy.value();
}

void GetVideoStreamParams::setEnableAutoStreamCopy(bool newEnableAutoStreamCopy)  {
	m_enableAutoStreamCopy = newEnableAutoStreamCopy;
}

bool GetVideoStreamParams::enableAutoStreamCopyNull() const {
	// Nullable: true
	// Type Nullable: false
	

	return !m_enableAutoStreamCopy.has_value();
}

void GetVideoStreamParams::setEnableAutoStreamCopyNull() {
	m_enableAutoStreamCopy = std::nullopt;
}


const bool &GetVideoStreamParams::enableMpegtsM2TsMode() const {
	return m_enableMpegtsM2TsMode.value();
}

void GetVideoStreamParams::setEnableMpegtsM2TsMode(bool newEnableMpegtsM2TsMode)  {
	m_enableMpegtsM2TsMode = newEnableMpegtsM2TsMode;
}

bool GetVideoStreamParams::enableMpegtsM2TsModeNull() const {
	// Nullable: true
	// Type Nullable: false
	

	return !m_enableMpegtsM2TsMode.has_value();
}

void GetVideoStreamParams::setEnableMpegtsM2TsModeNull() {
	m_enableMpegtsM2TsMode = std::nullopt;
}


const float &GetVideoStreamParams::framerate() const {
	return m_framerate.value();
}

void GetVideoStreamParams::setFramerate(float newFramerate)  {
	m_framerate = newFramerate;
}

bool GetVideoStreamParams::framerateNull() const {
	// Nullable: true
	// Type Nullable: false
	

	return !m_framerate.has_value();
}

void GetVideoStreamParams::setFramerateNull() {
	m_framerate = std::nullopt;
}


const qint32 &GetVideoStreamParams::height() const {
	return m_height.value();
}

void GetVideoStreamParams::setHeight(qint32 newHeight)  {
	m_height = newHeight;
}

bool GetVideoStreamParams::heightNull() const {
	// Nullable: true
	// Type Nullable: false
	

	return !m_height.has_value();
}

void GetVideoStreamParams::setHeightNull() {
	m_height = std::nullopt;
}


const QString &GetVideoStreamParams::level() const {
	return m_level;
}

void GetVideoStreamParams::setLevel(QString newLevel)  {
	m_level = newLevel;
}

bool GetVideoStreamParams::levelNull() const {
	// Nullable: true
	// Type Nullable: true
	

	return m_level.isNull();
}

void GetVideoStreamParams::setLevelNull() {
	m_level.clear();
}


const QString &GetVideoStreamParams::liveStreamId() const {
	return m_liveStreamId;
}

void GetVideoStreamParams::setLiveStreamId(QString newLiveStreamId)  {
	m_liveStreamId = newLiveStreamId;
}

bool GetVideoStreamParams::liveStreamIdNull() const {
	// Nullable: true
	// Type Nullable: true
	

	return m_liveStreamId.isNull();
}

void GetVideoStreamParams::setLiveStreamIdNull() {
	m_liveStreamId.clear();
}


const qint32 &GetVideoStreamParams::maxAudioBitDepth() const {
	return m_maxAudioBitDepth.value();
}

void GetVideoStreamParams::setMaxAudioBitDepth(qint32 newMaxAudioBitDepth)  {
	m_maxAudioBitDepth = newMaxAudioBitDepth;
}

bool GetVideoStreamParams::maxAudioBitDepthNull() const {
	// Nullable: true
	// Type Nullable: false
	

	return !m_maxAudioBitDepth.has_value();
}

void GetVideoStreamParams::setMaxAudioBitDepthNull() {
	m_maxAudioBitDepth = std::nullopt;
}


const qint32 &GetVideoStreamParams::maxAudioChannels() const {
	return m_maxAudioChannels.value();
}

void GetVideoStreamParams::setMaxAudioChannels(qint32 newMaxAudioChannels)  {
	m_maxAudioChannels = newMaxAudioChannels;
}

bool GetVideoStreamParams::maxAudioChannelsNull() const {
	// Nullable: true
	// Type Nullable: false
	

	return !m_maxAudioChannels.has_value();
}

void GetVideoStreamParams::setMaxAudioChannelsNull() {
	m_maxAudioChannels = std::nullopt;
}


const float &GetVideoStreamParams::maxFramerate() const {
	return m_maxFramerate.value();
}

void GetVideoStreamParams::setMaxFramerate(float newMaxFramerate)  {
	m_maxFramerate = newMaxFramerate;
}

bool GetVideoStreamParams::maxFramerateNull() const {
	// Nullable: true
	// Type Nullable: false
	

	return !m_maxFramerate.has_value();
}

void GetVideoStreamParams::setMaxFramerateNull() {
	m_maxFramerate = std::nullopt;
}


const qint32 &GetVideoStreamParams::maxRefFrames() const {
	return m_maxRefFrames.value();
}

void GetVideoStreamParams::setMaxRefFrames(qint32 newMaxRefFrames)  {
	m_maxRefFrames = newMaxRefFrames;
}

bool GetVideoStreamParams::maxRefFramesNull() const {
	// Nullable: true
	// Type Nullable: false
	

	return !m_maxRefFrames.has_value();
}

void GetVideoStreamParams::setMaxRefFramesNull() {
	m_maxRefFrames = std::nullopt;
}


const qint32 &GetVideoStreamParams::maxVideoBitDepth() const {
	return m_maxVideoBitDepth.value();
}

void GetVideoStreamParams::setMaxVideoBitDepth(qint32 newMaxVideoBitDepth)  {
	m_maxVideoBitDepth = newMaxVideoBitDepth;
}

bool GetVideoStreamParams::maxVideoBitDepthNull() const {
	// Nullable: true
	// Type Nullable: false
	

	return !m_maxVideoBitDepth.has_value();
}

void GetVideoStreamParams::setMaxVideoBitDepthNull() {
	m_maxVideoBitDepth = std::nullopt;
}


const QString &GetVideoStreamParams::mediaSourceId() const {
	return m_mediaSourceId;
}

void GetVideoStreamParams::setMediaSourceId(QString newMediaSourceId)  {
	m_mediaSourceId = newMediaSourceId;
}

bool GetVideoStreamParams::mediaSourceIdNull() const {
	// Nullable: true
	// Type Nullable: true
	

	return m_mediaSourceId.isNull();
}

void GetVideoStreamParams::setMediaSourceIdNull() {
	m_mediaSourceId.clear();
}


const qint32 &GetVideoStreamParams::minSegments() const {
	return m_minSegments.value();
}

void GetVideoStreamParams::setMinSegments(qint32 newMinSegments)  {
	m_minSegments = newMinSegments;
}

bool GetVideoStreamParams::minSegmentsNull() const {
	// Nullable: true
	// Type Nullable: false
	

	return !m_minSegments.has_value();
}

void GetVideoStreamParams::setMinSegmentsNull() {
	m_minSegments = std::nullopt;
}


const QString &GetVideoStreamParams::params() const {
	return m_params;
}

void GetVideoStreamParams::setParams(QString newParams)  {
	m_params = newParams;
}

bool GetVideoStreamParams::paramsNull() const {
	// Nullable: true
	// Type Nullable: true
	

	return m_params.isNull();
}

void GetVideoStreamParams::setParamsNull() {
	m_params.clear();
}


const QString &GetVideoStreamParams::playSessionId() const {
	return m_playSessionId;
}

void GetVideoStreamParams::setPlaySessionId(QString newPlaySessionId)  {
	m_playSessionId = newPlaySessionId;
}

bool GetVideoStreamParams::playSessionIdNull() const {
	// Nullable: true
	// Type Nullable: true
	

	return m_playSessionId.isNull();
}

void GetVideoStreamParams::setPlaySessionIdNull() {
	m_playSessionId.clear();
}


const QString &GetVideoStreamParams::profile() const {
	return m_profile;
}

void GetVideoStreamParams::setProfile(QString newProfile)  {
	m_profile = newProfile;
}

bool GetVideoStreamParams::profileNull() const {
	// Nullable: true
	// Type Nullable: true
	

	return m_profile.isNull();
}

void GetVideoStreamParams::setProfileNull() {
	m_profile.clear();
}


const bool &GetVideoStreamParams::requireAvc() const {
	return m_requireAvc.value();
}

void GetVideoStreamParams::setRequireAvc(bool newRequireAvc)  {
	m_requireAvc = newRequireAvc;
}

bool GetVideoStreamParams::requireAvcNull() const {
	// Nullable: true
	// Type Nullable: false
	

	return !m_requireAvc.has_value();
}

void GetVideoStreamParams::setRequireAvcNull() {
	m_requireAvc = std::nullopt;
}


const bool &GetVideoStreamParams::requireNonAnamorphic() const {
	return m_requireNonAnamorphic.value();
}

void GetVideoStreamParams::setRequireNonAnamorphic(bool newRequireNonAnamorphic)  {
	m_requireNonAnamorphic = newRequireNonAnamorphic;
}

bool GetVideoStreamParams::requireNonAnamorphicNull() const {
	// Nullable: true
	// Type Nullable: false
	

	return !m_requireNonAnamorphic.has_value();
}

void GetVideoStreamParams::setRequireNonAnamorphicNull() {
	m_requireNonAnamorphic = std::nullopt;
}


const QString &GetVideoStreamParams::segmentContainer() const {
	return m_segmentContainer;
}

void GetVideoStreamParams::setSegmentContainer(QString newSegmentContainer)  {
	m_segmentContainer = newSegmentContainer;
}

bool GetVideoStreamParams::segmentContainerNull() const {
	// Nullable: true
	// Type Nullable: true
	

	return m_segmentContainer.isNull();
}

void GetVideoStreamParams::setSegmentContainerNull() {
	m_segmentContainer.clear();
}


const qint32 &GetVideoStreamParams::segmentLength() const {
	return m_segmentLength.value();
}

void GetVideoStreamParams::setSegmentLength(qint32 newSegmentLength)  {
	m_segmentLength = newSegmentLength;
}

bool GetVideoStreamParams::segmentLengthNull() const {
	// Nullable: true
	// Type Nullable: false
	

	return !m_segmentLength.has_value();
}

void GetVideoStreamParams::setSegmentLengthNull() {
	m_segmentLength = std::nullopt;
}


const qint64 &GetVideoStreamParams::startTimeTicks() const {
	return m_startTimeTicks.value();
}

void GetVideoStreamParams::setStartTimeTicks(qint64 newStartTimeTicks)  {
	m_startTimeTicks = newStartTimeTicks;
}

bool GetVideoStreamParams::startTimeTicksNull() const {
	// Nullable: true
	// Type Nullable: false
	

	return !m_startTimeTicks.has_value();
}

void GetVideoStreamParams::setStartTimeTicksNull() {
	m_startTimeTicks = std::nullopt;
}


const bool &GetVideoStreamParams::staticStreaming() const {
	return m_staticStreaming.value();
}

void GetVideoStreamParams::setStaticStreaming(bool newStaticStreaming)  {
	m_staticStreaming = newStaticStreaming;
}

bool GetVideoStreamParams::staticStreamingNull() const {
	// Nullable: true
	// Type Nullable: false
	

	return !m_staticStreaming.has_value();
}

void GetVideoStreamParams::setStaticStreamingNull() {
	m_staticStreaming = std::nullopt;
}


const QJsonObject &GetVideoStreamParams::streamOptions() const {
	return m_streamOptions;
}

void GetVideoStreamParams::setStreamOptions(QJsonObject newStreamOptions)  {
	m_streamOptions = newStreamOptions;
}

bool GetVideoStreamParams::streamOptionsNull() const {
	// Nullable: true
	// Type Nullable: true
	

	return m_streamOptions.isEmpty();
}

void GetVideoStreamParams::setStreamOptionsNull() {
	m_streamOptions= QJsonObject();
}


const QString &GetVideoStreamParams::subtitleCodec() const {
	return m_subtitleCodec;
}

void GetVideoStreamParams::setSubtitleCodec(QString newSubtitleCodec)  {
	m_subtitleCodec = newSubtitleCodec;
}

bool GetVideoStreamParams::subtitleCodecNull() const {
	// Nullable: true
	// Type Nullable: true
	

	return m_subtitleCodec.isNull();
}

void GetVideoStreamParams::setSubtitleCodecNull() {
	m_subtitleCodec.clear();
}


const SubtitleDeliveryMethod &GetVideoStreamParams::subtitleMethod() const {
	return m_subtitleMethod;
}

void GetVideoStreamParams::setSubtitleMethod(SubtitleDeliveryMethod newSubtitleMethod)  {
	m_subtitleMethod = newSubtitleMethod;
}

bool GetVideoStreamParams::subtitleMethodNull() const {
	// Nullable: true
	// Type Nullable: true
	

	return m_subtitleMethod== SubtitleDeliveryMethod::EnumNotSet;
}

void GetVideoStreamParams::setSubtitleMethodNull() {
	m_subtitleMethod= SubtitleDeliveryMethod::EnumNotSet;
}


const qint32 &GetVideoStreamParams::subtitleStreamIndex() const {
	return m_subtitleStreamIndex.value();
}

void GetVideoStreamParams::setSubtitleStreamIndex(qint32 newSubtitleStreamIndex)  {
	m_subtitleStreamIndex = newSubtitleStreamIndex;
}

bool GetVideoStreamParams::subtitleStreamIndexNull() const {
	// Nullable: true
	// Type Nullable: false
	

	return !m_subtitleStreamIndex.has_value();
}

void GetVideoStreamParams::setSubtitleStreamIndexNull() {
	m_subtitleStreamIndex = std::nullopt;
}


const QString &GetVideoStreamParams::tag() const {
	return m_tag;
}

void GetVideoStreamParams::setTag(QString newTag)  {
	m_tag = newTag;
}

bool GetVideoStreamParams::tagNull() const {
	// Nullable: true
	// Type Nullable: true
	

	return m_tag.isNull();
}

void GetVideoStreamParams::setTagNull() {
	m_tag.clear();
}


const QString &GetVideoStreamParams::transcodeReasons() const {
	return m_transcodeReasons;
}

void GetVideoStreamParams::setTranscodeReasons(QString newTranscodeReasons)  {
	m_transcodeReasons = newTranscodeReasons;
}

bool GetVideoStreamParams::transcodeReasonsNull() const {
	// Nullable: true
	// Type Nullable: true
	

	return m_transcodeReasons.isNull();
}

void GetVideoStreamParams::setTranscodeReasonsNull() {
	m_transcodeReasons.clear();
}


const qint32 &GetVideoStreamParams::transcodingMaxAudioChannels() const {
	return m_transcodingMaxAudioChannels.value();
}

void GetVideoStreamParams::setTranscodingMaxAudioChannels(qint32 newTranscodingMaxAudioChannels)  {
	m_transcodingMaxAudioChannels = newTranscodingMaxAudioChannels;
}

bool GetVideoStreamParams::transcodingMaxAudioChannelsNull() const {
	// Nullable: true
	// Type Nullable: false
	

	return !m_transcodingMaxAudioChannels.has_value();
}

void GetVideoStreamParams::setTranscodingMaxAudioChannelsNull() {
	m_transcodingMaxAudioChannels = std::nullopt;
}


const qint32 &GetVideoStreamParams::videoBitRate() const {
	return m_videoBitRate.value();
}

void GetVideoStreamParams::setVideoBitRate(qint32 newVideoBitRate)  {
	m_videoBitRate = newVideoBitRate;
}

bool GetVideoStreamParams::videoBitRateNull() const {
	// Nullable: true
	// Type Nullable: false
	

	return !m_videoBitRate.has_value();
}

void GetVideoStreamParams::setVideoBitRateNull() {
	m_videoBitRate = std::nullopt;
}


const QString &GetVideoStreamParams::videoCodec() const {
	return m_videoCodec;
}

void GetVideoStreamParams::setVideoCodec(QString newVideoCodec)  {
	m_videoCodec = newVideoCodec;
}

bool GetVideoStreamParams::videoCodecNull() const {
	// Nullable: true
	// Type Nullable: true
	

	return m_videoCodec.isNull();
}

void GetVideoStreamParams::setVideoCodecNull() {
	m_videoCodec.clear();
}


const qint32 &GetVideoStreamParams::videoStreamIndex() const {
	return m_videoStreamIndex.value();
}

void GetVideoStreamParams::setVideoStreamIndex(qint32 newVideoStreamIndex)  {
	m_videoStreamIndex = newVideoStreamIndex;
}

bool GetVideoStreamParams::videoStreamIndexNull() const {
	// Nullable: true
	// Type Nullable: false
	

	return !m_videoStreamIndex.has_value();
}

void GetVideoStreamParams::setVideoStreamIndexNull() {
	m_videoStreamIndex = std::nullopt;
}


const qint32 &GetVideoStreamParams::width() const {
	return m_width.value();
}

void GetVideoStreamParams::setWidth(qint32 newWidth)  {
	m_width = newWidth;
}

bool GetVideoStreamParams::widthNull() const {
	// Nullable: true
	// Type Nullable: false
	

	return !m_width.has_value();
}

void GetVideoStreamParams::setWidthNull() {
	m_width = std::nullopt;
}




// GetVideoStreamByContainerParams

const QString &GetVideoStreamByContainerParams::container() const {
	return m_container;
}

void GetVideoStreamByContainerParams::setContainer(QString newContainer) {
	m_container = newContainer;
}


const QString &GetVideoStreamByContainerParams::itemId() const {
	return m_itemId;
}

void GetVideoStreamByContainerParams::setItemId(QString newItemId) {
	m_itemId = newItemId;
}


const QString &GetVideoStreamByContainerParams::stream() const {
	return m_stream;
}

void GetVideoStreamByContainerParams::setStream(QString newStream) {
	m_stream = newStream;
}


const bool &GetVideoStreamByContainerParams::allowAudioStreamCopy() const {
	return m_allowAudioStreamCopy.value();
}

void GetVideoStreamByContainerParams::setAllowAudioStreamCopy(bool newAllowAudioStreamCopy)  {
	m_allowAudioStreamCopy = newAllowAudioStreamCopy;
}

bool GetVideoStreamByContainerParams::allowAudioStreamCopyNull() const {
	// Nullable: true
	// Type Nullable: false
	

	return !m_allowAudioStreamCopy.has_value();
}

void GetVideoStreamByContainerParams::setAllowAudioStreamCopyNull() {
	m_allowAudioStreamCopy = std::nullopt;
}


const bool &GetVideoStreamByContainerParams::allowVideoStreamCopy() const {
	return m_allowVideoStreamCopy.value();
}

void GetVideoStreamByContainerParams::setAllowVideoStreamCopy(bool newAllowVideoStreamCopy)  {
	m_allowVideoStreamCopy = newAllowVideoStreamCopy;
}

bool GetVideoStreamByContainerParams::allowVideoStreamCopyNull() const {
	// Nullable: true
	// Type Nullable: false
	

	return !m_allowVideoStreamCopy.has_value();
}

void GetVideoStreamByContainerParams::setAllowVideoStreamCopyNull() {
	m_allowVideoStreamCopy = std::nullopt;
}


const qint32 &GetVideoStreamByContainerParams::audioBitRate() const {
	return m_audioBitRate.value();
}

void GetVideoStreamByContainerParams::setAudioBitRate(qint32 newAudioBitRate)  {
	m_audioBitRate = newAudioBitRate;
}

bool GetVideoStreamByContainerParams::audioBitRateNull() const {
	// Nullable: true
	// Type Nullable: false
	

	return !m_audioBitRate.has_value();
}

void GetVideoStreamByContainerParams::setAudioBitRateNull() {
	m_audioBitRate = std::nullopt;
}


const qint32 &GetVideoStreamByContainerParams::audioChannels() const {
	return m_audioChannels.value();
}

void GetVideoStreamByContainerParams::setAudioChannels(qint32 newAudioChannels)  {
	m_audioChannels = newAudioChannels;
}

bool GetVideoStreamByContainerParams::audioChannelsNull() const {
	// Nullable: true
	// Type Nullable: false
	

	return !m_audioChannels.has_value();
}

void GetVideoStreamByContainerParams::setAudioChannelsNull() {
	m_audioChannels = std::nullopt;
}


const QString &GetVideoStreamByContainerParams::audioCodec() const {
	return m_audioCodec;
}

void GetVideoStreamByContainerParams::setAudioCodec(QString newAudioCodec)  {
	m_audioCodec = newAudioCodec;
}

bool GetVideoStreamByContainerParams::audioCodecNull() const {
	// Nullable: true
	// Type Nullable: true
	

	return m_audioCodec.isNull();
}

void GetVideoStreamByContainerParams::setAudioCodecNull() {
	m_audioCodec.clear();
}


const qint32 &GetVideoStreamByContainerParams::audioSampleRate() const {
	return m_audioSampleRate.value();
}

void GetVideoStreamByContainerParams::setAudioSampleRate(qint32 newAudioSampleRate)  {
	m_audioSampleRate = newAudioSampleRate;
}

bool GetVideoStreamByContainerParams::audioSampleRateNull() const {
	// Nullable: true
	// Type Nullable: false
	

	return !m_audioSampleRate.has_value();
}

void GetVideoStreamByContainerParams::setAudioSampleRateNull() {
	m_audioSampleRate = std::nullopt;
}


const qint32 &GetVideoStreamByContainerParams::audioStreamIndex() const {
	return m_audioStreamIndex.value();
}

void GetVideoStreamByContainerParams::setAudioStreamIndex(qint32 newAudioStreamIndex)  {
	m_audioStreamIndex = newAudioStreamIndex;
}

bool GetVideoStreamByContainerParams::audioStreamIndexNull() const {
	// Nullable: true
	// Type Nullable: false
	

	return !m_audioStreamIndex.has_value();
}

void GetVideoStreamByContainerParams::setAudioStreamIndexNull() {
	m_audioStreamIndex = std::nullopt;
}


const bool &GetVideoStreamByContainerParams::breakOnNonKeyFrames() const {
	return m_breakOnNonKeyFrames.value();
}

void GetVideoStreamByContainerParams::setBreakOnNonKeyFrames(bool newBreakOnNonKeyFrames)  {
	m_breakOnNonKeyFrames = newBreakOnNonKeyFrames;
}

bool GetVideoStreamByContainerParams::breakOnNonKeyFramesNull() const {
	// Nullable: true
	// Type Nullable: false
	

	return !m_breakOnNonKeyFrames.has_value();
}

void GetVideoStreamByContainerParams::setBreakOnNonKeyFramesNull() {
	m_breakOnNonKeyFrames = std::nullopt;
}


const EncodingContext &GetVideoStreamByContainerParams::context() const {
	return m_context;
}

void GetVideoStreamByContainerParams::setContext(EncodingContext newContext)  {
	m_context = newContext;
}

bool GetVideoStreamByContainerParams::contextNull() const {
	// Nullable: true
	// Type Nullable: true
	

	return m_context== EncodingContext::EnumNotSet;
}

void GetVideoStreamByContainerParams::setContextNull() {
	m_context= EncodingContext::EnumNotSet;
}


const bool &GetVideoStreamByContainerParams::copyTimestamps() const {
	return m_copyTimestamps.value();
}

void GetVideoStreamByContainerParams::setCopyTimestamps(bool newCopyTimestamps)  {
	m_copyTimestamps = newCopyTimestamps;
}

bool GetVideoStreamByContainerParams::copyTimestampsNull() const {
	// Nullable: true
	// Type Nullable: false
	

	return !m_copyTimestamps.has_value();
}

void GetVideoStreamByContainerParams::setCopyTimestampsNull() {
	m_copyTimestamps = std::nullopt;
}


const qint32 &GetVideoStreamByContainerParams::cpuCoreLimit() const {
	return m_cpuCoreLimit.value();
}

void GetVideoStreamByContainerParams::setCpuCoreLimit(qint32 newCpuCoreLimit)  {
	m_cpuCoreLimit = newCpuCoreLimit;
}

bool GetVideoStreamByContainerParams::cpuCoreLimitNull() const {
	// Nullable: true
	// Type Nullable: false
	

	return !m_cpuCoreLimit.has_value();
}

void GetVideoStreamByContainerParams::setCpuCoreLimitNull() {
	m_cpuCoreLimit = std::nullopt;
}


const bool &GetVideoStreamByContainerParams::deInterlace() const {
	return m_deInterlace.value();
}

void GetVideoStreamByContainerParams::setDeInterlace(bool newDeInterlace)  {
	m_deInterlace = newDeInterlace;
}

bool GetVideoStreamByContainerParams::deInterlaceNull() const {
	// Nullable: true
	// Type Nullable: false
	

	return !m_deInterlace.has_value();
}

void GetVideoStreamByContainerParams::setDeInterlaceNull() {
	m_deInterlace = std::nullopt;
}


const QString &GetVideoStreamByContainerParams::deviceId() const {
	return m_deviceId;
}

void GetVideoStreamByContainerParams::setDeviceId(QString newDeviceId)  {
	m_deviceId = newDeviceId;
}

bool GetVideoStreamByContainerParams::deviceIdNull() const {
	// Nullable: true
	// Type Nullable: true
	

	return m_deviceId.isNull();
}

void GetVideoStreamByContainerParams::setDeviceIdNull() {
	m_deviceId.clear();
}


const QString &GetVideoStreamByContainerParams::deviceProfileId() const {
	return m_deviceProfileId;
}

void GetVideoStreamByContainerParams::setDeviceProfileId(QString newDeviceProfileId)  {
	m_deviceProfileId = newDeviceProfileId;
}

bool GetVideoStreamByContainerParams::deviceProfileIdNull() const {
	// Nullable: true
	// Type Nullable: true
	

	return m_deviceProfileId.isNull();
}

void GetVideoStreamByContainerParams::setDeviceProfileIdNull() {
	m_deviceProfileId.clear();
}


const bool &GetVideoStreamByContainerParams::enableAutoStreamCopy() const {
	return m_enableAutoStreamCopy.value();
}

void GetVideoStreamByContainerParams::setEnableAutoStreamCopy(bool newEnableAutoStreamCopy)  {
	m_enableAutoStreamCopy = newEnableAutoStreamCopy;
}

bool GetVideoStreamByContainerParams::enableAutoStreamCopyNull() const {
	// Nullable: true
	// Type Nullable: false
	

	return !m_enableAutoStreamCopy.has_value();
}

void GetVideoStreamByContainerParams::setEnableAutoStreamCopyNull() {
	m_enableAutoStreamCopy = std::nullopt;
}


const bool &GetVideoStreamByContainerParams::enableMpegtsM2TsMode() const {
	return m_enableMpegtsM2TsMode.value();
}

void GetVideoStreamByContainerParams::setEnableMpegtsM2TsMode(bool newEnableMpegtsM2TsMode)  {
	m_enableMpegtsM2TsMode = newEnableMpegtsM2TsMode;
}

bool GetVideoStreamByContainerParams::enableMpegtsM2TsModeNull() const {
	// Nullable: true
	// Type Nullable: false
	

	return !m_enableMpegtsM2TsMode.has_value();
}

void GetVideoStreamByContainerParams::setEnableMpegtsM2TsModeNull() {
	m_enableMpegtsM2TsMode = std::nullopt;
}


const float &GetVideoStreamByContainerParams::framerate() const {
	return m_framerate.value();
}

void GetVideoStreamByContainerParams::setFramerate(float newFramerate)  {
	m_framerate = newFramerate;
}

bool GetVideoStreamByContainerParams::framerateNull() const {
	// Nullable: true
	// Type Nullable: false
	

	return !m_framerate.has_value();
}

void GetVideoStreamByContainerParams::setFramerateNull() {
	m_framerate = std::nullopt;
}


const qint32 &GetVideoStreamByContainerParams::height() const {
	return m_height.value();
}

void GetVideoStreamByContainerParams::setHeight(qint32 newHeight)  {
	m_height = newHeight;
}

bool GetVideoStreamByContainerParams::heightNull() const {
	// Nullable: true
	// Type Nullable: false
	

	return !m_height.has_value();
}

void GetVideoStreamByContainerParams::setHeightNull() {
	m_height = std::nullopt;
}


const QString &GetVideoStreamByContainerParams::level() const {
	return m_level;
}

void GetVideoStreamByContainerParams::setLevel(QString newLevel)  {
	m_level = newLevel;
}

bool GetVideoStreamByContainerParams::levelNull() const {
	// Nullable: true
	// Type Nullable: true
	

	return m_level.isNull();
}

void GetVideoStreamByContainerParams::setLevelNull() {
	m_level.clear();
}


const QString &GetVideoStreamByContainerParams::liveStreamId() const {
	return m_liveStreamId;
}

void GetVideoStreamByContainerParams::setLiveStreamId(QString newLiveStreamId)  {
	m_liveStreamId = newLiveStreamId;
}

bool GetVideoStreamByContainerParams::liveStreamIdNull() const {
	// Nullable: true
	// Type Nullable: true
	

	return m_liveStreamId.isNull();
}

void GetVideoStreamByContainerParams::setLiveStreamIdNull() {
	m_liveStreamId.clear();
}


const qint32 &GetVideoStreamByContainerParams::maxAudioBitDepth() const {
	return m_maxAudioBitDepth.value();
}

void GetVideoStreamByContainerParams::setMaxAudioBitDepth(qint32 newMaxAudioBitDepth)  {
	m_maxAudioBitDepth = newMaxAudioBitDepth;
}

bool GetVideoStreamByContainerParams::maxAudioBitDepthNull() const {
	// Nullable: true
	// Type Nullable: false
	

	return !m_maxAudioBitDepth.has_value();
}

void GetVideoStreamByContainerParams::setMaxAudioBitDepthNull() {
	m_maxAudioBitDepth = std::nullopt;
}


const qint32 &GetVideoStreamByContainerParams::maxAudioChannels() const {
	return m_maxAudioChannels.value();
}

void GetVideoStreamByContainerParams::setMaxAudioChannels(qint32 newMaxAudioChannels)  {
	m_maxAudioChannels = newMaxAudioChannels;
}

bool GetVideoStreamByContainerParams::maxAudioChannelsNull() const {
	// Nullable: true
	// Type Nullable: false
	

	return !m_maxAudioChannels.has_value();
}

void GetVideoStreamByContainerParams::setMaxAudioChannelsNull() {
	m_maxAudioChannels = std::nullopt;
}


const float &GetVideoStreamByContainerParams::maxFramerate() const {
	return m_maxFramerate.value();
}

void GetVideoStreamByContainerParams::setMaxFramerate(float newMaxFramerate)  {
	m_maxFramerate = newMaxFramerate;
}

bool GetVideoStreamByContainerParams::maxFramerateNull() const {
	// Nullable: true
	// Type Nullable: false
	

	return !m_maxFramerate.has_value();
}

void GetVideoStreamByContainerParams::setMaxFramerateNull() {
	m_maxFramerate = std::nullopt;
}


const qint32 &GetVideoStreamByContainerParams::maxRefFrames() const {
	return m_maxRefFrames.value();
}

void GetVideoStreamByContainerParams::setMaxRefFrames(qint32 newMaxRefFrames)  {
	m_maxRefFrames = newMaxRefFrames;
}

bool GetVideoStreamByContainerParams::maxRefFramesNull() const {
	// Nullable: true
	// Type Nullable: false
	

	return !m_maxRefFrames.has_value();
}

void GetVideoStreamByContainerParams::setMaxRefFramesNull() {
	m_maxRefFrames = std::nullopt;
}


const qint32 &GetVideoStreamByContainerParams::maxVideoBitDepth() const {
	return m_maxVideoBitDepth.value();
}

void GetVideoStreamByContainerParams::setMaxVideoBitDepth(qint32 newMaxVideoBitDepth)  {
	m_maxVideoBitDepth = newMaxVideoBitDepth;
}

bool GetVideoStreamByContainerParams::maxVideoBitDepthNull() const {
	// Nullable: true
	// Type Nullable: false
	

	return !m_maxVideoBitDepth.has_value();
}

void GetVideoStreamByContainerParams::setMaxVideoBitDepthNull() {
	m_maxVideoBitDepth = std::nullopt;
}


const QString &GetVideoStreamByContainerParams::mediaSourceId() const {
	return m_mediaSourceId;
}

void GetVideoStreamByContainerParams::setMediaSourceId(QString newMediaSourceId)  {
	m_mediaSourceId = newMediaSourceId;
}

bool GetVideoStreamByContainerParams::mediaSourceIdNull() const {
	// Nullable: true
	// Type Nullable: true
	

	return m_mediaSourceId.isNull();
}

void GetVideoStreamByContainerParams::setMediaSourceIdNull() {
	m_mediaSourceId.clear();
}


const qint32 &GetVideoStreamByContainerParams::minSegments() const {
	return m_minSegments.value();
}

void GetVideoStreamByContainerParams::setMinSegments(qint32 newMinSegments)  {
	m_minSegments = newMinSegments;
}

bool GetVideoStreamByContainerParams::minSegmentsNull() const {
	// Nullable: true
	// Type Nullable: false
	

	return !m_minSegments.has_value();
}

void GetVideoStreamByContainerParams::setMinSegmentsNull() {
	m_minSegments = std::nullopt;
}


const QString &GetVideoStreamByContainerParams::params() const {
	return m_params;
}

void GetVideoStreamByContainerParams::setParams(QString newParams)  {
	m_params = newParams;
}

bool GetVideoStreamByContainerParams::paramsNull() const {
	// Nullable: true
	// Type Nullable: true
	

	return m_params.isNull();
}

void GetVideoStreamByContainerParams::setParamsNull() {
	m_params.clear();
}


const QString &GetVideoStreamByContainerParams::playSessionId() const {
	return m_playSessionId;
}

void GetVideoStreamByContainerParams::setPlaySessionId(QString newPlaySessionId)  {
	m_playSessionId = newPlaySessionId;
}

bool GetVideoStreamByContainerParams::playSessionIdNull() const {
	// Nullable: true
	// Type Nullable: true
	

	return m_playSessionId.isNull();
}

void GetVideoStreamByContainerParams::setPlaySessionIdNull() {
	m_playSessionId.clear();
}


const QString &GetVideoStreamByContainerParams::profile() const {
	return m_profile;
}

void GetVideoStreamByContainerParams::setProfile(QString newProfile)  {
	m_profile = newProfile;
}

bool GetVideoStreamByContainerParams::profileNull() const {
	// Nullable: true
	// Type Nullable: true
	

	return m_profile.isNull();
}

void GetVideoStreamByContainerParams::setProfileNull() {
	m_profile.clear();
}


const bool &GetVideoStreamByContainerParams::requireAvc() const {
	return m_requireAvc.value();
}

void GetVideoStreamByContainerParams::setRequireAvc(bool newRequireAvc)  {
	m_requireAvc = newRequireAvc;
}

bool GetVideoStreamByContainerParams::requireAvcNull() const {
	// Nullable: true
	// Type Nullable: false
	

	return !m_requireAvc.has_value();
}

void GetVideoStreamByContainerParams::setRequireAvcNull() {
	m_requireAvc = std::nullopt;
}


const bool &GetVideoStreamByContainerParams::requireNonAnamorphic() const {
	return m_requireNonAnamorphic.value();
}

void GetVideoStreamByContainerParams::setRequireNonAnamorphic(bool newRequireNonAnamorphic)  {
	m_requireNonAnamorphic = newRequireNonAnamorphic;
}

bool GetVideoStreamByContainerParams::requireNonAnamorphicNull() const {
	// Nullable: true
	// Type Nullable: false
	

	return !m_requireNonAnamorphic.has_value();
}

void GetVideoStreamByContainerParams::setRequireNonAnamorphicNull() {
	m_requireNonAnamorphic = std::nullopt;
}


const QString &GetVideoStreamByContainerParams::segmentContainer() const {
	return m_segmentContainer;
}

void GetVideoStreamByContainerParams::setSegmentContainer(QString newSegmentContainer)  {
	m_segmentContainer = newSegmentContainer;
}

bool GetVideoStreamByContainerParams::segmentContainerNull() const {
	// Nullable: true
	// Type Nullable: true
	

	return m_segmentContainer.isNull();
}

void GetVideoStreamByContainerParams::setSegmentContainerNull() {
	m_segmentContainer.clear();
}


const qint32 &GetVideoStreamByContainerParams::segmentLength() const {
	return m_segmentLength.value();
}

void GetVideoStreamByContainerParams::setSegmentLength(qint32 newSegmentLength)  {
	m_segmentLength = newSegmentLength;
}

bool GetVideoStreamByContainerParams::segmentLengthNull() const {
	// Nullable: true
	// Type Nullable: false
	

	return !m_segmentLength.has_value();
}

void GetVideoStreamByContainerParams::setSegmentLengthNull() {
	m_segmentLength = std::nullopt;
}


const qint64 &GetVideoStreamByContainerParams::startTimeTicks() const {
	return m_startTimeTicks.value();
}

void GetVideoStreamByContainerParams::setStartTimeTicks(qint64 newStartTimeTicks)  {
	m_startTimeTicks = newStartTimeTicks;
}

bool GetVideoStreamByContainerParams::startTimeTicksNull() const {
	// Nullable: true
	// Type Nullable: false
	

	return !m_startTimeTicks.has_value();
}

void GetVideoStreamByContainerParams::setStartTimeTicksNull() {
	m_startTimeTicks = std::nullopt;
}


const bool &GetVideoStreamByContainerParams::staticStreaming() const {
	return m_staticStreaming.value();
}

void GetVideoStreamByContainerParams::setStaticStreaming(bool newStaticStreaming)  {
	m_staticStreaming = newStaticStreaming;
}

bool GetVideoStreamByContainerParams::staticStreamingNull() const {
	// Nullable: true
	// Type Nullable: false
	

	return !m_staticStreaming.has_value();
}

void GetVideoStreamByContainerParams::setStaticStreamingNull() {
	m_staticStreaming = std::nullopt;
}


const QJsonObject &GetVideoStreamByContainerParams::streamOptions() const {
	return m_streamOptions;
}

void GetVideoStreamByContainerParams::setStreamOptions(QJsonObject newStreamOptions)  {
	m_streamOptions = newStreamOptions;
}

bool GetVideoStreamByContainerParams::streamOptionsNull() const {
	// Nullable: true
	// Type Nullable: true
	

	return m_streamOptions.isEmpty();
}

void GetVideoStreamByContainerParams::setStreamOptionsNull() {
	m_streamOptions= QJsonObject();
}


const QString &GetVideoStreamByContainerParams::subtitleCodec() const {
	return m_subtitleCodec;
}

void GetVideoStreamByContainerParams::setSubtitleCodec(QString newSubtitleCodec)  {
	m_subtitleCodec = newSubtitleCodec;
}

bool GetVideoStreamByContainerParams::subtitleCodecNull() const {
	// Nullable: true
	// Type Nullable: true
	

	return m_subtitleCodec.isNull();
}

void GetVideoStreamByContainerParams::setSubtitleCodecNull() {
	m_subtitleCodec.clear();
}


const SubtitleDeliveryMethod &GetVideoStreamByContainerParams::subtitleMethod() const {
	return m_subtitleMethod;
}

void GetVideoStreamByContainerParams::setSubtitleMethod(SubtitleDeliveryMethod newSubtitleMethod)  {
	m_subtitleMethod = newSubtitleMethod;
}

bool GetVideoStreamByContainerParams::subtitleMethodNull() const {
	// Nullable: true
	// Type Nullable: true
	

	return m_subtitleMethod== SubtitleDeliveryMethod::EnumNotSet;
}

void GetVideoStreamByContainerParams::setSubtitleMethodNull() {
	m_subtitleMethod= SubtitleDeliveryMethod::EnumNotSet;
}


const qint32 &GetVideoStreamByContainerParams::subtitleStreamIndex() const {
	return m_subtitleStreamIndex.value();
}

void GetVideoStreamByContainerParams::setSubtitleStreamIndex(qint32 newSubtitleStreamIndex)  {
	m_subtitleStreamIndex = newSubtitleStreamIndex;
}

bool GetVideoStreamByContainerParams::subtitleStreamIndexNull() const {
	// Nullable: true
	// Type Nullable: false
	

	return !m_subtitleStreamIndex.has_value();
}

void GetVideoStreamByContainerParams::setSubtitleStreamIndexNull() {
	m_subtitleStreamIndex = std::nullopt;
}


const QString &GetVideoStreamByContainerParams::tag() const {
	return m_tag;
}

void GetVideoStreamByContainerParams::setTag(QString newTag)  {
	m_tag = newTag;
}

bool GetVideoStreamByContainerParams::tagNull() const {
	// Nullable: true
	// Type Nullable: true
	

	return m_tag.isNull();
}

void GetVideoStreamByContainerParams::setTagNull() {
	m_tag.clear();
}


const QString &GetVideoStreamByContainerParams::transcodeReasons() const {
	return m_transcodeReasons;
}

void GetVideoStreamByContainerParams::setTranscodeReasons(QString newTranscodeReasons)  {
	m_transcodeReasons = newTranscodeReasons;
}

bool GetVideoStreamByContainerParams::transcodeReasonsNull() const {
	// Nullable: true
	// Type Nullable: true
	

	return m_transcodeReasons.isNull();
}

void GetVideoStreamByContainerParams::setTranscodeReasonsNull() {
	m_transcodeReasons.clear();
}


const qint32 &GetVideoStreamByContainerParams::transcodingMaxAudioChannels() const {
	return m_transcodingMaxAudioChannels.value();
}

void GetVideoStreamByContainerParams::setTranscodingMaxAudioChannels(qint32 newTranscodingMaxAudioChannels)  {
	m_transcodingMaxAudioChannels = newTranscodingMaxAudioChannels;
}

bool GetVideoStreamByContainerParams::transcodingMaxAudioChannelsNull() const {
	// Nullable: true
	// Type Nullable: false
	

	return !m_transcodingMaxAudioChannels.has_value();
}

void GetVideoStreamByContainerParams::setTranscodingMaxAudioChannelsNull() {
	m_transcodingMaxAudioChannels = std::nullopt;
}


const qint32 &GetVideoStreamByContainerParams::videoBitRate() const {
	return m_videoBitRate.value();
}

void GetVideoStreamByContainerParams::setVideoBitRate(qint32 newVideoBitRate)  {
	m_videoBitRate = newVideoBitRate;
}

bool GetVideoStreamByContainerParams::videoBitRateNull() const {
	// Nullable: true
	// Type Nullable: false
	

	return !m_videoBitRate.has_value();
}

void GetVideoStreamByContainerParams::setVideoBitRateNull() {
	m_videoBitRate = std::nullopt;
}


const QString &GetVideoStreamByContainerParams::videoCodec() const {
	return m_videoCodec;
}

void GetVideoStreamByContainerParams::setVideoCodec(QString newVideoCodec)  {
	m_videoCodec = newVideoCodec;
}

bool GetVideoStreamByContainerParams::videoCodecNull() const {
	// Nullable: true
	// Type Nullable: true
	

	return m_videoCodec.isNull();
}

void GetVideoStreamByContainerParams::setVideoCodecNull() {
	m_videoCodec.clear();
}


const qint32 &GetVideoStreamByContainerParams::videoStreamIndex() const {
	return m_videoStreamIndex.value();
}

void GetVideoStreamByContainerParams::setVideoStreamIndex(qint32 newVideoStreamIndex)  {
	m_videoStreamIndex = newVideoStreamIndex;
}

bool GetVideoStreamByContainerParams::videoStreamIndexNull() const {
	// Nullable: true
	// Type Nullable: false
	

	return !m_videoStreamIndex.has_value();
}

void GetVideoStreamByContainerParams::setVideoStreamIndexNull() {
	m_videoStreamIndex = std::nullopt;
}


const qint32 &GetVideoStreamByContainerParams::width() const {
	return m_width.value();
}

void GetVideoStreamByContainerParams::setWidth(qint32 newWidth)  {
	m_width = newWidth;
}

bool GetVideoStreamByContainerParams::widthNull() const {
	// Nullable: true
	// Type Nullable: false
	

	return !m_width.has_value();
}

void GetVideoStreamByContainerParams::setWidthNull() {
	m_width = std::nullopt;
}




// GetVirtualFoldersParams



// GetWakeOnLanInfoParams



// GetYearParams

const qint32 &GetYearParams::year() const {
	return m_year;
}

void GetYearParams::setYear(qint32 newYear) {
	m_year = newYear;
}


const QString &GetYearParams::userId() const {
	return m_userId;
}

void GetYearParams::setUserId(QString newUserId)  {
	m_userId = newUserId;
}

bool GetYearParams::userIdNull() const {
	// Nullable: true
	// Type Nullable: true
	

	return m_userId.isNull();
}

void GetYearParams::setUserIdNull() {
	m_userId.clear();
}




// GetYearsParams

const QList<ImageType> &GetYearsParams::enableImageTypes() const {
	return m_enableImageTypes;
}

void GetYearsParams::setEnableImageTypes(QList<ImageType> newEnableImageTypes)  {
	m_enableImageTypes = newEnableImageTypes;
}

bool GetYearsParams::enableImageTypesNull() const {
	// Nullable: true
	// Type Nullable: true
	

	return m_enableImageTypes.size() == 0;
}

void GetYearsParams::setEnableImageTypesNull() {
	m_enableImageTypes.clear();
}


const bool &GetYearsParams::enableImages() const {
	return m_enableImages.value();
}

void GetYearsParams::setEnableImages(bool newEnableImages)  {
	m_enableImages = newEnableImages;
}

bool GetYearsParams::enableImagesNull() const {
	// Nullable: true
	// Type Nullable: false
	

	return !m_enableImages.has_value();
}

void GetYearsParams::setEnableImagesNull() {
	m_enableImages = std::nullopt;
}


const bool &GetYearsParams::enableUserData() const {
	return m_enableUserData.value();
}

void GetYearsParams::setEnableUserData(bool newEnableUserData)  {
	m_enableUserData = newEnableUserData;
}

bool GetYearsParams::enableUserDataNull() const {
	// Nullable: true
	// Type Nullable: false
	

	return !m_enableUserData.has_value();
}

void GetYearsParams::setEnableUserDataNull() {
	m_enableUserData = std::nullopt;
}


const QStringList &GetYearsParams::excludeItemTypes() const {
	return m_excludeItemTypes;
}

void GetYearsParams::setExcludeItemTypes(QStringList newExcludeItemTypes)  {
	m_excludeItemTypes = newExcludeItemTypes;
}

bool GetYearsParams::excludeItemTypesNull() const {
	// Nullable: true
	// Type Nullable: true
	

	return m_excludeItemTypes.size() == 0;
}

void GetYearsParams::setExcludeItemTypesNull() {
	m_excludeItemTypes.clear();
}


const QList<ItemFields> &GetYearsParams::fields() const {
	return m_fields;
}

void GetYearsParams::setFields(QList<ItemFields> newFields)  {
	m_fields = newFields;
}

bool GetYearsParams::fieldsNull() const {
	// Nullable: true
	// Type Nullable: true
	

	return m_fields.size() == 0;
}

void GetYearsParams::setFieldsNull() {
	m_fields.clear();
}


const qint32 &GetYearsParams::imageTypeLimit() const {
	return m_imageTypeLimit.value();
}

void GetYearsParams::setImageTypeLimit(qint32 newImageTypeLimit)  {
	m_imageTypeLimit = newImageTypeLimit;
}

bool GetYearsParams::imageTypeLimitNull() const {
	// Nullable: true
	// Type Nullable: false
	

	return !m_imageTypeLimit.has_value();
}

void GetYearsParams::setImageTypeLimitNull() {
	m_imageTypeLimit = std::nullopt;
}


const QStringList &GetYearsParams::includeItemTypes() const {
	return m_includeItemTypes;
}

void GetYearsParams::setIncludeItemTypes(QStringList newIncludeItemTypes)  {
	m_includeItemTypes = newIncludeItemTypes;
}

bool GetYearsParams::includeItemTypesNull() const {
	// Nullable: true
	// Type Nullable: true
	

	return m_includeItemTypes.size() == 0;
}

void GetYearsParams::setIncludeItemTypesNull() {
	m_includeItemTypes.clear();
}


const qint32 &GetYearsParams::limit() const {
	return m_limit.value();
}

void GetYearsParams::setLimit(qint32 newLimit)  {
	m_limit = newLimit;
}

bool GetYearsParams::limitNull() const {
	// Nullable: true
	// Type Nullable: false
	

	return !m_limit.has_value();
}

void GetYearsParams::setLimitNull() {
	m_limit = std::nullopt;
}


const QStringList &GetYearsParams::mediaTypes() const {
	return m_mediaTypes;
}

void GetYearsParams::setMediaTypes(QStringList newMediaTypes)  {
	m_mediaTypes = newMediaTypes;
}

bool GetYearsParams::mediaTypesNull() const {
	// Nullable: true
	// Type Nullable: true
	

	return m_mediaTypes.size() == 0;
}

void GetYearsParams::setMediaTypesNull() {
	m_mediaTypes.clear();
}


const QString &GetYearsParams::parentId() const {
	return m_parentId;
}

void GetYearsParams::setParentId(QString newParentId)  {
	m_parentId = newParentId;
}

bool GetYearsParams::parentIdNull() const {
	// Nullable: true
	// Type Nullable: true
	

	return m_parentId.isNull();
}

void GetYearsParams::setParentIdNull() {
	m_parentId.clear();
}


const bool &GetYearsParams::recursive() const {
	return m_recursive.value();
}

void GetYearsParams::setRecursive(bool newRecursive)  {
	m_recursive = newRecursive;
}

bool GetYearsParams::recursiveNull() const {
	// Nullable: false
	// Type Nullable: false
	

	return !m_recursive.has_value();
}

void GetYearsParams::setRecursiveNull() {
	m_recursive = std::nullopt;
}


const QString &GetYearsParams::sortBy() const {
	return m_sortBy;
}

void GetYearsParams::setSortBy(QString newSortBy)  {
	m_sortBy = newSortBy;
}

bool GetYearsParams::sortByNull() const {
	// Nullable: true
	// Type Nullable: true
	

	return m_sortBy.isNull();
}

void GetYearsParams::setSortByNull() {
	m_sortBy.clear();
}


const QString &GetYearsParams::sortOrder() const {
	return m_sortOrder;
}

void GetYearsParams::setSortOrder(QString newSortOrder)  {
	m_sortOrder = newSortOrder;
}

bool GetYearsParams::sortOrderNull() const {
	// Nullable: true
	// Type Nullable: true
	

	return m_sortOrder.isNull();
}

void GetYearsParams::setSortOrderNull() {
	m_sortOrder.clear();
}


const qint32 &GetYearsParams::startIndex() const {
	return m_startIndex.value();
}

void GetYearsParams::setStartIndex(qint32 newStartIndex)  {
	m_startIndex = newStartIndex;
}

bool GetYearsParams::startIndexNull() const {
	// Nullable: true
	// Type Nullable: false
	

	return !m_startIndex.has_value();
}

void GetYearsParams::setStartIndexNull() {
	m_startIndex = std::nullopt;
}


const QString &GetYearsParams::userId() const {
	return m_userId;
}

void GetYearsParams::setUserId(QString newUserId)  {
	m_userId = newUserId;
}

bool GetYearsParams::userIdNull() const {
	// Nullable: true
	// Type Nullable: true
	

	return m_userId.isNull();
}

void GetYearsParams::setUserIdNull() {
	m_userId.clear();
}




// HeadArtistImageParams

const qint32 &HeadArtistImageParams::imageIndex() const {
	return m_imageIndex;
}

void HeadArtistImageParams::setImageIndex(qint32 newImageIndex) {
	m_imageIndex = newImageIndex;
}


const ImageType &HeadArtistImageParams::imageType() const {
	return m_imageType;
}

void HeadArtistImageParams::setImageType(ImageType newImageType) {
	m_imageType = newImageType;
}


const QString &HeadArtistImageParams::name() const {
	return m_name;
}

void HeadArtistImageParams::setName(QString newName) {
	m_name = newName;
}


const bool &HeadArtistImageParams::addPlayedIndicator() const {
	return m_addPlayedIndicator.value();
}

void HeadArtistImageParams::setAddPlayedIndicator(bool newAddPlayedIndicator)  {
	m_addPlayedIndicator = newAddPlayedIndicator;
}

bool HeadArtistImageParams::addPlayedIndicatorNull() const {
	// Nullable: true
	// Type Nullable: false
	

	return !m_addPlayedIndicator.has_value();
}

void HeadArtistImageParams::setAddPlayedIndicatorNull() {
	m_addPlayedIndicator = std::nullopt;
}


const QString &HeadArtistImageParams::backgroundColor() const {
	return m_backgroundColor;
}

void HeadArtistImageParams::setBackgroundColor(QString newBackgroundColor)  {
	m_backgroundColor = newBackgroundColor;
}

bool HeadArtistImageParams::backgroundColorNull() const {
	// Nullable: true
	// Type Nullable: true
	

	return m_backgroundColor.isNull();
}

void HeadArtistImageParams::setBackgroundColorNull() {
	m_backgroundColor.clear();
}


const qint32 &HeadArtistImageParams::blur() const {
	return m_blur.value();
}

void HeadArtistImageParams::setBlur(qint32 newBlur)  {
	m_blur = newBlur;
}

bool HeadArtistImageParams::blurNull() const {
	// Nullable: true
	// Type Nullable: false
	

	return !m_blur.has_value();
}

void HeadArtistImageParams::setBlurNull() {
	m_blur = std::nullopt;
}


const bool &HeadArtistImageParams::cropWhitespace() const {
	return m_cropWhitespace.value();
}

void HeadArtistImageParams::setCropWhitespace(bool newCropWhitespace)  {
	m_cropWhitespace = newCropWhitespace;
}

bool HeadArtistImageParams::cropWhitespaceNull() const {
	// Nullable: true
	// Type Nullable: false
	

	return !m_cropWhitespace.has_value();
}

void HeadArtistImageParams::setCropWhitespaceNull() {
	m_cropWhitespace = std::nullopt;
}


const QString &HeadArtistImageParams::foregroundLayer() const {
	return m_foregroundLayer;
}

void HeadArtistImageParams::setForegroundLayer(QString newForegroundLayer)  {
	m_foregroundLayer = newForegroundLayer;
}

bool HeadArtistImageParams::foregroundLayerNull() const {
	// Nullable: true
	// Type Nullable: true
	

	return m_foregroundLayer.isNull();
}

void HeadArtistImageParams::setForegroundLayerNull() {
	m_foregroundLayer.clear();
}


const ImageFormat &HeadArtistImageParams::format() const {
	return m_format;
}

void HeadArtistImageParams::setFormat(ImageFormat newFormat)  {
	m_format = newFormat;
}

bool HeadArtistImageParams::formatNull() const {
	// Nullable: true
	// Type Nullable: true
	

	return m_format== ImageFormat::EnumNotSet;
}

void HeadArtistImageParams::setFormatNull() {
	m_format= ImageFormat::EnumNotSet;
}


const qint32 &HeadArtistImageParams::height() const {
	return m_height.value();
}

void HeadArtistImageParams::setHeight(qint32 newHeight)  {
	m_height = newHeight;
}

bool HeadArtistImageParams::heightNull() const {
	// Nullable: true
	// Type Nullable: false
	

	return !m_height.has_value();
}

void HeadArtistImageParams::setHeightNull() {
	m_height = std::nullopt;
}


const qint32 &HeadArtistImageParams::maxHeight() const {
	return m_maxHeight.value();
}

void HeadArtistImageParams::setMaxHeight(qint32 newMaxHeight)  {
	m_maxHeight = newMaxHeight;
}

bool HeadArtistImageParams::maxHeightNull() const {
	// Nullable: true
	// Type Nullable: false
	

	return !m_maxHeight.has_value();
}

void HeadArtistImageParams::setMaxHeightNull() {
	m_maxHeight = std::nullopt;
}


const qint32 &HeadArtistImageParams::maxWidth() const {
	return m_maxWidth.value();
}

void HeadArtistImageParams::setMaxWidth(qint32 newMaxWidth)  {
	m_maxWidth = newMaxWidth;
}

bool HeadArtistImageParams::maxWidthNull() const {
	// Nullable: true
	// Type Nullable: false
	

	return !m_maxWidth.has_value();
}

void HeadArtistImageParams::setMaxWidthNull() {
	m_maxWidth = std::nullopt;
}


const double &HeadArtistImageParams::percentPlayed() const {
	return m_percentPlayed.value();
}

void HeadArtistImageParams::setPercentPlayed(double newPercentPlayed)  {
	m_percentPlayed = newPercentPlayed;
}

bool HeadArtistImageParams::percentPlayedNull() const {
	// Nullable: true
	// Type Nullable: false
	

	return !m_percentPlayed.has_value();
}

void HeadArtistImageParams::setPercentPlayedNull() {
	m_percentPlayed = std::nullopt;
}


const qint32 &HeadArtistImageParams::quality() const {
	return m_quality.value();
}

void HeadArtistImageParams::setQuality(qint32 newQuality)  {
	m_quality = newQuality;
}

bool HeadArtistImageParams::qualityNull() const {
	// Nullable: true
	// Type Nullable: false
	

	return !m_quality.has_value();
}

void HeadArtistImageParams::setQualityNull() {
	m_quality = std::nullopt;
}


const QString &HeadArtistImageParams::tag() const {
	return m_tag;
}

void HeadArtistImageParams::setTag(QString newTag)  {
	m_tag = newTag;
}

bool HeadArtistImageParams::tagNull() const {
	// Nullable: true
	// Type Nullable: true
	

	return m_tag.isNull();
}

void HeadArtistImageParams::setTagNull() {
	m_tag.clear();
}


const qint32 &HeadArtistImageParams::unplayedCount() const {
	return m_unplayedCount.value();
}

void HeadArtistImageParams::setUnplayedCount(qint32 newUnplayedCount)  {
	m_unplayedCount = newUnplayedCount;
}

bool HeadArtistImageParams::unplayedCountNull() const {
	// Nullable: true
	// Type Nullable: false
	

	return !m_unplayedCount.has_value();
}

void HeadArtistImageParams::setUnplayedCountNull() {
	m_unplayedCount = std::nullopt;
}


const qint32 &HeadArtistImageParams::width() const {
	return m_width.value();
}

void HeadArtistImageParams::setWidth(qint32 newWidth)  {
	m_width = newWidth;
}

bool HeadArtistImageParams::widthNull() const {
	// Nullable: true
	// Type Nullable: false
	

	return !m_width.has_value();
}

void HeadArtistImageParams::setWidthNull() {
	m_width = std::nullopt;
}




// HeadAudioStreamParams

const QString &HeadAudioStreamParams::itemId() const {
	return m_itemId;
}

void HeadAudioStreamParams::setItemId(QString newItemId) {
	m_itemId = newItemId;
}


const bool &HeadAudioStreamParams::allowAudioStreamCopy() const {
	return m_allowAudioStreamCopy.value();
}

void HeadAudioStreamParams::setAllowAudioStreamCopy(bool newAllowAudioStreamCopy)  {
	m_allowAudioStreamCopy = newAllowAudioStreamCopy;
}

bool HeadAudioStreamParams::allowAudioStreamCopyNull() const {
	// Nullable: true
	// Type Nullable: false
	

	return !m_allowAudioStreamCopy.has_value();
}

void HeadAudioStreamParams::setAllowAudioStreamCopyNull() {
	m_allowAudioStreamCopy = std::nullopt;
}


const bool &HeadAudioStreamParams::allowVideoStreamCopy() const {
	return m_allowVideoStreamCopy.value();
}

void HeadAudioStreamParams::setAllowVideoStreamCopy(bool newAllowVideoStreamCopy)  {
	m_allowVideoStreamCopy = newAllowVideoStreamCopy;
}

bool HeadAudioStreamParams::allowVideoStreamCopyNull() const {
	// Nullable: true
	// Type Nullable: false
	

	return !m_allowVideoStreamCopy.has_value();
}

void HeadAudioStreamParams::setAllowVideoStreamCopyNull() {
	m_allowVideoStreamCopy = std::nullopt;
}


const qint32 &HeadAudioStreamParams::audioBitRate() const {
	return m_audioBitRate.value();
}

void HeadAudioStreamParams::setAudioBitRate(qint32 newAudioBitRate)  {
	m_audioBitRate = newAudioBitRate;
}

bool HeadAudioStreamParams::audioBitRateNull() const {
	// Nullable: true
	// Type Nullable: false
	

	return !m_audioBitRate.has_value();
}

void HeadAudioStreamParams::setAudioBitRateNull() {
	m_audioBitRate = std::nullopt;
}


const qint32 &HeadAudioStreamParams::audioChannels() const {
	return m_audioChannels.value();
}

void HeadAudioStreamParams::setAudioChannels(qint32 newAudioChannels)  {
	m_audioChannels = newAudioChannels;
}

bool HeadAudioStreamParams::audioChannelsNull() const {
	// Nullable: true
	// Type Nullable: false
	

	return !m_audioChannels.has_value();
}

void HeadAudioStreamParams::setAudioChannelsNull() {
	m_audioChannels = std::nullopt;
}


const QString &HeadAudioStreamParams::audioCodec() const {
	return m_audioCodec;
}

void HeadAudioStreamParams::setAudioCodec(QString newAudioCodec)  {
	m_audioCodec = newAudioCodec;
}

bool HeadAudioStreamParams::audioCodecNull() const {
	// Nullable: true
	// Type Nullable: true
	

	return m_audioCodec.isNull();
}

void HeadAudioStreamParams::setAudioCodecNull() {
	m_audioCodec.clear();
}


const qint32 &HeadAudioStreamParams::audioSampleRate() const {
	return m_audioSampleRate.value();
}

void HeadAudioStreamParams::setAudioSampleRate(qint32 newAudioSampleRate)  {
	m_audioSampleRate = newAudioSampleRate;
}

bool HeadAudioStreamParams::audioSampleRateNull() const {
	// Nullable: true
	// Type Nullable: false
	

	return !m_audioSampleRate.has_value();
}

void HeadAudioStreamParams::setAudioSampleRateNull() {
	m_audioSampleRate = std::nullopt;
}


const qint32 &HeadAudioStreamParams::audioStreamIndex() const {
	return m_audioStreamIndex.value();
}

void HeadAudioStreamParams::setAudioStreamIndex(qint32 newAudioStreamIndex)  {
	m_audioStreamIndex = newAudioStreamIndex;
}

bool HeadAudioStreamParams::audioStreamIndexNull() const {
	// Nullable: true
	// Type Nullable: false
	

	return !m_audioStreamIndex.has_value();
}

void HeadAudioStreamParams::setAudioStreamIndexNull() {
	m_audioStreamIndex = std::nullopt;
}


const bool &HeadAudioStreamParams::breakOnNonKeyFrames() const {
	return m_breakOnNonKeyFrames.value();
}

void HeadAudioStreamParams::setBreakOnNonKeyFrames(bool newBreakOnNonKeyFrames)  {
	m_breakOnNonKeyFrames = newBreakOnNonKeyFrames;
}

bool HeadAudioStreamParams::breakOnNonKeyFramesNull() const {
	// Nullable: true
	// Type Nullable: false
	

	return !m_breakOnNonKeyFrames.has_value();
}

void HeadAudioStreamParams::setBreakOnNonKeyFramesNull() {
	m_breakOnNonKeyFrames = std::nullopt;
}


const QString &HeadAudioStreamParams::container() const {
	return m_container;
}

void HeadAudioStreamParams::setContainer(QString newContainer)  {
	m_container = newContainer;
}

bool HeadAudioStreamParams::containerNull() const {
	// Nullable: true
	// Type Nullable: true
	

	return m_container.isNull();
}

void HeadAudioStreamParams::setContainerNull() {
	m_container.clear();
}


const EncodingContext &HeadAudioStreamParams::context() const {
	return m_context;
}

void HeadAudioStreamParams::setContext(EncodingContext newContext)  {
	m_context = newContext;
}

bool HeadAudioStreamParams::contextNull() const {
	// Nullable: true
	// Type Nullable: true
	

	return m_context== EncodingContext::EnumNotSet;
}

void HeadAudioStreamParams::setContextNull() {
	m_context= EncodingContext::EnumNotSet;
}


const bool &HeadAudioStreamParams::copyTimestamps() const {
	return m_copyTimestamps.value();
}

void HeadAudioStreamParams::setCopyTimestamps(bool newCopyTimestamps)  {
	m_copyTimestamps = newCopyTimestamps;
}

bool HeadAudioStreamParams::copyTimestampsNull() const {
	// Nullable: true
	// Type Nullable: false
	

	return !m_copyTimestamps.has_value();
}

void HeadAudioStreamParams::setCopyTimestampsNull() {
	m_copyTimestamps = std::nullopt;
}


const qint32 &HeadAudioStreamParams::cpuCoreLimit() const {
	return m_cpuCoreLimit.value();
}

void HeadAudioStreamParams::setCpuCoreLimit(qint32 newCpuCoreLimit)  {
	m_cpuCoreLimit = newCpuCoreLimit;
}

bool HeadAudioStreamParams::cpuCoreLimitNull() const {
	// Nullable: true
	// Type Nullable: false
	

	return !m_cpuCoreLimit.has_value();
}

void HeadAudioStreamParams::setCpuCoreLimitNull() {
	m_cpuCoreLimit = std::nullopt;
}


const bool &HeadAudioStreamParams::deInterlace() const {
	return m_deInterlace.value();
}

void HeadAudioStreamParams::setDeInterlace(bool newDeInterlace)  {
	m_deInterlace = newDeInterlace;
}

bool HeadAudioStreamParams::deInterlaceNull() const {
	// Nullable: true
	// Type Nullable: false
	

	return !m_deInterlace.has_value();
}

void HeadAudioStreamParams::setDeInterlaceNull() {
	m_deInterlace = std::nullopt;
}


const QString &HeadAudioStreamParams::deviceId() const {
	return m_deviceId;
}

void HeadAudioStreamParams::setDeviceId(QString newDeviceId)  {
	m_deviceId = newDeviceId;
}

bool HeadAudioStreamParams::deviceIdNull() const {
	// Nullable: true
	// Type Nullable: true
	

	return m_deviceId.isNull();
}

void HeadAudioStreamParams::setDeviceIdNull() {
	m_deviceId.clear();
}


const QString &HeadAudioStreamParams::deviceProfileId() const {
	return m_deviceProfileId;
}

void HeadAudioStreamParams::setDeviceProfileId(QString newDeviceProfileId)  {
	m_deviceProfileId = newDeviceProfileId;
}

bool HeadAudioStreamParams::deviceProfileIdNull() const {
	// Nullable: true
	// Type Nullable: true
	

	return m_deviceProfileId.isNull();
}

void HeadAudioStreamParams::setDeviceProfileIdNull() {
	m_deviceProfileId.clear();
}


const bool &HeadAudioStreamParams::enableAutoStreamCopy() const {
	return m_enableAutoStreamCopy.value();
}

void HeadAudioStreamParams::setEnableAutoStreamCopy(bool newEnableAutoStreamCopy)  {
	m_enableAutoStreamCopy = newEnableAutoStreamCopy;
}

bool HeadAudioStreamParams::enableAutoStreamCopyNull() const {
	// Nullable: true
	// Type Nullable: false
	

	return !m_enableAutoStreamCopy.has_value();
}

void HeadAudioStreamParams::setEnableAutoStreamCopyNull() {
	m_enableAutoStreamCopy = std::nullopt;
}


const bool &HeadAudioStreamParams::enableMpegtsM2TsMode() const {
	return m_enableMpegtsM2TsMode.value();
}

void HeadAudioStreamParams::setEnableMpegtsM2TsMode(bool newEnableMpegtsM2TsMode)  {
	m_enableMpegtsM2TsMode = newEnableMpegtsM2TsMode;
}

bool HeadAudioStreamParams::enableMpegtsM2TsModeNull() const {
	// Nullable: true
	// Type Nullable: false
	

	return !m_enableMpegtsM2TsMode.has_value();
}

void HeadAudioStreamParams::setEnableMpegtsM2TsModeNull() {
	m_enableMpegtsM2TsMode = std::nullopt;
}


const float &HeadAudioStreamParams::framerate() const {
	return m_framerate.value();
}

void HeadAudioStreamParams::setFramerate(float newFramerate)  {
	m_framerate = newFramerate;
}

bool HeadAudioStreamParams::framerateNull() const {
	// Nullable: true
	// Type Nullable: false
	

	return !m_framerate.has_value();
}

void HeadAudioStreamParams::setFramerateNull() {
	m_framerate = std::nullopt;
}


const qint32 &HeadAudioStreamParams::height() const {
	return m_height.value();
}

void HeadAudioStreamParams::setHeight(qint32 newHeight)  {
	m_height = newHeight;
}

bool HeadAudioStreamParams::heightNull() const {
	// Nullable: true
	// Type Nullable: false
	

	return !m_height.has_value();
}

void HeadAudioStreamParams::setHeightNull() {
	m_height = std::nullopt;
}


const QString &HeadAudioStreamParams::level() const {
	return m_level;
}

void HeadAudioStreamParams::setLevel(QString newLevel)  {
	m_level = newLevel;
}

bool HeadAudioStreamParams::levelNull() const {
	// Nullable: true
	// Type Nullable: true
	

	return m_level.isNull();
}

void HeadAudioStreamParams::setLevelNull() {
	m_level.clear();
}


const QString &HeadAudioStreamParams::liveStreamId() const {
	return m_liveStreamId;
}

void HeadAudioStreamParams::setLiveStreamId(QString newLiveStreamId)  {
	m_liveStreamId = newLiveStreamId;
}

bool HeadAudioStreamParams::liveStreamIdNull() const {
	// Nullable: true
	// Type Nullable: true
	

	return m_liveStreamId.isNull();
}

void HeadAudioStreamParams::setLiveStreamIdNull() {
	m_liveStreamId.clear();
}


const qint32 &HeadAudioStreamParams::maxAudioBitDepth() const {
	return m_maxAudioBitDepth.value();
}

void HeadAudioStreamParams::setMaxAudioBitDepth(qint32 newMaxAudioBitDepth)  {
	m_maxAudioBitDepth = newMaxAudioBitDepth;
}

bool HeadAudioStreamParams::maxAudioBitDepthNull() const {
	// Nullable: true
	// Type Nullable: false
	

	return !m_maxAudioBitDepth.has_value();
}

void HeadAudioStreamParams::setMaxAudioBitDepthNull() {
	m_maxAudioBitDepth = std::nullopt;
}


const qint32 &HeadAudioStreamParams::maxAudioChannels() const {
	return m_maxAudioChannels.value();
}

void HeadAudioStreamParams::setMaxAudioChannels(qint32 newMaxAudioChannels)  {
	m_maxAudioChannels = newMaxAudioChannels;
}

bool HeadAudioStreamParams::maxAudioChannelsNull() const {
	// Nullable: true
	// Type Nullable: false
	

	return !m_maxAudioChannels.has_value();
}

void HeadAudioStreamParams::setMaxAudioChannelsNull() {
	m_maxAudioChannels = std::nullopt;
}


const float &HeadAudioStreamParams::maxFramerate() const {
	return m_maxFramerate.value();
}

void HeadAudioStreamParams::setMaxFramerate(float newMaxFramerate)  {
	m_maxFramerate = newMaxFramerate;
}

bool HeadAudioStreamParams::maxFramerateNull() const {
	// Nullable: true
	// Type Nullable: false
	

	return !m_maxFramerate.has_value();
}

void HeadAudioStreamParams::setMaxFramerateNull() {
	m_maxFramerate = std::nullopt;
}


const qint32 &HeadAudioStreamParams::maxRefFrames() const {
	return m_maxRefFrames.value();
}

void HeadAudioStreamParams::setMaxRefFrames(qint32 newMaxRefFrames)  {
	m_maxRefFrames = newMaxRefFrames;
}

bool HeadAudioStreamParams::maxRefFramesNull() const {
	// Nullable: true
	// Type Nullable: false
	

	return !m_maxRefFrames.has_value();
}

void HeadAudioStreamParams::setMaxRefFramesNull() {
	m_maxRefFrames = std::nullopt;
}


const qint32 &HeadAudioStreamParams::maxVideoBitDepth() const {
	return m_maxVideoBitDepth.value();
}

void HeadAudioStreamParams::setMaxVideoBitDepth(qint32 newMaxVideoBitDepth)  {
	m_maxVideoBitDepth = newMaxVideoBitDepth;
}

bool HeadAudioStreamParams::maxVideoBitDepthNull() const {
	// Nullable: true
	// Type Nullable: false
	

	return !m_maxVideoBitDepth.has_value();
}

void HeadAudioStreamParams::setMaxVideoBitDepthNull() {
	m_maxVideoBitDepth = std::nullopt;
}


const QString &HeadAudioStreamParams::mediaSourceId() const {
	return m_mediaSourceId;
}

void HeadAudioStreamParams::setMediaSourceId(QString newMediaSourceId)  {
	m_mediaSourceId = newMediaSourceId;
}

bool HeadAudioStreamParams::mediaSourceIdNull() const {
	// Nullable: true
	// Type Nullable: true
	

	return m_mediaSourceId.isNull();
}

void HeadAudioStreamParams::setMediaSourceIdNull() {
	m_mediaSourceId.clear();
}


const qint32 &HeadAudioStreamParams::minSegments() const {
	return m_minSegments.value();
}

void HeadAudioStreamParams::setMinSegments(qint32 newMinSegments)  {
	m_minSegments = newMinSegments;
}

bool HeadAudioStreamParams::minSegmentsNull() const {
	// Nullable: true
	// Type Nullable: false
	

	return !m_minSegments.has_value();
}

void HeadAudioStreamParams::setMinSegmentsNull() {
	m_minSegments = std::nullopt;
}


const QString &HeadAudioStreamParams::params() const {
	return m_params;
}

void HeadAudioStreamParams::setParams(QString newParams)  {
	m_params = newParams;
}

bool HeadAudioStreamParams::paramsNull() const {
	// Nullable: true
	// Type Nullable: true
	

	return m_params.isNull();
}

void HeadAudioStreamParams::setParamsNull() {
	m_params.clear();
}


const QString &HeadAudioStreamParams::playSessionId() const {
	return m_playSessionId;
}

void HeadAudioStreamParams::setPlaySessionId(QString newPlaySessionId)  {
	m_playSessionId = newPlaySessionId;
}

bool HeadAudioStreamParams::playSessionIdNull() const {
	// Nullable: true
	// Type Nullable: true
	

	return m_playSessionId.isNull();
}

void HeadAudioStreamParams::setPlaySessionIdNull() {
	m_playSessionId.clear();
}


const QString &HeadAudioStreamParams::profile() const {
	return m_profile;
}

void HeadAudioStreamParams::setProfile(QString newProfile)  {
	m_profile = newProfile;
}

bool HeadAudioStreamParams::profileNull() const {
	// Nullable: true
	// Type Nullable: true
	

	return m_profile.isNull();
}

void HeadAudioStreamParams::setProfileNull() {
	m_profile.clear();
}


const bool &HeadAudioStreamParams::requireAvc() const {
	return m_requireAvc.value();
}

void HeadAudioStreamParams::setRequireAvc(bool newRequireAvc)  {
	m_requireAvc = newRequireAvc;
}

bool HeadAudioStreamParams::requireAvcNull() const {
	// Nullable: true
	// Type Nullable: false
	

	return !m_requireAvc.has_value();
}

void HeadAudioStreamParams::setRequireAvcNull() {
	m_requireAvc = std::nullopt;
}


const bool &HeadAudioStreamParams::requireNonAnamorphic() const {
	return m_requireNonAnamorphic.value();
}

void HeadAudioStreamParams::setRequireNonAnamorphic(bool newRequireNonAnamorphic)  {
	m_requireNonAnamorphic = newRequireNonAnamorphic;
}

bool HeadAudioStreamParams::requireNonAnamorphicNull() const {
	// Nullable: true
	// Type Nullable: false
	

	return !m_requireNonAnamorphic.has_value();
}

void HeadAudioStreamParams::setRequireNonAnamorphicNull() {
	m_requireNonAnamorphic = std::nullopt;
}


const QString &HeadAudioStreamParams::segmentContainer() const {
	return m_segmentContainer;
}

void HeadAudioStreamParams::setSegmentContainer(QString newSegmentContainer)  {
	m_segmentContainer = newSegmentContainer;
}

bool HeadAudioStreamParams::segmentContainerNull() const {
	// Nullable: true
	// Type Nullable: true
	

	return m_segmentContainer.isNull();
}

void HeadAudioStreamParams::setSegmentContainerNull() {
	m_segmentContainer.clear();
}


const qint32 &HeadAudioStreamParams::segmentLength() const {
	return m_segmentLength.value();
}

void HeadAudioStreamParams::setSegmentLength(qint32 newSegmentLength)  {
	m_segmentLength = newSegmentLength;
}

bool HeadAudioStreamParams::segmentLengthNull() const {
	// Nullable: true
	// Type Nullable: false
	

	return !m_segmentLength.has_value();
}

void HeadAudioStreamParams::setSegmentLengthNull() {
	m_segmentLength = std::nullopt;
}


const qint64 &HeadAudioStreamParams::startTimeTicks() const {
	return m_startTimeTicks.value();
}

void HeadAudioStreamParams::setStartTimeTicks(qint64 newStartTimeTicks)  {
	m_startTimeTicks = newStartTimeTicks;
}

bool HeadAudioStreamParams::startTimeTicksNull() const {
	// Nullable: true
	// Type Nullable: false
	

	return !m_startTimeTicks.has_value();
}

void HeadAudioStreamParams::setStartTimeTicksNull() {
	m_startTimeTicks = std::nullopt;
}


const bool &HeadAudioStreamParams::staticStreaming() const {
	return m_staticStreaming.value();
}

void HeadAudioStreamParams::setStaticStreaming(bool newStaticStreaming)  {
	m_staticStreaming = newStaticStreaming;
}

bool HeadAudioStreamParams::staticStreamingNull() const {
	// Nullable: true
	// Type Nullable: false
	

	return !m_staticStreaming.has_value();
}

void HeadAudioStreamParams::setStaticStreamingNull() {
	m_staticStreaming = std::nullopt;
}


const QJsonObject &HeadAudioStreamParams::streamOptions() const {
	return m_streamOptions;
}

void HeadAudioStreamParams::setStreamOptions(QJsonObject newStreamOptions)  {
	m_streamOptions = newStreamOptions;
}

bool HeadAudioStreamParams::streamOptionsNull() const {
	// Nullable: true
	// Type Nullable: true
	

	return m_streamOptions.isEmpty();
}

void HeadAudioStreamParams::setStreamOptionsNull() {
	m_streamOptions= QJsonObject();
}


const QString &HeadAudioStreamParams::subtitleCodec() const {
	return m_subtitleCodec;
}

void HeadAudioStreamParams::setSubtitleCodec(QString newSubtitleCodec)  {
	m_subtitleCodec = newSubtitleCodec;
}

bool HeadAudioStreamParams::subtitleCodecNull() const {
	// Nullable: true
	// Type Nullable: true
	

	return m_subtitleCodec.isNull();
}

void HeadAudioStreamParams::setSubtitleCodecNull() {
	m_subtitleCodec.clear();
}


const SubtitleDeliveryMethod &HeadAudioStreamParams::subtitleMethod() const {
	return m_subtitleMethod;
}

void HeadAudioStreamParams::setSubtitleMethod(SubtitleDeliveryMethod newSubtitleMethod)  {
	m_subtitleMethod = newSubtitleMethod;
}

bool HeadAudioStreamParams::subtitleMethodNull() const {
	// Nullable: true
	// Type Nullable: true
	

	return m_subtitleMethod== SubtitleDeliveryMethod::EnumNotSet;
}

void HeadAudioStreamParams::setSubtitleMethodNull() {
	m_subtitleMethod= SubtitleDeliveryMethod::EnumNotSet;
}


const qint32 &HeadAudioStreamParams::subtitleStreamIndex() const {
	return m_subtitleStreamIndex.value();
}

void HeadAudioStreamParams::setSubtitleStreamIndex(qint32 newSubtitleStreamIndex)  {
	m_subtitleStreamIndex = newSubtitleStreamIndex;
}

bool HeadAudioStreamParams::subtitleStreamIndexNull() const {
	// Nullable: true
	// Type Nullable: false
	

	return !m_subtitleStreamIndex.has_value();
}

void HeadAudioStreamParams::setSubtitleStreamIndexNull() {
	m_subtitleStreamIndex = std::nullopt;
}


const QString &HeadAudioStreamParams::tag() const {
	return m_tag;
}

void HeadAudioStreamParams::setTag(QString newTag)  {
	m_tag = newTag;
}

bool HeadAudioStreamParams::tagNull() const {
	// Nullable: true
	// Type Nullable: true
	

	return m_tag.isNull();
}

void HeadAudioStreamParams::setTagNull() {
	m_tag.clear();
}


const QString &HeadAudioStreamParams::transcodeReasons() const {
	return m_transcodeReasons;
}

void HeadAudioStreamParams::setTranscodeReasons(QString newTranscodeReasons)  {
	m_transcodeReasons = newTranscodeReasons;
}

bool HeadAudioStreamParams::transcodeReasonsNull() const {
	// Nullable: true
	// Type Nullable: true
	

	return m_transcodeReasons.isNull();
}

void HeadAudioStreamParams::setTranscodeReasonsNull() {
	m_transcodeReasons.clear();
}


const qint32 &HeadAudioStreamParams::transcodingMaxAudioChannels() const {
	return m_transcodingMaxAudioChannels.value();
}

void HeadAudioStreamParams::setTranscodingMaxAudioChannels(qint32 newTranscodingMaxAudioChannels)  {
	m_transcodingMaxAudioChannels = newTranscodingMaxAudioChannels;
}

bool HeadAudioStreamParams::transcodingMaxAudioChannelsNull() const {
	// Nullable: true
	// Type Nullable: false
	

	return !m_transcodingMaxAudioChannels.has_value();
}

void HeadAudioStreamParams::setTranscodingMaxAudioChannelsNull() {
	m_transcodingMaxAudioChannels = std::nullopt;
}


const qint32 &HeadAudioStreamParams::videoBitRate() const {
	return m_videoBitRate.value();
}

void HeadAudioStreamParams::setVideoBitRate(qint32 newVideoBitRate)  {
	m_videoBitRate = newVideoBitRate;
}

bool HeadAudioStreamParams::videoBitRateNull() const {
	// Nullable: true
	// Type Nullable: false
	

	return !m_videoBitRate.has_value();
}

void HeadAudioStreamParams::setVideoBitRateNull() {
	m_videoBitRate = std::nullopt;
}


const QString &HeadAudioStreamParams::videoCodec() const {
	return m_videoCodec;
}

void HeadAudioStreamParams::setVideoCodec(QString newVideoCodec)  {
	m_videoCodec = newVideoCodec;
}

bool HeadAudioStreamParams::videoCodecNull() const {
	// Nullable: true
	// Type Nullable: true
	

	return m_videoCodec.isNull();
}

void HeadAudioStreamParams::setVideoCodecNull() {
	m_videoCodec.clear();
}


const qint32 &HeadAudioStreamParams::videoStreamIndex() const {
	return m_videoStreamIndex.value();
}

void HeadAudioStreamParams::setVideoStreamIndex(qint32 newVideoStreamIndex)  {
	m_videoStreamIndex = newVideoStreamIndex;
}

bool HeadAudioStreamParams::videoStreamIndexNull() const {
	// Nullable: true
	// Type Nullable: false
	

	return !m_videoStreamIndex.has_value();
}

void HeadAudioStreamParams::setVideoStreamIndexNull() {
	m_videoStreamIndex = std::nullopt;
}


const qint32 &HeadAudioStreamParams::width() const {
	return m_width.value();
}

void HeadAudioStreamParams::setWidth(qint32 newWidth)  {
	m_width = newWidth;
}

bool HeadAudioStreamParams::widthNull() const {
	// Nullable: true
	// Type Nullable: false
	

	return !m_width.has_value();
}

void HeadAudioStreamParams::setWidthNull() {
	m_width = std::nullopt;
}




// HeadAudioStreamByContainerParams

const QString &HeadAudioStreamByContainerParams::container() const {
	return m_container;
}

void HeadAudioStreamByContainerParams::setContainer(QString newContainer) {
	m_container = newContainer;
}


const QString &HeadAudioStreamByContainerParams::itemId() const {
	return m_itemId;
}

void HeadAudioStreamByContainerParams::setItemId(QString newItemId) {
	m_itemId = newItemId;
}


const bool &HeadAudioStreamByContainerParams::allowAudioStreamCopy() const {
	return m_allowAudioStreamCopy.value();
}

void HeadAudioStreamByContainerParams::setAllowAudioStreamCopy(bool newAllowAudioStreamCopy)  {
	m_allowAudioStreamCopy = newAllowAudioStreamCopy;
}

bool HeadAudioStreamByContainerParams::allowAudioStreamCopyNull() const {
	// Nullable: true
	// Type Nullable: false
	

	return !m_allowAudioStreamCopy.has_value();
}

void HeadAudioStreamByContainerParams::setAllowAudioStreamCopyNull() {
	m_allowAudioStreamCopy = std::nullopt;
}


const bool &HeadAudioStreamByContainerParams::allowVideoStreamCopy() const {
	return m_allowVideoStreamCopy.value();
}

void HeadAudioStreamByContainerParams::setAllowVideoStreamCopy(bool newAllowVideoStreamCopy)  {
	m_allowVideoStreamCopy = newAllowVideoStreamCopy;
}

bool HeadAudioStreamByContainerParams::allowVideoStreamCopyNull() const {
	// Nullable: true
	// Type Nullable: false
	

	return !m_allowVideoStreamCopy.has_value();
}

void HeadAudioStreamByContainerParams::setAllowVideoStreamCopyNull() {
	m_allowVideoStreamCopy = std::nullopt;
}


const qint32 &HeadAudioStreamByContainerParams::audioBitRate() const {
	return m_audioBitRate.value();
}

void HeadAudioStreamByContainerParams::setAudioBitRate(qint32 newAudioBitRate)  {
	m_audioBitRate = newAudioBitRate;
}

bool HeadAudioStreamByContainerParams::audioBitRateNull() const {
	// Nullable: true
	// Type Nullable: false
	

	return !m_audioBitRate.has_value();
}

void HeadAudioStreamByContainerParams::setAudioBitRateNull() {
	m_audioBitRate = std::nullopt;
}


const qint32 &HeadAudioStreamByContainerParams::audioChannels() const {
	return m_audioChannels.value();
}

void HeadAudioStreamByContainerParams::setAudioChannels(qint32 newAudioChannels)  {
	m_audioChannels = newAudioChannels;
}

bool HeadAudioStreamByContainerParams::audioChannelsNull() const {
	// Nullable: true
	// Type Nullable: false
	

	return !m_audioChannels.has_value();
}

void HeadAudioStreamByContainerParams::setAudioChannelsNull() {
	m_audioChannels = std::nullopt;
}


const QString &HeadAudioStreamByContainerParams::audioCodec() const {
	return m_audioCodec;
}

void HeadAudioStreamByContainerParams::setAudioCodec(QString newAudioCodec)  {
	m_audioCodec = newAudioCodec;
}

bool HeadAudioStreamByContainerParams::audioCodecNull() const {
	// Nullable: true
	// Type Nullable: true
	

	return m_audioCodec.isNull();
}

void HeadAudioStreamByContainerParams::setAudioCodecNull() {
	m_audioCodec.clear();
}


const qint32 &HeadAudioStreamByContainerParams::audioSampleRate() const {
	return m_audioSampleRate.value();
}

void HeadAudioStreamByContainerParams::setAudioSampleRate(qint32 newAudioSampleRate)  {
	m_audioSampleRate = newAudioSampleRate;
}

bool HeadAudioStreamByContainerParams::audioSampleRateNull() const {
	// Nullable: true
	// Type Nullable: false
	

	return !m_audioSampleRate.has_value();
}

void HeadAudioStreamByContainerParams::setAudioSampleRateNull() {
	m_audioSampleRate = std::nullopt;
}


const qint32 &HeadAudioStreamByContainerParams::audioStreamIndex() const {
	return m_audioStreamIndex.value();
}

void HeadAudioStreamByContainerParams::setAudioStreamIndex(qint32 newAudioStreamIndex)  {
	m_audioStreamIndex = newAudioStreamIndex;
}

bool HeadAudioStreamByContainerParams::audioStreamIndexNull() const {
	// Nullable: true
	// Type Nullable: false
	

	return !m_audioStreamIndex.has_value();
}

void HeadAudioStreamByContainerParams::setAudioStreamIndexNull() {
	m_audioStreamIndex = std::nullopt;
}


const bool &HeadAudioStreamByContainerParams::breakOnNonKeyFrames() const {
	return m_breakOnNonKeyFrames.value();
}

void HeadAudioStreamByContainerParams::setBreakOnNonKeyFrames(bool newBreakOnNonKeyFrames)  {
	m_breakOnNonKeyFrames = newBreakOnNonKeyFrames;
}

bool HeadAudioStreamByContainerParams::breakOnNonKeyFramesNull() const {
	// Nullable: true
	// Type Nullable: false
	

	return !m_breakOnNonKeyFrames.has_value();
}

void HeadAudioStreamByContainerParams::setBreakOnNonKeyFramesNull() {
	m_breakOnNonKeyFrames = std::nullopt;
}


const EncodingContext &HeadAudioStreamByContainerParams::context() const {
	return m_context;
}

void HeadAudioStreamByContainerParams::setContext(EncodingContext newContext)  {
	m_context = newContext;
}

bool HeadAudioStreamByContainerParams::contextNull() const {
	// Nullable: true
	// Type Nullable: true
	

	return m_context== EncodingContext::EnumNotSet;
}

void HeadAudioStreamByContainerParams::setContextNull() {
	m_context= EncodingContext::EnumNotSet;
}


const bool &HeadAudioStreamByContainerParams::copyTimestamps() const {
	return m_copyTimestamps.value();
}

void HeadAudioStreamByContainerParams::setCopyTimestamps(bool newCopyTimestamps)  {
	m_copyTimestamps = newCopyTimestamps;
}

bool HeadAudioStreamByContainerParams::copyTimestampsNull() const {
	// Nullable: true
	// Type Nullable: false
	

	return !m_copyTimestamps.has_value();
}

void HeadAudioStreamByContainerParams::setCopyTimestampsNull() {
	m_copyTimestamps = std::nullopt;
}


const qint32 &HeadAudioStreamByContainerParams::cpuCoreLimit() const {
	return m_cpuCoreLimit.value();
}

void HeadAudioStreamByContainerParams::setCpuCoreLimit(qint32 newCpuCoreLimit)  {
	m_cpuCoreLimit = newCpuCoreLimit;
}

bool HeadAudioStreamByContainerParams::cpuCoreLimitNull() const {
	// Nullable: true
	// Type Nullable: false
	

	return !m_cpuCoreLimit.has_value();
}

void HeadAudioStreamByContainerParams::setCpuCoreLimitNull() {
	m_cpuCoreLimit = std::nullopt;
}


const bool &HeadAudioStreamByContainerParams::deInterlace() const {
	return m_deInterlace.value();
}

void HeadAudioStreamByContainerParams::setDeInterlace(bool newDeInterlace)  {
	m_deInterlace = newDeInterlace;
}

bool HeadAudioStreamByContainerParams::deInterlaceNull() const {
	// Nullable: true
	// Type Nullable: false
	

	return !m_deInterlace.has_value();
}

void HeadAudioStreamByContainerParams::setDeInterlaceNull() {
	m_deInterlace = std::nullopt;
}


const QString &HeadAudioStreamByContainerParams::deviceId() const {
	return m_deviceId;
}

void HeadAudioStreamByContainerParams::setDeviceId(QString newDeviceId)  {
	m_deviceId = newDeviceId;
}

bool HeadAudioStreamByContainerParams::deviceIdNull() const {
	// Nullable: true
	// Type Nullable: true
	

	return m_deviceId.isNull();
}

void HeadAudioStreamByContainerParams::setDeviceIdNull() {
	m_deviceId.clear();
}


const QString &HeadAudioStreamByContainerParams::deviceProfileId() const {
	return m_deviceProfileId;
}

void HeadAudioStreamByContainerParams::setDeviceProfileId(QString newDeviceProfileId)  {
	m_deviceProfileId = newDeviceProfileId;
}

bool HeadAudioStreamByContainerParams::deviceProfileIdNull() const {
	// Nullable: true
	// Type Nullable: true
	

	return m_deviceProfileId.isNull();
}

void HeadAudioStreamByContainerParams::setDeviceProfileIdNull() {
	m_deviceProfileId.clear();
}


const bool &HeadAudioStreamByContainerParams::enableAutoStreamCopy() const {
	return m_enableAutoStreamCopy.value();
}

void HeadAudioStreamByContainerParams::setEnableAutoStreamCopy(bool newEnableAutoStreamCopy)  {
	m_enableAutoStreamCopy = newEnableAutoStreamCopy;
}

bool HeadAudioStreamByContainerParams::enableAutoStreamCopyNull() const {
	// Nullable: true
	// Type Nullable: false
	

	return !m_enableAutoStreamCopy.has_value();
}

void HeadAudioStreamByContainerParams::setEnableAutoStreamCopyNull() {
	m_enableAutoStreamCopy = std::nullopt;
}


const bool &HeadAudioStreamByContainerParams::enableMpegtsM2TsMode() const {
	return m_enableMpegtsM2TsMode.value();
}

void HeadAudioStreamByContainerParams::setEnableMpegtsM2TsMode(bool newEnableMpegtsM2TsMode)  {
	m_enableMpegtsM2TsMode = newEnableMpegtsM2TsMode;
}

bool HeadAudioStreamByContainerParams::enableMpegtsM2TsModeNull() const {
	// Nullable: true
	// Type Nullable: false
	

	return !m_enableMpegtsM2TsMode.has_value();
}

void HeadAudioStreamByContainerParams::setEnableMpegtsM2TsModeNull() {
	m_enableMpegtsM2TsMode = std::nullopt;
}


const float &HeadAudioStreamByContainerParams::framerate() const {
	return m_framerate.value();
}

void HeadAudioStreamByContainerParams::setFramerate(float newFramerate)  {
	m_framerate = newFramerate;
}

bool HeadAudioStreamByContainerParams::framerateNull() const {
	// Nullable: true
	// Type Nullable: false
	

	return !m_framerate.has_value();
}

void HeadAudioStreamByContainerParams::setFramerateNull() {
	m_framerate = std::nullopt;
}


const qint32 &HeadAudioStreamByContainerParams::height() const {
	return m_height.value();
}

void HeadAudioStreamByContainerParams::setHeight(qint32 newHeight)  {
	m_height = newHeight;
}

bool HeadAudioStreamByContainerParams::heightNull() const {
	// Nullable: true
	// Type Nullable: false
	

	return !m_height.has_value();
}

void HeadAudioStreamByContainerParams::setHeightNull() {
	m_height = std::nullopt;
}


const QString &HeadAudioStreamByContainerParams::level() const {
	return m_level;
}

void HeadAudioStreamByContainerParams::setLevel(QString newLevel)  {
	m_level = newLevel;
}

bool HeadAudioStreamByContainerParams::levelNull() const {
	// Nullable: true
	// Type Nullable: true
	

	return m_level.isNull();
}

void HeadAudioStreamByContainerParams::setLevelNull() {
	m_level.clear();
}


const QString &HeadAudioStreamByContainerParams::liveStreamId() const {
	return m_liveStreamId;
}

void HeadAudioStreamByContainerParams::setLiveStreamId(QString newLiveStreamId)  {
	m_liveStreamId = newLiveStreamId;
}

bool HeadAudioStreamByContainerParams::liveStreamIdNull() const {
	// Nullable: true
	// Type Nullable: true
	

	return m_liveStreamId.isNull();
}

void HeadAudioStreamByContainerParams::setLiveStreamIdNull() {
	m_liveStreamId.clear();
}


const qint32 &HeadAudioStreamByContainerParams::maxAudioBitDepth() const {
	return m_maxAudioBitDepth.value();
}

void HeadAudioStreamByContainerParams::setMaxAudioBitDepth(qint32 newMaxAudioBitDepth)  {
	m_maxAudioBitDepth = newMaxAudioBitDepth;
}

bool HeadAudioStreamByContainerParams::maxAudioBitDepthNull() const {
	// Nullable: true
	// Type Nullable: false
	

	return !m_maxAudioBitDepth.has_value();
}

void HeadAudioStreamByContainerParams::setMaxAudioBitDepthNull() {
	m_maxAudioBitDepth = std::nullopt;
}


const qint32 &HeadAudioStreamByContainerParams::maxAudioChannels() const {
	return m_maxAudioChannels.value();
}

void HeadAudioStreamByContainerParams::setMaxAudioChannels(qint32 newMaxAudioChannels)  {
	m_maxAudioChannels = newMaxAudioChannels;
}

bool HeadAudioStreamByContainerParams::maxAudioChannelsNull() const {
	// Nullable: true
	// Type Nullable: false
	

	return !m_maxAudioChannels.has_value();
}

void HeadAudioStreamByContainerParams::setMaxAudioChannelsNull() {
	m_maxAudioChannels = std::nullopt;
}


const float &HeadAudioStreamByContainerParams::maxFramerate() const {
	return m_maxFramerate.value();
}

void HeadAudioStreamByContainerParams::setMaxFramerate(float newMaxFramerate)  {
	m_maxFramerate = newMaxFramerate;
}

bool HeadAudioStreamByContainerParams::maxFramerateNull() const {
	// Nullable: true
	// Type Nullable: false
	

	return !m_maxFramerate.has_value();
}

void HeadAudioStreamByContainerParams::setMaxFramerateNull() {
	m_maxFramerate = std::nullopt;
}


const qint32 &HeadAudioStreamByContainerParams::maxRefFrames() const {
	return m_maxRefFrames.value();
}

void HeadAudioStreamByContainerParams::setMaxRefFrames(qint32 newMaxRefFrames)  {
	m_maxRefFrames = newMaxRefFrames;
}

bool HeadAudioStreamByContainerParams::maxRefFramesNull() const {
	// Nullable: true
	// Type Nullable: false
	

	return !m_maxRefFrames.has_value();
}

void HeadAudioStreamByContainerParams::setMaxRefFramesNull() {
	m_maxRefFrames = std::nullopt;
}


const qint32 &HeadAudioStreamByContainerParams::maxVideoBitDepth() const {
	return m_maxVideoBitDepth.value();
}

void HeadAudioStreamByContainerParams::setMaxVideoBitDepth(qint32 newMaxVideoBitDepth)  {
	m_maxVideoBitDepth = newMaxVideoBitDepth;
}

bool HeadAudioStreamByContainerParams::maxVideoBitDepthNull() const {
	// Nullable: true
	// Type Nullable: false
	

	return !m_maxVideoBitDepth.has_value();
}

void HeadAudioStreamByContainerParams::setMaxVideoBitDepthNull() {
	m_maxVideoBitDepth = std::nullopt;
}


const QString &HeadAudioStreamByContainerParams::mediaSourceId() const {
	return m_mediaSourceId;
}

void HeadAudioStreamByContainerParams::setMediaSourceId(QString newMediaSourceId)  {
	m_mediaSourceId = newMediaSourceId;
}

bool HeadAudioStreamByContainerParams::mediaSourceIdNull() const {
	// Nullable: true
	// Type Nullable: true
	

	return m_mediaSourceId.isNull();
}

void HeadAudioStreamByContainerParams::setMediaSourceIdNull() {
	m_mediaSourceId.clear();
}


const qint32 &HeadAudioStreamByContainerParams::minSegments() const {
	return m_minSegments.value();
}

void HeadAudioStreamByContainerParams::setMinSegments(qint32 newMinSegments)  {
	m_minSegments = newMinSegments;
}

bool HeadAudioStreamByContainerParams::minSegmentsNull() const {
	// Nullable: true
	// Type Nullable: false
	

	return !m_minSegments.has_value();
}

void HeadAudioStreamByContainerParams::setMinSegmentsNull() {
	m_minSegments = std::nullopt;
}


const QString &HeadAudioStreamByContainerParams::params() const {
	return m_params;
}

void HeadAudioStreamByContainerParams::setParams(QString newParams)  {
	m_params = newParams;
}

bool HeadAudioStreamByContainerParams::paramsNull() const {
	// Nullable: true
	// Type Nullable: true
	

	return m_params.isNull();
}

void HeadAudioStreamByContainerParams::setParamsNull() {
	m_params.clear();
}


const QString &HeadAudioStreamByContainerParams::playSessionId() const {
	return m_playSessionId;
}

void HeadAudioStreamByContainerParams::setPlaySessionId(QString newPlaySessionId)  {
	m_playSessionId = newPlaySessionId;
}

bool HeadAudioStreamByContainerParams::playSessionIdNull() const {
	// Nullable: true
	// Type Nullable: true
	

	return m_playSessionId.isNull();
}

void HeadAudioStreamByContainerParams::setPlaySessionIdNull() {
	m_playSessionId.clear();
}


const QString &HeadAudioStreamByContainerParams::profile() const {
	return m_profile;
}

void HeadAudioStreamByContainerParams::setProfile(QString newProfile)  {
	m_profile = newProfile;
}

bool HeadAudioStreamByContainerParams::profileNull() const {
	// Nullable: true
	// Type Nullable: true
	

	return m_profile.isNull();
}

void HeadAudioStreamByContainerParams::setProfileNull() {
	m_profile.clear();
}


const bool &HeadAudioStreamByContainerParams::requireAvc() const {
	return m_requireAvc.value();
}

void HeadAudioStreamByContainerParams::setRequireAvc(bool newRequireAvc)  {
	m_requireAvc = newRequireAvc;
}

bool HeadAudioStreamByContainerParams::requireAvcNull() const {
	// Nullable: true
	// Type Nullable: false
	

	return !m_requireAvc.has_value();
}

void HeadAudioStreamByContainerParams::setRequireAvcNull() {
	m_requireAvc = std::nullopt;
}


const bool &HeadAudioStreamByContainerParams::requireNonAnamorphic() const {
	return m_requireNonAnamorphic.value();
}

void HeadAudioStreamByContainerParams::setRequireNonAnamorphic(bool newRequireNonAnamorphic)  {
	m_requireNonAnamorphic = newRequireNonAnamorphic;
}

bool HeadAudioStreamByContainerParams::requireNonAnamorphicNull() const {
	// Nullable: true
	// Type Nullable: false
	

	return !m_requireNonAnamorphic.has_value();
}

void HeadAudioStreamByContainerParams::setRequireNonAnamorphicNull() {
	m_requireNonAnamorphic = std::nullopt;
}


const QString &HeadAudioStreamByContainerParams::segmentContainer() const {
	return m_segmentContainer;
}

void HeadAudioStreamByContainerParams::setSegmentContainer(QString newSegmentContainer)  {
	m_segmentContainer = newSegmentContainer;
}

bool HeadAudioStreamByContainerParams::segmentContainerNull() const {
	// Nullable: true
	// Type Nullable: true
	

	return m_segmentContainer.isNull();
}

void HeadAudioStreamByContainerParams::setSegmentContainerNull() {
	m_segmentContainer.clear();
}


const qint32 &HeadAudioStreamByContainerParams::segmentLength() const {
	return m_segmentLength.value();
}

void HeadAudioStreamByContainerParams::setSegmentLength(qint32 newSegmentLength)  {
	m_segmentLength = newSegmentLength;
}

bool HeadAudioStreamByContainerParams::segmentLengthNull() const {
	// Nullable: true
	// Type Nullable: false
	

	return !m_segmentLength.has_value();
}

void HeadAudioStreamByContainerParams::setSegmentLengthNull() {
	m_segmentLength = std::nullopt;
}


const qint64 &HeadAudioStreamByContainerParams::startTimeTicks() const {
	return m_startTimeTicks.value();
}

void HeadAudioStreamByContainerParams::setStartTimeTicks(qint64 newStartTimeTicks)  {
	m_startTimeTicks = newStartTimeTicks;
}

bool HeadAudioStreamByContainerParams::startTimeTicksNull() const {
	// Nullable: true
	// Type Nullable: false
	

	return !m_startTimeTicks.has_value();
}

void HeadAudioStreamByContainerParams::setStartTimeTicksNull() {
	m_startTimeTicks = std::nullopt;
}


const bool &HeadAudioStreamByContainerParams::staticStreaming() const {
	return m_staticStreaming.value();
}

void HeadAudioStreamByContainerParams::setStaticStreaming(bool newStaticStreaming)  {
	m_staticStreaming = newStaticStreaming;
}

bool HeadAudioStreamByContainerParams::staticStreamingNull() const {
	// Nullable: true
	// Type Nullable: false
	

	return !m_staticStreaming.has_value();
}

void HeadAudioStreamByContainerParams::setStaticStreamingNull() {
	m_staticStreaming = std::nullopt;
}


const QJsonObject &HeadAudioStreamByContainerParams::streamOptions() const {
	return m_streamOptions;
}

void HeadAudioStreamByContainerParams::setStreamOptions(QJsonObject newStreamOptions)  {
	m_streamOptions = newStreamOptions;
}

bool HeadAudioStreamByContainerParams::streamOptionsNull() const {
	// Nullable: true
	// Type Nullable: true
	

	return m_streamOptions.isEmpty();
}

void HeadAudioStreamByContainerParams::setStreamOptionsNull() {
	m_streamOptions= QJsonObject();
}


const QString &HeadAudioStreamByContainerParams::subtitleCodec() const {
	return m_subtitleCodec;
}

void HeadAudioStreamByContainerParams::setSubtitleCodec(QString newSubtitleCodec)  {
	m_subtitleCodec = newSubtitleCodec;
}

bool HeadAudioStreamByContainerParams::subtitleCodecNull() const {
	// Nullable: true
	// Type Nullable: true
	

	return m_subtitleCodec.isNull();
}

void HeadAudioStreamByContainerParams::setSubtitleCodecNull() {
	m_subtitleCodec.clear();
}


const SubtitleDeliveryMethod &HeadAudioStreamByContainerParams::subtitleMethod() const {
	return m_subtitleMethod;
}

void HeadAudioStreamByContainerParams::setSubtitleMethod(SubtitleDeliveryMethod newSubtitleMethod)  {
	m_subtitleMethod = newSubtitleMethod;
}

bool HeadAudioStreamByContainerParams::subtitleMethodNull() const {
	// Nullable: true
	// Type Nullable: true
	

	return m_subtitleMethod== SubtitleDeliveryMethod::EnumNotSet;
}

void HeadAudioStreamByContainerParams::setSubtitleMethodNull() {
	m_subtitleMethod= SubtitleDeliveryMethod::EnumNotSet;
}


const qint32 &HeadAudioStreamByContainerParams::subtitleStreamIndex() const {
	return m_subtitleStreamIndex.value();
}

void HeadAudioStreamByContainerParams::setSubtitleStreamIndex(qint32 newSubtitleStreamIndex)  {
	m_subtitleStreamIndex = newSubtitleStreamIndex;
}

bool HeadAudioStreamByContainerParams::subtitleStreamIndexNull() const {
	// Nullable: true
	// Type Nullable: false
	

	return !m_subtitleStreamIndex.has_value();
}

void HeadAudioStreamByContainerParams::setSubtitleStreamIndexNull() {
	m_subtitleStreamIndex = std::nullopt;
}


const QString &HeadAudioStreamByContainerParams::tag() const {
	return m_tag;
}

void HeadAudioStreamByContainerParams::setTag(QString newTag)  {
	m_tag = newTag;
}

bool HeadAudioStreamByContainerParams::tagNull() const {
	// Nullable: true
	// Type Nullable: true
	

	return m_tag.isNull();
}

void HeadAudioStreamByContainerParams::setTagNull() {
	m_tag.clear();
}


const QString &HeadAudioStreamByContainerParams::transcodeReasons() const {
	return m_transcodeReasons;
}

void HeadAudioStreamByContainerParams::setTranscodeReasons(QString newTranscodeReasons)  {
	m_transcodeReasons = newTranscodeReasons;
}

bool HeadAudioStreamByContainerParams::transcodeReasonsNull() const {
	// Nullable: true
	// Type Nullable: true
	

	return m_transcodeReasons.isNull();
}

void HeadAudioStreamByContainerParams::setTranscodeReasonsNull() {
	m_transcodeReasons.clear();
}


const qint32 &HeadAudioStreamByContainerParams::transcodingMaxAudioChannels() const {
	return m_transcodingMaxAudioChannels.value();
}

void HeadAudioStreamByContainerParams::setTranscodingMaxAudioChannels(qint32 newTranscodingMaxAudioChannels)  {
	m_transcodingMaxAudioChannels = newTranscodingMaxAudioChannels;
}

bool HeadAudioStreamByContainerParams::transcodingMaxAudioChannelsNull() const {
	// Nullable: true
	// Type Nullable: false
	

	return !m_transcodingMaxAudioChannels.has_value();
}

void HeadAudioStreamByContainerParams::setTranscodingMaxAudioChannelsNull() {
	m_transcodingMaxAudioChannels = std::nullopt;
}


const qint32 &HeadAudioStreamByContainerParams::videoBitRate() const {
	return m_videoBitRate.value();
}

void HeadAudioStreamByContainerParams::setVideoBitRate(qint32 newVideoBitRate)  {
	m_videoBitRate = newVideoBitRate;
}

bool HeadAudioStreamByContainerParams::videoBitRateNull() const {
	// Nullable: true
	// Type Nullable: false
	

	return !m_videoBitRate.has_value();
}

void HeadAudioStreamByContainerParams::setVideoBitRateNull() {
	m_videoBitRate = std::nullopt;
}


const QString &HeadAudioStreamByContainerParams::videoCodec() const {
	return m_videoCodec;
}

void HeadAudioStreamByContainerParams::setVideoCodec(QString newVideoCodec)  {
	m_videoCodec = newVideoCodec;
}

bool HeadAudioStreamByContainerParams::videoCodecNull() const {
	// Nullable: true
	// Type Nullable: true
	

	return m_videoCodec.isNull();
}

void HeadAudioStreamByContainerParams::setVideoCodecNull() {
	m_videoCodec.clear();
}


const qint32 &HeadAudioStreamByContainerParams::videoStreamIndex() const {
	return m_videoStreamIndex.value();
}

void HeadAudioStreamByContainerParams::setVideoStreamIndex(qint32 newVideoStreamIndex)  {
	m_videoStreamIndex = newVideoStreamIndex;
}

bool HeadAudioStreamByContainerParams::videoStreamIndexNull() const {
	// Nullable: true
	// Type Nullable: false
	

	return !m_videoStreamIndex.has_value();
}

void HeadAudioStreamByContainerParams::setVideoStreamIndexNull() {
	m_videoStreamIndex = std::nullopt;
}


const qint32 &HeadAudioStreamByContainerParams::width() const {
	return m_width.value();
}

void HeadAudioStreamByContainerParams::setWidth(qint32 newWidth)  {
	m_width = newWidth;
}

bool HeadAudioStreamByContainerParams::widthNull() const {
	// Nullable: true
	// Type Nullable: false
	

	return !m_width.has_value();
}

void HeadAudioStreamByContainerParams::setWidthNull() {
	m_width = std::nullopt;
}




// HeadGenreImageParams

const ImageType &HeadGenreImageParams::imageType() const {
	return m_imageType;
}

void HeadGenreImageParams::setImageType(ImageType newImageType) {
	m_imageType = newImageType;
}


const QString &HeadGenreImageParams::name() const {
	return m_name;
}

void HeadGenreImageParams::setName(QString newName) {
	m_name = newName;
}


const bool &HeadGenreImageParams::addPlayedIndicator() const {
	return m_addPlayedIndicator.value();
}

void HeadGenreImageParams::setAddPlayedIndicator(bool newAddPlayedIndicator)  {
	m_addPlayedIndicator = newAddPlayedIndicator;
}

bool HeadGenreImageParams::addPlayedIndicatorNull() const {
	// Nullable: true
	// Type Nullable: false
	

	return !m_addPlayedIndicator.has_value();
}

void HeadGenreImageParams::setAddPlayedIndicatorNull() {
	m_addPlayedIndicator = std::nullopt;
}


const QString &HeadGenreImageParams::backgroundColor() const {
	return m_backgroundColor;
}

void HeadGenreImageParams::setBackgroundColor(QString newBackgroundColor)  {
	m_backgroundColor = newBackgroundColor;
}

bool HeadGenreImageParams::backgroundColorNull() const {
	// Nullable: true
	// Type Nullable: true
	

	return m_backgroundColor.isNull();
}

void HeadGenreImageParams::setBackgroundColorNull() {
	m_backgroundColor.clear();
}


const qint32 &HeadGenreImageParams::blur() const {
	return m_blur.value();
}

void HeadGenreImageParams::setBlur(qint32 newBlur)  {
	m_blur = newBlur;
}

bool HeadGenreImageParams::blurNull() const {
	// Nullable: true
	// Type Nullable: false
	

	return !m_blur.has_value();
}

void HeadGenreImageParams::setBlurNull() {
	m_blur = std::nullopt;
}


const bool &HeadGenreImageParams::cropWhitespace() const {
	return m_cropWhitespace.value();
}

void HeadGenreImageParams::setCropWhitespace(bool newCropWhitespace)  {
	m_cropWhitespace = newCropWhitespace;
}

bool HeadGenreImageParams::cropWhitespaceNull() const {
	// Nullable: true
	// Type Nullable: false
	

	return !m_cropWhitespace.has_value();
}

void HeadGenreImageParams::setCropWhitespaceNull() {
	m_cropWhitespace = std::nullopt;
}


const QString &HeadGenreImageParams::foregroundLayer() const {
	return m_foregroundLayer;
}

void HeadGenreImageParams::setForegroundLayer(QString newForegroundLayer)  {
	m_foregroundLayer = newForegroundLayer;
}

bool HeadGenreImageParams::foregroundLayerNull() const {
	// Nullable: true
	// Type Nullable: true
	

	return m_foregroundLayer.isNull();
}

void HeadGenreImageParams::setForegroundLayerNull() {
	m_foregroundLayer.clear();
}


const ImageFormat &HeadGenreImageParams::format() const {
	return m_format;
}

void HeadGenreImageParams::setFormat(ImageFormat newFormat)  {
	m_format = newFormat;
}

bool HeadGenreImageParams::formatNull() const {
	// Nullable: true
	// Type Nullable: true
	

	return m_format== ImageFormat::EnumNotSet;
}

void HeadGenreImageParams::setFormatNull() {
	m_format= ImageFormat::EnumNotSet;
}


const qint32 &HeadGenreImageParams::height() const {
	return m_height.value();
}

void HeadGenreImageParams::setHeight(qint32 newHeight)  {
	m_height = newHeight;
}

bool HeadGenreImageParams::heightNull() const {
	// Nullable: true
	// Type Nullable: false
	

	return !m_height.has_value();
}

void HeadGenreImageParams::setHeightNull() {
	m_height = std::nullopt;
}


const qint32 &HeadGenreImageParams::imageIndex() const {
	return m_imageIndex.value();
}

void HeadGenreImageParams::setImageIndex(qint32 newImageIndex)  {
	m_imageIndex = newImageIndex;
}

bool HeadGenreImageParams::imageIndexNull() const {
	// Nullable: true
	// Type Nullable: false
	

	return !m_imageIndex.has_value();
}

void HeadGenreImageParams::setImageIndexNull() {
	m_imageIndex = std::nullopt;
}


const qint32 &HeadGenreImageParams::maxHeight() const {
	return m_maxHeight.value();
}

void HeadGenreImageParams::setMaxHeight(qint32 newMaxHeight)  {
	m_maxHeight = newMaxHeight;
}

bool HeadGenreImageParams::maxHeightNull() const {
	// Nullable: true
	// Type Nullable: false
	

	return !m_maxHeight.has_value();
}

void HeadGenreImageParams::setMaxHeightNull() {
	m_maxHeight = std::nullopt;
}


const qint32 &HeadGenreImageParams::maxWidth() const {
	return m_maxWidth.value();
}

void HeadGenreImageParams::setMaxWidth(qint32 newMaxWidth)  {
	m_maxWidth = newMaxWidth;
}

bool HeadGenreImageParams::maxWidthNull() const {
	// Nullable: true
	// Type Nullable: false
	

	return !m_maxWidth.has_value();
}

void HeadGenreImageParams::setMaxWidthNull() {
	m_maxWidth = std::nullopt;
}


const double &HeadGenreImageParams::percentPlayed() const {
	return m_percentPlayed.value();
}

void HeadGenreImageParams::setPercentPlayed(double newPercentPlayed)  {
	m_percentPlayed = newPercentPlayed;
}

bool HeadGenreImageParams::percentPlayedNull() const {
	// Nullable: true
	// Type Nullable: false
	

	return !m_percentPlayed.has_value();
}

void HeadGenreImageParams::setPercentPlayedNull() {
	m_percentPlayed = std::nullopt;
}


const qint32 &HeadGenreImageParams::quality() const {
	return m_quality.value();
}

void HeadGenreImageParams::setQuality(qint32 newQuality)  {
	m_quality = newQuality;
}

bool HeadGenreImageParams::qualityNull() const {
	// Nullable: true
	// Type Nullable: false
	

	return !m_quality.has_value();
}

void HeadGenreImageParams::setQualityNull() {
	m_quality = std::nullopt;
}


const QString &HeadGenreImageParams::tag() const {
	return m_tag;
}

void HeadGenreImageParams::setTag(QString newTag)  {
	m_tag = newTag;
}

bool HeadGenreImageParams::tagNull() const {
	// Nullable: true
	// Type Nullable: true
	

	return m_tag.isNull();
}

void HeadGenreImageParams::setTagNull() {
	m_tag.clear();
}


const qint32 &HeadGenreImageParams::unplayedCount() const {
	return m_unplayedCount.value();
}

void HeadGenreImageParams::setUnplayedCount(qint32 newUnplayedCount)  {
	m_unplayedCount = newUnplayedCount;
}

bool HeadGenreImageParams::unplayedCountNull() const {
	// Nullable: true
	// Type Nullable: false
	

	return !m_unplayedCount.has_value();
}

void HeadGenreImageParams::setUnplayedCountNull() {
	m_unplayedCount = std::nullopt;
}


const qint32 &HeadGenreImageParams::width() const {
	return m_width.value();
}

void HeadGenreImageParams::setWidth(qint32 newWidth)  {
	m_width = newWidth;
}

bool HeadGenreImageParams::widthNull() const {
	// Nullable: true
	// Type Nullable: false
	

	return !m_width.has_value();
}

void HeadGenreImageParams::setWidthNull() {
	m_width = std::nullopt;
}




// HeadGenreImageByIndexParams

const qint32 &HeadGenreImageByIndexParams::imageIndex() const {
	return m_imageIndex;
}

void HeadGenreImageByIndexParams::setImageIndex(qint32 newImageIndex) {
	m_imageIndex = newImageIndex;
}


const ImageType &HeadGenreImageByIndexParams::imageType() const {
	return m_imageType;
}

void HeadGenreImageByIndexParams::setImageType(ImageType newImageType) {
	m_imageType = newImageType;
}


const QString &HeadGenreImageByIndexParams::name() const {
	return m_name;
}

void HeadGenreImageByIndexParams::setName(QString newName) {
	m_name = newName;
}


const bool &HeadGenreImageByIndexParams::addPlayedIndicator() const {
	return m_addPlayedIndicator.value();
}

void HeadGenreImageByIndexParams::setAddPlayedIndicator(bool newAddPlayedIndicator)  {
	m_addPlayedIndicator = newAddPlayedIndicator;
}

bool HeadGenreImageByIndexParams::addPlayedIndicatorNull() const {
	// Nullable: true
	// Type Nullable: false
	

	return !m_addPlayedIndicator.has_value();
}

void HeadGenreImageByIndexParams::setAddPlayedIndicatorNull() {
	m_addPlayedIndicator = std::nullopt;
}


const QString &HeadGenreImageByIndexParams::backgroundColor() const {
	return m_backgroundColor;
}

void HeadGenreImageByIndexParams::setBackgroundColor(QString newBackgroundColor)  {
	m_backgroundColor = newBackgroundColor;
}

bool HeadGenreImageByIndexParams::backgroundColorNull() const {
	// Nullable: true
	// Type Nullable: true
	

	return m_backgroundColor.isNull();
}

void HeadGenreImageByIndexParams::setBackgroundColorNull() {
	m_backgroundColor.clear();
}


const qint32 &HeadGenreImageByIndexParams::blur() const {
	return m_blur.value();
}

void HeadGenreImageByIndexParams::setBlur(qint32 newBlur)  {
	m_blur = newBlur;
}

bool HeadGenreImageByIndexParams::blurNull() const {
	// Nullable: true
	// Type Nullable: false
	

	return !m_blur.has_value();
}

void HeadGenreImageByIndexParams::setBlurNull() {
	m_blur = std::nullopt;
}


const bool &HeadGenreImageByIndexParams::cropWhitespace() const {
	return m_cropWhitespace.value();
}

void HeadGenreImageByIndexParams::setCropWhitespace(bool newCropWhitespace)  {
	m_cropWhitespace = newCropWhitespace;
}

bool HeadGenreImageByIndexParams::cropWhitespaceNull() const {
	// Nullable: true
	// Type Nullable: false
	

	return !m_cropWhitespace.has_value();
}

void HeadGenreImageByIndexParams::setCropWhitespaceNull() {
	m_cropWhitespace = std::nullopt;
}


const QString &HeadGenreImageByIndexParams::foregroundLayer() const {
	return m_foregroundLayer;
}

void HeadGenreImageByIndexParams::setForegroundLayer(QString newForegroundLayer)  {
	m_foregroundLayer = newForegroundLayer;
}

bool HeadGenreImageByIndexParams::foregroundLayerNull() const {
	// Nullable: true
	// Type Nullable: true
	

	return m_foregroundLayer.isNull();
}

void HeadGenreImageByIndexParams::setForegroundLayerNull() {
	m_foregroundLayer.clear();
}


const ImageFormat &HeadGenreImageByIndexParams::format() const {
	return m_format;
}

void HeadGenreImageByIndexParams::setFormat(ImageFormat newFormat)  {
	m_format = newFormat;
}

bool HeadGenreImageByIndexParams::formatNull() const {
	// Nullable: true
	// Type Nullable: true
	

	return m_format== ImageFormat::EnumNotSet;
}

void HeadGenreImageByIndexParams::setFormatNull() {
	m_format= ImageFormat::EnumNotSet;
}


const qint32 &HeadGenreImageByIndexParams::height() const {
	return m_height.value();
}

void HeadGenreImageByIndexParams::setHeight(qint32 newHeight)  {
	m_height = newHeight;
}

bool HeadGenreImageByIndexParams::heightNull() const {
	// Nullable: true
	// Type Nullable: false
	

	return !m_height.has_value();
}

void HeadGenreImageByIndexParams::setHeightNull() {
	m_height = std::nullopt;
}


const qint32 &HeadGenreImageByIndexParams::maxHeight() const {
	return m_maxHeight.value();
}

void HeadGenreImageByIndexParams::setMaxHeight(qint32 newMaxHeight)  {
	m_maxHeight = newMaxHeight;
}

bool HeadGenreImageByIndexParams::maxHeightNull() const {
	// Nullable: true
	// Type Nullable: false
	

	return !m_maxHeight.has_value();
}

void HeadGenreImageByIndexParams::setMaxHeightNull() {
	m_maxHeight = std::nullopt;
}


const qint32 &HeadGenreImageByIndexParams::maxWidth() const {
	return m_maxWidth.value();
}

void HeadGenreImageByIndexParams::setMaxWidth(qint32 newMaxWidth)  {
	m_maxWidth = newMaxWidth;
}

bool HeadGenreImageByIndexParams::maxWidthNull() const {
	// Nullable: true
	// Type Nullable: false
	

	return !m_maxWidth.has_value();
}

void HeadGenreImageByIndexParams::setMaxWidthNull() {
	m_maxWidth = std::nullopt;
}


const double &HeadGenreImageByIndexParams::percentPlayed() const {
	return m_percentPlayed.value();
}

void HeadGenreImageByIndexParams::setPercentPlayed(double newPercentPlayed)  {
	m_percentPlayed = newPercentPlayed;
}

bool HeadGenreImageByIndexParams::percentPlayedNull() const {
	// Nullable: true
	// Type Nullable: false
	

	return !m_percentPlayed.has_value();
}

void HeadGenreImageByIndexParams::setPercentPlayedNull() {
	m_percentPlayed = std::nullopt;
}


const qint32 &HeadGenreImageByIndexParams::quality() const {
	return m_quality.value();
}

void HeadGenreImageByIndexParams::setQuality(qint32 newQuality)  {
	m_quality = newQuality;
}

bool HeadGenreImageByIndexParams::qualityNull() const {
	// Nullable: true
	// Type Nullable: false
	

	return !m_quality.has_value();
}

void HeadGenreImageByIndexParams::setQualityNull() {
	m_quality = std::nullopt;
}


const QString &HeadGenreImageByIndexParams::tag() const {
	return m_tag;
}

void HeadGenreImageByIndexParams::setTag(QString newTag)  {
	m_tag = newTag;
}

bool HeadGenreImageByIndexParams::tagNull() const {
	// Nullable: true
	// Type Nullable: true
	

	return m_tag.isNull();
}

void HeadGenreImageByIndexParams::setTagNull() {
	m_tag.clear();
}


const qint32 &HeadGenreImageByIndexParams::unplayedCount() const {
	return m_unplayedCount.value();
}

void HeadGenreImageByIndexParams::setUnplayedCount(qint32 newUnplayedCount)  {
	m_unplayedCount = newUnplayedCount;
}

bool HeadGenreImageByIndexParams::unplayedCountNull() const {
	// Nullable: true
	// Type Nullable: false
	

	return !m_unplayedCount.has_value();
}

void HeadGenreImageByIndexParams::setUnplayedCountNull() {
	m_unplayedCount = std::nullopt;
}


const qint32 &HeadGenreImageByIndexParams::width() const {
	return m_width.value();
}

void HeadGenreImageByIndexParams::setWidth(qint32 newWidth)  {
	m_width = newWidth;
}

bool HeadGenreImageByIndexParams::widthNull() const {
	// Nullable: true
	// Type Nullable: false
	

	return !m_width.has_value();
}

void HeadGenreImageByIndexParams::setWidthNull() {
	m_width = std::nullopt;
}




// HeadItemImageParams

const ImageType &HeadItemImageParams::imageType() const {
	return m_imageType;
}

void HeadItemImageParams::setImageType(ImageType newImageType) {
	m_imageType = newImageType;
}


const QString &HeadItemImageParams::itemId() const {
	return m_itemId;
}

void HeadItemImageParams::setItemId(QString newItemId) {
	m_itemId = newItemId;
}


const bool &HeadItemImageParams::addPlayedIndicator() const {
	return m_addPlayedIndicator.value();
}

void HeadItemImageParams::setAddPlayedIndicator(bool newAddPlayedIndicator)  {
	m_addPlayedIndicator = newAddPlayedIndicator;
}

bool HeadItemImageParams::addPlayedIndicatorNull() const {
	// Nullable: true
	// Type Nullable: false
	

	return !m_addPlayedIndicator.has_value();
}

void HeadItemImageParams::setAddPlayedIndicatorNull() {
	m_addPlayedIndicator = std::nullopt;
}


const QString &HeadItemImageParams::backgroundColor() const {
	return m_backgroundColor;
}

void HeadItemImageParams::setBackgroundColor(QString newBackgroundColor)  {
	m_backgroundColor = newBackgroundColor;
}

bool HeadItemImageParams::backgroundColorNull() const {
	// Nullable: true
	// Type Nullable: true
	

	return m_backgroundColor.isNull();
}

void HeadItemImageParams::setBackgroundColorNull() {
	m_backgroundColor.clear();
}


const qint32 &HeadItemImageParams::blur() const {
	return m_blur.value();
}

void HeadItemImageParams::setBlur(qint32 newBlur)  {
	m_blur = newBlur;
}

bool HeadItemImageParams::blurNull() const {
	// Nullable: true
	// Type Nullable: false
	

	return !m_blur.has_value();
}

void HeadItemImageParams::setBlurNull() {
	m_blur = std::nullopt;
}


const bool &HeadItemImageParams::cropWhitespace() const {
	return m_cropWhitespace.value();
}

void HeadItemImageParams::setCropWhitespace(bool newCropWhitespace)  {
	m_cropWhitespace = newCropWhitespace;
}

bool HeadItemImageParams::cropWhitespaceNull() const {
	// Nullable: true
	// Type Nullable: false
	

	return !m_cropWhitespace.has_value();
}

void HeadItemImageParams::setCropWhitespaceNull() {
	m_cropWhitespace = std::nullopt;
}


const QString &HeadItemImageParams::foregroundLayer() const {
	return m_foregroundLayer;
}

void HeadItemImageParams::setForegroundLayer(QString newForegroundLayer)  {
	m_foregroundLayer = newForegroundLayer;
}

bool HeadItemImageParams::foregroundLayerNull() const {
	// Nullable: true
	// Type Nullable: true
	

	return m_foregroundLayer.isNull();
}

void HeadItemImageParams::setForegroundLayerNull() {
	m_foregroundLayer.clear();
}


const ImageFormat &HeadItemImageParams::format() const {
	return m_format;
}

void HeadItemImageParams::setFormat(ImageFormat newFormat)  {
	m_format = newFormat;
}

bool HeadItemImageParams::formatNull() const {
	// Nullable: true
	// Type Nullable: true
	

	return m_format== ImageFormat::EnumNotSet;
}

void HeadItemImageParams::setFormatNull() {
	m_format= ImageFormat::EnumNotSet;
}


const qint32 &HeadItemImageParams::height() const {
	return m_height.value();
}

void HeadItemImageParams::setHeight(qint32 newHeight)  {
	m_height = newHeight;
}

bool HeadItemImageParams::heightNull() const {
	// Nullable: true
	// Type Nullable: false
	

	return !m_height.has_value();
}

void HeadItemImageParams::setHeightNull() {
	m_height = std::nullopt;
}


const qint32 &HeadItemImageParams::imageIndex() const {
	return m_imageIndex.value();
}

void HeadItemImageParams::setImageIndex(qint32 newImageIndex)  {
	m_imageIndex = newImageIndex;
}

bool HeadItemImageParams::imageIndexNull() const {
	// Nullable: true
	// Type Nullable: false
	

	return !m_imageIndex.has_value();
}

void HeadItemImageParams::setImageIndexNull() {
	m_imageIndex = std::nullopt;
}


const qint32 &HeadItemImageParams::maxHeight() const {
	return m_maxHeight.value();
}

void HeadItemImageParams::setMaxHeight(qint32 newMaxHeight)  {
	m_maxHeight = newMaxHeight;
}

bool HeadItemImageParams::maxHeightNull() const {
	// Nullable: true
	// Type Nullable: false
	

	return !m_maxHeight.has_value();
}

void HeadItemImageParams::setMaxHeightNull() {
	m_maxHeight = std::nullopt;
}


const qint32 &HeadItemImageParams::maxWidth() const {
	return m_maxWidth.value();
}

void HeadItemImageParams::setMaxWidth(qint32 newMaxWidth)  {
	m_maxWidth = newMaxWidth;
}

bool HeadItemImageParams::maxWidthNull() const {
	// Nullable: true
	// Type Nullable: false
	

	return !m_maxWidth.has_value();
}

void HeadItemImageParams::setMaxWidthNull() {
	m_maxWidth = std::nullopt;
}


const double &HeadItemImageParams::percentPlayed() const {
	return m_percentPlayed.value();
}

void HeadItemImageParams::setPercentPlayed(double newPercentPlayed)  {
	m_percentPlayed = newPercentPlayed;
}

bool HeadItemImageParams::percentPlayedNull() const {
	// Nullable: true
	// Type Nullable: false
	

	return !m_percentPlayed.has_value();
}

void HeadItemImageParams::setPercentPlayedNull() {
	m_percentPlayed = std::nullopt;
}


const qint32 &HeadItemImageParams::quality() const {
	return m_quality.value();
}

void HeadItemImageParams::setQuality(qint32 newQuality)  {
	m_quality = newQuality;
}

bool HeadItemImageParams::qualityNull() const {
	// Nullable: true
	// Type Nullable: false
	

	return !m_quality.has_value();
}

void HeadItemImageParams::setQualityNull() {
	m_quality = std::nullopt;
}


const QString &HeadItemImageParams::tag() const {
	return m_tag;
}

void HeadItemImageParams::setTag(QString newTag)  {
	m_tag = newTag;
}

bool HeadItemImageParams::tagNull() const {
	// Nullable: true
	// Type Nullable: true
	

	return m_tag.isNull();
}

void HeadItemImageParams::setTagNull() {
	m_tag.clear();
}


const qint32 &HeadItemImageParams::unplayedCount() const {
	return m_unplayedCount.value();
}

void HeadItemImageParams::setUnplayedCount(qint32 newUnplayedCount)  {
	m_unplayedCount = newUnplayedCount;
}

bool HeadItemImageParams::unplayedCountNull() const {
	// Nullable: true
	// Type Nullable: false
	

	return !m_unplayedCount.has_value();
}

void HeadItemImageParams::setUnplayedCountNull() {
	m_unplayedCount = std::nullopt;
}


const qint32 &HeadItemImageParams::width() const {
	return m_width.value();
}

void HeadItemImageParams::setWidth(qint32 newWidth)  {
	m_width = newWidth;
}

bool HeadItemImageParams::widthNull() const {
	// Nullable: true
	// Type Nullable: false
	

	return !m_width.has_value();
}

void HeadItemImageParams::setWidthNull() {
	m_width = std::nullopt;
}




// HeadItemImage2Params

const ImageFormat &HeadItemImage2Params::format() const {
	return m_format;
}

void HeadItemImage2Params::setFormat(ImageFormat newFormat) {
	m_format = newFormat;
}


const qint32 &HeadItemImage2Params::imageIndex() const {
	return m_imageIndex;
}

void HeadItemImage2Params::setImageIndex(qint32 newImageIndex) {
	m_imageIndex = newImageIndex;
}


const ImageType &HeadItemImage2Params::imageType() const {
	return m_imageType;
}

void HeadItemImage2Params::setImageType(ImageType newImageType) {
	m_imageType = newImageType;
}


const QString &HeadItemImage2Params::itemId() const {
	return m_itemId;
}

void HeadItemImage2Params::setItemId(QString newItemId) {
	m_itemId = newItemId;
}


const qint32 &HeadItemImage2Params::maxHeight() const {
	return m_maxHeight;
}

void HeadItemImage2Params::setMaxHeight(qint32 newMaxHeight) {
	m_maxHeight = newMaxHeight;
}


const qint32 &HeadItemImage2Params::maxWidth() const {
	return m_maxWidth;
}

void HeadItemImage2Params::setMaxWidth(qint32 newMaxWidth) {
	m_maxWidth = newMaxWidth;
}


const double &HeadItemImage2Params::percentPlayed() const {
	return m_percentPlayed;
}

void HeadItemImage2Params::setPercentPlayed(double newPercentPlayed) {
	m_percentPlayed = newPercentPlayed;
}


const QString &HeadItemImage2Params::tag() const {
	return m_tag;
}

void HeadItemImage2Params::setTag(QString newTag) {
	m_tag = newTag;
}


const qint32 &HeadItemImage2Params::unplayedCount() const {
	return m_unplayedCount;
}

void HeadItemImage2Params::setUnplayedCount(qint32 newUnplayedCount) {
	m_unplayedCount = newUnplayedCount;
}


const bool &HeadItemImage2Params::addPlayedIndicator() const {
	return m_addPlayedIndicator.value();
}

void HeadItemImage2Params::setAddPlayedIndicator(bool newAddPlayedIndicator)  {
	m_addPlayedIndicator = newAddPlayedIndicator;
}

bool HeadItemImage2Params::addPlayedIndicatorNull() const {
	// Nullable: true
	// Type Nullable: false
	

	return !m_addPlayedIndicator.has_value();
}

void HeadItemImage2Params::setAddPlayedIndicatorNull() {
	m_addPlayedIndicator = std::nullopt;
}


const QString &HeadItemImage2Params::backgroundColor() const {
	return m_backgroundColor;
}

void HeadItemImage2Params::setBackgroundColor(QString newBackgroundColor)  {
	m_backgroundColor = newBackgroundColor;
}

bool HeadItemImage2Params::backgroundColorNull() const {
	// Nullable: true
	// Type Nullable: true
	

	return m_backgroundColor.isNull();
}

void HeadItemImage2Params::setBackgroundColorNull() {
	m_backgroundColor.clear();
}


const qint32 &HeadItemImage2Params::blur() const {
	return m_blur.value();
}

void HeadItemImage2Params::setBlur(qint32 newBlur)  {
	m_blur = newBlur;
}

bool HeadItemImage2Params::blurNull() const {
	// Nullable: true
	// Type Nullable: false
	

	return !m_blur.has_value();
}

void HeadItemImage2Params::setBlurNull() {
	m_blur = std::nullopt;
}


const bool &HeadItemImage2Params::cropWhitespace() const {
	return m_cropWhitespace.value();
}

void HeadItemImage2Params::setCropWhitespace(bool newCropWhitespace)  {
	m_cropWhitespace = newCropWhitespace;
}

bool HeadItemImage2Params::cropWhitespaceNull() const {
	// Nullable: true
	// Type Nullable: false
	

	return !m_cropWhitespace.has_value();
}

void HeadItemImage2Params::setCropWhitespaceNull() {
	m_cropWhitespace = std::nullopt;
}


const QString &HeadItemImage2Params::foregroundLayer() const {
	return m_foregroundLayer;
}

void HeadItemImage2Params::setForegroundLayer(QString newForegroundLayer)  {
	m_foregroundLayer = newForegroundLayer;
}

bool HeadItemImage2Params::foregroundLayerNull() const {
	// Nullable: true
	// Type Nullable: true
	

	return m_foregroundLayer.isNull();
}

void HeadItemImage2Params::setForegroundLayerNull() {
	m_foregroundLayer.clear();
}


const qint32 &HeadItemImage2Params::height() const {
	return m_height.value();
}

void HeadItemImage2Params::setHeight(qint32 newHeight)  {
	m_height = newHeight;
}

bool HeadItemImage2Params::heightNull() const {
	// Nullable: true
	// Type Nullable: false
	

	return !m_height.has_value();
}

void HeadItemImage2Params::setHeightNull() {
	m_height = std::nullopt;
}


const qint32 &HeadItemImage2Params::quality() const {
	return m_quality.value();
}

void HeadItemImage2Params::setQuality(qint32 newQuality)  {
	m_quality = newQuality;
}

bool HeadItemImage2Params::qualityNull() const {
	// Nullable: true
	// Type Nullable: false
	

	return !m_quality.has_value();
}

void HeadItemImage2Params::setQualityNull() {
	m_quality = std::nullopt;
}


const qint32 &HeadItemImage2Params::width() const {
	return m_width.value();
}

void HeadItemImage2Params::setWidth(qint32 newWidth)  {
	m_width = newWidth;
}

bool HeadItemImage2Params::widthNull() const {
	// Nullable: true
	// Type Nullable: false
	

	return !m_width.has_value();
}

void HeadItemImage2Params::setWidthNull() {
	m_width = std::nullopt;
}




// HeadItemImageByIndexParams

const qint32 &HeadItemImageByIndexParams::imageIndex() const {
	return m_imageIndex;
}

void HeadItemImageByIndexParams::setImageIndex(qint32 newImageIndex) {
	m_imageIndex = newImageIndex;
}


const ImageType &HeadItemImageByIndexParams::imageType() const {
	return m_imageType;
}

void HeadItemImageByIndexParams::setImageType(ImageType newImageType) {
	m_imageType = newImageType;
}


const QString &HeadItemImageByIndexParams::itemId() const {
	return m_itemId;
}

void HeadItemImageByIndexParams::setItemId(QString newItemId) {
	m_itemId = newItemId;
}


const bool &HeadItemImageByIndexParams::addPlayedIndicator() const {
	return m_addPlayedIndicator.value();
}

void HeadItemImageByIndexParams::setAddPlayedIndicator(bool newAddPlayedIndicator)  {
	m_addPlayedIndicator = newAddPlayedIndicator;
}

bool HeadItemImageByIndexParams::addPlayedIndicatorNull() const {
	// Nullable: true
	// Type Nullable: false
	

	return !m_addPlayedIndicator.has_value();
}

void HeadItemImageByIndexParams::setAddPlayedIndicatorNull() {
	m_addPlayedIndicator = std::nullopt;
}


const QString &HeadItemImageByIndexParams::backgroundColor() const {
	return m_backgroundColor;
}

void HeadItemImageByIndexParams::setBackgroundColor(QString newBackgroundColor)  {
	m_backgroundColor = newBackgroundColor;
}

bool HeadItemImageByIndexParams::backgroundColorNull() const {
	// Nullable: true
	// Type Nullable: true
	

	return m_backgroundColor.isNull();
}

void HeadItemImageByIndexParams::setBackgroundColorNull() {
	m_backgroundColor.clear();
}


const qint32 &HeadItemImageByIndexParams::blur() const {
	return m_blur.value();
}

void HeadItemImageByIndexParams::setBlur(qint32 newBlur)  {
	m_blur = newBlur;
}

bool HeadItemImageByIndexParams::blurNull() const {
	// Nullable: true
	// Type Nullable: false
	

	return !m_blur.has_value();
}

void HeadItemImageByIndexParams::setBlurNull() {
	m_blur = std::nullopt;
}


const bool &HeadItemImageByIndexParams::cropWhitespace() const {
	return m_cropWhitespace.value();
}

void HeadItemImageByIndexParams::setCropWhitespace(bool newCropWhitespace)  {
	m_cropWhitespace = newCropWhitespace;
}

bool HeadItemImageByIndexParams::cropWhitespaceNull() const {
	// Nullable: true
	// Type Nullable: false
	

	return !m_cropWhitespace.has_value();
}

void HeadItemImageByIndexParams::setCropWhitespaceNull() {
	m_cropWhitespace = std::nullopt;
}


const QString &HeadItemImageByIndexParams::foregroundLayer() const {
	return m_foregroundLayer;
}

void HeadItemImageByIndexParams::setForegroundLayer(QString newForegroundLayer)  {
	m_foregroundLayer = newForegroundLayer;
}

bool HeadItemImageByIndexParams::foregroundLayerNull() const {
	// Nullable: true
	// Type Nullable: true
	

	return m_foregroundLayer.isNull();
}

void HeadItemImageByIndexParams::setForegroundLayerNull() {
	m_foregroundLayer.clear();
}


const ImageFormat &HeadItemImageByIndexParams::format() const {
	return m_format;
}

void HeadItemImageByIndexParams::setFormat(ImageFormat newFormat)  {
	m_format = newFormat;
}

bool HeadItemImageByIndexParams::formatNull() const {
	// Nullable: true
	// Type Nullable: true
	

	return m_format== ImageFormat::EnumNotSet;
}

void HeadItemImageByIndexParams::setFormatNull() {
	m_format= ImageFormat::EnumNotSet;
}


const qint32 &HeadItemImageByIndexParams::height() const {
	return m_height.value();
}

void HeadItemImageByIndexParams::setHeight(qint32 newHeight)  {
	m_height = newHeight;
}

bool HeadItemImageByIndexParams::heightNull() const {
	// Nullable: true
	// Type Nullable: false
	

	return !m_height.has_value();
}

void HeadItemImageByIndexParams::setHeightNull() {
	m_height = std::nullopt;
}


const qint32 &HeadItemImageByIndexParams::maxHeight() const {
	return m_maxHeight.value();
}

void HeadItemImageByIndexParams::setMaxHeight(qint32 newMaxHeight)  {
	m_maxHeight = newMaxHeight;
}

bool HeadItemImageByIndexParams::maxHeightNull() const {
	// Nullable: true
	// Type Nullable: false
	

	return !m_maxHeight.has_value();
}

void HeadItemImageByIndexParams::setMaxHeightNull() {
	m_maxHeight = std::nullopt;
}


const qint32 &HeadItemImageByIndexParams::maxWidth() const {
	return m_maxWidth.value();
}

void HeadItemImageByIndexParams::setMaxWidth(qint32 newMaxWidth)  {
	m_maxWidth = newMaxWidth;
}

bool HeadItemImageByIndexParams::maxWidthNull() const {
	// Nullable: true
	// Type Nullable: false
	

	return !m_maxWidth.has_value();
}

void HeadItemImageByIndexParams::setMaxWidthNull() {
	m_maxWidth = std::nullopt;
}


const double &HeadItemImageByIndexParams::percentPlayed() const {
	return m_percentPlayed.value();
}

void HeadItemImageByIndexParams::setPercentPlayed(double newPercentPlayed)  {
	m_percentPlayed = newPercentPlayed;
}

bool HeadItemImageByIndexParams::percentPlayedNull() const {
	// Nullable: true
	// Type Nullable: false
	

	return !m_percentPlayed.has_value();
}

void HeadItemImageByIndexParams::setPercentPlayedNull() {
	m_percentPlayed = std::nullopt;
}


const qint32 &HeadItemImageByIndexParams::quality() const {
	return m_quality.value();
}

void HeadItemImageByIndexParams::setQuality(qint32 newQuality)  {
	m_quality = newQuality;
}

bool HeadItemImageByIndexParams::qualityNull() const {
	// Nullable: true
	// Type Nullable: false
	

	return !m_quality.has_value();
}

void HeadItemImageByIndexParams::setQualityNull() {
	m_quality = std::nullopt;
}


const QString &HeadItemImageByIndexParams::tag() const {
	return m_tag;
}

void HeadItemImageByIndexParams::setTag(QString newTag)  {
	m_tag = newTag;
}

bool HeadItemImageByIndexParams::tagNull() const {
	// Nullable: true
	// Type Nullable: true
	

	return m_tag.isNull();
}

void HeadItemImageByIndexParams::setTagNull() {
	m_tag.clear();
}


const qint32 &HeadItemImageByIndexParams::unplayedCount() const {
	return m_unplayedCount.value();
}

void HeadItemImageByIndexParams::setUnplayedCount(qint32 newUnplayedCount)  {
	m_unplayedCount = newUnplayedCount;
}

bool HeadItemImageByIndexParams::unplayedCountNull() const {
	// Nullable: true
	// Type Nullable: false
	

	return !m_unplayedCount.has_value();
}

void HeadItemImageByIndexParams::setUnplayedCountNull() {
	m_unplayedCount = std::nullopt;
}


const qint32 &HeadItemImageByIndexParams::width() const {
	return m_width.value();
}

void HeadItemImageByIndexParams::setWidth(qint32 newWidth)  {
	m_width = newWidth;
}

bool HeadItemImageByIndexParams::widthNull() const {
	// Nullable: true
	// Type Nullable: false
	

	return !m_width.has_value();
}

void HeadItemImageByIndexParams::setWidthNull() {
	m_width = std::nullopt;
}




// HeadMasterHlsAudioPlaylistParams

const QString &HeadMasterHlsAudioPlaylistParams::itemId() const {
	return m_itemId;
}

void HeadMasterHlsAudioPlaylistParams::setItemId(QString newItemId) {
	m_itemId = newItemId;
}


const QString &HeadMasterHlsAudioPlaylistParams::mediaSourceId() const {
	return m_mediaSourceId;
}

void HeadMasterHlsAudioPlaylistParams::setMediaSourceId(QString newMediaSourceId) {
	m_mediaSourceId = newMediaSourceId;
}


const bool &HeadMasterHlsAudioPlaylistParams::allowAudioStreamCopy() const {
	return m_allowAudioStreamCopy.value();
}

void HeadMasterHlsAudioPlaylistParams::setAllowAudioStreamCopy(bool newAllowAudioStreamCopy)  {
	m_allowAudioStreamCopy = newAllowAudioStreamCopy;
}

bool HeadMasterHlsAudioPlaylistParams::allowAudioStreamCopyNull() const {
	// Nullable: true
	// Type Nullable: false
	

	return !m_allowAudioStreamCopy.has_value();
}

void HeadMasterHlsAudioPlaylistParams::setAllowAudioStreamCopyNull() {
	m_allowAudioStreamCopy = std::nullopt;
}


const bool &HeadMasterHlsAudioPlaylistParams::allowVideoStreamCopy() const {
	return m_allowVideoStreamCopy.value();
}

void HeadMasterHlsAudioPlaylistParams::setAllowVideoStreamCopy(bool newAllowVideoStreamCopy)  {
	m_allowVideoStreamCopy = newAllowVideoStreamCopy;
}

bool HeadMasterHlsAudioPlaylistParams::allowVideoStreamCopyNull() const {
	// Nullable: true
	// Type Nullable: false
	

	return !m_allowVideoStreamCopy.has_value();
}

void HeadMasterHlsAudioPlaylistParams::setAllowVideoStreamCopyNull() {
	m_allowVideoStreamCopy = std::nullopt;
}


const qint32 &HeadMasterHlsAudioPlaylistParams::audioBitRate() const {
	return m_audioBitRate.value();
}

void HeadMasterHlsAudioPlaylistParams::setAudioBitRate(qint32 newAudioBitRate)  {
	m_audioBitRate = newAudioBitRate;
}

bool HeadMasterHlsAudioPlaylistParams::audioBitRateNull() const {
	// Nullable: true
	// Type Nullable: false
	

	return !m_audioBitRate.has_value();
}

void HeadMasterHlsAudioPlaylistParams::setAudioBitRateNull() {
	m_audioBitRate = std::nullopt;
}


const qint32 &HeadMasterHlsAudioPlaylistParams::audioChannels() const {
	return m_audioChannels.value();
}

void HeadMasterHlsAudioPlaylistParams::setAudioChannels(qint32 newAudioChannels)  {
	m_audioChannels = newAudioChannels;
}

bool HeadMasterHlsAudioPlaylistParams::audioChannelsNull() const {
	// Nullable: true
	// Type Nullable: false
	

	return !m_audioChannels.has_value();
}

void HeadMasterHlsAudioPlaylistParams::setAudioChannelsNull() {
	m_audioChannels = std::nullopt;
}


const QString &HeadMasterHlsAudioPlaylistParams::audioCodec() const {
	return m_audioCodec;
}

void HeadMasterHlsAudioPlaylistParams::setAudioCodec(QString newAudioCodec)  {
	m_audioCodec = newAudioCodec;
}

bool HeadMasterHlsAudioPlaylistParams::audioCodecNull() const {
	// Nullable: true
	// Type Nullable: true
	

	return m_audioCodec.isNull();
}

void HeadMasterHlsAudioPlaylistParams::setAudioCodecNull() {
	m_audioCodec.clear();
}


const qint32 &HeadMasterHlsAudioPlaylistParams::audioSampleRate() const {
	return m_audioSampleRate.value();
}

void HeadMasterHlsAudioPlaylistParams::setAudioSampleRate(qint32 newAudioSampleRate)  {
	m_audioSampleRate = newAudioSampleRate;
}

bool HeadMasterHlsAudioPlaylistParams::audioSampleRateNull() const {
	// Nullable: true
	// Type Nullable: false
	

	return !m_audioSampleRate.has_value();
}

void HeadMasterHlsAudioPlaylistParams::setAudioSampleRateNull() {
	m_audioSampleRate = std::nullopt;
}


const qint32 &HeadMasterHlsAudioPlaylistParams::audioStreamIndex() const {
	return m_audioStreamIndex.value();
}

void HeadMasterHlsAudioPlaylistParams::setAudioStreamIndex(qint32 newAudioStreamIndex)  {
	m_audioStreamIndex = newAudioStreamIndex;
}

bool HeadMasterHlsAudioPlaylistParams::audioStreamIndexNull() const {
	// Nullable: true
	// Type Nullable: false
	

	return !m_audioStreamIndex.has_value();
}

void HeadMasterHlsAudioPlaylistParams::setAudioStreamIndexNull() {
	m_audioStreamIndex = std::nullopt;
}


const bool &HeadMasterHlsAudioPlaylistParams::breakOnNonKeyFrames() const {
	return m_breakOnNonKeyFrames.value();
}

void HeadMasterHlsAudioPlaylistParams::setBreakOnNonKeyFrames(bool newBreakOnNonKeyFrames)  {
	m_breakOnNonKeyFrames = newBreakOnNonKeyFrames;
}

bool HeadMasterHlsAudioPlaylistParams::breakOnNonKeyFramesNull() const {
	// Nullable: true
	// Type Nullable: false
	

	return !m_breakOnNonKeyFrames.has_value();
}

void HeadMasterHlsAudioPlaylistParams::setBreakOnNonKeyFramesNull() {
	m_breakOnNonKeyFrames = std::nullopt;
}


const EncodingContext &HeadMasterHlsAudioPlaylistParams::context() const {
	return m_context;
}

void HeadMasterHlsAudioPlaylistParams::setContext(EncodingContext newContext)  {
	m_context = newContext;
}

bool HeadMasterHlsAudioPlaylistParams::contextNull() const {
	// Nullable: true
	// Type Nullable: true
	

	return m_context== EncodingContext::EnumNotSet;
}

void HeadMasterHlsAudioPlaylistParams::setContextNull() {
	m_context= EncodingContext::EnumNotSet;
}


const bool &HeadMasterHlsAudioPlaylistParams::copyTimestamps() const {
	return m_copyTimestamps.value();
}

void HeadMasterHlsAudioPlaylistParams::setCopyTimestamps(bool newCopyTimestamps)  {
	m_copyTimestamps = newCopyTimestamps;
}

bool HeadMasterHlsAudioPlaylistParams::copyTimestampsNull() const {
	// Nullable: true
	// Type Nullable: false
	

	return !m_copyTimestamps.has_value();
}

void HeadMasterHlsAudioPlaylistParams::setCopyTimestampsNull() {
	m_copyTimestamps = std::nullopt;
}


const qint32 &HeadMasterHlsAudioPlaylistParams::cpuCoreLimit() const {
	return m_cpuCoreLimit.value();
}

void HeadMasterHlsAudioPlaylistParams::setCpuCoreLimit(qint32 newCpuCoreLimit)  {
	m_cpuCoreLimit = newCpuCoreLimit;
}

bool HeadMasterHlsAudioPlaylistParams::cpuCoreLimitNull() const {
	// Nullable: true
	// Type Nullable: false
	

	return !m_cpuCoreLimit.has_value();
}

void HeadMasterHlsAudioPlaylistParams::setCpuCoreLimitNull() {
	m_cpuCoreLimit = std::nullopt;
}


const bool &HeadMasterHlsAudioPlaylistParams::deInterlace() const {
	return m_deInterlace.value();
}

void HeadMasterHlsAudioPlaylistParams::setDeInterlace(bool newDeInterlace)  {
	m_deInterlace = newDeInterlace;
}

bool HeadMasterHlsAudioPlaylistParams::deInterlaceNull() const {
	// Nullable: true
	// Type Nullable: false
	

	return !m_deInterlace.has_value();
}

void HeadMasterHlsAudioPlaylistParams::setDeInterlaceNull() {
	m_deInterlace = std::nullopt;
}


const QString &HeadMasterHlsAudioPlaylistParams::deviceId() const {
	return m_deviceId;
}

void HeadMasterHlsAudioPlaylistParams::setDeviceId(QString newDeviceId)  {
	m_deviceId = newDeviceId;
}

bool HeadMasterHlsAudioPlaylistParams::deviceIdNull() const {
	// Nullable: true
	// Type Nullable: true
	

	return m_deviceId.isNull();
}

void HeadMasterHlsAudioPlaylistParams::setDeviceIdNull() {
	m_deviceId.clear();
}


const QString &HeadMasterHlsAudioPlaylistParams::deviceProfileId() const {
	return m_deviceProfileId;
}

void HeadMasterHlsAudioPlaylistParams::setDeviceProfileId(QString newDeviceProfileId)  {
	m_deviceProfileId = newDeviceProfileId;
}

bool HeadMasterHlsAudioPlaylistParams::deviceProfileIdNull() const {
	// Nullable: true
	// Type Nullable: true
	

	return m_deviceProfileId.isNull();
}

void HeadMasterHlsAudioPlaylistParams::setDeviceProfileIdNull() {
	m_deviceProfileId.clear();
}


const bool &HeadMasterHlsAudioPlaylistParams::enableAdaptiveBitrateStreaming() const {
	return m_enableAdaptiveBitrateStreaming.value();
}

void HeadMasterHlsAudioPlaylistParams::setEnableAdaptiveBitrateStreaming(bool newEnableAdaptiveBitrateStreaming)  {
	m_enableAdaptiveBitrateStreaming = newEnableAdaptiveBitrateStreaming;
}

bool HeadMasterHlsAudioPlaylistParams::enableAdaptiveBitrateStreamingNull() const {
	// Nullable: false
	// Type Nullable: false
	

	return !m_enableAdaptiveBitrateStreaming.has_value();
}

void HeadMasterHlsAudioPlaylistParams::setEnableAdaptiveBitrateStreamingNull() {
	m_enableAdaptiveBitrateStreaming = std::nullopt;
}


const bool &HeadMasterHlsAudioPlaylistParams::enableAutoStreamCopy() const {
	return m_enableAutoStreamCopy.value();
}

void HeadMasterHlsAudioPlaylistParams::setEnableAutoStreamCopy(bool newEnableAutoStreamCopy)  {
	m_enableAutoStreamCopy = newEnableAutoStreamCopy;
}

bool HeadMasterHlsAudioPlaylistParams::enableAutoStreamCopyNull() const {
	// Nullable: true
	// Type Nullable: false
	

	return !m_enableAutoStreamCopy.has_value();
}

void HeadMasterHlsAudioPlaylistParams::setEnableAutoStreamCopyNull() {
	m_enableAutoStreamCopy = std::nullopt;
}


const bool &HeadMasterHlsAudioPlaylistParams::enableMpegtsM2TsMode() const {
	return m_enableMpegtsM2TsMode.value();
}

void HeadMasterHlsAudioPlaylistParams::setEnableMpegtsM2TsMode(bool newEnableMpegtsM2TsMode)  {
	m_enableMpegtsM2TsMode = newEnableMpegtsM2TsMode;
}

bool HeadMasterHlsAudioPlaylistParams::enableMpegtsM2TsModeNull() const {
	// Nullable: true
	// Type Nullable: false
	

	return !m_enableMpegtsM2TsMode.has_value();
}

void HeadMasterHlsAudioPlaylistParams::setEnableMpegtsM2TsModeNull() {
	m_enableMpegtsM2TsMode = std::nullopt;
}


const float &HeadMasterHlsAudioPlaylistParams::framerate() const {
	return m_framerate.value();
}

void HeadMasterHlsAudioPlaylistParams::setFramerate(float newFramerate)  {
	m_framerate = newFramerate;
}

bool HeadMasterHlsAudioPlaylistParams::framerateNull() const {
	// Nullable: true
	// Type Nullable: false
	

	return !m_framerate.has_value();
}

void HeadMasterHlsAudioPlaylistParams::setFramerateNull() {
	m_framerate = std::nullopt;
}


const qint32 &HeadMasterHlsAudioPlaylistParams::height() const {
	return m_height.value();
}

void HeadMasterHlsAudioPlaylistParams::setHeight(qint32 newHeight)  {
	m_height = newHeight;
}

bool HeadMasterHlsAudioPlaylistParams::heightNull() const {
	// Nullable: true
	// Type Nullable: false
	

	return !m_height.has_value();
}

void HeadMasterHlsAudioPlaylistParams::setHeightNull() {
	m_height = std::nullopt;
}


const QString &HeadMasterHlsAudioPlaylistParams::level() const {
	return m_level;
}

void HeadMasterHlsAudioPlaylistParams::setLevel(QString newLevel)  {
	m_level = newLevel;
}

bool HeadMasterHlsAudioPlaylistParams::levelNull() const {
	// Nullable: true
	// Type Nullable: true
	

	return m_level.isNull();
}

void HeadMasterHlsAudioPlaylistParams::setLevelNull() {
	m_level.clear();
}


const QString &HeadMasterHlsAudioPlaylistParams::liveStreamId() const {
	return m_liveStreamId;
}

void HeadMasterHlsAudioPlaylistParams::setLiveStreamId(QString newLiveStreamId)  {
	m_liveStreamId = newLiveStreamId;
}

bool HeadMasterHlsAudioPlaylistParams::liveStreamIdNull() const {
	// Nullable: true
	// Type Nullable: true
	

	return m_liveStreamId.isNull();
}

void HeadMasterHlsAudioPlaylistParams::setLiveStreamIdNull() {
	m_liveStreamId.clear();
}


const qint32 &HeadMasterHlsAudioPlaylistParams::maxAudioBitDepth() const {
	return m_maxAudioBitDepth.value();
}

void HeadMasterHlsAudioPlaylistParams::setMaxAudioBitDepth(qint32 newMaxAudioBitDepth)  {
	m_maxAudioBitDepth = newMaxAudioBitDepth;
}

bool HeadMasterHlsAudioPlaylistParams::maxAudioBitDepthNull() const {
	// Nullable: true
	// Type Nullable: false
	

	return !m_maxAudioBitDepth.has_value();
}

void HeadMasterHlsAudioPlaylistParams::setMaxAudioBitDepthNull() {
	m_maxAudioBitDepth = std::nullopt;
}


const qint32 &HeadMasterHlsAudioPlaylistParams::maxAudioChannels() const {
	return m_maxAudioChannels.value();
}

void HeadMasterHlsAudioPlaylistParams::setMaxAudioChannels(qint32 newMaxAudioChannels)  {
	m_maxAudioChannels = newMaxAudioChannels;
}

bool HeadMasterHlsAudioPlaylistParams::maxAudioChannelsNull() const {
	// Nullable: true
	// Type Nullable: false
	

	return !m_maxAudioChannels.has_value();
}

void HeadMasterHlsAudioPlaylistParams::setMaxAudioChannelsNull() {
	m_maxAudioChannels = std::nullopt;
}


const float &HeadMasterHlsAudioPlaylistParams::maxFramerate() const {
	return m_maxFramerate.value();
}

void HeadMasterHlsAudioPlaylistParams::setMaxFramerate(float newMaxFramerate)  {
	m_maxFramerate = newMaxFramerate;
}

bool HeadMasterHlsAudioPlaylistParams::maxFramerateNull() const {
	// Nullable: true
	// Type Nullable: false
	

	return !m_maxFramerate.has_value();
}

void HeadMasterHlsAudioPlaylistParams::setMaxFramerateNull() {
	m_maxFramerate = std::nullopt;
}


const qint32 &HeadMasterHlsAudioPlaylistParams::maxRefFrames() const {
	return m_maxRefFrames.value();
}

void HeadMasterHlsAudioPlaylistParams::setMaxRefFrames(qint32 newMaxRefFrames)  {
	m_maxRefFrames = newMaxRefFrames;
}

bool HeadMasterHlsAudioPlaylistParams::maxRefFramesNull() const {
	// Nullable: true
	// Type Nullable: false
	

	return !m_maxRefFrames.has_value();
}

void HeadMasterHlsAudioPlaylistParams::setMaxRefFramesNull() {
	m_maxRefFrames = std::nullopt;
}


const qint32 &HeadMasterHlsAudioPlaylistParams::maxStreamingBitrate() const {
	return m_maxStreamingBitrate.value();
}

void HeadMasterHlsAudioPlaylistParams::setMaxStreamingBitrate(qint32 newMaxStreamingBitrate)  {
	m_maxStreamingBitrate = newMaxStreamingBitrate;
}

bool HeadMasterHlsAudioPlaylistParams::maxStreamingBitrateNull() const {
	// Nullable: true
	// Type Nullable: false
	

	return !m_maxStreamingBitrate.has_value();
}

void HeadMasterHlsAudioPlaylistParams::setMaxStreamingBitrateNull() {
	m_maxStreamingBitrate = std::nullopt;
}


const qint32 &HeadMasterHlsAudioPlaylistParams::maxVideoBitDepth() const {
	return m_maxVideoBitDepth.value();
}

void HeadMasterHlsAudioPlaylistParams::setMaxVideoBitDepth(qint32 newMaxVideoBitDepth)  {
	m_maxVideoBitDepth = newMaxVideoBitDepth;
}

bool HeadMasterHlsAudioPlaylistParams::maxVideoBitDepthNull() const {
	// Nullable: true
	// Type Nullable: false
	

	return !m_maxVideoBitDepth.has_value();
}

void HeadMasterHlsAudioPlaylistParams::setMaxVideoBitDepthNull() {
	m_maxVideoBitDepth = std::nullopt;
}


const qint32 &HeadMasterHlsAudioPlaylistParams::minSegments() const {
	return m_minSegments.value();
}

void HeadMasterHlsAudioPlaylistParams::setMinSegments(qint32 newMinSegments)  {
	m_minSegments = newMinSegments;
}

bool HeadMasterHlsAudioPlaylistParams::minSegmentsNull() const {
	// Nullable: true
	// Type Nullable: false
	

	return !m_minSegments.has_value();
}

void HeadMasterHlsAudioPlaylistParams::setMinSegmentsNull() {
	m_minSegments = std::nullopt;
}


const QString &HeadMasterHlsAudioPlaylistParams::params() const {
	return m_params;
}

void HeadMasterHlsAudioPlaylistParams::setParams(QString newParams)  {
	m_params = newParams;
}

bool HeadMasterHlsAudioPlaylistParams::paramsNull() const {
	// Nullable: true
	// Type Nullable: true
	

	return m_params.isNull();
}

void HeadMasterHlsAudioPlaylistParams::setParamsNull() {
	m_params.clear();
}


const QString &HeadMasterHlsAudioPlaylistParams::playSessionId() const {
	return m_playSessionId;
}

void HeadMasterHlsAudioPlaylistParams::setPlaySessionId(QString newPlaySessionId)  {
	m_playSessionId = newPlaySessionId;
}

bool HeadMasterHlsAudioPlaylistParams::playSessionIdNull() const {
	// Nullable: true
	// Type Nullable: true
	

	return m_playSessionId.isNull();
}

void HeadMasterHlsAudioPlaylistParams::setPlaySessionIdNull() {
	m_playSessionId.clear();
}


const QString &HeadMasterHlsAudioPlaylistParams::profile() const {
	return m_profile;
}

void HeadMasterHlsAudioPlaylistParams::setProfile(QString newProfile)  {
	m_profile = newProfile;
}

bool HeadMasterHlsAudioPlaylistParams::profileNull() const {
	// Nullable: true
	// Type Nullable: true
	

	return m_profile.isNull();
}

void HeadMasterHlsAudioPlaylistParams::setProfileNull() {
	m_profile.clear();
}


const bool &HeadMasterHlsAudioPlaylistParams::requireAvc() const {
	return m_requireAvc.value();
}

void HeadMasterHlsAudioPlaylistParams::setRequireAvc(bool newRequireAvc)  {
	m_requireAvc = newRequireAvc;
}

bool HeadMasterHlsAudioPlaylistParams::requireAvcNull() const {
	// Nullable: true
	// Type Nullable: false
	

	return !m_requireAvc.has_value();
}

void HeadMasterHlsAudioPlaylistParams::setRequireAvcNull() {
	m_requireAvc = std::nullopt;
}


const bool &HeadMasterHlsAudioPlaylistParams::requireNonAnamorphic() const {
	return m_requireNonAnamorphic.value();
}

void HeadMasterHlsAudioPlaylistParams::setRequireNonAnamorphic(bool newRequireNonAnamorphic)  {
	m_requireNonAnamorphic = newRequireNonAnamorphic;
}

bool HeadMasterHlsAudioPlaylistParams::requireNonAnamorphicNull() const {
	// Nullable: true
	// Type Nullable: false
	

	return !m_requireNonAnamorphic.has_value();
}

void HeadMasterHlsAudioPlaylistParams::setRequireNonAnamorphicNull() {
	m_requireNonAnamorphic = std::nullopt;
}


const QString &HeadMasterHlsAudioPlaylistParams::segmentContainer() const {
	return m_segmentContainer;
}

void HeadMasterHlsAudioPlaylistParams::setSegmentContainer(QString newSegmentContainer)  {
	m_segmentContainer = newSegmentContainer;
}

bool HeadMasterHlsAudioPlaylistParams::segmentContainerNull() const {
	// Nullable: true
	// Type Nullable: true
	

	return m_segmentContainer.isNull();
}

void HeadMasterHlsAudioPlaylistParams::setSegmentContainerNull() {
	m_segmentContainer.clear();
}


const qint32 &HeadMasterHlsAudioPlaylistParams::segmentLength() const {
	return m_segmentLength.value();
}

void HeadMasterHlsAudioPlaylistParams::setSegmentLength(qint32 newSegmentLength)  {
	m_segmentLength = newSegmentLength;
}

bool HeadMasterHlsAudioPlaylistParams::segmentLengthNull() const {
	// Nullable: true
	// Type Nullable: false
	

	return !m_segmentLength.has_value();
}

void HeadMasterHlsAudioPlaylistParams::setSegmentLengthNull() {
	m_segmentLength = std::nullopt;
}


const qint64 &HeadMasterHlsAudioPlaylistParams::startTimeTicks() const {
	return m_startTimeTicks.value();
}

void HeadMasterHlsAudioPlaylistParams::setStartTimeTicks(qint64 newStartTimeTicks)  {
	m_startTimeTicks = newStartTimeTicks;
}

bool HeadMasterHlsAudioPlaylistParams::startTimeTicksNull() const {
	// Nullable: true
	// Type Nullable: false
	

	return !m_startTimeTicks.has_value();
}

void HeadMasterHlsAudioPlaylistParams::setStartTimeTicksNull() {
	m_startTimeTicks = std::nullopt;
}


const bool &HeadMasterHlsAudioPlaylistParams::staticStreaming() const {
	return m_staticStreaming.value();
}

void HeadMasterHlsAudioPlaylistParams::setStaticStreaming(bool newStaticStreaming)  {
	m_staticStreaming = newStaticStreaming;
}

bool HeadMasterHlsAudioPlaylistParams::staticStreamingNull() const {
	// Nullable: true
	// Type Nullable: false
	

	return !m_staticStreaming.has_value();
}

void HeadMasterHlsAudioPlaylistParams::setStaticStreamingNull() {
	m_staticStreaming = std::nullopt;
}


const QJsonObject &HeadMasterHlsAudioPlaylistParams::streamOptions() const {
	return m_streamOptions;
}

void HeadMasterHlsAudioPlaylistParams::setStreamOptions(QJsonObject newStreamOptions)  {
	m_streamOptions = newStreamOptions;
}

bool HeadMasterHlsAudioPlaylistParams::streamOptionsNull() const {
	// Nullable: true
	// Type Nullable: true
	

	return m_streamOptions.isEmpty();
}

void HeadMasterHlsAudioPlaylistParams::setStreamOptionsNull() {
	m_streamOptions= QJsonObject();
}


const QString &HeadMasterHlsAudioPlaylistParams::subtitleCodec() const {
	return m_subtitleCodec;
}

void HeadMasterHlsAudioPlaylistParams::setSubtitleCodec(QString newSubtitleCodec)  {
	m_subtitleCodec = newSubtitleCodec;
}

bool HeadMasterHlsAudioPlaylistParams::subtitleCodecNull() const {
	// Nullable: true
	// Type Nullable: true
	

	return m_subtitleCodec.isNull();
}

void HeadMasterHlsAudioPlaylistParams::setSubtitleCodecNull() {
	m_subtitleCodec.clear();
}


const SubtitleDeliveryMethod &HeadMasterHlsAudioPlaylistParams::subtitleMethod() const {
	return m_subtitleMethod;
}

void HeadMasterHlsAudioPlaylistParams::setSubtitleMethod(SubtitleDeliveryMethod newSubtitleMethod)  {
	m_subtitleMethod = newSubtitleMethod;
}

bool HeadMasterHlsAudioPlaylistParams::subtitleMethodNull() const {
	// Nullable: true
	// Type Nullable: true
	

	return m_subtitleMethod== SubtitleDeliveryMethod::EnumNotSet;
}

void HeadMasterHlsAudioPlaylistParams::setSubtitleMethodNull() {
	m_subtitleMethod= SubtitleDeliveryMethod::EnumNotSet;
}


const qint32 &HeadMasterHlsAudioPlaylistParams::subtitleStreamIndex() const {
	return m_subtitleStreamIndex.value();
}

void HeadMasterHlsAudioPlaylistParams::setSubtitleStreamIndex(qint32 newSubtitleStreamIndex)  {
	m_subtitleStreamIndex = newSubtitleStreamIndex;
}

bool HeadMasterHlsAudioPlaylistParams::subtitleStreamIndexNull() const {
	// Nullable: true
	// Type Nullable: false
	

	return !m_subtitleStreamIndex.has_value();
}

void HeadMasterHlsAudioPlaylistParams::setSubtitleStreamIndexNull() {
	m_subtitleStreamIndex = std::nullopt;
}


const QString &HeadMasterHlsAudioPlaylistParams::tag() const {
	return m_tag;
}

void HeadMasterHlsAudioPlaylistParams::setTag(QString newTag)  {
	m_tag = newTag;
}

bool HeadMasterHlsAudioPlaylistParams::tagNull() const {
	// Nullable: true
	// Type Nullable: true
	

	return m_tag.isNull();
}

void HeadMasterHlsAudioPlaylistParams::setTagNull() {
	m_tag.clear();
}


const QString &HeadMasterHlsAudioPlaylistParams::transcodeReasons() const {
	return m_transcodeReasons;
}

void HeadMasterHlsAudioPlaylistParams::setTranscodeReasons(QString newTranscodeReasons)  {
	m_transcodeReasons = newTranscodeReasons;
}

bool HeadMasterHlsAudioPlaylistParams::transcodeReasonsNull() const {
	// Nullable: true
	// Type Nullable: true
	

	return m_transcodeReasons.isNull();
}

void HeadMasterHlsAudioPlaylistParams::setTranscodeReasonsNull() {
	m_transcodeReasons.clear();
}


const qint32 &HeadMasterHlsAudioPlaylistParams::transcodingMaxAudioChannels() const {
	return m_transcodingMaxAudioChannels.value();
}

void HeadMasterHlsAudioPlaylistParams::setTranscodingMaxAudioChannels(qint32 newTranscodingMaxAudioChannels)  {
	m_transcodingMaxAudioChannels = newTranscodingMaxAudioChannels;
}

bool HeadMasterHlsAudioPlaylistParams::transcodingMaxAudioChannelsNull() const {
	// Nullable: true
	// Type Nullable: false
	

	return !m_transcodingMaxAudioChannels.has_value();
}

void HeadMasterHlsAudioPlaylistParams::setTranscodingMaxAudioChannelsNull() {
	m_transcodingMaxAudioChannels = std::nullopt;
}


const qint32 &HeadMasterHlsAudioPlaylistParams::videoBitRate() const {
	return m_videoBitRate.value();
}

void HeadMasterHlsAudioPlaylistParams::setVideoBitRate(qint32 newVideoBitRate)  {
	m_videoBitRate = newVideoBitRate;
}

bool HeadMasterHlsAudioPlaylistParams::videoBitRateNull() const {
	// Nullable: true
	// Type Nullable: false
	

	return !m_videoBitRate.has_value();
}

void HeadMasterHlsAudioPlaylistParams::setVideoBitRateNull() {
	m_videoBitRate = std::nullopt;
}


const QString &HeadMasterHlsAudioPlaylistParams::videoCodec() const {
	return m_videoCodec;
}

void HeadMasterHlsAudioPlaylistParams::setVideoCodec(QString newVideoCodec)  {
	m_videoCodec = newVideoCodec;
}

bool HeadMasterHlsAudioPlaylistParams::videoCodecNull() const {
	// Nullable: true
	// Type Nullable: true
	

	return m_videoCodec.isNull();
}

void HeadMasterHlsAudioPlaylistParams::setVideoCodecNull() {
	m_videoCodec.clear();
}


const qint32 &HeadMasterHlsAudioPlaylistParams::videoStreamIndex() const {
	return m_videoStreamIndex.value();
}

void HeadMasterHlsAudioPlaylistParams::setVideoStreamIndex(qint32 newVideoStreamIndex)  {
	m_videoStreamIndex = newVideoStreamIndex;
}

bool HeadMasterHlsAudioPlaylistParams::videoStreamIndexNull() const {
	// Nullable: true
	// Type Nullable: false
	

	return !m_videoStreamIndex.has_value();
}

void HeadMasterHlsAudioPlaylistParams::setVideoStreamIndexNull() {
	m_videoStreamIndex = std::nullopt;
}


const qint32 &HeadMasterHlsAudioPlaylistParams::width() const {
	return m_width.value();
}

void HeadMasterHlsAudioPlaylistParams::setWidth(qint32 newWidth)  {
	m_width = newWidth;
}

bool HeadMasterHlsAudioPlaylistParams::widthNull() const {
	// Nullable: true
	// Type Nullable: false
	

	return !m_width.has_value();
}

void HeadMasterHlsAudioPlaylistParams::setWidthNull() {
	m_width = std::nullopt;
}




// HeadMasterHlsVideoPlaylistParams

const QString &HeadMasterHlsVideoPlaylistParams::itemId() const {
	return m_itemId;
}

void HeadMasterHlsVideoPlaylistParams::setItemId(QString newItemId) {
	m_itemId = newItemId;
}


const QString &HeadMasterHlsVideoPlaylistParams::mediaSourceId() const {
	return m_mediaSourceId;
}

void HeadMasterHlsVideoPlaylistParams::setMediaSourceId(QString newMediaSourceId) {
	m_mediaSourceId = newMediaSourceId;
}


const bool &HeadMasterHlsVideoPlaylistParams::allowAudioStreamCopy() const {
	return m_allowAudioStreamCopy.value();
}

void HeadMasterHlsVideoPlaylistParams::setAllowAudioStreamCopy(bool newAllowAudioStreamCopy)  {
	m_allowAudioStreamCopy = newAllowAudioStreamCopy;
}

bool HeadMasterHlsVideoPlaylistParams::allowAudioStreamCopyNull() const {
	// Nullable: true
	// Type Nullable: false
	

	return !m_allowAudioStreamCopy.has_value();
}

void HeadMasterHlsVideoPlaylistParams::setAllowAudioStreamCopyNull() {
	m_allowAudioStreamCopy = std::nullopt;
}


const bool &HeadMasterHlsVideoPlaylistParams::allowVideoStreamCopy() const {
	return m_allowVideoStreamCopy.value();
}

void HeadMasterHlsVideoPlaylistParams::setAllowVideoStreamCopy(bool newAllowVideoStreamCopy)  {
	m_allowVideoStreamCopy = newAllowVideoStreamCopy;
}

bool HeadMasterHlsVideoPlaylistParams::allowVideoStreamCopyNull() const {
	// Nullable: true
	// Type Nullable: false
	

	return !m_allowVideoStreamCopy.has_value();
}

void HeadMasterHlsVideoPlaylistParams::setAllowVideoStreamCopyNull() {
	m_allowVideoStreamCopy = std::nullopt;
}


const qint32 &HeadMasterHlsVideoPlaylistParams::audioBitRate() const {
	return m_audioBitRate.value();
}

void HeadMasterHlsVideoPlaylistParams::setAudioBitRate(qint32 newAudioBitRate)  {
	m_audioBitRate = newAudioBitRate;
}

bool HeadMasterHlsVideoPlaylistParams::audioBitRateNull() const {
	// Nullable: true
	// Type Nullable: false
	

	return !m_audioBitRate.has_value();
}

void HeadMasterHlsVideoPlaylistParams::setAudioBitRateNull() {
	m_audioBitRate = std::nullopt;
}


const qint32 &HeadMasterHlsVideoPlaylistParams::audioChannels() const {
	return m_audioChannels.value();
}

void HeadMasterHlsVideoPlaylistParams::setAudioChannels(qint32 newAudioChannels)  {
	m_audioChannels = newAudioChannels;
}

bool HeadMasterHlsVideoPlaylistParams::audioChannelsNull() const {
	// Nullable: true
	// Type Nullable: false
	

	return !m_audioChannels.has_value();
}

void HeadMasterHlsVideoPlaylistParams::setAudioChannelsNull() {
	m_audioChannels = std::nullopt;
}


const QString &HeadMasterHlsVideoPlaylistParams::audioCodec() const {
	return m_audioCodec;
}

void HeadMasterHlsVideoPlaylistParams::setAudioCodec(QString newAudioCodec)  {
	m_audioCodec = newAudioCodec;
}

bool HeadMasterHlsVideoPlaylistParams::audioCodecNull() const {
	// Nullable: true
	// Type Nullable: true
	

	return m_audioCodec.isNull();
}

void HeadMasterHlsVideoPlaylistParams::setAudioCodecNull() {
	m_audioCodec.clear();
}


const qint32 &HeadMasterHlsVideoPlaylistParams::audioSampleRate() const {
	return m_audioSampleRate.value();
}

void HeadMasterHlsVideoPlaylistParams::setAudioSampleRate(qint32 newAudioSampleRate)  {
	m_audioSampleRate = newAudioSampleRate;
}

bool HeadMasterHlsVideoPlaylistParams::audioSampleRateNull() const {
	// Nullable: true
	// Type Nullable: false
	

	return !m_audioSampleRate.has_value();
}

void HeadMasterHlsVideoPlaylistParams::setAudioSampleRateNull() {
	m_audioSampleRate = std::nullopt;
}


const qint32 &HeadMasterHlsVideoPlaylistParams::audioStreamIndex() const {
	return m_audioStreamIndex.value();
}

void HeadMasterHlsVideoPlaylistParams::setAudioStreamIndex(qint32 newAudioStreamIndex)  {
	m_audioStreamIndex = newAudioStreamIndex;
}

bool HeadMasterHlsVideoPlaylistParams::audioStreamIndexNull() const {
	// Nullable: true
	// Type Nullable: false
	

	return !m_audioStreamIndex.has_value();
}

void HeadMasterHlsVideoPlaylistParams::setAudioStreamIndexNull() {
	m_audioStreamIndex = std::nullopt;
}


const bool &HeadMasterHlsVideoPlaylistParams::breakOnNonKeyFrames() const {
	return m_breakOnNonKeyFrames.value();
}

void HeadMasterHlsVideoPlaylistParams::setBreakOnNonKeyFrames(bool newBreakOnNonKeyFrames)  {
	m_breakOnNonKeyFrames = newBreakOnNonKeyFrames;
}

bool HeadMasterHlsVideoPlaylistParams::breakOnNonKeyFramesNull() const {
	// Nullable: true
	// Type Nullable: false
	

	return !m_breakOnNonKeyFrames.has_value();
}

void HeadMasterHlsVideoPlaylistParams::setBreakOnNonKeyFramesNull() {
	m_breakOnNonKeyFrames = std::nullopt;
}


const EncodingContext &HeadMasterHlsVideoPlaylistParams::context() const {
	return m_context;
}

void HeadMasterHlsVideoPlaylistParams::setContext(EncodingContext newContext)  {
	m_context = newContext;
}

bool HeadMasterHlsVideoPlaylistParams::contextNull() const {
	// Nullable: true
	// Type Nullable: true
	

	return m_context== EncodingContext::EnumNotSet;
}

void HeadMasterHlsVideoPlaylistParams::setContextNull() {
	m_context= EncodingContext::EnumNotSet;
}


const bool &HeadMasterHlsVideoPlaylistParams::copyTimestamps() const {
	return m_copyTimestamps.value();
}

void HeadMasterHlsVideoPlaylistParams::setCopyTimestamps(bool newCopyTimestamps)  {
	m_copyTimestamps = newCopyTimestamps;
}

bool HeadMasterHlsVideoPlaylistParams::copyTimestampsNull() const {
	// Nullable: true
	// Type Nullable: false
	

	return !m_copyTimestamps.has_value();
}

void HeadMasterHlsVideoPlaylistParams::setCopyTimestampsNull() {
	m_copyTimestamps = std::nullopt;
}


const qint32 &HeadMasterHlsVideoPlaylistParams::cpuCoreLimit() const {
	return m_cpuCoreLimit.value();
}

void HeadMasterHlsVideoPlaylistParams::setCpuCoreLimit(qint32 newCpuCoreLimit)  {
	m_cpuCoreLimit = newCpuCoreLimit;
}

bool HeadMasterHlsVideoPlaylistParams::cpuCoreLimitNull() const {
	// Nullable: true
	// Type Nullable: false
	

	return !m_cpuCoreLimit.has_value();
}

void HeadMasterHlsVideoPlaylistParams::setCpuCoreLimitNull() {
	m_cpuCoreLimit = std::nullopt;
}


const bool &HeadMasterHlsVideoPlaylistParams::deInterlace() const {
	return m_deInterlace.value();
}

void HeadMasterHlsVideoPlaylistParams::setDeInterlace(bool newDeInterlace)  {
	m_deInterlace = newDeInterlace;
}

bool HeadMasterHlsVideoPlaylistParams::deInterlaceNull() const {
	// Nullable: true
	// Type Nullable: false
	

	return !m_deInterlace.has_value();
}

void HeadMasterHlsVideoPlaylistParams::setDeInterlaceNull() {
	m_deInterlace = std::nullopt;
}


const QString &HeadMasterHlsVideoPlaylistParams::deviceId() const {
	return m_deviceId;
}

void HeadMasterHlsVideoPlaylistParams::setDeviceId(QString newDeviceId)  {
	m_deviceId = newDeviceId;
}

bool HeadMasterHlsVideoPlaylistParams::deviceIdNull() const {
	// Nullable: true
	// Type Nullable: true
	

	return m_deviceId.isNull();
}

void HeadMasterHlsVideoPlaylistParams::setDeviceIdNull() {
	m_deviceId.clear();
}


const QString &HeadMasterHlsVideoPlaylistParams::deviceProfileId() const {
	return m_deviceProfileId;
}

void HeadMasterHlsVideoPlaylistParams::setDeviceProfileId(QString newDeviceProfileId)  {
	m_deviceProfileId = newDeviceProfileId;
}

bool HeadMasterHlsVideoPlaylistParams::deviceProfileIdNull() const {
	// Nullable: true
	// Type Nullable: true
	

	return m_deviceProfileId.isNull();
}

void HeadMasterHlsVideoPlaylistParams::setDeviceProfileIdNull() {
	m_deviceProfileId.clear();
}


const bool &HeadMasterHlsVideoPlaylistParams::enableAdaptiveBitrateStreaming() const {
	return m_enableAdaptiveBitrateStreaming.value();
}

void HeadMasterHlsVideoPlaylistParams::setEnableAdaptiveBitrateStreaming(bool newEnableAdaptiveBitrateStreaming)  {
	m_enableAdaptiveBitrateStreaming = newEnableAdaptiveBitrateStreaming;
}

bool HeadMasterHlsVideoPlaylistParams::enableAdaptiveBitrateStreamingNull() const {
	// Nullable: false
	// Type Nullable: false
	

	return !m_enableAdaptiveBitrateStreaming.has_value();
}

void HeadMasterHlsVideoPlaylistParams::setEnableAdaptiveBitrateStreamingNull() {
	m_enableAdaptiveBitrateStreaming = std::nullopt;
}


const bool &HeadMasterHlsVideoPlaylistParams::enableAutoStreamCopy() const {
	return m_enableAutoStreamCopy.value();
}

void HeadMasterHlsVideoPlaylistParams::setEnableAutoStreamCopy(bool newEnableAutoStreamCopy)  {
	m_enableAutoStreamCopy = newEnableAutoStreamCopy;
}

bool HeadMasterHlsVideoPlaylistParams::enableAutoStreamCopyNull() const {
	// Nullable: true
	// Type Nullable: false
	

	return !m_enableAutoStreamCopy.has_value();
}

void HeadMasterHlsVideoPlaylistParams::setEnableAutoStreamCopyNull() {
	m_enableAutoStreamCopy = std::nullopt;
}


const bool &HeadMasterHlsVideoPlaylistParams::enableMpegtsM2TsMode() const {
	return m_enableMpegtsM2TsMode.value();
}

void HeadMasterHlsVideoPlaylistParams::setEnableMpegtsM2TsMode(bool newEnableMpegtsM2TsMode)  {
	m_enableMpegtsM2TsMode = newEnableMpegtsM2TsMode;
}

bool HeadMasterHlsVideoPlaylistParams::enableMpegtsM2TsModeNull() const {
	// Nullable: true
	// Type Nullable: false
	

	return !m_enableMpegtsM2TsMode.has_value();
}

void HeadMasterHlsVideoPlaylistParams::setEnableMpegtsM2TsModeNull() {
	m_enableMpegtsM2TsMode = std::nullopt;
}


const float &HeadMasterHlsVideoPlaylistParams::framerate() const {
	return m_framerate.value();
}

void HeadMasterHlsVideoPlaylistParams::setFramerate(float newFramerate)  {
	m_framerate = newFramerate;
}

bool HeadMasterHlsVideoPlaylistParams::framerateNull() const {
	// Nullable: true
	// Type Nullable: false
	

	return !m_framerate.has_value();
}

void HeadMasterHlsVideoPlaylistParams::setFramerateNull() {
	m_framerate = std::nullopt;
}


const qint32 &HeadMasterHlsVideoPlaylistParams::height() const {
	return m_height.value();
}

void HeadMasterHlsVideoPlaylistParams::setHeight(qint32 newHeight)  {
	m_height = newHeight;
}

bool HeadMasterHlsVideoPlaylistParams::heightNull() const {
	// Nullable: true
	// Type Nullable: false
	

	return !m_height.has_value();
}

void HeadMasterHlsVideoPlaylistParams::setHeightNull() {
	m_height = std::nullopt;
}


const QString &HeadMasterHlsVideoPlaylistParams::level() const {
	return m_level;
}

void HeadMasterHlsVideoPlaylistParams::setLevel(QString newLevel)  {
	m_level = newLevel;
}

bool HeadMasterHlsVideoPlaylistParams::levelNull() const {
	// Nullable: true
	// Type Nullable: true
	

	return m_level.isNull();
}

void HeadMasterHlsVideoPlaylistParams::setLevelNull() {
	m_level.clear();
}


const QString &HeadMasterHlsVideoPlaylistParams::liveStreamId() const {
	return m_liveStreamId;
}

void HeadMasterHlsVideoPlaylistParams::setLiveStreamId(QString newLiveStreamId)  {
	m_liveStreamId = newLiveStreamId;
}

bool HeadMasterHlsVideoPlaylistParams::liveStreamIdNull() const {
	// Nullable: true
	// Type Nullable: true
	

	return m_liveStreamId.isNull();
}

void HeadMasterHlsVideoPlaylistParams::setLiveStreamIdNull() {
	m_liveStreamId.clear();
}


const qint32 &HeadMasterHlsVideoPlaylistParams::maxAudioBitDepth() const {
	return m_maxAudioBitDepth.value();
}

void HeadMasterHlsVideoPlaylistParams::setMaxAudioBitDepth(qint32 newMaxAudioBitDepth)  {
	m_maxAudioBitDepth = newMaxAudioBitDepth;
}

bool HeadMasterHlsVideoPlaylistParams::maxAudioBitDepthNull() const {
	// Nullable: true
	// Type Nullable: false
	

	return !m_maxAudioBitDepth.has_value();
}

void HeadMasterHlsVideoPlaylistParams::setMaxAudioBitDepthNull() {
	m_maxAudioBitDepth = std::nullopt;
}


const qint32 &HeadMasterHlsVideoPlaylistParams::maxAudioChannels() const {
	return m_maxAudioChannels.value();
}

void HeadMasterHlsVideoPlaylistParams::setMaxAudioChannels(qint32 newMaxAudioChannels)  {
	m_maxAudioChannels = newMaxAudioChannels;
}

bool HeadMasterHlsVideoPlaylistParams::maxAudioChannelsNull() const {
	// Nullable: true
	// Type Nullable: false
	

	return !m_maxAudioChannels.has_value();
}

void HeadMasterHlsVideoPlaylistParams::setMaxAudioChannelsNull() {
	m_maxAudioChannels = std::nullopt;
}


const float &HeadMasterHlsVideoPlaylistParams::maxFramerate() const {
	return m_maxFramerate.value();
}

void HeadMasterHlsVideoPlaylistParams::setMaxFramerate(float newMaxFramerate)  {
	m_maxFramerate = newMaxFramerate;
}

bool HeadMasterHlsVideoPlaylistParams::maxFramerateNull() const {
	// Nullable: true
	// Type Nullable: false
	

	return !m_maxFramerate.has_value();
}

void HeadMasterHlsVideoPlaylistParams::setMaxFramerateNull() {
	m_maxFramerate = std::nullopt;
}


const qint32 &HeadMasterHlsVideoPlaylistParams::maxRefFrames() const {
	return m_maxRefFrames.value();
}

void HeadMasterHlsVideoPlaylistParams::setMaxRefFrames(qint32 newMaxRefFrames)  {
	m_maxRefFrames = newMaxRefFrames;
}

bool HeadMasterHlsVideoPlaylistParams::maxRefFramesNull() const {
	// Nullable: true
	// Type Nullable: false
	

	return !m_maxRefFrames.has_value();
}

void HeadMasterHlsVideoPlaylistParams::setMaxRefFramesNull() {
	m_maxRefFrames = std::nullopt;
}


const qint32 &HeadMasterHlsVideoPlaylistParams::maxVideoBitDepth() const {
	return m_maxVideoBitDepth.value();
}

void HeadMasterHlsVideoPlaylistParams::setMaxVideoBitDepth(qint32 newMaxVideoBitDepth)  {
	m_maxVideoBitDepth = newMaxVideoBitDepth;
}

bool HeadMasterHlsVideoPlaylistParams::maxVideoBitDepthNull() const {
	// Nullable: true
	// Type Nullable: false
	

	return !m_maxVideoBitDepth.has_value();
}

void HeadMasterHlsVideoPlaylistParams::setMaxVideoBitDepthNull() {
	m_maxVideoBitDepth = std::nullopt;
}


const qint32 &HeadMasterHlsVideoPlaylistParams::minSegments() const {
	return m_minSegments.value();
}

void HeadMasterHlsVideoPlaylistParams::setMinSegments(qint32 newMinSegments)  {
	m_minSegments = newMinSegments;
}

bool HeadMasterHlsVideoPlaylistParams::minSegmentsNull() const {
	// Nullable: true
	// Type Nullable: false
	

	return !m_minSegments.has_value();
}

void HeadMasterHlsVideoPlaylistParams::setMinSegmentsNull() {
	m_minSegments = std::nullopt;
}


const QString &HeadMasterHlsVideoPlaylistParams::params() const {
	return m_params;
}

void HeadMasterHlsVideoPlaylistParams::setParams(QString newParams)  {
	m_params = newParams;
}

bool HeadMasterHlsVideoPlaylistParams::paramsNull() const {
	// Nullable: true
	// Type Nullable: true
	

	return m_params.isNull();
}

void HeadMasterHlsVideoPlaylistParams::setParamsNull() {
	m_params.clear();
}


const QString &HeadMasterHlsVideoPlaylistParams::playSessionId() const {
	return m_playSessionId;
}

void HeadMasterHlsVideoPlaylistParams::setPlaySessionId(QString newPlaySessionId)  {
	m_playSessionId = newPlaySessionId;
}

bool HeadMasterHlsVideoPlaylistParams::playSessionIdNull() const {
	// Nullable: true
	// Type Nullable: true
	

	return m_playSessionId.isNull();
}

void HeadMasterHlsVideoPlaylistParams::setPlaySessionIdNull() {
	m_playSessionId.clear();
}


const QString &HeadMasterHlsVideoPlaylistParams::profile() const {
	return m_profile;
}

void HeadMasterHlsVideoPlaylistParams::setProfile(QString newProfile)  {
	m_profile = newProfile;
}

bool HeadMasterHlsVideoPlaylistParams::profileNull() const {
	// Nullable: true
	// Type Nullable: true
	

	return m_profile.isNull();
}

void HeadMasterHlsVideoPlaylistParams::setProfileNull() {
	m_profile.clear();
}


const bool &HeadMasterHlsVideoPlaylistParams::requireAvc() const {
	return m_requireAvc.value();
}

void HeadMasterHlsVideoPlaylistParams::setRequireAvc(bool newRequireAvc)  {
	m_requireAvc = newRequireAvc;
}

bool HeadMasterHlsVideoPlaylistParams::requireAvcNull() const {
	// Nullable: true
	// Type Nullable: false
	

	return !m_requireAvc.has_value();
}

void HeadMasterHlsVideoPlaylistParams::setRequireAvcNull() {
	m_requireAvc = std::nullopt;
}


const bool &HeadMasterHlsVideoPlaylistParams::requireNonAnamorphic() const {
	return m_requireNonAnamorphic.value();
}

void HeadMasterHlsVideoPlaylistParams::setRequireNonAnamorphic(bool newRequireNonAnamorphic)  {
	m_requireNonAnamorphic = newRequireNonAnamorphic;
}

bool HeadMasterHlsVideoPlaylistParams::requireNonAnamorphicNull() const {
	// Nullable: true
	// Type Nullable: false
	

	return !m_requireNonAnamorphic.has_value();
}

void HeadMasterHlsVideoPlaylistParams::setRequireNonAnamorphicNull() {
	m_requireNonAnamorphic = std::nullopt;
}


const QString &HeadMasterHlsVideoPlaylistParams::segmentContainer() const {
	return m_segmentContainer;
}

void HeadMasterHlsVideoPlaylistParams::setSegmentContainer(QString newSegmentContainer)  {
	m_segmentContainer = newSegmentContainer;
}

bool HeadMasterHlsVideoPlaylistParams::segmentContainerNull() const {
	// Nullable: true
	// Type Nullable: true
	

	return m_segmentContainer.isNull();
}

void HeadMasterHlsVideoPlaylistParams::setSegmentContainerNull() {
	m_segmentContainer.clear();
}


const qint32 &HeadMasterHlsVideoPlaylistParams::segmentLength() const {
	return m_segmentLength.value();
}

void HeadMasterHlsVideoPlaylistParams::setSegmentLength(qint32 newSegmentLength)  {
	m_segmentLength = newSegmentLength;
}

bool HeadMasterHlsVideoPlaylistParams::segmentLengthNull() const {
	// Nullable: true
	// Type Nullable: false
	

	return !m_segmentLength.has_value();
}

void HeadMasterHlsVideoPlaylistParams::setSegmentLengthNull() {
	m_segmentLength = std::nullopt;
}


const qint64 &HeadMasterHlsVideoPlaylistParams::startTimeTicks() const {
	return m_startTimeTicks.value();
}

void HeadMasterHlsVideoPlaylistParams::setStartTimeTicks(qint64 newStartTimeTicks)  {
	m_startTimeTicks = newStartTimeTicks;
}

bool HeadMasterHlsVideoPlaylistParams::startTimeTicksNull() const {
	// Nullable: true
	// Type Nullable: false
	

	return !m_startTimeTicks.has_value();
}

void HeadMasterHlsVideoPlaylistParams::setStartTimeTicksNull() {
	m_startTimeTicks = std::nullopt;
}


const bool &HeadMasterHlsVideoPlaylistParams::staticStreaming() const {
	return m_staticStreaming.value();
}

void HeadMasterHlsVideoPlaylistParams::setStaticStreaming(bool newStaticStreaming)  {
	m_staticStreaming = newStaticStreaming;
}

bool HeadMasterHlsVideoPlaylistParams::staticStreamingNull() const {
	// Nullable: true
	// Type Nullable: false
	

	return !m_staticStreaming.has_value();
}

void HeadMasterHlsVideoPlaylistParams::setStaticStreamingNull() {
	m_staticStreaming = std::nullopt;
}


const QJsonObject &HeadMasterHlsVideoPlaylistParams::streamOptions() const {
	return m_streamOptions;
}

void HeadMasterHlsVideoPlaylistParams::setStreamOptions(QJsonObject newStreamOptions)  {
	m_streamOptions = newStreamOptions;
}

bool HeadMasterHlsVideoPlaylistParams::streamOptionsNull() const {
	// Nullable: true
	// Type Nullable: true
	

	return m_streamOptions.isEmpty();
}

void HeadMasterHlsVideoPlaylistParams::setStreamOptionsNull() {
	m_streamOptions= QJsonObject();
}


const QString &HeadMasterHlsVideoPlaylistParams::subtitleCodec() const {
	return m_subtitleCodec;
}

void HeadMasterHlsVideoPlaylistParams::setSubtitleCodec(QString newSubtitleCodec)  {
	m_subtitleCodec = newSubtitleCodec;
}

bool HeadMasterHlsVideoPlaylistParams::subtitleCodecNull() const {
	// Nullable: true
	// Type Nullable: true
	

	return m_subtitleCodec.isNull();
}

void HeadMasterHlsVideoPlaylistParams::setSubtitleCodecNull() {
	m_subtitleCodec.clear();
}


const SubtitleDeliveryMethod &HeadMasterHlsVideoPlaylistParams::subtitleMethod() const {
	return m_subtitleMethod;
}

void HeadMasterHlsVideoPlaylistParams::setSubtitleMethod(SubtitleDeliveryMethod newSubtitleMethod)  {
	m_subtitleMethod = newSubtitleMethod;
}

bool HeadMasterHlsVideoPlaylistParams::subtitleMethodNull() const {
	// Nullable: true
	// Type Nullable: true
	

	return m_subtitleMethod== SubtitleDeliveryMethod::EnumNotSet;
}

void HeadMasterHlsVideoPlaylistParams::setSubtitleMethodNull() {
	m_subtitleMethod= SubtitleDeliveryMethod::EnumNotSet;
}


const qint32 &HeadMasterHlsVideoPlaylistParams::subtitleStreamIndex() const {
	return m_subtitleStreamIndex.value();
}

void HeadMasterHlsVideoPlaylistParams::setSubtitleStreamIndex(qint32 newSubtitleStreamIndex)  {
	m_subtitleStreamIndex = newSubtitleStreamIndex;
}

bool HeadMasterHlsVideoPlaylistParams::subtitleStreamIndexNull() const {
	// Nullable: true
	// Type Nullable: false
	

	return !m_subtitleStreamIndex.has_value();
}

void HeadMasterHlsVideoPlaylistParams::setSubtitleStreamIndexNull() {
	m_subtitleStreamIndex = std::nullopt;
}


const QString &HeadMasterHlsVideoPlaylistParams::tag() const {
	return m_tag;
}

void HeadMasterHlsVideoPlaylistParams::setTag(QString newTag)  {
	m_tag = newTag;
}

bool HeadMasterHlsVideoPlaylistParams::tagNull() const {
	// Nullable: true
	// Type Nullable: true
	

	return m_tag.isNull();
}

void HeadMasterHlsVideoPlaylistParams::setTagNull() {
	m_tag.clear();
}


const QString &HeadMasterHlsVideoPlaylistParams::transcodeReasons() const {
	return m_transcodeReasons;
}

void HeadMasterHlsVideoPlaylistParams::setTranscodeReasons(QString newTranscodeReasons)  {
	m_transcodeReasons = newTranscodeReasons;
}

bool HeadMasterHlsVideoPlaylistParams::transcodeReasonsNull() const {
	// Nullable: true
	// Type Nullable: true
	

	return m_transcodeReasons.isNull();
}

void HeadMasterHlsVideoPlaylistParams::setTranscodeReasonsNull() {
	m_transcodeReasons.clear();
}


const qint32 &HeadMasterHlsVideoPlaylistParams::transcodingMaxAudioChannels() const {
	return m_transcodingMaxAudioChannels.value();
}

void HeadMasterHlsVideoPlaylistParams::setTranscodingMaxAudioChannels(qint32 newTranscodingMaxAudioChannels)  {
	m_transcodingMaxAudioChannels = newTranscodingMaxAudioChannels;
}

bool HeadMasterHlsVideoPlaylistParams::transcodingMaxAudioChannelsNull() const {
	// Nullable: true
	// Type Nullable: false
	

	return !m_transcodingMaxAudioChannels.has_value();
}

void HeadMasterHlsVideoPlaylistParams::setTranscodingMaxAudioChannelsNull() {
	m_transcodingMaxAudioChannels = std::nullopt;
}


const qint32 &HeadMasterHlsVideoPlaylistParams::videoBitRate() const {
	return m_videoBitRate.value();
}

void HeadMasterHlsVideoPlaylistParams::setVideoBitRate(qint32 newVideoBitRate)  {
	m_videoBitRate = newVideoBitRate;
}

bool HeadMasterHlsVideoPlaylistParams::videoBitRateNull() const {
	// Nullable: true
	// Type Nullable: false
	

	return !m_videoBitRate.has_value();
}

void HeadMasterHlsVideoPlaylistParams::setVideoBitRateNull() {
	m_videoBitRate = std::nullopt;
}


const QString &HeadMasterHlsVideoPlaylistParams::videoCodec() const {
	return m_videoCodec;
}

void HeadMasterHlsVideoPlaylistParams::setVideoCodec(QString newVideoCodec)  {
	m_videoCodec = newVideoCodec;
}

bool HeadMasterHlsVideoPlaylistParams::videoCodecNull() const {
	// Nullable: true
	// Type Nullable: true
	

	return m_videoCodec.isNull();
}

void HeadMasterHlsVideoPlaylistParams::setVideoCodecNull() {
	m_videoCodec.clear();
}


const qint32 &HeadMasterHlsVideoPlaylistParams::videoStreamIndex() const {
	return m_videoStreamIndex.value();
}

void HeadMasterHlsVideoPlaylistParams::setVideoStreamIndex(qint32 newVideoStreamIndex)  {
	m_videoStreamIndex = newVideoStreamIndex;
}

bool HeadMasterHlsVideoPlaylistParams::videoStreamIndexNull() const {
	// Nullable: true
	// Type Nullable: false
	

	return !m_videoStreamIndex.has_value();
}

void HeadMasterHlsVideoPlaylistParams::setVideoStreamIndexNull() {
	m_videoStreamIndex = std::nullopt;
}


const qint32 &HeadMasterHlsVideoPlaylistParams::width() const {
	return m_width.value();
}

void HeadMasterHlsVideoPlaylistParams::setWidth(qint32 newWidth)  {
	m_width = newWidth;
}

bool HeadMasterHlsVideoPlaylistParams::widthNull() const {
	// Nullable: true
	// Type Nullable: false
	

	return !m_width.has_value();
}

void HeadMasterHlsVideoPlaylistParams::setWidthNull() {
	m_width = std::nullopt;
}




// HeadMusicGenreImageParams

const ImageType &HeadMusicGenreImageParams::imageType() const {
	return m_imageType;
}

void HeadMusicGenreImageParams::setImageType(ImageType newImageType) {
	m_imageType = newImageType;
}


const QString &HeadMusicGenreImageParams::name() const {
	return m_name;
}

void HeadMusicGenreImageParams::setName(QString newName) {
	m_name = newName;
}


const bool &HeadMusicGenreImageParams::addPlayedIndicator() const {
	return m_addPlayedIndicator.value();
}

void HeadMusicGenreImageParams::setAddPlayedIndicator(bool newAddPlayedIndicator)  {
	m_addPlayedIndicator = newAddPlayedIndicator;
}

bool HeadMusicGenreImageParams::addPlayedIndicatorNull() const {
	// Nullable: true
	// Type Nullable: false
	

	return !m_addPlayedIndicator.has_value();
}

void HeadMusicGenreImageParams::setAddPlayedIndicatorNull() {
	m_addPlayedIndicator = std::nullopt;
}


const QString &HeadMusicGenreImageParams::backgroundColor() const {
	return m_backgroundColor;
}

void HeadMusicGenreImageParams::setBackgroundColor(QString newBackgroundColor)  {
	m_backgroundColor = newBackgroundColor;
}

bool HeadMusicGenreImageParams::backgroundColorNull() const {
	// Nullable: true
	// Type Nullable: true
	

	return m_backgroundColor.isNull();
}

void HeadMusicGenreImageParams::setBackgroundColorNull() {
	m_backgroundColor.clear();
}


const qint32 &HeadMusicGenreImageParams::blur() const {
	return m_blur.value();
}

void HeadMusicGenreImageParams::setBlur(qint32 newBlur)  {
	m_blur = newBlur;
}

bool HeadMusicGenreImageParams::blurNull() const {
	// Nullable: true
	// Type Nullable: false
	

	return !m_blur.has_value();
}

void HeadMusicGenreImageParams::setBlurNull() {
	m_blur = std::nullopt;
}


const bool &HeadMusicGenreImageParams::cropWhitespace() const {
	return m_cropWhitespace.value();
}

void HeadMusicGenreImageParams::setCropWhitespace(bool newCropWhitespace)  {
	m_cropWhitespace = newCropWhitespace;
}

bool HeadMusicGenreImageParams::cropWhitespaceNull() const {
	// Nullable: true
	// Type Nullable: false
	

	return !m_cropWhitespace.has_value();
}

void HeadMusicGenreImageParams::setCropWhitespaceNull() {
	m_cropWhitespace = std::nullopt;
}


const QString &HeadMusicGenreImageParams::foregroundLayer() const {
	return m_foregroundLayer;
}

void HeadMusicGenreImageParams::setForegroundLayer(QString newForegroundLayer)  {
	m_foregroundLayer = newForegroundLayer;
}

bool HeadMusicGenreImageParams::foregroundLayerNull() const {
	// Nullable: true
	// Type Nullable: true
	

	return m_foregroundLayer.isNull();
}

void HeadMusicGenreImageParams::setForegroundLayerNull() {
	m_foregroundLayer.clear();
}


const ImageFormat &HeadMusicGenreImageParams::format() const {
	return m_format;
}

void HeadMusicGenreImageParams::setFormat(ImageFormat newFormat)  {
	m_format = newFormat;
}

bool HeadMusicGenreImageParams::formatNull() const {
	// Nullable: true
	// Type Nullable: true
	

	return m_format== ImageFormat::EnumNotSet;
}

void HeadMusicGenreImageParams::setFormatNull() {
	m_format= ImageFormat::EnumNotSet;
}


const qint32 &HeadMusicGenreImageParams::height() const {
	return m_height.value();
}

void HeadMusicGenreImageParams::setHeight(qint32 newHeight)  {
	m_height = newHeight;
}

bool HeadMusicGenreImageParams::heightNull() const {
	// Nullable: true
	// Type Nullable: false
	

	return !m_height.has_value();
}

void HeadMusicGenreImageParams::setHeightNull() {
	m_height = std::nullopt;
}


const qint32 &HeadMusicGenreImageParams::imageIndex() const {
	return m_imageIndex.value();
}

void HeadMusicGenreImageParams::setImageIndex(qint32 newImageIndex)  {
	m_imageIndex = newImageIndex;
}

bool HeadMusicGenreImageParams::imageIndexNull() const {
	// Nullable: true
	// Type Nullable: false
	

	return !m_imageIndex.has_value();
}

void HeadMusicGenreImageParams::setImageIndexNull() {
	m_imageIndex = std::nullopt;
}


const qint32 &HeadMusicGenreImageParams::maxHeight() const {
	return m_maxHeight.value();
}

void HeadMusicGenreImageParams::setMaxHeight(qint32 newMaxHeight)  {
	m_maxHeight = newMaxHeight;
}

bool HeadMusicGenreImageParams::maxHeightNull() const {
	// Nullable: true
	// Type Nullable: false
	

	return !m_maxHeight.has_value();
}

void HeadMusicGenreImageParams::setMaxHeightNull() {
	m_maxHeight = std::nullopt;
}


const qint32 &HeadMusicGenreImageParams::maxWidth() const {
	return m_maxWidth.value();
}

void HeadMusicGenreImageParams::setMaxWidth(qint32 newMaxWidth)  {
	m_maxWidth = newMaxWidth;
}

bool HeadMusicGenreImageParams::maxWidthNull() const {
	// Nullable: true
	// Type Nullable: false
	

	return !m_maxWidth.has_value();
}

void HeadMusicGenreImageParams::setMaxWidthNull() {
	m_maxWidth = std::nullopt;
}


const double &HeadMusicGenreImageParams::percentPlayed() const {
	return m_percentPlayed.value();
}

void HeadMusicGenreImageParams::setPercentPlayed(double newPercentPlayed)  {
	m_percentPlayed = newPercentPlayed;
}

bool HeadMusicGenreImageParams::percentPlayedNull() const {
	// Nullable: true
	// Type Nullable: false
	

	return !m_percentPlayed.has_value();
}

void HeadMusicGenreImageParams::setPercentPlayedNull() {
	m_percentPlayed = std::nullopt;
}


const qint32 &HeadMusicGenreImageParams::quality() const {
	return m_quality.value();
}

void HeadMusicGenreImageParams::setQuality(qint32 newQuality)  {
	m_quality = newQuality;
}

bool HeadMusicGenreImageParams::qualityNull() const {
	// Nullable: true
	// Type Nullable: false
	

	return !m_quality.has_value();
}

void HeadMusicGenreImageParams::setQualityNull() {
	m_quality = std::nullopt;
}


const QString &HeadMusicGenreImageParams::tag() const {
	return m_tag;
}

void HeadMusicGenreImageParams::setTag(QString newTag)  {
	m_tag = newTag;
}

bool HeadMusicGenreImageParams::tagNull() const {
	// Nullable: true
	// Type Nullable: true
	

	return m_tag.isNull();
}

void HeadMusicGenreImageParams::setTagNull() {
	m_tag.clear();
}


const qint32 &HeadMusicGenreImageParams::unplayedCount() const {
	return m_unplayedCount.value();
}

void HeadMusicGenreImageParams::setUnplayedCount(qint32 newUnplayedCount)  {
	m_unplayedCount = newUnplayedCount;
}

bool HeadMusicGenreImageParams::unplayedCountNull() const {
	// Nullable: true
	// Type Nullable: false
	

	return !m_unplayedCount.has_value();
}

void HeadMusicGenreImageParams::setUnplayedCountNull() {
	m_unplayedCount = std::nullopt;
}


const qint32 &HeadMusicGenreImageParams::width() const {
	return m_width.value();
}

void HeadMusicGenreImageParams::setWidth(qint32 newWidth)  {
	m_width = newWidth;
}

bool HeadMusicGenreImageParams::widthNull() const {
	// Nullable: true
	// Type Nullable: false
	

	return !m_width.has_value();
}

void HeadMusicGenreImageParams::setWidthNull() {
	m_width = std::nullopt;
}




// HeadMusicGenreImageByIndexParams

const qint32 &HeadMusicGenreImageByIndexParams::imageIndex() const {
	return m_imageIndex;
}

void HeadMusicGenreImageByIndexParams::setImageIndex(qint32 newImageIndex) {
	m_imageIndex = newImageIndex;
}


const ImageType &HeadMusicGenreImageByIndexParams::imageType() const {
	return m_imageType;
}

void HeadMusicGenreImageByIndexParams::setImageType(ImageType newImageType) {
	m_imageType = newImageType;
}


const QString &HeadMusicGenreImageByIndexParams::name() const {
	return m_name;
}

void HeadMusicGenreImageByIndexParams::setName(QString newName) {
	m_name = newName;
}


const bool &HeadMusicGenreImageByIndexParams::addPlayedIndicator() const {
	return m_addPlayedIndicator.value();
}

void HeadMusicGenreImageByIndexParams::setAddPlayedIndicator(bool newAddPlayedIndicator)  {
	m_addPlayedIndicator = newAddPlayedIndicator;
}

bool HeadMusicGenreImageByIndexParams::addPlayedIndicatorNull() const {
	// Nullable: true
	// Type Nullable: false
	

	return !m_addPlayedIndicator.has_value();
}

void HeadMusicGenreImageByIndexParams::setAddPlayedIndicatorNull() {
	m_addPlayedIndicator = std::nullopt;
}


const QString &HeadMusicGenreImageByIndexParams::backgroundColor() const {
	return m_backgroundColor;
}

void HeadMusicGenreImageByIndexParams::setBackgroundColor(QString newBackgroundColor)  {
	m_backgroundColor = newBackgroundColor;
}

bool HeadMusicGenreImageByIndexParams::backgroundColorNull() const {
	// Nullable: true
	// Type Nullable: true
	

	return m_backgroundColor.isNull();
}

void HeadMusicGenreImageByIndexParams::setBackgroundColorNull() {
	m_backgroundColor.clear();
}


const qint32 &HeadMusicGenreImageByIndexParams::blur() const {
	return m_blur.value();
}

void HeadMusicGenreImageByIndexParams::setBlur(qint32 newBlur)  {
	m_blur = newBlur;
}

bool HeadMusicGenreImageByIndexParams::blurNull() const {
	// Nullable: true
	// Type Nullable: false
	

	return !m_blur.has_value();
}

void HeadMusicGenreImageByIndexParams::setBlurNull() {
	m_blur = std::nullopt;
}


const bool &HeadMusicGenreImageByIndexParams::cropWhitespace() const {
	return m_cropWhitespace.value();
}

void HeadMusicGenreImageByIndexParams::setCropWhitespace(bool newCropWhitespace)  {
	m_cropWhitespace = newCropWhitespace;
}

bool HeadMusicGenreImageByIndexParams::cropWhitespaceNull() const {
	// Nullable: true
	// Type Nullable: false
	

	return !m_cropWhitespace.has_value();
}

void HeadMusicGenreImageByIndexParams::setCropWhitespaceNull() {
	m_cropWhitespace = std::nullopt;
}


const QString &HeadMusicGenreImageByIndexParams::foregroundLayer() const {
	return m_foregroundLayer;
}

void HeadMusicGenreImageByIndexParams::setForegroundLayer(QString newForegroundLayer)  {
	m_foregroundLayer = newForegroundLayer;
}

bool HeadMusicGenreImageByIndexParams::foregroundLayerNull() const {
	// Nullable: true
	// Type Nullable: true
	

	return m_foregroundLayer.isNull();
}

void HeadMusicGenreImageByIndexParams::setForegroundLayerNull() {
	m_foregroundLayer.clear();
}


const ImageFormat &HeadMusicGenreImageByIndexParams::format() const {
	return m_format;
}

void HeadMusicGenreImageByIndexParams::setFormat(ImageFormat newFormat)  {
	m_format = newFormat;
}

bool HeadMusicGenreImageByIndexParams::formatNull() const {
	// Nullable: true
	// Type Nullable: true
	

	return m_format== ImageFormat::EnumNotSet;
}

void HeadMusicGenreImageByIndexParams::setFormatNull() {
	m_format= ImageFormat::EnumNotSet;
}


const qint32 &HeadMusicGenreImageByIndexParams::height() const {
	return m_height.value();
}

void HeadMusicGenreImageByIndexParams::setHeight(qint32 newHeight)  {
	m_height = newHeight;
}

bool HeadMusicGenreImageByIndexParams::heightNull() const {
	// Nullable: true
	// Type Nullable: false
	

	return !m_height.has_value();
}

void HeadMusicGenreImageByIndexParams::setHeightNull() {
	m_height = std::nullopt;
}


const qint32 &HeadMusicGenreImageByIndexParams::maxHeight() const {
	return m_maxHeight.value();
}

void HeadMusicGenreImageByIndexParams::setMaxHeight(qint32 newMaxHeight)  {
	m_maxHeight = newMaxHeight;
}

bool HeadMusicGenreImageByIndexParams::maxHeightNull() const {
	// Nullable: true
	// Type Nullable: false
	

	return !m_maxHeight.has_value();
}

void HeadMusicGenreImageByIndexParams::setMaxHeightNull() {
	m_maxHeight = std::nullopt;
}


const qint32 &HeadMusicGenreImageByIndexParams::maxWidth() const {
	return m_maxWidth.value();
}

void HeadMusicGenreImageByIndexParams::setMaxWidth(qint32 newMaxWidth)  {
	m_maxWidth = newMaxWidth;
}

bool HeadMusicGenreImageByIndexParams::maxWidthNull() const {
	// Nullable: true
	// Type Nullable: false
	

	return !m_maxWidth.has_value();
}

void HeadMusicGenreImageByIndexParams::setMaxWidthNull() {
	m_maxWidth = std::nullopt;
}


const double &HeadMusicGenreImageByIndexParams::percentPlayed() const {
	return m_percentPlayed.value();
}

void HeadMusicGenreImageByIndexParams::setPercentPlayed(double newPercentPlayed)  {
	m_percentPlayed = newPercentPlayed;
}

bool HeadMusicGenreImageByIndexParams::percentPlayedNull() const {
	// Nullable: true
	// Type Nullable: false
	

	return !m_percentPlayed.has_value();
}

void HeadMusicGenreImageByIndexParams::setPercentPlayedNull() {
	m_percentPlayed = std::nullopt;
}


const qint32 &HeadMusicGenreImageByIndexParams::quality() const {
	return m_quality.value();
}

void HeadMusicGenreImageByIndexParams::setQuality(qint32 newQuality)  {
	m_quality = newQuality;
}

bool HeadMusicGenreImageByIndexParams::qualityNull() const {
	// Nullable: true
	// Type Nullable: false
	

	return !m_quality.has_value();
}

void HeadMusicGenreImageByIndexParams::setQualityNull() {
	m_quality = std::nullopt;
}


const QString &HeadMusicGenreImageByIndexParams::tag() const {
	return m_tag;
}

void HeadMusicGenreImageByIndexParams::setTag(QString newTag)  {
	m_tag = newTag;
}

bool HeadMusicGenreImageByIndexParams::tagNull() const {
	// Nullable: true
	// Type Nullable: true
	

	return m_tag.isNull();
}

void HeadMusicGenreImageByIndexParams::setTagNull() {
	m_tag.clear();
}


const qint32 &HeadMusicGenreImageByIndexParams::unplayedCount() const {
	return m_unplayedCount.value();
}

void HeadMusicGenreImageByIndexParams::setUnplayedCount(qint32 newUnplayedCount)  {
	m_unplayedCount = newUnplayedCount;
}

bool HeadMusicGenreImageByIndexParams::unplayedCountNull() const {
	// Nullable: true
	// Type Nullable: false
	

	return !m_unplayedCount.has_value();
}

void HeadMusicGenreImageByIndexParams::setUnplayedCountNull() {
	m_unplayedCount = std::nullopt;
}


const qint32 &HeadMusicGenreImageByIndexParams::width() const {
	return m_width.value();
}

void HeadMusicGenreImageByIndexParams::setWidth(qint32 newWidth)  {
	m_width = newWidth;
}

bool HeadMusicGenreImageByIndexParams::widthNull() const {
	// Nullable: true
	// Type Nullable: false
	

	return !m_width.has_value();
}

void HeadMusicGenreImageByIndexParams::setWidthNull() {
	m_width = std::nullopt;
}




// HeadPersonImageParams

const ImageType &HeadPersonImageParams::imageType() const {
	return m_imageType;
}

void HeadPersonImageParams::setImageType(ImageType newImageType) {
	m_imageType = newImageType;
}


const QString &HeadPersonImageParams::name() const {
	return m_name;
}

void HeadPersonImageParams::setName(QString newName) {
	m_name = newName;
}


const bool &HeadPersonImageParams::addPlayedIndicator() const {
	return m_addPlayedIndicator.value();
}

void HeadPersonImageParams::setAddPlayedIndicator(bool newAddPlayedIndicator)  {
	m_addPlayedIndicator = newAddPlayedIndicator;
}

bool HeadPersonImageParams::addPlayedIndicatorNull() const {
	// Nullable: true
	// Type Nullable: false
	

	return !m_addPlayedIndicator.has_value();
}

void HeadPersonImageParams::setAddPlayedIndicatorNull() {
	m_addPlayedIndicator = std::nullopt;
}


const QString &HeadPersonImageParams::backgroundColor() const {
	return m_backgroundColor;
}

void HeadPersonImageParams::setBackgroundColor(QString newBackgroundColor)  {
	m_backgroundColor = newBackgroundColor;
}

bool HeadPersonImageParams::backgroundColorNull() const {
	// Nullable: true
	// Type Nullable: true
	

	return m_backgroundColor.isNull();
}

void HeadPersonImageParams::setBackgroundColorNull() {
	m_backgroundColor.clear();
}


const qint32 &HeadPersonImageParams::blur() const {
	return m_blur.value();
}

void HeadPersonImageParams::setBlur(qint32 newBlur)  {
	m_blur = newBlur;
}

bool HeadPersonImageParams::blurNull() const {
	// Nullable: true
	// Type Nullable: false
	

	return !m_blur.has_value();
}

void HeadPersonImageParams::setBlurNull() {
	m_blur = std::nullopt;
}


const bool &HeadPersonImageParams::cropWhitespace() const {
	return m_cropWhitespace.value();
}

void HeadPersonImageParams::setCropWhitespace(bool newCropWhitespace)  {
	m_cropWhitespace = newCropWhitespace;
}

bool HeadPersonImageParams::cropWhitespaceNull() const {
	// Nullable: true
	// Type Nullable: false
	

	return !m_cropWhitespace.has_value();
}

void HeadPersonImageParams::setCropWhitespaceNull() {
	m_cropWhitespace = std::nullopt;
}


const QString &HeadPersonImageParams::foregroundLayer() const {
	return m_foregroundLayer;
}

void HeadPersonImageParams::setForegroundLayer(QString newForegroundLayer)  {
	m_foregroundLayer = newForegroundLayer;
}

bool HeadPersonImageParams::foregroundLayerNull() const {
	// Nullable: true
	// Type Nullable: true
	

	return m_foregroundLayer.isNull();
}

void HeadPersonImageParams::setForegroundLayerNull() {
	m_foregroundLayer.clear();
}


const ImageFormat &HeadPersonImageParams::format() const {
	return m_format;
}

void HeadPersonImageParams::setFormat(ImageFormat newFormat)  {
	m_format = newFormat;
}

bool HeadPersonImageParams::formatNull() const {
	// Nullable: true
	// Type Nullable: true
	

	return m_format== ImageFormat::EnumNotSet;
}

void HeadPersonImageParams::setFormatNull() {
	m_format= ImageFormat::EnumNotSet;
}


const qint32 &HeadPersonImageParams::height() const {
	return m_height.value();
}

void HeadPersonImageParams::setHeight(qint32 newHeight)  {
	m_height = newHeight;
}

bool HeadPersonImageParams::heightNull() const {
	// Nullable: true
	// Type Nullable: false
	

	return !m_height.has_value();
}

void HeadPersonImageParams::setHeightNull() {
	m_height = std::nullopt;
}


const qint32 &HeadPersonImageParams::imageIndex() const {
	return m_imageIndex.value();
}

void HeadPersonImageParams::setImageIndex(qint32 newImageIndex)  {
	m_imageIndex = newImageIndex;
}

bool HeadPersonImageParams::imageIndexNull() const {
	// Nullable: true
	// Type Nullable: false
	

	return !m_imageIndex.has_value();
}

void HeadPersonImageParams::setImageIndexNull() {
	m_imageIndex = std::nullopt;
}


const qint32 &HeadPersonImageParams::maxHeight() const {
	return m_maxHeight.value();
}

void HeadPersonImageParams::setMaxHeight(qint32 newMaxHeight)  {
	m_maxHeight = newMaxHeight;
}

bool HeadPersonImageParams::maxHeightNull() const {
	// Nullable: true
	// Type Nullable: false
	

	return !m_maxHeight.has_value();
}

void HeadPersonImageParams::setMaxHeightNull() {
	m_maxHeight = std::nullopt;
}


const qint32 &HeadPersonImageParams::maxWidth() const {
	return m_maxWidth.value();
}

void HeadPersonImageParams::setMaxWidth(qint32 newMaxWidth)  {
	m_maxWidth = newMaxWidth;
}

bool HeadPersonImageParams::maxWidthNull() const {
	// Nullable: true
	// Type Nullable: false
	

	return !m_maxWidth.has_value();
}

void HeadPersonImageParams::setMaxWidthNull() {
	m_maxWidth = std::nullopt;
}


const double &HeadPersonImageParams::percentPlayed() const {
	return m_percentPlayed.value();
}

void HeadPersonImageParams::setPercentPlayed(double newPercentPlayed)  {
	m_percentPlayed = newPercentPlayed;
}

bool HeadPersonImageParams::percentPlayedNull() const {
	// Nullable: true
	// Type Nullable: false
	

	return !m_percentPlayed.has_value();
}

void HeadPersonImageParams::setPercentPlayedNull() {
	m_percentPlayed = std::nullopt;
}


const qint32 &HeadPersonImageParams::quality() const {
	return m_quality.value();
}

void HeadPersonImageParams::setQuality(qint32 newQuality)  {
	m_quality = newQuality;
}

bool HeadPersonImageParams::qualityNull() const {
	// Nullable: true
	// Type Nullable: false
	

	return !m_quality.has_value();
}

void HeadPersonImageParams::setQualityNull() {
	m_quality = std::nullopt;
}


const QString &HeadPersonImageParams::tag() const {
	return m_tag;
}

void HeadPersonImageParams::setTag(QString newTag)  {
	m_tag = newTag;
}

bool HeadPersonImageParams::tagNull() const {
	// Nullable: true
	// Type Nullable: true
	

	return m_tag.isNull();
}

void HeadPersonImageParams::setTagNull() {
	m_tag.clear();
}


const qint32 &HeadPersonImageParams::unplayedCount() const {
	return m_unplayedCount.value();
}

void HeadPersonImageParams::setUnplayedCount(qint32 newUnplayedCount)  {
	m_unplayedCount = newUnplayedCount;
}

bool HeadPersonImageParams::unplayedCountNull() const {
	// Nullable: true
	// Type Nullable: false
	

	return !m_unplayedCount.has_value();
}

void HeadPersonImageParams::setUnplayedCountNull() {
	m_unplayedCount = std::nullopt;
}


const qint32 &HeadPersonImageParams::width() const {
	return m_width.value();
}

void HeadPersonImageParams::setWidth(qint32 newWidth)  {
	m_width = newWidth;
}

bool HeadPersonImageParams::widthNull() const {
	// Nullable: true
	// Type Nullable: false
	

	return !m_width.has_value();
}

void HeadPersonImageParams::setWidthNull() {
	m_width = std::nullopt;
}




// HeadPersonImageByIndexParams

const qint32 &HeadPersonImageByIndexParams::imageIndex() const {
	return m_imageIndex;
}

void HeadPersonImageByIndexParams::setImageIndex(qint32 newImageIndex) {
	m_imageIndex = newImageIndex;
}


const ImageType &HeadPersonImageByIndexParams::imageType() const {
	return m_imageType;
}

void HeadPersonImageByIndexParams::setImageType(ImageType newImageType) {
	m_imageType = newImageType;
}


const QString &HeadPersonImageByIndexParams::name() const {
	return m_name;
}

void HeadPersonImageByIndexParams::setName(QString newName) {
	m_name = newName;
}


const bool &HeadPersonImageByIndexParams::addPlayedIndicator() const {
	return m_addPlayedIndicator.value();
}

void HeadPersonImageByIndexParams::setAddPlayedIndicator(bool newAddPlayedIndicator)  {
	m_addPlayedIndicator = newAddPlayedIndicator;
}

bool HeadPersonImageByIndexParams::addPlayedIndicatorNull() const {
	// Nullable: true
	// Type Nullable: false
	

	return !m_addPlayedIndicator.has_value();
}

void HeadPersonImageByIndexParams::setAddPlayedIndicatorNull() {
	m_addPlayedIndicator = std::nullopt;
}


const QString &HeadPersonImageByIndexParams::backgroundColor() const {
	return m_backgroundColor;
}

void HeadPersonImageByIndexParams::setBackgroundColor(QString newBackgroundColor)  {
	m_backgroundColor = newBackgroundColor;
}

bool HeadPersonImageByIndexParams::backgroundColorNull() const {
	// Nullable: true
	// Type Nullable: true
	

	return m_backgroundColor.isNull();
}

void HeadPersonImageByIndexParams::setBackgroundColorNull() {
	m_backgroundColor.clear();
}


const qint32 &HeadPersonImageByIndexParams::blur() const {
	return m_blur.value();
}

void HeadPersonImageByIndexParams::setBlur(qint32 newBlur)  {
	m_blur = newBlur;
}

bool HeadPersonImageByIndexParams::blurNull() const {
	// Nullable: true
	// Type Nullable: false
	

	return !m_blur.has_value();
}

void HeadPersonImageByIndexParams::setBlurNull() {
	m_blur = std::nullopt;
}


const bool &HeadPersonImageByIndexParams::cropWhitespace() const {
	return m_cropWhitespace.value();
}

void HeadPersonImageByIndexParams::setCropWhitespace(bool newCropWhitespace)  {
	m_cropWhitespace = newCropWhitespace;
}

bool HeadPersonImageByIndexParams::cropWhitespaceNull() const {
	// Nullable: true
	// Type Nullable: false
	

	return !m_cropWhitespace.has_value();
}

void HeadPersonImageByIndexParams::setCropWhitespaceNull() {
	m_cropWhitespace = std::nullopt;
}


const QString &HeadPersonImageByIndexParams::foregroundLayer() const {
	return m_foregroundLayer;
}

void HeadPersonImageByIndexParams::setForegroundLayer(QString newForegroundLayer)  {
	m_foregroundLayer = newForegroundLayer;
}

bool HeadPersonImageByIndexParams::foregroundLayerNull() const {
	// Nullable: true
	// Type Nullable: true
	

	return m_foregroundLayer.isNull();
}

void HeadPersonImageByIndexParams::setForegroundLayerNull() {
	m_foregroundLayer.clear();
}


const ImageFormat &HeadPersonImageByIndexParams::format() const {
	return m_format;
}

void HeadPersonImageByIndexParams::setFormat(ImageFormat newFormat)  {
	m_format = newFormat;
}

bool HeadPersonImageByIndexParams::formatNull() const {
	// Nullable: true
	// Type Nullable: true
	

	return m_format== ImageFormat::EnumNotSet;
}

void HeadPersonImageByIndexParams::setFormatNull() {
	m_format= ImageFormat::EnumNotSet;
}


const qint32 &HeadPersonImageByIndexParams::height() const {
	return m_height.value();
}

void HeadPersonImageByIndexParams::setHeight(qint32 newHeight)  {
	m_height = newHeight;
}

bool HeadPersonImageByIndexParams::heightNull() const {
	// Nullable: true
	// Type Nullable: false
	

	return !m_height.has_value();
}

void HeadPersonImageByIndexParams::setHeightNull() {
	m_height = std::nullopt;
}


const qint32 &HeadPersonImageByIndexParams::maxHeight() const {
	return m_maxHeight.value();
}

void HeadPersonImageByIndexParams::setMaxHeight(qint32 newMaxHeight)  {
	m_maxHeight = newMaxHeight;
}

bool HeadPersonImageByIndexParams::maxHeightNull() const {
	// Nullable: true
	// Type Nullable: false
	

	return !m_maxHeight.has_value();
}

void HeadPersonImageByIndexParams::setMaxHeightNull() {
	m_maxHeight = std::nullopt;
}


const qint32 &HeadPersonImageByIndexParams::maxWidth() const {
	return m_maxWidth.value();
}

void HeadPersonImageByIndexParams::setMaxWidth(qint32 newMaxWidth)  {
	m_maxWidth = newMaxWidth;
}

bool HeadPersonImageByIndexParams::maxWidthNull() const {
	// Nullable: true
	// Type Nullable: false
	

	return !m_maxWidth.has_value();
}

void HeadPersonImageByIndexParams::setMaxWidthNull() {
	m_maxWidth = std::nullopt;
}


const double &HeadPersonImageByIndexParams::percentPlayed() const {
	return m_percentPlayed.value();
}

void HeadPersonImageByIndexParams::setPercentPlayed(double newPercentPlayed)  {
	m_percentPlayed = newPercentPlayed;
}

bool HeadPersonImageByIndexParams::percentPlayedNull() const {
	// Nullable: true
	// Type Nullable: false
	

	return !m_percentPlayed.has_value();
}

void HeadPersonImageByIndexParams::setPercentPlayedNull() {
	m_percentPlayed = std::nullopt;
}


const qint32 &HeadPersonImageByIndexParams::quality() const {
	return m_quality.value();
}

void HeadPersonImageByIndexParams::setQuality(qint32 newQuality)  {
	m_quality = newQuality;
}

bool HeadPersonImageByIndexParams::qualityNull() const {
	// Nullable: true
	// Type Nullable: false
	

	return !m_quality.has_value();
}

void HeadPersonImageByIndexParams::setQualityNull() {
	m_quality = std::nullopt;
}


const QString &HeadPersonImageByIndexParams::tag() const {
	return m_tag;
}

void HeadPersonImageByIndexParams::setTag(QString newTag)  {
	m_tag = newTag;
}

bool HeadPersonImageByIndexParams::tagNull() const {
	// Nullable: true
	// Type Nullable: true
	

	return m_tag.isNull();
}

void HeadPersonImageByIndexParams::setTagNull() {
	m_tag.clear();
}


const qint32 &HeadPersonImageByIndexParams::unplayedCount() const {
	return m_unplayedCount.value();
}

void HeadPersonImageByIndexParams::setUnplayedCount(qint32 newUnplayedCount)  {
	m_unplayedCount = newUnplayedCount;
}

bool HeadPersonImageByIndexParams::unplayedCountNull() const {
	// Nullable: true
	// Type Nullable: false
	

	return !m_unplayedCount.has_value();
}

void HeadPersonImageByIndexParams::setUnplayedCountNull() {
	m_unplayedCount = std::nullopt;
}


const qint32 &HeadPersonImageByIndexParams::width() const {
	return m_width.value();
}

void HeadPersonImageByIndexParams::setWidth(qint32 newWidth)  {
	m_width = newWidth;
}

bool HeadPersonImageByIndexParams::widthNull() const {
	// Nullable: true
	// Type Nullable: false
	

	return !m_width.has_value();
}

void HeadPersonImageByIndexParams::setWidthNull() {
	m_width = std::nullopt;
}




// HeadStudioImageParams

const ImageType &HeadStudioImageParams::imageType() const {
	return m_imageType;
}

void HeadStudioImageParams::setImageType(ImageType newImageType) {
	m_imageType = newImageType;
}


const QString &HeadStudioImageParams::name() const {
	return m_name;
}

void HeadStudioImageParams::setName(QString newName) {
	m_name = newName;
}


const bool &HeadStudioImageParams::addPlayedIndicator() const {
	return m_addPlayedIndicator.value();
}

void HeadStudioImageParams::setAddPlayedIndicator(bool newAddPlayedIndicator)  {
	m_addPlayedIndicator = newAddPlayedIndicator;
}

bool HeadStudioImageParams::addPlayedIndicatorNull() const {
	// Nullable: true
	// Type Nullable: false
	

	return !m_addPlayedIndicator.has_value();
}

void HeadStudioImageParams::setAddPlayedIndicatorNull() {
	m_addPlayedIndicator = std::nullopt;
}


const QString &HeadStudioImageParams::backgroundColor() const {
	return m_backgroundColor;
}

void HeadStudioImageParams::setBackgroundColor(QString newBackgroundColor)  {
	m_backgroundColor = newBackgroundColor;
}

bool HeadStudioImageParams::backgroundColorNull() const {
	// Nullable: true
	// Type Nullable: true
	

	return m_backgroundColor.isNull();
}

void HeadStudioImageParams::setBackgroundColorNull() {
	m_backgroundColor.clear();
}


const qint32 &HeadStudioImageParams::blur() const {
	return m_blur.value();
}

void HeadStudioImageParams::setBlur(qint32 newBlur)  {
	m_blur = newBlur;
}

bool HeadStudioImageParams::blurNull() const {
	// Nullable: true
	// Type Nullable: false
	

	return !m_blur.has_value();
}

void HeadStudioImageParams::setBlurNull() {
	m_blur = std::nullopt;
}


const bool &HeadStudioImageParams::cropWhitespace() const {
	return m_cropWhitespace.value();
}

void HeadStudioImageParams::setCropWhitespace(bool newCropWhitespace)  {
	m_cropWhitespace = newCropWhitespace;
}

bool HeadStudioImageParams::cropWhitespaceNull() const {
	// Nullable: true
	// Type Nullable: false
	

	return !m_cropWhitespace.has_value();
}

void HeadStudioImageParams::setCropWhitespaceNull() {
	m_cropWhitespace = std::nullopt;
}


const QString &HeadStudioImageParams::foregroundLayer() const {
	return m_foregroundLayer;
}

void HeadStudioImageParams::setForegroundLayer(QString newForegroundLayer)  {
	m_foregroundLayer = newForegroundLayer;
}

bool HeadStudioImageParams::foregroundLayerNull() const {
	// Nullable: true
	// Type Nullable: true
	

	return m_foregroundLayer.isNull();
}

void HeadStudioImageParams::setForegroundLayerNull() {
	m_foregroundLayer.clear();
}


const ImageFormat &HeadStudioImageParams::format() const {
	return m_format;
}

void HeadStudioImageParams::setFormat(ImageFormat newFormat)  {
	m_format = newFormat;
}

bool HeadStudioImageParams::formatNull() const {
	// Nullable: true
	// Type Nullable: true
	

	return m_format== ImageFormat::EnumNotSet;
}

void HeadStudioImageParams::setFormatNull() {
	m_format= ImageFormat::EnumNotSet;
}


const qint32 &HeadStudioImageParams::height() const {
	return m_height.value();
}

void HeadStudioImageParams::setHeight(qint32 newHeight)  {
	m_height = newHeight;
}

bool HeadStudioImageParams::heightNull() const {
	// Nullable: true
	// Type Nullable: false
	

	return !m_height.has_value();
}

void HeadStudioImageParams::setHeightNull() {
	m_height = std::nullopt;
}


const qint32 &HeadStudioImageParams::imageIndex() const {
	return m_imageIndex.value();
}

void HeadStudioImageParams::setImageIndex(qint32 newImageIndex)  {
	m_imageIndex = newImageIndex;
}

bool HeadStudioImageParams::imageIndexNull() const {
	// Nullable: true
	// Type Nullable: false
	

	return !m_imageIndex.has_value();
}

void HeadStudioImageParams::setImageIndexNull() {
	m_imageIndex = std::nullopt;
}


const qint32 &HeadStudioImageParams::maxHeight() const {
	return m_maxHeight.value();
}

void HeadStudioImageParams::setMaxHeight(qint32 newMaxHeight)  {
	m_maxHeight = newMaxHeight;
}

bool HeadStudioImageParams::maxHeightNull() const {
	// Nullable: true
	// Type Nullable: false
	

	return !m_maxHeight.has_value();
}

void HeadStudioImageParams::setMaxHeightNull() {
	m_maxHeight = std::nullopt;
}


const qint32 &HeadStudioImageParams::maxWidth() const {
	return m_maxWidth.value();
}

void HeadStudioImageParams::setMaxWidth(qint32 newMaxWidth)  {
	m_maxWidth = newMaxWidth;
}

bool HeadStudioImageParams::maxWidthNull() const {
	// Nullable: true
	// Type Nullable: false
	

	return !m_maxWidth.has_value();
}

void HeadStudioImageParams::setMaxWidthNull() {
	m_maxWidth = std::nullopt;
}


const double &HeadStudioImageParams::percentPlayed() const {
	return m_percentPlayed.value();
}

void HeadStudioImageParams::setPercentPlayed(double newPercentPlayed)  {
	m_percentPlayed = newPercentPlayed;
}

bool HeadStudioImageParams::percentPlayedNull() const {
	// Nullable: true
	// Type Nullable: false
	

	return !m_percentPlayed.has_value();
}

void HeadStudioImageParams::setPercentPlayedNull() {
	m_percentPlayed = std::nullopt;
}


const qint32 &HeadStudioImageParams::quality() const {
	return m_quality.value();
}

void HeadStudioImageParams::setQuality(qint32 newQuality)  {
	m_quality = newQuality;
}

bool HeadStudioImageParams::qualityNull() const {
	// Nullable: true
	// Type Nullable: false
	

	return !m_quality.has_value();
}

void HeadStudioImageParams::setQualityNull() {
	m_quality = std::nullopt;
}


const QString &HeadStudioImageParams::tag() const {
	return m_tag;
}

void HeadStudioImageParams::setTag(QString newTag)  {
	m_tag = newTag;
}

bool HeadStudioImageParams::tagNull() const {
	// Nullable: true
	// Type Nullable: true
	

	return m_tag.isNull();
}

void HeadStudioImageParams::setTagNull() {
	m_tag.clear();
}


const qint32 &HeadStudioImageParams::unplayedCount() const {
	return m_unplayedCount.value();
}

void HeadStudioImageParams::setUnplayedCount(qint32 newUnplayedCount)  {
	m_unplayedCount = newUnplayedCount;
}

bool HeadStudioImageParams::unplayedCountNull() const {
	// Nullable: true
	// Type Nullable: false
	

	return !m_unplayedCount.has_value();
}

void HeadStudioImageParams::setUnplayedCountNull() {
	m_unplayedCount = std::nullopt;
}


const qint32 &HeadStudioImageParams::width() const {
	return m_width.value();
}

void HeadStudioImageParams::setWidth(qint32 newWidth)  {
	m_width = newWidth;
}

bool HeadStudioImageParams::widthNull() const {
	// Nullable: true
	// Type Nullable: false
	

	return !m_width.has_value();
}

void HeadStudioImageParams::setWidthNull() {
	m_width = std::nullopt;
}




// HeadStudioImageByIndexParams

const qint32 &HeadStudioImageByIndexParams::imageIndex() const {
	return m_imageIndex;
}

void HeadStudioImageByIndexParams::setImageIndex(qint32 newImageIndex) {
	m_imageIndex = newImageIndex;
}


const ImageType &HeadStudioImageByIndexParams::imageType() const {
	return m_imageType;
}

void HeadStudioImageByIndexParams::setImageType(ImageType newImageType) {
	m_imageType = newImageType;
}


const QString &HeadStudioImageByIndexParams::name() const {
	return m_name;
}

void HeadStudioImageByIndexParams::setName(QString newName) {
	m_name = newName;
}


const bool &HeadStudioImageByIndexParams::addPlayedIndicator() const {
	return m_addPlayedIndicator.value();
}

void HeadStudioImageByIndexParams::setAddPlayedIndicator(bool newAddPlayedIndicator)  {
	m_addPlayedIndicator = newAddPlayedIndicator;
}

bool HeadStudioImageByIndexParams::addPlayedIndicatorNull() const {
	// Nullable: true
	// Type Nullable: false
	

	return !m_addPlayedIndicator.has_value();
}

void HeadStudioImageByIndexParams::setAddPlayedIndicatorNull() {
	m_addPlayedIndicator = std::nullopt;
}


const QString &HeadStudioImageByIndexParams::backgroundColor() const {
	return m_backgroundColor;
}

void HeadStudioImageByIndexParams::setBackgroundColor(QString newBackgroundColor)  {
	m_backgroundColor = newBackgroundColor;
}

bool HeadStudioImageByIndexParams::backgroundColorNull() const {
	// Nullable: true
	// Type Nullable: true
	

	return m_backgroundColor.isNull();
}

void HeadStudioImageByIndexParams::setBackgroundColorNull() {
	m_backgroundColor.clear();
}


const qint32 &HeadStudioImageByIndexParams::blur() const {
	return m_blur.value();
}

void HeadStudioImageByIndexParams::setBlur(qint32 newBlur)  {
	m_blur = newBlur;
}

bool HeadStudioImageByIndexParams::blurNull() const {
	// Nullable: true
	// Type Nullable: false
	

	return !m_blur.has_value();
}

void HeadStudioImageByIndexParams::setBlurNull() {
	m_blur = std::nullopt;
}


const bool &HeadStudioImageByIndexParams::cropWhitespace() const {
	return m_cropWhitespace.value();
}

void HeadStudioImageByIndexParams::setCropWhitespace(bool newCropWhitespace)  {
	m_cropWhitespace = newCropWhitespace;
}

bool HeadStudioImageByIndexParams::cropWhitespaceNull() const {
	// Nullable: true
	// Type Nullable: false
	

	return !m_cropWhitespace.has_value();
}

void HeadStudioImageByIndexParams::setCropWhitespaceNull() {
	m_cropWhitespace = std::nullopt;
}


const QString &HeadStudioImageByIndexParams::foregroundLayer() const {
	return m_foregroundLayer;
}

void HeadStudioImageByIndexParams::setForegroundLayer(QString newForegroundLayer)  {
	m_foregroundLayer = newForegroundLayer;
}

bool HeadStudioImageByIndexParams::foregroundLayerNull() const {
	// Nullable: true
	// Type Nullable: true
	

	return m_foregroundLayer.isNull();
}

void HeadStudioImageByIndexParams::setForegroundLayerNull() {
	m_foregroundLayer.clear();
}


const ImageFormat &HeadStudioImageByIndexParams::format() const {
	return m_format;
}

void HeadStudioImageByIndexParams::setFormat(ImageFormat newFormat)  {
	m_format = newFormat;
}

bool HeadStudioImageByIndexParams::formatNull() const {
	// Nullable: true
	// Type Nullable: true
	

	return m_format== ImageFormat::EnumNotSet;
}

void HeadStudioImageByIndexParams::setFormatNull() {
	m_format= ImageFormat::EnumNotSet;
}


const qint32 &HeadStudioImageByIndexParams::height() const {
	return m_height.value();
}

void HeadStudioImageByIndexParams::setHeight(qint32 newHeight)  {
	m_height = newHeight;
}

bool HeadStudioImageByIndexParams::heightNull() const {
	// Nullable: true
	// Type Nullable: false
	

	return !m_height.has_value();
}

void HeadStudioImageByIndexParams::setHeightNull() {
	m_height = std::nullopt;
}


const qint32 &HeadStudioImageByIndexParams::maxHeight() const {
	return m_maxHeight.value();
}

void HeadStudioImageByIndexParams::setMaxHeight(qint32 newMaxHeight)  {
	m_maxHeight = newMaxHeight;
}

bool HeadStudioImageByIndexParams::maxHeightNull() const {
	// Nullable: true
	// Type Nullable: false
	

	return !m_maxHeight.has_value();
}

void HeadStudioImageByIndexParams::setMaxHeightNull() {
	m_maxHeight = std::nullopt;
}


const qint32 &HeadStudioImageByIndexParams::maxWidth() const {
	return m_maxWidth.value();
}

void HeadStudioImageByIndexParams::setMaxWidth(qint32 newMaxWidth)  {
	m_maxWidth = newMaxWidth;
}

bool HeadStudioImageByIndexParams::maxWidthNull() const {
	// Nullable: true
	// Type Nullable: false
	

	return !m_maxWidth.has_value();
}

void HeadStudioImageByIndexParams::setMaxWidthNull() {
	m_maxWidth = std::nullopt;
}


const double &HeadStudioImageByIndexParams::percentPlayed() const {
	return m_percentPlayed.value();
}

void HeadStudioImageByIndexParams::setPercentPlayed(double newPercentPlayed)  {
	m_percentPlayed = newPercentPlayed;
}

bool HeadStudioImageByIndexParams::percentPlayedNull() const {
	// Nullable: true
	// Type Nullable: false
	

	return !m_percentPlayed.has_value();
}

void HeadStudioImageByIndexParams::setPercentPlayedNull() {
	m_percentPlayed = std::nullopt;
}


const qint32 &HeadStudioImageByIndexParams::quality() const {
	return m_quality.value();
}

void HeadStudioImageByIndexParams::setQuality(qint32 newQuality)  {
	m_quality = newQuality;
}

bool HeadStudioImageByIndexParams::qualityNull() const {
	// Nullable: true
	// Type Nullable: false
	

	return !m_quality.has_value();
}

void HeadStudioImageByIndexParams::setQualityNull() {
	m_quality = std::nullopt;
}


const QString &HeadStudioImageByIndexParams::tag() const {
	return m_tag;
}

void HeadStudioImageByIndexParams::setTag(QString newTag)  {
	m_tag = newTag;
}

bool HeadStudioImageByIndexParams::tagNull() const {
	// Nullable: true
	// Type Nullable: true
	

	return m_tag.isNull();
}

void HeadStudioImageByIndexParams::setTagNull() {
	m_tag.clear();
}


const qint32 &HeadStudioImageByIndexParams::unplayedCount() const {
	return m_unplayedCount.value();
}

void HeadStudioImageByIndexParams::setUnplayedCount(qint32 newUnplayedCount)  {
	m_unplayedCount = newUnplayedCount;
}

bool HeadStudioImageByIndexParams::unplayedCountNull() const {
	// Nullable: true
	// Type Nullable: false
	

	return !m_unplayedCount.has_value();
}

void HeadStudioImageByIndexParams::setUnplayedCountNull() {
	m_unplayedCount = std::nullopt;
}


const qint32 &HeadStudioImageByIndexParams::width() const {
	return m_width.value();
}

void HeadStudioImageByIndexParams::setWidth(qint32 newWidth)  {
	m_width = newWidth;
}

bool HeadStudioImageByIndexParams::widthNull() const {
	// Nullable: true
	// Type Nullable: false
	

	return !m_width.has_value();
}

void HeadStudioImageByIndexParams::setWidthNull() {
	m_width = std::nullopt;
}




// HeadUniversalAudioStreamParams

const QString &HeadUniversalAudioStreamParams::itemId() const {
	return m_itemId;
}

void HeadUniversalAudioStreamParams::setItemId(QString newItemId) {
	m_itemId = newItemId;
}


const qint32 &HeadUniversalAudioStreamParams::audioBitRate() const {
	return m_audioBitRate.value();
}

void HeadUniversalAudioStreamParams::setAudioBitRate(qint32 newAudioBitRate)  {
	m_audioBitRate = newAudioBitRate;
}

bool HeadUniversalAudioStreamParams::audioBitRateNull() const {
	// Nullable: true
	// Type Nullable: false
	

	return !m_audioBitRate.has_value();
}

void HeadUniversalAudioStreamParams::setAudioBitRateNull() {
	m_audioBitRate = std::nullopt;
}


const QString &HeadUniversalAudioStreamParams::audioCodec() const {
	return m_audioCodec;
}

void HeadUniversalAudioStreamParams::setAudioCodec(QString newAudioCodec)  {
	m_audioCodec = newAudioCodec;
}

bool HeadUniversalAudioStreamParams::audioCodecNull() const {
	// Nullable: true
	// Type Nullable: true
	

	return m_audioCodec.isNull();
}

void HeadUniversalAudioStreamParams::setAudioCodecNull() {
	m_audioCodec.clear();
}


const bool &HeadUniversalAudioStreamParams::breakOnNonKeyFrames() const {
	return m_breakOnNonKeyFrames.value();
}

void HeadUniversalAudioStreamParams::setBreakOnNonKeyFrames(bool newBreakOnNonKeyFrames)  {
	m_breakOnNonKeyFrames = newBreakOnNonKeyFrames;
}

bool HeadUniversalAudioStreamParams::breakOnNonKeyFramesNull() const {
	// Nullable: true
	// Type Nullable: false
	

	return !m_breakOnNonKeyFrames.has_value();
}

void HeadUniversalAudioStreamParams::setBreakOnNonKeyFramesNull() {
	m_breakOnNonKeyFrames = std::nullopt;
}


const QStringList &HeadUniversalAudioStreamParams::container() const {
	return m_container;
}

void HeadUniversalAudioStreamParams::setContainer(QStringList newContainer)  {
	m_container = newContainer;
}

bool HeadUniversalAudioStreamParams::containerNull() const {
	// Nullable: true
	// Type Nullable: true
	

	return m_container.size() == 0;
}

void HeadUniversalAudioStreamParams::setContainerNull() {
	m_container.clear();
}


const QString &HeadUniversalAudioStreamParams::deviceId() const {
	return m_deviceId;
}

void HeadUniversalAudioStreamParams::setDeviceId(QString newDeviceId)  {
	m_deviceId = newDeviceId;
}

bool HeadUniversalAudioStreamParams::deviceIdNull() const {
	// Nullable: true
	// Type Nullable: true
	

	return m_deviceId.isNull();
}

void HeadUniversalAudioStreamParams::setDeviceIdNull() {
	m_deviceId.clear();
}


const bool &HeadUniversalAudioStreamParams::enableRedirection() const {
	return m_enableRedirection.value();
}

void HeadUniversalAudioStreamParams::setEnableRedirection(bool newEnableRedirection)  {
	m_enableRedirection = newEnableRedirection;
}

bool HeadUniversalAudioStreamParams::enableRedirectionNull() const {
	// Nullable: false
	// Type Nullable: false
	

	return !m_enableRedirection.has_value();
}

void HeadUniversalAudioStreamParams::setEnableRedirectionNull() {
	m_enableRedirection = std::nullopt;
}


const bool &HeadUniversalAudioStreamParams::enableRemoteMedia() const {
	return m_enableRemoteMedia.value();
}

void HeadUniversalAudioStreamParams::setEnableRemoteMedia(bool newEnableRemoteMedia)  {
	m_enableRemoteMedia = newEnableRemoteMedia;
}

bool HeadUniversalAudioStreamParams::enableRemoteMediaNull() const {
	// Nullable: true
	// Type Nullable: false
	

	return !m_enableRemoteMedia.has_value();
}

void HeadUniversalAudioStreamParams::setEnableRemoteMediaNull() {
	m_enableRemoteMedia = std::nullopt;
}


const qint32 &HeadUniversalAudioStreamParams::maxAudioBitDepth() const {
	return m_maxAudioBitDepth.value();
}

void HeadUniversalAudioStreamParams::setMaxAudioBitDepth(qint32 newMaxAudioBitDepth)  {
	m_maxAudioBitDepth = newMaxAudioBitDepth;
}

bool HeadUniversalAudioStreamParams::maxAudioBitDepthNull() const {
	// Nullable: true
	// Type Nullable: false
	

	return !m_maxAudioBitDepth.has_value();
}

void HeadUniversalAudioStreamParams::setMaxAudioBitDepthNull() {
	m_maxAudioBitDepth = std::nullopt;
}


const qint32 &HeadUniversalAudioStreamParams::maxAudioChannels() const {
	return m_maxAudioChannels.value();
}

void HeadUniversalAudioStreamParams::setMaxAudioChannels(qint32 newMaxAudioChannels)  {
	m_maxAudioChannels = newMaxAudioChannels;
}

bool HeadUniversalAudioStreamParams::maxAudioChannelsNull() const {
	// Nullable: true
	// Type Nullable: false
	

	return !m_maxAudioChannels.has_value();
}

void HeadUniversalAudioStreamParams::setMaxAudioChannelsNull() {
	m_maxAudioChannels = std::nullopt;
}


const qint32 &HeadUniversalAudioStreamParams::maxAudioSampleRate() const {
	return m_maxAudioSampleRate.value();
}

void HeadUniversalAudioStreamParams::setMaxAudioSampleRate(qint32 newMaxAudioSampleRate)  {
	m_maxAudioSampleRate = newMaxAudioSampleRate;
}

bool HeadUniversalAudioStreamParams::maxAudioSampleRateNull() const {
	// Nullable: true
	// Type Nullable: false
	

	return !m_maxAudioSampleRate.has_value();
}

void HeadUniversalAudioStreamParams::setMaxAudioSampleRateNull() {
	m_maxAudioSampleRate = std::nullopt;
}


const qint32 &HeadUniversalAudioStreamParams::maxStreamingBitrate() const {
	return m_maxStreamingBitrate.value();
}

void HeadUniversalAudioStreamParams::setMaxStreamingBitrate(qint32 newMaxStreamingBitrate)  {
	m_maxStreamingBitrate = newMaxStreamingBitrate;
}

bool HeadUniversalAudioStreamParams::maxStreamingBitrateNull() const {
	// Nullable: true
	// Type Nullable: false
	

	return !m_maxStreamingBitrate.has_value();
}

void HeadUniversalAudioStreamParams::setMaxStreamingBitrateNull() {
	m_maxStreamingBitrate = std::nullopt;
}


const QString &HeadUniversalAudioStreamParams::mediaSourceId() const {
	return m_mediaSourceId;
}

void HeadUniversalAudioStreamParams::setMediaSourceId(QString newMediaSourceId)  {
	m_mediaSourceId = newMediaSourceId;
}

bool HeadUniversalAudioStreamParams::mediaSourceIdNull() const {
	// Nullable: true
	// Type Nullable: true
	

	return m_mediaSourceId.isNull();
}

void HeadUniversalAudioStreamParams::setMediaSourceIdNull() {
	m_mediaSourceId.clear();
}


const qint64 &HeadUniversalAudioStreamParams::startTimeTicks() const {
	return m_startTimeTicks.value();
}

void HeadUniversalAudioStreamParams::setStartTimeTicks(qint64 newStartTimeTicks)  {
	m_startTimeTicks = newStartTimeTicks;
}

bool HeadUniversalAudioStreamParams::startTimeTicksNull() const {
	// Nullable: true
	// Type Nullable: false
	

	return !m_startTimeTicks.has_value();
}

void HeadUniversalAudioStreamParams::setStartTimeTicksNull() {
	m_startTimeTicks = std::nullopt;
}


const qint32 &HeadUniversalAudioStreamParams::transcodingAudioChannels() const {
	return m_transcodingAudioChannels.value();
}

void HeadUniversalAudioStreamParams::setTranscodingAudioChannels(qint32 newTranscodingAudioChannels)  {
	m_transcodingAudioChannels = newTranscodingAudioChannels;
}

bool HeadUniversalAudioStreamParams::transcodingAudioChannelsNull() const {
	// Nullable: true
	// Type Nullable: false
	

	return !m_transcodingAudioChannels.has_value();
}

void HeadUniversalAudioStreamParams::setTranscodingAudioChannelsNull() {
	m_transcodingAudioChannels = std::nullopt;
}


const QString &HeadUniversalAudioStreamParams::transcodingContainer() const {
	return m_transcodingContainer;
}

void HeadUniversalAudioStreamParams::setTranscodingContainer(QString newTranscodingContainer)  {
	m_transcodingContainer = newTranscodingContainer;
}

bool HeadUniversalAudioStreamParams::transcodingContainerNull() const {
	// Nullable: true
	// Type Nullable: true
	

	return m_transcodingContainer.isNull();
}

void HeadUniversalAudioStreamParams::setTranscodingContainerNull() {
	m_transcodingContainer.clear();
}


const QString &HeadUniversalAudioStreamParams::transcodingProtocol() const {
	return m_transcodingProtocol;
}

void HeadUniversalAudioStreamParams::setTranscodingProtocol(QString newTranscodingProtocol)  {
	m_transcodingProtocol = newTranscodingProtocol;
}

bool HeadUniversalAudioStreamParams::transcodingProtocolNull() const {
	// Nullable: true
	// Type Nullable: true
	

	return m_transcodingProtocol.isNull();
}

void HeadUniversalAudioStreamParams::setTranscodingProtocolNull() {
	m_transcodingProtocol.clear();
}


const QString &HeadUniversalAudioStreamParams::userId() const {
	return m_userId;
}

void HeadUniversalAudioStreamParams::setUserId(QString newUserId)  {
	m_userId = newUserId;
}

bool HeadUniversalAudioStreamParams::userIdNull() const {
	// Nullable: true
	// Type Nullable: true
	

	return m_userId.isNull();
}

void HeadUniversalAudioStreamParams::setUserIdNull() {
	m_userId.clear();
}




// HeadUserImageParams

const ImageType &HeadUserImageParams::imageType() const {
	return m_imageType;
}

void HeadUserImageParams::setImageType(ImageType newImageType) {
	m_imageType = newImageType;
}


const QString &HeadUserImageParams::userId() const {
	return m_userId;
}

void HeadUserImageParams::setUserId(QString newUserId) {
	m_userId = newUserId;
}


const bool &HeadUserImageParams::addPlayedIndicator() const {
	return m_addPlayedIndicator.value();
}

void HeadUserImageParams::setAddPlayedIndicator(bool newAddPlayedIndicator)  {
	m_addPlayedIndicator = newAddPlayedIndicator;
}

bool HeadUserImageParams::addPlayedIndicatorNull() const {
	// Nullable: true
	// Type Nullable: false
	

	return !m_addPlayedIndicator.has_value();
}

void HeadUserImageParams::setAddPlayedIndicatorNull() {
	m_addPlayedIndicator = std::nullopt;
}


const QString &HeadUserImageParams::backgroundColor() const {
	return m_backgroundColor;
}

void HeadUserImageParams::setBackgroundColor(QString newBackgroundColor)  {
	m_backgroundColor = newBackgroundColor;
}

bool HeadUserImageParams::backgroundColorNull() const {
	// Nullable: true
	// Type Nullable: true
	

	return m_backgroundColor.isNull();
}

void HeadUserImageParams::setBackgroundColorNull() {
	m_backgroundColor.clear();
}


const qint32 &HeadUserImageParams::blur() const {
	return m_blur.value();
}

void HeadUserImageParams::setBlur(qint32 newBlur)  {
	m_blur = newBlur;
}

bool HeadUserImageParams::blurNull() const {
	// Nullable: true
	// Type Nullable: false
	

	return !m_blur.has_value();
}

void HeadUserImageParams::setBlurNull() {
	m_blur = std::nullopt;
}


const bool &HeadUserImageParams::cropWhitespace() const {
	return m_cropWhitespace.value();
}

void HeadUserImageParams::setCropWhitespace(bool newCropWhitespace)  {
	m_cropWhitespace = newCropWhitespace;
}

bool HeadUserImageParams::cropWhitespaceNull() const {
	// Nullable: true
	// Type Nullable: false
	

	return !m_cropWhitespace.has_value();
}

void HeadUserImageParams::setCropWhitespaceNull() {
	m_cropWhitespace = std::nullopt;
}


const QString &HeadUserImageParams::foregroundLayer() const {
	return m_foregroundLayer;
}

void HeadUserImageParams::setForegroundLayer(QString newForegroundLayer)  {
	m_foregroundLayer = newForegroundLayer;
}

bool HeadUserImageParams::foregroundLayerNull() const {
	// Nullable: true
	// Type Nullable: true
	

	return m_foregroundLayer.isNull();
}

void HeadUserImageParams::setForegroundLayerNull() {
	m_foregroundLayer.clear();
}


const ImageFormat &HeadUserImageParams::format() const {
	return m_format;
}

void HeadUserImageParams::setFormat(ImageFormat newFormat)  {
	m_format = newFormat;
}

bool HeadUserImageParams::formatNull() const {
	// Nullable: true
	// Type Nullable: true
	

	return m_format== ImageFormat::EnumNotSet;
}

void HeadUserImageParams::setFormatNull() {
	m_format= ImageFormat::EnumNotSet;
}


const qint32 &HeadUserImageParams::height() const {
	return m_height.value();
}

void HeadUserImageParams::setHeight(qint32 newHeight)  {
	m_height = newHeight;
}

bool HeadUserImageParams::heightNull() const {
	// Nullable: true
	// Type Nullable: false
	

	return !m_height.has_value();
}

void HeadUserImageParams::setHeightNull() {
	m_height = std::nullopt;
}


const qint32 &HeadUserImageParams::imageIndex() const {
	return m_imageIndex.value();
}

void HeadUserImageParams::setImageIndex(qint32 newImageIndex)  {
	m_imageIndex = newImageIndex;
}

bool HeadUserImageParams::imageIndexNull() const {
	// Nullable: true
	// Type Nullable: false
	

	return !m_imageIndex.has_value();
}

void HeadUserImageParams::setImageIndexNull() {
	m_imageIndex = std::nullopt;
}


const qint32 &HeadUserImageParams::maxHeight() const {
	return m_maxHeight.value();
}

void HeadUserImageParams::setMaxHeight(qint32 newMaxHeight)  {
	m_maxHeight = newMaxHeight;
}

bool HeadUserImageParams::maxHeightNull() const {
	// Nullable: true
	// Type Nullable: false
	

	return !m_maxHeight.has_value();
}

void HeadUserImageParams::setMaxHeightNull() {
	m_maxHeight = std::nullopt;
}


const qint32 &HeadUserImageParams::maxWidth() const {
	return m_maxWidth.value();
}

void HeadUserImageParams::setMaxWidth(qint32 newMaxWidth)  {
	m_maxWidth = newMaxWidth;
}

bool HeadUserImageParams::maxWidthNull() const {
	// Nullable: true
	// Type Nullable: false
	

	return !m_maxWidth.has_value();
}

void HeadUserImageParams::setMaxWidthNull() {
	m_maxWidth = std::nullopt;
}


const double &HeadUserImageParams::percentPlayed() const {
	return m_percentPlayed.value();
}

void HeadUserImageParams::setPercentPlayed(double newPercentPlayed)  {
	m_percentPlayed = newPercentPlayed;
}

bool HeadUserImageParams::percentPlayedNull() const {
	// Nullable: true
	// Type Nullable: false
	

	return !m_percentPlayed.has_value();
}

void HeadUserImageParams::setPercentPlayedNull() {
	m_percentPlayed = std::nullopt;
}


const qint32 &HeadUserImageParams::quality() const {
	return m_quality.value();
}

void HeadUserImageParams::setQuality(qint32 newQuality)  {
	m_quality = newQuality;
}

bool HeadUserImageParams::qualityNull() const {
	// Nullable: true
	// Type Nullable: false
	

	return !m_quality.has_value();
}

void HeadUserImageParams::setQualityNull() {
	m_quality = std::nullopt;
}


const QString &HeadUserImageParams::tag() const {
	return m_tag;
}

void HeadUserImageParams::setTag(QString newTag)  {
	m_tag = newTag;
}

bool HeadUserImageParams::tagNull() const {
	// Nullable: true
	// Type Nullable: true
	

	return m_tag.isNull();
}

void HeadUserImageParams::setTagNull() {
	m_tag.clear();
}


const qint32 &HeadUserImageParams::unplayedCount() const {
	return m_unplayedCount.value();
}

void HeadUserImageParams::setUnplayedCount(qint32 newUnplayedCount)  {
	m_unplayedCount = newUnplayedCount;
}

bool HeadUserImageParams::unplayedCountNull() const {
	// Nullable: true
	// Type Nullable: false
	

	return !m_unplayedCount.has_value();
}

void HeadUserImageParams::setUnplayedCountNull() {
	m_unplayedCount = std::nullopt;
}


const qint32 &HeadUserImageParams::width() const {
	return m_width.value();
}

void HeadUserImageParams::setWidth(qint32 newWidth)  {
	m_width = newWidth;
}

bool HeadUserImageParams::widthNull() const {
	// Nullable: true
	// Type Nullable: false
	

	return !m_width.has_value();
}

void HeadUserImageParams::setWidthNull() {
	m_width = std::nullopt;
}




// HeadUserImageByIndexParams

const qint32 &HeadUserImageByIndexParams::imageIndex() const {
	return m_imageIndex;
}

void HeadUserImageByIndexParams::setImageIndex(qint32 newImageIndex) {
	m_imageIndex = newImageIndex;
}


const ImageType &HeadUserImageByIndexParams::imageType() const {
	return m_imageType;
}

void HeadUserImageByIndexParams::setImageType(ImageType newImageType) {
	m_imageType = newImageType;
}


const QString &HeadUserImageByIndexParams::userId() const {
	return m_userId;
}

void HeadUserImageByIndexParams::setUserId(QString newUserId) {
	m_userId = newUserId;
}


const bool &HeadUserImageByIndexParams::addPlayedIndicator() const {
	return m_addPlayedIndicator.value();
}

void HeadUserImageByIndexParams::setAddPlayedIndicator(bool newAddPlayedIndicator)  {
	m_addPlayedIndicator = newAddPlayedIndicator;
}

bool HeadUserImageByIndexParams::addPlayedIndicatorNull() const {
	// Nullable: true
	// Type Nullable: false
	

	return !m_addPlayedIndicator.has_value();
}

void HeadUserImageByIndexParams::setAddPlayedIndicatorNull() {
	m_addPlayedIndicator = std::nullopt;
}


const QString &HeadUserImageByIndexParams::backgroundColor() const {
	return m_backgroundColor;
}

void HeadUserImageByIndexParams::setBackgroundColor(QString newBackgroundColor)  {
	m_backgroundColor = newBackgroundColor;
}

bool HeadUserImageByIndexParams::backgroundColorNull() const {
	// Nullable: true
	// Type Nullable: true
	

	return m_backgroundColor.isNull();
}

void HeadUserImageByIndexParams::setBackgroundColorNull() {
	m_backgroundColor.clear();
}


const qint32 &HeadUserImageByIndexParams::blur() const {
	return m_blur.value();
}

void HeadUserImageByIndexParams::setBlur(qint32 newBlur)  {
	m_blur = newBlur;
}

bool HeadUserImageByIndexParams::blurNull() const {
	// Nullable: true
	// Type Nullable: false
	

	return !m_blur.has_value();
}

void HeadUserImageByIndexParams::setBlurNull() {
	m_blur = std::nullopt;
}


const bool &HeadUserImageByIndexParams::cropWhitespace() const {
	return m_cropWhitespace.value();
}

void HeadUserImageByIndexParams::setCropWhitespace(bool newCropWhitespace)  {
	m_cropWhitespace = newCropWhitespace;
}

bool HeadUserImageByIndexParams::cropWhitespaceNull() const {
	// Nullable: true
	// Type Nullable: false
	

	return !m_cropWhitespace.has_value();
}

void HeadUserImageByIndexParams::setCropWhitespaceNull() {
	m_cropWhitespace = std::nullopt;
}


const QString &HeadUserImageByIndexParams::foregroundLayer() const {
	return m_foregroundLayer;
}

void HeadUserImageByIndexParams::setForegroundLayer(QString newForegroundLayer)  {
	m_foregroundLayer = newForegroundLayer;
}

bool HeadUserImageByIndexParams::foregroundLayerNull() const {
	// Nullable: true
	// Type Nullable: true
	

	return m_foregroundLayer.isNull();
}

void HeadUserImageByIndexParams::setForegroundLayerNull() {
	m_foregroundLayer.clear();
}


const ImageFormat &HeadUserImageByIndexParams::format() const {
	return m_format;
}

void HeadUserImageByIndexParams::setFormat(ImageFormat newFormat)  {
	m_format = newFormat;
}

bool HeadUserImageByIndexParams::formatNull() const {
	// Nullable: true
	// Type Nullable: true
	

	return m_format== ImageFormat::EnumNotSet;
}

void HeadUserImageByIndexParams::setFormatNull() {
	m_format= ImageFormat::EnumNotSet;
}


const qint32 &HeadUserImageByIndexParams::height() const {
	return m_height.value();
}

void HeadUserImageByIndexParams::setHeight(qint32 newHeight)  {
	m_height = newHeight;
}

bool HeadUserImageByIndexParams::heightNull() const {
	// Nullable: true
	// Type Nullable: false
	

	return !m_height.has_value();
}

void HeadUserImageByIndexParams::setHeightNull() {
	m_height = std::nullopt;
}


const qint32 &HeadUserImageByIndexParams::maxHeight() const {
	return m_maxHeight.value();
}

void HeadUserImageByIndexParams::setMaxHeight(qint32 newMaxHeight)  {
	m_maxHeight = newMaxHeight;
}

bool HeadUserImageByIndexParams::maxHeightNull() const {
	// Nullable: true
	// Type Nullable: false
	

	return !m_maxHeight.has_value();
}

void HeadUserImageByIndexParams::setMaxHeightNull() {
	m_maxHeight = std::nullopt;
}


const qint32 &HeadUserImageByIndexParams::maxWidth() const {
	return m_maxWidth.value();
}

void HeadUserImageByIndexParams::setMaxWidth(qint32 newMaxWidth)  {
	m_maxWidth = newMaxWidth;
}

bool HeadUserImageByIndexParams::maxWidthNull() const {
	// Nullable: true
	// Type Nullable: false
	

	return !m_maxWidth.has_value();
}

void HeadUserImageByIndexParams::setMaxWidthNull() {
	m_maxWidth = std::nullopt;
}


const double &HeadUserImageByIndexParams::percentPlayed() const {
	return m_percentPlayed.value();
}

void HeadUserImageByIndexParams::setPercentPlayed(double newPercentPlayed)  {
	m_percentPlayed = newPercentPlayed;
}

bool HeadUserImageByIndexParams::percentPlayedNull() const {
	// Nullable: true
	// Type Nullable: false
	

	return !m_percentPlayed.has_value();
}

void HeadUserImageByIndexParams::setPercentPlayedNull() {
	m_percentPlayed = std::nullopt;
}


const qint32 &HeadUserImageByIndexParams::quality() const {
	return m_quality.value();
}

void HeadUserImageByIndexParams::setQuality(qint32 newQuality)  {
	m_quality = newQuality;
}

bool HeadUserImageByIndexParams::qualityNull() const {
	// Nullable: true
	// Type Nullable: false
	

	return !m_quality.has_value();
}

void HeadUserImageByIndexParams::setQualityNull() {
	m_quality = std::nullopt;
}


const QString &HeadUserImageByIndexParams::tag() const {
	return m_tag;
}

void HeadUserImageByIndexParams::setTag(QString newTag)  {
	m_tag = newTag;
}

bool HeadUserImageByIndexParams::tagNull() const {
	// Nullable: true
	// Type Nullable: true
	

	return m_tag.isNull();
}

void HeadUserImageByIndexParams::setTagNull() {
	m_tag.clear();
}


const qint32 &HeadUserImageByIndexParams::unplayedCount() const {
	return m_unplayedCount.value();
}

void HeadUserImageByIndexParams::setUnplayedCount(qint32 newUnplayedCount)  {
	m_unplayedCount = newUnplayedCount;
}

bool HeadUserImageByIndexParams::unplayedCountNull() const {
	// Nullable: true
	// Type Nullable: false
	

	return !m_unplayedCount.has_value();
}

void HeadUserImageByIndexParams::setUnplayedCountNull() {
	m_unplayedCount = std::nullopt;
}


const qint32 &HeadUserImageByIndexParams::width() const {
	return m_width.value();
}

void HeadUserImageByIndexParams::setWidth(qint32 newWidth)  {
	m_width = newWidth;
}

bool HeadUserImageByIndexParams::widthNull() const {
	// Nullable: true
	// Type Nullable: false
	

	return !m_width.has_value();
}

void HeadUserImageByIndexParams::setWidthNull() {
	m_width = std::nullopt;
}




// HeadVideoStreamParams

const QString &HeadVideoStreamParams::itemId() const {
	return m_itemId;
}

void HeadVideoStreamParams::setItemId(QString newItemId) {
	m_itemId = newItemId;
}


const bool &HeadVideoStreamParams::allowAudioStreamCopy() const {
	return m_allowAudioStreamCopy.value();
}

void HeadVideoStreamParams::setAllowAudioStreamCopy(bool newAllowAudioStreamCopy)  {
	m_allowAudioStreamCopy = newAllowAudioStreamCopy;
}

bool HeadVideoStreamParams::allowAudioStreamCopyNull() const {
	// Nullable: true
	// Type Nullable: false
	

	return !m_allowAudioStreamCopy.has_value();
}

void HeadVideoStreamParams::setAllowAudioStreamCopyNull() {
	m_allowAudioStreamCopy = std::nullopt;
}


const bool &HeadVideoStreamParams::allowVideoStreamCopy() const {
	return m_allowVideoStreamCopy.value();
}

void HeadVideoStreamParams::setAllowVideoStreamCopy(bool newAllowVideoStreamCopy)  {
	m_allowVideoStreamCopy = newAllowVideoStreamCopy;
}

bool HeadVideoStreamParams::allowVideoStreamCopyNull() const {
	// Nullable: true
	// Type Nullable: false
	

	return !m_allowVideoStreamCopy.has_value();
}

void HeadVideoStreamParams::setAllowVideoStreamCopyNull() {
	m_allowVideoStreamCopy = std::nullopt;
}


const qint32 &HeadVideoStreamParams::audioBitRate() const {
	return m_audioBitRate.value();
}

void HeadVideoStreamParams::setAudioBitRate(qint32 newAudioBitRate)  {
	m_audioBitRate = newAudioBitRate;
}

bool HeadVideoStreamParams::audioBitRateNull() const {
	// Nullable: true
	// Type Nullable: false
	

	return !m_audioBitRate.has_value();
}

void HeadVideoStreamParams::setAudioBitRateNull() {
	m_audioBitRate = std::nullopt;
}


const qint32 &HeadVideoStreamParams::audioChannels() const {
	return m_audioChannels.value();
}

void HeadVideoStreamParams::setAudioChannels(qint32 newAudioChannels)  {
	m_audioChannels = newAudioChannels;
}

bool HeadVideoStreamParams::audioChannelsNull() const {
	// Nullable: true
	// Type Nullable: false
	

	return !m_audioChannels.has_value();
}

void HeadVideoStreamParams::setAudioChannelsNull() {
	m_audioChannels = std::nullopt;
}


const QString &HeadVideoStreamParams::audioCodec() const {
	return m_audioCodec;
}

void HeadVideoStreamParams::setAudioCodec(QString newAudioCodec)  {
	m_audioCodec = newAudioCodec;
}

bool HeadVideoStreamParams::audioCodecNull() const {
	// Nullable: true
	// Type Nullable: true
	

	return m_audioCodec.isNull();
}

void HeadVideoStreamParams::setAudioCodecNull() {
	m_audioCodec.clear();
}


const qint32 &HeadVideoStreamParams::audioSampleRate() const {
	return m_audioSampleRate.value();
}

void HeadVideoStreamParams::setAudioSampleRate(qint32 newAudioSampleRate)  {
	m_audioSampleRate = newAudioSampleRate;
}

bool HeadVideoStreamParams::audioSampleRateNull() const {
	// Nullable: true
	// Type Nullable: false
	

	return !m_audioSampleRate.has_value();
}

void HeadVideoStreamParams::setAudioSampleRateNull() {
	m_audioSampleRate = std::nullopt;
}


const qint32 &HeadVideoStreamParams::audioStreamIndex() const {
	return m_audioStreamIndex.value();
}

void HeadVideoStreamParams::setAudioStreamIndex(qint32 newAudioStreamIndex)  {
	m_audioStreamIndex = newAudioStreamIndex;
}

bool HeadVideoStreamParams::audioStreamIndexNull() const {
	// Nullable: true
	// Type Nullable: false
	

	return !m_audioStreamIndex.has_value();
}

void HeadVideoStreamParams::setAudioStreamIndexNull() {
	m_audioStreamIndex = std::nullopt;
}


const bool &HeadVideoStreamParams::breakOnNonKeyFrames() const {
	return m_breakOnNonKeyFrames.value();
}

void HeadVideoStreamParams::setBreakOnNonKeyFrames(bool newBreakOnNonKeyFrames)  {
	m_breakOnNonKeyFrames = newBreakOnNonKeyFrames;
}

bool HeadVideoStreamParams::breakOnNonKeyFramesNull() const {
	// Nullable: true
	// Type Nullable: false
	

	return !m_breakOnNonKeyFrames.has_value();
}

void HeadVideoStreamParams::setBreakOnNonKeyFramesNull() {
	m_breakOnNonKeyFrames = std::nullopt;
}


const QString &HeadVideoStreamParams::container() const {
	return m_container;
}

void HeadVideoStreamParams::setContainer(QString newContainer)  {
	m_container = newContainer;
}

bool HeadVideoStreamParams::containerNull() const {
	// Nullable: true
	// Type Nullable: true
	

	return m_container.isNull();
}

void HeadVideoStreamParams::setContainerNull() {
	m_container.clear();
}


const EncodingContext &HeadVideoStreamParams::context() const {
	return m_context;
}

void HeadVideoStreamParams::setContext(EncodingContext newContext)  {
	m_context = newContext;
}

bool HeadVideoStreamParams::contextNull() const {
	// Nullable: true
	// Type Nullable: true
	

	return m_context== EncodingContext::EnumNotSet;
}

void HeadVideoStreamParams::setContextNull() {
	m_context= EncodingContext::EnumNotSet;
}


const bool &HeadVideoStreamParams::copyTimestamps() const {
	return m_copyTimestamps.value();
}

void HeadVideoStreamParams::setCopyTimestamps(bool newCopyTimestamps)  {
	m_copyTimestamps = newCopyTimestamps;
}

bool HeadVideoStreamParams::copyTimestampsNull() const {
	// Nullable: true
	// Type Nullable: false
	

	return !m_copyTimestamps.has_value();
}

void HeadVideoStreamParams::setCopyTimestampsNull() {
	m_copyTimestamps = std::nullopt;
}


const qint32 &HeadVideoStreamParams::cpuCoreLimit() const {
	return m_cpuCoreLimit.value();
}

void HeadVideoStreamParams::setCpuCoreLimit(qint32 newCpuCoreLimit)  {
	m_cpuCoreLimit = newCpuCoreLimit;
}

bool HeadVideoStreamParams::cpuCoreLimitNull() const {
	// Nullable: true
	// Type Nullable: false
	

	return !m_cpuCoreLimit.has_value();
}

void HeadVideoStreamParams::setCpuCoreLimitNull() {
	m_cpuCoreLimit = std::nullopt;
}


const bool &HeadVideoStreamParams::deInterlace() const {
	return m_deInterlace.value();
}

void HeadVideoStreamParams::setDeInterlace(bool newDeInterlace)  {
	m_deInterlace = newDeInterlace;
}

bool HeadVideoStreamParams::deInterlaceNull() const {
	// Nullable: true
	// Type Nullable: false
	

	return !m_deInterlace.has_value();
}

void HeadVideoStreamParams::setDeInterlaceNull() {
	m_deInterlace = std::nullopt;
}


const QString &HeadVideoStreamParams::deviceId() const {
	return m_deviceId;
}

void HeadVideoStreamParams::setDeviceId(QString newDeviceId)  {
	m_deviceId = newDeviceId;
}

bool HeadVideoStreamParams::deviceIdNull() const {
	// Nullable: true
	// Type Nullable: true
	

	return m_deviceId.isNull();
}

void HeadVideoStreamParams::setDeviceIdNull() {
	m_deviceId.clear();
}


const QString &HeadVideoStreamParams::deviceProfileId() const {
	return m_deviceProfileId;
}

void HeadVideoStreamParams::setDeviceProfileId(QString newDeviceProfileId)  {
	m_deviceProfileId = newDeviceProfileId;
}

bool HeadVideoStreamParams::deviceProfileIdNull() const {
	// Nullable: true
	// Type Nullable: true
	

	return m_deviceProfileId.isNull();
}

void HeadVideoStreamParams::setDeviceProfileIdNull() {
	m_deviceProfileId.clear();
}


const bool &HeadVideoStreamParams::enableAutoStreamCopy() const {
	return m_enableAutoStreamCopy.value();
}

void HeadVideoStreamParams::setEnableAutoStreamCopy(bool newEnableAutoStreamCopy)  {
	m_enableAutoStreamCopy = newEnableAutoStreamCopy;
}

bool HeadVideoStreamParams::enableAutoStreamCopyNull() const {
	// Nullable: true
	// Type Nullable: false
	

	return !m_enableAutoStreamCopy.has_value();
}

void HeadVideoStreamParams::setEnableAutoStreamCopyNull() {
	m_enableAutoStreamCopy = std::nullopt;
}


const bool &HeadVideoStreamParams::enableMpegtsM2TsMode() const {
	return m_enableMpegtsM2TsMode.value();
}

void HeadVideoStreamParams::setEnableMpegtsM2TsMode(bool newEnableMpegtsM2TsMode)  {
	m_enableMpegtsM2TsMode = newEnableMpegtsM2TsMode;
}

bool HeadVideoStreamParams::enableMpegtsM2TsModeNull() const {
	// Nullable: true
	// Type Nullable: false
	

	return !m_enableMpegtsM2TsMode.has_value();
}

void HeadVideoStreamParams::setEnableMpegtsM2TsModeNull() {
	m_enableMpegtsM2TsMode = std::nullopt;
}


const float &HeadVideoStreamParams::framerate() const {
	return m_framerate.value();
}

void HeadVideoStreamParams::setFramerate(float newFramerate)  {
	m_framerate = newFramerate;
}

bool HeadVideoStreamParams::framerateNull() const {
	// Nullable: true
	// Type Nullable: false
	

	return !m_framerate.has_value();
}

void HeadVideoStreamParams::setFramerateNull() {
	m_framerate = std::nullopt;
}


const qint32 &HeadVideoStreamParams::height() const {
	return m_height.value();
}

void HeadVideoStreamParams::setHeight(qint32 newHeight)  {
	m_height = newHeight;
}

bool HeadVideoStreamParams::heightNull() const {
	// Nullable: true
	// Type Nullable: false
	

	return !m_height.has_value();
}

void HeadVideoStreamParams::setHeightNull() {
	m_height = std::nullopt;
}


const QString &HeadVideoStreamParams::level() const {
	return m_level;
}

void HeadVideoStreamParams::setLevel(QString newLevel)  {
	m_level = newLevel;
}

bool HeadVideoStreamParams::levelNull() const {
	// Nullable: true
	// Type Nullable: true
	

	return m_level.isNull();
}

void HeadVideoStreamParams::setLevelNull() {
	m_level.clear();
}


const QString &HeadVideoStreamParams::liveStreamId() const {
	return m_liveStreamId;
}

void HeadVideoStreamParams::setLiveStreamId(QString newLiveStreamId)  {
	m_liveStreamId = newLiveStreamId;
}

bool HeadVideoStreamParams::liveStreamIdNull() const {
	// Nullable: true
	// Type Nullable: true
	

	return m_liveStreamId.isNull();
}

void HeadVideoStreamParams::setLiveStreamIdNull() {
	m_liveStreamId.clear();
}


const qint32 &HeadVideoStreamParams::maxAudioBitDepth() const {
	return m_maxAudioBitDepth.value();
}

void HeadVideoStreamParams::setMaxAudioBitDepth(qint32 newMaxAudioBitDepth)  {
	m_maxAudioBitDepth = newMaxAudioBitDepth;
}

bool HeadVideoStreamParams::maxAudioBitDepthNull() const {
	// Nullable: true
	// Type Nullable: false
	

	return !m_maxAudioBitDepth.has_value();
}

void HeadVideoStreamParams::setMaxAudioBitDepthNull() {
	m_maxAudioBitDepth = std::nullopt;
}


const qint32 &HeadVideoStreamParams::maxAudioChannels() const {
	return m_maxAudioChannels.value();
}

void HeadVideoStreamParams::setMaxAudioChannels(qint32 newMaxAudioChannels)  {
	m_maxAudioChannels = newMaxAudioChannels;
}

bool HeadVideoStreamParams::maxAudioChannelsNull() const {
	// Nullable: true
	// Type Nullable: false
	

	return !m_maxAudioChannels.has_value();
}

void HeadVideoStreamParams::setMaxAudioChannelsNull() {
	m_maxAudioChannels = std::nullopt;
}


const float &HeadVideoStreamParams::maxFramerate() const {
	return m_maxFramerate.value();
}

void HeadVideoStreamParams::setMaxFramerate(float newMaxFramerate)  {
	m_maxFramerate = newMaxFramerate;
}

bool HeadVideoStreamParams::maxFramerateNull() const {
	// Nullable: true
	// Type Nullable: false
	

	return !m_maxFramerate.has_value();
}

void HeadVideoStreamParams::setMaxFramerateNull() {
	m_maxFramerate = std::nullopt;
}


const qint32 &HeadVideoStreamParams::maxRefFrames() const {
	return m_maxRefFrames.value();
}

void HeadVideoStreamParams::setMaxRefFrames(qint32 newMaxRefFrames)  {
	m_maxRefFrames = newMaxRefFrames;
}

bool HeadVideoStreamParams::maxRefFramesNull() const {
	// Nullable: true
	// Type Nullable: false
	

	return !m_maxRefFrames.has_value();
}

void HeadVideoStreamParams::setMaxRefFramesNull() {
	m_maxRefFrames = std::nullopt;
}


const qint32 &HeadVideoStreamParams::maxVideoBitDepth() const {
	return m_maxVideoBitDepth.value();
}

void HeadVideoStreamParams::setMaxVideoBitDepth(qint32 newMaxVideoBitDepth)  {
	m_maxVideoBitDepth = newMaxVideoBitDepth;
}

bool HeadVideoStreamParams::maxVideoBitDepthNull() const {
	// Nullable: true
	// Type Nullable: false
	

	return !m_maxVideoBitDepth.has_value();
}

void HeadVideoStreamParams::setMaxVideoBitDepthNull() {
	m_maxVideoBitDepth = std::nullopt;
}


const QString &HeadVideoStreamParams::mediaSourceId() const {
	return m_mediaSourceId;
}

void HeadVideoStreamParams::setMediaSourceId(QString newMediaSourceId)  {
	m_mediaSourceId = newMediaSourceId;
}

bool HeadVideoStreamParams::mediaSourceIdNull() const {
	// Nullable: true
	// Type Nullable: true
	

	return m_mediaSourceId.isNull();
}

void HeadVideoStreamParams::setMediaSourceIdNull() {
	m_mediaSourceId.clear();
}


const qint32 &HeadVideoStreamParams::minSegments() const {
	return m_minSegments.value();
}

void HeadVideoStreamParams::setMinSegments(qint32 newMinSegments)  {
	m_minSegments = newMinSegments;
}

bool HeadVideoStreamParams::minSegmentsNull() const {
	// Nullable: true
	// Type Nullable: false
	

	return !m_minSegments.has_value();
}

void HeadVideoStreamParams::setMinSegmentsNull() {
	m_minSegments = std::nullopt;
}


const QString &HeadVideoStreamParams::params() const {
	return m_params;
}

void HeadVideoStreamParams::setParams(QString newParams)  {
	m_params = newParams;
}

bool HeadVideoStreamParams::paramsNull() const {
	// Nullable: true
	// Type Nullable: true
	

	return m_params.isNull();
}

void HeadVideoStreamParams::setParamsNull() {
	m_params.clear();
}


const QString &HeadVideoStreamParams::playSessionId() const {
	return m_playSessionId;
}

void HeadVideoStreamParams::setPlaySessionId(QString newPlaySessionId)  {
	m_playSessionId = newPlaySessionId;
}

bool HeadVideoStreamParams::playSessionIdNull() const {
	// Nullable: true
	// Type Nullable: true
	

	return m_playSessionId.isNull();
}

void HeadVideoStreamParams::setPlaySessionIdNull() {
	m_playSessionId.clear();
}


const QString &HeadVideoStreamParams::profile() const {
	return m_profile;
}

void HeadVideoStreamParams::setProfile(QString newProfile)  {
	m_profile = newProfile;
}

bool HeadVideoStreamParams::profileNull() const {
	// Nullable: true
	// Type Nullable: true
	

	return m_profile.isNull();
}

void HeadVideoStreamParams::setProfileNull() {
	m_profile.clear();
}


const bool &HeadVideoStreamParams::requireAvc() const {
	return m_requireAvc.value();
}

void HeadVideoStreamParams::setRequireAvc(bool newRequireAvc)  {
	m_requireAvc = newRequireAvc;
}

bool HeadVideoStreamParams::requireAvcNull() const {
	// Nullable: true
	// Type Nullable: false
	

	return !m_requireAvc.has_value();
}

void HeadVideoStreamParams::setRequireAvcNull() {
	m_requireAvc = std::nullopt;
}


const bool &HeadVideoStreamParams::requireNonAnamorphic() const {
	return m_requireNonAnamorphic.value();
}

void HeadVideoStreamParams::setRequireNonAnamorphic(bool newRequireNonAnamorphic)  {
	m_requireNonAnamorphic = newRequireNonAnamorphic;
}

bool HeadVideoStreamParams::requireNonAnamorphicNull() const {
	// Nullable: true
	// Type Nullable: false
	

	return !m_requireNonAnamorphic.has_value();
}

void HeadVideoStreamParams::setRequireNonAnamorphicNull() {
	m_requireNonAnamorphic = std::nullopt;
}


const QString &HeadVideoStreamParams::segmentContainer() const {
	return m_segmentContainer;
}

void HeadVideoStreamParams::setSegmentContainer(QString newSegmentContainer)  {
	m_segmentContainer = newSegmentContainer;
}

bool HeadVideoStreamParams::segmentContainerNull() const {
	// Nullable: true
	// Type Nullable: true
	

	return m_segmentContainer.isNull();
}

void HeadVideoStreamParams::setSegmentContainerNull() {
	m_segmentContainer.clear();
}


const qint32 &HeadVideoStreamParams::segmentLength() const {
	return m_segmentLength.value();
}

void HeadVideoStreamParams::setSegmentLength(qint32 newSegmentLength)  {
	m_segmentLength = newSegmentLength;
}

bool HeadVideoStreamParams::segmentLengthNull() const {
	// Nullable: true
	// Type Nullable: false
	

	return !m_segmentLength.has_value();
}

void HeadVideoStreamParams::setSegmentLengthNull() {
	m_segmentLength = std::nullopt;
}


const qint64 &HeadVideoStreamParams::startTimeTicks() const {
	return m_startTimeTicks.value();
}

void HeadVideoStreamParams::setStartTimeTicks(qint64 newStartTimeTicks)  {
	m_startTimeTicks = newStartTimeTicks;
}

bool HeadVideoStreamParams::startTimeTicksNull() const {
	// Nullable: true
	// Type Nullable: false
	

	return !m_startTimeTicks.has_value();
}

void HeadVideoStreamParams::setStartTimeTicksNull() {
	m_startTimeTicks = std::nullopt;
}


const bool &HeadVideoStreamParams::staticStreaming() const {
	return m_staticStreaming.value();
}

void HeadVideoStreamParams::setStaticStreaming(bool newStaticStreaming)  {
	m_staticStreaming = newStaticStreaming;
}

bool HeadVideoStreamParams::staticStreamingNull() const {
	// Nullable: true
	// Type Nullable: false
	

	return !m_staticStreaming.has_value();
}

void HeadVideoStreamParams::setStaticStreamingNull() {
	m_staticStreaming = std::nullopt;
}


const QJsonObject &HeadVideoStreamParams::streamOptions() const {
	return m_streamOptions;
}

void HeadVideoStreamParams::setStreamOptions(QJsonObject newStreamOptions)  {
	m_streamOptions = newStreamOptions;
}

bool HeadVideoStreamParams::streamOptionsNull() const {
	// Nullable: true
	// Type Nullable: true
	

	return m_streamOptions.isEmpty();
}

void HeadVideoStreamParams::setStreamOptionsNull() {
	m_streamOptions= QJsonObject();
}


const QString &HeadVideoStreamParams::subtitleCodec() const {
	return m_subtitleCodec;
}

void HeadVideoStreamParams::setSubtitleCodec(QString newSubtitleCodec)  {
	m_subtitleCodec = newSubtitleCodec;
}

bool HeadVideoStreamParams::subtitleCodecNull() const {
	// Nullable: true
	// Type Nullable: true
	

	return m_subtitleCodec.isNull();
}

void HeadVideoStreamParams::setSubtitleCodecNull() {
	m_subtitleCodec.clear();
}


const SubtitleDeliveryMethod &HeadVideoStreamParams::subtitleMethod() const {
	return m_subtitleMethod;
}

void HeadVideoStreamParams::setSubtitleMethod(SubtitleDeliveryMethod newSubtitleMethod)  {
	m_subtitleMethod = newSubtitleMethod;
}

bool HeadVideoStreamParams::subtitleMethodNull() const {
	// Nullable: true
	// Type Nullable: true
	

	return m_subtitleMethod== SubtitleDeliveryMethod::EnumNotSet;
}

void HeadVideoStreamParams::setSubtitleMethodNull() {
	m_subtitleMethod= SubtitleDeliveryMethod::EnumNotSet;
}


const qint32 &HeadVideoStreamParams::subtitleStreamIndex() const {
	return m_subtitleStreamIndex.value();
}

void HeadVideoStreamParams::setSubtitleStreamIndex(qint32 newSubtitleStreamIndex)  {
	m_subtitleStreamIndex = newSubtitleStreamIndex;
}

bool HeadVideoStreamParams::subtitleStreamIndexNull() const {
	// Nullable: true
	// Type Nullable: false
	

	return !m_subtitleStreamIndex.has_value();
}

void HeadVideoStreamParams::setSubtitleStreamIndexNull() {
	m_subtitleStreamIndex = std::nullopt;
}


const QString &HeadVideoStreamParams::tag() const {
	return m_tag;
}

void HeadVideoStreamParams::setTag(QString newTag)  {
	m_tag = newTag;
}

bool HeadVideoStreamParams::tagNull() const {
	// Nullable: true
	// Type Nullable: true
	

	return m_tag.isNull();
}

void HeadVideoStreamParams::setTagNull() {
	m_tag.clear();
}


const QString &HeadVideoStreamParams::transcodeReasons() const {
	return m_transcodeReasons;
}

void HeadVideoStreamParams::setTranscodeReasons(QString newTranscodeReasons)  {
	m_transcodeReasons = newTranscodeReasons;
}

bool HeadVideoStreamParams::transcodeReasonsNull() const {
	// Nullable: true
	// Type Nullable: true
	

	return m_transcodeReasons.isNull();
}

void HeadVideoStreamParams::setTranscodeReasonsNull() {
	m_transcodeReasons.clear();
}


const qint32 &HeadVideoStreamParams::transcodingMaxAudioChannels() const {
	return m_transcodingMaxAudioChannels.value();
}

void HeadVideoStreamParams::setTranscodingMaxAudioChannels(qint32 newTranscodingMaxAudioChannels)  {
	m_transcodingMaxAudioChannels = newTranscodingMaxAudioChannels;
}

bool HeadVideoStreamParams::transcodingMaxAudioChannelsNull() const {
	// Nullable: true
	// Type Nullable: false
	

	return !m_transcodingMaxAudioChannels.has_value();
}

void HeadVideoStreamParams::setTranscodingMaxAudioChannelsNull() {
	m_transcodingMaxAudioChannels = std::nullopt;
}


const qint32 &HeadVideoStreamParams::videoBitRate() const {
	return m_videoBitRate.value();
}

void HeadVideoStreamParams::setVideoBitRate(qint32 newVideoBitRate)  {
	m_videoBitRate = newVideoBitRate;
}

bool HeadVideoStreamParams::videoBitRateNull() const {
	// Nullable: true
	// Type Nullable: false
	

	return !m_videoBitRate.has_value();
}

void HeadVideoStreamParams::setVideoBitRateNull() {
	m_videoBitRate = std::nullopt;
}


const QString &HeadVideoStreamParams::videoCodec() const {
	return m_videoCodec;
}

void HeadVideoStreamParams::setVideoCodec(QString newVideoCodec)  {
	m_videoCodec = newVideoCodec;
}

bool HeadVideoStreamParams::videoCodecNull() const {
	// Nullable: true
	// Type Nullable: true
	

	return m_videoCodec.isNull();
}

void HeadVideoStreamParams::setVideoCodecNull() {
	m_videoCodec.clear();
}


const qint32 &HeadVideoStreamParams::videoStreamIndex() const {
	return m_videoStreamIndex.value();
}

void HeadVideoStreamParams::setVideoStreamIndex(qint32 newVideoStreamIndex)  {
	m_videoStreamIndex = newVideoStreamIndex;
}

bool HeadVideoStreamParams::videoStreamIndexNull() const {
	// Nullable: true
	// Type Nullable: false
	

	return !m_videoStreamIndex.has_value();
}

void HeadVideoStreamParams::setVideoStreamIndexNull() {
	m_videoStreamIndex = std::nullopt;
}


const qint32 &HeadVideoStreamParams::width() const {
	return m_width.value();
}

void HeadVideoStreamParams::setWidth(qint32 newWidth)  {
	m_width = newWidth;
}

bool HeadVideoStreamParams::widthNull() const {
	// Nullable: true
	// Type Nullable: false
	

	return !m_width.has_value();
}

void HeadVideoStreamParams::setWidthNull() {
	m_width = std::nullopt;
}




// HeadVideoStreamByContainerParams

const QString &HeadVideoStreamByContainerParams::container() const {
	return m_container;
}

void HeadVideoStreamByContainerParams::setContainer(QString newContainer) {
	m_container = newContainer;
}


const QString &HeadVideoStreamByContainerParams::itemId() const {
	return m_itemId;
}

void HeadVideoStreamByContainerParams::setItemId(QString newItemId) {
	m_itemId = newItemId;
}


const QString &HeadVideoStreamByContainerParams::stream() const {
	return m_stream;
}

void HeadVideoStreamByContainerParams::setStream(QString newStream) {
	m_stream = newStream;
}


const bool &HeadVideoStreamByContainerParams::allowAudioStreamCopy() const {
	return m_allowAudioStreamCopy.value();
}

void HeadVideoStreamByContainerParams::setAllowAudioStreamCopy(bool newAllowAudioStreamCopy)  {
	m_allowAudioStreamCopy = newAllowAudioStreamCopy;
}

bool HeadVideoStreamByContainerParams::allowAudioStreamCopyNull() const {
	// Nullable: true
	// Type Nullable: false
	

	return !m_allowAudioStreamCopy.has_value();
}

void HeadVideoStreamByContainerParams::setAllowAudioStreamCopyNull() {
	m_allowAudioStreamCopy = std::nullopt;
}


const bool &HeadVideoStreamByContainerParams::allowVideoStreamCopy() const {
	return m_allowVideoStreamCopy.value();
}

void HeadVideoStreamByContainerParams::setAllowVideoStreamCopy(bool newAllowVideoStreamCopy)  {
	m_allowVideoStreamCopy = newAllowVideoStreamCopy;
}

bool HeadVideoStreamByContainerParams::allowVideoStreamCopyNull() const {
	// Nullable: true
	// Type Nullable: false
	

	return !m_allowVideoStreamCopy.has_value();
}

void HeadVideoStreamByContainerParams::setAllowVideoStreamCopyNull() {
	m_allowVideoStreamCopy = std::nullopt;
}


const qint32 &HeadVideoStreamByContainerParams::audioBitRate() const {
	return m_audioBitRate.value();
}

void HeadVideoStreamByContainerParams::setAudioBitRate(qint32 newAudioBitRate)  {
	m_audioBitRate = newAudioBitRate;
}

bool HeadVideoStreamByContainerParams::audioBitRateNull() const {
	// Nullable: true
	// Type Nullable: false
	

	return !m_audioBitRate.has_value();
}

void HeadVideoStreamByContainerParams::setAudioBitRateNull() {
	m_audioBitRate = std::nullopt;
}


const qint32 &HeadVideoStreamByContainerParams::audioChannels() const {
	return m_audioChannels.value();
}

void HeadVideoStreamByContainerParams::setAudioChannels(qint32 newAudioChannels)  {
	m_audioChannels = newAudioChannels;
}

bool HeadVideoStreamByContainerParams::audioChannelsNull() const {
	// Nullable: true
	// Type Nullable: false
	

	return !m_audioChannels.has_value();
}

void HeadVideoStreamByContainerParams::setAudioChannelsNull() {
	m_audioChannels = std::nullopt;
}


const QString &HeadVideoStreamByContainerParams::audioCodec() const {
	return m_audioCodec;
}

void HeadVideoStreamByContainerParams::setAudioCodec(QString newAudioCodec)  {
	m_audioCodec = newAudioCodec;
}

bool HeadVideoStreamByContainerParams::audioCodecNull() const {
	// Nullable: true
	// Type Nullable: true
	

	return m_audioCodec.isNull();
}

void HeadVideoStreamByContainerParams::setAudioCodecNull() {
	m_audioCodec.clear();
}


const qint32 &HeadVideoStreamByContainerParams::audioSampleRate() const {
	return m_audioSampleRate.value();
}

void HeadVideoStreamByContainerParams::setAudioSampleRate(qint32 newAudioSampleRate)  {
	m_audioSampleRate = newAudioSampleRate;
}

bool HeadVideoStreamByContainerParams::audioSampleRateNull() const {
	// Nullable: true
	// Type Nullable: false
	

	return !m_audioSampleRate.has_value();
}

void HeadVideoStreamByContainerParams::setAudioSampleRateNull() {
	m_audioSampleRate = std::nullopt;
}


const qint32 &HeadVideoStreamByContainerParams::audioStreamIndex() const {
	return m_audioStreamIndex.value();
}

void HeadVideoStreamByContainerParams::setAudioStreamIndex(qint32 newAudioStreamIndex)  {
	m_audioStreamIndex = newAudioStreamIndex;
}

bool HeadVideoStreamByContainerParams::audioStreamIndexNull() const {
	// Nullable: true
	// Type Nullable: false
	

	return !m_audioStreamIndex.has_value();
}

void HeadVideoStreamByContainerParams::setAudioStreamIndexNull() {
	m_audioStreamIndex = std::nullopt;
}


const bool &HeadVideoStreamByContainerParams::breakOnNonKeyFrames() const {
	return m_breakOnNonKeyFrames.value();
}

void HeadVideoStreamByContainerParams::setBreakOnNonKeyFrames(bool newBreakOnNonKeyFrames)  {
	m_breakOnNonKeyFrames = newBreakOnNonKeyFrames;
}

bool HeadVideoStreamByContainerParams::breakOnNonKeyFramesNull() const {
	// Nullable: true
	// Type Nullable: false
	

	return !m_breakOnNonKeyFrames.has_value();
}

void HeadVideoStreamByContainerParams::setBreakOnNonKeyFramesNull() {
	m_breakOnNonKeyFrames = std::nullopt;
}


const EncodingContext &HeadVideoStreamByContainerParams::context() const {
	return m_context;
}

void HeadVideoStreamByContainerParams::setContext(EncodingContext newContext)  {
	m_context = newContext;
}

bool HeadVideoStreamByContainerParams::contextNull() const {
	// Nullable: true
	// Type Nullable: true
	

	return m_context== EncodingContext::EnumNotSet;
}

void HeadVideoStreamByContainerParams::setContextNull() {
	m_context= EncodingContext::EnumNotSet;
}


const bool &HeadVideoStreamByContainerParams::copyTimestamps() const {
	return m_copyTimestamps.value();
}

void HeadVideoStreamByContainerParams::setCopyTimestamps(bool newCopyTimestamps)  {
	m_copyTimestamps = newCopyTimestamps;
}

bool HeadVideoStreamByContainerParams::copyTimestampsNull() const {
	// Nullable: true
	// Type Nullable: false
	

	return !m_copyTimestamps.has_value();
}

void HeadVideoStreamByContainerParams::setCopyTimestampsNull() {
	m_copyTimestamps = std::nullopt;
}


const qint32 &HeadVideoStreamByContainerParams::cpuCoreLimit() const {
	return m_cpuCoreLimit.value();
}

void HeadVideoStreamByContainerParams::setCpuCoreLimit(qint32 newCpuCoreLimit)  {
	m_cpuCoreLimit = newCpuCoreLimit;
}

bool HeadVideoStreamByContainerParams::cpuCoreLimitNull() const {
	// Nullable: true
	// Type Nullable: false
	

	return !m_cpuCoreLimit.has_value();
}

void HeadVideoStreamByContainerParams::setCpuCoreLimitNull() {
	m_cpuCoreLimit = std::nullopt;
}


const bool &HeadVideoStreamByContainerParams::deInterlace() const {
	return m_deInterlace.value();
}

void HeadVideoStreamByContainerParams::setDeInterlace(bool newDeInterlace)  {
	m_deInterlace = newDeInterlace;
}

bool HeadVideoStreamByContainerParams::deInterlaceNull() const {
	// Nullable: true
	// Type Nullable: false
	

	return !m_deInterlace.has_value();
}

void HeadVideoStreamByContainerParams::setDeInterlaceNull() {
	m_deInterlace = std::nullopt;
}


const QString &HeadVideoStreamByContainerParams::deviceId() const {
	return m_deviceId;
}

void HeadVideoStreamByContainerParams::setDeviceId(QString newDeviceId)  {
	m_deviceId = newDeviceId;
}

bool HeadVideoStreamByContainerParams::deviceIdNull() const {
	// Nullable: true
	// Type Nullable: true
	

	return m_deviceId.isNull();
}

void HeadVideoStreamByContainerParams::setDeviceIdNull() {
	m_deviceId.clear();
}


const QString &HeadVideoStreamByContainerParams::deviceProfileId() const {
	return m_deviceProfileId;
}

void HeadVideoStreamByContainerParams::setDeviceProfileId(QString newDeviceProfileId)  {
	m_deviceProfileId = newDeviceProfileId;
}

bool HeadVideoStreamByContainerParams::deviceProfileIdNull() const {
	// Nullable: true
	// Type Nullable: true
	

	return m_deviceProfileId.isNull();
}

void HeadVideoStreamByContainerParams::setDeviceProfileIdNull() {
	m_deviceProfileId.clear();
}


const bool &HeadVideoStreamByContainerParams::enableAutoStreamCopy() const {
	return m_enableAutoStreamCopy.value();
}

void HeadVideoStreamByContainerParams::setEnableAutoStreamCopy(bool newEnableAutoStreamCopy)  {
	m_enableAutoStreamCopy = newEnableAutoStreamCopy;
}

bool HeadVideoStreamByContainerParams::enableAutoStreamCopyNull() const {
	// Nullable: true
	// Type Nullable: false
	

	return !m_enableAutoStreamCopy.has_value();
}

void HeadVideoStreamByContainerParams::setEnableAutoStreamCopyNull() {
	m_enableAutoStreamCopy = std::nullopt;
}


const bool &HeadVideoStreamByContainerParams::enableMpegtsM2TsMode() const {
	return m_enableMpegtsM2TsMode.value();
}

void HeadVideoStreamByContainerParams::setEnableMpegtsM2TsMode(bool newEnableMpegtsM2TsMode)  {
	m_enableMpegtsM2TsMode = newEnableMpegtsM2TsMode;
}

bool HeadVideoStreamByContainerParams::enableMpegtsM2TsModeNull() const {
	// Nullable: true
	// Type Nullable: false
	

	return !m_enableMpegtsM2TsMode.has_value();
}

void HeadVideoStreamByContainerParams::setEnableMpegtsM2TsModeNull() {
	m_enableMpegtsM2TsMode = std::nullopt;
}


const float &HeadVideoStreamByContainerParams::framerate() const {
	return m_framerate.value();
}

void HeadVideoStreamByContainerParams::setFramerate(float newFramerate)  {
	m_framerate = newFramerate;
}

bool HeadVideoStreamByContainerParams::framerateNull() const {
	// Nullable: true
	// Type Nullable: false
	

	return !m_framerate.has_value();
}

void HeadVideoStreamByContainerParams::setFramerateNull() {
	m_framerate = std::nullopt;
}


const qint32 &HeadVideoStreamByContainerParams::height() const {
	return m_height.value();
}

void HeadVideoStreamByContainerParams::setHeight(qint32 newHeight)  {
	m_height = newHeight;
}

bool HeadVideoStreamByContainerParams::heightNull() const {
	// Nullable: true
	// Type Nullable: false
	

	return !m_height.has_value();
}

void HeadVideoStreamByContainerParams::setHeightNull() {
	m_height = std::nullopt;
}


const QString &HeadVideoStreamByContainerParams::level() const {
	return m_level;
}

void HeadVideoStreamByContainerParams::setLevel(QString newLevel)  {
	m_level = newLevel;
}

bool HeadVideoStreamByContainerParams::levelNull() const {
	// Nullable: true
	// Type Nullable: true
	

	return m_level.isNull();
}

void HeadVideoStreamByContainerParams::setLevelNull() {
	m_level.clear();
}


const QString &HeadVideoStreamByContainerParams::liveStreamId() const {
	return m_liveStreamId;
}

void HeadVideoStreamByContainerParams::setLiveStreamId(QString newLiveStreamId)  {
	m_liveStreamId = newLiveStreamId;
}

bool HeadVideoStreamByContainerParams::liveStreamIdNull() const {
	// Nullable: true
	// Type Nullable: true
	

	return m_liveStreamId.isNull();
}

void HeadVideoStreamByContainerParams::setLiveStreamIdNull() {
	m_liveStreamId.clear();
}


const qint32 &HeadVideoStreamByContainerParams::maxAudioBitDepth() const {
	return m_maxAudioBitDepth.value();
}

void HeadVideoStreamByContainerParams::setMaxAudioBitDepth(qint32 newMaxAudioBitDepth)  {
	m_maxAudioBitDepth = newMaxAudioBitDepth;
}

bool HeadVideoStreamByContainerParams::maxAudioBitDepthNull() const {
	// Nullable: true
	// Type Nullable: false
	

	return !m_maxAudioBitDepth.has_value();
}

void HeadVideoStreamByContainerParams::setMaxAudioBitDepthNull() {
	m_maxAudioBitDepth = std::nullopt;
}


const qint32 &HeadVideoStreamByContainerParams::maxAudioChannels() const {
	return m_maxAudioChannels.value();
}

void HeadVideoStreamByContainerParams::setMaxAudioChannels(qint32 newMaxAudioChannels)  {
	m_maxAudioChannels = newMaxAudioChannels;
}

bool HeadVideoStreamByContainerParams::maxAudioChannelsNull() const {
	// Nullable: true
	// Type Nullable: false
	

	return !m_maxAudioChannels.has_value();
}

void HeadVideoStreamByContainerParams::setMaxAudioChannelsNull() {
	m_maxAudioChannels = std::nullopt;
}


const float &HeadVideoStreamByContainerParams::maxFramerate() const {
	return m_maxFramerate.value();
}

void HeadVideoStreamByContainerParams::setMaxFramerate(float newMaxFramerate)  {
	m_maxFramerate = newMaxFramerate;
}

bool HeadVideoStreamByContainerParams::maxFramerateNull() const {
	// Nullable: true
	// Type Nullable: false
	

	return !m_maxFramerate.has_value();
}

void HeadVideoStreamByContainerParams::setMaxFramerateNull() {
	m_maxFramerate = std::nullopt;
}


const qint32 &HeadVideoStreamByContainerParams::maxRefFrames() const {
	return m_maxRefFrames.value();
}

void HeadVideoStreamByContainerParams::setMaxRefFrames(qint32 newMaxRefFrames)  {
	m_maxRefFrames = newMaxRefFrames;
}

bool HeadVideoStreamByContainerParams::maxRefFramesNull() const {
	// Nullable: true
	// Type Nullable: false
	

	return !m_maxRefFrames.has_value();
}

void HeadVideoStreamByContainerParams::setMaxRefFramesNull() {
	m_maxRefFrames = std::nullopt;
}


const qint32 &HeadVideoStreamByContainerParams::maxVideoBitDepth() const {
	return m_maxVideoBitDepth.value();
}

void HeadVideoStreamByContainerParams::setMaxVideoBitDepth(qint32 newMaxVideoBitDepth)  {
	m_maxVideoBitDepth = newMaxVideoBitDepth;
}

bool HeadVideoStreamByContainerParams::maxVideoBitDepthNull() const {
	// Nullable: true
	// Type Nullable: false
	

	return !m_maxVideoBitDepth.has_value();
}

void HeadVideoStreamByContainerParams::setMaxVideoBitDepthNull() {
	m_maxVideoBitDepth = std::nullopt;
}


const QString &HeadVideoStreamByContainerParams::mediaSourceId() const {
	return m_mediaSourceId;
}

void HeadVideoStreamByContainerParams::setMediaSourceId(QString newMediaSourceId)  {
	m_mediaSourceId = newMediaSourceId;
}

bool HeadVideoStreamByContainerParams::mediaSourceIdNull() const {
	// Nullable: true
	// Type Nullable: true
	

	return m_mediaSourceId.isNull();
}

void HeadVideoStreamByContainerParams::setMediaSourceIdNull() {
	m_mediaSourceId.clear();
}


const qint32 &HeadVideoStreamByContainerParams::minSegments() const {
	return m_minSegments.value();
}

void HeadVideoStreamByContainerParams::setMinSegments(qint32 newMinSegments)  {
	m_minSegments = newMinSegments;
}

bool HeadVideoStreamByContainerParams::minSegmentsNull() const {
	// Nullable: true
	// Type Nullable: false
	

	return !m_minSegments.has_value();
}

void HeadVideoStreamByContainerParams::setMinSegmentsNull() {
	m_minSegments = std::nullopt;
}


const QString &HeadVideoStreamByContainerParams::params() const {
	return m_params;
}

void HeadVideoStreamByContainerParams::setParams(QString newParams)  {
	m_params = newParams;
}

bool HeadVideoStreamByContainerParams::paramsNull() const {
	// Nullable: true
	// Type Nullable: true
	

	return m_params.isNull();
}

void HeadVideoStreamByContainerParams::setParamsNull() {
	m_params.clear();
}


const QString &HeadVideoStreamByContainerParams::playSessionId() const {
	return m_playSessionId;
}

void HeadVideoStreamByContainerParams::setPlaySessionId(QString newPlaySessionId)  {
	m_playSessionId = newPlaySessionId;
}

bool HeadVideoStreamByContainerParams::playSessionIdNull() const {
	// Nullable: true
	// Type Nullable: true
	

	return m_playSessionId.isNull();
}

void HeadVideoStreamByContainerParams::setPlaySessionIdNull() {
	m_playSessionId.clear();
}


const QString &HeadVideoStreamByContainerParams::profile() const {
	return m_profile;
}

void HeadVideoStreamByContainerParams::setProfile(QString newProfile)  {
	m_profile = newProfile;
}

bool HeadVideoStreamByContainerParams::profileNull() const {
	// Nullable: true
	// Type Nullable: true
	

	return m_profile.isNull();
}

void HeadVideoStreamByContainerParams::setProfileNull() {
	m_profile.clear();
}


const bool &HeadVideoStreamByContainerParams::requireAvc() const {
	return m_requireAvc.value();
}

void HeadVideoStreamByContainerParams::setRequireAvc(bool newRequireAvc)  {
	m_requireAvc = newRequireAvc;
}

bool HeadVideoStreamByContainerParams::requireAvcNull() const {
	// Nullable: true
	// Type Nullable: false
	

	return !m_requireAvc.has_value();
}

void HeadVideoStreamByContainerParams::setRequireAvcNull() {
	m_requireAvc = std::nullopt;
}


const bool &HeadVideoStreamByContainerParams::requireNonAnamorphic() const {
	return m_requireNonAnamorphic.value();
}

void HeadVideoStreamByContainerParams::setRequireNonAnamorphic(bool newRequireNonAnamorphic)  {
	m_requireNonAnamorphic = newRequireNonAnamorphic;
}

bool HeadVideoStreamByContainerParams::requireNonAnamorphicNull() const {
	// Nullable: true
	// Type Nullable: false
	

	return !m_requireNonAnamorphic.has_value();
}

void HeadVideoStreamByContainerParams::setRequireNonAnamorphicNull() {
	m_requireNonAnamorphic = std::nullopt;
}


const QString &HeadVideoStreamByContainerParams::segmentContainer() const {
	return m_segmentContainer;
}

void HeadVideoStreamByContainerParams::setSegmentContainer(QString newSegmentContainer)  {
	m_segmentContainer = newSegmentContainer;
}

bool HeadVideoStreamByContainerParams::segmentContainerNull() const {
	// Nullable: true
	// Type Nullable: true
	

	return m_segmentContainer.isNull();
}

void HeadVideoStreamByContainerParams::setSegmentContainerNull() {
	m_segmentContainer.clear();
}


const qint32 &HeadVideoStreamByContainerParams::segmentLength() const {
	return m_segmentLength.value();
}

void HeadVideoStreamByContainerParams::setSegmentLength(qint32 newSegmentLength)  {
	m_segmentLength = newSegmentLength;
}

bool HeadVideoStreamByContainerParams::segmentLengthNull() const {
	// Nullable: true
	// Type Nullable: false
	

	return !m_segmentLength.has_value();
}

void HeadVideoStreamByContainerParams::setSegmentLengthNull() {
	m_segmentLength = std::nullopt;
}


const qint64 &HeadVideoStreamByContainerParams::startTimeTicks() const {
	return m_startTimeTicks.value();
}

void HeadVideoStreamByContainerParams::setStartTimeTicks(qint64 newStartTimeTicks)  {
	m_startTimeTicks = newStartTimeTicks;
}

bool HeadVideoStreamByContainerParams::startTimeTicksNull() const {
	// Nullable: true
	// Type Nullable: false
	

	return !m_startTimeTicks.has_value();
}

void HeadVideoStreamByContainerParams::setStartTimeTicksNull() {
	m_startTimeTicks = std::nullopt;
}


const bool &HeadVideoStreamByContainerParams::staticStreaming() const {
	return m_staticStreaming.value();
}

void HeadVideoStreamByContainerParams::setStaticStreaming(bool newStaticStreaming)  {
	m_staticStreaming = newStaticStreaming;
}

bool HeadVideoStreamByContainerParams::staticStreamingNull() const {
	// Nullable: true
	// Type Nullable: false
	

	return !m_staticStreaming.has_value();
}

void HeadVideoStreamByContainerParams::setStaticStreamingNull() {
	m_staticStreaming = std::nullopt;
}


const QJsonObject &HeadVideoStreamByContainerParams::streamOptions() const {
	return m_streamOptions;
}

void HeadVideoStreamByContainerParams::setStreamOptions(QJsonObject newStreamOptions)  {
	m_streamOptions = newStreamOptions;
}

bool HeadVideoStreamByContainerParams::streamOptionsNull() const {
	// Nullable: true
	// Type Nullable: true
	

	return m_streamOptions.isEmpty();
}

void HeadVideoStreamByContainerParams::setStreamOptionsNull() {
	m_streamOptions= QJsonObject();
}


const QString &HeadVideoStreamByContainerParams::subtitleCodec() const {
	return m_subtitleCodec;
}

void HeadVideoStreamByContainerParams::setSubtitleCodec(QString newSubtitleCodec)  {
	m_subtitleCodec = newSubtitleCodec;
}

bool HeadVideoStreamByContainerParams::subtitleCodecNull() const {
	// Nullable: true
	// Type Nullable: true
	

	return m_subtitleCodec.isNull();
}

void HeadVideoStreamByContainerParams::setSubtitleCodecNull() {
	m_subtitleCodec.clear();
}


const SubtitleDeliveryMethod &HeadVideoStreamByContainerParams::subtitleMethod() const {
	return m_subtitleMethod;
}

void HeadVideoStreamByContainerParams::setSubtitleMethod(SubtitleDeliveryMethod newSubtitleMethod)  {
	m_subtitleMethod = newSubtitleMethod;
}

bool HeadVideoStreamByContainerParams::subtitleMethodNull() const {
	// Nullable: true
	// Type Nullable: true
	

	return m_subtitleMethod== SubtitleDeliveryMethod::EnumNotSet;
}

void HeadVideoStreamByContainerParams::setSubtitleMethodNull() {
	m_subtitleMethod= SubtitleDeliveryMethod::EnumNotSet;
}


const qint32 &HeadVideoStreamByContainerParams::subtitleStreamIndex() const {
	return m_subtitleStreamIndex.value();
}

void HeadVideoStreamByContainerParams::setSubtitleStreamIndex(qint32 newSubtitleStreamIndex)  {
	m_subtitleStreamIndex = newSubtitleStreamIndex;
}

bool HeadVideoStreamByContainerParams::subtitleStreamIndexNull() const {
	// Nullable: true
	// Type Nullable: false
	

	return !m_subtitleStreamIndex.has_value();
}

void HeadVideoStreamByContainerParams::setSubtitleStreamIndexNull() {
	m_subtitleStreamIndex = std::nullopt;
}


const QString &HeadVideoStreamByContainerParams::tag() const {
	return m_tag;
}

void HeadVideoStreamByContainerParams::setTag(QString newTag)  {
	m_tag = newTag;
}

bool HeadVideoStreamByContainerParams::tagNull() const {
	// Nullable: true
	// Type Nullable: true
	

	return m_tag.isNull();
}

void HeadVideoStreamByContainerParams::setTagNull() {
	m_tag.clear();
}


const QString &HeadVideoStreamByContainerParams::transcodeReasons() const {
	return m_transcodeReasons;
}

void HeadVideoStreamByContainerParams::setTranscodeReasons(QString newTranscodeReasons)  {
	m_transcodeReasons = newTranscodeReasons;
}

bool HeadVideoStreamByContainerParams::transcodeReasonsNull() const {
	// Nullable: true
	// Type Nullable: true
	

	return m_transcodeReasons.isNull();
}

void HeadVideoStreamByContainerParams::setTranscodeReasonsNull() {
	m_transcodeReasons.clear();
}


const qint32 &HeadVideoStreamByContainerParams::transcodingMaxAudioChannels() const {
	return m_transcodingMaxAudioChannels.value();
}

void HeadVideoStreamByContainerParams::setTranscodingMaxAudioChannels(qint32 newTranscodingMaxAudioChannels)  {
	m_transcodingMaxAudioChannels = newTranscodingMaxAudioChannels;
}

bool HeadVideoStreamByContainerParams::transcodingMaxAudioChannelsNull() const {
	// Nullable: true
	// Type Nullable: false
	

	return !m_transcodingMaxAudioChannels.has_value();
}

void HeadVideoStreamByContainerParams::setTranscodingMaxAudioChannelsNull() {
	m_transcodingMaxAudioChannels = std::nullopt;
}


const qint32 &HeadVideoStreamByContainerParams::videoBitRate() const {
	return m_videoBitRate.value();
}

void HeadVideoStreamByContainerParams::setVideoBitRate(qint32 newVideoBitRate)  {
	m_videoBitRate = newVideoBitRate;
}

bool HeadVideoStreamByContainerParams::videoBitRateNull() const {
	// Nullable: true
	// Type Nullable: false
	

	return !m_videoBitRate.has_value();
}

void HeadVideoStreamByContainerParams::setVideoBitRateNull() {
	m_videoBitRate = std::nullopt;
}


const QString &HeadVideoStreamByContainerParams::videoCodec() const {
	return m_videoCodec;
}

void HeadVideoStreamByContainerParams::setVideoCodec(QString newVideoCodec)  {
	m_videoCodec = newVideoCodec;
}

bool HeadVideoStreamByContainerParams::videoCodecNull() const {
	// Nullable: true
	// Type Nullable: true
	

	return m_videoCodec.isNull();
}

void HeadVideoStreamByContainerParams::setVideoCodecNull() {
	m_videoCodec.clear();
}


const qint32 &HeadVideoStreamByContainerParams::videoStreamIndex() const {
	return m_videoStreamIndex.value();
}

void HeadVideoStreamByContainerParams::setVideoStreamIndex(qint32 newVideoStreamIndex)  {
	m_videoStreamIndex = newVideoStreamIndex;
}

bool HeadVideoStreamByContainerParams::videoStreamIndexNull() const {
	// Nullable: true
	// Type Nullable: false
	

	return !m_videoStreamIndex.has_value();
}

void HeadVideoStreamByContainerParams::setVideoStreamIndexNull() {
	m_videoStreamIndex = std::nullopt;
}


const qint32 &HeadVideoStreamByContainerParams::width() const {
	return m_width.value();
}

void HeadVideoStreamByContainerParams::setWidth(qint32 newWidth)  {
	m_width = newWidth;
}

bool HeadVideoStreamByContainerParams::widthNull() const {
	// Nullable: true
	// Type Nullable: false
	

	return !m_width.has_value();
}

void HeadVideoStreamByContainerParams::setWidthNull() {
	m_width = std::nullopt;
}




// InitiateParams



// InstallPackageParams

const QString &InstallPackageParams::name() const {
	return m_name;
}

void InstallPackageParams::setName(QString newName) {
	m_name = newName;
}


const QString &InstallPackageParams::assemblyGuid() const {
	return m_assemblyGuid;
}

void InstallPackageParams::setAssemblyGuid(QString newAssemblyGuid)  {
	m_assemblyGuid = newAssemblyGuid;
}

bool InstallPackageParams::assemblyGuidNull() const {
	// Nullable: true
	// Type Nullable: true
	

	return m_assemblyGuid.isNull();
}

void InstallPackageParams::setAssemblyGuidNull() {
	m_assemblyGuid.clear();
}


const QString &InstallPackageParams::repositoryUrl() const {
	return m_repositoryUrl;
}

void InstallPackageParams::setRepositoryUrl(QString newRepositoryUrl)  {
	m_repositoryUrl = newRepositoryUrl;
}

bool InstallPackageParams::repositoryUrlNull() const {
	// Nullable: true
	// Type Nullable: true
	

	return m_repositoryUrl.isNull();
}

void InstallPackageParams::setRepositoryUrlNull() {
	m_repositoryUrl.clear();
}


const QString &InstallPackageParams::version() const {
	return m_version;
}

void InstallPackageParams::setVersion(QString newVersion)  {
	m_version = newVersion;
}

bool InstallPackageParams::versionNull() const {
	// Nullable: true
	// Type Nullable: true
	

	return m_version.isNull();
}

void InstallPackageParams::setVersionNull() {
	m_version.clear();
}




// MarkFavoriteItemParams

const QString &MarkFavoriteItemParams::itemId() const {
	return m_itemId;
}

void MarkFavoriteItemParams::setItemId(QString newItemId) {
	m_itemId = newItemId;
}


const QString &MarkFavoriteItemParams::userId() const {
	return m_userId;
}

void MarkFavoriteItemParams::setUserId(QString newUserId) {
	m_userId = newUserId;
}




// MarkPlayedItemParams

const QString &MarkPlayedItemParams::itemId() const {
	return m_itemId;
}

void MarkPlayedItemParams::setItemId(QString newItemId) {
	m_itemId = newItemId;
}


const QString &MarkPlayedItemParams::userId() const {
	return m_userId;
}

void MarkPlayedItemParams::setUserId(QString newUserId) {
	m_userId = newUserId;
}


const QDateTime &MarkPlayedItemParams::datePlayed() const {
	return m_datePlayed;
}

void MarkPlayedItemParams::setDatePlayed(QDateTime newDatePlayed)  {
	m_datePlayed = newDatePlayed;
}

bool MarkPlayedItemParams::datePlayedNull() const {
	// Nullable: true
	// Type Nullable: true
	

	return m_datePlayed.isNull();
}

void MarkPlayedItemParams::setDatePlayedNull() {
	m_datePlayed= QDateTime();
}




// MarkUnplayedItemParams

const QString &MarkUnplayedItemParams::itemId() const {
	return m_itemId;
}

void MarkUnplayedItemParams::setItemId(QString newItemId) {
	m_itemId = newItemId;
}


const QString &MarkUnplayedItemParams::userId() const {
	return m_userId;
}

void MarkUnplayedItemParams::setUserId(QString newUserId) {
	m_userId = newUserId;
}




// MergeVersionsParams

const QStringList &MergeVersionsParams::ids() const {
	return m_ids;
}

void MergeVersionsParams::setIds(QStringList newIds) {
	m_ids = newIds;
}




// MoveItemParams

const QString &MoveItemParams::itemId() const {
	return m_itemId;
}

void MoveItemParams::setItemId(QString newItemId) {
	m_itemId = newItemId;
}


const qint32 &MoveItemParams::newIndex() const {
	return m_newIndex;
}

void MoveItemParams::setNewIndex(qint32 newNewIndex) {
	m_newIndex = newNewIndex;
}


const QString &MoveItemParams::playlistId() const {
	return m_playlistId;
}

void MoveItemParams::setPlaylistId(QString newPlaylistId) {
	m_playlistId = newPlaylistId;
}




// OnPlaybackProgressParams

const QString &OnPlaybackProgressParams::itemId() const {
	return m_itemId;
}

void OnPlaybackProgressParams::setItemId(QString newItemId) {
	m_itemId = newItemId;
}


const QString &OnPlaybackProgressParams::userId() const {
	return m_userId;
}

void OnPlaybackProgressParams::setUserId(QString newUserId) {
	m_userId = newUserId;
}


const qint32 &OnPlaybackProgressParams::audioStreamIndex() const {
	return m_audioStreamIndex.value();
}

void OnPlaybackProgressParams::setAudioStreamIndex(qint32 newAudioStreamIndex)  {
	m_audioStreamIndex = newAudioStreamIndex;
}

bool OnPlaybackProgressParams::audioStreamIndexNull() const {
	// Nullable: true
	// Type Nullable: false
	

	return !m_audioStreamIndex.has_value();
}

void OnPlaybackProgressParams::setAudioStreamIndexNull() {
	m_audioStreamIndex = std::nullopt;
}


const bool &OnPlaybackProgressParams::isMuted() const {
	return m_isMuted.value();
}

void OnPlaybackProgressParams::setIsMuted(bool newIsMuted)  {
	m_isMuted = newIsMuted;
}

bool OnPlaybackProgressParams::isMutedNull() const {
	// Nullable: false
	// Type Nullable: false
	

	return !m_isMuted.has_value();
}

void OnPlaybackProgressParams::setIsMutedNull() {
	m_isMuted = std::nullopt;
}


const bool &OnPlaybackProgressParams::isPaused() const {
	return m_isPaused.value();
}

void OnPlaybackProgressParams::setIsPaused(bool newIsPaused)  {
	m_isPaused = newIsPaused;
}

bool OnPlaybackProgressParams::isPausedNull() const {
	// Nullable: false
	// Type Nullable: false
	

	return !m_isPaused.has_value();
}

void OnPlaybackProgressParams::setIsPausedNull() {
	m_isPaused = std::nullopt;
}


const QString &OnPlaybackProgressParams::liveStreamId() const {
	return m_liveStreamId;
}

void OnPlaybackProgressParams::setLiveStreamId(QString newLiveStreamId)  {
	m_liveStreamId = newLiveStreamId;
}

bool OnPlaybackProgressParams::liveStreamIdNull() const {
	// Nullable: true
	// Type Nullable: true
	

	return m_liveStreamId.isNull();
}

void OnPlaybackProgressParams::setLiveStreamIdNull() {
	m_liveStreamId.clear();
}


const QString &OnPlaybackProgressParams::mediaSourceId() const {
	return m_mediaSourceId;
}

void OnPlaybackProgressParams::setMediaSourceId(QString newMediaSourceId)  {
	m_mediaSourceId = newMediaSourceId;
}

bool OnPlaybackProgressParams::mediaSourceIdNull() const {
	// Nullable: true
	// Type Nullable: true
	

	return m_mediaSourceId.isNull();
}

void OnPlaybackProgressParams::setMediaSourceIdNull() {
	m_mediaSourceId.clear();
}


const PlayMethod &OnPlaybackProgressParams::playMethod() const {
	return m_playMethod;
}

void OnPlaybackProgressParams::setPlayMethod(PlayMethod newPlayMethod)  {
	m_playMethod = newPlayMethod;
}

bool OnPlaybackProgressParams::playMethodNull() const {
	// Nullable: true
	// Type Nullable: true
	

	return m_playMethod== PlayMethod::EnumNotSet;
}

void OnPlaybackProgressParams::setPlayMethodNull() {
	m_playMethod= PlayMethod::EnumNotSet;
}


const QString &OnPlaybackProgressParams::playSessionId() const {
	return m_playSessionId;
}

void OnPlaybackProgressParams::setPlaySessionId(QString newPlaySessionId)  {
	m_playSessionId = newPlaySessionId;
}

bool OnPlaybackProgressParams::playSessionIdNull() const {
	// Nullable: true
	// Type Nullable: true
	

	return m_playSessionId.isNull();
}

void OnPlaybackProgressParams::setPlaySessionIdNull() {
	m_playSessionId.clear();
}


const qint64 &OnPlaybackProgressParams::positionTicks() const {
	return m_positionTicks.value();
}

void OnPlaybackProgressParams::setPositionTicks(qint64 newPositionTicks)  {
	m_positionTicks = newPositionTicks;
}

bool OnPlaybackProgressParams::positionTicksNull() const {
	// Nullable: true
	// Type Nullable: false
	

	return !m_positionTicks.has_value();
}

void OnPlaybackProgressParams::setPositionTicksNull() {
	m_positionTicks = std::nullopt;
}


const RepeatMode &OnPlaybackProgressParams::repeatMode() const {
	return m_repeatMode;
}

void OnPlaybackProgressParams::setRepeatMode(RepeatMode newRepeatMode)  {
	m_repeatMode = newRepeatMode;
}

bool OnPlaybackProgressParams::repeatModeNull() const {
	// Nullable: true
	// Type Nullable: true
	

	return m_repeatMode== RepeatMode::EnumNotSet;
}

void OnPlaybackProgressParams::setRepeatModeNull() {
	m_repeatMode= RepeatMode::EnumNotSet;
}


const qint32 &OnPlaybackProgressParams::subtitleStreamIndex() const {
	return m_subtitleStreamIndex.value();
}

void OnPlaybackProgressParams::setSubtitleStreamIndex(qint32 newSubtitleStreamIndex)  {
	m_subtitleStreamIndex = newSubtitleStreamIndex;
}

bool OnPlaybackProgressParams::subtitleStreamIndexNull() const {
	// Nullable: true
	// Type Nullable: false
	

	return !m_subtitleStreamIndex.has_value();
}

void OnPlaybackProgressParams::setSubtitleStreamIndexNull() {
	m_subtitleStreamIndex = std::nullopt;
}


const qint32 &OnPlaybackProgressParams::volumeLevel() const {
	return m_volumeLevel.value();
}

void OnPlaybackProgressParams::setVolumeLevel(qint32 newVolumeLevel)  {
	m_volumeLevel = newVolumeLevel;
}

bool OnPlaybackProgressParams::volumeLevelNull() const {
	// Nullable: true
	// Type Nullable: false
	

	return !m_volumeLevel.has_value();
}

void OnPlaybackProgressParams::setVolumeLevelNull() {
	m_volumeLevel = std::nullopt;
}




// OnPlaybackStartParams

const QString &OnPlaybackStartParams::itemId() const {
	return m_itemId;
}

void OnPlaybackStartParams::setItemId(QString newItemId) {
	m_itemId = newItemId;
}


const QString &OnPlaybackStartParams::userId() const {
	return m_userId;
}

void OnPlaybackStartParams::setUserId(QString newUserId) {
	m_userId = newUserId;
}


const qint32 &OnPlaybackStartParams::audioStreamIndex() const {
	return m_audioStreamIndex.value();
}

void OnPlaybackStartParams::setAudioStreamIndex(qint32 newAudioStreamIndex)  {
	m_audioStreamIndex = newAudioStreamIndex;
}

bool OnPlaybackStartParams::audioStreamIndexNull() const {
	// Nullable: true
	// Type Nullable: false
	

	return !m_audioStreamIndex.has_value();
}

void OnPlaybackStartParams::setAudioStreamIndexNull() {
	m_audioStreamIndex = std::nullopt;
}


const bool &OnPlaybackStartParams::canSeek() const {
	return m_canSeek.value();
}

void OnPlaybackStartParams::setCanSeek(bool newCanSeek)  {
	m_canSeek = newCanSeek;
}

bool OnPlaybackStartParams::canSeekNull() const {
	// Nullable: false
	// Type Nullable: false
	

	return !m_canSeek.has_value();
}

void OnPlaybackStartParams::setCanSeekNull() {
	m_canSeek = std::nullopt;
}


const QString &OnPlaybackStartParams::liveStreamId() const {
	return m_liveStreamId;
}

void OnPlaybackStartParams::setLiveStreamId(QString newLiveStreamId)  {
	m_liveStreamId = newLiveStreamId;
}

bool OnPlaybackStartParams::liveStreamIdNull() const {
	// Nullable: true
	// Type Nullable: true
	

	return m_liveStreamId.isNull();
}

void OnPlaybackStartParams::setLiveStreamIdNull() {
	m_liveStreamId.clear();
}


const QString &OnPlaybackStartParams::mediaSourceId() const {
	return m_mediaSourceId;
}

void OnPlaybackStartParams::setMediaSourceId(QString newMediaSourceId)  {
	m_mediaSourceId = newMediaSourceId;
}

bool OnPlaybackStartParams::mediaSourceIdNull() const {
	// Nullable: true
	// Type Nullable: true
	

	return m_mediaSourceId.isNull();
}

void OnPlaybackStartParams::setMediaSourceIdNull() {
	m_mediaSourceId.clear();
}


const PlayMethod &OnPlaybackStartParams::playMethod() const {
	return m_playMethod;
}

void OnPlaybackStartParams::setPlayMethod(PlayMethod newPlayMethod)  {
	m_playMethod = newPlayMethod;
}

bool OnPlaybackStartParams::playMethodNull() const {
	// Nullable: true
	// Type Nullable: true
	

	return m_playMethod== PlayMethod::EnumNotSet;
}

void OnPlaybackStartParams::setPlayMethodNull() {
	m_playMethod= PlayMethod::EnumNotSet;
}


const QString &OnPlaybackStartParams::playSessionId() const {
	return m_playSessionId;
}

void OnPlaybackStartParams::setPlaySessionId(QString newPlaySessionId)  {
	m_playSessionId = newPlaySessionId;
}

bool OnPlaybackStartParams::playSessionIdNull() const {
	// Nullable: true
	// Type Nullable: true
	

	return m_playSessionId.isNull();
}

void OnPlaybackStartParams::setPlaySessionIdNull() {
	m_playSessionId.clear();
}


const qint32 &OnPlaybackStartParams::subtitleStreamIndex() const {
	return m_subtitleStreamIndex.value();
}

void OnPlaybackStartParams::setSubtitleStreamIndex(qint32 newSubtitleStreamIndex)  {
	m_subtitleStreamIndex = newSubtitleStreamIndex;
}

bool OnPlaybackStartParams::subtitleStreamIndexNull() const {
	// Nullable: true
	// Type Nullable: false
	

	return !m_subtitleStreamIndex.has_value();
}

void OnPlaybackStartParams::setSubtitleStreamIndexNull() {
	m_subtitleStreamIndex = std::nullopt;
}




// OnPlaybackStoppedParams

const QString &OnPlaybackStoppedParams::itemId() const {
	return m_itemId;
}

void OnPlaybackStoppedParams::setItemId(QString newItemId) {
	m_itemId = newItemId;
}


const QString &OnPlaybackStoppedParams::userId() const {
	return m_userId;
}

void OnPlaybackStoppedParams::setUserId(QString newUserId) {
	m_userId = newUserId;
}


const QString &OnPlaybackStoppedParams::liveStreamId() const {
	return m_liveStreamId;
}

void OnPlaybackStoppedParams::setLiveStreamId(QString newLiveStreamId)  {
	m_liveStreamId = newLiveStreamId;
}

bool OnPlaybackStoppedParams::liveStreamIdNull() const {
	// Nullable: true
	// Type Nullable: true
	

	return m_liveStreamId.isNull();
}

void OnPlaybackStoppedParams::setLiveStreamIdNull() {
	m_liveStreamId.clear();
}


const QString &OnPlaybackStoppedParams::mediaSourceId() const {
	return m_mediaSourceId;
}

void OnPlaybackStoppedParams::setMediaSourceId(QString newMediaSourceId)  {
	m_mediaSourceId = newMediaSourceId;
}

bool OnPlaybackStoppedParams::mediaSourceIdNull() const {
	// Nullable: true
	// Type Nullable: true
	

	return m_mediaSourceId.isNull();
}

void OnPlaybackStoppedParams::setMediaSourceIdNull() {
	m_mediaSourceId.clear();
}


const QString &OnPlaybackStoppedParams::nextMediaType() const {
	return m_nextMediaType;
}

void OnPlaybackStoppedParams::setNextMediaType(QString newNextMediaType)  {
	m_nextMediaType = newNextMediaType;
}

bool OnPlaybackStoppedParams::nextMediaTypeNull() const {
	// Nullable: true
	// Type Nullable: true
	

	return m_nextMediaType.isNull();
}

void OnPlaybackStoppedParams::setNextMediaTypeNull() {
	m_nextMediaType.clear();
}


const QString &OnPlaybackStoppedParams::playSessionId() const {
	return m_playSessionId;
}

void OnPlaybackStoppedParams::setPlaySessionId(QString newPlaySessionId)  {
	m_playSessionId = newPlaySessionId;
}

bool OnPlaybackStoppedParams::playSessionIdNull() const {
	// Nullable: true
	// Type Nullable: true
	

	return m_playSessionId.isNull();
}

void OnPlaybackStoppedParams::setPlaySessionIdNull() {
	m_playSessionId.clear();
}


const qint64 &OnPlaybackStoppedParams::positionTicks() const {
	return m_positionTicks.value();
}

void OnPlaybackStoppedParams::setPositionTicks(qint64 newPositionTicks)  {
	m_positionTicks = newPositionTicks;
}

bool OnPlaybackStoppedParams::positionTicksNull() const {
	// Nullable: true
	// Type Nullable: false
	

	return !m_positionTicks.has_value();
}

void OnPlaybackStoppedParams::setPositionTicksNull() {
	m_positionTicks = std::nullopt;
}




// OpenLiveStreamParams

const qint32 &OpenLiveStreamParams::audioStreamIndex() const {
	return m_audioStreamIndex.value();
}

void OpenLiveStreamParams::setAudioStreamIndex(qint32 newAudioStreamIndex)  {
	m_audioStreamIndex = newAudioStreamIndex;
}

bool OpenLiveStreamParams::audioStreamIndexNull() const {
	// Nullable: true
	// Type Nullable: false
	

	return !m_audioStreamIndex.has_value();
}

void OpenLiveStreamParams::setAudioStreamIndexNull() {
	m_audioStreamIndex = std::nullopt;
}


const bool &OpenLiveStreamParams::enableDirectPlay() const {
	return m_enableDirectPlay.value();
}

void OpenLiveStreamParams::setEnableDirectPlay(bool newEnableDirectPlay)  {
	m_enableDirectPlay = newEnableDirectPlay;
}

bool OpenLiveStreamParams::enableDirectPlayNull() const {
	// Nullable: true
	// Type Nullable: false
	

	return !m_enableDirectPlay.has_value();
}

void OpenLiveStreamParams::setEnableDirectPlayNull() {
	m_enableDirectPlay = std::nullopt;
}


const bool &OpenLiveStreamParams::enableDirectStream() const {
	return m_enableDirectStream.value();
}

void OpenLiveStreamParams::setEnableDirectStream(bool newEnableDirectStream)  {
	m_enableDirectStream = newEnableDirectStream;
}

bool OpenLiveStreamParams::enableDirectStreamNull() const {
	// Nullable: true
	// Type Nullable: false
	

	return !m_enableDirectStream.has_value();
}

void OpenLiveStreamParams::setEnableDirectStreamNull() {
	m_enableDirectStream = std::nullopt;
}


const QString &OpenLiveStreamParams::itemId() const {
	return m_itemId;
}

void OpenLiveStreamParams::setItemId(QString newItemId)  {
	m_itemId = newItemId;
}

bool OpenLiveStreamParams::itemIdNull() const {
	// Nullable: true
	// Type Nullable: true
	

	return m_itemId.isNull();
}

void OpenLiveStreamParams::setItemIdNull() {
	m_itemId.clear();
}


const qint32 &OpenLiveStreamParams::maxAudioChannels() const {
	return m_maxAudioChannels.value();
}

void OpenLiveStreamParams::setMaxAudioChannels(qint32 newMaxAudioChannels)  {
	m_maxAudioChannels = newMaxAudioChannels;
}

bool OpenLiveStreamParams::maxAudioChannelsNull() const {
	// Nullable: true
	// Type Nullable: false
	

	return !m_maxAudioChannels.has_value();
}

void OpenLiveStreamParams::setMaxAudioChannelsNull() {
	m_maxAudioChannels = std::nullopt;
}


const qint32 &OpenLiveStreamParams::maxStreamingBitrate() const {
	return m_maxStreamingBitrate.value();
}

void OpenLiveStreamParams::setMaxStreamingBitrate(qint32 newMaxStreamingBitrate)  {
	m_maxStreamingBitrate = newMaxStreamingBitrate;
}

bool OpenLiveStreamParams::maxStreamingBitrateNull() const {
	// Nullable: true
	// Type Nullable: false
	

	return !m_maxStreamingBitrate.has_value();
}

void OpenLiveStreamParams::setMaxStreamingBitrateNull() {
	m_maxStreamingBitrate = std::nullopt;
}


const QString &OpenLiveStreamParams::openToken() const {
	return m_openToken;
}

void OpenLiveStreamParams::setOpenToken(QString newOpenToken)  {
	m_openToken = newOpenToken;
}

bool OpenLiveStreamParams::openTokenNull() const {
	// Nullable: true
	// Type Nullable: true
	

	return m_openToken.isNull();
}

void OpenLiveStreamParams::setOpenTokenNull() {
	m_openToken.clear();
}


const QString &OpenLiveStreamParams::playSessionId() const {
	return m_playSessionId;
}

void OpenLiveStreamParams::setPlaySessionId(QString newPlaySessionId)  {
	m_playSessionId = newPlaySessionId;
}

bool OpenLiveStreamParams::playSessionIdNull() const {
	// Nullable: true
	// Type Nullable: true
	

	return m_playSessionId.isNull();
}

void OpenLiveStreamParams::setPlaySessionIdNull() {
	m_playSessionId.clear();
}


const qint64 &OpenLiveStreamParams::startTimeTicks() const {
	return m_startTimeTicks.value();
}

void OpenLiveStreamParams::setStartTimeTicks(qint64 newStartTimeTicks)  {
	m_startTimeTicks = newStartTimeTicks;
}

bool OpenLiveStreamParams::startTimeTicksNull() const {
	// Nullable: true
	// Type Nullable: false
	

	return !m_startTimeTicks.has_value();
}

void OpenLiveStreamParams::setStartTimeTicksNull() {
	m_startTimeTicks = std::nullopt;
}


const qint32 &OpenLiveStreamParams::subtitleStreamIndex() const {
	return m_subtitleStreamIndex.value();
}

void OpenLiveStreamParams::setSubtitleStreamIndex(qint32 newSubtitleStreamIndex)  {
	m_subtitleStreamIndex = newSubtitleStreamIndex;
}

bool OpenLiveStreamParams::subtitleStreamIndexNull() const {
	// Nullable: true
	// Type Nullable: false
	

	return !m_subtitleStreamIndex.has_value();
}

void OpenLiveStreamParams::setSubtitleStreamIndexNull() {
	m_subtitleStreamIndex = std::nullopt;
}


const QString &OpenLiveStreamParams::userId() const {
	return m_userId;
}

void OpenLiveStreamParams::setUserId(QString newUserId)  {
	m_userId = newUserId;
}

bool OpenLiveStreamParams::userIdNull() const {
	// Nullable: true
	// Type Nullable: true
	

	return m_userId.isNull();
}

void OpenLiveStreamParams::setUserIdNull() {
	m_userId.clear();
}


const QSharedPointer<OpenLiveStreamDto> &OpenLiveStreamParams::body() const {
	return m_body;
}

void OpenLiveStreamParams::setBody(QSharedPointer<OpenLiveStreamDto> newBody) {
	m_body = newBody;
}




// PingPlaybackSessionParams

const QString &PingPlaybackSessionParams::playSessionId() const {
	return m_playSessionId;
}

void PingPlaybackSessionParams::setPlaySessionId(QString newPlaySessionId)  {
	m_playSessionId = newPlaySessionId;
}

bool PingPlaybackSessionParams::playSessionIdNull() const {
	// Nullable: true
	// Type Nullable: true
	

	return m_playSessionId.isNull();
}

void PingPlaybackSessionParams::setPlaySessionIdNull() {
	m_playSessionId.clear();
}




// PlayParams

const QString &PlayParams::sessionId() const {
	return m_sessionId;
}

void PlayParams::setSessionId(QString newSessionId) {
	m_sessionId = newSessionId;
}


const QStringList &PlayParams::itemIds() const {
	return m_itemIds;
}

void PlayParams::setItemIds(QStringList newItemIds) {
	m_itemIds = newItemIds;
}


const PlayCommand &PlayParams::playCommand() const {
	return m_playCommand;
}

void PlayParams::setPlayCommand(PlayCommand newPlayCommand) {
	m_playCommand = newPlayCommand;
}


const qint64 &PlayParams::startPositionTicks() const {
	return m_startPositionTicks.value();
}

void PlayParams::setStartPositionTicks(qint64 newStartPositionTicks)  {
	m_startPositionTicks = newStartPositionTicks;
}

bool PlayParams::startPositionTicksNull() const {
	// Nullable: true
	// Type Nullable: false
	

	return !m_startPositionTicks.has_value();
}

void PlayParams::setStartPositionTicksNull() {
	m_startPositionTicks = std::nullopt;
}




// PostParams

const QString &PostParams::itemId() const {
	return m_itemId;
}

void PostParams::setItemId(QString newItemId) {
	m_itemId = newItemId;
}


const MetadataRefreshMode &PostParams::imageRefreshMode() const {
	return m_imageRefreshMode;
}

void PostParams::setImageRefreshMode(MetadataRefreshMode newImageRefreshMode)  {
	m_imageRefreshMode = newImageRefreshMode;
}

bool PostParams::imageRefreshModeNull() const {
	// Nullable: true
	// Type Nullable: true
	

	return m_imageRefreshMode== MetadataRefreshMode::EnumNotSet;
}

void PostParams::setImageRefreshModeNull() {
	m_imageRefreshMode= MetadataRefreshMode::EnumNotSet;
}


const MetadataRefreshMode &PostParams::metadataRefreshMode() const {
	return m_metadataRefreshMode;
}

void PostParams::setMetadataRefreshMode(MetadataRefreshMode newMetadataRefreshMode)  {
	m_metadataRefreshMode = newMetadataRefreshMode;
}

bool PostParams::metadataRefreshModeNull() const {
	// Nullable: true
	// Type Nullable: true
	

	return m_metadataRefreshMode== MetadataRefreshMode::EnumNotSet;
}

void PostParams::setMetadataRefreshModeNull() {
	m_metadataRefreshMode= MetadataRefreshMode::EnumNotSet;
}


const bool &PostParams::replaceAllImages() const {
	return m_replaceAllImages.value();
}

void PostParams::setReplaceAllImages(bool newReplaceAllImages)  {
	m_replaceAllImages = newReplaceAllImages;
}

bool PostParams::replaceAllImagesNull() const {
	// Nullable: false
	// Type Nullable: false
	

	return !m_replaceAllImages.has_value();
}

void PostParams::setReplaceAllImagesNull() {
	m_replaceAllImages = std::nullopt;
}


const bool &PostParams::replaceAllMetadata() const {
	return m_replaceAllMetadata.value();
}

void PostParams::setReplaceAllMetadata(bool newReplaceAllMetadata)  {
	m_replaceAllMetadata = newReplaceAllMetadata;
}

bool PostParams::replaceAllMetadataNull() const {
	// Nullable: false
	// Type Nullable: false
	

	return !m_replaceAllMetadata.has_value();
}

void PostParams::setReplaceAllMetadataNull() {
	m_replaceAllMetadata = std::nullopt;
}




// PostAddedMoviesParams

const QString &PostAddedMoviesParams::imdbId() const {
	return m_imdbId;
}

void PostAddedMoviesParams::setImdbId(QString newImdbId)  {
	m_imdbId = newImdbId;
}

bool PostAddedMoviesParams::imdbIdNull() const {
	// Nullable: true
	// Type Nullable: true
	

	return m_imdbId.isNull();
}

void PostAddedMoviesParams::setImdbIdNull() {
	m_imdbId.clear();
}


const QString &PostAddedMoviesParams::tmdbId() const {
	return m_tmdbId;
}

void PostAddedMoviesParams::setTmdbId(QString newTmdbId)  {
	m_tmdbId = newTmdbId;
}

bool PostAddedMoviesParams::tmdbIdNull() const {
	// Nullable: true
	// Type Nullable: true
	

	return m_tmdbId.isNull();
}

void PostAddedMoviesParams::setTmdbIdNull() {
	m_tmdbId.clear();
}




// PostAddedSeriesParams

const QString &PostAddedSeriesParams::tvdbId() const {
	return m_tvdbId;
}

void PostAddedSeriesParams::setTvdbId(QString newTvdbId)  {
	m_tvdbId = newTvdbId;
}

bool PostAddedSeriesParams::tvdbIdNull() const {
	// Nullable: true
	// Type Nullable: true
	

	return m_tvdbId.isNull();
}

void PostAddedSeriesParams::setTvdbIdNull() {
	m_tvdbId.clear();
}




// PostCapabilitiesParams

const QString &PostCapabilitiesParams::jellyfinId() const {
	return m_jellyfinId;
}

void PostCapabilitiesParams::setJellyfinId(QString newJellyfinId)  {
	m_jellyfinId = newJellyfinId;
}

bool PostCapabilitiesParams::jellyfinIdNull() const {
	// Nullable: true
	// Type Nullable: true
	

	return m_jellyfinId.isNull();
}

void PostCapabilitiesParams::setJellyfinIdNull() {
	m_jellyfinId.clear();
}


const QStringList &PostCapabilitiesParams::playableMediaTypes() const {
	return m_playableMediaTypes;
}

void PostCapabilitiesParams::setPlayableMediaTypes(QStringList newPlayableMediaTypes)  {
	m_playableMediaTypes = newPlayableMediaTypes;
}

bool PostCapabilitiesParams::playableMediaTypesNull() const {
	// Nullable: true
	// Type Nullable: true
	

	return m_playableMediaTypes.size() == 0;
}

void PostCapabilitiesParams::setPlayableMediaTypesNull() {
	m_playableMediaTypes.clear();
}


const QList<GeneralCommandType> &PostCapabilitiesParams::supportedCommands() const {
	return m_supportedCommands;
}

void PostCapabilitiesParams::setSupportedCommands(QList<GeneralCommandType> newSupportedCommands)  {
	m_supportedCommands = newSupportedCommands;
}

bool PostCapabilitiesParams::supportedCommandsNull() const {
	// Nullable: true
	// Type Nullable: true
	

	return m_supportedCommands.size() == 0;
}

void PostCapabilitiesParams::setSupportedCommandsNull() {
	m_supportedCommands.clear();
}


const bool &PostCapabilitiesParams::supportsMediaControl() const {
	return m_supportsMediaControl.value();
}

void PostCapabilitiesParams::setSupportsMediaControl(bool newSupportsMediaControl)  {
	m_supportsMediaControl = newSupportsMediaControl;
}

bool PostCapabilitiesParams::supportsMediaControlNull() const {
	// Nullable: false
	// Type Nullable: false
	

	return !m_supportsMediaControl.has_value();
}

void PostCapabilitiesParams::setSupportsMediaControlNull() {
	m_supportsMediaControl = std::nullopt;
}


const bool &PostCapabilitiesParams::supportsPersistentIdentifier() const {
	return m_supportsPersistentIdentifier.value();
}

void PostCapabilitiesParams::setSupportsPersistentIdentifier(bool newSupportsPersistentIdentifier)  {
	m_supportsPersistentIdentifier = newSupportsPersistentIdentifier;
}

bool PostCapabilitiesParams::supportsPersistentIdentifierNull() const {
	// Nullable: false
	// Type Nullable: false
	

	return !m_supportsPersistentIdentifier.has_value();
}

void PostCapabilitiesParams::setSupportsPersistentIdentifierNull() {
	m_supportsPersistentIdentifier = std::nullopt;
}


const bool &PostCapabilitiesParams::supportsSync() const {
	return m_supportsSync.value();
}

void PostCapabilitiesParams::setSupportsSync(bool newSupportsSync)  {
	m_supportsSync = newSupportsSync;
}

bool PostCapabilitiesParams::supportsSyncNull() const {
	// Nullable: false
	// Type Nullable: false
	

	return !m_supportsSync.has_value();
}

void PostCapabilitiesParams::setSupportsSyncNull() {
	m_supportsSync = std::nullopt;
}




// PostFullCapabilitiesParams

const QString &PostFullCapabilitiesParams::jellyfinId() const {
	return m_jellyfinId;
}

void PostFullCapabilitiesParams::setJellyfinId(QString newJellyfinId)  {
	m_jellyfinId = newJellyfinId;
}

bool PostFullCapabilitiesParams::jellyfinIdNull() const {
	// Nullable: true
	// Type Nullable: true
	

	return m_jellyfinId.isNull();
}

void PostFullCapabilitiesParams::setJellyfinIdNull() {
	m_jellyfinId.clear();
}


const QSharedPointer<ClientCapabilitiesDto> &PostFullCapabilitiesParams::body() const {
	return m_body;
}

void PostFullCapabilitiesParams::setBody(QSharedPointer<ClientCapabilitiesDto> newBody) {
	m_body = newBody;
}




// PostPingSystemParams



// PostUpdatedMediaParams

const QList<MediaUpdateInfoDto> &PostUpdatedMediaParams::body() const {
	return m_body;
}

void PostUpdatedMediaParams::setBody(QList<MediaUpdateInfoDto> newBody) {
	m_body = newBody;
}




// PostUpdatedMoviesParams

const QString &PostUpdatedMoviesParams::imdbId() const {
	return m_imdbId;
}

void PostUpdatedMoviesParams::setImdbId(QString newImdbId)  {
	m_imdbId = newImdbId;
}

bool PostUpdatedMoviesParams::imdbIdNull() const {
	// Nullable: true
	// Type Nullable: true
	

	return m_imdbId.isNull();
}

void PostUpdatedMoviesParams::setImdbIdNull() {
	m_imdbId.clear();
}


const QString &PostUpdatedMoviesParams::tmdbId() const {
	return m_tmdbId;
}

void PostUpdatedMoviesParams::setTmdbId(QString newTmdbId)  {
	m_tmdbId = newTmdbId;
}

bool PostUpdatedMoviesParams::tmdbIdNull() const {
	// Nullable: true
	// Type Nullable: true
	

	return m_tmdbId.isNull();
}

void PostUpdatedMoviesParams::setTmdbIdNull() {
	m_tmdbId.clear();
}




// PostUpdatedSeriesParams

const QString &PostUpdatedSeriesParams::tvdbId() const {
	return m_tvdbId;
}

void PostUpdatedSeriesParams::setTvdbId(QString newTvdbId)  {
	m_tvdbId = newTvdbId;
}

bool PostUpdatedSeriesParams::tvdbIdNull() const {
	// Nullable: true
	// Type Nullable: true
	

	return m_tvdbId.isNull();
}

void PostUpdatedSeriesParams::setTvdbIdNull() {
	m_tvdbId.clear();
}




// PostUserImageParams

const ImageType &PostUserImageParams::imageType() const {
	return m_imageType;
}

void PostUserImageParams::setImageType(ImageType newImageType) {
	m_imageType = newImageType;
}


const QString &PostUserImageParams::userId() const {
	return m_userId;
}

void PostUserImageParams::setUserId(QString newUserId) {
	m_userId = newUserId;
}


const qint32 &PostUserImageParams::index() const {
	return m_index.value();
}

void PostUserImageParams::setIndex(qint32 newIndex)  {
	m_index = newIndex;
}

bool PostUserImageParams::indexNull() const {
	// Nullable: true
	// Type Nullable: false
	

	return !m_index.has_value();
}

void PostUserImageParams::setIndexNull() {
	m_index = std::nullopt;
}




// PostUserImageByIndexParams

const ImageType &PostUserImageByIndexParams::imageType() const {
	return m_imageType;
}

void PostUserImageByIndexParams::setImageType(ImageType newImageType) {
	m_imageType = newImageType;
}


const qint32 &PostUserImageByIndexParams::index() const {
	return m_index;
}

void PostUserImageByIndexParams::setIndex(qint32 newIndex) {
	m_index = newIndex;
}


const QString &PostUserImageByIndexParams::userId() const {
	return m_userId;
}

void PostUserImageByIndexParams::setUserId(QString newUserId) {
	m_userId = newUserId;
}




// ProcessConnectionManagerControlRequestParams

const QString &ProcessConnectionManagerControlRequestParams::serverId() const {
	return m_serverId;
}

void ProcessConnectionManagerControlRequestParams::setServerId(QString newServerId) {
	m_serverId = newServerId;
}




// ProcessContentDirectoryControlRequestParams

const QString &ProcessContentDirectoryControlRequestParams::serverId() const {
	return m_serverId;
}

void ProcessContentDirectoryControlRequestParams::setServerId(QString newServerId) {
	m_serverId = newServerId;
}




// ProcessMediaReceiverRegistrarControlRequestParams

const QString &ProcessMediaReceiverRegistrarControlRequestParams::serverId() const {
	return m_serverId;
}

void ProcessMediaReceiverRegistrarControlRequestParams::setServerId(QString newServerId) {
	m_serverId = newServerId;
}




// RefreshLibraryParams



// RemoveFromCollectionParams

const QString &RemoveFromCollectionParams::collectionId() const {
	return m_collectionId;
}

void RemoveFromCollectionParams::setCollectionId(QString newCollectionId) {
	m_collectionId = newCollectionId;
}


const QStringList &RemoveFromCollectionParams::ids() const {
	return m_ids;
}

void RemoveFromCollectionParams::setIds(QStringList newIds) {
	m_ids = newIds;
}




// RemoveFromPlaylistParams

const QString &RemoveFromPlaylistParams::playlistId() const {
	return m_playlistId;
}

void RemoveFromPlaylistParams::setPlaylistId(QString newPlaylistId) {
	m_playlistId = newPlaylistId;
}


const QStringList &RemoveFromPlaylistParams::entryIds() const {
	return m_entryIds;
}

void RemoveFromPlaylistParams::setEntryIds(QStringList newEntryIds)  {
	m_entryIds = newEntryIds;
}

bool RemoveFromPlaylistParams::entryIdsNull() const {
	// Nullable: true
	// Type Nullable: true
	

	return m_entryIds.size() == 0;
}

void RemoveFromPlaylistParams::setEntryIdsNull() {
	m_entryIds.clear();
}




// RemoveMediaPathParams

const QString &RemoveMediaPathParams::name() const {
	return m_name;
}

void RemoveMediaPathParams::setName(QString newName)  {
	m_name = newName;
}

bool RemoveMediaPathParams::nameNull() const {
	// Nullable: true
	// Type Nullable: true
	

	return m_name.isNull();
}

void RemoveMediaPathParams::setNameNull() {
	m_name.clear();
}


const QString &RemoveMediaPathParams::path() const {
	return m_path;
}

void RemoveMediaPathParams::setPath(QString newPath)  {
	m_path = newPath;
}

bool RemoveMediaPathParams::pathNull() const {
	// Nullable: true
	// Type Nullable: true
	

	return m_path.isNull();
}

void RemoveMediaPathParams::setPathNull() {
	m_path.clear();
}


const bool &RemoveMediaPathParams::refreshLibrary() const {
	return m_refreshLibrary.value();
}

void RemoveMediaPathParams::setRefreshLibrary(bool newRefreshLibrary)  {
	m_refreshLibrary = newRefreshLibrary;
}

bool RemoveMediaPathParams::refreshLibraryNull() const {
	// Nullable: false
	// Type Nullable: false
	

	return !m_refreshLibrary.has_value();
}

void RemoveMediaPathParams::setRefreshLibraryNull() {
	m_refreshLibrary = std::nullopt;
}




// RemoveUserFromSessionParams

const QString &RemoveUserFromSessionParams::sessionId() const {
	return m_sessionId;
}

void RemoveUserFromSessionParams::setSessionId(QString newSessionId) {
	m_sessionId = newSessionId;
}


const QString &RemoveUserFromSessionParams::userId() const {
	return m_userId;
}

void RemoveUserFromSessionParams::setUserId(QString newUserId) {
	m_userId = newUserId;
}




// RemoveVirtualFolderParams

const QString &RemoveVirtualFolderParams::name() const {
	return m_name;
}

void RemoveVirtualFolderParams::setName(QString newName)  {
	m_name = newName;
}

bool RemoveVirtualFolderParams::nameNull() const {
	// Nullable: true
	// Type Nullable: true
	

	return m_name.isNull();
}

void RemoveVirtualFolderParams::setNameNull() {
	m_name.clear();
}


const bool &RemoveVirtualFolderParams::refreshLibrary() const {
	return m_refreshLibrary.value();
}

void RemoveVirtualFolderParams::setRefreshLibrary(bool newRefreshLibrary)  {
	m_refreshLibrary = newRefreshLibrary;
}

bool RemoveVirtualFolderParams::refreshLibraryNull() const {
	// Nullable: false
	// Type Nullable: false
	

	return !m_refreshLibrary.has_value();
}

void RemoveVirtualFolderParams::setRefreshLibraryNull() {
	m_refreshLibrary = std::nullopt;
}




// RenameVirtualFolderParams

const QString &RenameVirtualFolderParams::name() const {
	return m_name;
}

void RenameVirtualFolderParams::setName(QString newName)  {
	m_name = newName;
}

bool RenameVirtualFolderParams::nameNull() const {
	// Nullable: true
	// Type Nullable: true
	

	return m_name.isNull();
}

void RenameVirtualFolderParams::setNameNull() {
	m_name.clear();
}


const QString &RenameVirtualFolderParams::newName() const {
	return m_newName;
}

void RenameVirtualFolderParams::setNewName(QString newNewName)  {
	m_newName = newNewName;
}

bool RenameVirtualFolderParams::newNameNull() const {
	// Nullable: true
	// Type Nullable: true
	

	return m_newName.isNull();
}

void RenameVirtualFolderParams::setNewNameNull() {
	m_newName.clear();
}


const bool &RenameVirtualFolderParams::refreshLibrary() const {
	return m_refreshLibrary.value();
}

void RenameVirtualFolderParams::setRefreshLibrary(bool newRefreshLibrary)  {
	m_refreshLibrary = newRefreshLibrary;
}

bool RenameVirtualFolderParams::refreshLibraryNull() const {
	// Nullable: false
	// Type Nullable: false
	

	return !m_refreshLibrary.has_value();
}

void RenameVirtualFolderParams::setRefreshLibraryNull() {
	m_refreshLibrary = std::nullopt;
}




// ReportPlaybackProgressParams

const QSharedPointer<PlaybackProgressInfo> &ReportPlaybackProgressParams::body() const {
	return m_body;
}

void ReportPlaybackProgressParams::setBody(QSharedPointer<PlaybackProgressInfo> newBody) {
	m_body = newBody;
}




// ReportPlaybackStartParams

const QSharedPointer<PlaybackStartInfo> &ReportPlaybackStartParams::body() const {
	return m_body;
}

void ReportPlaybackStartParams::setBody(QSharedPointer<PlaybackStartInfo> newBody) {
	m_body = newBody;
}




// ReportPlaybackStoppedParams

const QSharedPointer<PlaybackStopInfo> &ReportPlaybackStoppedParams::body() const {
	return m_body;
}

void ReportPlaybackStoppedParams::setBody(QSharedPointer<PlaybackStopInfo> newBody) {
	m_body = newBody;
}




// ReportSessionEndedParams



// ReportViewingParams

const QString &ReportViewingParams::itemId() const {
	return m_itemId;
}

void ReportViewingParams::setItemId(QString newItemId) {
	m_itemId = newItemId;
}


const QString &ReportViewingParams::sessionId() const {
	return m_sessionId;
}

void ReportViewingParams::setSessionId(QString newSessionId)  {
	m_sessionId = newSessionId;
}

bool ReportViewingParams::sessionIdNull() const {
	// Nullable: true
	// Type Nullable: true
	

	return m_sessionId.isNull();
}

void ReportViewingParams::setSessionIdNull() {
	m_sessionId.clear();
}




// ResetTunerParams

const QString &ResetTunerParams::tunerId() const {
	return m_tunerId;
}

void ResetTunerParams::setTunerId(QString newTunerId) {
	m_tunerId = newTunerId;
}




// RestartApplicationParams



// RevokeKeyParams

const QString &RevokeKeyParams::key() const {
	return m_key;
}

void RevokeKeyParams::setKey(QString newKey) {
	m_key = newKey;
}




// SearchRemoteSubtitlesParams

const QString &SearchRemoteSubtitlesParams::itemId() const {
	return m_itemId;
}

void SearchRemoteSubtitlesParams::setItemId(QString newItemId) {
	m_itemId = newItemId;
}


const QString &SearchRemoteSubtitlesParams::language() const {
	return m_language;
}

void SearchRemoteSubtitlesParams::setLanguage(QString newLanguage) {
	m_language = newLanguage;
}


const bool &SearchRemoteSubtitlesParams::isPerfectMatch() const {
	return m_isPerfectMatch.value();
}

void SearchRemoteSubtitlesParams::setIsPerfectMatch(bool newIsPerfectMatch)  {
	m_isPerfectMatch = newIsPerfectMatch;
}

bool SearchRemoteSubtitlesParams::isPerfectMatchNull() const {
	// Nullable: true
	// Type Nullable: false
	

	return !m_isPerfectMatch.has_value();
}

void SearchRemoteSubtitlesParams::setIsPerfectMatchNull() {
	m_isPerfectMatch = std::nullopt;
}




// SendFullGeneralCommandParams

const QString &SendFullGeneralCommandParams::sessionId() const {
	return m_sessionId;
}

void SendFullGeneralCommandParams::setSessionId(QString newSessionId) {
	m_sessionId = newSessionId;
}


const QSharedPointer<GeneralCommand> &SendFullGeneralCommandParams::body() const {
	return m_body;
}

void SendFullGeneralCommandParams::setBody(QSharedPointer<GeneralCommand> newBody) {
	m_body = newBody;
}




// SendGeneralCommandParams

const GeneralCommandType &SendGeneralCommandParams::command() const {
	return m_command;
}

void SendGeneralCommandParams::setCommand(GeneralCommandType newCommand) {
	m_command = newCommand;
}


const QString &SendGeneralCommandParams::sessionId() const {
	return m_sessionId;
}

void SendGeneralCommandParams::setSessionId(QString newSessionId) {
	m_sessionId = newSessionId;
}




// SendMessageCommandParams

const QString &SendMessageCommandParams::sessionId() const {
	return m_sessionId;
}

void SendMessageCommandParams::setSessionId(QString newSessionId) {
	m_sessionId = newSessionId;
}


const QString &SendMessageCommandParams::text() const {
	return m_text;
}

void SendMessageCommandParams::setText(QString newText) {
	m_text = newText;
}


const QString &SendMessageCommandParams::header() const {
	return m_header;
}

void SendMessageCommandParams::setHeader(QString newHeader)  {
	m_header = newHeader;
}

bool SendMessageCommandParams::headerNull() const {
	// Nullable: true
	// Type Nullable: true
	

	return m_header.isNull();
}

void SendMessageCommandParams::setHeaderNull() {
	m_header.clear();
}


const qint64 &SendMessageCommandParams::timeoutMs() const {
	return m_timeoutMs.value();
}

void SendMessageCommandParams::setTimeoutMs(qint64 newTimeoutMs)  {
	m_timeoutMs = newTimeoutMs;
}

bool SendMessageCommandParams::timeoutMsNull() const {
	// Nullable: true
	// Type Nullable: false
	

	return !m_timeoutMs.has_value();
}

void SendMessageCommandParams::setTimeoutMsNull() {
	m_timeoutMs = std::nullopt;
}




// SendPlaystateCommandParams

const PlaystateCommand &SendPlaystateCommandParams::command() const {
	return m_command;
}

void SendPlaystateCommandParams::setCommand(PlaystateCommand newCommand) {
	m_command = newCommand;
}


const QString &SendPlaystateCommandParams::sessionId() const {
	return m_sessionId;
}

void SendPlaystateCommandParams::setSessionId(QString newSessionId) {
	m_sessionId = newSessionId;
}


const QString &SendPlaystateCommandParams::controllingUserId() const {
	return m_controllingUserId;
}

void SendPlaystateCommandParams::setControllingUserId(QString newControllingUserId)  {
	m_controllingUserId = newControllingUserId;
}

bool SendPlaystateCommandParams::controllingUserIdNull() const {
	// Nullable: true
	// Type Nullable: true
	

}

}


}