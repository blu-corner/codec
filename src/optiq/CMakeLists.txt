include_directories(
  ${PROJECT_SOURCE_DIR}/src/optiq/
  ${PROJECT_SOURCE_DIR}/src/optiq/packets/
  )

set(OPTIQ_CODEC_HEADERS
  optiqCodec.h
  optiqConstants.h
  )

add_library(optiqcodec SHARED
  ${OPTIQ_CODEC_HEADERS}
  optiqCodec.cpp
  )

target_link_libraries (optiqcodec cdr codechelpers fields)

install(FILES ${OPTIQ_CODEC_HEADERS}
  DESTINATION include/codec/optiq
  )

install(TARGETS optiqcodec EXPORT optiqcodec
  LIBRARY DESTINATION lib)

add_subdirectory(packets)
