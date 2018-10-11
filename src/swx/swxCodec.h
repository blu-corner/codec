/*
 * Copyright 2014-2018 Neueda
 */
#ifndef SWX_CODEC_H
#define SWX_CODEC_H
#include <stdint.h>
#include "cdr.h"
#include "codec.h"
#include "codecHelpers.h"
#include "swxPackets.h"
#include "fields.h"

namespace neueda
{

class swxCodec: public codec
{
    public:
        swxCodec()
        {
            mMsgTypes.insert (std::make_pair ("S", "Sequenced Message"));
            mMsgTypes.insert (std::make_pair ("U", "Unsequenced Message"));
            mMsgTypes.insert (std::make_pair ("+", "Debug Message"));
            mMsgTypes.insert (std::make_pair ("A", "Login Accepted Message"));
            mMsgTypes.insert (std::make_pair ("J", "Login Rejected Message"));
            mMsgTypes.insert (std::make_pair ("R", "Client Heartbeat Message"));
            mMsgTypes.insert (std::make_pair ("H", "Server Heartbeat Message"));
            mMsgTypes.insert (std::make_pair ("Z", "End of Session Message"));
            mMsgTypes.insert (std::make_pair ("L", "Login Request Message"));
            mMsgTypes.insert (std::make_pair ("O", "Logout Request Message"));
        }

        codecState decode (cdr& d,
                             const void* buf,
                             size_t len,
                             size_t& used);
        codecState encode (const cdr& d,
                             void* buf,
                             size_t len,
                             size_t& used);
        std::string getType () const { return "swx"; }
        
    private:
        bool setLeftPaddedString (const cdr& d, cdrKey_t name, char* s, size_t slen, unsigned char paddingByte);
        bool setRightPaddedString (const cdr& d, cdrKey_t name, char* s, size_t slen, unsigned char paddingByte);
        bool putCharacter (const cdr& d, cdrKey_t key, char* c);
        bool putIntegerBigEndian (const cdr& d, cdrKey_t key, void* vp, size_t size);
        bool putIntegerLittleEndian (const cdr& d, cdrKey_t key, void* vp, size_t size);


        codecState getEnterOrderMessage (cdr& d, swxHeader* hdr);
        codecState getReplaceOrderMessage (cdr& d, swxHeader* hdr);
        codecState getCancelOrderMessage (cdr& d, swxHeader* hdr);
        codecState getSystemEventMessage (cdr& d, swxHeader* hdr);
        codecState getAcceptedMessage (cdr& d, swxHeader* hdr);
        codecState getReplacedMessage (cdr& d, swxHeader* hdr);
        codecState getOrderPriorityUpdateChangeMessage (cdr& d, swxHeader* hdr);
        codecState getCancelledMessage (cdr& d, swxHeader* hdr);
        codecState getExecutedOrderMessage (cdr& d, swxHeader* hdr);
        codecState getBrokenTradeMessage (cdr& d, swxHeader* hdr);
        codecState getRejectedOrderMessage (cdr& d, swxHeader* hdr);
        codecState getDebugMessage (cdr& d, swxHeader* hdr);
        codecState getLoginAcceptedMessage (cdr& d, swxHeader* hdr);
        codecState getLoginRejectedMessage (cdr& d, swxHeader* hdr);
        codecState getClientHeartbeatMessage (cdr& d, swxHeader* hdr);
        codecState getServerHeartbeatMessage (cdr& d, swxHeader* hdr);
        codecState getEndofSessionMessage (cdr& d, swxHeader* hdr);
        codecState getLoginRequestMessage (cdr& d, swxHeader* hdr);
        codecState getLogoutRequestMessage (cdr& d, swxHeader* hdr);

        codecState putEnterOrderMessage (const cdr& d, swxHeader* hdr,
                                    size_t len, size_t& used);
        codecState putReplaceOrderMessage (const cdr& d, swxHeader* hdr,
                                    size_t len, size_t& used);
        codecState putCancelOrderMessage (const cdr& d, swxHeader* hdr,
                                    size_t len, size_t& used);
        codecState putSystemEventMessage (const cdr& d, swxHeader* hdr,
                                    size_t len, size_t& used);
        codecState putAcceptedMessage (const cdr& d, swxHeader* hdr,
                                    size_t len, size_t& used);
        codecState putReplacedMessage (const cdr& d, swxHeader* hdr,
                                    size_t len, size_t& used);
        codecState putOrderPriorityUpdateChangeMessage (const cdr& d, swxHeader* hdr,
                                    size_t len, size_t& used);
        codecState putCancelledMessage (const cdr& d, swxHeader* hdr,
                                    size_t len, size_t& used);
        codecState putExecutedOrderMessage (const cdr& d, swxHeader* hdr,
                                    size_t len, size_t& used);
        codecState putBrokenTradeMessage (const cdr& d, swxHeader* hdr,
                                    size_t len, size_t& used);
        codecState putRejectedOrderMessage (const cdr& d, swxHeader* hdr,
                                    size_t len, size_t& used);
        codecState putDebugMessage (const cdr& d, swxHeader* hdr,
                                    size_t len, size_t& used);
        codecState putLoginAcceptedMessage (const cdr& d, swxHeader* hdr,
                                    size_t len, size_t& used);
        codecState putLoginRejectedMessage (const cdr& d, swxHeader* hdr,
                                    size_t len, size_t& used);
        codecState putClientHeartbeatMessage (const cdr& d, swxHeader* hdr,
                                    size_t len, size_t& used);
        codecState putServerHeartbeatMessage (const cdr& d, swxHeader* hdr,
                                    size_t len, size_t& used);
        codecState putEndofSessionMessage (const cdr& d, swxHeader* hdr,
                                    size_t len, size_t& used);
        codecState putLoginRequestMessage (const cdr& d, swxHeader* hdr,
                                    size_t len, size_t& used);
        codecState putLogoutRequestMessage (const cdr& d, swxHeader* hdr,
                                    size_t len, size_t& used);
};

} // namespace neueda

#endif /* SWX_CODEC_H */
