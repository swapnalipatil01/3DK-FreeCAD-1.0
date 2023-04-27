# Install script for directory: F:/F/FreeCAD before build/FreeCAD/src/Mod/PartDesign

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
  include("F:/F/FreeCAD before build/3DK-FreeCAD-1.0/CmakeBuild/src/Mod/PartDesign/App/cmake_install.cmake")
endif()

if(NOT CMAKE_INSTALL_LOCAL_ONLY)
  # Include the install script for the subdirectory.
  include("F:/F/FreeCAD before build/3DK-FreeCAD-1.0/CmakeBuild/src/Mod/PartDesign/Gui/cmake_install.cmake")
endif()

if(CMAKE_INSTALL_COMPONENT STREQUAL "Unspecified" OR NOT CMAKE_INSTALL_COMPONENT)
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/Mod/PartDesign" TYPE FILE FILES
    "F:/F/FreeCAD before build/FreeCAD/src/Mod/PartDesign/__init__.py"
    "F:/F/FreeCAD before build/FreeCAD/src/Mod/PartDesign/Init.py"
    "F:/F/FreeCAD before build/FreeCAD/src/Mod/PartDesign/TestPartDesignApp.py"
    "F:/F/FreeCAD before build/FreeCAD/src/Mod/PartDesign/InitGui.py"
    "F:/F/FreeCAD before build/FreeCAD/src/Mod/PartDesign/TestPartDesignGui.py"
    "F:/F/FreeCAD before build/FreeCAD/src/Mod/PartDesign/InvoluteGearFeature.py"
    "F:/F/FreeCAD before build/FreeCAD/src/Mod/PartDesign/InvoluteGearFeature.ui"
    "F:/F/FreeCAD before build/FreeCAD/src/Mod/PartDesign/SprocketFeature.py"
    "F:/F/FreeCAD before build/FreeCAD/src/Mod/PartDesign/SprocketFeature.ui"
    )
endif()

if(CMAKE_INSTALL_COMPONENT STREQUAL "Unspecified" OR NOT CMAKE_INSTALL_COMPONENT)
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/Mod/PartDesign/Scripts" TYPE FILE FILES
    "F:/F/FreeCAD before build/FreeCAD/src/Mod/PartDesign/Scripts/__init__.py"
    "F:/F/FreeCAD before build/FreeCAD/src/Mod/PartDesign/Scripts/DistanceBolt.py"
    "F:/F/FreeCAD before build/FreeCAD/src/Mod/PartDesign/Scripts/Epitrochoid.py"
    "F:/F/FreeCAD before build/FreeCAD/src/Mod/PartDesign/Scripts/FilletArc.py"
    "F:/F/FreeCAD before build/FreeCAD/src/Mod/PartDesign/Scripts/Gear.py"
    "F:/F/FreeCAD before build/FreeCAD/src/Mod/PartDesign/Scripts/Parallelepiped.py"
    "F:/F/FreeCAD before build/FreeCAD/src/Mod/PartDesign/Scripts/RadialCopy.py"
    "F:/F/FreeCAD before build/FreeCAD/src/Mod/PartDesign/Scripts/Spring.py"
    )
endif()

if(CMAKE_INSTALL_COMPONENT STREQUAL "Unspecified" OR NOT CMAKE_INSTALL_COMPONENT)
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/Mod/PartDesign/PartDesignTests" TYPE FILE FILES
    "F:/F/FreeCAD before build/FreeCAD/src/Mod/PartDesign/PartDesignTests/__init__.py"
    "F:/F/FreeCAD before build/FreeCAD/src/Mod/PartDesign/PartDesignTests/TestDatum.py"
    "F:/F/FreeCAD before build/FreeCAD/src/Mod/PartDesign/PartDesignTests/TestShapeBinder.py"
    "F:/F/FreeCAD before build/FreeCAD/src/Mod/PartDesign/PartDesignTests/TestPad.py"
    "F:/F/FreeCAD before build/FreeCAD/src/Mod/PartDesign/PartDesignTests/TestPocket.py"
    "F:/F/FreeCAD before build/FreeCAD/src/Mod/PartDesign/PartDesignTests/TestHole.py"
    "F:/F/FreeCAD before build/FreeCAD/src/Mod/PartDesign/PartDesignTests/TestRevolve.py"
    "F:/F/FreeCAD before build/FreeCAD/src/Mod/PartDesign/PartDesignTests/TestLoft.py"
    "F:/F/FreeCAD before build/FreeCAD/src/Mod/PartDesign/PartDesignTests/TestPipe.py"
    "F:/F/FreeCAD before build/FreeCAD/src/Mod/PartDesign/PartDesignTests/TestPrimitive.py"
    "F:/F/FreeCAD before build/FreeCAD/src/Mod/PartDesign/PartDesignTests/TestMirrored.py"
    "F:/F/FreeCAD before build/FreeCAD/src/Mod/PartDesign/PartDesignTests/TestLinearPattern.py"
    "F:/F/FreeCAD before build/FreeCAD/src/Mod/PartDesign/PartDesignTests/TestPolarPattern.py"
    "F:/F/FreeCAD before build/FreeCAD/src/Mod/PartDesign/PartDesignTests/TestMultiTransform.py"
    "F:/F/FreeCAD before build/FreeCAD/src/Mod/PartDesign/PartDesignTests/TestBoolean.py"
    "F:/F/FreeCAD before build/FreeCAD/src/Mod/PartDesign/PartDesignTests/TestFillet.py"
    "F:/F/FreeCAD before build/FreeCAD/src/Mod/PartDesign/PartDesignTests/TestChamfer.py"
    "F:/F/FreeCAD before build/FreeCAD/src/Mod/PartDesign/PartDesignTests/TestDraft.py"
    "F:/F/FreeCAD before build/FreeCAD/src/Mod/PartDesign/PartDesignTests/TestThickness.py"
    "F:/F/FreeCAD before build/FreeCAD/src/Mod/PartDesign/PartDesignTests/TestInvoluteGear.py"
    )
endif()

if(CMAKE_INSTALL_COMPONENT STREQUAL "Unspecified" OR NOT CMAKE_INSTALL_COMPONENT)
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/Mod/PartDesign/PartDesignTests/Fixtures" TYPE FILE FILES
    "F:/F/FreeCAD before build/FreeCAD/src/Mod/PartDesign/PartDesignTests/Fixtures/InvoluteGear_v0-20.FCStd"
    "F:/F/FreeCAD before build/FreeCAD/src/Mod/PartDesign/PartDesignTests/Fixtures/InternalInvoluteGear_v0-20.FCStd"
    )
endif()

if(CMAKE_INSTALL_COMPONENT STREQUAL "Unspecified" OR NOT CMAKE_INSTALL_COMPONENT)
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/Mod/PartDesign/fcgear" TYPE FILE FILES
    "F:/F/FreeCAD before build/FreeCAD/src/Mod/PartDesign/fcgear/__init__.py"
    "F:/F/FreeCAD before build/FreeCAD/src/Mod/PartDesign/fcgear/fcgear.py"
    "F:/F/FreeCAD before build/FreeCAD/src/Mod/PartDesign/fcgear/involute.py"
    "F:/F/FreeCAD before build/FreeCAD/src/Mod/PartDesign/fcgear/svggear.py"
    )
endif()

if(CMAKE_INSTALL_COMPONENT STREQUAL "Unspecified" OR NOT CMAKE_INSTALL_COMPONENT)
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/Mod/PartDesign/fcsprocket" TYPE FILE FILES
    "F:/F/FreeCAD before build/FreeCAD/src/Mod/PartDesign/fcsprocket/__init__.py"
    "F:/F/FreeCAD before build/FreeCAD/src/Mod/PartDesign/fcsprocket/fcsprocket.py"
    "F:/F/FreeCAD before build/FreeCAD/src/Mod/PartDesign/fcsprocket/fcsprocketdialog.py"
    "F:/F/FreeCAD before build/FreeCAD/src/Mod/PartDesign/fcsprocket/sprocket.py"
    )
endif()

if(CMAKE_INSTALL_COMPONENT STREQUAL "Unspecified" OR NOT CMAKE_INSTALL_COMPONENT)
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/data/Mod/PartDesign/Resources/Hole" TYPE FILE FILES
    "F:/F/FreeCAD before build/FreeCAD/src/Mod/PartDesign/Resources/Hole/din7984.json"
    "F:/F/FreeCAD before build/FreeCAD/src/Mod/PartDesign/Resources/Hole/iso10642.json"
    "F:/F/FreeCAD before build/FreeCAD/src/Mod/PartDesign/Resources/Hole/iso10642-fine.json"
    "F:/F/FreeCAD before build/FreeCAD/src/Mod/PartDesign/Resources/Hole/iso12474-fine.json"
    "F:/F/FreeCAD before build/FreeCAD/src/Mod/PartDesign/Resources/Hole/iso14583.json"
    "F:/F/FreeCAD before build/FreeCAD/src/Mod/PartDesign/Resources/Hole/iso14583part.json"
    "F:/F/FreeCAD before build/FreeCAD/src/Mod/PartDesign/Resources/Hole/iso2009.json"
    "F:/F/FreeCAD before build/FreeCAD/src/Mod/PartDesign/Resources/Hole/iso4762_7089.json"
    "F:/F/FreeCAD before build/FreeCAD/src/Mod/PartDesign/Resources/Hole/iso4762.json"
    "F:/F/FreeCAD before build/FreeCAD/src/Mod/PartDesign/Resources/Hole/iso4762-fine.json"
    "F:/F/FreeCAD before build/FreeCAD/src/Mod/PartDesign/Resources/Hole/iso7046.json"
    )
endif()

if(CMAKE_INSTALL_COMPONENT STREQUAL "Unspecified" OR NOT CMAKE_INSTALL_COMPONENT)
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/Mod/PartDesign/WizardShaft" TYPE FILE FILES
    "F:/F/FreeCAD before build/FreeCAD/src/Mod/PartDesign/WizardShaft/__init__.py"
    "F:/F/FreeCAD before build/FreeCAD/src/Mod/PartDesign/WizardShaft/WizardShaft.svg"
    "F:/F/FreeCAD before build/FreeCAD/src/Mod/PartDesign/WizardShaft/WizardShaft.py"
    "F:/F/FreeCAD before build/FreeCAD/src/Mod/PartDesign/WizardShaft/WizardShaftTable.py"
    "F:/F/FreeCAD before build/FreeCAD/src/Mod/PartDesign/WizardShaft/Shaft.py"
    "F:/F/FreeCAD before build/FreeCAD/src/Mod/PartDesign/WizardShaft/ShaftFeature.py"
    "F:/F/FreeCAD before build/FreeCAD/src/Mod/PartDesign/WizardShaft/ShaftDiagram.py"
    "F:/F/FreeCAD before build/FreeCAD/src/Mod/PartDesign/WizardShaft/SegmentFunction.py"
    )
endif()

