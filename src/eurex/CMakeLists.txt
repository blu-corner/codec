#
# Copyright 2014-2018 Neueda Ltd.
#
include_directories(
  ${PROJECT_SOURCE_DIR}/src/eurex/
  ${PROJECT_SOURCE_DIR}/src/eurex/packets/
  )

add_library(eurexcodec SHARED
  eurexCodec.cpp
    )

set(EUREX_CODEC_HEADERS
  eurexCodec.h
  eurexPacketUtils.h
  )

target_link_libraries (eurexcodec cdr codechelpers fields)

install(FILES ${EUREX_CODEC_HEADERS}
  DESTINATION include/codec/eurex
    )

install(TARGETS eurexcodec EXPORT eurexcodec
    RUNTIME DESTINATION lib
    ARCHIVE DESTINATION lib
    LIBRARY DESTINATION lib)

add_subdirectory(packets)
