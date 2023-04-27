# Install script for directory: F:/F/FreeCAD before build/FreeCAD/src/Mod/OpenSCAD

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
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/Mod/OpenSCAD" TYPE FILE FILES
    "F:/F/FreeCAD before build/FreeCAD/src/Mod/OpenSCAD/Init.py"
    "F:/F/FreeCAD before build/FreeCAD/src/Mod/OpenSCAD/InitGui.py"
    "F:/F/FreeCAD before build/FreeCAD/src/Mod/OpenSCAD/OpenSCAD2Dgeom.py"
    "F:/F/FreeCAD before build/FreeCAD/src/Mod/OpenSCAD/OpenSCADFeatures.py"
    "F:/F/FreeCAD before build/FreeCAD/src/Mod/OpenSCAD/OpenSCADUtils.py"
    "F:/F/FreeCAD before build/FreeCAD/src/Mod/OpenSCAD/OpenSCADCommands.py"
    "F:/F/FreeCAD before build/FreeCAD/src/Mod/OpenSCAD/exportCSG.py"
    "F:/F/FreeCAD before build/FreeCAD/src/Mod/OpenSCAD/importCSG.py"
    "F:/F/FreeCAD before build/FreeCAD/src/Mod/OpenSCAD/tokrules.py"
    "F:/F/FreeCAD before build/FreeCAD/src/Mod/OpenSCAD/colorcodeshapes.py"
    "F:/F/FreeCAD before build/FreeCAD/src/Mod/OpenSCAD/expandplacements.py"
    "F:/F/FreeCAD before build/FreeCAD/src/Mod/OpenSCAD/replaceobj.py"
    "F:/F/FreeCAD before build/FreeCAD/src/Mod/OpenSCAD/TestOpenSCADApp.py"
    "F:/F/FreeCAD before build/FreeCAD/src/Mod/OpenSCAD/TestOpenSCADGui.py"
    "F:/F/FreeCAD before build/3DK-FreeCAD-1.0/CmakeBuild/src/Mod/OpenSCAD/OpenSCAD_rc.py"
    )
endif()

if(CMAKE_INSTALL_COMPONENT STREQUAL "Unspecified" OR NOT CMAKE_INSTALL_COMPONENT)
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/data/Mod/OpenSCAD/Resources/icons" TYPE FILE FILES "F:/F/FreeCAD before build/FreeCAD/src/Mod/OpenSCAD/Resources/icons/OpenSCADWorkbench.svg")
endif()

if(CMAKE_INSTALL_COMPONENT STREQUAL "Unspecified" OR NOT CMAKE_INSTALL_COMPONENT)
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/Mod/OpenSCAD/OpenSCADTest" TYPE FILE FILES
    "F:/F/FreeCAD before build/FreeCAD/src/Mod/OpenSCAD/OpenSCADTest/__init__.py"
    "F:/F/FreeCAD before build/FreeCAD/src/Mod/OpenSCAD/OpenSCADTest/test_information.md"
    )
endif()

if(CMAKE_INSTALL_COMPONENT STREQUAL "Unspecified" OR NOT CMAKE_INSTALL_COMPONENT)
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/Mod/OpenSCAD/OpenSCADTest/app" TYPE FILE FILES
    "F:/F/FreeCAD before build/FreeCAD/src/Mod/OpenSCAD/OpenSCADTest/app/__init__.py"
    "F:/F/FreeCAD before build/FreeCAD/src/Mod/OpenSCAD/OpenSCADTest/app/test_importCSG.py"
    )
endif()

if(CMAKE_INSTALL_COMPONENT STREQUAL "Unspecified" OR NOT CMAKE_INSTALL_COMPONENT)
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/Mod/OpenSCAD/OpenSCADTest/gui" TYPE FILE FILES
    "F:/F/FreeCAD before build/FreeCAD/src/Mod/OpenSCAD/OpenSCADTest/gui/__init__.py"
    "F:/F/FreeCAD before build/FreeCAD/src/Mod/OpenSCAD/OpenSCADTest/gui/test_dummy.py"
    )
endif()

if(CMAKE_INSTALL_COMPONENT STREQUAL "Unspecified" OR NOT CMAKE_INSTALL_COMPONENT)
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/Mod/OpenSCAD/OpenSCADTest/data" TYPE FILE FILES
    "F:/F/FreeCAD before build/FreeCAD/src/Mod/OpenSCAD/OpenSCADTest/data/__init__.py"
    "F:/F/FreeCAD before build/FreeCAD/src/Mod/OpenSCAD/OpenSCADTest/data/CSG.scad"
    "F:/F/FreeCAD before build/FreeCAD/src/Mod/OpenSCAD/OpenSCADTest/data/CSG.csg"
    "F:/F/FreeCAD before build/FreeCAD/src/Mod/OpenSCAD/OpenSCADTest/data/Cube.stl"
    "F:/F/FreeCAD before build/FreeCAD/src/Mod/OpenSCAD/OpenSCADTest/data/Square.dxf"
    "F:/F/FreeCAD before build/FreeCAD/src/Mod/OpenSCAD/OpenSCADTest/data/Surface.dat"
    "F:/F/FreeCAD before build/FreeCAD/src/Mod/OpenSCAD/OpenSCADTest/data/Surface2.dat"
    "F:/F/FreeCAD before build/FreeCAD/src/Mod/OpenSCAD/OpenSCADTest/data/Surface.png"
    )
endif()

