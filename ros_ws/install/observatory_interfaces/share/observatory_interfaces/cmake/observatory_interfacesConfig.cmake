# generated from ament/cmake/core/templates/nameConfig.cmake.in

# prevent multiple inclusion
if(_observatory_interfaces_CONFIG_INCLUDED)
  # ensure to keep the found flag the same
  if(NOT DEFINED observatory_interfaces_FOUND)
    # explicitly set it to FALSE, otherwise CMake will set it to TRUE
    set(observatory_interfaces_FOUND FALSE)
  elseif(NOT observatory_interfaces_FOUND)
    # use separate condition to avoid uninitialized variable warning
    set(observatory_interfaces_FOUND FALSE)
  endif()
  return()
endif()
set(_observatory_interfaces_CONFIG_INCLUDED TRUE)

# output package information
if(NOT observatory_interfaces_FIND_QUIETLY)
  message(STATUS "Found observatory_interfaces: 0.0.0 (${observatory_interfaces_DIR})")
endif()

# warn when using a deprecated package
if(NOT "" STREQUAL "")
  set(_msg "Package 'observatory_interfaces' is deprecated")
  # append custom deprecation text if available
  if(NOT "" STREQUAL "TRUE")
    set(_msg "${_msg} ()")
  endif()
  message(WARNING "${_msg}")
endif()

# flag package as ament-based to distinguish it after being find_package()-ed
set(observatory_interfaces_FOUND_AMENT_PACKAGE TRUE)

# include all config extra files
set(_extras "rosidl_cmake-extras.cmake;ament_cmake_export_libraries-extras.cmake;ament_cmake_export_include_directories-extras.cmake")
foreach(_extra ${_extras})
  include("${observatory_interfaces_DIR}/${_extra}")
endforeach()
