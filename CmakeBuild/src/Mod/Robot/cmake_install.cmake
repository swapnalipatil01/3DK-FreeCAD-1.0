# Install script for directory: F:/F/FreeCAD before build/FreeCAD/src/Mod/Robot

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
  include("F:/F/FreeCAD before build/3DK-FreeCAD-1.0/CmakeBuild/src/Mod/Robot/App/cmake_install.cmake")
endif()

if(NOT CMAKE_INSTALL_LOCAL_ONLY)
  # Include the install script for the subdirectory.
  include("F:/F/FreeCAD before build/3DK-FreeCAD-1.0/CmakeBuild/src/Mod/Robot/Gui/cmake_install.cmake")
endif()

if(CMAKE_INSTALL_COMPONENT STREQUAL "Unspecified" OR NOT CMAKE_INSTALL_COMPONENT)
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/Mod/Robot" TYPE FILE FILES
    "F:/F/FreeCAD before build/FreeCAD/src/Mod/Robot/Init.py"
    "F:/F/FreeCAD before build/FreeCAD/src/Mod/Robot/KukaExporter.py"
    "F:/F/FreeCAD before build/FreeCAD/src/Mod/Robot/RobotExample.py"
    "F:/F/FreeCAD before build/FreeCAD/src/Mod/Robot/RobotExampleTrajectoryOutOfShapes.py"
    "F:/F/FreeCAD before build/FreeCAD/src/Mod/Robot/InitGui.py"
    "F:/F/FreeCAD before build/FreeCAD/src/Mod/Robot/MovieTool.py"
    )
endif()

if(CMAKE_INSTALL_COMPONENT STREQUAL "Unspecified" OR NOT CMAKE_INSTALL_COMPONENT)
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/data/Mod/Robot" TYPE DIRECTORY FILES "F:/F/FreeCAD before build/FreeCAD/src/Mod/Robot/Lib" REGEX "/makefile[^/]*$" EXCLUDE REGEX "/[^/]*\\.pdf$" EXCLUDE)
endif()

