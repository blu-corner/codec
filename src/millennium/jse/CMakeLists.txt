include_directories(
  ${PROJECT_SOURCE_DIR}/src/millennium/
  ${PROJECT_SOURCE_DIR}/src/millennium/jse/packets/
  )

add_library(jsecodec SHARED
  jseCodec.cpp
    )

set(JSE_CODEC_HEADERS
    jseCodec.h
  )

target_link_libraries (jsecodec cdr codechelpers fields)

install(FILES ${JSE_CODEC_HEADERS}
  DESTINATION include/codec/millennium/jse
    )

install(TARGETS jsecodec EXPORT jsecodec
  LIBRARY DESTINATION lib)

add_subdirectory(packets)
