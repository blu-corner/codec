include_directories(
  ${PROJECT_SOURCE_DIR}/src/millennium/
  ${PROJECT_SOURCE_DIR}/src/millennium/turquoise/packets/
  )

add_library(turquoisecodec SHARED
  turquoiseCodec.cpp
    )

set(TURQ_CODEC_HEADERS
    turquoiseCodec.h
  )

target_link_libraries (turquoisecodec cdr codechelpers fields)

install(FILES ${TURQ_CODEC_HEADERS}
  DESTINATION include/codec/millennium/turquoise
    )

install(TARGETS turquoisecodec EXPORT turquoisecodec
  LIBRARY DESTINATION lib)

add_subdirectory(packets)
