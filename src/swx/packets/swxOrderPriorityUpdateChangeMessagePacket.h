/*
 * Copyright 2014-2018 Neueda Ltd.
 * 
 * Generated 11/10/2018
 */
#ifndef SWX_ORDERPRIORITYUPDATECHANGEMESSAGE_PACKET_H
#define SWX_ORDERPRIORITYUPDATECHANGEMESSAGE_PACKET_H

#include <string>
#include <sstream>
#include <stdint.h>
#include "swxPacketUtils.h"
#include "swxHeaderPacket.h"

namespace neueda
{

PACKED(class swxOrderPriorityUpdateChangeMessage
{
    public:
        swxHeader mHeader;

        char mType;
        uint64_t mTimestamp;
        uint32_t mOrderToken;
        uint64_t mOrderNumber;

        swxOrderPriorityUpdateChangeMessage ()
        {
            mHeader.mMessageLength = htons(sizeof (swxOrderPriorityUpdateChangeMessage) - 2);
            mHeader.mMessageType = 'S';
            mType = 'T';

            mTimestamp = 0;
            mOrderToken = 0;
            mOrderNumber = 0;
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

        bool setOrderNumber (uint64_t v)
        {
            mOrderNumber = htonll (v);
            return true;
        }

        uint64_t getOrderNumber ()
        {
            return ntohll (mOrderNumber);
        }

        string toString ()
        {
            stringstream ss;
            ss << "OrderPriorityUpdateChangeMessage::"
               << "[Type=" << getType () << "],"
               << "[Timestamp=" << getTimestamp () << "],"
               << "[OrderToken=" << getOrderToken () << "],"
               << "[OrderNumber=" << getOrderNumber () << "]";
            return ss.str ();
        }
});

} // namespace neueda

#endif
