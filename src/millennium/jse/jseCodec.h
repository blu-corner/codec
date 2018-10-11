/*
 * Copyright 2014-2018 Neueda
 */
#ifndef JSE_CODEC_H
#define JSE_CODEC_H
#include <stdint.h>
#include "cdr.h"
#include "codec.h"
#include "codecHelpers.h"
#include "JsePackets.h"
#include "fields.h"
#include "MillenniumPacketUtils.h"

namespace neueda
{

class jseCodec: public codec
{
    public:
        codecState decode (cdr& d,
                             const void* buf,
                             size_t len,
                             size_t& used);
        codecState encode (const cdr& d,
                             void* buf,
                             size_t len,
                             size_t& used);
        std::string getType () const { return "jse"; }

    private:
        codecState getLogon (cdr& d, JseHeader* hdr);
        codecState getLogonResponse (cdr& d, JseHeader* hdr);
        codecState getLogout (cdr& d, JseHeader* hdr);
        codecState getHeartbeat (cdr& d, JseHeader* hdr);
        codecState getReject (cdr& d, JseHeader* hdr);
        codecState getMissedMessageRequest (cdr& d, JseHeader* hdr);
        codecState getMissedMessageRequestAck (cdr& d, JseHeader* hdr);
        codecState getTransmissionComplete (cdr& d, JseHeader* hdr);
        codecState getSystemStatus (cdr& d, JseHeader* hdr);
        codecState getNewOrder (cdr& d, JseHeader* hdr);
        codecState getOrderCancelRequest (cdr& d, JseHeader* hdr);
        codecState getOrderMassCancelRequest (cdr& d, JseHeader* hdr);
        codecState getNewOrderCross (cdr& d, JseHeader* hdr);
        codecState getExecutionReport (cdr& d, JseHeader* hdr);
        codecState getOrderCancelReject (cdr& d, JseHeader* hdr);
        codecState getOrderMassCancelReport (cdr& d, JseHeader* hdr);
        codecState getQuote (cdr& d, JseHeader* hdr);
        codecState getOrderCancelReplaceRequest (cdr& d, JseHeader* hdr);
        codecState getQuoteRequest (cdr& d, JseHeader* hdr);
        codecState getQuoteRequestReject (cdr& d, JseHeader* hdr);
        codecState getRFQQuote (cdr& d, JseHeader* hdr);
        codecState getQuoteResponse (cdr& d, JseHeader* hdr);
        codecState getSecurityDefinitionRequest (cdr& d, JseHeader* hdr);
        codecState getOrderStatusReport (cdr& d, JseHeader* hdr);
        codecState getQuoteAck (cdr& d, JseHeader* hdr);
        codecState getRFQExecutionReport (cdr& d, JseHeader* hdr);
        codecState getSecurityDefinitionResponse (cdr& d, JseHeader* hdr);
        codecState getNews (cdr& d, JseHeader* hdr);
        codecState getBusinessReject (cdr& d, JseHeader* hdr);

        codecState putLogon (const cdr& d, JseHeader* hdr,
                                    size_t len, size_t& used);
        codecState putLogonResponse (const cdr& d, JseHeader* hdr,
                                    size_t len, size_t& used);
        codecState putLogout (const cdr& d, JseHeader* hdr,
                                    size_t len, size_t& used);
        codecState putHeartbeat (const cdr& d, JseHeader* hdr,
                                    size_t len, size_t& used);
        codecState putReject (const cdr& d, JseHeader* hdr,
                                    size_t len, size_t& used);
        codecState putMissedMessageRequest (const cdr& d, JseHeader* hdr,
                                    size_t len, size_t& used);
        codecState putMissedMessageRequestAck (const cdr& d, JseHeader* hdr,
                                    size_t len, size_t& used);
        codecState putTransmissionComplete (const cdr& d, JseHeader* hdr,
                                    size_t len, size_t& used);
        codecState putSystemStatus (const cdr& d, JseHeader* hdr,
                                    size_t len, size_t& used);
        codecState putNewOrder (const cdr& d, JseHeader* hdr,
                                    size_t len, size_t& used);
        codecState putOrderCancelRequest (const cdr& d, JseHeader* hdr,
                                    size_t len, size_t& used);
        codecState putOrderMassCancelRequest (const cdr& d, JseHeader* hdr,
                                    size_t len, size_t& used);
        codecState putNewOrderCross (const cdr& d, JseHeader* hdr,
                                    size_t len, size_t& used);
        codecState putExecutionReport (const cdr& d, JseHeader* hdr,
                                    size_t len, size_t& used);
        codecState putOrderCancelReject (const cdr& d, JseHeader* hdr,
                                    size_t len, size_t& used);
        codecState putOrderMassCancelReport (const cdr& d, JseHeader* hdr,
                                    size_t len, size_t& used);
        codecState putQuote (const cdr& d, JseHeader* hdr,
                                    size_t len, size_t& used);
        codecState putOrderCancelReplaceRequest (const cdr& d, JseHeader* hdr,
                                    size_t len, size_t& used);
        codecState putQuoteRequest (const cdr& d, JseHeader* hdr,
                                    size_t len, size_t& used);
        codecState putQuoteRequestReject (const cdr& d, JseHeader* hdr,
                                    size_t len, size_t& used);
        codecState putRFQQuote (const cdr& d, JseHeader* hdr,
                                    size_t len, size_t& used);
        codecState putQuoteResponse (const cdr& d, JseHeader* hdr,
                                    size_t len, size_t& used);
        codecState putSecurityDefinitionRequest (const cdr& d, JseHeader* hdr,
                                    size_t len, size_t& used);
        codecState putOrderStatusReport (const cdr& d, JseHeader* hdr,
                                    size_t len, size_t& used);
        codecState putQuoteAck (const cdr& d, JseHeader* hdr,
                                    size_t len, size_t& used);
        codecState putRFQExecutionReport (const cdr& d, JseHeader* hdr,
                                    size_t len, size_t& used);
        codecState putSecurityDefinitionResponse (const cdr& d, JseHeader* hdr,
                                    size_t len, size_t& used);
        codecState putNews (const cdr& d, JseHeader* hdr,
                                    size_t len, size_t& used);
        codecState putBusinessReject (const cdr& d, JseHeader* hdr,
                                    size_t len, size_t& used);
};

} // namespace neueda

#endif /* JSE_CODEC_H */
