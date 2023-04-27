# Install script for directory: F:/F/FreeCAD before build/FreeCAD/src/Mod/Start/StartPage

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
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/Mod/Start/StartPage" TYPE FILE FILES
    "F:/F/FreeCAD before build/FreeCAD/src/Mod/Start/StartPage/StartPage.py"
    "F:/F/FreeCAD before build/FreeCAD/src/Mod/Start/StartPage/TranslationTexts.py"
    "F:/F/FreeCAD before build/FreeCAD/src/Mod/Start/StartPage/__init__.py"
    )
endif()

if(CMAKE_INSTALL_COMPONENT STREQUAL "Unspecified" OR NOT CMAKE_INSTALL_COMPONENT)
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/data/Mod/Start/StartPage" TYPE FILE FILES
    "F:/F/FreeCAD before build/FreeCAD/src/Mod/Start/StartPage/LoadMRU.py"
    "F:/F/FreeCAD before build/FreeCAD/src/Mod/Start/StartPage/LoadExample.py"
    "F:/F/FreeCAD before build/FreeCAD/src/Mod/Start/StartPage/LoadNew.py"
    "F:/F/FreeCAD before build/FreeCAD/src/Mod/Start/StartPage/LoadCustom.py"
    "F:/F/FreeCAD before build/FreeCAD/src/Mod/Start/StartPage/StartPage.css"
    "F:/F/FreeCAD before build/FreeCAD/src/Mod/Start/StartPage/StartPage.js"
    "F:/F/FreeCAD before build/FreeCAD/src/Mod/Start/StartPage/StartPage.html"
    "F:/F/FreeCAD before build/FreeCAD/src/Mod/Start/StartPage/EnableDownload.py"
    "F:/F/FreeCAD before build/FreeCAD/src/Mod/Start/StartPage/OpenSettings.py"
    )
endif()

if(CMAKE_INSTALL_COMPONENT STREQUAL "Unspecified" OR NOT CMAKE_INSTALL_COMPONENT)
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/data/Mod/Start/StartPage/images" TYPE FILE FILES
    "F:/F/FreeCAD before build/FreeCAD/src/Mod/Start/StartPage/images/userhub.png"
    "F:/F/FreeCAD before build/FreeCAD/src/Mod/Start/StartPage/images/poweruserhub.png"
    "F:/F/FreeCAD before build/FreeCAD/src/Mod/Start/StartPage/images/developerhub.png"
    "F:/F/FreeCAD before build/FreeCAD/src/Mod/Start/StartPage/images/manual.png"
    "F:/F/FreeCAD before build/FreeCAD/src/Mod/Start/StartPage/images/freecad.png"
    "F:/F/FreeCAD before build/FreeCAD/src/Mod/Start/StartPage/images/installed.png"
    "F:/F/FreeCAD before build/FreeCAD/src/Mod/Start/StartPage/images/new_file_thumbnail.svg"
    "F:/F/FreeCAD before build/FreeCAD/src/Mod/Start/StartPage/images/settings.png"
    )
endif()

