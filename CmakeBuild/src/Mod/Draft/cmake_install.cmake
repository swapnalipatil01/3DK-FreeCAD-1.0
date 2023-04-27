# Install script for directory: F:/F/FreeCAD before build/FreeCAD/src/Mod/Draft

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
  include("F:/F/FreeCAD before build/3DK-FreeCAD-1.0/CmakeBuild/src/Mod/Draft/App/cmake_install.cmake")
endif()

if(CMAKE_INSTALL_COMPONENT STREQUAL "Unspecified" OR NOT CMAKE_INSTALL_COMPONENT)
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/Mod/Draft" TYPE FILE FILES
    "F:/F/FreeCAD before build/FreeCAD/src/Mod/Draft/Init.py"
    "F:/F/FreeCAD before build/FreeCAD/src/Mod/Draft/InitGui.py"
    "F:/F/FreeCAD before build/FreeCAD/src/Mod/Draft/Draft.py"
    "F:/F/FreeCAD before build/FreeCAD/src/Mod/Draft/DraftTools.py"
    "F:/F/FreeCAD before build/FreeCAD/src/Mod/Draft/DraftGui.py"
    "F:/F/FreeCAD before build/FreeCAD/src/Mod/Draft/DraftVecUtils.py"
    "F:/F/FreeCAD before build/FreeCAD/src/Mod/Draft/DraftGeomUtils.py"
    "F:/F/FreeCAD before build/FreeCAD/src/Mod/Draft/WorkingPlane.py"
    "F:/F/FreeCAD before build/FreeCAD/src/Mod/Draft/TestDraft.py"
    "F:/F/FreeCAD before build/FreeCAD/src/Mod/Draft/TestDraftGui.py"
    "F:/F/FreeCAD before build/FreeCAD/src/Mod/Draft/importAirfoilDAT.py"
    "F:/F/FreeCAD before build/FreeCAD/src/Mod/Draft/importDXF.py"
    "F:/F/FreeCAD before build/FreeCAD/src/Mod/Draft/importDWG.py"
    "F:/F/FreeCAD before build/FreeCAD/src/Mod/Draft/importOCA.py"
    "F:/F/FreeCAD before build/FreeCAD/src/Mod/Draft/importSVG.py"
    "F:/F/FreeCAD before build/3DK-FreeCAD-1.0/CmakeBuild/src/Mod/Draft/Draft_rc.py"
    )
endif()

if(CMAKE_INSTALL_COMPONENT STREQUAL "Unspecified" OR NOT CMAKE_INSTALL_COMPONENT)
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/Mod/Draft/drafttests" TYPE FILE FILES
    "F:/F/FreeCAD before build/FreeCAD/src/Mod/Draft/drafttests/__init__.py"
    "F:/F/FreeCAD before build/FreeCAD/src/Mod/Draft/drafttests/auxiliary.py"
    "F:/F/FreeCAD before build/FreeCAD/src/Mod/Draft/drafttests/test_import.py"
    "F:/F/FreeCAD before build/FreeCAD/src/Mod/Draft/drafttests/test_import_gui.py"
    "F:/F/FreeCAD before build/FreeCAD/src/Mod/Draft/drafttests/test_import_tools.py"
    "F:/F/FreeCAD before build/FreeCAD/src/Mod/Draft/drafttests/test_pivy.py"
    "F:/F/FreeCAD before build/FreeCAD/src/Mod/Draft/drafttests/test_creation.py"
    "F:/F/FreeCAD before build/FreeCAD/src/Mod/Draft/drafttests/test_modification.py"
    "F:/F/FreeCAD before build/FreeCAD/src/Mod/Draft/drafttests/test_svg.py"
    "F:/F/FreeCAD before build/FreeCAD/src/Mod/Draft/drafttests/test_dxf.py"
    "F:/F/FreeCAD before build/FreeCAD/src/Mod/Draft/drafttests/test_dwg.py"
    "F:/F/FreeCAD before build/FreeCAD/src/Mod/Draft/drafttests/test_oca.py"
    "F:/F/FreeCAD before build/FreeCAD/src/Mod/Draft/drafttests/test_airfoildat.py"
    "F:/F/FreeCAD before build/FreeCAD/src/Mod/Draft/drafttests/test_draftgeomutils.py"
    "F:/F/FreeCAD before build/FreeCAD/src/Mod/Draft/drafttests/draft_test_objects.py"
    "F:/F/FreeCAD before build/FreeCAD/src/Mod/Draft/drafttests/README.md"
    )
endif()

if(CMAKE_INSTALL_COMPONENT STREQUAL "Unspecified" OR NOT CMAKE_INSTALL_COMPONENT)
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/Mod/Draft/draftgeoutils" TYPE FILE FILES
    "F:/F/FreeCAD before build/FreeCAD/src/Mod/Draft/draftgeoutils/__init__.py"
    "F:/F/FreeCAD before build/FreeCAD/src/Mod/Draft/draftgeoutils/general.py"
    "F:/F/FreeCAD before build/FreeCAD/src/Mod/Draft/draftgeoutils/edges.py"
    "F:/F/FreeCAD before build/FreeCAD/src/Mod/Draft/draftgeoutils/intersections.py"
    "F:/F/FreeCAD before build/FreeCAD/src/Mod/Draft/draftgeoutils/sort_edges.py"
    "F:/F/FreeCAD before build/FreeCAD/src/Mod/Draft/draftgeoutils/faces.py"
    "F:/F/FreeCAD before build/FreeCAD/src/Mod/Draft/draftgeoutils/geometry.py"
    "F:/F/FreeCAD before build/FreeCAD/src/Mod/Draft/draftgeoutils/geo_arrays.py"
    "F:/F/FreeCAD before build/FreeCAD/src/Mod/Draft/draftgeoutils/wires.py"
    "F:/F/FreeCAD before build/FreeCAD/src/Mod/Draft/draftgeoutils/arcs.py"
    "F:/F/FreeCAD before build/FreeCAD/src/Mod/Draft/draftgeoutils/fillets.py"
    "F:/F/FreeCAD before build/FreeCAD/src/Mod/Draft/draftgeoutils/offsets.py"
    "F:/F/FreeCAD before build/FreeCAD/src/Mod/Draft/draftgeoutils/linear_algebra.py"
    "F:/F/FreeCAD before build/FreeCAD/src/Mod/Draft/draftgeoutils/cuboids.py"
    "F:/F/FreeCAD before build/FreeCAD/src/Mod/Draft/draftgeoutils/circles.py"
    "F:/F/FreeCAD before build/FreeCAD/src/Mod/Draft/draftgeoutils/circles_apollonius.py"
    "F:/F/FreeCAD before build/FreeCAD/src/Mod/Draft/draftgeoutils/circle_inversion.py"
    "F:/F/FreeCAD before build/FreeCAD/src/Mod/Draft/draftgeoutils/circles_incomplete.py"
    )
endif()

if(CMAKE_INSTALL_COMPONENT STREQUAL "Unspecified" OR NOT CMAKE_INSTALL_COMPONENT)
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/Mod/Draft/draftutils" TYPE FILE FILES
    "F:/F/FreeCAD before build/FreeCAD/src/Mod/Draft/draftutils/__init__.py"
    "F:/F/FreeCAD before build/FreeCAD/src/Mod/Draft/draftutils/groups.py"
    "F:/F/FreeCAD before build/FreeCAD/src/Mod/Draft/draftutils/init_tools.py"
    "F:/F/FreeCAD before build/FreeCAD/src/Mod/Draft/draftutils/init_draft_statusbar.py"
    "F:/F/FreeCAD before build/FreeCAD/src/Mod/Draft/draftutils/units.py"
    "F:/F/FreeCAD before build/FreeCAD/src/Mod/Draft/draftutils/utils.py"
    "F:/F/FreeCAD before build/FreeCAD/src/Mod/Draft/draftutils/gui_utils.py"
    "F:/F/FreeCAD before build/FreeCAD/src/Mod/Draft/draftutils/todo.py"
    "F:/F/FreeCAD before build/FreeCAD/src/Mod/Draft/draftutils/translate.py"
    "F:/F/FreeCAD before build/FreeCAD/src/Mod/Draft/draftutils/messages.py"
    "F:/F/FreeCAD before build/FreeCAD/src/Mod/Draft/draftutils/README.md"
    )
endif()

if(CMAKE_INSTALL_COMPONENT STREQUAL "Unspecified" OR NOT CMAKE_INSTALL_COMPONENT)
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/Mod/Draft/draftfunctions" TYPE FILE FILES
    "F:/F/FreeCAD before build/FreeCAD/src/Mod/Draft/draftfunctions/__init__.py"
    "F:/F/FreeCAD before build/FreeCAD/src/Mod/Draft/draftfunctions/array.py"
    "F:/F/FreeCAD before build/FreeCAD/src/Mod/Draft/draftfunctions/cut.py"
    "F:/F/FreeCAD before build/FreeCAD/src/Mod/Draft/draftfunctions/downgrade.py"
    "F:/F/FreeCAD before build/FreeCAD/src/Mod/Draft/draftfunctions/draftify.py"
    "F:/F/FreeCAD before build/FreeCAD/src/Mod/Draft/draftfunctions/dxf.py"
    "F:/F/FreeCAD before build/FreeCAD/src/Mod/Draft/draftfunctions/extrude.py"
    "F:/F/FreeCAD before build/FreeCAD/src/Mod/Draft/draftfunctions/fuse.py"
    "F:/F/FreeCAD before build/FreeCAD/src/Mod/Draft/draftfunctions/heal.py"
    "F:/F/FreeCAD before build/FreeCAD/src/Mod/Draft/draftfunctions/join.py"
    "F:/F/FreeCAD before build/FreeCAD/src/Mod/Draft/draftfunctions/mirror.py"
    "F:/F/FreeCAD before build/FreeCAD/src/Mod/Draft/draftfunctions/move.py"
    "F:/F/FreeCAD before build/FreeCAD/src/Mod/Draft/draftfunctions/offset.py"
    "F:/F/FreeCAD before build/FreeCAD/src/Mod/Draft/draftfunctions/rotate.py"
    "F:/F/FreeCAD before build/FreeCAD/src/Mod/Draft/draftfunctions/scale.py"
    "F:/F/FreeCAD before build/FreeCAD/src/Mod/Draft/draftfunctions/split.py"
    "F:/F/FreeCAD before build/FreeCAD/src/Mod/Draft/draftfunctions/svg.py"
    "F:/F/FreeCAD before build/FreeCAD/src/Mod/Draft/draftfunctions/svgshapes.py"
    "F:/F/FreeCAD before build/FreeCAD/src/Mod/Draft/draftfunctions/svgtext.py"
    "F:/F/FreeCAD before build/FreeCAD/src/Mod/Draft/draftfunctions/upgrade.py"
    "F:/F/FreeCAD before build/FreeCAD/src/Mod/Draft/draftfunctions/README.md"
    )
endif()

if(CMAKE_INSTALL_COMPONENT STREQUAL "Unspecified" OR NOT CMAKE_INSTALL_COMPONENT)
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/Mod/Draft/draftmake" TYPE FILE FILES
    "F:/F/FreeCAD before build/FreeCAD/src/Mod/Draft/draftmake/__init__.py"
    "F:/F/FreeCAD before build/FreeCAD/src/Mod/Draft/draftmake/make_arc_3points.py"
    "F:/F/FreeCAD before build/FreeCAD/src/Mod/Draft/draftmake/make_array.py"
    "F:/F/FreeCAD before build/FreeCAD/src/Mod/Draft/draftmake/make_bezcurve.py"
    "F:/F/FreeCAD before build/FreeCAD/src/Mod/Draft/draftmake/make_block.py"
    "F:/F/FreeCAD before build/FreeCAD/src/Mod/Draft/draftmake/make_bspline.py"
    "F:/F/FreeCAD before build/FreeCAD/src/Mod/Draft/draftmake/make_circle.py"
    "F:/F/FreeCAD before build/FreeCAD/src/Mod/Draft/draftmake/make_circulararray.py"
    "F:/F/FreeCAD before build/FreeCAD/src/Mod/Draft/draftmake/make_clone.py"
    "F:/F/FreeCAD before build/FreeCAD/src/Mod/Draft/draftmake/make_copy.py"
    "F:/F/FreeCAD before build/FreeCAD/src/Mod/Draft/draftmake/make_dimension.py"
    "F:/F/FreeCAD before build/FreeCAD/src/Mod/Draft/draftmake/make_ellipse.py"
    "F:/F/FreeCAD before build/FreeCAD/src/Mod/Draft/draftmake/make_facebinder.py"
    "F:/F/FreeCAD before build/FreeCAD/src/Mod/Draft/draftmake/make_fillet.py"
    "F:/F/FreeCAD before build/FreeCAD/src/Mod/Draft/draftmake/make_label.py"
    "F:/F/FreeCAD before build/FreeCAD/src/Mod/Draft/draftmake/make_layer.py"
    "F:/F/FreeCAD before build/FreeCAD/src/Mod/Draft/draftmake/make_line.py"
    "F:/F/FreeCAD before build/FreeCAD/src/Mod/Draft/draftmake/make_orthoarray.py"
    "F:/F/FreeCAD before build/FreeCAD/src/Mod/Draft/draftmake/make_patharray.py"
    "F:/F/FreeCAD before build/FreeCAD/src/Mod/Draft/draftmake/make_point.py"
    "F:/F/FreeCAD before build/FreeCAD/src/Mod/Draft/draftmake/make_pointarray.py"
    "F:/F/FreeCAD before build/FreeCAD/src/Mod/Draft/draftmake/make_polararray.py"
    "F:/F/FreeCAD before build/FreeCAD/src/Mod/Draft/draftmake/make_polygon.py"
    "F:/F/FreeCAD before build/FreeCAD/src/Mod/Draft/draftmake/make_rectangle.py"
    "F:/F/FreeCAD before build/FreeCAD/src/Mod/Draft/draftmake/make_shape2dview.py"
    "F:/F/FreeCAD before build/FreeCAD/src/Mod/Draft/draftmake/make_shapestring.py"
    "F:/F/FreeCAD before build/FreeCAD/src/Mod/Draft/draftmake/make_sketch.py"
    "F:/F/FreeCAD before build/FreeCAD/src/Mod/Draft/draftmake/make_text.py"
    "F:/F/FreeCAD before build/FreeCAD/src/Mod/Draft/draftmake/make_wire.py"
    "F:/F/FreeCAD before build/FreeCAD/src/Mod/Draft/draftmake/make_wpproxy.py"
    "F:/F/FreeCAD before build/FreeCAD/src/Mod/Draft/draftmake/make_hatch.py"
    "F:/F/FreeCAD before build/FreeCAD/src/Mod/Draft/draftmake/README.md"
    )
endif()

if(CMAKE_INSTALL_COMPONENT STREQUAL "Unspecified" OR NOT CMAKE_INSTALL_COMPONENT)
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/Mod/Draft/draftobjects" TYPE FILE FILES
    "F:/F/FreeCAD before build/FreeCAD/src/Mod/Draft/draftobjects/__init__.py"
    "F:/F/FreeCAD before build/FreeCAD/src/Mod/Draft/draftobjects/array.py"
    "F:/F/FreeCAD before build/FreeCAD/src/Mod/Draft/draftobjects/base.py"
    "F:/F/FreeCAD before build/FreeCAD/src/Mod/Draft/draftobjects/bezcurve.py"
    "F:/F/FreeCAD before build/FreeCAD/src/Mod/Draft/draftobjects/block.py"
    "F:/F/FreeCAD before build/FreeCAD/src/Mod/Draft/draftobjects/bspline.py"
    "F:/F/FreeCAD before build/FreeCAD/src/Mod/Draft/draftobjects/circle.py"
    "F:/F/FreeCAD before build/FreeCAD/src/Mod/Draft/draftobjects/clone.py"
    "F:/F/FreeCAD before build/FreeCAD/src/Mod/Draft/draftobjects/ellipse.py"
    "F:/F/FreeCAD before build/FreeCAD/src/Mod/Draft/draftobjects/facebinder.py"
    "F:/F/FreeCAD before build/FreeCAD/src/Mod/Draft/draftobjects/draft_annotation.py"
    "F:/F/FreeCAD before build/FreeCAD/src/Mod/Draft/draftobjects/fillet.py"
    "F:/F/FreeCAD before build/FreeCAD/src/Mod/Draft/draftobjects/draftlink.py"
    "F:/F/FreeCAD before build/FreeCAD/src/Mod/Draft/draftobjects/label.py"
    "F:/F/FreeCAD before build/FreeCAD/src/Mod/Draft/draftobjects/layer.py"
    "F:/F/FreeCAD before build/FreeCAD/src/Mod/Draft/draftobjects/dimension.py"
    "F:/F/FreeCAD before build/FreeCAD/src/Mod/Draft/draftobjects/patharray.py"
    "F:/F/FreeCAD before build/FreeCAD/src/Mod/Draft/draftobjects/pathtwistedarray.py"
    "F:/F/FreeCAD before build/FreeCAD/src/Mod/Draft/draftobjects/point.py"
    "F:/F/FreeCAD before build/FreeCAD/src/Mod/Draft/draftobjects/pointarray.py"
    "F:/F/FreeCAD before build/FreeCAD/src/Mod/Draft/draftobjects/polygon.py"
    "F:/F/FreeCAD before build/FreeCAD/src/Mod/Draft/draftobjects/rectangle.py"
    "F:/F/FreeCAD before build/FreeCAD/src/Mod/Draft/draftobjects/shapestring.py"
    "F:/F/FreeCAD before build/FreeCAD/src/Mod/Draft/draftobjects/shape2dview.py"
    "F:/F/FreeCAD before build/FreeCAD/src/Mod/Draft/draftobjects/text.py"
    "F:/F/FreeCAD before build/FreeCAD/src/Mod/Draft/draftobjects/wire.py"
    "F:/F/FreeCAD before build/FreeCAD/src/Mod/Draft/draftobjects/wpproxy.py"
    "F:/F/FreeCAD before build/FreeCAD/src/Mod/Draft/draftobjects/hatch.py"
    "F:/F/FreeCAD before build/FreeCAD/src/Mod/Draft/draftobjects/README.md"
    )
endif()

if(CMAKE_INSTALL_COMPONENT STREQUAL "Unspecified" OR NOT CMAKE_INSTALL_COMPONENT)
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/Mod/Draft/draftviewproviders" TYPE FILE FILES
    "F:/F/FreeCAD before build/FreeCAD/src/Mod/Draft/draftviewproviders/__init__.py"
    "F:/F/FreeCAD before build/FreeCAD/src/Mod/Draft/draftviewproviders/view_array.py"
    "F:/F/FreeCAD before build/FreeCAD/src/Mod/Draft/draftviewproviders/view_base.py"
    "F:/F/FreeCAD before build/FreeCAD/src/Mod/Draft/draftviewproviders/view_bezcurve.py"
    "F:/F/FreeCAD before build/FreeCAD/src/Mod/Draft/draftviewproviders/view_bspline.py"
    "F:/F/FreeCAD before build/FreeCAD/src/Mod/Draft/draftviewproviders/view_circulararray.py"
    "F:/F/FreeCAD before build/FreeCAD/src/Mod/Draft/draftviewproviders/view_clone.py"
    "F:/F/FreeCAD before build/FreeCAD/src/Mod/Draft/draftviewproviders/view_facebinder.py"
    "F:/F/FreeCAD before build/FreeCAD/src/Mod/Draft/draftviewproviders/view_orthoarray.py"
    "F:/F/FreeCAD before build/FreeCAD/src/Mod/Draft/draftviewproviders/view_polararray.py"
    "F:/F/FreeCAD before build/FreeCAD/src/Mod/Draft/draftviewproviders/view_draft_annotation.py"
    "F:/F/FreeCAD before build/FreeCAD/src/Mod/Draft/draftviewproviders/view_fillet.py"
    "F:/F/FreeCAD before build/FreeCAD/src/Mod/Draft/draftviewproviders/view_draftlink.py"
    "F:/F/FreeCAD before build/FreeCAD/src/Mod/Draft/draftviewproviders/view_label.py"
    "F:/F/FreeCAD before build/FreeCAD/src/Mod/Draft/draftviewproviders/view_layer.py"
    "F:/F/FreeCAD before build/FreeCAD/src/Mod/Draft/draftviewproviders/view_dimension.py"
    "F:/F/FreeCAD before build/FreeCAD/src/Mod/Draft/draftviewproviders/view_point.py"
    "F:/F/FreeCAD before build/FreeCAD/src/Mod/Draft/draftviewproviders/view_rectangle.py"
    "F:/F/FreeCAD before build/FreeCAD/src/Mod/Draft/draftviewproviders/view_text.py"
    "F:/F/FreeCAD before build/FreeCAD/src/Mod/Draft/draftviewproviders/view_wire.py"
    "F:/F/FreeCAD before build/FreeCAD/src/Mod/Draft/draftviewproviders/view_wpproxy.py"
    "F:/F/FreeCAD before build/FreeCAD/src/Mod/Draft/draftviewproviders/view_hatch.py"
    "F:/F/FreeCAD before build/FreeCAD/src/Mod/Draft/draftviewproviders/view_shapestring.py"
    "F:/F/FreeCAD before build/FreeCAD/src/Mod/Draft/draftviewproviders/README.md"
    )
endif()

if(CMAKE_INSTALL_COMPONENT STREQUAL "Unspecified" OR NOT CMAKE_INSTALL_COMPONENT)
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/Mod/Draft/draftguitools" TYPE FILE FILES
    "F:/F/FreeCAD before build/FreeCAD/src/Mod/Draft/draftguitools/__init__.py"
    "F:/F/FreeCAD before build/FreeCAD/src/Mod/Draft/draftguitools/gui_annotationstyleeditor.py"
    "F:/F/FreeCAD before build/FreeCAD/src/Mod/Draft/draftguitools/gui_base.py"
    "F:/F/FreeCAD before build/FreeCAD/src/Mod/Draft/draftguitools/gui_base_original.py"
    "F:/F/FreeCAD before build/FreeCAD/src/Mod/Draft/draftguitools/gui_tool_utils.py"
    "F:/F/FreeCAD before build/FreeCAD/src/Mod/Draft/draftguitools/gui_planeproxy.py"
    "F:/F/FreeCAD before build/FreeCAD/src/Mod/Draft/draftguitools/gui_selectplane.py"
    "F:/F/FreeCAD before build/FreeCAD/src/Mod/Draft/draftguitools/gui_snaps.py"
    "F:/F/FreeCAD before build/FreeCAD/src/Mod/Draft/draftguitools/gui_snapper.py"
    "F:/F/FreeCAD before build/FreeCAD/src/Mod/Draft/draftguitools/gui_trackers.py"
    "F:/F/FreeCAD before build/FreeCAD/src/Mod/Draft/draftguitools/gui_edit_base_object.py"
    "F:/F/FreeCAD before build/FreeCAD/src/Mod/Draft/draftguitools/gui_edit_draft_objects.py"
    "F:/F/FreeCAD before build/FreeCAD/src/Mod/Draft/draftguitools/gui_edit_arch_objects.py"
    "F:/F/FreeCAD before build/FreeCAD/src/Mod/Draft/draftguitools/gui_edit_part_objects.py"
    "F:/F/FreeCAD before build/FreeCAD/src/Mod/Draft/draftguitools/gui_edit_sketcher_objects.py"
    "F:/F/FreeCAD before build/FreeCAD/src/Mod/Draft/draftguitools/gui_edit.py"
    "F:/F/FreeCAD before build/FreeCAD/src/Mod/Draft/draftguitools/gui_togglemodes.py"
    "F:/F/FreeCAD before build/FreeCAD/src/Mod/Draft/draftguitools/gui_groups.py"
    "F:/F/FreeCAD before build/FreeCAD/src/Mod/Draft/draftguitools/gui_grid.py"
    "F:/F/FreeCAD before build/FreeCAD/src/Mod/Draft/draftguitools/gui_heal.py"
    "F:/F/FreeCAD before build/FreeCAD/src/Mod/Draft/draftguitools/gui_dimension_ops.py"
    "F:/F/FreeCAD before build/FreeCAD/src/Mod/Draft/draftguitools/gui_lineslope.py"
    "F:/F/FreeCAD before build/FreeCAD/src/Mod/Draft/draftguitools/gui_layers.py"
    "F:/F/FreeCAD before build/FreeCAD/src/Mod/Draft/draftguitools/gui_setstyle.py"
    "F:/F/FreeCAD before build/FreeCAD/src/Mod/Draft/draftguitools/gui_lines.py"
    "F:/F/FreeCAD before build/FreeCAD/src/Mod/Draft/draftguitools/gui_fillets.py"
    "F:/F/FreeCAD before build/FreeCAD/src/Mod/Draft/draftguitools/gui_splines.py"
    "F:/F/FreeCAD before build/FreeCAD/src/Mod/Draft/draftguitools/gui_beziers.py"
    "F:/F/FreeCAD before build/FreeCAD/src/Mod/Draft/draftguitools/gui_rectangles.py"
    "F:/F/FreeCAD before build/FreeCAD/src/Mod/Draft/draftguitools/gui_arcs.py"
    "F:/F/FreeCAD before build/FreeCAD/src/Mod/Draft/draftguitools/gui_circles.py"
    "F:/F/FreeCAD before build/FreeCAD/src/Mod/Draft/draftguitools/gui_polygons.py"
    "F:/F/FreeCAD before build/FreeCAD/src/Mod/Draft/draftguitools/gui_ellipses.py"
    "F:/F/FreeCAD before build/FreeCAD/src/Mod/Draft/draftguitools/gui_texts.py"
    "F:/F/FreeCAD before build/FreeCAD/src/Mod/Draft/draftguitools/gui_dimensions.py"
    "F:/F/FreeCAD before build/FreeCAD/src/Mod/Draft/draftguitools/gui_shapestrings.py"
    "F:/F/FreeCAD before build/FreeCAD/src/Mod/Draft/draftguitools/gui_points.py"
    "F:/F/FreeCAD before build/FreeCAD/src/Mod/Draft/draftguitools/gui_facebinders.py"
    "F:/F/FreeCAD before build/FreeCAD/src/Mod/Draft/draftguitools/gui_labels.py"
    "F:/F/FreeCAD before build/FreeCAD/src/Mod/Draft/draftguitools/gui_hatch.py"
    "F:/F/FreeCAD before build/FreeCAD/src/Mod/Draft/draftguitools/gui_subelements.py"
    "F:/F/FreeCAD before build/FreeCAD/src/Mod/Draft/draftguitools/gui_move.py"
    "F:/F/FreeCAD before build/FreeCAD/src/Mod/Draft/draftguitools/gui_styles.py"
    "F:/F/FreeCAD before build/FreeCAD/src/Mod/Draft/draftguitools/gui_rotate.py"
    "F:/F/FreeCAD before build/FreeCAD/src/Mod/Draft/draftguitools/gui_offset.py"
    "F:/F/FreeCAD before build/FreeCAD/src/Mod/Draft/draftguitools/gui_stretch.py"
    "F:/F/FreeCAD before build/FreeCAD/src/Mod/Draft/draftguitools/gui_join.py"
    "F:/F/FreeCAD before build/FreeCAD/src/Mod/Draft/draftguitools/gui_split.py"
    "F:/F/FreeCAD before build/FreeCAD/src/Mod/Draft/draftguitools/gui_upgrade.py"
    "F:/F/FreeCAD before build/FreeCAD/src/Mod/Draft/draftguitools/gui_downgrade.py"
    "F:/F/FreeCAD before build/FreeCAD/src/Mod/Draft/draftguitools/gui_trimex.py"
    "F:/F/FreeCAD before build/FreeCAD/src/Mod/Draft/draftguitools/gui_scale.py"
    "F:/F/FreeCAD before build/FreeCAD/src/Mod/Draft/draftguitools/gui_wire2spline.py"
    "F:/F/FreeCAD before build/FreeCAD/src/Mod/Draft/draftguitools/gui_shape2dview.py"
    "F:/F/FreeCAD before build/FreeCAD/src/Mod/Draft/draftguitools/gui_draft2sketch.py"
    "F:/F/FreeCAD before build/FreeCAD/src/Mod/Draft/draftguitools/gui_arrays.py"
    "F:/F/FreeCAD before build/FreeCAD/src/Mod/Draft/draftguitools/gui_array_simple.py"
    "F:/F/FreeCAD before build/FreeCAD/src/Mod/Draft/draftguitools/gui_circulararray.py"
    "F:/F/FreeCAD before build/FreeCAD/src/Mod/Draft/draftguitools/gui_orthoarray.py"
    "F:/F/FreeCAD before build/FreeCAD/src/Mod/Draft/draftguitools/gui_patharray.py"
    "F:/F/FreeCAD before build/FreeCAD/src/Mod/Draft/draftguitools/gui_pathtwistedarray.py"
    "F:/F/FreeCAD before build/FreeCAD/src/Mod/Draft/draftguitools/gui_pointarray.py"
    "F:/F/FreeCAD before build/FreeCAD/src/Mod/Draft/draftguitools/gui_polararray.py"
    "F:/F/FreeCAD before build/FreeCAD/src/Mod/Draft/draftguitools/gui_clone.py"
    "F:/F/FreeCAD before build/FreeCAD/src/Mod/Draft/draftguitools/gui_mirror.py"
    "F:/F/FreeCAD before build/FreeCAD/src/Mod/Draft/draftguitools/README.md"
    )
endif()

if(CMAKE_INSTALL_COMPONENT STREQUAL "Unspecified" OR NOT CMAKE_INSTALL_COMPONENT)
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/Mod/Draft/drafttaskpanels" TYPE FILE FILES
    "F:/F/FreeCAD before build/FreeCAD/src/Mod/Draft/drafttaskpanels/__init__.py"
    "F:/F/FreeCAD before build/FreeCAD/src/Mod/Draft/drafttaskpanels/task_circulararray.py"
    "F:/F/FreeCAD before build/FreeCAD/src/Mod/Draft/drafttaskpanels/task_orthoarray.py"
    "F:/F/FreeCAD before build/FreeCAD/src/Mod/Draft/drafttaskpanels/task_polararray.py"
    "F:/F/FreeCAD before build/FreeCAD/src/Mod/Draft/drafttaskpanels/task_scale.py"
    "F:/F/FreeCAD before build/FreeCAD/src/Mod/Draft/drafttaskpanels/task_selectplane.py"
    "F:/F/FreeCAD before build/FreeCAD/src/Mod/Draft/drafttaskpanels/task_shapestring.py"
    "F:/F/FreeCAD before build/FreeCAD/src/Mod/Draft/drafttaskpanels/README.md"
    )
endif()

if(CMAKE_INSTALL_COMPONENT STREQUAL "Unspecified" OR NOT CMAKE_INSTALL_COMPONENT)
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/data/Mod/Draft/Resources/icons" TYPE FILE FILES "F:/F/FreeCAD before build/FreeCAD/src/Mod/Draft/Resources/icons/DraftWorkbench.svg")
endif()

