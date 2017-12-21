cmake_minimum_required(VERSION 2.8.0)
project(codec CXX)

set(CMAKE_C_COMPILER gcc)
set(CMAKE_CXX_COMPILER g++)

if (CMAKE_INSTALL_PREFIX_INITIALIZED_TO_DEFAULT)
  set (CMAKE_INSTALL_PREFIX "${CMAKE_BINARY_DIR}/install" CACHE PATH "default install path" FORCE )
endif()

# set version info
set(CODEC_MAJOR_VERSION 0)
set(CODEC_MINOR_VERSION 1)
set(CODEC_PATCH_VERSION 0)
set(CODEC_VERSION ${CODEC_MAJOR_VERSION}.${CODEC_MINOR_VERSION}.${CODEC_PATCH_VERSION})

if (UNIX)
  macro (add_library _name)
    _add_library(${ARGV})
    if (TARGET ${_name})
      SET_TARGET_PROPERTIES(${_name}
        PROPERTIES
            VERSION ${CODEC_VERSION}
            # SOVERSION 0.0.0
        )
    endif()
  endmacro()
endif (UNIX)

# compile options
add_compile_options(
  -Wall
  -g
  -O2)

# allow external projects
include(${CMAKE_ROOT}/Modules/ExternalProject.cmake)

# add source
# add_subdirectory(include)
add_subdirectory(src)

set(${PROJECT_NAME}_INCLUDE_DIR ${CMAKE_INSTALL_PREFIX}/include)
set(${PROJECT_NAME}_LIBRARIES codec)

include_directories(${CMAKE_INSTALL_PREFIX}/include)
link_directories(${CMAKE_INSTALL_PREFIX}/lib)

configure_file(
  ${PROJECT_NAME}.cmake.in
  ${CMAKE_CURRENT_BINARY_DIR}/${PROJECT_NAME}.cmake
  @ONLY
  )
install(EXPORT codec DESTINATION lib/cmake/codec)
install(
  FILES ${CMAKE_CURRENT_BINARY_DIR}/${PROJECT_NAME}.cmake
  DESTINATION lib/cmake/codec COMPONENT dev
  RENAME ${PROJECT_NAME}Config.cmake
  PERMISSIONS OWNER_READ OWNER_WRITE GROUP_READ WORLD_READ
  )

# unit-tests
option(TESTS "Enable unit-tests" OFF)
if(TESTS)
  ExternalProject_Add(
    googletest
    SOURCE_DIR ${PROJECT_SOURCE_DIR}/ext/googletest
    CMAKE_ARGS -DBUILD_GMOCK=ON -DBUILD_GTEST=ON -DCMAKE_INSTALL_PREFIX=${CMAKE_BINARY_DIR}/googletest -DCMAKE_INSTALL_LIBDIR=${CMAKE_BINARY_DIR}/googletest/lib
    )
  
  include(CTest)
  enable_testing()
  
  # add test dir
  add_subdirectory(test)
endif()

