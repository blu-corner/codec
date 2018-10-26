#
# Copyright 2014-2018 Neueda Ltd.
#
include_directories(
  ${PROJECT_SOURCE_DIR}/src/millennium/
  ${PROJECT_SOURCE_DIR}/src/millennium/oslo/packets/
  )

add_library(oslocodec SHARED
  osloCodec.cpp
    )

set(LSE_CODEC_HEADERS
    osloCodec.h
  )

target_link_libraries (oslocodec cdr codechelpers fields)

install(FILES ${LSE_CODEC_HEADERS}
  DESTINATION include/codec/millennium/oslo
    )

install(TARGETS oslocodec EXPORT oslocodec
    RUNTIME DESTINATION lib
    ARCHIVE DESTINATION lib
    LIBRARY DESTINATION lib)

add_subdirectory(packets)
