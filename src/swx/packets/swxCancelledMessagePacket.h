/*
 * Copyright 2014-2018 Neueda Ltd.
 * 
 * Generated 11/10/2018
 */
#ifndef SWX_CANCELLEDMESSAGE_PACKET_H
#define SWX_CANCELLEDMESSAGE_PACKET_H

#include <string>
#include <sstream>
#include <stdint.h>
#include "swxPacketUtils.h"
#include "swxHeaderPacket.h"

namespace neueda
{

PACKED(class swxCancelledMessage
{
    public:
        swxHeader mHeader;

        char mType;
        uint64_t mTimestamp;
        uint32_t mOrderToken;
        int32_t mOrderQuantity;
        char mReason;

        swxCancelledMessage ()
        {
            mHeader.mMessageLength = htons(sizeof (swxCancelledMessage) - 2);
            mHeader.mMessageType = 'S';
            mType = 'C';

            mTimestamp = 0;
            mOrderToken = 0;
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

        bool setTimestamp (uint64_t v)
        {
            mTimestamp = htonll (v);
            return true;
        }

        uint64_t getTimestamp ()
        {
            return ntohll (mTimestamp);
        }

        bool setOrderToken (uint32_t v)
        {
            mOrderToken = htonl (v);
            return true;
        }

        uint32_t getOrderToken ()
        {
            return ntohl (mOrderToken);
        }

        bool setOrderQuantity (int32_t v)
        {
            mOrderQuantity = htonl (v);
            return true;
        }

        int32_t getOrderQuantity ()
        {
            return ntohl (mOrderQuantity);
        }

        bool setReason (char v)
        {
            mReason = v;
            return true;
        }

        char getReason ()
        {
            return mReason;
        }

        string toString ()
        {
            stringstream ss;
            ss << "CancelledMessage::"
               << "[Type=" << getType () << "],"
               << "[Timestamp=" << getTimestamp () << "],"
               << "[OrderToken=" << getOrderToken () << "],"
               << "[OrderQuantity=" << getOrderQuantity () << "],"
               << "[Reason=" << getReason () << "]";
            return ss.str ();
        }
});

} // namespace neueda

#endif
