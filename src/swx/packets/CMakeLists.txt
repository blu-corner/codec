#
# Copyright 2014-2018 Neueda Ltd.
#
set(SWX_HEADERS
swxAcceptedMessagePacket.h
swxBrokenTradeMessagePacket.h
swxCancelOrderMessagePacket.h
swxCancelledMessagePacket.h
swxClientHeartbeatMessagePacket.h
swxEndofSessionMessagePacket.h
swxEnterOrderMessagePacket.h
swxExecutedOrderMessagePacket.h
swxHeaderPacket.h
swxLoginAcceptedMessagePacket.h
swxLoginRejectedMessagePacket.h
swxLoginRequestMessagePacket.h
swxLogoutRequestMessagePacket.h
swxOrderPriorityUpdateChangeMessagePacket.h
swxPacketUtils.h
swxPackets.h
swxRejectedOrderMessagePacket.h
swxReplaceOrderMessagePacket.h
swxReplacedMessagePacket.h
swxServerHeartbeatMessagePacket.h
swxSystemEventMessagePacket.h
swxDebugMessagePacket.h
)


install(FILES ${SWX_HEADERS}
    DESTINATION include/codec/swx/packets
    )

