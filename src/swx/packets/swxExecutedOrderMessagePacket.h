/*
 * Copyright 2014-2018 Neueda Ltd.
 * 
 * Generated 11/10/2018
 */
#ifndef SWX_EXECUTEDORDERMESSAGE_PACKET_H
#define SWX_EXECUTEDORDERMESSAGE_PACKET_H

#include <string>
#include <sstream>
#include <stdint.h>
#include "swxPacketUtils.h"
#include "swxHeaderPacket.h"

namespace neueda
{

PACKED(class swxExecutedOrderMessage
{
    public:
        swxHeader mHeader;

        char mType;
        uint64_t mTimestamp;
        uint32_t mOrderToken;
        uint32_t mExecutedQuantity;
        uint32_t mExecutedPrice;
        char mLiquidityFlag;
        uint64_t mMatchNumber;
        char mNostroCrossFlag;
        uint32_t mCounterPartyId;
        char mBookType;

        swxExecutedOrderMessage ()
        {
            mHeader.mMessageLength = htons(sizeof (swxExecutedOrderMessage) - 2);
            mHeader.mMessageType = 'S';
            mType = 'E';

            mTimestamp = 0;
            mOrderToken = 0;
            mExecutedQuantity = 0;
            mExecutedPrice = 0;
            mMatchNumber = 0;
            mCounterPartyId = 0;
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

        bool setExecutedQuantity (uint32_t v)
        {
            mExecutedQuantity = htonl (v);
            return true;
        }

        uint32_t getExecutedQuantity ()
        {
            return ntohl (mExecutedQuantity);
        }

        bool setExecutedPrice (uint32_t v)
        {
            mExecutedPrice = htonl (v);
            return true;
        }

        uint32_t getExecutedPrice ()
        {
            return ntohl (mExecutedPrice);
        }

        bool setLiquidityFlag (char v)
        {
            mLiquidityFlag = v;
            return true;
        }

        char getLiquidityFlag ()
        {
            return mLiquidityFlag;
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

        bool setNostroCrossFlag (char v)
        {
            mNostroCrossFlag = v;
            return true;
        }

        char getNostroCrossFlag ()
        {
            return mNostroCrossFlag;
        }

        bool setCounterPartyId (uint32_t v)
        {
            mCounterPartyId = htonl (v);
            return true;
        }

        uint32_t getCounterPartyId ()
        {
            return ntohl (mCounterPartyId);
        }

        bool setBookType (char v)
        {
            mBookType = v;
            return true;
        }

        char getBookType ()
        {
            return mBookType;
        }

        string toString ()
        {
            stringstream ss;
            ss << "ExecutedOrderMessage::"
               << "[Type=" << getType () << "],"
               << "[Timestamp=" << getTimestamp () << "],"
               << "[OrderToken=" << getOrderToken () << "],"
               << "[ExecutedQuantity=" << getExecutedQuantity () << "],"
               << "[ExecutedPrice=" << getExecutedPrice () << "],"
               << "[LiquidityFlag=" << getLiquidityFlag () << "],"
               << "[MatchNumber=" << getMatchNumber () << "],"
               << "[NostroCrossFlag=" << getNostroCrossFlag () << "],"
               << "[CounterPartyId=" << getCounterPartyId () << "],"
               << "[BookType=" << getBookType () << "]";
            return ss.str ();
        }
});

} // namespace neueda

#endif
