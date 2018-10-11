file (GLOB BORSA_HEADERS "*.h")

install(FILES ${BORSA_HEADERS}
    DESTINATION include/codec/millennium/borsa/packets
    )
