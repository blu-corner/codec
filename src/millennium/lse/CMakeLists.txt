#
# Copyright 2014-2018 Neueda Ltd.
#
include_directories(
  ${PROJECT_SOURCE_DIR}/src/millennium/
  ${PROJECT_SOURCE_DIR}/src/millennium/lse/packets/
  )

add_library(lsecodec SHARED
  lseCodec.cpp
    )

set(LSE_CODEC_HEADERS
    lseCodec.h
  )

target_link_libraries (lsecodec cdr codechelpers fields)

install(FILES ${LSE_CODEC_HEADERS}
  DESTINATION include/codec/millennium/lse
    )

install(TARGETS lsecodec EXPORT lsecodec
  LIBRARY DESTINATION lib)

add_subdirectory(packets)
