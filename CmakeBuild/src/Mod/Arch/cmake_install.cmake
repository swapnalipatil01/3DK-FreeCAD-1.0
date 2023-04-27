# Install script for directory: F:/F/FreeCAD before build/FreeCAD/src/Mod/Arch

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
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/Mod/Arch" TYPE FILE FILES
    "F:/F/FreeCAD before build/FreeCAD/src/Mod/Arch/Init.py"
    "F:/F/FreeCAD before build/FreeCAD/src/Mod/Arch/InitGui.py"
    "F:/F/FreeCAD before build/FreeCAD/src/Mod/Arch/ArchComponent.py"
    "F:/F/FreeCAD before build/FreeCAD/src/Mod/Arch/ArchIFC.py"
    "F:/F/FreeCAD before build/FreeCAD/src/Mod/Arch/ArchIFCView.py"
    "F:/F/FreeCAD before build/FreeCAD/src/Mod/Arch/ArchIFCSchema.py"
    "F:/F/FreeCAD before build/FreeCAD/src/Mod/Arch/ArchProject.py"
    "F:/F/FreeCAD before build/FreeCAD/src/Mod/Arch/ArchWall.py"
    "F:/F/FreeCAD before build/FreeCAD/src/Mod/Arch/importIFC.py"
    "F:/F/FreeCAD before build/FreeCAD/src/Mod/Arch/importIFClegacy.py"
    "F:/F/FreeCAD before build/FreeCAD/src/Mod/Arch/importIFCHelper.py"
    "F:/F/FreeCAD before build/FreeCAD/src/Mod/Arch/importIFCmulticore.py"
    "F:/F/FreeCAD before build/FreeCAD/src/Mod/Arch/exportIFCHelper.py"
    "F:/F/FreeCAD before build/FreeCAD/src/Mod/Arch/Arch.py"
    "F:/F/FreeCAD before build/FreeCAD/src/Mod/Arch/ArchBuilding.py"
    "F:/F/FreeCAD before build/FreeCAD/src/Mod/Arch/ArchFloor.py"
    "F:/F/FreeCAD before build/FreeCAD/src/Mod/Arch/ArchSite.py"
    "F:/F/FreeCAD before build/FreeCAD/src/Mod/Arch/ArchStructure.py"
    "F:/F/FreeCAD before build/FreeCAD/src/Mod/Arch/ArchCommands.py"
    "F:/F/FreeCAD before build/FreeCAD/src/Mod/Arch/ArchSectionPlane.py"
    "F:/F/FreeCAD before build/FreeCAD/src/Mod/Arch/importDAE.py"
    "F:/F/FreeCAD before build/FreeCAD/src/Mod/Arch/importOBJ.py"
    "F:/F/FreeCAD before build/FreeCAD/src/Mod/Arch/ArchWindow.py"
    "F:/F/FreeCAD before build/FreeCAD/src/Mod/Arch/ArchWindowPresets.py"
    "F:/F/FreeCAD before build/FreeCAD/src/Mod/Arch/ArchAxis.py"
    "F:/F/FreeCAD before build/FreeCAD/src/Mod/Arch/ArchAxisSystem.py"
    "F:/F/FreeCAD before build/FreeCAD/src/Mod/Arch/ArchGrid.py"
    "F:/F/FreeCAD before build/FreeCAD/src/Mod/Arch/ArchVRM.py"
    "F:/F/FreeCAD before build/FreeCAD/src/Mod/Arch/ArchRoof.py"
    "F:/F/FreeCAD before build/FreeCAD/src/Mod/Arch/ArchStairs.py"
    "F:/F/FreeCAD before build/FreeCAD/src/Mod/Arch/importWebGL.py"
    "F:/F/FreeCAD before build/FreeCAD/src/Mod/Arch/importJSON.py"
    "F:/F/FreeCAD before build/FreeCAD/src/Mod/Arch/ArchSpace.py"
    "F:/F/FreeCAD before build/FreeCAD/src/Mod/Arch/ArchRebar.py"
    "F:/F/FreeCAD before build/FreeCAD/src/Mod/Arch/TestArch.py"
    "F:/F/FreeCAD before build/FreeCAD/src/Mod/Arch/ArchFrame.py"
    "F:/F/FreeCAD before build/FreeCAD/src/Mod/Arch/ArchPanel.py"
    "F:/F/FreeCAD before build/FreeCAD/src/Mod/Arch/ArchEquipment.py"
    "F:/F/FreeCAD before build/FreeCAD/src/Mod/Arch/ArchCutPlane.py"
    "F:/F/FreeCAD before build/FreeCAD/src/Mod/Arch/ArchMaterial.py"
    "F:/F/FreeCAD before build/FreeCAD/src/Mod/Arch/ArchSchedule.py"
    "F:/F/FreeCAD before build/FreeCAD/src/Mod/Arch/ArchProfile.py"
    "F:/F/FreeCAD before build/FreeCAD/src/Mod/Arch/import3DS.py"
    "F:/F/FreeCAD before build/FreeCAD/src/Mod/Arch/ArchPrecast.py"
    "F:/F/FreeCAD before build/FreeCAD/src/Mod/Arch/importSH3D.py"
    "F:/F/FreeCAD before build/FreeCAD/src/Mod/Arch/ArchPipe.py"
    "F:/F/FreeCAD before build/FreeCAD/src/Mod/Arch/ArchNesting.py"
    "F:/F/FreeCAD before build/FreeCAD/src/Mod/Arch/ArchBuildingPart.py"
    "F:/F/FreeCAD before build/FreeCAD/src/Mod/Arch/ArchReference.py"
    "F:/F/FreeCAD before build/FreeCAD/src/Mod/Arch/ArchFence.py"
    "F:/F/FreeCAD before build/FreeCAD/src/Mod/Arch/OfflineRenderingUtils.py"
    "F:/F/FreeCAD before build/FreeCAD/src/Mod/Arch/exportIFC.py"
    "F:/F/FreeCAD before build/FreeCAD/src/Mod/Arch/ArchTruss.py"
    "F:/F/FreeCAD before build/FreeCAD/src/Mod/Arch/ArchCurtainWall.py"
    "F:/F/FreeCAD before build/FreeCAD/src/Mod/Arch/importSHP.py"
    "F:/F/FreeCAD before build/FreeCAD/src/Mod/Arch/exportIFCStructuralTools.py"
    "F:/F/FreeCAD before build/FreeCAD/src/Mod/Arch/ifc_objects.py"
    "F:/F/FreeCAD before build/FreeCAD/src/Mod/Arch/ifc_viewproviders.py"
    "F:/F/FreeCAD before build/3DK-FreeCAD-1.0/CmakeBuild/src/Mod/Arch/Arch_rc.py"
    )
endif()

if(CMAKE_INSTALL_COMPONENT STREQUAL "Unspecified" OR NOT CMAKE_INSTALL_COMPONENT)
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/Mod/Arch/Dice3DS" TYPE FILE FILES
    "F:/F/FreeCAD before build/FreeCAD/src/Mod/Arch/Dice3DS/__init__.py"
    "F:/F/FreeCAD before build/FreeCAD/src/Mod/Arch/Dice3DS/util.py"
    "F:/F/FreeCAD before build/FreeCAD/src/Mod/Arch/Dice3DS/dom3ds.py"
    )
endif()

if(CMAKE_INSTALL_COMPONENT STREQUAL "Unspecified" OR NOT CMAKE_INSTALL_COMPONENT)
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/data/Mod/Arch" TYPE DIRECTORY FILES "F:/F/FreeCAD before build/FreeCAD/src/Mod/Arch/Presets")
endif()

if(CMAKE_INSTALL_COMPONENT STREQUAL "Unspecified" OR NOT CMAKE_INSTALL_COMPONENT)
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/data/Mod/Arch/Resources/icons" TYPE FILE FILES "F:/F/FreeCAD before build/FreeCAD/src/Mod/Arch/Resources/icons/ArchWorkbench.svg")
endif()

