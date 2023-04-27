# Install script for directory: F:/F/FreeCAD before build/FreeCAD/src/Mod/Fem/Gui

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
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/data/Mod/Fem/Resources/icons" TYPE FILE FILES "F:/F/FreeCAD before build/FreeCAD/src/Mod/Fem/Gui/Resources/icons/FemWorkbench.svg")
endif()

if(CMAKE_INSTALL_COMPONENT STREQUAL "Unspecified" OR NOT CMAKE_INSTALL_COMPONENT)
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/Mod/Fem/Resources/ui" TYPE FILE FILES
    "F:/F/FreeCAD before build/FreeCAD/src/Mod/Fem/Gui/Resources/ui/BodyHeatSource.ui"
    "F:/F/FreeCAD before build/FreeCAD/src/Mod/Fem/Gui/Resources/ui/ConstraintCentrif.ui"
    "F:/F/FreeCAD before build/FreeCAD/src/Mod/Fem/Gui/Resources/ui/ConstraintTie.ui"
    "F:/F/FreeCAD before build/FreeCAD/src/Mod/Fem/Gui/Resources/ui/ConstraintSectionPrint.ui"
    "F:/F/FreeCAD before build/FreeCAD/src/Mod/Fem/Gui/Resources/ui/CurrentDensity.ui"
    "F:/F/FreeCAD before build/FreeCAD/src/Mod/Fem/Gui/Resources/ui/ElectrostaticPotential.ui"
    "F:/F/FreeCAD before build/FreeCAD/src/Mod/Fem/Gui/Resources/ui/ElementFluid1D.ui"
    "F:/F/FreeCAD before build/FreeCAD/src/Mod/Fem/Gui/Resources/ui/ElementGeometry1D.ui"
    "F:/F/FreeCAD before build/FreeCAD/src/Mod/Fem/Gui/Resources/ui/ElementGeometry2D.ui"
    "F:/F/FreeCAD before build/FreeCAD/src/Mod/Fem/Gui/Resources/ui/ElementRotation1D.ui"
    "F:/F/FreeCAD before build/FreeCAD/src/Mod/Fem/Gui/Resources/ui/FlowVelocity.ui"
    "F:/F/FreeCAD before build/FreeCAD/src/Mod/Fem/Gui/Resources/ui/InitialFlowVelocity.ui"
    "F:/F/FreeCAD before build/FreeCAD/src/Mod/Fem/Gui/Resources/ui/InitialPressure.ui"
    "F:/F/FreeCAD before build/FreeCAD/src/Mod/Fem/Gui/Resources/ui/Magnetization.ui"
    "F:/F/FreeCAD before build/FreeCAD/src/Mod/Fem/Gui/Resources/ui/Material.ui"
    "F:/F/FreeCAD before build/FreeCAD/src/Mod/Fem/Gui/Resources/ui/MaterialReinforcement.ui"
    "F:/F/FreeCAD before build/FreeCAD/src/Mod/Fem/Gui/Resources/ui/MeshBoundaryLayer.ui"
    "F:/F/FreeCAD before build/FreeCAD/src/Mod/Fem/Gui/Resources/ui/MeshGmsh.ui"
    "F:/F/FreeCAD before build/FreeCAD/src/Mod/Fem/Gui/Resources/ui/MeshGroup.ui"
    "F:/F/FreeCAD before build/FreeCAD/src/Mod/Fem/Gui/Resources/ui/MeshGroupXDMFExport.ui"
    "F:/F/FreeCAD before build/FreeCAD/src/Mod/Fem/Gui/Resources/ui/MeshRegion.ui"
    "F:/F/FreeCAD before build/FreeCAD/src/Mod/Fem/Gui/Resources/ui/ResultHints.ui"
    "F:/F/FreeCAD before build/FreeCAD/src/Mod/Fem/Gui/Resources/ui/ResultShow.ui"
    "F:/F/FreeCAD before build/FreeCAD/src/Mod/Fem/Gui/Resources/ui/SolverCalculix.ui"
    )
endif()

if(CMAKE_INSTALL_COMPONENT STREQUAL "Unspecified" OR NOT CMAKE_INSTALL_COMPONENT)
  if(CMAKE_INSTALL_CONFIG_NAME MATCHES "^([Dd][Ee][Bb][Uu][Gg])$")
    file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/lib" TYPE STATIC_LIBRARY OPTIONAL FILES "F:/F/FreeCAD before build/3DK-FreeCAD-1.0/CmakeBuild/src/Mod/Fem/Gui/Debug/FemGui_d.lib")
  elseif(CMAKE_INSTALL_CONFIG_NAME MATCHES "^([Rr][Ee][Ll][Ee][Aa][Ss][Ee])$")
    file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/lib" TYPE STATIC_LIBRARY OPTIONAL FILES "F:/F/FreeCAD before build/3DK-FreeCAD-1.0/CmakeBuild/src/Mod/Fem/Gui/Release/FemGui.lib")
  elseif(CMAKE_INSTALL_CONFIG_NAME MATCHES "^([Mm][Ii][Nn][Ss][Ii][Zz][Ee][Rr][Ee][Ll])$")
    file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/lib" TYPE STATIC_LIBRARY OPTIONAL FILES "F:/F/FreeCAD before build/3DK-FreeCAD-1.0/CmakeBuild/src/Mod/Fem/Gui/MinSizeRel/FemGui.lib")
  elseif(CMAKE_INSTALL_CONFIG_NAME MATCHES "^([Rr][Ee][Ll][Ww][Ii][Tt][Hh][Dd][Ee][Bb][Ii][Nn][Ff][Oo])$")
    file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/lib" TYPE STATIC_LIBRARY OPTIONAL FILES "F:/F/FreeCAD before build/3DK-FreeCAD-1.0/CmakeBuild/src/Mod/Fem/Gui/RelWithDebInfo/FemGui.lib")
  endif()
endif()

if(CMAKE_INSTALL_COMPONENT STREQUAL "Unspecified" OR NOT CMAKE_INSTALL_COMPONENT)
  if(CMAKE_INSTALL_CONFIG_NAME MATCHES "^([Dd][Ee][Bb][Uu][Gg])$")
    file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/lib" TYPE SHARED_LIBRARY FILES "F:/F/FreeCAD before build/3DK-FreeCAD-1.0/CmakeBuild/Mod/Fem/FemGui_d.pyd")
  elseif(CMAKE_INSTALL_CONFIG_NAME MATCHES "^([Rr][Ee][Ll][Ee][Aa][Ss][Ee])$")
    file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/lib" TYPE SHARED_LIBRARY FILES "F:/F/FreeCAD before build/3DK-FreeCAD-1.0/CmakeBuild/Mod/Fem/FemGui.pyd")
  elseif(CMAKE_INSTALL_CONFIG_NAME MATCHES "^([Mm][Ii][Nn][Ss][Ii][Zz][Ee][Rr][Ee][Ll])$")
    file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/lib" TYPE SHARED_LIBRARY FILES "F:/F/FreeCAD before build/3DK-FreeCAD-1.0/CmakeBuild/Mod/Fem/MinSizeRel/FemGui.pyd")
  elseif(CMAKE_INSTALL_CONFIG_NAME MATCHES "^([Rr][Ee][Ll][Ww][Ii][Tt][Hh][Dd][Ee][Bb][Ii][Nn][Ff][Oo])$")
    file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/lib" TYPE SHARED_LIBRARY FILES "F:/F/FreeCAD before build/3DK-FreeCAD-1.0/CmakeBuild/Mod/Fem/RelWithDebInfo/FemGui.pyd")
  endif()
endif()

