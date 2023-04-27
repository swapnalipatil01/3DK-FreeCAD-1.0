#ifndef LIBRARY_VERSIONS_H
#define LIBRARY_VERSIONS_H

/* LibraryVersions.h.  Generated from LibraryVersions.h.cmake by cmake.  */

#define HAVE_OCC_VERSION

#if defined(HAVE_OCC_VERSION)
#  include <F:/F/FreeCAD before build/FreeCADLibs_12.5.4_x64_VC17/inc/Standard_Version.hxx>
#endif

#define BUILD_SMESH

#if defined(BUILD_SMESH)
#  include <SMESH_Version.h>
#endif


/* No need for Boost (version info is always included in the source) */
/* No need for Python (version info is always included in the source) */
/* No need for Qt (version info is always included in the source) */
/* No need for SMESH (version info is always included in the source) */
/* No need for zlib (version info is always included in the source) */

// No CMake version info for libarea, Zipios, or KDL

// Coin3D
constexpr char * fcCoin3dVersion = "4.0.1";

// Eigen3
constexpr char * fcEigen3Version = "3.3.90";

// FreeType
constexpr char * fcFreetypeVersion = "2.10.1";

// pcl
constexpr char * fcPclVersion = "";

// PyCXX
constexpr char * fcPycxxVersion = "7.1.7";

// PySide
constexpr char * fcPysideVersion = "5.15.0";

// PyBind
constexpr char * fcPybind11Version = "";

// Shiboken
constexpr char * fcShibokenVersion = "5.15.0";

// vtk
constexpr char * fcVtkVersion = "8.2.0";

// Xerces-C
constexpr char * fcXercescVersion = "3.2.2";

// Pivy
constexpr char * fcPivyVersion = "0.6.6";


#endif // LIBRARY_VERSIONS_H
