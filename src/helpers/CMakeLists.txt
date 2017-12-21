include_directories(${CMAKE_INSTALL_PREFIX}/include)
link_directories(${CMAKE_INSTALL_PREFIX}/lib)

add_library(gwcodechelpers SHARED
  gwCodecHelpers.cpp
  )

target_link_libraries(gwcodechelpers cdr)

install(TARGETS gwcodechelpers EXPORT gwcodechelpers
  LIBRARY DESTINATION lib)

