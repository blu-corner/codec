#
# Copyright 2014-2018 Neueda Ltd.
#
file (GLOB EUREX_HEADERS "*.h")

include_directories(
  ${PROJECT_SOURCE_DIR}/src/eurex/
  ${PROJECT_SOURCE_DIR}/src/eurex/packets/
  )

install(FILES ${EUREX_HEADERS}
    DESTINATION include/codec/eurex/packets
    )
