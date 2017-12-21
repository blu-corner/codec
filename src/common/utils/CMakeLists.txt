set (INSTALL_HEADERS
  "${CMAKE_CURRENT_SOURCE_DIR}/common.h"
  "${CMAKE_CURRENT_SOURCE_DIR}/compat.h"
  "${CMAKE_CURRENT_SOURCE_DIR}/dl.h"
  "${CMAKE_CURRENT_SOURCE_DIR}/guid.h"
  "${CMAKE_CURRENT_SOURCE_DIR}/utils.h"
  "${CMAKE_CURRENT_SOURCE_DIR}/scopeLock.h"
  )

set (SOURCES
  "${CMAKE_CURRENT_SOURCE_DIR}/cond.cpp"
  "${CMAKE_CURRENT_SOURCE_DIR}/compatLinux.cpp"
  "${CMAKE_CURRENT_SOURCE_DIR}/dl.cpp"
  "${CMAKE_CURRENT_SOURCE_DIR}/guid.cpp"
  "${CMAKE_CURRENT_SOURCE_DIR}/utils.cpp"
  )

add_library (utils SHARED ${SOURCES})
add_dependencies (utils gestalt inscribe sbf)
target_link_libraries (utils
  ${CMAKE_DL_LIBS}
  ${GESTALT_LIB}
  ${INSCRIBE_LIB})

install (TARGETS utils
         LIBRARY DESTINATION lib)
install (FILES ${INSTALL_HEADERS} DESTINATION include)
