#
# Copyright 2014-2018 Neueda Ltd.
#
include_directories(
  ${PROJECT_SOURCE_DIR}/src/eti/
  ${PROJECT_SOURCE_DIR}/src/eti/xetra/packets/
  )

add_library(xetracodec SHARED
  xetraCodec.cpp
    )

set(XETRA_CODEC_HEADERS
  xetraCodec.h
  )

target_link_libraries (xetracodec cdr codechelpers fields)

install(FILES ${XETRA_CODEC_HEADERS}
  DESTINATION include/codec/eti/xetra
    )

install(TARGETS xetracodec EXPORT xetracodec
    RUNTIME DESTINATION lib
    ARCHIVE DESTINATION lib
    LIBRARY DESTINATION lib)

add_subdirectory(packets)
