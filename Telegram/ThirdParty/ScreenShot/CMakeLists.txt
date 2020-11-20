cmake_minimum_required(VERSION 3.0.0 )
project(QtScreenShot)
set(CMAKE_INCLUDE_CURRENT_DIR ON)
set(CMAKE_AUTORCC ON)
set(CMAKE_AUTOUIC ON)
set(CMAKE_AUTOMOC ON)
find_package(Qt5Core)
find_package(Qt5Gui)
set(src core/core.cpp
	core/core_fs_check.cpp
	core/core_settings.cpp
	core/core_system.cpp
	drawer/drawer.cpp
	drawer/arrowdrawer.cpp
	drawer/erasedrawer.cpp
	drawer/imageblurdrawer.cpp
	drawer/pendrawer.cpp
	drawer/rectangleblurdrawer.cpp
	drawer/shapedrawer.cpp
	drawer/textdrawer.cpp
	helper/activewindow.cpp
	helper/imageuploader.cpp
	tmain.cpp
	tool/arrowtool.cpp
	tool/basetool.cpp
	tool/erasetool.cpp
	widget/basebutton.cpp
	widget/basecombobox.cpp
	widget/colorpanel.cpp
	widget/colorpicker.cpp
	widget/customtextedit.cpp
	widget/toolwidget.cpp
	widget/inputtextedit.cpp
	widget/pixelpanel.cpp
	widget/pixelwidget.cpp
	widget/separator.cpp
	widget/pinwidget.cpp
	tool/shapetool.cpp
	tool/texttool.cpp
	tool/pentool.cpp
	helper/textlogger.cpp
	main.cpp
	capturewindow.cpp
	settingswindow.cpp
	JSON/src/JsonDocument.cpp
	JSON/src/JsonObject.cpp
	JSON/src/JsonArray.cpp
	JSON/src/JsonConvert.cpp
	JSON/src/JsonParser.cpp)
set(headers core/core.h
	core/core_fs_check.h
	core/core_settings.h
	core/core_system.h
	drawer/drawer.h
	drawer/arrowdrawer.h
	drawer/erasedrawer.h
	drawer/imageblurdrawer.h
	drawer/pendrawer.h
	drawer/rectangleblurdrawer.h
	drawer/shapedrawer.h
	drawer/textdrawer.h
	helper/activewindow.h
	helper/imageuploader.h
	tmain.h
	tool/arrowtool.h
	tool/basetool.h
	tool/erasetool.h
	widget//basebutton.h
	widget/basecombobox.h
	widget/colorpanel.h
	widget/colorpicker.h
	widget/customtextedit.h
	widget/inputtextedit.h
	widget/toolwidget.h
	widget/pixelpanel.h
	widget/pixelwidget.h
	widget/separator.h
	widget/pinwidget.h
	tool/pentool.h
	tool/shapetool.h
	tool/texttool.h
	helper/textlogger.h
	capturewindow.h
	settingswindow.h
	JSON/include/JsonDocument.h
	JSON/include/JsonObject.h
	JSON/include/JsonArray.h
	JSON/include/JsonConvert.h
	JSON/include/JsonParser.h)
set(resources res.qrc)
set(forms ui/settingswindow.ui)
target_link_libraries(bin/QtScreenShot PRIVATE Qt5::Core Qt5::Gui)
target_include_directories(bin/QtScreenShot PUBLIC  $<BUILD_INTERFACE:${CMAKE_CURRENT_SOURCE_DIR}/$$PWD/QHotkey/QHotkey> $<INSTALL_INTERFACE:$$PWD/QHotkey/QHotkey>)
target_compile_definitions(bin/QtScreenShot PRIVATE  QT_DEPRECATED_WARNINGS)
