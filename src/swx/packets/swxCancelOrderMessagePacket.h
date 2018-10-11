/*
 * Copyright 2014-2018 Neueda Ltd.
 * 
 * Generated 11/10/2018
 */
#ifndef SWX_CANCELORDERMESSAGE_PACKET_H
#define SWX_CANCELORDERMESSAGE_PACKET_H

#include <string>
#include <sstream>
#include <stdint.h>
#include "swxPacketUtils.h"
#include "swxHeaderPacket.h"

namespace neueda
{

PACKED(class swxCancelOrderMessage
{
    public:
        swxHeader mHeader;

        char mType;
        uint32_t mOriginalOrderToken;
        uint32_t mOrderQuantity;

        swxCancelOrderMessage ()
        {
            mHeader.mMessageLength = htons(sizeof (swxCancelOrderMessage) - 2);
            mHeader.mMessageType = 'U';
            mType = 'X';

            mOriginalOrderToken = 0;
            mOrderQuantity = 0;
        }

        bool setType (char v)
        {
            mType = v;
            return true;
        }

        char getType ()
        {
            return mType;
        }

        bool setOriginalOrderToken (uint32_t v)
        {
            mOriginalOrderToken = htonl (v);
            return true;
        }

        uint32_t getOriginalOrderToken ()
        {
            return ntohl (mOriginalOrderToken);
        }

        bool setOrderQuantity (uint32_t v)
        {
            mOrderQuantity = htonl (v);
            return true;
        }

        uint32_t getOrderQuantity ()
        {
            return ntohl (mOrderQuantity);
        }

        string toString ()
        {
            stringstream ss;
            ss << "CancelOrderMessage::"
               << "[Type=" << getType () << "],"
               << "[OriginalOrderToken=" << getOriginalOrderToken () << "],"
               << "[OrderQuantity=" << getOrderQuantity () << "]";
            return ss.str ();
        }
});

} // namespace neueda

#endif
