# Install script for directory: F:/F/FreeCAD before build/FreeCAD/src/Mod/TechDraw

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
  include("F:/F/FreeCAD before build/3DK-FreeCAD-1.0/CmakeBuild/src/Mod/TechDraw/App/cmake_install.cmake")
endif()

if(NOT CMAKE_INSTALL_LOCAL_ONLY)
  # Include the install script for the subdirectory.
  include("F:/F/FreeCAD before build/3DK-FreeCAD-1.0/CmakeBuild/src/Mod/TechDraw/Gui/cmake_install.cmake")
endif()

if(CMAKE_INSTALL_COMPONENT STREQUAL "Unspecified" OR NOT CMAKE_INSTALL_COMPONENT)
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/Mod/TechDraw" TYPE FILE FILES
    "F:/F/FreeCAD before build/FreeCAD/src/Mod/TechDraw/Init.py"
    "F:/F/FreeCAD before build/FreeCAD/src/Mod/TechDraw/TestTechDrawApp.py"
    "F:/F/FreeCAD before build/FreeCAD/src/Mod/TechDraw/TestTechDrawGui.py"
    "F:/F/FreeCAD before build/FreeCAD/src/Mod/TechDraw/InitGui.py"
    )
endif()

if(CMAKE_INSTALL_COMPONENT STREQUAL "Unspecified" OR NOT CMAKE_INSTALL_COMPONENT)
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/data/Mod/TechDraw" TYPE DIRECTORY FILES "F:/F/FreeCAD before build/FreeCAD/src/Mod/TechDraw/Templates" FILES_MATCHING REGEX "/[^/]*\\.svg[^/]*$")
endif()

if(CMAKE_INSTALL_COMPONENT STREQUAL "Unspecified" OR NOT CMAKE_INSTALL_COMPONENT)
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/data/Mod/TechDraw" TYPE DIRECTORY FILES "F:/F/FreeCAD before build/FreeCAD/src/Mod/TechDraw/PAT" FILES_MATCHING REGEX "/[^/]*\\.pat[^/]*$")
endif()

if(CMAKE_INSTALL_COMPONENT STREQUAL "Unspecified" OR NOT CMAKE_INSTALL_COMPONENT)
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/data/Mod/TechDraw" TYPE DIRECTORY FILES "F:/F/FreeCAD before build/FreeCAD/src/Mod/TechDraw/LineGroup" FILES_MATCHING REGEX "/[^/]*\\.csv[^/]*$")
endif()

if(CMAKE_INSTALL_COMPONENT STREQUAL "Unspecified" OR NOT CMAKE_INSTALL_COMPONENT)
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/data/Mod/TechDraw" TYPE DIRECTORY FILES "F:/F/FreeCAD before build/FreeCAD/src/Mod/TechDraw/Patterns" FILES_MATCHING REGEX "/[^/]*\\.svg[^/]*$")
endif()

if(CMAKE_INSTALL_COMPONENT STREQUAL "Unspecified" OR NOT CMAKE_INSTALL_COMPONENT)
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/data/Mod/TechDraw" TYPE DIRECTORY FILES "F:/F/FreeCAD before build/FreeCAD/src/Mod/TechDraw/Symbols" FILES_MATCHING REGEX "/[^/]*\\.svg[^/]*$")
endif()

if(CMAKE_INSTALL_COMPONENT STREQUAL "Unspecified" OR NOT CMAKE_INSTALL_COMPONENT)
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/Mod/TechDraw/TechDrawTools" TYPE FILE FILES
    "F:/F/FreeCAD before build/FreeCAD/src/Mod/TechDraw/TechDrawTools/__init__.py"
    "F:/F/FreeCAD before build/FreeCAD/src/Mod/TechDraw/TechDrawTools/CommandMoveView.py"
    "F:/F/FreeCAD before build/FreeCAD/src/Mod/TechDraw/TechDrawTools/CommandShareView.py"
    "F:/F/FreeCAD before build/FreeCAD/src/Mod/TechDraw/TechDrawTools/CommandAxoLengthDimension.py"
    "F:/F/FreeCAD before build/FreeCAD/src/Mod/TechDraw/TechDrawTools/CommandHoleShaftFit.py"
    "F:/F/FreeCAD before build/FreeCAD/src/Mod/TechDraw/TechDrawTools/TaskMoveView.py"
    "F:/F/FreeCAD before build/FreeCAD/src/Mod/TechDraw/TechDrawTools/TaskShareView.py"
    "F:/F/FreeCAD before build/FreeCAD/src/Mod/TechDraw/TechDrawTools/TaskHoleShaftFit.py"
    "F:/F/FreeCAD before build/FreeCAD/src/Mod/TechDraw/TechDrawTools/TDToolsUtil.py"
    "F:/F/FreeCAD before build/FreeCAD/src/Mod/TechDraw/TechDrawTools/TDToolsMovers.py"
    )
endif()

if(CMAKE_INSTALL_COMPONENT STREQUAL "Unspecified" OR NOT CMAKE_INSTALL_COMPONENT)
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/Mod/TechDraw/TechDrawTools/Gui" TYPE FILE FILES
    "F:/F/FreeCAD before build/FreeCAD/src/Mod/TechDraw/Gui/TaskMoveView.ui"
    "F:/F/FreeCAD before build/FreeCAD/src/Mod/TechDraw/Gui/TaskHoleShaftFit.ui"
    "F:/F/FreeCAD before build/FreeCAD/src/Mod/TechDraw/Gui/DlgPageChooser.ui"
    )
endif()

if(CMAKE_INSTALL_COMPONENT STREQUAL "Unspecified" OR NOT CMAKE_INSTALL_COMPONENT)
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/Mod/TechDraw/TDTest" TYPE FILE FILES
    "F:/F/FreeCAD before build/FreeCAD/src/Mod/TechDraw/TDTest/__init__.py"
    "F:/F/FreeCAD before build/FreeCAD/src/Mod/TechDraw/TDTest/DrawHatchTest.py"
    "F:/F/FreeCAD before build/FreeCAD/src/Mod/TechDraw/TDTest/DrawProjectionGroupTest.py"
    "F:/F/FreeCAD before build/FreeCAD/src/Mod/TechDraw/TDTest/DrawViewAnnotationTest.py"
    "F:/F/FreeCAD before build/FreeCAD/src/Mod/TechDraw/TDTest/DrawViewImageTest.py"
    "F:/F/FreeCAD before build/FreeCAD/src/Mod/TechDraw/TDTest/DrawViewSymbolTest.py"
    "F:/F/FreeCAD before build/FreeCAD/src/Mod/TechDraw/TDTest/DrawViewDimensionTest.py"
    "F:/F/FreeCAD before build/FreeCAD/src/Mod/TechDraw/TDTest/DrawViewPartTest.py"
    "F:/F/FreeCAD before build/FreeCAD/src/Mod/TechDraw/TDTest/DrawViewSectionTest.py"
    "F:/F/FreeCAD before build/FreeCAD/src/Mod/TechDraw/TDTest/DrawViewBalloonTest.py"
    "F:/F/FreeCAD before build/FreeCAD/src/Mod/TechDraw/TDTest/DrawViewDetailTest.py"
    "F:/F/FreeCAD before build/FreeCAD/src/Mod/TechDraw/TDTest/TechDrawTestUtilities.py"
    )
endif()

if(CMAKE_INSTALL_COMPONENT STREQUAL "Unspecified" OR NOT CMAKE_INSTALL_COMPONENT)
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/Mod/TechDraw/TDTest" TYPE FILE FILES
    "F:/F/FreeCAD before build/FreeCAD/src/Mod/TechDraw/TDTest/TestHatch.svg"
    "F:/F/FreeCAD before build/FreeCAD/src/Mod/TechDraw/TDTest/TestImage.png"
    "F:/F/FreeCAD before build/FreeCAD/src/Mod/TechDraw/TDTest/TestSymbol.svg"
    "F:/F/FreeCAD before build/FreeCAD/src/Mod/TechDraw/TDTest/TestTemplate.svg"
    )
endif()

