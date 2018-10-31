set(TEST_LIBS codec
              lsecodec
              xetracodec
              oslocodec
              codechelpers
              gtest
              gmock)

if(NOT WIN32)
    set(TEST_LIBS ${TEST_LIBS} pthread)
endif()

include_directories(
  ${PROJECT_SOURCE_DIR}/src
  ${PROJECT_SOURCE_DIR}/src/helpers
  ${PROJECT_SOURCE_DIR}/src/fields
  ${PROJECT_SOURCE_DIR}/test
  #millenium
  ${PROJECT_SOURCE_DIR}/src/millennium
  ${PROJECT_SOURCE_DIR}/src/millennium/lse
  ${PROJECT_SOURCE_DIR}/src/millennium/lse/packets
  ${PROJECT_SOURCE_DIR}/src/millennium/oslo
  ${PROJECT_SOURCE_DIR}/src/millennium/oslo/packets
  #swx
  ${PROJECT_SOURCE_DIR}/src/swx
  ${PROJECT_SOURCE_DIR}/src/swx/packets
  #xetra
  ${PROJECT_SOURCE_DIR}/src/xetra
  ${PROJECT_SOURCE_DIR}/src/xetra/packets
  #googletest
  ${CMAKE_BINARY_DIR}/googletest/include
  ${CMAKE_INSTALL_PREFIX}/include
  ${CMAKE_INSTALL_PREFIX}/include/cdr
  )

link_directories(
    ${CMAKE_BINARY_DIR}/googletest/lib
    ${CMAKE_INSTALL_PREFIX}/lib
    )

file(GLOB_RECURSE SRC_FILES
  ${PROJECT_SOURCE_DIR}/test/millennium/*.cpp
  ${PROJECT_SOURCE_DIR}/test/swx/*.cpp
  ${PROJECT_SOURCE_DIR}/test/xetra/*.cpp
  )

add_executable(unittest main.cpp ${SRC_FILES})

target_link_libraries(unittest ${TEST_LIBS})

add_test(NAME unittest
  COMMAND unittest
)

install(TARGETS unittest
    RUNTIME DESTINATION bin)
