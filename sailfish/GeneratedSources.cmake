cmake_minimum_required(VERSION 3.0)
#[[
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

]]
set(openapi_HEADERS
	./include/JellyfinQt/dto/loglevel.h
	./include/JellyfinQt/dto/activitylogentry.h
	./include/JellyfinQt/dto/activitylogentryqueryresult.h
	./include/JellyfinQt/dto/authenticationinfo.h
	./include/JellyfinQt/dto/authenticationinfoqueryresult.h
	./include/JellyfinQt/dto/itemfields.h
	./include/JellyfinQt/dto/itemfilter.h
	./include/JellyfinQt/dto/imagetype.h
	./include/JellyfinQt/dto/video3dformat.h
	./include/JellyfinQt/dto/externalurl.h
	./include/JellyfinQt/dto/mediaprotocol.h
	./include/JellyfinQt/dto/mediasourcetype.h
	./include/JellyfinQt/dto/videotype.h
	./include/JellyfinQt/dto/isotype.h
	./include/JellyfinQt/dto/mediastreamtype.h
	./include/JellyfinQt/dto/subtitledeliverymethod.h
	./include/JellyfinQt/dto/mediastream.h
	./include/JellyfinQt/dto/mediaattachment.h
	./include/JellyfinQt/dto/transportstreamtimestamp.h
	./include/JellyfinQt/dto/mediasourceinfo.h
	./include/JellyfinQt/dto/playaccess.h
	./include/JellyfinQt/dto/mediaurl.h
	./include/JellyfinQt/dto/baseitemperson.h
	./include/JellyfinQt/dto/nameguidpair.h
	./include/JellyfinQt/dto/useritemdatadto.h
	./include/JellyfinQt/dto/dayofweek.h
	./include/JellyfinQt/dto/chapterinfo.h
	./include/JellyfinQt/dto/locationtype.h
	./include/JellyfinQt/dto/metadatafield.h
	./include/JellyfinQt/dto/imageorientation.h
	./include/JellyfinQt/dto/channeltype.h
	./include/JellyfinQt/dto/programaudio.h
	./include/JellyfinQt/dto/baseitemdto.h
	./include/JellyfinQt/dto/baseitemdtoqueryresult.h
	./include/JellyfinQt/dto/encodingcontext.h
	./include/JellyfinQt/dto/brandingoptions.h
	./include/JellyfinQt/dto/channelmediatype.h
	./include/JellyfinQt/dto/channelmediacontenttype.h
	./include/JellyfinQt/dto/channelitemsortfield.h
	./include/JellyfinQt/dto/channelfeatures.h
	./include/JellyfinQt/dto/collectioncreationresult.h
	./include/JellyfinQt/dto/version.h
	./include/JellyfinQt/dto/imagesavingconvention.h
	./include/JellyfinQt/dto/metadataoptions.h
	./include/JellyfinQt/dto/namevaluepair.h
	./include/JellyfinQt/dto/repositoryinfo.h
	./include/JellyfinQt/dto/pathsubstitution.h
	./include/JellyfinQt/dto/serverconfiguration.h
	./include/JellyfinQt/dto/mediaencoderpathdto.h
	./include/JellyfinQt/dto/problemdetails.h
	./include/JellyfinQt/dto/configurationpagetype.h
	./include/JellyfinQt/dto/configurationpageinfo.h
	./include/JellyfinQt/dto/generalcommandtype.h
	./include/JellyfinQt/dto/headermatchtype.h
	./include/JellyfinQt/dto/httpheaderinfo.h
	./include/JellyfinQt/dto/deviceidentification.h
	./include/JellyfinQt/dto/xmlattribute.h
	./include/JellyfinQt/dto/dlnaprofiletype.h
	./include/JellyfinQt/dto/directplayprofile.h
	./include/JellyfinQt/dto/transcodeseekinfo.h
	./include/JellyfinQt/dto/transcodingprofile.h
	./include/JellyfinQt/dto/profileconditiontype.h
	./include/JellyfinQt/dto/profileconditionvalue.h
	./include/JellyfinQt/dto/profilecondition.h
	./include/JellyfinQt/dto/containerprofile.h
	./include/JellyfinQt/dto/codectype.h
	./include/JellyfinQt/dto/codecprofile.h
	./include/JellyfinQt/dto/responseprofile.h
	./include/JellyfinQt/dto/subtitleprofile.h
	./include/JellyfinQt/dto/deviceprofile.h
	./include/JellyfinQt/dto/clientcapabilities.h
	./include/JellyfinQt/dto/deviceinfo.h
	./include/JellyfinQt/dto/deviceinfoqueryresult.h
	./include/JellyfinQt/dto/deviceoptions.h
	./include/JellyfinQt/dto/scrolldirection.h
	./include/JellyfinQt/dto/sortorder.h
	./include/JellyfinQt/dto/displaypreferencesdto.h
	./include/JellyfinQt/dto/deviceprofiletype.h
	./include/JellyfinQt/dto/deviceprofileinfo.h
	./include/JellyfinQt/dto/controlresponse.h
	./include/JellyfinQt/dto/defaultdirectorybrowserinfodto.h
	./include/JellyfinQt/dto/filesystementrytype.h
	./include/JellyfinQt/dto/filesystementryinfo.h
	./include/JellyfinQt/dto/validatepathdto.h
	./include/JellyfinQt/dto/queryfilterslegacy.h
	./include/JellyfinQt/dto/queryfilters.h
	./include/JellyfinQt/dto/imageformat.h
	./include/JellyfinQt/dto/imageinfo.h
	./include/JellyfinQt/dto/imagebynameinfo.h
	./include/JellyfinQt/dto/externalidmediatype.h
	./include/JellyfinQt/dto/externalidinfo.h
	./include/JellyfinQt/dto/remotesearchresult.h
	./include/JellyfinQt/dto/bookinfo.h
	./include/JellyfinQt/dto/bookinforemotesearchquery.h
	./include/JellyfinQt/dto/boxsetinfo.h
	./include/JellyfinQt/dto/boxsetinforemotesearchquery.h
	./include/JellyfinQt/dto/movieinfo.h
	./include/JellyfinQt/dto/movieinforemotesearchquery.h
	./include/JellyfinQt/dto/songinfo.h
	./include/JellyfinQt/dto/albuminfo.h
	./include/JellyfinQt/dto/albuminforemotesearchquery.h
	./include/JellyfinQt/dto/artistinfo.h
	./include/JellyfinQt/dto/artistinforemotesearchquery.h
	./include/JellyfinQt/dto/musicvideoinfo.h
	./include/JellyfinQt/dto/musicvideoinforemotesearchquery.h
	./include/JellyfinQt/dto/personlookupinfo.h
	./include/JellyfinQt/dto/personlookupinforemotesearchquery.h
	./include/JellyfinQt/dto/seriesinfo.h
	./include/JellyfinQt/dto/seriesinforemotesearchquery.h
	./include/JellyfinQt/dto/trailerinfo.h
	./include/JellyfinQt/dto/trailerinforemotesearchquery.h
	./include/JellyfinQt/dto/metadatarefreshmode.h
	./include/JellyfinQt/dto/seriesstatus.h
	./include/JellyfinQt/dto/parentalrating.h
	./include/JellyfinQt/dto/countryinfo.h
	./include/JellyfinQt/dto/culturedto.h
	./include/JellyfinQt/dto/metadataeditorinfo.h
	./include/JellyfinQt/dto/thememediaresult.h
	./include/JellyfinQt/dto/allthememediaresult.h
	./include/JellyfinQt/dto/itemcounts.h
	./include/JellyfinQt/dto/libraryoptioninfodto.h
	./include/JellyfinQt/dto/imageoption.h
	./include/JellyfinQt/dto/librarytypeoptionsdto.h
	./include/JellyfinQt/dto/libraryoptionsresultdto.h
	./include/JellyfinQt/dto/mediaupdateinfodto.h
	./include/JellyfinQt/dto/mediapathinfo.h
	./include/JellyfinQt/dto/typeoptions.h
	./include/JellyfinQt/dto/libraryoptions.h
	./include/JellyfinQt/dto/virtualfolderinfo.h
	./include/JellyfinQt/dto/addvirtualfolderdto.h
	./include/JellyfinQt/dto/updatelibraryoptionsdto.h
	./include/JellyfinQt/dto/mediapathdto.h
	./include/JellyfinQt/dto/tunerchannelmapping.h
	./include/JellyfinQt/dto/nameidpair.h
	./include/JellyfinQt/dto/channelmappingoptionsdto.h
	./include/JellyfinQt/dto/setchannelmappingdto.h
	./include/JellyfinQt/dto/guideinfo.h
	./include/JellyfinQt/dto/livetvservicestatus.h
	./include/JellyfinQt/dto/livetvserviceinfo.h
	./include/JellyfinQt/dto/livetvinfo.h
	./include/JellyfinQt/dto/listingsproviderinfo.h
	./include/JellyfinQt/dto/getprogramsdto.h
	./include/JellyfinQt/dto/recordingstatus.h
	./include/JellyfinQt/dto/keepuntil.h
	./include/JellyfinQt/dto/daypattern.h
	./include/JellyfinQt/dto/seriestimerinfodto.h
	./include/JellyfinQt/dto/seriestimerinfodtoqueryresult.h
	./include/JellyfinQt/dto/timerinfodto.h
	./include/JellyfinQt/dto/timerinfodtoqueryresult.h
	./include/JellyfinQt/dto/tunerhostinfo.h
	./include/JellyfinQt/dto/localizationoption.h
	./include/JellyfinQt/dto/playbackerrorcode.h
	./include/JellyfinQt/dto/playbackinforesponse.h
	./include/JellyfinQt/dto/playbackinfodto.h
	./include/JellyfinQt/dto/openlivestreamdto.h
	./include/JellyfinQt/dto/livestreamresponse.h
	./include/JellyfinQt/dto/recommendationtype.h
	./include/JellyfinQt/dto/recommendationdto.h
	./include/JellyfinQt/dto/notificationlevel.h
	./include/JellyfinQt/dto/notificationdto.h
	./include/JellyfinQt/dto/notificationresultdto.h
	./include/JellyfinQt/dto/notificationssummarydto.h
	./include/JellyfinQt/dto/notificationtypeinfo.h
	./include/JellyfinQt/dto/versioninfo.h
	./include/JellyfinQt/dto/packageinfo.h
	./include/JellyfinQt/dto/createplaylistdto.h
	./include/JellyfinQt/dto/playlistcreationresult.h
	./include/JellyfinQt/dto/playmethod.h
	./include/JellyfinQt/dto/repeatmode.h
	./include/JellyfinQt/dto/queueitem.h
	./include/JellyfinQt/dto/playbackstartinfo.h
	./include/JellyfinQt/dto/playbackprogressinfo.h
	./include/JellyfinQt/dto/playbackstopinfo.h
	./include/JellyfinQt/dto/pluginstatus.h
	./include/JellyfinQt/dto/plugininfo.h
	./include/JellyfinQt/dto/basepluginconfiguration.h
	./include/JellyfinQt/dto/pluginsecurityinfo.h
	./include/JellyfinQt/dto/quickconnectstate.h
	./include/JellyfinQt/dto/quickconnectresult.h
	./include/JellyfinQt/dto/ratingtype.h
	./include/JellyfinQt/dto/remoteimageinfo.h
	./include/JellyfinQt/dto/remoteimageresult.h
	./include/JellyfinQt/dto/imageproviderinfo.h
	./include/JellyfinQt/dto/taskstate.h
	./include/JellyfinQt/dto/taskcompletionstatus.h
	./include/JellyfinQt/dto/taskresult.h
	./include/JellyfinQt/dto/tasktriggerinfo.h
	./include/JellyfinQt/dto/taskinfo.h
	./include/JellyfinQt/dto/searchhint.h
	./include/JellyfinQt/dto/searchhintresult.h
	./include/JellyfinQt/dto/playerstateinfo.h
	./include/JellyfinQt/dto/sessionuserinfo.h
	./include/JellyfinQt/dto/baseitem.h
	./include/JellyfinQt/dto/transcodereason.h
	./include/JellyfinQt/dto/transcodinginfo.h
	./include/JellyfinQt/dto/sessioninfo.h
	./include/JellyfinQt/dto/generalcommand.h
	./include/JellyfinQt/dto/playcommand.h
	./include/JellyfinQt/dto/playstatecommand.h
	./include/JellyfinQt/dto/clientcapabilitiesdto.h
	./include/JellyfinQt/dto/startupconfigurationdto.h
	./include/JellyfinQt/dto/startupuserdto.h
	./include/JellyfinQt/dto/startupremoteaccessdto.h
	./include/JellyfinQt/dto/fontfile.h
	./include/JellyfinQt/dto/remotesubtitleinfo.h
	./include/JellyfinQt/dto/uploadsubtitledto.h
	./include/JellyfinQt/dto/bufferrequestdto.h
	./include/JellyfinQt/dto/joingrouprequestdto.h
	./include/JellyfinQt/dto/groupstatetype.h
	./include/JellyfinQt/dto/groupinfodto.h
	./include/JellyfinQt/dto/moveplaylistitemrequestdto.h
	./include/JellyfinQt/dto/newgrouprequestdto.h
	./include/JellyfinQt/dto/nextitemrequestdto.h
	./include/JellyfinQt/dto/pingrequestdto.h
	./include/JellyfinQt/dto/previousitemrequestdto.h
	./include/JellyfinQt/dto/groupqueuemode.h
	./include/JellyfinQt/dto/queuerequestdto.h
	./include/JellyfinQt/dto/readyrequestdto.h
	./include/JellyfinQt/dto/removefromplaylistrequestdto.h
	./include/JellyfinQt/dto/seekrequestdto.h
	./include/JellyfinQt/dto/ignorewaitrequestdto.h
	./include/JellyfinQt/dto/playrequestdto.h
	./include/JellyfinQt/dto/setplaylistitemrequestdto.h
	./include/JellyfinQt/dto/grouprepeatmode.h
	./include/JellyfinQt/dto/setrepeatmoderequestdto.h
	./include/JellyfinQt/dto/groupshufflemode.h
	./include/JellyfinQt/dto/setshufflemoderequestdto.h
	./include/JellyfinQt/dto/endpointinfo.h
	./include/JellyfinQt/dto/installationinfo.h
	./include/JellyfinQt/dto/ffmpeglocation.h
	./include/JellyfinQt/dto/architecture.h
	./include/JellyfinQt/dto/systeminfo.h
	./include/JellyfinQt/dto/publicsysteminfo.h
	./include/JellyfinQt/dto/logfile.h
	./include/JellyfinQt/dto/wakeonlaninfo.h
	./include/JellyfinQt/dto/utctimeresponse.h
	./include/JellyfinQt/dto/subtitleplaybackmode.h
	./include/JellyfinQt/dto/userconfiguration.h
	./include/JellyfinQt/dto/dynamicdayofweek.h
	./include/JellyfinQt/dto/accessschedule.h
	./include/JellyfinQt/dto/unrateditem.h
	./include/JellyfinQt/dto/syncplayuseraccesstype.h
	./include/JellyfinQt/dto/userpolicy.h
	./include/JellyfinQt/dto/userdto.h
	./include/JellyfinQt/dto/authenticationresult.h
	./include/JellyfinQt/dto/updateusereasypassword.h
	./include/JellyfinQt/dto/updateuserpassword.h
	./include/JellyfinQt/dto/authenticateuserbyname.h
	./include/JellyfinQt/dto/quickconnectdto.h
	./include/JellyfinQt/dto/forgotpassworddto.h
	./include/JellyfinQt/dto/forgotpasswordaction.h
	./include/JellyfinQt/dto/forgotpasswordresult.h
	./include/JellyfinQt/dto/pinredeemresult.h
	./include/JellyfinQt/dto/createuserbyname.h
	./include/JellyfinQt/dto/specialviewoptiondto.h
	./include/JellyfinQt/dto/libraryupdateinfo.h
	./include/JellyfinQt/dto/iplugin.h
	./include/JellyfinQt/dto/playrequest.h
	./include/JellyfinQt/dto/playstaterequest.h
	./include/JellyfinQt/dto/timereventinfo.h
	./include/JellyfinQt/dto/sendcommandtype.h
	./include/JellyfinQt/dto/sendcommand.h
	./include/JellyfinQt/dto/groupupdatetype.h
	./include/JellyfinQt/dto/objectgroupupdate.h
	./include/JellyfinQt/loader/http/subtitle.h
	./include/JellyfinQt/loader/http/activitylog.h
	./include/JellyfinQt/loader/http/library.h
	./include/JellyfinQt/loader/http/items.h
	./include/JellyfinQt/loader/http/dynamichls.h
	./include/JellyfinQt/loader/http/videoattachments.h
	./include/JellyfinQt/loader/http/itemupdate.h
	./include/JellyfinQt/loader/http/audio.h
	./include/JellyfinQt/loader/http/persons.h
	./include/JellyfinQt/loader/http/collection.h
	./include/JellyfinQt/loader/http/dlnaserver.h
	./include/JellyfinQt/loader/http/movies.h
	./include/JellyfinQt/loader/http/dashboard.h
	./include/JellyfinQt/loader/http/hlssegment.h
	./include/JellyfinQt/loader/http/branding.h
	./include/JellyfinQt/loader/http/startup.h
	./include/JellyfinQt/loader/http/channels.h
	./include/JellyfinQt/loader/http/localization.h
	./include/JellyfinQt/loader/http/videohls.h
	./include/JellyfinQt/loader/http/itemlookup.h
	./include/JellyfinQt/loader/http/system.h
	./include/JellyfinQt/loader/http/mediainfo.h
	./include/JellyfinQt/loader/http/genres.h
	./include/JellyfinQt/loader/http/syncplay.h
	./include/JellyfinQt/loader/http/universalaudio.h
	./include/JellyfinQt/loader/http/suggestions.h
	./include/JellyfinQt/loader/http/itemrefresh.h
	./include/JellyfinQt/loader/http/scheduledtasks.h
	./include/JellyfinQt/loader/http/imagebyname.h
	./include/JellyfinQt/loader/http/musicgenres.h
	./include/JellyfinQt/loader/http/user.h
	./include/JellyfinQt/loader/http/playlists.h
	./include/JellyfinQt/loader/http/userviews.h
	./include/JellyfinQt/loader/http/studios.h
	./include/JellyfinQt/loader/http/years.h
	./include/JellyfinQt/loader/http/trailers.h
	./include/JellyfinQt/loader/http/image.h
	./include/JellyfinQt/loader/http/librarystructure.h
	./include/JellyfinQt/loader/http/notifications.h
	./include/JellyfinQt/loader/http/videos.h
	./include/JellyfinQt/loader/http/package.h
	./include/JellyfinQt/loader/http/artists.h
	./include/JellyfinQt/loader/http/playstate.h
	./include/JellyfinQt/loader/http/quickconnect.h
	./include/JellyfinQt/loader/http/remoteimage.h
	./include/JellyfinQt/loader/http/userlibrary.h
	./include/JellyfinQt/loader/http/dlna.h
	./include/JellyfinQt/loader/http/configuration.h
	./include/JellyfinQt/loader/http/livetv.h
	./include/JellyfinQt/loader/http/timesync.h
	./include/JellyfinQt/loader/http/session.h
	./include/JellyfinQt/loader/http/displaypreferences.h
	./include/JellyfinQt/loader/http/instantmix.h
	./include/JellyfinQt/loader/http/apikey.h
	./include/JellyfinQt/loader/http/devices.h
	./include/JellyfinQt/loader/http/filter.h
	./include/JellyfinQt/loader/http/tvshows.h
	./include/JellyfinQt/loader/http/plugins.h
	./include/JellyfinQt/loader/http/environment.h
	./include/JellyfinQt/loader/http/search.h
	./include/JellyfinQt/loader/requesttypes.h)

set(openapi_SOURCES
	./src/dto/loglevel.cpp
	./src/dto/activitylogentry.cpp
	./src/dto/activitylogentryqueryresult.cpp
	./src/dto/authenticationinfo.cpp
	./src/dto/authenticationinfoqueryresult.cpp
	./src/dto/itemfields.cpp
	./src/dto/itemfilter.cpp
	./src/dto/imagetype.cpp
	./src/dto/video3dformat.cpp
	./src/dto/externalurl.cpp
	./src/dto/mediaprotocol.cpp
	./src/dto/mediasourcetype.cpp
	./src/dto/videotype.cpp
	./src/dto/isotype.cpp
	./src/dto/mediastreamtype.cpp
	./src/dto/subtitledeliverymethod.cpp
	./src/dto/mediastream.cpp
	./src/dto/mediaattachment.cpp
	./src/dto/transportstreamtimestamp.cpp
	./src/dto/mediasourceinfo.cpp
	./src/dto/playaccess.cpp
	./src/dto/mediaurl.cpp
	./src/dto/baseitemperson.cpp
	./src/dto/nameguidpair.cpp
	./src/dto/useritemdatadto.cpp
	./src/dto/dayofweek.cpp
	./src/dto/chapterinfo.cpp
	./src/dto/locationtype.cpp
	./src/dto/metadatafield.cpp
	./src/dto/imageorientation.cpp
	./src/dto/channeltype.cpp
	./src/dto/programaudio.cpp
	./src/dto/baseitemdto.cpp
	./src/dto/baseitemdtoqueryresult.cpp
	./src/dto/encodingcontext.cpp
	./src/dto/brandingoptions.cpp
	./src/dto/channelmediatype.cpp
	./src/dto/channelmediacontenttype.cpp
	./src/dto/channelitemsortfield.cpp
	./src/dto/channelfeatures.cpp
	./src/dto/collectioncreationresult.cpp
	./src/dto/version.cpp
	./src/dto/imagesavingconvention.cpp
	./src/dto/metadataoptions.cpp
	./src/dto/namevaluepair.cpp
	./src/dto/repositoryinfo.cpp
	./src/dto/pathsubstitution.cpp
	./src/dto/serverconfiguration.cpp
	./src/dto/mediaencoderpathdto.cpp
	./src/dto/problemdetails.cpp
	./src/dto/configurationpagetype.cpp
	./src/dto/configurationpageinfo.cpp
	./src/dto/generalcommandtype.cpp
	./src/dto/headermatchtype.cpp
	./src/dto/httpheaderinfo.cpp
	./src/dto/deviceidentification.cpp
	./src/dto/xmlattribute.cpp
	./src/dto/dlnaprofiletype.cpp
	./src/dto/directplayprofile.cpp
	./src/dto/transcodeseekinfo.cpp
	./src/dto/transcodingprofile.cpp
	./src/dto/profileconditiontype.cpp
	./src/dto/profileconditionvalue.cpp
	./src/dto/profilecondition.cpp
	./src/dto/containerprofile.cpp
	./src/dto/codectype.cpp
	./src/dto/codecprofile.cpp
	./src/dto/responseprofile.cpp
	./src/dto/subtitleprofile.cpp
	./src/dto/deviceprofile.cpp
	./src/dto/clientcapabilities.cpp
	./src/dto/deviceinfo.cpp
	./src/dto/deviceinfoqueryresult.cpp
	./src/dto/deviceoptions.cpp
	./src/dto/scrolldirection.cpp
	./src/dto/sortorder.cpp
	./src/dto/displaypreferencesdto.cpp
	./src/dto/deviceprofiletype.cpp
	./src/dto/deviceprofileinfo.cpp
	./src/dto/controlresponse.cpp
	./src/dto/defaultdirectorybrowserinfodto.cpp
	./src/dto/filesystementrytype.cpp
	./src/dto/filesystementryinfo.cpp
	./src/dto/validatepathdto.cpp
	./src/dto/queryfilterslegacy.cpp
	./src/dto/queryfilters.cpp
	./src/dto/imageformat.cpp
	./src/dto/imageinfo.cpp
	./src/dto/imagebynameinfo.cpp
	./src/dto/externalidmediatype.cpp
	./src/dto/externalidinfo.cpp
	./src/dto/remotesearchresult.cpp
	./src/dto/bookinfo.cpp
	./src/dto/bookinforemotesearchquery.cpp
	./src/dto/boxsetinfo.cpp
	./src/dto/boxsetinforemotesearchquery.cpp
	./src/dto/movieinfo.cpp
	./src/dto/movieinforemotesearchquery.cpp
	./src/dto/songinfo.cpp
	./src/dto/albuminfo.cpp
	./src/dto/albuminforemotesearchquery.cpp
	./src/dto/artistinfo.cpp
	./src/dto/artistinforemotesearchquery.cpp
	./src/dto/musicvideoinfo.cpp
	./src/dto/musicvideoinforemotesearchquery.cpp
	./src/dto/personlookupinfo.cpp
	./src/dto/personlookupinforemotesearchquery.cpp
	./src/dto/seriesinfo.cpp
	./src/dto/seriesinforemotesearchquery.cpp
	./src/dto/trailerinfo.cpp
	./src/dto/trailerinforemotesearchquery.cpp
	./src/dto/metadatarefreshmode.cpp
	./src/dto/seriesstatus.cpp
	./src/dto/parentalrating.cpp
	./src/dto/countryinfo.cpp
	./src/dto/culturedto.cpp
	./src/dto/metadataeditorinfo.cpp
	./src/dto/thememediaresult.cpp
	./src/dto/allthememediaresult.cpp
	./src/dto/itemcounts.cpp
	./src/dto/libraryoptioninfodto.cpp
	./src/dto/imageoption.cpp
	./src/dto/librarytypeoptionsdto.cpp
	./src/dto/libraryoptionsresultdto.cpp
	./src/dto/mediaupdateinfodto.cpp
	./src/dto/mediapathinfo.cpp
	./src/dto/typeoptions.cpp
	./src/dto/libraryoptions.cpp
	./src/dto/virtualfolderinfo.cpp
	./src/dto/addvirtualfolderdto.cpp
	./src/dto/updatelibraryoptionsdto.cpp
	./src/dto/mediapathdto.cpp
	./src/dto/tunerchannelmapping.cpp
	./src/dto/nameidpair.cpp
	./src/dto/channelmappingoptionsdto.cpp
	./src/dto/setchannelmappingdto.cpp
	./src/dto/guideinfo.cpp
	./src/dto/livetvservicestatus.cpp
	./src/dto/livetvserviceinfo.cpp
	./src/dto/livetvinfo.cpp
	./src/dto/listingsproviderinfo.cpp
	./src/dto/getprogramsdto.cpp
	./src/dto/recordingstatus.cpp
	./src/dto/keepuntil.cpp
	./src/dto/daypattern.cpp
	./src/dto/seriestimerinfodto.cpp
	./src/dto/seriestimerinfodtoqueryresult.cpp
	./src/dto/timerinfodto.cpp
	./src/dto/timerinfodtoqueryresult.cpp
	./src/dto/tunerhostinfo.cpp
	./src/dto/localizationoption.cpp
	./src/dto/playbackerrorcode.cpp
	./src/dto/playbackinforesponse.cpp
	./src/dto/playbackinfodto.cpp
	./src/dto/openlivestreamdto.cpp
	./src/dto/livestreamresponse.cpp
	./src/dto/recommendationtype.cpp
	./src/dto/recommendationdto.cpp
	./src/dto/notificationlevel.cpp
	./src/dto/notificationdto.cpp
	./src/dto/notificationresultdto.cpp
	./src/dto/notificationssummarydto.cpp
	./src/dto/notificationtypeinfo.cpp
	./src/dto/versioninfo.cpp
	./src/dto/packageinfo.cpp
	./src/dto/createplaylistdto.cpp
	./src/dto/playlistcreationresult.cpp
	./src/dto/playmethod.cpp
	./src/dto/repeatmode.cpp
	./src/dto/queueitem.cpp
	./src/dto/playbackstartinfo.cpp
	./src/dto/playbackprogressinfo.cpp
	./src/dto/playbackstopinfo.cpp
	./src/dto/pluginstatus.cpp
	./src/dto/plugininfo.cpp
	./src/dto/basepluginconfiguration.cpp
	./src/dto/pluginsecurityinfo.cpp
	./src/dto/quickconnectstate.cpp
	./src/dto/quickconnectresult.cpp
	./src/dto/ratingtype.cpp
	./src/dto/remoteimageinfo.cpp
	./src/dto/remoteimageresult.cpp
	./src/dto/imageproviderinfo.cpp
	./src/dto/taskstate.cpp
	./src/dto/taskcompletionstatus.cpp
	./src/dto/taskresult.cpp
	./src/dto/tasktriggerinfo.cpp
	./src/dto/taskinfo.cpp
	./src/dto/searchhint.cpp
	./src/dto/searchhintresult.cpp
	./src/dto/playerstateinfo.cpp
	./src/dto/sessionuserinfo.cpp
	./src/dto/baseitem.cpp
	./src/dto/transcodereason.cpp
	./src/dto/transcodinginfo.cpp
	./src/dto/sessioninfo.cpp
	./src/dto/generalcommand.cpp
	./src/dto/playcommand.cpp
	./src/dto/playstatecommand.cpp
	./src/dto/clientcapabilitiesdto.cpp
	./src/dto/startupconfigurationdto.cpp
	./src/dto/startupuserdto.cpp
	./src/dto/startupremoteaccessdto.cpp
	./src/dto/fontfile.cpp
	./src/dto/remotesubtitleinfo.cpp
	./src/dto/uploadsubtitledto.cpp
	./src/dto/bufferrequestdto.cpp
	./src/dto/joingrouprequestdto.cpp
	./src/dto/groupstatetype.cpp
	./src/dto/groupinfodto.cpp
	./src/dto/moveplaylistitemrequestdto.cpp
	./src/dto/newgrouprequestdto.cpp
	./src/dto/nextitemrequestdto.cpp
	./src/dto/pingrequestdto.cpp
	./src/dto/previousitemrequestdto.cpp
	./src/dto/groupqueuemode.cpp
	./src/dto/queuerequestdto.cpp
	./src/dto/readyrequestdto.cpp
	./src/dto/removefromplaylistrequestdto.cpp
	./src/dto/seekrequestdto.cpp
	./src/dto/ignorewaitrequestdto.cpp
	./src/dto/playrequestdto.cpp
	./src/dto/setplaylistitemrequestdto.cpp
	./src/dto/grouprepeatmode.cpp
	./src/dto/setrepeatmoderequestdto.cpp
	./src/dto/groupshufflemode.cpp
	./src/dto/setshufflemoderequestdto.cpp
	./src/dto/endpointinfo.cpp
	./src/dto/installationinfo.cpp
	./src/dto/ffmpeglocation.cpp
	./src/dto/architecture.cpp
	./src/dto/systeminfo.cpp
	./src/dto/publicsysteminfo.cpp
	./src/dto/logfile.cpp
	./src/dto/wakeonlaninfo.cpp
	./src/dto/utctimeresponse.cpp
	./src/dto/subtitleplaybackmode.cpp
	./src/dto/userconfiguration.cpp
	./src/dto/dynamicdayofweek.cpp
	./src/dto/accessschedule.cpp
	./src/dto/unrateditem.cpp
	./src/dto/syncplayuseraccesstype.cpp
	./src/dto/userpolicy.cpp
	./src/dto/userdto.cpp
	./src/dto/authenticationresult.cpp
	./src/dto/updateusereasypassword.cpp
	./src/dto/updateuserpassword.cpp
	./src/dto/authenticateuserbyname.cpp
	./src/dto/quickconnectdto.cpp
	./src/dto/forgotpassworddto.cpp
	./src/dto/forgotpasswordaction.cpp
	./src/dto/forgotpasswordresult.cpp
	./src/dto/pinredeemresult.cpp
	./src/dto/createuserbyname.cpp
	./src/dto/specialviewoptiondto.cpp
	./src/dto/libraryupdateinfo.cpp
	./src/dto/iplugin.cpp
	./src/dto/playrequest.cpp
	./src/dto/playstaterequest.cpp
	./src/dto/timereventinfo.cpp
	./src/dto/sendcommandtype.cpp
	./src/dto/sendcommand.cpp
	./src/dto/groupupdatetype.cpp
	./src/dto/objectgroupupdate.cpp
	./src/loader/http/subtitle.cpp
	./src/loader/http/activitylog.cpp
	./src/loader/http/library.cpp
	./src/loader/http/items.cpp
	./src/loader/http/dynamichls.cpp
	./src/loader/http/videoattachments.cpp
	./src/loader/http/itemupdate.cpp
	./src/loader/http/audio.cpp
	./src/loader/http/persons.cpp
	./src/loader/http/collection.cpp
	./src/loader/http/dlnaserver.cpp
	./src/loader/http/movies.cpp
	./src/loader/http/dashboard.cpp
	./src/loader/http/hlssegment.cpp
	./src/loader/http/branding.cpp
	./src/loader/http/startup.cpp
	./src/loader/http/channels.cpp
	./src/loader/http/localization.cpp
	./src/loader/http/videohls.cpp
	./src/loader/http/itemlookup.cpp
	./src/loader/http/system.cpp
	./src/loader/http/mediainfo.cpp
	./src/loader/http/genres.cpp
	./src/loader/http/syncplay.cpp
	./src/loader/http/universalaudio.cpp
	./src/loader/http/suggestions.cpp
	./src/loader/http/itemrefresh.cpp
	./src/loader/http/scheduledtasks.cpp
	./src/loader/http/imagebyname.cpp
	./src/loader/http/musicgenres.cpp
	./src/loader/http/user.cpp
	./src/loader/http/playlists.cpp
	./src/loader/http/userviews.cpp
	./src/loader/http/studios.cpp
	./src/loader/http/years.cpp
	./src/loader/http/trailers.cpp
	./src/loader/http/image.cpp
	./src/loader/http/librarystructure.cpp
	./src/loader/http/notifications.cpp
	./src/loader/http/videos.cpp
	./src/loader/http/package.cpp
	./src/loader/http/artists.cpp
	./src/loader/http/playstate.cpp
	./src/loader/http/quickconnect.cpp
	./src/loader/http/remoteimage.cpp
	./src/loader/http/userlibrary.cpp
	./src/loader/http/dlna.cpp
	./src/loader/http/configuration.cpp
	./src/loader/http/livetv.cpp
	./src/loader/http/timesync.cpp
	./src/loader/http/session.cpp
	./src/loader/http/displaypreferences.cpp
	./src/loader/http/instantmix.cpp
	./src/loader/http/apikey.cpp
	./src/loader/http/devices.cpp
	./src/loader/http/filter.cpp
	./src/loader/http/tvshows.cpp
	./src/loader/http/plugins.cpp
	./src/loader/http/environment.cpp
	./src/loader/http/search.cpp
	./src/loader/requesttypes.cpp)