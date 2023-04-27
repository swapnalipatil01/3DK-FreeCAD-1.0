# Distributed under the OSI-approved BSD 3-Clause License.  See accompanying
# file Copyright.txt or https://cmake.org/licensing for details.

cmake_minimum_required(VERSION 3.5)

file(MAKE_DIRECTORY
  "F:/F/FreeCAD before build/3DK-FreeCAD-1.0/CmakeBuild/_deps/fmt-src"
  "F:/F/FreeCAD before build/3DK-FreeCAD-1.0/CmakeBuild/_deps/fmt-build"
  "F:/F/FreeCAD before build/3DK-FreeCAD-1.0/CmakeBuild/_deps/fmt-subbuild/fmt-populate-prefix"
  "F:/F/FreeCAD before build/3DK-FreeCAD-1.0/CmakeBuild/_deps/fmt-subbuild/fmt-populate-prefix/tmp"
  "F:/F/FreeCAD before build/3DK-FreeCAD-1.0/CmakeBuild/_deps/fmt-subbuild/fmt-populate-prefix/src/fmt-populate-stamp"
  "F:/F/FreeCAD before build/3DK-FreeCAD-1.0/CmakeBuild/_deps/fmt-subbuild/fmt-populate-prefix/src"
  "F:/F/FreeCAD before build/3DK-FreeCAD-1.0/CmakeBuild/_deps/fmt-subbuild/fmt-populate-prefix/src/fmt-populate-stamp"
)

set(configSubDirs Debug)
foreach(subDir IN LISTS configSubDirs)
    file(MAKE_DIRECTORY "F:/F/FreeCAD before build/3DK-FreeCAD-1.0/CmakeBuild/_deps/fmt-subbuild/fmt-populate-prefix/src/fmt-populate-stamp/${subDir}")
endforeach()
if(cfgdir)
  file(MAKE_DIRECTORY "F:/F/FreeCAD before build/3DK-FreeCAD-1.0/CmakeBuild/_deps/fmt-subbuild/fmt-populate-prefix/src/fmt-populate-stamp${cfgdir}") # cfgdir has leading slash
endif()
