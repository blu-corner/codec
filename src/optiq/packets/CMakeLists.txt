#
# Copyright 2014-2018 Neueda Ltd.
#
file(GLOB OPTIQ_HEADERS *.h)

install(FILES ${OPTIQ_HEADERS}
    DESTINATION include/codec/optiq/packets
    )
