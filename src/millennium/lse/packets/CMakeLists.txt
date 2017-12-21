set(LSE_HEADERS
LseBusinessRejectPacket.h
LseCrossOrderCancelRequestPacket.h
LseExecutionReportPacket.h
LseHeartbeatPacket.h
LseLogonPacket.h
LseLogonReplyPacket.h
LseLogoutPacket.h
LseMissedMessageReportPacket.h
LseMissedMessageRequestAckPacket.h
LseMissedMessageRequestPacket.h
LseNewOrderCrossPacket.h
LseNewOrderPacket.h
LseOrderCancelRejectPacket.h
LseOrderCancelReplaceRequestPacket.h
LseOrderCancelRequestPacket.h
LseOrderMassCancelReportPacket.h
LseOrderMassCancelRequestPacket.h
LsePackets.h
LsePacketUtils.h
LseRejectPacket.h
LseSystemStatusPacket.h
    )

install(FILES ${LSE_HEADERS}
    DESTINATION include/lse/packets
    )
