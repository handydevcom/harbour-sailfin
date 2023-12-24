project(harbour-sailfin-sailfish)

# find_library(SAILFISH sailfishapp 1.0 REQUIRED)
include(ExternalProject)
include(GeneratedSources.cmake)
# FIXME: don't hardcode /home/deploy/installroot/
set(DEPLOY_ROOT /home/deploy/installroot/)
ExternalProject_Add(BlurhashQt
	# PREFIX ${CMAKE_CURRENT_BINARY_DIR}/lib/blurhash-qt
	GIT_REPOSITORY https://github.com/HenkKalkwater/BlurhashQt.git
	GIT_TAG 61ae7f0feca6ab67da1bfdbcb222bbd12e8f7e07

	CMAKE_ARGS -DBUILD_SHARED_LIBS:BOOL=ON -DENABLE_EXPORT=OFF -DQML_PLUGIN_PATH=${PROJECT_BINARY_DIR}/plugins/)

find_package(Qt5 COMPONENTS Gui Quick LinguistTools)
find_package(SailfishApp 1.0 REQUIRED)
find_package(Qt5 5.6 COMPONENTS Multimedia Network Qml WebSockets DBus REQUIRED)
if (USE_MLITE)
    find_package(mlite5 REQUIRED)
endif()

set(JellyfinQt_SOURCES
        src/model/deviceprofile.cpp
        src/model/item.cpp
        src/model/player.cpp
        src/model/playbackmanager.cpp
        src/model/playbackreporter.cpp
        src/model/playlist.cpp
        src/model/shuffle.cpp
        src/model/user.cpp

        src/support/jsonconv.cpp
        src/support/loader.cpp
        src/support/parseexception.cpp
        src/viewmodel/item.cpp
        src/viewmodel/itemmodel.cpp
        src/viewmodel/loader.cpp
        src/viewmodel/mediastream.cpp
        src/viewmodel/modelstatus.cpp
        src/viewmodel/playbackmanager.cpp
        src/viewmodel/playlist.cpp
        src/viewmodel/settings.cpp
        src/viewmodel/userdata.cpp
        src/viewmodel/usermodel.cpp
        src/viewmodel/user.cpp
        src/apiclient.cpp
        src/apimodel.cpp
        src/credentialmanager.cpp
        src/eventbus.cpp
        src/jellyfin.cpp
        src/jsonhelper.cpp
        src/qobjectsettingswrapper.cpp
        src/serverdiscoverymodel.cpp
        src/websocket.cpp)

list(APPEND JellyfinQt_SOURCES ${openapi_SOURCES})

set(JellyfinQt_HEADERS
        include/JellyfinQt/model/deviceprofile.h
        include/JellyfinQt/model/item.h
        include/JellyfinQt/model/player.h
        include/JellyfinQt/model/playbackmanager.h
        include/JellyfinQt/model/playbackreporter.h
        include/JellyfinQt/model/playlist.h
        include/JellyfinQt/model/shuffle.h
        include/JellyfinQt/model/user.h
        include/JellyfinQt/support/jsonconv.h
        include/JellyfinQt/support/jsonconvimpl.h
        include/JellyfinQt/support/loader.h
        include/JellyfinQt/support/parseexception.h
        include/JellyfinQt/viewmodel/item.h
        include/JellyfinQt/viewmodel/itemmodel.h
        include/JellyfinQt/viewmodel/loader.h
        include/JellyfinQt/viewmodel/mediastream.h
        include/JellyfinQt/viewmodel/modelstatus.h
        include/JellyfinQt/viewmodel/propertyhelper.h
        include/JellyfinQt/viewmodel/playbackmanager.h
        include/JellyfinQt/viewmodel/platformmediacontrol.h
        include/JellyfinQt/viewmodel/playlist.h
        include/JellyfinQt/viewmodel/settings.h
        include/JellyfinQt/viewmodel/userdata.h
        include/JellyfinQt/viewmodel/usermodel.h
        include/JellyfinQt/viewmodel/user.h
        include/JellyfinQt/viewmodel/utils.h
        include/JellyfinQt/apiclient.h
        include/JellyfinQt/apimodel.h
        include/JellyfinQt/credentialmanager.h
        include/JellyfinQt/eventbus.h
        include/JellyfinQt/jellyfin.h
        include/JellyfinQt/jsonhelper.h
        include/JellyfinQt/qobjectsettingswrapper.h
        include/JellyfinQt/serverdiscoverymodel.h
        include/JellyfinQt/websocket.h)

if (FREEDESKTOP_INTEGRATION)
    list(APPEND JellyfinQt_SOURCES
        src/platform/freedesktop/mediaplayer2.cpp
        src/platform/freedesktop/mediaplayer2player.cpp
        src/viewmodel/platformmediacontrol_freedesktop.cpp)
    list(APPEND JellyfinQt_HEADERS
        include/JellyfinQt/platform/freedesktop/mediaplayer2.h
        include/JellyfinQt/platform/freedesktop/mediaplayer2player.h)
else()
    list(APPEND JellyfinQt_SOURCES
        src/viewmodel/platformmediacontrol_stub.cpp)
endif()

list(APPEND JellyfinQt_HEADERS ${openapi_HEADERS})

set(harbour-sailfin_SOURCES
	src/harbour-sailfin.cpp)

set(sailfin_QML_SOURCES
	qml/Constants.qml
	qml/Utils.js
	qml/components/music/NarrowAlbumCover.qml
	qml/components/music/WideAlbumCover.qml
	qml/components/music/SongDelegate.qml
	qml/components/videoplayer/VideoError.qml
	qml/components/videoplayer/VideoHud.qml
	qml/components/IconListItem.qml
        qml/components/ItemChildrenShowcase.qml
	qml/components/JItem.qml
	qml/components/LibraryItemDelegate.qml
	qml/components/MoreSection.qml
	qml/components/PlainLabel.qml
	qml/components/PlaybackBar.qml
	qml/components/PlayQueue.qml
	qml/components/PlayToolbar.qml
	qml/components/RemoteImage.qml
	qml/components/Shim.qml
	qml/components/UserGridDelegate.qml
	qml/components/VideoPlayer.qml
	qml/components/VideoTrackSelector.qml
        qml/cover/CollectionPage.qml
	qml/cover/PosterCover.qml
        qml/cover/NowPlayingCover.qml
	qml/pages/LegalPage.qml
	qml/pages/MainPage.qml
	qml/pages/AboutPage.qml
        qml/harbour-sailfin.qml
        qml/pages/ConnectingPage.qml
	qml/pages/SettingsPage.qml
	qml/pages/VideoPage.qml
	qml/pages/itemdetails/BaseDetailPage.qml
	qml/pages/itemdetails/CollectionPage.qml
	qml/pages/itemdetails/EpisodePage.qml
	qml/pages/itemdetails/FilmPage.qml
	qml/pages/itemdetails/MusicAlbumPage.qml
    qml/pages/itemdetails/MusicArtistPage.qml
    qml/pages/itemdetails/MusicLibraryPage.qml
	qml/pages/itemdetails/PhotoPage.qml
	qml/pages/itemdetails/SeasonPage.qml
	qml/pages/itemdetails/SeriesPage.qml
	qml/pages/itemdetails/UnsupportedPage.qml
	qml/pages/itemdetails/VideoPage.qml
	qml/pages/settings/DebugPage.qml
	qml/pages/settings/StreamingPage.qml
	qml/pages/setup/AddServerConnectingPage.qml
	qml/pages/setup/AddServerPage.qml
	qml/pages/setup/LoginDialog.qml)
	
set(TRANSLATION_SOURCE_FILES
        ${harbour-sailfin_SOURCES}
        ${sailfin_QML_SOURCES}
        )

set(TRANSLATION_TS_FILES
        translations/harbour-sailfin.ts
        translations/harbour-sailfin-de.ts
        translations/harbour-sailfin-ru.ts
       )

qt5_create_translation(TRANSLATION_QM_FILES
       ${TRANSLATION_SOURCE_FILES}
       ${TRANSLATION_TS_FILES})
add_custom_target(translations ALL DEPENDS ${TRANSLATION_QM_FILES})
add_definitions(-DSAILFIN_VERSION=\"${SAILFIN_VERSION}\")
add_executable(harbour-sailfin ${harbour-sailfin_SOURCES} ${sailfin_QML_SOURCES} ${JellyfinQt_SOURCES} ${JellyfinQt_HEADERS})

target_include_directories(harbour-sailfin PUBLIC "include")


target_link_libraries(harbour-sailfin PRIVATE Qt5::Gui Qt5::Qml Qt5::Quick SailfishApp::SailfishApp
    Qt5::Core Qt5::Multimedia Qt5::Network Qt5::Qml Qt5::WebSockets Qt5::DBus
	# Note: this may break when the compiler changes. -rdynamic and -pie seem to be needed for the 
	# invoker/booster to work
        )

    #target_compile_definitions(harbour-sailfin
        #PRIVATE $<$<OR:$<CONFIG:Debug>,$<CONFIG:RelWithDebInfo>>:QT_QML_DEBUG>)

target_compile_definitions(harbour-sailfin
        PRIVATE QT_QML_DEBUG)

install(TARGETS harbour-sailfin
	RUNTIME DESTINATION ${CMAKE_INSTALL_BINDIR})

install(DIRECTORY ${PROJECT_BINARY_DIR}/plugins/
	DESTINATION share/harbour-sailfin/)
install(DIRECTORY qml
	DESTINATION share/harbour-sailfin
)
install(FILES ${TRANSLATION_QM_FILES}
        DESTINATION share/harbour-sailfin/translations
)
install(FILES harbour-sailfin.desktop
	DESTINATION share/applications
)
install(FILES icons/86x86/harbour-sailfin.png
	DESTINATION share/icons/hicolor/86x86/apps
)
install(FILES icons/108x108/harbour-sailfin.png
	DESTINATION share/icons/hicolor/108x108/apps )
install(FILES icons/128x128/harbour-sailfin.png
	DESTINATION share/icons/hicolor/128x128/apps
)
install(FILES icons/172x172/harbour-sailfin.png
	DESTINATION share/icons/hicolor/172x172/apps )

# Tell Qt Creator where the application executable(s) would be located on the
# device.
#
# It is not necessary to list other deployables than executables (runtime
# targets) here. The deployment process of Sailfish OS projects is opaque to
# Qt Creator and the information contained in QtCreatorDeployment.txt is only
# used to locate the executable associated with the active run configuration
# on the device in order to run it.
#
# Search the Qt Creator Manual to learn about the QtCreatorDeployment.txt file
# format.
file(WRITE "${CMAKE_BINARY_DIR}/QtCreatorDeployment.txt"
        "${CMAKE_INSTALL_PREFIX}\n${CMAKE_BINARY_DIR}/sailfish/harbour-sailfin:bin")
