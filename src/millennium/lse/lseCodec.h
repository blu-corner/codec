/*
 * Copyright 2014-2018 Neueda
 */
#ifndef LSE_CODEC_H
#define LSE_CODEC_H
#include <stdint.h>
#include "cdr.h"
#include "codec.h"
#include "codecHelpers.h"
#include "LsePackets.h"
#include "fields.h"
#include "MillenniumPacketUtils.h"

namespace neueda
{

class lseCodec: public codec
{
    public:
        lseCodec()
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
            mMsgTypes.insert(std::make_pair("F", "Order Cancel Request"));
            mMsgTypes.insert(std::make_pair("q", "Order Mass Cancel Request"));
            mMsgTypes.insert(std::make_pair("G", "Order Cancel Replace Request"));
            mMsgTypes.insert(std::make_pair("C", "New Order Cross"));
            mMsgTypes.insert(std::make_pair("H", "Cross Order Cancel Request"));
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
        std::string getType () const { return "lse"; }

    private:
        codecState getLogon (cdr& d, LseHeader* hdr);
        codecState getLogonReply (cdr& d, LseHeader* hdr);
        codecState getLogout (cdr& d, LseHeader* hdr);
        codecState getHeartbeat (cdr& d, LseHeader* hdr);
        codecState getMissedMessageRequest (cdr& d, LseHeader* hdr);
        codecState getMissedMessageRequestAck (cdr& d, LseHeader* hdr);
        codecState getMissedMessageReport (cdr& d, LseHeader* hdr);
        codecState getReject (cdr& d, LseHeader* hdr);
        codecState getSystemStatus (cdr& d, LseHeader* hdr);
        codecState getNewOrder (cdr& d, LseHeader* hdr);
        codecState getOrderCancelRequest (cdr& d, LseHeader* hdr);
        codecState getOrderMassCancelRequest (cdr& d, LseHeader* hdr);
        codecState getOrderCancelReplaceRequest (cdr& d, LseHeader* hdr);
        codecState getNewOrderCross (cdr& d, LseHeader* hdr);
        codecState getCrossOrderCancelRequest (cdr& d, LseHeader* hdr);
        codecState getExecutionReport (cdr& d, LseHeader* hdr);
        codecState getOrderCancelReject (cdr& d, LseHeader* hdr);
        codecState getOrderMassCancelReport (cdr& d, LseHeader* hdr);
        codecState getBusinessReject (cdr& d, LseHeader* hdr);

        codecState putLogon (const cdr& d, LseHeader* hdr,
                                    size_t len, size_t& used);
        codecState putLogonReply (const cdr& d, LseHeader* hdr,
                                    size_t len, size_t& used);
        codecState putLogout (const cdr& d, LseHeader* hdr,
                                    size_t len, size_t& used);
        codecState putHeartbeat (const cdr& d, LseHeader* hdr,
                                    size_t len, size_t& used);
        codecState putMissedMessageRequest (const cdr& d, LseHeader* hdr,
                                    size_t len, size_t& used);
        codecState putMissedMessageRequestAck (const cdr& d, LseHeader* hdr,
                                    size_t len, size_t& used);
        codecState putMissedMessageReport (const cdr& d, LseHeader* hdr,
                                    size_t len, size_t& used);
        codecState putReject (const cdr& d, LseHeader* hdr,
                                    size_t len, size_t& used);
        codecState putSystemStatus (const cdr& d, LseHeader* hdr,
                                    size_t len, size_t& used);
        codecState putNewOrder (const cdr& d, LseHeader* hdr,
                                    size_t len, size_t& used);
        codecState putOrderCancelRequest (const cdr& d, LseHeader* hdr,
                                    size_t len, size_t& used);
        codecState putOrderMassCancelRequest (const cdr& d, LseHeader* hdr,
                                    size_t len, size_t& used);
        codecState putOrderCancelReplaceRequest (const cdr& d, LseHeader* hdr,
                                    size_t len, size_t& used);
        codecState putNewOrderCross (const cdr& d, LseHeader* hdr,
                                    size_t len, size_t& used);
        codecState putCrossOrderCancelRequest (const cdr& d, LseHeader* hdr,
                                    size_t len, size_t& used);
        codecState putExecutionReport (const cdr& d, LseHeader* hdr,
                                    size_t len, size_t& used);
        codecState putOrderCancelReject (const cdr& d, LseHeader* hdr,
                                    size_t len, size_t& used);
        codecState putOrderMassCancelReport (const cdr& d, LseHeader* hdr,
                                    size_t len, size_t& used);
        codecState putBusinessReject (const cdr& d, LseHeader* hdr,
                                    size_t len, size_t& used);
};

} // namespace neueda

#endif /* LSE_CODEC_H */
