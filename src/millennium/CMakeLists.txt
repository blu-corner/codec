#
# Copyright 2014-2018 Neueda Ltd.
#
install(FILES
  ${PROJECT_SOURCE_DIR}/src/millennium/MillenniumPacketUtils.h
  DESTINATION include/codec/millennium
    )
add_subdirectory(lse)
add_subdirectory(jse)
add_subdirectory(oslo)
add_subdirectory(turquoise)
add_subdirectory(borsa)
