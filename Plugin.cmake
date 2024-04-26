# ~~~
# Summary:      Local, non-generic plugin setup
# Copyright (c) 2020-2021 Mike Rossiter
# License:      GPLv3+
# ~~~

# This program is free software; you can redistribute it and/or modify
# it under the terms of the GNU General Public License as published by
# the Free Software Foundation; either version 3 of the License, or
# (at your option) any later version.


# -------- Options ----------

set(OCPN_TEST_REPO
    "opencpn/sar-alpha"
    CACHE STRING "Default repository for untagged builds"
)
set(OCPN_BETA_REPO
    "opencpn/sar-beta"
    CACHE STRING
    "Default repository for tagged builds matching 'beta'"
)
set(OCPN_RELEASE_REPO
    "opencpn/sar-prod"
    CACHE STRING
    "Default repository for tagged builds not matching 'beta'"
)

option(PLUGIN_USE_SVG "Use SVG graphics" ON)

#
#
# -------  Plugin setup --------
#
set(PKG_NAME sar_pi)
set(PKG_VERSION  4.2.5)
set(PKG_PRERELEASE "")  # Empty, or a tag like 'beta'

set(DISPLAY_NAME sar)    # Dialogs, installer artifacts, ...
set(PLUGIN_API_NAME sar) # As of GetCommonName() in plugin API
set(PKG_SUMMARY "Produces SAR search patterns as GPX files")
set(PKG_DESCRIPTION [=[
Enables production of SAR search patterns, in GPX format, that can
be imported into OpenCPN to assist in performing searches.
]=])

set(PKG_AUTHOR "Mike Rossiter")
set(PKG_IS_OPEN_SOURCE "yes")
set(PKG_HOMEPAGE https://github.com/Rasbats/sar_pi)
set(PKG_INFO_URL https://opencpn.org/OpenCPN/plugins/sar.html)

SET(SRC
        src/SAR_pi.h
        src/SAR_pi.cpp
        src/icons.h
        src/icons.cpp
        src/SARgui.h
        src/SARgui.cpp
        src/SARgui_impl.cpp
        src/SARgui_impl.h
        src/NavFunc.h
        src/NavFunc.cpp
        src/bitmaps.h
        src/bitmaps.cpp
        src/tinyxml2.cpp
        src/tinyxml2.h
    )

set(PKG_API_LIB api-18)  #  A directory in libs/ e. g., api-17 or api-16

macro(late_init)
  # Perform initialization after the PACKAGE_NAME library, compilers
  # and ocpn::api is available.
  if (PLUGIN_USE_SVG)
    target_compile_definitions(${PACKAGE_NAME} PUBLIC PLUGIN_USE_SVG)
  endif ()
endmacro ()

macro(add_plugin_libraries)
  # The wxsvg library enables SVG overall in the plugin
  add_subdirectory("${CMAKE_SOURCE_DIR}/opencpn-libs/wxsvg")
  target_link_libraries(${PACKAGE_NAME} ocpn::wxsvg)
endmacro ()
