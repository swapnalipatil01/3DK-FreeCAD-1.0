# Install script for directory: F:/F/FreeCAD before build/FreeCAD/src/Mod/AddonManager

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
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/Mod/AddonManager" TYPE FILE FILES
    "F:/F/FreeCAD before build/FreeCAD/src/Mod/AddonManager/add_toolbar_button_dialog.ui"
    "F:/F/FreeCAD before build/FreeCAD/src/Mod/AddonManager/Addon.py"
    "F:/F/FreeCAD before build/FreeCAD/src/Mod/AddonManager/AddonManager.py"
    "F:/F/FreeCAD before build/FreeCAD/src/Mod/AddonManager/AddonManager.ui"
    "F:/F/FreeCAD before build/FreeCAD/src/Mod/AddonManager/addonmanager_connection_checker.py"
    "F:/F/FreeCAD before build/FreeCAD/src/Mod/AddonManager/addonmanager_dependency_installer.py"
    "F:/F/FreeCAD before build/FreeCAD/src/Mod/AddonManager/addonmanager_devmode.py"
    "F:/F/FreeCAD before build/FreeCAD/src/Mod/AddonManager/addonmanager_devmode_add_content.py"
    "F:/F/FreeCAD before build/FreeCAD/src/Mod/AddonManager/addonmanager_devmode_license_selector.py"
    "F:/F/FreeCAD before build/FreeCAD/src/Mod/AddonManager/addonmanager_devmode_licenses_table.py"
    "F:/F/FreeCAD before build/FreeCAD/src/Mod/AddonManager/addonmanager_devmode_metadata_checker.py"
    "F:/F/FreeCAD before build/FreeCAD/src/Mod/AddonManager/addonmanager_devmode_person_editor.py"
    "F:/F/FreeCAD before build/FreeCAD/src/Mod/AddonManager/addonmanager_devmode_people_table.py"
    "F:/F/FreeCAD before build/FreeCAD/src/Mod/AddonManager/addonmanager_devmode_predictor.py"
    "F:/F/FreeCAD before build/FreeCAD/src/Mod/AddonManager/addonmanager_devmode_validators.py"
    "F:/F/FreeCAD before build/FreeCAD/src/Mod/AddonManager/addonmanager_firstrun.py"
    "F:/F/FreeCAD before build/FreeCAD/src/Mod/AddonManager/addonmanager_freecad_interface.py"
    "F:/F/FreeCAD before build/FreeCAD/src/Mod/AddonManager/addonmanager_git.py"
    "F:/F/FreeCAD before build/FreeCAD/src/Mod/AddonManager/addonmanager_installer.py"
    "F:/F/FreeCAD before build/FreeCAD/src/Mod/AddonManager/addonmanager_installer_gui.py"
    "F:/F/FreeCAD before build/FreeCAD/src/Mod/AddonManager/addonmanager_macro.py"
    "F:/F/FreeCAD before build/FreeCAD/src/Mod/AddonManager/addonmanager_macro_parser.py"
    "F:/F/FreeCAD before build/FreeCAD/src/Mod/AddonManager/addonmanager_metadata.py"
    "F:/F/FreeCAD before build/FreeCAD/src/Mod/AddonManager/addonmanager_pyside_interface.py"
    "F:/F/FreeCAD before build/FreeCAD/src/Mod/AddonManager/addonmanager_update_all_gui.py"
    "F:/F/FreeCAD before build/FreeCAD/src/Mod/AddonManager/addonmanager_uninstaller.py"
    "F:/F/FreeCAD before build/FreeCAD/src/Mod/AddonManager/addonmanager_uninstaller_gui.py"
    "F:/F/FreeCAD before build/FreeCAD/src/Mod/AddonManager/addonmanager_utilities.py"
    "F:/F/FreeCAD before build/FreeCAD/src/Mod/AddonManager/addonmanager_workers_installation.py"
    "F:/F/FreeCAD before build/FreeCAD/src/Mod/AddonManager/addonmanager_workers_startup.py"
    "F:/F/FreeCAD before build/FreeCAD/src/Mod/AddonManager/addonmanager_workers_utility.py"
    "F:/F/FreeCAD before build/FreeCAD/src/Mod/AddonManager/AddonManagerOptions.ui"
    "F:/F/FreeCAD before build/FreeCAD/src/Mod/AddonManager/AddonManagerOptions_AddCustomRepository.ui"
    "F:/F/FreeCAD before build/FreeCAD/src/Mod/AddonManager/AddonManagerOptions.py"
    "F:/F/FreeCAD before build/FreeCAD/src/Mod/AddonManager/ALLOWED_PYTHON_PACKAGES.txt"
    "F:/F/FreeCAD before build/FreeCAD/src/Mod/AddonManager/change_branch.py"
    "F:/F/FreeCAD before build/FreeCAD/src/Mod/AddonManager/change_branch.ui"
    "F:/F/FreeCAD before build/FreeCAD/src/Mod/AddonManager/compact_view.py"
    "F:/F/FreeCAD before build/FreeCAD/src/Mod/AddonManager/dependency_resolution_dialog.ui"
    "F:/F/FreeCAD before build/FreeCAD/src/Mod/AddonManager/developer_mode.ui"
    "F:/F/FreeCAD before build/FreeCAD/src/Mod/AddonManager/developer_mode_add_content.ui"
    "F:/F/FreeCAD before build/FreeCAD/src/Mod/AddonManager/developer_mode_advanced_freecad_versions.ui"
    "F:/F/FreeCAD before build/FreeCAD/src/Mod/AddonManager/developer_mode_copyright_info.ui"
    "F:/F/FreeCAD before build/FreeCAD/src/Mod/AddonManager/developer_mode_dependencies.ui"
    "F:/F/FreeCAD before build/FreeCAD/src/Mod/AddonManager/developer_mode_edit_dependency.ui"
    "F:/F/FreeCAD before build/FreeCAD/src/Mod/AddonManager/developer_mode_freecad_versions.ui"
    "F:/F/FreeCAD before build/FreeCAD/src/Mod/AddonManager/developer_mode_license.ui"
    "F:/F/FreeCAD before build/FreeCAD/src/Mod/AddonManager/developer_mode_licenses_table.ui"
    "F:/F/FreeCAD before build/FreeCAD/src/Mod/AddonManager/developer_mode_people.ui"
    "F:/F/FreeCAD before build/FreeCAD/src/Mod/AddonManager/developer_mode_people_table.ui"
    "F:/F/FreeCAD before build/FreeCAD/src/Mod/AddonManager/developer_mode_select_from_list.ui"
    "F:/F/FreeCAD before build/FreeCAD/src/Mod/AddonManager/developer_mode_tags.ui"
    "F:/F/FreeCAD before build/FreeCAD/src/Mod/AddonManager/expanded_view.py"
    "F:/F/FreeCAD before build/FreeCAD/src/Mod/AddonManager/first_run.ui"
    "F:/F/FreeCAD before build/FreeCAD/src/Mod/AddonManager/Init.py"
    "F:/F/FreeCAD before build/FreeCAD/src/Mod/AddonManager/InitGui.py"
    "F:/F/FreeCAD before build/FreeCAD/src/Mod/AddonManager/install_to_toolbar.py"
    "F:/F/FreeCAD before build/FreeCAD/src/Mod/AddonManager/loading.html"
    "F:/F/FreeCAD before build/FreeCAD/src/Mod/AddonManager/manage_python_dependencies.py"
    "F:/F/FreeCAD before build/FreeCAD/src/Mod/AddonManager/NetworkManager.py"
    "F:/F/FreeCAD before build/FreeCAD/src/Mod/AddonManager/package_details.py"
    "F:/F/FreeCAD before build/FreeCAD/src/Mod/AddonManager/package_list.py"
    "F:/F/FreeCAD before build/FreeCAD/src/Mod/AddonManager/PythonDependencyUpdateDialog.ui"
    "F:/F/FreeCAD before build/FreeCAD/src/Mod/AddonManager/select_toolbar_dialog.ui"
    "F:/F/FreeCAD before build/FreeCAD/src/Mod/AddonManager/TestAddonManagerApp.py"
    "F:/F/FreeCAD before build/FreeCAD/src/Mod/AddonManager/update_all.ui"
    "F:/F/FreeCAD before build/FreeCAD/src/Mod/AddonManager/TestAddonManagerGui.py"
    "F:/F/FreeCAD before build/3DK-FreeCAD-1.0/CmakeBuild/src/Mod/AddonManager/AddonManager_rc.py"
    )
endif()

if(CMAKE_INSTALL_COMPONENT STREQUAL "Unspecified" OR NOT CMAKE_INSTALL_COMPONENT)
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/Mod/AddonManager/AddonManagerTest" TYPE FILE FILES
    "F:/F/FreeCAD before build/FreeCAD/src/Mod/AddonManager/AddonManagerTest/__init__.py"
    "F:/F/FreeCAD before build/FreeCAD/src/Mod/AddonManager/AddonManagerTest/test_information.md"
    )
endif()

if(CMAKE_INSTALL_COMPONENT STREQUAL "Unspecified" OR NOT CMAKE_INSTALL_COMPONENT)
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/Mod/AddonManager/AddonManagerTest/app" TYPE FILE FILES
    "F:/F/FreeCAD before build/FreeCAD/src/Mod/AddonManager/AddonManagerTest/app/__init__.py"
    "F:/F/FreeCAD before build/FreeCAD/src/Mod/AddonManager/AddonManagerTest/app/mocks.py"
    "F:/F/FreeCAD before build/FreeCAD/src/Mod/AddonManager/AddonManagerTest/app/test_addon.py"
    "F:/F/FreeCAD before build/FreeCAD/src/Mod/AddonManager/AddonManagerTest/app/test_dependency_installer.py"
    "F:/F/FreeCAD before build/FreeCAD/src/Mod/AddonManager/AddonManagerTest/app/test_freecad_interface.py"
    "F:/F/FreeCAD before build/FreeCAD/src/Mod/AddonManager/AddonManagerTest/app/test_git.py"
    "F:/F/FreeCAD before build/FreeCAD/src/Mod/AddonManager/AddonManagerTest/app/test_installer.py"
    "F:/F/FreeCAD before build/FreeCAD/src/Mod/AddonManager/AddonManagerTest/app/test_macro.py"
    "F:/F/FreeCAD before build/FreeCAD/src/Mod/AddonManager/AddonManagerTest/app/test_macro_parser.py"
    "F:/F/FreeCAD before build/FreeCAD/src/Mod/AddonManager/AddonManagerTest/app/test_metadata.py"
    "F:/F/FreeCAD before build/FreeCAD/src/Mod/AddonManager/AddonManagerTest/app/test_utilities.py"
    "F:/F/FreeCAD before build/FreeCAD/src/Mod/AddonManager/AddonManagerTest/app/test_uninstaller.py"
    )
endif()

if(CMAKE_INSTALL_COMPONENT STREQUAL "Unspecified" OR NOT CMAKE_INSTALL_COMPONENT)
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/Mod/AddonManager/AddonManagerTest/gui" TYPE FILE FILES
    "F:/F/FreeCAD before build/FreeCAD/src/Mod/AddonManager/AddonManagerTest/gui/__init__.py"
    "F:/F/FreeCAD before build/FreeCAD/src/Mod/AddonManager/AddonManagerTest/gui/gui_mocks.py"
    "F:/F/FreeCAD before build/FreeCAD/src/Mod/AddonManager/AddonManagerTest/gui/test_gui.py"
    "F:/F/FreeCAD before build/FreeCAD/src/Mod/AddonManager/AddonManagerTest/gui/test_installer_gui.py"
    "F:/F/FreeCAD before build/FreeCAD/src/Mod/AddonManager/AddonManagerTest/gui/test_update_all_gui.py"
    "F:/F/FreeCAD before build/FreeCAD/src/Mod/AddonManager/AddonManagerTest/gui/test_uninstaller_gui.py"
    "F:/F/FreeCAD before build/FreeCAD/src/Mod/AddonManager/AddonManagerTest/gui/test_workers_startup.py"
    "F:/F/FreeCAD before build/FreeCAD/src/Mod/AddonManager/AddonManagerTest/gui/test_workers_utility.py"
    )
endif()

if(CMAKE_INSTALL_COMPONENT STREQUAL "Unspecified" OR NOT CMAKE_INSTALL_COMPONENT)
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/Mod/AddonManager/AddonManagerTest/data" TYPE FILE FILES
    "F:/F/FreeCAD before build/FreeCAD/src/Mod/AddonManager/AddonManagerTest/data/__init__.py"
    "F:/F/FreeCAD before build/FreeCAD/src/Mod/AddonManager/AddonManagerTest/data/addon_update_stats.json"
    "F:/F/FreeCAD before build/FreeCAD/src/Mod/AddonManager/AddonManagerTest/data/bad_macro_metadata.FCStd"
    "F:/F/FreeCAD before build/FreeCAD/src/Mod/AddonManager/AddonManagerTest/data/combination.xml"
    "F:/F/FreeCAD before build/FreeCAD/src/Mod/AddonManager/AddonManagerTest/data/corrupted_metadata.zip"
    "F:/F/FreeCAD before build/FreeCAD/src/Mod/AddonManager/AddonManagerTest/data/depends_on_all_workbenches.xml"
    "F:/F/FreeCAD before build/FreeCAD/src/Mod/AddonManager/AddonManagerTest/data/DoNothing.FCMacro"
    "F:/F/FreeCAD before build/FreeCAD/src/Mod/AddonManager/AddonManagerTest/data/git_submodules.txt"
    "F:/F/FreeCAD before build/FreeCAD/src/Mod/AddonManager/AddonManagerTest/data/good_macro_metadata.FCStd"
    "F:/F/FreeCAD before build/FreeCAD/src/Mod/AddonManager/AddonManagerTest/data/good_package.xml"
    "F:/F/FreeCAD before build/FreeCAD/src/Mod/AddonManager/AddonManagerTest/data/icon_cache.zip"
    "F:/F/FreeCAD before build/FreeCAD/src/Mod/AddonManager/AddonManagerTest/data/icon_cache.zip.sha1"
    "F:/F/FreeCAD before build/FreeCAD/src/Mod/AddonManager/AddonManagerTest/data/macro_only.xml"
    "F:/F/FreeCAD before build/FreeCAD/src/Mod/AddonManager/AddonManagerTest/data/macro_template.FCStd"
    "F:/F/FreeCAD before build/FreeCAD/src/Mod/AddonManager/AddonManagerTest/data/MacrosRecipesWikiPage.zip"
    "F:/F/FreeCAD before build/FreeCAD/src/Mod/AddonManager/AddonManagerTest/data/metadata.zip"
    "F:/F/FreeCAD before build/FreeCAD/src/Mod/AddonManager/AddonManagerTest/data/missing_macro_metadata.FCStd"
    "F:/F/FreeCAD before build/FreeCAD/src/Mod/AddonManager/AddonManagerTest/data/prefpack_only.xml"
    "F:/F/FreeCAD before build/FreeCAD/src/Mod/AddonManager/AddonManagerTest/data/test_addon_with_fcmacro.zip"
    "F:/F/FreeCAD before build/FreeCAD/src/Mod/AddonManager/AddonManagerTest/data/test_github_style_repo.zip"
    "F:/F/FreeCAD before build/FreeCAD/src/Mod/AddonManager/AddonManagerTest/data/test_repo.zip"
    "F:/F/FreeCAD before build/FreeCAD/src/Mod/AddonManager/AddonManagerTest/data/test_simple_repo.zip"
    "F:/F/FreeCAD before build/FreeCAD/src/Mod/AddonManager/AddonManagerTest/data/test_version_detection.xml"
    "F:/F/FreeCAD before build/FreeCAD/src/Mod/AddonManager/AddonManagerTest/data/TestWorkbench.zip"
    "F:/F/FreeCAD before build/FreeCAD/src/Mod/AddonManager/AddonManagerTest/data/workbench_only.xml"
    )
endif()

