/*
 * Copyright 2014-2018 Neueda Ltd.
 * 
 * Generated 11/10/2018
 */
#ifndef SWX_REPLACEDMESSAGE_PACKET_H
#define SWX_REPLACEDMESSAGE_PACKET_H

#include <string>
#include <sstream>
#include <stdint.h>
#include "swxPacketUtils.h"
#include "swxHeaderPacket.h"

namespace neueda
{

PACKED(class swxReplacedMessage
{
    public:
        swxHeader mHeader;

        char mType;
        uint64_t mTimestamp;
        uint32_t mReplacementOrderToken;
        char mOrderVerb;
        uint32_t mOrderQuantity;
        uint32_t mOrderBook;
        uint32_t mOrderPrice;
        uint32_t mTimeInForce;
        uint64_t mOrderNumber;
        uint32_t mSecondaryQuantity;
        uint64_t mAlgoID;
        char mOrderState;
        uint32_t mPreviousOrderToken;

        swxReplacedMessage ()
        {
            mHeader.mMessageLength = htons(sizeof (swxReplacedMessage) - 2);
            mHeader.mMessageType = 'S';
            mType = 'U';

            mTimestamp = 0;
            mReplacementOrderToken = 0;
            mOrderQuantity = 0;
            mOrderBook = 0;
            mOrderPrice = 0;
            mTimeInForce = 0;
            mOrderNumber = 0;
            mSecondaryQuantity = 0;
            mAlgoID = 0;
            mPreviousOrderToken = 0;
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

        bool setReplacementOrderToken (uint32_t v)
        {
            mReplacementOrderToken = htonl (v);
            return true;
        }

        uint32_t getReplacementOrderToken ()
        {
            return ntohl (mReplacementOrderToken);
        }

        bool setOrderVerb (char v)
        {
            mOrderVerb = v;
            return true;
        }

        char getOrderVerb ()
        {
            return mOrderVerb;
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

        bool setOrderBook (uint32_t v)
        {
            mOrderBook = htonl (v);
            return true;
        }

        uint32_t getOrderBook ()
        {
            return ntohl (mOrderBook);
        }

        bool setOrderPrice (uint32_t v)
        {
            mOrderPrice = htonl (v);
            return true;
        }

        uint32_t getOrderPrice ()
        {
            return ntohl (mOrderPrice);
        }

        bool setTimeInForce (uint32_t v)
        {
            mTimeInForce = htonl (v);
            return true;
        }

        uint32_t getTimeInForce ()
        {
            return ntohl (mTimeInForce);
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

        bool setSecondaryQuantity (uint32_t v)
        {
            mSecondaryQuantity = htonl (v);
            return true;
        }

        uint32_t getSecondaryQuantity ()
        {
            return ntohl (mSecondaryQuantity);
        }

        bool setAlgoID (uint64_t v)
        {
            mAlgoID = htonll (v);
            return true;
        }

        uint64_t getAlgoID ()
        {
            return ntohll (mAlgoID);
        }

        bool setOrderState (char v)
        {
            mOrderState = v;
            return true;
        }

        char getOrderState ()
        {
            return mOrderState;
        }

        bool setPreviousOrderToken (uint32_t v)
        {
            mPreviousOrderToken = htonl (v);
            return true;
        }

        uint32_t getPreviousOrderToken ()
        {
            return ntohl (mPreviousOrderToken);
        }

        string toString ()
        {
            stringstream ss;
            ss << "ReplacedMessage::"
               << "[Type=" << getType () << "],"
               << "[Timestamp=" << getTimestamp () << "],"
               << "[ReplacementOrderToken=" << getReplacementOrderToken () << "],"
               << "[OrderVerb=" << getOrderVerb () << "],"
               << "[OrderQuantity=" << getOrderQuantity () << "],"
               << "[OrderBook=" << getOrderBook () << "],"
               << "[OrderPrice=" << getOrderPrice () << "],"
               << "[TimeInForce=" << getTimeInForce () << "],"
               << "[OrderNumber=" << getOrderNumber () << "],"
               << "[SecondaryQuantity=" << getSecondaryQuantity () << "],"
               << "[AlgoID=" << getAlgoID () << "],"
               << "[OrderState=" << getOrderState () << "],"
               << "[PreviousOrderToken=" << getPreviousOrderToken () << "]";
            return ss.str ();
        }
});

} // namespace neueda

#endif
