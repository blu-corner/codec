#
# Copyright 2014-2018 Neueda Ltd.
#
add_executable(checkcodec checkcodec.cpp)
target_link_libraries (
  checkcodec
  codec
  cdr
  fields
  ${CMAKE_DL_LIBS}
  )
install(TARGETS checkcodec RUNTIME DESTINATION bin)

add_executable(fileReader fileReader.cpp)
target_link_libraries (
  fileReader
  codec
  properties
  logger
  cdr
  fields
  ${CMAKE_DL_LIBS}
  )
add_dependencies(fileReader PROPERTIES_PROJECT LOGGER_PROJECT)
install(TARGETS fileReader RUNTIME DESTINATION bin)
