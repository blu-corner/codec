#
# Copyright 2014-2018 Neueda Ltd.
#
set(FIELDS_HEADERS
  fields.h
    )

install(FILES ${FIELDS_HEADERS}
  DESTINATION include/codec/fields
    )

add_library(fields SHARED
  fields.cc
  )

install(TARGETS fields EXPORT fields
    RUNTIME DESTINATION lib
    ARCHIVE DESTINATION lib
    LIBRARY DESTINATION lib)

