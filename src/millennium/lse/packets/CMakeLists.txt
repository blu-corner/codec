#
# Copyright 2014-2018 Neueda Ltd.
#
file (GLOB LSE_HEADERS "*.h")

install(FILES ${LSE_HEADERS}
    DESTINATION include/codec/millennium/lse/packets
    )
