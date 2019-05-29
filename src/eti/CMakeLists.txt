#
# Copyright 2014-2018 Neueda Ltd.
#
install(FILES
  ${PROJECT_SOURCE_DIR}/src/eti/EtiPacketUtils.h
  DESTINATION include/codec/eti
)
add_subdirectory(xetra)
add_subdirectory(eurex)
