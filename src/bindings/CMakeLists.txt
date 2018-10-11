#
# Copyright 2014-2018 Neueda Ltd.
#
include_directories(
  ${PROJECT_SOURCE_DIR}/src
  ${PROJECT_SOURCE_DIR}/src/helpers
  ${PROJECT_SOURCE_DIR}/src/fields
  ${PROJECT_SOURCE_DIR}/src/fix
  ${PROJECT_SOURCE_DIR}/src/millennium/
  ${PROJECT_SOURCE_DIR}/src/millennium/lse
  ${PROJECT_SOURCE_DIR}/src/millennium/lse/packets
  ${PROJECT_SOURCE_DIR}/src/millennium/oslo
  ${PROJECT_SOURCE_DIR}/src/millennium/oslo/packets
  ${PROJECT_SOURCE_DIR}/src/millennium/turquoise
  ${PROJECT_SOURCE_DIR}/src/millennium/turquoise/packets
  ${PROJECT_SOURCE_DIR}/src/millennium/jse
  ${PROJECT_SOURCE_DIR}/src/millennium/jse/packets
  ${PROJECT_SOURCE_DIR}/src/millennium/borsa
  ${PROJECT_SOURCE_DIR}/src/millennium/borsa/packets
  ${PROJECT_SOURCE_DIR}/src/swx
  ${PROJECT_SOURCE_DIR}/src/swx/packets
  ${PROJECT_SOURCE_DIR}/src/optic
  ${PROJECT_SOURCE_DIR}/src/optic/packets
  ${PROJECT_SOURCE_DIR}/src/bindings
  ${CMAKE_INSTALL_PREFIX}/include/
  ${CMAKE_INSTALL_PREFIX}/include/cdr
  )

if(PYTHON OR JAVA OR CSHARP)
  find_package(SWIG REQUIRED)
  include(${SWIG_USE_FILE})
endif()

if(PYTHON)
  add_subdirectory(python)
endif()

if(JAVA)
  add_subdirectory(java)
endif()

if(CSHARP)
  add_subdirectory(csharp)
endif()
