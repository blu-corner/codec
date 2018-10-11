/*
 * Copyright 2014-2018 Neueda
 */
#ifndef BORSAITALIANA_CODEC_H
#define BORSAITALIANA_CODEC_H
#include <stdint.h>
#include "cdr.h"
#include "codec.h"
#include "codecHelpers.h"
#include "BorsaItalianaPackets.h"
#include "fields.h"
#include "MillenniumPacketUtils.h"

namespace neueda
{

class borsaitalianaCodec: public codec
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
        std::string getType () const { return "borsaitaliana"; }

    private:
        codecState getLogon (cdr& d, BorsaItalianaHeader* hdr);
        codecState getLogonResponse (cdr& d, BorsaItalianaHeader* hdr);
        codecState getLogout (cdr& d, BorsaItalianaHeader* hdr);
        codecState getHeartbeat (cdr& d, BorsaItalianaHeader* hdr);
        codecState getReject (cdr& d, BorsaItalianaHeader* hdr);
        codecState getMissedMessageRequest (cdr& d, BorsaItalianaHeader* hdr);
        codecState getMissedMessageRequestAck (cdr& d, BorsaItalianaHeader* hdr);
        codecState getTransmissionComplete (cdr& d, BorsaItalianaHeader* hdr);
        codecState getSystemStatus (cdr& d, BorsaItalianaHeader* hdr);
        codecState getNewOrder (cdr& d, BorsaItalianaHeader* hdr);
        codecState getNewQuote (cdr& d, BorsaItalianaHeader* hdr);
        codecState getNewOrderCrossMessage (cdr& d, BorsaItalianaHeader* hdr);
        codecState getCrossOrderCancelRequest (cdr& d, BorsaItalianaHeader* hdr);
        codecState getOrderModificationRequest (cdr& d, BorsaItalianaHeader* hdr);
        codecState getCancelRequest (cdr& d, BorsaItalianaHeader* hdr);
        codecState getMassCancelRequest (cdr& d, BorsaItalianaHeader* hdr);
        codecState getQuoteRequest (cdr& d, BorsaItalianaHeader* hdr);
        codecState getQuoteRequestReject (cdr& d, BorsaItalianaHeader* hdr);
        codecState getQuoteStatusReport (cdr& d, BorsaItalianaHeader* hdr);
        codecState getRFQQuote (cdr& d, BorsaItalianaHeader* hdr);
        codecState getQuoteAck (cdr& d, BorsaItalianaHeader* hdr);
        codecState getQuoteResponse (cdr& d, BorsaItalianaHeader* hdr);
        codecState getRFQExecutionReport (cdr& d, BorsaItalianaHeader* hdr);
        codecState getExecutionReport (cdr& d, BorsaItalianaHeader* hdr);
        codecState getCancelReject (cdr& d, BorsaItalianaHeader* hdr);
        codecState getOrderMassCancelReport (cdr& d, BorsaItalianaHeader* hdr);
        codecState getBusinessReject (cdr& d, BorsaItalianaHeader* hdr);

        codecState putLogon (const cdr& d, BorsaItalianaHeader* hdr,
                                    size_t len, size_t& used);
        codecState putLogonResponse (const cdr& d, BorsaItalianaHeader* hdr,
                                    size_t len, size_t& used);
        codecState putLogout (const cdr& d, BorsaItalianaHeader* hdr,
                                    size_t len, size_t& used);
        codecState putHeartbeat (const cdr& d, BorsaItalianaHeader* hdr,
                                    size_t len, size_t& used);
        codecState putReject (const cdr& d, BorsaItalianaHeader* hdr,
                                    size_t len, size_t& used);
        codecState putMissedMessageRequest (const cdr& d, BorsaItalianaHeader* hdr,
                                    size_t len, size_t& used);
        codecState putMissedMessageRequestAck (const cdr& d, BorsaItalianaHeader* hdr,
                                    size_t len, size_t& used);
        codecState putTransmissionComplete (const cdr& d, BorsaItalianaHeader* hdr,
                                    size_t len, size_t& used);
        codecState putSystemStatus (const cdr& d, BorsaItalianaHeader* hdr,
                                    size_t len, size_t& used);
        codecState putNewOrder (const cdr& d, BorsaItalianaHeader* hdr,
                                    size_t len, size_t& used);
        codecState putNewQuote (const cdr& d, BorsaItalianaHeader* hdr,
                                    size_t len, size_t& used);
        codecState putNewOrderCrossMessage (const cdr& d, BorsaItalianaHeader* hdr,
                                    size_t len, size_t& used);
        codecState putCrossOrderCancelRequest (const cdr& d, BorsaItalianaHeader* hdr,
                                    size_t len, size_t& used);
        codecState putOrderModificationRequest (const cdr& d, BorsaItalianaHeader* hdr,
                                    size_t len, size_t& used);
        codecState putCancelRequest (const cdr& d, BorsaItalianaHeader* hdr,
                                    size_t len, size_t& used);
        codecState putMassCancelRequest (const cdr& d, BorsaItalianaHeader* hdr,
                                    size_t len, size_t& used);
        codecState putQuoteRequest (const cdr& d, BorsaItalianaHeader* hdr,
                                    size_t len, size_t& used);
        codecState putQuoteRequestReject (const cdr& d, BorsaItalianaHeader* hdr,
                                    size_t len, size_t& used);
        codecState putQuoteStatusReport (const cdr& d, BorsaItalianaHeader* hdr,
                                    size_t len, size_t& used);
        codecState putRFQQuote (const cdr& d, BorsaItalianaHeader* hdr,
                                    size_t len, size_t& used);
        codecState putQuoteAck (const cdr& d, BorsaItalianaHeader* hdr,
                                    size_t len, size_t& used);
        codecState putQuoteResponse (const cdr& d, BorsaItalianaHeader* hdr,
                                    size_t len, size_t& used);
        codecState putRFQExecutionReport (const cdr& d, BorsaItalianaHeader* hdr,
                                    size_t len, size_t& used);
        codecState putExecutionReport (const cdr& d, BorsaItalianaHeader* hdr,
                                    size_t len, size_t& used);
        codecState putCancelReject (const cdr& d, BorsaItalianaHeader* hdr,
                                    size_t len, size_t& used);
        codecState putOrderMassCancelReport (const cdr& d, BorsaItalianaHeader* hdr,
                                    size_t len, size_t& used);
        codecState putBusinessReject (const cdr& d, BorsaItalianaHeader* hdr,
                                    size_t len, size_t& used);
};

} // namespace neueda

#endif /* BORSAITALIANA_CODEC_H */
