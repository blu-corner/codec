include_directories(
  ${PROJECT_SOURCE_DIR}/src/millennium/
  ${PROJECT_SOURCE_DIR}/src/millennium/borsa/packets/
  )

add_library(borsacodec SHARED
  borsaitalianaCodec.cpp
    )

set(BORSA_CODEC_HEADERS
    borsaitalianaCodec.h
  )

target_link_libraries (borsacodec cdr codechelpers fields)

install(FILES ${BORSA_CODEC_HEADERS}
  DESTINATION include/codec/millennium/borsa
    )

install(TARGETS borsacodec EXPORT borsacodec
  LIBRARY DESTINATION lib)

add_subdirectory(packets)
