#
# Copyright 2014-2018 Neueda Ltd.
#

find_package(LibXml2 REQUIRED)

include_directories(
    ${LIBXML2_INCLUDE_DIR}
  )

add_library(fixcodec SHARED
  fixCodec.cpp
    )

set(FIX_CODEC_HEADERS
    fixCodec.h
    fixGroup.h
    fixField.h
  )

target_link_libraries (fixcodec cdr codechelpers fields xml2)

install(FILES ${FIX_CODEC_HEADERS}
  DESTINATION include/codec/fix
    )

install(TARGETS fixcodec EXPORT fixcodec
  LIBRARY DESTINATION lib)
