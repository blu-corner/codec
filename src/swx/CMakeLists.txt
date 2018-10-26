#
# Copyright 2014-2018 Neueda Ltd.
#
include_directories(
  ${PROJECT_SOURCE_DIR}/src/swx/packets/
  )

add_library(swxcodec SHARED
  swxCodec.cpp
    )

set(SWX_CODEC_HEADERS
  swxCodec.h
  swxCodecConstants.h
  )

target_link_libraries (swxcodec cdr codechelpers fields)

install(FILES ${SWX_CODEC_HEADERS}
  DESTINATION include/codec/swx
    )

install(TARGETS swxcodec EXPORT swxcodec
    RUNTIME DESTINATION lib
    ARCHIVE DESTINATION lib
    LIBRARY DESTINATION lib)

add_subdirectory(packets)
