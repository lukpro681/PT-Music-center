#############################################################################
# Makefile for building: MusicCenter
# Generated by qmake (3.1) (Qt 5.15.2)
# Project:  MusicCenter.pro
# Template: app
# Command: G:\Qt\5.15.2\mingw81_64\bin\qmake.exe -o Makefile MusicCenter.pro -spec win32-g++ "CONFIG+=qtquickcompiler"
#############################################################################

MAKEFILE      = Makefile

EQ            = =

first: release
install: release-install
uninstall: release-uninstall
QMAKE         = G:\Qt\5.15.2\mingw81_64\bin\qmake.exe
DEL_FILE      = del
CHK_DIR_EXISTS= if not exist
MKDIR         = mkdir
COPY          = copy /y
COPY_FILE     = copy /y
COPY_DIR      = xcopy /s /q /y /i
INSTALL_FILE  = copy /y
INSTALL_PROGRAM = copy /y
INSTALL_DIR   = xcopy /s /q /y /i
QINSTALL      = G:\Qt\5.15.2\mingw81_64\bin\qmake.exe -install qinstall
QINSTALL_PROGRAM = G:\Qt\5.15.2\mingw81_64\bin\qmake.exe -install qinstall -exe
DEL_FILE      = del
SYMLINK       = $(QMAKE) -install ln -f -s
DEL_DIR       = rmdir
MOVE          = move
IDC           = idc
IDL           = midl
ZIP           = zip -r -9
DEF_FILE      = 
RES_FILE      = 
SED           = $(QMAKE) -install sed
MOVE          = move
SUBTARGETS    =  \
		release \
		debug


release: FORCE
	$(MAKE) -f $(MAKEFILE).Release
release-make_first: FORCE
	$(MAKE) -f $(MAKEFILE).Release 
release-all: FORCE
	$(MAKE) -f $(MAKEFILE).Release all
release-clean: FORCE
	$(MAKE) -f $(MAKEFILE).Release clean
release-distclean: FORCE
	$(MAKE) -f $(MAKEFILE).Release distclean
release-install: FORCE
	$(MAKE) -f $(MAKEFILE).Release install
release-uninstall: FORCE
	$(MAKE) -f $(MAKEFILE).Release uninstall
debug: FORCE
	$(MAKE) -f $(MAKEFILE).Debug
debug-make_first: FORCE
	$(MAKE) -f $(MAKEFILE).Debug 
debug-all: FORCE
	$(MAKE) -f $(MAKEFILE).Debug all
debug-clean: FORCE
	$(MAKE) -f $(MAKEFILE).Debug clean
debug-distclean: FORCE
	$(MAKE) -f $(MAKEFILE).Debug distclean
debug-install: FORCE
	$(MAKE) -f $(MAKEFILE).Debug install
debug-uninstall: FORCE
	$(MAKE) -f $(MAKEFILE).Debug uninstall

Makefile: MusicCenter.pro G:/Qt/5.15.2/mingw81_64/mkspecs/win32-g++/qmake.conf G:/Qt/5.15.2/mingw81_64/mkspecs/features/spec_pre.prf \
		G:/Qt/5.15.2/mingw81_64/mkspecs/qdevice.pri \
		G:/Qt/5.15.2/mingw81_64/mkspecs/features/device_config.prf \
		G:/Qt/5.15.2/mingw81_64/mkspecs/common/sanitize.conf \
		G:/Qt/5.15.2/mingw81_64/mkspecs/common/gcc-base.conf \
		G:/Qt/5.15.2/mingw81_64/mkspecs/common/g++-base.conf \
		G:/Qt/5.15.2/mingw81_64/mkspecs/common/angle.conf \
		G:/Qt/5.15.2/mingw81_64/mkspecs/features/win32/windows_vulkan_sdk.prf \
		G:/Qt/5.15.2/mingw81_64/mkspecs/common/windows-vulkan.conf \
		G:/Qt/5.15.2/mingw81_64/mkspecs/common/g++-win32.conf \
		G:/Qt/5.15.2/mingw81_64/mkspecs/common/windows-desktop.conf \
		G:/Qt/5.15.2/mingw81_64/mkspecs/qconfig.pri \
		G:/Qt/5.15.2/mingw81_64/mkspecs/modules/qt_lib_3danimation.pri \
		G:/Qt/5.15.2/mingw81_64/mkspecs/modules/qt_lib_3danimation_private.pri \
		G:/Qt/5.15.2/mingw81_64/mkspecs/modules/qt_lib_3dcore.pri \
		G:/Qt/5.15.2/mingw81_64/mkspecs/modules/qt_lib_3dcore_private.pri \
		G:/Qt/5.15.2/mingw81_64/mkspecs/modules/qt_lib_3dextras.pri \
		G:/Qt/5.15.2/mingw81_64/mkspecs/modules/qt_lib_3dextras_private.pri \
		G:/Qt/5.15.2/mingw81_64/mkspecs/modules/qt_lib_3dinput.pri \
		G:/Qt/5.15.2/mingw81_64/mkspecs/modules/qt_lib_3dinput_private.pri \
		G:/Qt/5.15.2/mingw81_64/mkspecs/modules/qt_lib_3dlogic.pri \
		G:/Qt/5.15.2/mingw81_64/mkspecs/modules/qt_lib_3dlogic_private.pri \
		G:/Qt/5.15.2/mingw81_64/mkspecs/modules/qt_lib_3dquick.pri \
		G:/Qt/5.15.2/mingw81_64/mkspecs/modules/qt_lib_3dquick_private.pri \
		G:/Qt/5.15.2/mingw81_64/mkspecs/modules/qt_lib_3dquickanimation.pri \
		G:/Qt/5.15.2/mingw81_64/mkspecs/modules/qt_lib_3dquickanimation_private.pri \
		G:/Qt/5.15.2/mingw81_64/mkspecs/modules/qt_lib_3dquickextras.pri \
		G:/Qt/5.15.2/mingw81_64/mkspecs/modules/qt_lib_3dquickextras_private.pri \
		G:/Qt/5.15.2/mingw81_64/mkspecs/modules/qt_lib_3dquickinput.pri \
		G:/Qt/5.15.2/mingw81_64/mkspecs/modules/qt_lib_3dquickinput_private.pri \
		G:/Qt/5.15.2/mingw81_64/mkspecs/modules/qt_lib_3dquickrender.pri \
		G:/Qt/5.15.2/mingw81_64/mkspecs/modules/qt_lib_3dquickrender_private.pri \
		G:/Qt/5.15.2/mingw81_64/mkspecs/modules/qt_lib_3dquickscene2d.pri \
		G:/Qt/5.15.2/mingw81_64/mkspecs/modules/qt_lib_3dquickscene2d_private.pri \
		G:/Qt/5.15.2/mingw81_64/mkspecs/modules/qt_lib_3drender.pri \
		G:/Qt/5.15.2/mingw81_64/mkspecs/modules/qt_lib_3drender_private.pri \
		G:/Qt/5.15.2/mingw81_64/mkspecs/modules/qt_lib_accessibility_support_private.pri \
		G:/Qt/5.15.2/mingw81_64/mkspecs/modules/qt_lib_axbase.pri \
		G:/Qt/5.15.2/mingw81_64/mkspecs/modules/qt_lib_axbase_private.pri \
		G:/Qt/5.15.2/mingw81_64/mkspecs/modules/qt_lib_axcontainer.pri \
		G:/Qt/5.15.2/mingw81_64/mkspecs/modules/qt_lib_axcontainer_private.pri \
		G:/Qt/5.15.2/mingw81_64/mkspecs/modules/qt_lib_axserver.pri \
		G:/Qt/5.15.2/mingw81_64/mkspecs/modules/qt_lib_axserver_private.pri \
		G:/Qt/5.15.2/mingw81_64/mkspecs/modules/qt_lib_bluetooth.pri \
		G:/Qt/5.15.2/mingw81_64/mkspecs/modules/qt_lib_bluetooth_private.pri \
		G:/Qt/5.15.2/mingw81_64/mkspecs/modules/qt_lib_bodymovin_private.pri \
		G:/Qt/5.15.2/mingw81_64/mkspecs/modules/qt_lib_bootstrap_private.pri \
		G:/Qt/5.15.2/mingw81_64/mkspecs/modules/qt_lib_charts.pri \
		G:/Qt/5.15.2/mingw81_64/mkspecs/modules/qt_lib_charts_private.pri \
		G:/Qt/5.15.2/mingw81_64/mkspecs/modules/qt_lib_concurrent.pri \
		G:/Qt/5.15.2/mingw81_64/mkspecs/modules/qt_lib_concurrent_private.pri \
		G:/Qt/5.15.2/mingw81_64/mkspecs/modules/qt_lib_core.pri \
		G:/Qt/5.15.2/mingw81_64/mkspecs/modules/qt_lib_core_private.pri \
		G:/Qt/5.15.2/mingw81_64/mkspecs/modules/qt_lib_datavisualization.pri \
		G:/Qt/5.15.2/mingw81_64/mkspecs/modules/qt_lib_datavisualization_private.pri \
		G:/Qt/5.15.2/mingw81_64/mkspecs/modules/qt_lib_dbus.pri \
		G:/Qt/5.15.2/mingw81_64/mkspecs/modules/qt_lib_dbus_private.pri \
		G:/Qt/5.15.2/mingw81_64/mkspecs/modules/qt_lib_designer.pri \
		G:/Qt/5.15.2/mingw81_64/mkspecs/modules/qt_lib_designer_private.pri \
		G:/Qt/5.15.2/mingw81_64/mkspecs/modules/qt_lib_designercomponents_private.pri \
		G:/Qt/5.15.2/mingw81_64/mkspecs/modules/qt_lib_devicediscovery_support_private.pri \
		G:/Qt/5.15.2/mingw81_64/mkspecs/modules/qt_lib_edid_support_private.pri \
		G:/Qt/5.15.2/mingw81_64/mkspecs/modules/qt_lib_egl_support_private.pri \
		G:/Qt/5.15.2/mingw81_64/mkspecs/modules/qt_lib_eventdispatcher_support_private.pri \
		G:/Qt/5.15.2/mingw81_64/mkspecs/modules/qt_lib_fb_support_private.pri \
		G:/Qt/5.15.2/mingw81_64/mkspecs/modules/qt_lib_fontdatabase_support_private.pri \
		G:/Qt/5.15.2/mingw81_64/mkspecs/modules/qt_lib_gamepad.pri \
		G:/Qt/5.15.2/mingw81_64/mkspecs/modules/qt_lib_gamepad_private.pri \
		G:/Qt/5.15.2/mingw81_64/mkspecs/modules/qt_lib_gui.pri \
		G:/Qt/5.15.2/mingw81_64/mkspecs/modules/qt_lib_gui_private.pri \
		G:/Qt/5.15.2/mingw81_64/mkspecs/modules/qt_lib_help.pri \
		G:/Qt/5.15.2/mingw81_64/mkspecs/modules/qt_lib_help_private.pri \
		G:/Qt/5.15.2/mingw81_64/mkspecs/modules/qt_lib_insighttracker.pri \
		G:/Qt/5.15.2/mingw81_64/mkspecs/modules/qt_lib_insighttracker_private.pri \
		G:/Qt/5.15.2/mingw81_64/mkspecs/modules/qt_lib_insighttrackerqml.pri \
		G:/Qt/5.15.2/mingw81_64/mkspecs/modules/qt_lib_insighttrackerqml_private.pri \
		G:/Qt/5.15.2/mingw81_64/mkspecs/modules/qt_lib_location.pri \
		G:/Qt/5.15.2/mingw81_64/mkspecs/modules/qt_lib_location_private.pri \
		G:/Qt/5.15.2/mingw81_64/mkspecs/modules/qt_lib_multimedia.pri \
		G:/Qt/5.15.2/mingw81_64/mkspecs/modules/qt_lib_multimedia_private.pri \
		G:/Qt/5.15.2/mingw81_64/mkspecs/modules/qt_lib_multimediawidgets.pri \
		G:/Qt/5.15.2/mingw81_64/mkspecs/modules/qt_lib_multimediawidgets_private.pri \
		G:/Qt/5.15.2/mingw81_64/mkspecs/modules/qt_lib_network.pri \
		G:/Qt/5.15.2/mingw81_64/mkspecs/modules/qt_lib_network_private.pri \
		G:/Qt/5.15.2/mingw81_64/mkspecs/modules/qt_lib_networkauth.pri \
		G:/Qt/5.15.2/mingw81_64/mkspecs/modules/qt_lib_networkauth_private.pri \
		G:/Qt/5.15.2/mingw81_64/mkspecs/modules/qt_lib_nfc.pri \
		G:/Qt/5.15.2/mingw81_64/mkspecs/modules/qt_lib_nfc_private.pri \
		G:/Qt/5.15.2/mingw81_64/mkspecs/modules/qt_lib_opengl.pri \
		G:/Qt/5.15.2/mingw81_64/mkspecs/modules/qt_lib_opengl_private.pri \
		G:/Qt/5.15.2/mingw81_64/mkspecs/modules/qt_lib_openglextensions.pri \
		G:/Qt/5.15.2/mingw81_64/mkspecs/modules/qt_lib_openglextensions_private.pri \
		G:/Qt/5.15.2/mingw81_64/mkspecs/modules/qt_lib_packetprotocol_private.pri \
		G:/Qt/5.15.2/mingw81_64/mkspecs/modules/qt_lib_platformcompositor_support_private.pri \
		G:/Qt/5.15.2/mingw81_64/mkspecs/modules/qt_lib_positioning.pri \
		G:/Qt/5.15.2/mingw81_64/mkspecs/modules/qt_lib_positioning_private.pri \
		G:/Qt/5.15.2/mingw81_64/mkspecs/modules/qt_lib_positioningquick.pri \
		G:/Qt/5.15.2/mingw81_64/mkspecs/modules/qt_lib_positioningquick_private.pri \
		G:/Qt/5.15.2/mingw81_64/mkspecs/modules/qt_lib_printsupport.pri \
		G:/Qt/5.15.2/mingw81_64/mkspecs/modules/qt_lib_printsupport_private.pri \
		G:/Qt/5.15.2/mingw81_64/mkspecs/modules/qt_lib_purchasing.pri \
		G:/Qt/5.15.2/mingw81_64/mkspecs/modules/qt_lib_purchasing_private.pri \
		G:/Qt/5.15.2/mingw81_64/mkspecs/modules/qt_lib_qml.pri \
		G:/Qt/5.15.2/mingw81_64/mkspecs/modules/qt_lib_qml_private.pri \
		G:/Qt/5.15.2/mingw81_64/mkspecs/modules/qt_lib_qmldebug_private.pri \
		G:/Qt/5.15.2/mingw81_64/mkspecs/modules/qt_lib_qmldevtools_private.pri \
		G:/Qt/5.15.2/mingw81_64/mkspecs/modules/qt_lib_qmlmodels.pri \
		G:/Qt/5.15.2/mingw81_64/mkspecs/modules/qt_lib_qmlmodels_private.pri \
		G:/Qt/5.15.2/mingw81_64/mkspecs/modules/qt_lib_qmltest.pri \
		G:/Qt/5.15.2/mingw81_64/mkspecs/modules/qt_lib_qmltest_private.pri \
		G:/Qt/5.15.2/mingw81_64/mkspecs/modules/qt_lib_qmlworkerscript.pri \
		G:/Qt/5.15.2/mingw81_64/mkspecs/modules/qt_lib_qmlworkerscript_private.pri \
		G:/Qt/5.15.2/mingw81_64/mkspecs/modules/qt_lib_qtmultimediaquicktools_private.pri \
		G:/Qt/5.15.2/mingw81_64/mkspecs/modules/qt_lib_quick.pri \
		G:/Qt/5.15.2/mingw81_64/mkspecs/modules/qt_lib_quick3d.pri \
		G:/Qt/5.15.2/mingw81_64/mkspecs/modules/qt_lib_quick3d_private.pri \
		G:/Qt/5.15.2/mingw81_64/mkspecs/modules/qt_lib_quick3dassetimport.pri \
		G:/Qt/5.15.2/mingw81_64/mkspecs/modules/qt_lib_quick3dassetimport_private.pri \
		G:/Qt/5.15.2/mingw81_64/mkspecs/modules/qt_lib_quick3drender.pri \
		G:/Qt/5.15.2/mingw81_64/mkspecs/modules/qt_lib_quick3drender_private.pri \
		G:/Qt/5.15.2/mingw81_64/mkspecs/modules/qt_lib_quick3druntimerender.pri \
		G:/Qt/5.15.2/mingw81_64/mkspecs/modules/qt_lib_quick3druntimerender_private.pri \
		G:/Qt/5.15.2/mingw81_64/mkspecs/modules/qt_lib_quick3dutils.pri \
		G:/Qt/5.15.2/mingw81_64/mkspecs/modules/qt_lib_quick3dutils_private.pri \
		G:/Qt/5.15.2/mingw81_64/mkspecs/modules/qt_lib_quick_private.pri \
		G:/Qt/5.15.2/mingw81_64/mkspecs/modules/qt_lib_quickcontrols2.pri \
		G:/Qt/5.15.2/mingw81_64/mkspecs/modules/qt_lib_quickcontrols2_private.pri \
		G:/Qt/5.15.2/mingw81_64/mkspecs/modules/qt_lib_quickparticles_private.pri \
		G:/Qt/5.15.2/mingw81_64/mkspecs/modules/qt_lib_quickshapes_private.pri \
		G:/Qt/5.15.2/mingw81_64/mkspecs/modules/qt_lib_quicktemplates2.pri \
		G:/Qt/5.15.2/mingw81_64/mkspecs/modules/qt_lib_quicktemplates2_private.pri \
		G:/Qt/5.15.2/mingw81_64/mkspecs/modules/qt_lib_quickwidgets.pri \
		G:/Qt/5.15.2/mingw81_64/mkspecs/modules/qt_lib_quickwidgets_private.pri \
		G:/Qt/5.15.2/mingw81_64/mkspecs/modules/qt_lib_remoteobjects.pri \
		G:/Qt/5.15.2/mingw81_64/mkspecs/modules/qt_lib_remoteobjects_private.pri \
		G:/Qt/5.15.2/mingw81_64/mkspecs/modules/qt_lib_repparser.pri \
		G:/Qt/5.15.2/mingw81_64/mkspecs/modules/qt_lib_repparser_private.pri \
		G:/Qt/5.15.2/mingw81_64/mkspecs/modules/qt_lib_script.pri \
		G:/Qt/5.15.2/mingw81_64/mkspecs/modules/qt_lib_script_private.pri \
		G:/Qt/5.15.2/mingw81_64/mkspecs/modules/qt_lib_scripttools.pri \
		G:/Qt/5.15.2/mingw81_64/mkspecs/modules/qt_lib_scripttools_private.pri \
		G:/Qt/5.15.2/mingw81_64/mkspecs/modules/qt_lib_scxml.pri \
		G:/Qt/5.15.2/mingw81_64/mkspecs/modules/qt_lib_scxml_private.pri \
		G:/Qt/5.15.2/mingw81_64/mkspecs/modules/qt_lib_sensors.pri \
		G:/Qt/5.15.2/mingw81_64/mkspecs/modules/qt_lib_sensors_private.pri \
		G:/Qt/5.15.2/mingw81_64/mkspecs/modules/qt_lib_serialbus.pri \
		G:/Qt/5.15.2/mingw81_64/mkspecs/modules/qt_lib_serialbus_private.pri \
		G:/Qt/5.15.2/mingw81_64/mkspecs/modules/qt_lib_serialport.pri \
		G:/Qt/5.15.2/mingw81_64/mkspecs/modules/qt_lib_serialport_private.pri \
		G:/Qt/5.15.2/mingw81_64/mkspecs/modules/qt_lib_sql.pri \
		G:/Qt/5.15.2/mingw81_64/mkspecs/modules/qt_lib_sql_private.pri \
		G:/Qt/5.15.2/mingw81_64/mkspecs/modules/qt_lib_svg.pri \
		G:/Qt/5.15.2/mingw81_64/mkspecs/modules/qt_lib_svg_private.pri \
		G:/Qt/5.15.2/mingw81_64/mkspecs/modules/qt_lib_testlib.pri \
		G:/Qt/5.15.2/mingw81_64/mkspecs/modules/qt_lib_testlib_private.pri \
		G:/Qt/5.15.2/mingw81_64/mkspecs/modules/qt_lib_texttospeech.pri \
		G:/Qt/5.15.2/mingw81_64/mkspecs/modules/qt_lib_texttospeech_private.pri \
		G:/Qt/5.15.2/mingw81_64/mkspecs/modules/qt_lib_theme_support_private.pri \
		G:/Qt/5.15.2/mingw81_64/mkspecs/modules/qt_lib_uiplugin.pri \
		G:/Qt/5.15.2/mingw81_64/mkspecs/modules/qt_lib_uitools.pri \
		G:/Qt/5.15.2/mingw81_64/mkspecs/modules/qt_lib_uitools_private.pri \
		G:/Qt/5.15.2/mingw81_64/mkspecs/modules/qt_lib_virtualkeyboard.pri \
		G:/Qt/5.15.2/mingw81_64/mkspecs/modules/qt_lib_virtualkeyboard_private.pri \
		G:/Qt/5.15.2/mingw81_64/mkspecs/modules/qt_lib_vulkan_support_private.pri \
		G:/Qt/5.15.2/mingw81_64/mkspecs/modules/qt_lib_webchannel.pri \
		G:/Qt/5.15.2/mingw81_64/mkspecs/modules/qt_lib_webchannel_private.pri \
		G:/Qt/5.15.2/mingw81_64/mkspecs/modules/qt_lib_websockets.pri \
		G:/Qt/5.15.2/mingw81_64/mkspecs/modules/qt_lib_websockets_private.pri \
		G:/Qt/5.15.2/mingw81_64/mkspecs/modules/qt_lib_widgets.pri \
		G:/Qt/5.15.2/mingw81_64/mkspecs/modules/qt_lib_widgets_private.pri \
		G:/Qt/5.15.2/mingw81_64/mkspecs/modules/qt_lib_windowsuiautomation_support_private.pri \
		G:/Qt/5.15.2/mingw81_64/mkspecs/modules/qt_lib_winextras.pri \
		G:/Qt/5.15.2/mingw81_64/mkspecs/modules/qt_lib_winextras_private.pri \
		G:/Qt/5.15.2/mingw81_64/mkspecs/modules/qt_lib_xml.pri \
		G:/Qt/5.15.2/mingw81_64/mkspecs/modules/qt_lib_xml_private.pri \
		G:/Qt/5.15.2/mingw81_64/mkspecs/modules/qt_lib_xmlpatterns.pri \
		G:/Qt/5.15.2/mingw81_64/mkspecs/modules/qt_lib_xmlpatterns_private.pri \
		G:/Qt/5.15.2/mingw81_64/mkspecs/modules/qt_lib_zlib_private.pri \
		G:/Qt/5.15.2/mingw81_64/mkspecs/features/qt_functions.prf \
		G:/Qt/5.15.2/mingw81_64/mkspecs/features/qt_config.prf \
		G:/Qt/5.15.2/mingw81_64/mkspecs/win32-g++/qmake.conf \
		G:/Qt/5.15.2/mingw81_64/mkspecs/features/spec_post.prf \
		.qmake.stash \
		G:/Qt/5.15.2/mingw81_64/mkspecs/features/exclusive_builds.prf \
		G:/Qt/5.15.2/mingw81_64/mkspecs/features/toolchain.prf \
		G:/Qt/5.15.2/mingw81_64/mkspecs/features/default_pre.prf \
		G:/Qt/5.15.2/mingw81_64/mkspecs/features/win32/default_pre.prf \
		G:/Qt/5.15.2/mingw81_64/mkspecs/features/resolve_config.prf \
		G:/Qt/5.15.2/mingw81_64/mkspecs/features/exclusive_builds_post.prf \
		G:/Qt/5.15.2/mingw81_64/mkspecs/features/default_post.prf \
		G:/Qt/5.15.2/mingw81_64/mkspecs/features/lrelease.prf \
		G:/Qt/5.15.2/mingw81_64/mkspecs/features/qtquickcompiler.prf \
		G:/Qt/5.15.2/mingw81_64/mkspecs/features/precompile_header.prf \
		G:/Qt/5.15.2/mingw81_64/mkspecs/features/warn_on.prf \
		G:/Qt/5.15.2/mingw81_64/mkspecs/features/qt.prf \
		G:/Qt/5.15.2/mingw81_64/mkspecs/features/resources_functions.prf \
		G:/Qt/5.15.2/mingw81_64/mkspecs/features/resources.prf \
		G:/Qt/5.15.2/mingw81_64/mkspecs/features/moc.prf \
		G:/Qt/5.15.2/mingw81_64/mkspecs/features/win32/opengl.prf \
		G:/Qt/5.15.2/mingw81_64/mkspecs/features/uic.prf \
		G:/Qt/5.15.2/mingw81_64/mkspecs/features/qmake_use.prf \
		G:/Qt/5.15.2/mingw81_64/mkspecs/features/file_copies.prf \
		G:/Qt/5.15.2/mingw81_64/mkspecs/features/win32/windows.prf \
		G:/Qt/5.15.2/mingw81_64/mkspecs/features/testcase_targets.prf \
		G:/Qt/5.15.2/mingw81_64/mkspecs/features/exceptions.prf \
		G:/Qt/5.15.2/mingw81_64/mkspecs/features/yacc.prf \
		G:/Qt/5.15.2/mingw81_64/mkspecs/features/lex.prf \
		MusicCenter.pro \
		G:/Qt/5.15.2/mingw81_64/lib/Qt5Multimedia.prl \
		G:/Qt/5.15.2/mingw81_64/lib/Qt5Widgets.prl \
		G:/Qt/5.15.2/mingw81_64/lib/Qt5Gui.prl \
		G:/Qt/5.15.2/mingw81_64/lib/Qt5Network.prl \
		G:/Qt/5.15.2/mingw81_64/lib/Qt5Core.prl \
		G:/Qt/5.15.2/mingw81_64/lib/qtmain.prl \
		G:/Qt/5.15.2/mingw81_64/mkspecs/features/build_pass.prf \
		release/qmake_qmake_qm_files.qrc \
		debug/qmake_qmake_qm_files.qrc
	$(QMAKE) -o Makefile MusicCenter.pro -spec win32-g++ "CONFIG+=qtquickcompiler"
G:/Qt/5.15.2/mingw81_64/mkspecs/features/spec_pre.prf:
G:/Qt/5.15.2/mingw81_64/mkspecs/qdevice.pri:
G:/Qt/5.15.2/mingw81_64/mkspecs/features/device_config.prf:
G:/Qt/5.15.2/mingw81_64/mkspecs/common/sanitize.conf:
G:/Qt/5.15.2/mingw81_64/mkspecs/common/gcc-base.conf:
G:/Qt/5.15.2/mingw81_64/mkspecs/common/g++-base.conf:
G:/Qt/5.15.2/mingw81_64/mkspecs/common/angle.conf:
G:/Qt/5.15.2/mingw81_64/mkspecs/features/win32/windows_vulkan_sdk.prf:
G:/Qt/5.15.2/mingw81_64/mkspecs/common/windows-vulkan.conf:
G:/Qt/5.15.2/mingw81_64/mkspecs/common/g++-win32.conf:
G:/Qt/5.15.2/mingw81_64/mkspecs/common/windows-desktop.conf:
G:/Qt/5.15.2/mingw81_64/mkspecs/qconfig.pri:
G:/Qt/5.15.2/mingw81_64/mkspecs/modules/qt_lib_3danimation.pri:
G:/Qt/5.15.2/mingw81_64/mkspecs/modules/qt_lib_3danimation_private.pri:
G:/Qt/5.15.2/mingw81_64/mkspecs/modules/qt_lib_3dcore.pri:
G:/Qt/5.15.2/mingw81_64/mkspecs/modules/qt_lib_3dcore_private.pri:
G:/Qt/5.15.2/mingw81_64/mkspecs/modules/qt_lib_3dextras.pri:
G:/Qt/5.15.2/mingw81_64/mkspecs/modules/qt_lib_3dextras_private.pri:
G:/Qt/5.15.2/mingw81_64/mkspecs/modules/qt_lib_3dinput.pri:
G:/Qt/5.15.2/mingw81_64/mkspecs/modules/qt_lib_3dinput_private.pri:
G:/Qt/5.15.2/mingw81_64/mkspecs/modules/qt_lib_3dlogic.pri:
G:/Qt/5.15.2/mingw81_64/mkspecs/modules/qt_lib_3dlogic_private.pri:
G:/Qt/5.15.2/mingw81_64/mkspecs/modules/qt_lib_3dquick.pri:
G:/Qt/5.15.2/mingw81_64/mkspecs/modules/qt_lib_3dquick_private.pri:
G:/Qt/5.15.2/mingw81_64/mkspecs/modules/qt_lib_3dquickanimation.pri:
G:/Qt/5.15.2/mingw81_64/mkspecs/modules/qt_lib_3dquickanimation_private.pri:
G:/Qt/5.15.2/mingw81_64/mkspecs/modules/qt_lib_3dquickextras.pri:
G:/Qt/5.15.2/mingw81_64/mkspecs/modules/qt_lib_3dquickextras_private.pri:
G:/Qt/5.15.2/mingw81_64/mkspecs/modules/qt_lib_3dquickinput.pri:
G:/Qt/5.15.2/mingw81_64/mkspecs/modules/qt_lib_3dquickinput_private.pri:
G:/Qt/5.15.2/mingw81_64/mkspecs/modules/qt_lib_3dquickrender.pri:
G:/Qt/5.15.2/mingw81_64/mkspecs/modules/qt_lib_3dquickrender_private.pri:
G:/Qt/5.15.2/mingw81_64/mkspecs/modules/qt_lib_3dquickscene2d.pri:
G:/Qt/5.15.2/mingw81_64/mkspecs/modules/qt_lib_3dquickscene2d_private.pri:
G:/Qt/5.15.2/mingw81_64/mkspecs/modules/qt_lib_3drender.pri:
G:/Qt/5.15.2/mingw81_64/mkspecs/modules/qt_lib_3drender_private.pri:
G:/Qt/5.15.2/mingw81_64/mkspecs/modules/qt_lib_accessibility_support_private.pri:
G:/Qt/5.15.2/mingw81_64/mkspecs/modules/qt_lib_axbase.pri:
G:/Qt/5.15.2/mingw81_64/mkspecs/modules/qt_lib_axbase_private.pri:
G:/Qt/5.15.2/mingw81_64/mkspecs/modules/qt_lib_axcontainer.pri:
G:/Qt/5.15.2/mingw81_64/mkspecs/modules/qt_lib_axcontainer_private.pri:
G:/Qt/5.15.2/mingw81_64/mkspecs/modules/qt_lib_axserver.pri:
G:/Qt/5.15.2/mingw81_64/mkspecs/modules/qt_lib_axserver_private.pri:
G:/Qt/5.15.2/mingw81_64/mkspecs/modules/qt_lib_bluetooth.pri:
G:/Qt/5.15.2/mingw81_64/mkspecs/modules/qt_lib_bluetooth_private.pri:
G:/Qt/5.15.2/mingw81_64/mkspecs/modules/qt_lib_bodymovin_private.pri:
G:/Qt/5.15.2/mingw81_64/mkspecs/modules/qt_lib_bootstrap_private.pri:
G:/Qt/5.15.2/mingw81_64/mkspecs/modules/qt_lib_charts.pri:
G:/Qt/5.15.2/mingw81_64/mkspecs/modules/qt_lib_charts_private.pri:
G:/Qt/5.15.2/mingw81_64/mkspecs/modules/qt_lib_concurrent.pri:
G:/Qt/5.15.2/mingw81_64/mkspecs/modules/qt_lib_concurrent_private.pri:
G:/Qt/5.15.2/mingw81_64/mkspecs/modules/qt_lib_core.pri:
G:/Qt/5.15.2/mingw81_64/mkspecs/modules/qt_lib_core_private.pri:
G:/Qt/5.15.2/mingw81_64/mkspecs/modules/qt_lib_datavisualization.pri:
G:/Qt/5.15.2/mingw81_64/mkspecs/modules/qt_lib_datavisualization_private.pri:
G:/Qt/5.15.2/mingw81_64/mkspecs/modules/qt_lib_dbus.pri:
G:/Qt/5.15.2/mingw81_64/mkspecs/modules/qt_lib_dbus_private.pri:
G:/Qt/5.15.2/mingw81_64/mkspecs/modules/qt_lib_designer.pri:
G:/Qt/5.15.2/mingw81_64/mkspecs/modules/qt_lib_designer_private.pri:
G:/Qt/5.15.2/mingw81_64/mkspecs/modules/qt_lib_designercomponents_private.pri:
G:/Qt/5.15.2/mingw81_64/mkspecs/modules/qt_lib_devicediscovery_support_private.pri:
G:/Qt/5.15.2/mingw81_64/mkspecs/modules/qt_lib_edid_support_private.pri:
G:/Qt/5.15.2/mingw81_64/mkspecs/modules/qt_lib_egl_support_private.pri:
G:/Qt/5.15.2/mingw81_64/mkspecs/modules/qt_lib_eventdispatcher_support_private.pri:
G:/Qt/5.15.2/mingw81_64/mkspecs/modules/qt_lib_fb_support_private.pri:
G:/Qt/5.15.2/mingw81_64/mkspecs/modules/qt_lib_fontdatabase_support_private.pri:
G:/Qt/5.15.2/mingw81_64/mkspecs/modules/qt_lib_gamepad.pri:
G:/Qt/5.15.2/mingw81_64/mkspecs/modules/qt_lib_gamepad_private.pri:
G:/Qt/5.15.2/mingw81_64/mkspecs/modules/qt_lib_gui.pri:
G:/Qt/5.15.2/mingw81_64/mkspecs/modules/qt_lib_gui_private.pri:
G:/Qt/5.15.2/mingw81_64/mkspecs/modules/qt_lib_help.pri:
G:/Qt/5.15.2/mingw81_64/mkspecs/modules/qt_lib_help_private.pri:
G:/Qt/5.15.2/mingw81_64/mkspecs/modules/qt_lib_insighttracker.pri:
G:/Qt/5.15.2/mingw81_64/mkspecs/modules/qt_lib_insighttracker_private.pri:
G:/Qt/5.15.2/mingw81_64/mkspecs/modules/qt_lib_insighttrackerqml.pri:
G:/Qt/5.15.2/mingw81_64/mkspecs/modules/qt_lib_insighttrackerqml_private.pri:
G:/Qt/5.15.2/mingw81_64/mkspecs/modules/qt_lib_location.pri:
G:/Qt/5.15.2/mingw81_64/mkspecs/modules/qt_lib_location_private.pri:
G:/Qt/5.15.2/mingw81_64/mkspecs/modules/qt_lib_multimedia.pri:
G:/Qt/5.15.2/mingw81_64/mkspecs/modules/qt_lib_multimedia_private.pri:
G:/Qt/5.15.2/mingw81_64/mkspecs/modules/qt_lib_multimediawidgets.pri:
G:/Qt/5.15.2/mingw81_64/mkspecs/modules/qt_lib_multimediawidgets_private.pri:
G:/Qt/5.15.2/mingw81_64/mkspecs/modules/qt_lib_network.pri:
G:/Qt/5.15.2/mingw81_64/mkspecs/modules/qt_lib_network_private.pri:
G:/Qt/5.15.2/mingw81_64/mkspecs/modules/qt_lib_networkauth.pri:
G:/Qt/5.15.2/mingw81_64/mkspecs/modules/qt_lib_networkauth_private.pri:
G:/Qt/5.15.2/mingw81_64/mkspecs/modules/qt_lib_nfc.pri:
G:/Qt/5.15.2/mingw81_64/mkspecs/modules/qt_lib_nfc_private.pri:
G:/Qt/5.15.2/mingw81_64/mkspecs/modules/qt_lib_opengl.pri:
G:/Qt/5.15.2/mingw81_64/mkspecs/modules/qt_lib_opengl_private.pri:
G:/Qt/5.15.2/mingw81_64/mkspecs/modules/qt_lib_openglextensions.pri:
G:/Qt/5.15.2/mingw81_64/mkspecs/modules/qt_lib_openglextensions_private.pri:
G:/Qt/5.15.2/mingw81_64/mkspecs/modules/qt_lib_packetprotocol_private.pri:
G:/Qt/5.15.2/mingw81_64/mkspecs/modules/qt_lib_platformcompositor_support_private.pri:
G:/Qt/5.15.2/mingw81_64/mkspecs/modules/qt_lib_positioning.pri:
G:/Qt/5.15.2/mingw81_64/mkspecs/modules/qt_lib_positioning_private.pri:
G:/Qt/5.15.2/mingw81_64/mkspecs/modules/qt_lib_positioningquick.pri:
G:/Qt/5.15.2/mingw81_64/mkspecs/modules/qt_lib_positioningquick_private.pri:
G:/Qt/5.15.2/mingw81_64/mkspecs/modules/qt_lib_printsupport.pri:
G:/Qt/5.15.2/mingw81_64/mkspecs/modules/qt_lib_printsupport_private.pri:
G:/Qt/5.15.2/mingw81_64/mkspecs/modules/qt_lib_purchasing.pri:
G:/Qt/5.15.2/mingw81_64/mkspecs/modules/qt_lib_purchasing_private.pri:
G:/Qt/5.15.2/mingw81_64/mkspecs/modules/qt_lib_qml.pri:
G:/Qt/5.15.2/mingw81_64/mkspecs/modules/qt_lib_qml_private.pri:
G:/Qt/5.15.2/mingw81_64/mkspecs/modules/qt_lib_qmldebug_private.pri:
G:/Qt/5.15.2/mingw81_64/mkspecs/modules/qt_lib_qmldevtools_private.pri:
G:/Qt/5.15.2/mingw81_64/mkspecs/modules/qt_lib_qmlmodels.pri:
G:/Qt/5.15.2/mingw81_64/mkspecs/modules/qt_lib_qmlmodels_private.pri:
G:/Qt/5.15.2/mingw81_64/mkspecs/modules/qt_lib_qmltest.pri:
G:/Qt/5.15.2/mingw81_64/mkspecs/modules/qt_lib_qmltest_private.pri:
G:/Qt/5.15.2/mingw81_64/mkspecs/modules/qt_lib_qmlworkerscript.pri:
G:/Qt/5.15.2/mingw81_64/mkspecs/modules/qt_lib_qmlworkerscript_private.pri:
G:/Qt/5.15.2/mingw81_64/mkspecs/modules/qt_lib_qtmultimediaquicktools_private.pri:
G:/Qt/5.15.2/mingw81_64/mkspecs/modules/qt_lib_quick.pri:
G:/Qt/5.15.2/mingw81_64/mkspecs/modules/qt_lib_quick3d.pri:
G:/Qt/5.15.2/mingw81_64/mkspecs/modules/qt_lib_quick3d_private.pri:
G:/Qt/5.15.2/mingw81_64/mkspecs/modules/qt_lib_quick3dassetimport.pri:
G:/Qt/5.15.2/mingw81_64/mkspecs/modules/qt_lib_quick3dassetimport_private.pri:
G:/Qt/5.15.2/mingw81_64/mkspecs/modules/qt_lib_quick3drender.pri:
G:/Qt/5.15.2/mingw81_64/mkspecs/modules/qt_lib_quick3drender_private.pri:
G:/Qt/5.15.2/mingw81_64/mkspecs/modules/qt_lib_quick3druntimerender.pri:
G:/Qt/5.15.2/mingw81_64/mkspecs/modules/qt_lib_quick3druntimerender_private.pri:
G:/Qt/5.15.2/mingw81_64/mkspecs/modules/qt_lib_quick3dutils.pri:
G:/Qt/5.15.2/mingw81_64/mkspecs/modules/qt_lib_quick3dutils_private.pri:
G:/Qt/5.15.2/mingw81_64/mkspecs/modules/qt_lib_quick_private.pri:
G:/Qt/5.15.2/mingw81_64/mkspecs/modules/qt_lib_quickcontrols2.pri:
G:/Qt/5.15.2/mingw81_64/mkspecs/modules/qt_lib_quickcontrols2_private.pri:
G:/Qt/5.15.2/mingw81_64/mkspecs/modules/qt_lib_quickparticles_private.pri:
G:/Qt/5.15.2/mingw81_64/mkspecs/modules/qt_lib_quickshapes_private.pri:
G:/Qt/5.15.2/mingw81_64/mkspecs/modules/qt_lib_quicktemplates2.pri:
G:/Qt/5.15.2/mingw81_64/mkspecs/modules/qt_lib_quicktemplates2_private.pri:
G:/Qt/5.15.2/mingw81_64/mkspecs/modules/qt_lib_quickwidgets.pri:
G:/Qt/5.15.2/mingw81_64/mkspecs/modules/qt_lib_quickwidgets_private.pri:
G:/Qt/5.15.2/mingw81_64/mkspecs/modules/qt_lib_remoteobjects.pri:
G:/Qt/5.15.2/mingw81_64/mkspecs/modules/qt_lib_remoteobjects_private.pri:
G:/Qt/5.15.2/mingw81_64/mkspecs/modules/qt_lib_repparser.pri:
G:/Qt/5.15.2/mingw81_64/mkspecs/modules/qt_lib_repparser_private.pri:
G:/Qt/5.15.2/mingw81_64/mkspecs/modules/qt_lib_script.pri:
G:/Qt/5.15.2/mingw81_64/mkspecs/modules/qt_lib_script_private.pri:
G:/Qt/5.15.2/mingw81_64/mkspecs/modules/qt_lib_scripttools.pri:
G:/Qt/5.15.2/mingw81_64/mkspecs/modules/qt_lib_scripttools_private.pri:
G:/Qt/5.15.2/mingw81_64/mkspecs/modules/qt_lib_scxml.pri:
G:/Qt/5.15.2/mingw81_64/mkspecs/modules/qt_lib_scxml_private.pri:
G:/Qt/5.15.2/mingw81_64/mkspecs/modules/qt_lib_sensors.pri:
G:/Qt/5.15.2/mingw81_64/mkspecs/modules/qt_lib_sensors_private.pri:
G:/Qt/5.15.2/mingw81_64/mkspecs/modules/qt_lib_serialbus.pri:
G:/Qt/5.15.2/mingw81_64/mkspecs/modules/qt_lib_serialbus_private.pri:
G:/Qt/5.15.2/mingw81_64/mkspecs/modules/qt_lib_serialport.pri:
G:/Qt/5.15.2/mingw81_64/mkspecs/modules/qt_lib_serialport_private.pri:
G:/Qt/5.15.2/mingw81_64/mkspecs/modules/qt_lib_sql.pri:
G:/Qt/5.15.2/mingw81_64/mkspecs/modules/qt_lib_sql_private.pri:
G:/Qt/5.15.2/mingw81_64/mkspecs/modules/qt_lib_svg.pri:
G:/Qt/5.15.2/mingw81_64/mkspecs/modules/qt_lib_svg_private.pri:
G:/Qt/5.15.2/mingw81_64/mkspecs/modules/qt_lib_testlib.pri:
G:/Qt/5.15.2/mingw81_64/mkspecs/modules/qt_lib_testlib_private.pri:
G:/Qt/5.15.2/mingw81_64/mkspecs/modules/qt_lib_texttospeech.pri:
G:/Qt/5.15.2/mingw81_64/mkspecs/modules/qt_lib_texttospeech_private.pri:
G:/Qt/5.15.2/mingw81_64/mkspecs/modules/qt_lib_theme_support_private.pri:
G:/Qt/5.15.2/mingw81_64/mkspecs/modules/qt_lib_uiplugin.pri:
G:/Qt/5.15.2/mingw81_64/mkspecs/modules/qt_lib_uitools.pri:
G:/Qt/5.15.2/mingw81_64/mkspecs/modules/qt_lib_uitools_private.pri:
G:/Qt/5.15.2/mingw81_64/mkspecs/modules/qt_lib_virtualkeyboard.pri:
G:/Qt/5.15.2/mingw81_64/mkspecs/modules/qt_lib_virtualkeyboard_private.pri:
G:/Qt/5.15.2/mingw81_64/mkspecs/modules/qt_lib_vulkan_support_private.pri:
G:/Qt/5.15.2/mingw81_64/mkspecs/modules/qt_lib_webchannel.pri:
G:/Qt/5.15.2/mingw81_64/mkspecs/modules/qt_lib_webchannel_private.pri:
G:/Qt/5.15.2/mingw81_64/mkspecs/modules/qt_lib_websockets.pri:
G:/Qt/5.15.2/mingw81_64/mkspecs/modules/qt_lib_websockets_private.pri:
G:/Qt/5.15.2/mingw81_64/mkspecs/modules/qt_lib_widgets.pri:
G:/Qt/5.15.2/mingw81_64/mkspecs/modules/qt_lib_widgets_private.pri:
G:/Qt/5.15.2/mingw81_64/mkspecs/modules/qt_lib_windowsuiautomation_support_private.pri:
G:/Qt/5.15.2/mingw81_64/mkspecs/modules/qt_lib_winextras.pri:
G:/Qt/5.15.2/mingw81_64/mkspecs/modules/qt_lib_winextras_private.pri:
G:/Qt/5.15.2/mingw81_64/mkspecs/modules/qt_lib_xml.pri:
G:/Qt/5.15.2/mingw81_64/mkspecs/modules/qt_lib_xml_private.pri:
G:/Qt/5.15.2/mingw81_64/mkspecs/modules/qt_lib_xmlpatterns.pri:
G:/Qt/5.15.2/mingw81_64/mkspecs/modules/qt_lib_xmlpatterns_private.pri:
G:/Qt/5.15.2/mingw81_64/mkspecs/modules/qt_lib_zlib_private.pri:
G:/Qt/5.15.2/mingw81_64/mkspecs/features/qt_functions.prf:
G:/Qt/5.15.2/mingw81_64/mkspecs/features/qt_config.prf:
G:/Qt/5.15.2/mingw81_64/mkspecs/win32-g++/qmake.conf:
G:/Qt/5.15.2/mingw81_64/mkspecs/features/spec_post.prf:
.qmake.stash:
G:/Qt/5.15.2/mingw81_64/mkspecs/features/exclusive_builds.prf:
G:/Qt/5.15.2/mingw81_64/mkspecs/features/toolchain.prf:
G:/Qt/5.15.2/mingw81_64/mkspecs/features/default_pre.prf:
G:/Qt/5.15.2/mingw81_64/mkspecs/features/win32/default_pre.prf:
G:/Qt/5.15.2/mingw81_64/mkspecs/features/resolve_config.prf:
G:/Qt/5.15.2/mingw81_64/mkspecs/features/exclusive_builds_post.prf:
G:/Qt/5.15.2/mingw81_64/mkspecs/features/default_post.prf:
G:/Qt/5.15.2/mingw81_64/mkspecs/features/lrelease.prf:
G:/Qt/5.15.2/mingw81_64/mkspecs/features/qtquickcompiler.prf:
G:/Qt/5.15.2/mingw81_64/mkspecs/features/precompile_header.prf:
G:/Qt/5.15.2/mingw81_64/mkspecs/features/warn_on.prf:
G:/Qt/5.15.2/mingw81_64/mkspecs/features/qt.prf:
G:/Qt/5.15.2/mingw81_64/mkspecs/features/resources_functions.prf:
G:/Qt/5.15.2/mingw81_64/mkspecs/features/resources.prf:
G:/Qt/5.15.2/mingw81_64/mkspecs/features/moc.prf:
G:/Qt/5.15.2/mingw81_64/mkspecs/features/win32/opengl.prf:
G:/Qt/5.15.2/mingw81_64/mkspecs/features/uic.prf:
G:/Qt/5.15.2/mingw81_64/mkspecs/features/qmake_use.prf:
G:/Qt/5.15.2/mingw81_64/mkspecs/features/file_copies.prf:
G:/Qt/5.15.2/mingw81_64/mkspecs/features/win32/windows.prf:
G:/Qt/5.15.2/mingw81_64/mkspecs/features/testcase_targets.prf:
G:/Qt/5.15.2/mingw81_64/mkspecs/features/exceptions.prf:
G:/Qt/5.15.2/mingw81_64/mkspecs/features/yacc.prf:
G:/Qt/5.15.2/mingw81_64/mkspecs/features/lex.prf:
MusicCenter.pro:
G:/Qt/5.15.2/mingw81_64/lib/Qt5Multimedia.prl:
G:/Qt/5.15.2/mingw81_64/lib/Qt5Widgets.prl:
G:/Qt/5.15.2/mingw81_64/lib/Qt5Gui.prl:
G:/Qt/5.15.2/mingw81_64/lib/Qt5Network.prl:
G:/Qt/5.15.2/mingw81_64/lib/Qt5Core.prl:
G:/Qt/5.15.2/mingw81_64/lib/qtmain.prl:
G:/Qt/5.15.2/mingw81_64/mkspecs/features/build_pass.prf:
release/qmake_qmake_qm_files.qrc:
debug/qmake_qmake_qm_files.qrc:
qmake: FORCE
	@$(QMAKE) -o Makefile MusicCenter.pro -spec win32-g++ "CONFIG+=qtquickcompiler"

qmake_all: FORCE

make_first: release-make_first debug-make_first  FORCE
all: release-all debug-all  FORCE
clean: release-clean debug-clean  FORCE
distclean: release-distclean debug-distclean  FORCE
	-$(DEL_FILE) Makefile
	-$(DEL_FILE) .qmake.stash

release-mocclean:
	$(MAKE) -f $(MAKEFILE).Release mocclean
debug-mocclean:
	$(MAKE) -f $(MAKEFILE).Debug mocclean
mocclean: release-mocclean debug-mocclean

release-mocables:
	$(MAKE) -f $(MAKEFILE).Release mocables
debug-mocables:
	$(MAKE) -f $(MAKEFILE).Debug mocables
mocables: release-mocables debug-mocables

check: first

benchmark: first
FORCE:

$(MAKEFILE).Release: Makefile
$(MAKEFILE).Debug: Makefile
