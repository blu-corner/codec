# include_directories(
#   ${PROJECT_SOURCE_DIR}/include
#   ${PROJECT_BINARY_DIR}/src
#   )

install(FILES logger.h
  DESTINATION include
    )

add_library(logger SHARED
  logger.cpp
  )

install(TARGETS logger EXPORT logger
  LIBRARY DESTINATION lib)
