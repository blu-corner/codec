#
# Copyright 2014-2018 Neueda Ltd.
#
file (GLOB OSLO_HEADERS "*.h")

install(FILES ${OSLO_HEADERS}
    DESTINATION include/codec/millennium/oslo/packets
    )
