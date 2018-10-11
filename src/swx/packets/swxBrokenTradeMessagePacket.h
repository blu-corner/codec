/*
 * Copyright 2014-2018 Neueda Ltd.
 * 
 * Generated 11/10/2018
 */
#ifndef SWX_BROKENTRADEMESSAGE_PACKET_H
#define SWX_BROKENTRADEMESSAGE_PACKET_H

#include <string>
#include <sstream>
#include <stdint.h>
#include "swxPacketUtils.h"
#include "swxHeaderPacket.h"

namespace neueda
{

PACKED(class swxBrokenTradeMessage
{
    public:
        swxHeader mHeader;

        char mType;
        uint64_t mTimestamp;
        uint32_t mOrderToken;
        uint64_t mMatchNumber;
        char mReason;

        swxBrokenTradeMessage ()
        {
            mHeader.mMessageLength = htons(sizeof (swxBrokenTradeMessage) - 2);
            mHeader.mMessageType = 'S';
            mType = 'B';

            mTimestamp = 0;
            mOrderToken = 0;
            mMatchNumber = 0;
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

        bool setMatchNumber (uint64_t v)
        {
            mMatchNumber = htonll (v);
            return true;
        }

        uint64_t getMatchNumber ()
        {
            return ntohll (mMatchNumber);
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
            ss << "BrokenTradeMessage::"
               << "[Type=" << getType () << "],"
               << "[Timestamp=" << getTimestamp () << "],"
               << "[OrderToken=" << getOrderToken () << "],"
               << "[MatchNumber=" << getMatchNumber () << "],"
               << "[Reason=" << getReason () << "]";
            return ss.str ();
        }
});

} // namespace neueda

#endif
