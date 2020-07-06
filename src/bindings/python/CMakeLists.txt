#
# Copyright 2014-2018 Neueda Ltd.
#
# Include python
# find_package(PythonInterp REQUIRED)
# find_package(PythonLibs REQUIRED)
# include_directories(${PYTHON_INCLUDE_PATH})

# set the flags for swig
set(CMAKE_SWIG_FLAGS -module codec -threads)
set_source_files_properties(../codec.py.i PROPERTIES CPLUSPLUS ON)

execute_process(
    COMMAND bash -c "${PYTHON_CONFIG} --includes"
    OUTPUT_VARIABLE PYTHON_INCLUDE_PATH
    RESULT_VARIABLE RET
    )
if(NOT ${RET} EQUAL "0")
    message(FATAL_ERROR "failed to run python-config --includes")
endif()

execute_process(
    COMMAND bash -c "${PYTHON_CONFIG} --ldflags"
    OUTPUT_VARIABLE PYTHON_LDFLAGS
    RESULT_VARIABLE RET
    )
if(NOT ${RET} EQUAL "0")
    message(FATAL_ERROR "failed to run python-config --ldflags")
endif()

execute_process(
    COMMAND bash -c "${PYTHON_CONFIG} --libs"
    OUTPUT_VARIABLE PYTHON_LIBS
    RESULT_VARIABLE RET
    )
if(NOT ${RET} EQUAL "0")
    message(FATAL_ERROR "failed to run python-config --libs")
endif()

string(STRIP ${PYTHON_LDFLAGS} PYTHON_LDFLAGS)
string(STRIP ${PYTHON_INCLUDE_PATH} PYTHON_INCLUDE_PATH)
string(STRIP ${PYTHON_LIBS} PYTHON_LIBS)

message(STATUS "Python includes: ${PYTHON_INCLUDE_PATH}")
message(STATUS "Python ldflags: ${PYTHON_LDFLAGS}")
message(STATUS "Python libs: ${PYTHON_LIBS}")

set(CMAKE_CXX_FLAGS "${CMAKE_CXX_FLAGS} ${PYTHON_INCLUDE_PATH}")
link_libraries(${PYTHON_LDFLAGS})

# Add swig module
swig_add_module(PyCodec python ../codec.py.i)
swig_link_libraries(PyCodec
  codec fields
  lsecodec oslocodec turquoisecodec jsecodec borsacodec
  swxcodec
  ${PYTHON_LIBS})
set_target_properties(_PyCodec PROPERTIES OUTPUT_NAME "_codec")

# Files to install with Python
set(PYTHON_INSTALL_FILES
  # ${CMAKE_CURRENT_SOURCE_DIR}/example.py
  ${CMAKE_CURRENT_BINARY_DIR}/codec.py)

# Declare install target for pytho
install(TARGETS _PyCodec
  DESTINATION lib/python)
install(FILES ${PYTHON_INSTALL_FILES}
  DESTINATION lib/python)