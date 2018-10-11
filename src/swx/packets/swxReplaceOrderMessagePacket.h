/*
 * Copyright 2014-2018 Neueda Ltd.
 * 
 * Generated 11/10/2018
 */
#ifndef SWX_REPLACEORDERMESSAGE_PACKET_H
#define SWX_REPLACEORDERMESSAGE_PACKET_H

#include <string>
#include <sstream>
#include <stdint.h>
#include "swxPacketUtils.h"
#include "swxHeaderPacket.h"

namespace neueda
{

PACKED(class swxReplaceOrderMessage
{
    public:
        swxHeader mHeader;

        char mType;
        uint32_t mExistingOrderToken;
        uint32_t mReplacementOrderToken;
        uint32_t mOrderQuantity;
        uint32_t mOrderPrice;
        uint32_t mTimeInForce;
        uint32_t mSecondaryQuantity;
        uint64_t mAlgoID;

        swxReplaceOrderMessage ()
        {
            mHeader.mMessageLength = htons(sizeof (swxReplaceOrderMessage) - 2);
            mHeader.mMessageType = 'U';
            mType = 'U';

            mExistingOrderToken = 0;
            mReplacementOrderToken = 0;
            mOrderQuantity = 0;
            mOrderPrice = 0;
            mTimeInForce = 0;
            mSecondaryQuantity = 0;
            mAlgoID = 0;
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

        bool setExistingOrderToken (uint32_t v)
        {
            mExistingOrderToken = htonl (v);
            return true;
        }

        uint32_t getExistingOrderToken ()
        {
            return ntohl (mExistingOrderToken);
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

        bool setOrderQuantity (uint32_t v)
        {
            mOrderQuantity = htonl (v);
            return true;
        }

        uint32_t getOrderQuantity ()
        {
            return ntohl (mOrderQuantity);
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

        string toString ()
        {
            stringstream ss;
            ss << "ReplaceOrderMessage::"
               << "[Type=" << getType () << "],"
               << "[ExistingOrderToken=" << getExistingOrderToken () << "],"
               << "[ReplacementOrderToken=" << getReplacementOrderToken () << "],"
               << "[OrderQuantity=" << getOrderQuantity () << "],"
               << "[OrderPrice=" << getOrderPrice () << "],"
               << "[TimeInForce=" << getTimeInForce () << "],"
               << "[SecondaryQuantity=" << getSecondaryQuantity () << "],"
               << "[AlgoID=" << getAlgoID () << "]";
            return ss.str ();
        }
});

} // namespace neueda

#endif
