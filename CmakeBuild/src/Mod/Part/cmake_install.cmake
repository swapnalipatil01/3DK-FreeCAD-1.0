# Install script for directory: F:/F/FreeCAD before build/FreeCAD/src/Mod/Part

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
  include("F:/F/FreeCAD before build/3DK-FreeCAD-1.0/CmakeBuild/src/Mod/Part/App/cmake_install.cmake")
endif()

if(NOT CMAKE_INSTALL_LOCAL_ONLY)
  # Include the install script for the subdirectory.
  include("F:/F/FreeCAD before build/3DK-FreeCAD-1.0/CmakeBuild/src/Mod/Part/Gui/cmake_install.cmake")
endif()

if(CMAKE_INSTALL_COMPONENT STREQUAL "Unspecified" OR NOT CMAKE_INSTALL_COMPONENT)
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/Mod/Part" TYPE FILE FILES
    "F:/F/FreeCAD before build/FreeCAD/src/Mod/Part/Init.py"
    "F:/F/FreeCAD before build/FreeCAD/src/Mod/Part/JoinFeatures.py"
    "F:/F/FreeCAD before build/FreeCAD/src/Mod/Part/MakeBottle.py"
    "F:/F/FreeCAD before build/FreeCAD/src/Mod/Part/PartEnums.py"
    "F:/F/FreeCAD before build/FreeCAD/src/Mod/Part/TestPartApp.py"
    "F:/F/FreeCAD before build/FreeCAD/src/Mod/Part/InitGui.py"
    "F:/F/FreeCAD before build/FreeCAD/src/Mod/Part/TestPartGui.py"
    )
endif()

if(CMAKE_INSTALL_COMPONENT STREQUAL "Unspecified" OR NOT CMAKE_INSTALL_COMPONENT)
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/Mod/Part/AttachmentEditor" TYPE FILE FILES
    "F:/F/FreeCAD before build/FreeCAD/src/Mod/Part/AttachmentEditor/__init__.py"
    "F:/F/FreeCAD before build/FreeCAD/src/Mod/Part/AttachmentEditor/Commands.py"
    "F:/F/FreeCAD before build/FreeCAD/src/Mod/Part/AttachmentEditor/FrozenClass.py"
    "F:/F/FreeCAD before build/FreeCAD/src/Mod/Part/AttachmentEditor/TaskAttachmentEditor.py"
    "F:/F/FreeCAD before build/FreeCAD/src/Mod/Part/AttachmentEditor/TaskAttachmentEditor.ui"
    )
endif()

if(CMAKE_INSTALL_COMPONENT STREQUAL "Unspecified" OR NOT CMAKE_INSTALL_COMPONENT)
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/Mod/Part/BasicShapes" TYPE FILE FILES
    "F:/F/FreeCAD before build/FreeCAD/src/Mod/Part/BasicShapes/__init__.py"
    "F:/F/FreeCAD before build/FreeCAD/src/Mod/Part/BasicShapes/Shapes.py"
    "F:/F/FreeCAD before build/FreeCAD/src/Mod/Part/BasicShapes/Utils.py"
    "F:/F/FreeCAD before build/FreeCAD/src/Mod/Part/BasicShapes/ShapeContent.py"
    "F:/F/FreeCAD before build/FreeCAD/src/Mod/Part/BasicShapes/CommandShapes.py"
    "F:/F/FreeCAD before build/FreeCAD/src/Mod/Part/BasicShapes/ViewProviderShapes.py"
    "F:/F/FreeCAD before build/FreeCAD/src/Mod/Part/BasicShapes/TaskTube.ui"
    )
endif()

if(CMAKE_INSTALL_COMPONENT STREQUAL "Unspecified" OR NOT CMAKE_INSTALL_COMPONENT)
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/Mod/Part/BOPTools" TYPE FILE FILES
    "F:/F/FreeCAD before build/FreeCAD/src/Mod/Part/BOPTools/__init__.py"
    "F:/F/FreeCAD before build/FreeCAD/src/Mod/Part/BOPTools/GeneralFuseResult.py"
    "F:/F/FreeCAD before build/FreeCAD/src/Mod/Part/BOPTools/JoinAPI.py"
    "F:/F/FreeCAD before build/FreeCAD/src/Mod/Part/BOPTools/JoinFeatures.py"
    "F:/F/FreeCAD before build/FreeCAD/src/Mod/Part/BOPTools/ShapeMerge.py"
    "F:/F/FreeCAD before build/FreeCAD/src/Mod/Part/BOPTools/SplitAPI.py"
    "F:/F/FreeCAD before build/FreeCAD/src/Mod/Part/BOPTools/SplitFeatures.py"
    "F:/F/FreeCAD before build/FreeCAD/src/Mod/Part/BOPTools/Utils.py"
    )
endif()

if(CMAKE_INSTALL_COMPONENT STREQUAL "Unspecified" OR NOT CMAKE_INSTALL_COMPONENT)
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/Mod/Part/CompoundTools" TYPE FILE FILES
    "F:/F/FreeCAD before build/FreeCAD/src/Mod/Part/CompoundTools/__init__.py"
    "F:/F/FreeCAD before build/FreeCAD/src/Mod/Part/CompoundTools/_CommandCompoundFilter.py"
    "F:/F/FreeCAD before build/FreeCAD/src/Mod/Part/CompoundTools/_CommandExplodeCompound.py"
    "F:/F/FreeCAD before build/FreeCAD/src/Mod/Part/CompoundTools/CompoundFilter.py"
    "F:/F/FreeCAD before build/FreeCAD/src/Mod/Part/CompoundTools/Explode.py"
    )
endif()

if(CMAKE_INSTALL_COMPONENT STREQUAL "Unspecified" OR NOT CMAKE_INSTALL_COMPONENT)
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/Mod/Part/parttests" TYPE FILE FILES
    "F:/F/FreeCAD before build/FreeCAD/src/Mod/Part/parttests/__init__.py"
    "F:/F/FreeCAD before build/FreeCAD/src/Mod/Part/parttests/part_test_objects.py"
    "F:/F/FreeCAD before build/FreeCAD/src/Mod/Part/parttests/regression_tests.py"
    "F:/F/FreeCAD before build/FreeCAD/src/Mod/Part/parttests/TopoShapeListTest.py"
    )
endif()

