#
# Copyright 2014-2018 Neueda Ltd.
#
# Include python
find_package(PythonInterp REQUIRED)
find_package(PythonLibs REQUIRED)
include_directories(${PYTHON_INCLUDE_PATH})

# set the flags for swig
set(CMAKE_SWIG_FLAGS -module codec -threads)
set_source_files_properties(../codec.py.i PROPERTIES CPLUSPLUS ON)

# Add swig module
swig_add_module(PyCodec python ../codec.py.i)
swig_link_libraries(PyCodec
  codec fields
  lsecodec oslocodec turquoisecodec jsecodec borsacodec
  swxcodec
  ${PYTHON_LIBRARIES})
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

