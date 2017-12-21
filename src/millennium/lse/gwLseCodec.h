#ifndef GW_LSE_CODEC_H
#define GW_LSE_CODEC_H
#include <stdint.h>
#include "cdr.h"
#include "gwCodec.h"
#include "gwCodecHelpers.h"

namespace LseCodec
{

struct gwLseHeader;

class gwLseCodec: public gwCodec
{
    public:
        gwCodecState decode (cdr& d,
                             const void* buf,
                             size_t len,
                             size_t& used);
        gwCodecState encode (const cdr& d,
                             void* buf,
                             size_t len,
                             size_t& used);
        std::string getType () const { return "lse"; }
    private:
        bool putString (const cdr& d, const char* name, char* s, size_t slen);
        bool putPrice (const cdr& d, const std::string& key, int64_t* price);
        bool putCharacter (const cdr& d, const std::string& key, char* c);

        gwCodecState getLogon (cdr& d, gwLseHeader* hdr);
        gwCodecState getLogonReply (cdr& d, gwLseHeader* hdr);
        gwCodecState getLogout (cdr& d, gwLseHeader* hdr);
        gwCodecState getHeartbeat (cdr& d, gwLseHeader* hdr);
        gwCodecState getMissedMessageRequest (cdr& d, gwLseHeader* hdr);
        gwCodecState getMissedMessageRequestAck (cdr& d, gwLseHeader* hdr);
        gwCodecState getMissedMessageReport (cdr& d, gwLseHeader* hdr);
        gwCodecState getReject (cdr& d, gwLseHeader* hdr);
        gwCodecState getSystemStatus (cdr& d, gwLseHeader* hdr);
        gwCodecState getNewOrder (cdr& d, gwLseHeader* hdr);
        gwCodecState getOrderCancelRequest (cdr& d, gwLseHeader* hdr);
        gwCodecState getOrderMassCancelRequest (cdr& d, gwLseHeader* hdr);
        gwCodecState getOrderCancelReplaceRequest (cdr& d, gwLseHeader* hdr);
        gwCodecState getNewOrderCross (cdr& d, gwLseHeader* hdr);
        gwCodecState getCrossOrderCancelRequest (cdr& d, gwLseHeader* hdr);
        gwCodecState getExecutionReport (cdr& d, gwLseHeader* hdr);
        gwCodecState getOrderCancelReject (cdr& d, gwLseHeader* hdr);
        gwCodecState getOrderMassCancelReport (cdr& d, gwLseHeader* hdr);
        gwCodecState getBusinessReject (cdr& d, gwLseHeader* hdr);

        gwCodecState putLogon (const cdr& d, gwLseHeader* hdr,
                                    size_t len, size_t& used);
        gwCodecState putLogonReply (const cdr& d, gwLseHeader* hdr,
                                    size_t len, size_t& used);
        gwCodecState putLogout (const cdr& d, gwLseHeader* hdr,
                                    size_t len, size_t& used);
        gwCodecState putHeartbeat (const cdr& d, gwLseHeader* hdr,
                                    size_t len, size_t& used);
        gwCodecState putMissedMessageRequest (const cdr& d, gwLseHeader* hdr,
                                    size_t len, size_t& used);
        gwCodecState putMissedMessageRequestAck (const cdr& d, gwLseHeader* hdr,
                                    size_t len, size_t& used);
        gwCodecState putMissedMessageReport (const cdr& d, gwLseHeader* hdr,
                                    size_t len, size_t& used);
        gwCodecState putReject (const cdr& d, gwLseHeader* hdr,
                                    size_t len, size_t& used);
        gwCodecState putSystemStatus (const cdr& d, gwLseHeader* hdr,
                                    size_t len, size_t& used);
        gwCodecState putNewOrder (const cdr& d, gwLseHeader* hdr,
                                    size_t len, size_t& used);
        gwCodecState putOrderCancelRequest (const cdr& d, gwLseHeader* hdr,
                                    size_t len, size_t& used);
        gwCodecState putOrderMassCancelRequest (const cdr& d, gwLseHeader* hdr,
                                    size_t len, size_t& used);
        gwCodecState putOrderCancelReplaceRequest (const cdr& d, gwLseHeader* hdr,
                                    size_t len, size_t& used);
        gwCodecState putNewOrderCross (const cdr& d, gwLseHeader* hdr,
                                    size_t len, size_t& used);
        gwCodecState putCrossOrderCancelRequest (const cdr& d, gwLseHeader* hdr,
                                    size_t len, size_t& used);
        gwCodecState putExecutionReport (const cdr& d, gwLseHeader* hdr,
                                    size_t len, size_t& used);
        gwCodecState putOrderCancelReject (const cdr& d, gwLseHeader* hdr,
                                    size_t len, size_t& used);
        gwCodecState putOrderMassCancelReport (const cdr& d, gwLseHeader* hdr,
                                    size_t len, size_t& used);
        gwCodecState putBusinessReject (const cdr& d, gwLseHeader* hdr,
                                    size_t len, size_t& used);
};

}

#endif /* GW_LSE_CODEC_H */
