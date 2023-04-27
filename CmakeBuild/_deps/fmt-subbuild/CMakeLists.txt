# Distributed under the OSI-approved BSD 3-Clause License.  See accompanying
# file Copyright.txt or https://cmake.org/licensing for details.

cmake_minimum_required(VERSION 3.24.3)

# We name the project and the target for the ExternalProject_Add() call
# to something that will highlight to the user what we are working on if
# something goes wrong and an error message is produced.

project(fmt-populate NONE)



include(ExternalProject)
ExternalProject_Add(fmt-populate
                     "UPDATE_DISCONNECTED" "False" "DOWNLOAD_EXTRACT_TIMESTAMP" "FALSE" "URL" "https://github.com/fmtlib/fmt/archive/refs/tags/9.1.0.zip" "URL_MD5" "e6754011ff56bfc37631fcc90961e377"
                    SOURCE_DIR          "F:/F/FreeCAD before build/3DK-FreeCAD-1.0/CmakeBuild/_deps/fmt-src"
                    BINARY_DIR          "F:/F/FreeCAD before build/3DK-FreeCAD-1.0/CmakeBuild/_deps/fmt-build"
                    CONFIGURE_COMMAND   ""
                    BUILD_COMMAND       ""
                    INSTALL_COMMAND     ""
                    TEST_COMMAND        ""
                    USES_TERMINAL_DOWNLOAD  YES
                    USES_TERMINAL_UPDATE    YES
                    USES_TERMINAL_PATCH     YES
)


