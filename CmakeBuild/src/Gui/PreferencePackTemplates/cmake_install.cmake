# Install script for directory: F:/F/FreeCAD before build/FreeCAD/src/Gui/PreferencePackTemplates

# Set the install prefix
if(NOT DEFINED CMAKE_INSTALL_PREFIX)
  set(CMAKE_INSTALL_PREFIX "C:/Program Files (x86)/FreeCAD")
endif()
string(REGEX REPLACE "/$" "" CMAKE_INSTALL_PREFIX "${CMAKE_INSTALL_PREFIX}")

# Set the install configuration name.
if(NOT DEFINED CMAKE_INSTALL_CONFIG_NAME)
  if(BUILD_TYPE)
    string(REGEX REPLACE "^[^A-Za-z0-9_]+" ""
           CMAKE_INSTALL_CONFIG_NAME "${BUILD_TYPE}")
  else()
    set(CMAKE_INSTALL_CONFIG_NAME "Release")
  endif()
  message(STATUS "Install configuration: \"${CMAKE_INSTALL_CONFIG_NAME}\"")
endif()

# Set the component getting installed.
if(NOT CMAKE_INSTALL_COMPONENT)
  if(COMPONENT)
    message(STATUS "Install component: \"${COMPONENT}\"")
    set(CMAKE_INSTALL_COMPONENT "${COMPONENT}")
  else()
    set(CMAKE_INSTALL_COMPONENT)
  endif()
endif()

# Is this installation the result of a crosscompile?
if(NOT DEFINED CMAKE_CROSSCOMPILING)
  set(CMAKE_CROSSCOMPILING "FALSE")
endif()

if(CMAKE_INSTALL_COMPONENT STREQUAL "Unspecified" OR NOT CMAKE_INSTALL_COMPONENT)
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/data/Gui/PreferencePackTemplates" TYPE FILE FILES
    "F:/F/FreeCAD before build/FreeCAD/src/Gui/PreferencePackTemplates/Arch_Colors.cfg"
    "F:/F/FreeCAD before build/FreeCAD/src/Gui/PreferencePackTemplates/Console_Colors.cfg"
    "F:/F/FreeCAD before build/FreeCAD/src/Gui/PreferencePackTemplates/Draft_Colors.cfg"
    "F:/F/FreeCAD before build/FreeCAD/src/Gui/PreferencePackTemplates/Editor_Colors.cfg"
    "F:/F/FreeCAD before build/FreeCAD/src/Gui/PreferencePackTemplates/Editor_Font.cfg"
    "F:/F/FreeCAD before build/FreeCAD/src/Gui/PreferencePackTemplates/Main_window_layout.cfg"
    "F:/F/FreeCAD before build/FreeCAD/src/Gui/PreferencePackTemplates/Part_Colors.cfg"
    "F:/F/FreeCAD before build/FreeCAD/src/Gui/PreferencePackTemplates/Path_Colors.cfg"
    "F:/F/FreeCAD before build/FreeCAD/src/Gui/PreferencePackTemplates/Shortcuts.cfg"
    "F:/F/FreeCAD before build/FreeCAD/src/Gui/PreferencePackTemplates/Sketcher_Colors.cfg"
    "F:/F/FreeCAD before build/FreeCAD/src/Gui/PreferencePackTemplates/Start_Colors.cfg"
    "F:/F/FreeCAD before build/FreeCAD/src/Gui/PreferencePackTemplates/TechDraw_Colors.cfg"
    "F:/F/FreeCAD before build/FreeCAD/src/Gui/PreferencePackTemplates/View.cfg"
    "F:/F/FreeCAD before build/FreeCAD/src/Gui/PreferencePackTemplates/Window_Colors.cfg"
    )
endif()

