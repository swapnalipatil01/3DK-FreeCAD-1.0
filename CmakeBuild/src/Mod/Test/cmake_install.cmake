# Install script for directory: F:/F/FreeCAD before build/FreeCAD/src/Mod/Test

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

if(NOT CMAKE_INSTALL_LOCAL_ONLY)
  # Include the install script for the subdirectory.
  include("F:/F/FreeCAD before build/3DK-FreeCAD-1.0/CmakeBuild/src/Mod/Test/Gui/cmake_install.cmake")
endif()

if(CMAKE_INSTALL_COMPONENT STREQUAL "Unspecified" OR NOT CMAKE_INSTALL_COMPONENT)
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/Mod/Test" TYPE FILE FILES
    "F:/F/FreeCAD before build/FreeCAD/src/Mod/Test/__init__.py"
    "F:/F/FreeCAD before build/FreeCAD/src/Mod/Test/Init.py"
    "F:/F/FreeCAD before build/FreeCAD/src/Mod/Test/BaseTests.py"
    "F:/F/FreeCAD before build/FreeCAD/src/Mod/Test/Document.py"
    "F:/F/FreeCAD before build/FreeCAD/src/Mod/Test/Metadata.py"
    "F:/F/FreeCAD before build/FreeCAD/src/Mod/Test/Menu.py"
    "F:/F/FreeCAD before build/FreeCAD/src/Mod/Test/TestApp.py"
    "F:/F/FreeCAD before build/FreeCAD/src/Mod/Test/TestGui.py"
    "F:/F/FreeCAD before build/FreeCAD/src/Mod/Test/UnicodeTests.py"
    "F:/F/FreeCAD before build/FreeCAD/src/Mod/Test/UnitTests.py"
    "F:/F/FreeCAD before build/FreeCAD/src/Mod/Test/Workbench.py"
    "F:/F/FreeCAD before build/FreeCAD/src/Mod/Test/unittestgui.py"
    "F:/F/FreeCAD before build/FreeCAD/src/Mod/Test/testmakeWireString.py"
    "F:/F/FreeCAD before build/FreeCAD/src/Mod/Test/TestPythonSyntax.py"
    "F:/F/FreeCAD before build/FreeCAD/src/Mod/Test/InitGui.py"
    )
endif()

if(CMAKE_INSTALL_COMPONENT STREQUAL "Unspecified" OR NOT CMAKE_INSTALL_COMPONENT)
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/Mod/Test/TestData" TYPE FILE FILES
    "F:/F/FreeCAD before build/FreeCAD/src/Mod/Test/TestData/basic_metadata.xml"
    "F:/F/FreeCAD before build/FreeCAD/src/Mod/Test/TestData/bad_root_node.xml"
    "F:/F/FreeCAD before build/FreeCAD/src/Mod/Test/TestData/bad_xml.xml"
    "F:/F/FreeCAD before build/FreeCAD/src/Mod/Test/TestData/bad_version.xml"
    "F:/F/FreeCAD before build/FreeCAD/src/Mod/Test/TestData/content_items.xml"
    )
endif()

