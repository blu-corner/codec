#
# Copyright 2014-2018 Neueda Ltd.
#
file (GLOB XETRA_HEADERS "*.h")

include_directories(
  ${PROJECT_SOURCE_DIR}/src/xetra/
  ${PROJECT_SOURCE_DIR}/src/xetra/packets/
  )

install(FILES ${XETRA_HEADERS}
    DESTINATION include/codec/xetra/packets
    )
