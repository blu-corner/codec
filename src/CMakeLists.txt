#
# Copyright 2014-2018 Neueda Ltd.
#
install(FILES codec.h codecFactory.h
  DESTINATION include/codec
  )

add_library(codec SHARED
  codecFactory.cpp
  )

target_link_libraries (codec utils cdr)
add_dependencies (codec CDR_PROJECT UTILS_PROJECT)

install(TARGETS codec EXPORT codec
    RUNTIME DESTINATION lib
    ARCHIVE DESTINATION lib
    LIBRARY DESTINATION lib)


add_subdirectory(helpers)
add_subdirectory(fields)
if(NOT WIN32)
    add_subdirectory(tools)
endif()

add_subdirectory(millennium)
add_subdirectory(swx)
add_subdirectory(xetra)
add_subdirectory(optiq)
add_subdirectory(fix)

add_subdirectory(bindings)
