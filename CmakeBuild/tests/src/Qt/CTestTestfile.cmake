# CMake generated Testfile for 
# Source directory: F:/F/FreeCAD before build/FreeCAD/tests/src/Qt
# Build directory: F:/F/FreeCAD before build/3DK-FreeCAD-1.0/CmakeBuild/tests/src/Qt
# 
# This file includes the relevant testing commands required for 
# testing this directory and lists subdirectories to be tested as well.
if(CTEST_CONFIGURATION_TYPE MATCHES "^([Dd][Ee][Bb][Uu][Gg])$")
  add_test(InventorBuilder_Tests_run "F:/F/FreeCAD before build/3DK-FreeCAD-1.0/CmakeBuild/tests/src/Qt/Debug/InventorBuilder_Tests_run.exe")
  set_tests_properties(InventorBuilder_Tests_run PROPERTIES  _BACKTRACE_TRIPLES "F:/F/FreeCAD before build/FreeCAD/tests/src/Qt/CMakeLists.txt;20;add_test;F:/F/FreeCAD before build/FreeCAD/tests/src/Qt/CMakeLists.txt;46;SETUP_TESTS;F:/F/FreeCAD before build/FreeCAD/tests/src/Qt/CMakeLists.txt;0;")
elseif(CTEST_CONFIGURATION_TYPE MATCHES "^([Rr][Ee][Ll][Ee][Aa][Ss][Ee])$")
  add_test(InventorBuilder_Tests_run "F:/F/FreeCAD before build/3DK-FreeCAD-1.0/CmakeBuild/tests/src/Qt/Release/InventorBuilder_Tests_run.exe")
  set_tests_properties(InventorBuilder_Tests_run PROPERTIES  _BACKTRACE_TRIPLES "F:/F/FreeCAD before build/FreeCAD/tests/src/Qt/CMakeLists.txt;20;add_test;F:/F/FreeCAD before build/FreeCAD/tests/src/Qt/CMakeLists.txt;46;SETUP_TESTS;F:/F/FreeCAD before build/FreeCAD/tests/src/Qt/CMakeLists.txt;0;")
elseif(CTEST_CONFIGURATION_TYPE MATCHES "^([Mm][Ii][Nn][Ss][Ii][Zz][Ee][Rr][Ee][Ll])$")
  add_test(InventorBuilder_Tests_run "F:/F/FreeCAD before build/3DK-FreeCAD-1.0/CmakeBuild/tests/src/Qt/MinSizeRel/InventorBuilder_Tests_run.exe")
  set_tests_properties(InventorBuilder_Tests_run PROPERTIES  _BACKTRACE_TRIPLES "F:/F/FreeCAD before build/FreeCAD/tests/src/Qt/CMakeLists.txt;20;add_test;F:/F/FreeCAD before build/FreeCAD/tests/src/Qt/CMakeLists.txt;46;SETUP_TESTS;F:/F/FreeCAD before build/FreeCAD/tests/src/Qt/CMakeLists.txt;0;")
elseif(CTEST_CONFIGURATION_TYPE MATCHES "^([Rr][Ee][Ll][Ww][Ii][Tt][Hh][Dd][Ee][Bb][Ii][Nn][Ff][Oo])$")
  add_test(InventorBuilder_Tests_run "F:/F/FreeCAD before build/3DK-FreeCAD-1.0/CmakeBuild/tests/src/Qt/RelWithDebInfo/InventorBuilder_Tests_run.exe")
  set_tests_properties(InventorBuilder_Tests_run PROPERTIES  _BACKTRACE_TRIPLES "F:/F/FreeCAD before build/FreeCAD/tests/src/Qt/CMakeLists.txt;20;add_test;F:/F/FreeCAD before build/FreeCAD/tests/src/Qt/CMakeLists.txt;46;SETUP_TESTS;F:/F/FreeCAD before build/FreeCAD/tests/src/Qt/CMakeLists.txt;0;")
else()
  add_test(InventorBuilder_Tests_run NOT_AVAILABLE)
endif()
