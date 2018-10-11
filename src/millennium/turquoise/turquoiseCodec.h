/*
 * Copyright 2014-2018 Neueda
 */
#ifndef TURQUOISE_CODEC_H
#define TURQUOISE_CODEC_H
#include <stdint.h>
#include "cdr.h"
#include "codec.h"
#include "codecHelpers.h"
#include "TurquoisePackets.h"
#include "fields.h"
#include "MillenniumPacketUtils.h"

namespace neueda
{

class turquoiseCodec: public codec
{
    public:
        turquoiseCodec()
        {
            mMsgTypes.insert(std::make_pair("A", "Logon"));
            mMsgTypes.insert(std::make_pair("B", "Logon Reply"));
            mMsgTypes.insert(std::make_pair("5", "Logout"));
            mMsgTypes.insert(std::make_pair("0", "Heartbeat"));
            mMsgTypes.insert(std::make_pair("M", "Missed Message Request"));
            mMsgTypes.insert(std::make_pair("N", "Missed Message Request Ack"));
            mMsgTypes.insert(std::make_pair("P", "Missed Message Report"));
            mMsgTypes.insert(std::make_pair("3", "Reject"));
            mMsgTypes.insert(std::make_pair("n", "System Status"));
            mMsgTypes.insert(std::make_pair("D", "New Order"));
            mMsgTypes.insert(std::make_pair("G", "Order Cancel Replace Request"));
            mMsgTypes.insert(std::make_pair("F", "Order Cancel Request"));
            mMsgTypes.insert(std::make_pair("q", "Order Mass Cancel Request"));
            mMsgTypes.insert(std::make_pair("8", "Execution Report"));
            mMsgTypes.insert(std::make_pair("9", "Order Cancel Reject"));
            mMsgTypes.insert(std::make_pair("r", "Order Mass Cancel Report"));
            mMsgTypes.insert(std::make_pair("j", "Business Reject"));
        }

        codecState decode (cdr& d,
                             const void* buf,
                             size_t len,
                             size_t& used);
        codecState encode (const cdr& d,
                             void* buf,
                             size_t len,
                             size_t& used);
        std::string getType () const { return "turquoise"; }

    private:
        codecState getLogon (cdr& d, TurquoiseHeader* hdr);
        codecState getLogonReply (cdr& d, TurquoiseHeader* hdr);
        codecState getLogout (cdr& d, TurquoiseHeader* hdr);
        codecState getHeartbeat (cdr& d, TurquoiseHeader* hdr);
        codecState getMissedMessageRequest (cdr& d, TurquoiseHeader* hdr);
        codecState getMissedMessageRequestAck (cdr& d, TurquoiseHeader* hdr);
        codecState getMissedMessageReport (cdr& d, TurquoiseHeader* hdr);
        codecState getReject (cdr& d, TurquoiseHeader* hdr);
        codecState getSystemStatus (cdr& d, TurquoiseHeader* hdr);
        codecState getNewOrder (cdr& d, TurquoiseHeader* hdr);
        codecState getOrderCancelReplaceRequest (cdr& d, TurquoiseHeader* hdr);
        codecState getOrderCancelRequest (cdr& d, TurquoiseHeader* hdr);
        codecState getOrderMassCancelRequest (cdr& d, TurquoiseHeader* hdr);
        codecState getExecutionReport (cdr& d, TurquoiseHeader* hdr);
        codecState getOrderCancelReject (cdr& d, TurquoiseHeader* hdr);
        codecState getOrderMassCancelReport (cdr& d, TurquoiseHeader* hdr);
        codecState getBusinessReject (cdr& d, TurquoiseHeader* hdr);

        codecState putLogon (const cdr& d, TurquoiseHeader* hdr,
                                    size_t len, size_t& used);
        codecState putLogonReply (const cdr& d, TurquoiseHeader* hdr,
                                    size_t len, size_t& used);
        codecState putLogout (const cdr& d, TurquoiseHeader* hdr,
                                    size_t len, size_t& used);
        codecState putHeartbeat (const cdr& d, TurquoiseHeader* hdr,
                                    size_t len, size_t& used);
        codecState putMissedMessageRequest (const cdr& d, TurquoiseHeader* hdr,
                                    size_t len, size_t& used);
        codecState putMissedMessageRequestAck (const cdr& d, TurquoiseHeader* hdr,
                                    size_t len, size_t& used);
        codecState putMissedMessageReport (const cdr& d, TurquoiseHeader* hdr,
                                    size_t len, size_t& used);
        codecState putReject (const cdr& d, TurquoiseHeader* hdr,
                                    size_t len, size_t& used);
        codecState putSystemStatus (const cdr& d, TurquoiseHeader* hdr,
                                    size_t len, size_t& used);
        codecState putNewOrder (const cdr& d, TurquoiseHeader* hdr,
                                    size_t len, size_t& used);
        codecState putOrderCancelReplaceRequest (const cdr& d, TurquoiseHeader* hdr,
                                    size_t len, size_t& used);
        codecState putOrderCancelRequest (const cdr& d, TurquoiseHeader* hdr,
                                    size_t len, size_t& used);
        codecState putOrderMassCancelRequest (const cdr& d, TurquoiseHeader* hdr,
                                    size_t len, size_t& used);
        codecState putExecutionReport (const cdr& d, TurquoiseHeader* hdr,
                                    size_t len, size_t& used);
        codecState putOrderCancelReject (const cdr& d, TurquoiseHeader* hdr,
                                    size_t len, size_t& used);
        codecState putOrderMassCancelReport (const cdr& d, TurquoiseHeader* hdr,
                                    size_t len, size_t& used);
        codecState putBusinessReject (const cdr& d, TurquoiseHeader* hdr,
                                    size_t len, size_t& used);
};

} // namespace neueda

#endif /* TURQUOISE_CODEC_H */
