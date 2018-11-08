#
# Copyright 2014-2018 Neueda Ltd.
#
# find_path(PCAP_ROOT_DIR
#     NAMES include/pcap.h
# )
#
# find_path(PCAP_INCLUDE_DIR
#     NAMES pcap.h
#     HINTS ${PCAP_ROOT_DIR}/include
# )
#
# find_library(PCAP_LIBRARY
#     NAMES pcap
#     HINTS ${PCAP_ROOT_DIR}/lib
# )
#
# include(FindPackageHandleStandardArgs)
# find_package_handle_standard_args(PCAP DEFAULT_MSG
#     PCAP_LIBRARY
#     PCAP_INCLUDE_DIR
# )
#
# include_directories(
#   ${PROJECT_SOURCE_DIR}/src
#   ${PROJECT_SOURCE_DIR}/src/helpers
#   ${PROJECT_SOURCE_DIR}/src/fields
#   ${PROJECT_SOURCE_DIR}/examples
#   )
#
# link_directories(
#   ${CMAKE_INSTALL_PREFIX}/lib
#   ${PCAP_LIBRARY}
#   )
#
# add_executable(print-orders print-orders.cpp)
# target_link_libraries(print-orders codec properties logger)
#
# add_executable(pcap-reader pcap-reader.cpp)
# target_link_libraries(pcap-reader codec properties logger pcap)
#
# install(TARGETS print-orders pcap-reader
#     RUNTIME DESTINATION bin)

if(JAVA)
    INSTALL(DIRECTORY ${CMAKE_CURRENT_SOURCE_DIR}/java/
            DESTINATION examples/codec/java/)
endif()
if(PYTHON)
    INSTALL(DIRECTORY ${CMAKE_CURRENT_SOURCE_DIR}/python/
            DESTINATION examples/codec/python/)
endif()
if(CSHARP)
    INSTALL(DIRECTORY ${CMAKE_CURRENT_SOURCE_DIR}/csharp/
            DESTINATION examples/codec/csharp/)
endif()

INSTALL(DIRECTORY ${CMAKE_CURRENT_SOURCE_DIR}/cpp/
        DESTINATION examples/codec/cpp/)
