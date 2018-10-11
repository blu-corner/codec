/*
 * Copyright 2014-2018 Neueda
 */
#ifndef OSLO_CODEC_H
#define OSLO_CODEC_H
#include <stdint.h>
#include "cdr.h"
#include "codec.h"
#include "codecHelpers.h"
#include "OsloPackets.h"
#include "fields.h"
#include "MillenniumPacketUtils.h"

namespace neueda
{

class osloCodec: public codec
{
    public:
        osloCodec()
        {
            mMsgTypes.insert(std::make_pair("A", "Logon"));
            mMsgTypes.insert(std::make_pair("B", "Logon Response"));
            mMsgTypes.insert(std::make_pair("5", "Logout"));
            mMsgTypes.insert(std::make_pair("0", "Heartbeat"));
            mMsgTypes.insert(std::make_pair("3", "Reject"));
            mMsgTypes.insert(std::make_pair("M", "Missed Message Request"));
            mMsgTypes.insert(std::make_pair("N", "Missed Message Request Ack"));
            mMsgTypes.insert(std::make_pair("P", "Transmission Complete"));
            mMsgTypes.insert(std::make_pair("n", "System Status"));
            mMsgTypes.insert(std::make_pair("D", "New Order"));
            mMsgTypes.insert(std::make_pair("F", "Cancel Request"));
            mMsgTypes.insert(std::make_pair("q", "Mass Cancel Request"));
            mMsgTypes.insert(std::make_pair("G", "Order Modification Request"));
            mMsgTypes.insert(std::make_pair("8", "Execution Report"));
            mMsgTypes.insert(std::make_pair("9", "Cancel Reject"));
            mMsgTypes.insert(std::make_pair("r", "Mass Cancel Report"));
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
        std::string getType () const { return "oslo"; }

    private:
        codecState getLogon (cdr& d, OsloHeader* hdr);
        codecState getLogonResponse (cdr& d, OsloHeader* hdr);
        codecState getLogout (cdr& d, OsloHeader* hdr);
        codecState getHeartbeat (cdr& d, OsloHeader* hdr);
        codecState getReject (cdr& d, OsloHeader* hdr);
        codecState getMissedMessageRequest (cdr& d, OsloHeader* hdr);
        codecState getMissedMessageRequestAck (cdr& d, OsloHeader* hdr);
        codecState getTransmissionComplete (cdr& d, OsloHeader* hdr);
        codecState getSystemStatus (cdr& d, OsloHeader* hdr);
        codecState getNewOrder (cdr& d, OsloHeader* hdr);
        codecState getCancelRequest (cdr& d, OsloHeader* hdr);
        codecState getMassCancelRequest (cdr& d, OsloHeader* hdr);
        codecState getOrderModificationRequest (cdr& d, OsloHeader* hdr);
        codecState getExecutionReport (cdr& d, OsloHeader* hdr);
        codecState getCancelReject (cdr& d, OsloHeader* hdr);
        codecState getMassCancelReport (cdr& d, OsloHeader* hdr);
        codecState getBusinessReject (cdr& d, OsloHeader* hdr);

        codecState putLogon (const cdr& d, OsloHeader* hdr,
                                    size_t len, size_t& used);
        codecState putLogonResponse (const cdr& d, OsloHeader* hdr,
                                    size_t len, size_t& used);
        codecState putLogout (const cdr& d, OsloHeader* hdr,
                                    size_t len, size_t& used);
        codecState putHeartbeat (const cdr& d, OsloHeader* hdr,
                                    size_t len, size_t& used);
        codecState putReject (const cdr& d, OsloHeader* hdr,
                                    size_t len, size_t& used);
        codecState putMissedMessageRequest (const cdr& d, OsloHeader* hdr,
                                    size_t len, size_t& used);
        codecState putMissedMessageRequestAck (const cdr& d, OsloHeader* hdr,
                                    size_t len, size_t& used);
        codecState putTransmissionComplete (const cdr& d, OsloHeader* hdr,
                                    size_t len, size_t& used);
        codecState putSystemStatus (const cdr& d, OsloHeader* hdr,
                                    size_t len, size_t& used);
        codecState putNewOrder (const cdr& d, OsloHeader* hdr,
                                    size_t len, size_t& used);
        codecState putCancelRequest (const cdr& d, OsloHeader* hdr,
                                    size_t len, size_t& used);
        codecState putMassCancelRequest (const cdr& d, OsloHeader* hdr,
                                    size_t len, size_t& used);
        codecState putOrderModificationRequest (const cdr& d, OsloHeader* hdr,
                                    size_t len, size_t& used);
        codecState putExecutionReport (const cdr& d, OsloHeader* hdr,
                                    size_t len, size_t& used);
        codecState putCancelReject (const cdr& d, OsloHeader* hdr,
                                    size_t len, size_t& used);
        codecState putMassCancelReport (const cdr& d, OsloHeader* hdr,
                                    size_t len, size_t& used);
        codecState putBusinessReject (const cdr& d, OsloHeader* hdr,
                                    size_t len, size_t& used);
};

} // namespace neueda

#endif /* OSLO_CODEC_H */
