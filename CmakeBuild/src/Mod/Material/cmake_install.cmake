# Install script for directory: F:/F/FreeCAD before build/FreeCAD/src/Mod/Material

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
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/Mod/Material/materialtools" TYPE FILE FILES
    "F:/F/FreeCAD before build/FreeCAD/src/Mod/Material/materialtools/__init__.py"
    "F:/F/FreeCAD before build/FreeCAD/src/Mod/Material/materialtools/cardutils.py"
    )
endif()

if(CMAKE_INSTALL_COMPONENT STREQUAL "Unspecified" OR NOT CMAKE_INSTALL_COMPONENT)
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/Mod/Material/Resources/icons" TYPE FILE FILES
    "F:/F/FreeCAD before build/FreeCAD/src/Mod/Material/Resources/icons/preview-rendered.svg"
    "F:/F/FreeCAD before build/FreeCAD/src/Mod/Material/Resources/icons/preview-vector.svg"
    )
endif()

if(CMAKE_INSTALL_COMPONENT STREQUAL "Unspecified" OR NOT CMAKE_INSTALL_COMPONENT)
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/Mod/Material" TYPE FILE FILES
    "F:/F/FreeCAD before build/FreeCAD/src/Mod/Material/Init.py"
    "F:/F/FreeCAD before build/FreeCAD/src/Mod/Material/InitGui.py"
    "F:/F/FreeCAD before build/FreeCAD/src/Mod/Material/Material.py"
    "F:/F/FreeCAD before build/FreeCAD/src/Mod/Material/importFCMat.py"
    "F:/F/FreeCAD before build/FreeCAD/src/Mod/Material/MaterialEditor.py"
    "F:/F/FreeCAD before build/FreeCAD/src/Mod/Material/materials-editor.ui"
    "F:/F/FreeCAD before build/FreeCAD/src/Mod/Material/Templatematerial.yml"
    "F:/F/FreeCAD before build/3DK-FreeCAD-1.0/CmakeBuild/src/Mod/Material/Material_rc.py"
    )
endif()

if(CMAKE_INSTALL_COMPONENT STREQUAL "Unspecified" OR NOT CMAKE_INSTALL_COMPONENT)
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/data/Mod/Material" TYPE DIRECTORY FILES
    "F:/F/FreeCAD before build/FreeCAD/src/Mod/Material/StandardMaterial"
    "F:/F/FreeCAD before build/FreeCAD/src/Mod/Material/DIRECTORY"
    "F:/F/FreeCAD before build/FreeCAD/src/Mod/Material/FluidMaterial"
    FILES_MATCHING REGEX "/[^/]*\\.fcmat[^/]*$")
endif()

