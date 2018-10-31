#
# Copyright 2014-2018 Neueda Ltd.
#
include_directories(
    ${CMAKE_INSTALL_PREFIX}/include/cdr
    )
link_directories(
    ${CMAKE_INSTALL_PREFIX}/lib
    )

add_library(codechelpers SHARED
  codecHelpers.cpp
  )

target_link_libraries(codechelpers cdr logger sbfcommon sbfcore Ws2_32.lib)
add_dependencies(codechelpers CDR_PROJECT LOGGER_PROJECT)

install(FILES codecHelpers.h
  DESTINATION include/codec
    )

install(TARGETS codechelpers EXPORT codechelpers
    RUNTIME DESTINATION lib
    ARCHIVE DESTINATION lib
    LIBRARY DESTINATION lib)

