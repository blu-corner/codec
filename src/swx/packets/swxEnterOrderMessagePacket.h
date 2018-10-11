/*
 * Copyright 2014-2018 Neueda Ltd.
 * 
 * Generated 11/10/2018
 */
#ifndef SWX_ENTERORDERMESSAGE_PACKET_H
#define SWX_ENTERORDERMESSAGE_PACKET_H

#include <string>
#include <sstream>
#include <stdint.h>
#include "swxPacketUtils.h"
#include "swxHeaderPacket.h"

namespace neueda
{

PACKED(class swxEnterOrderMessage
{
    public:
        swxHeader mHeader;

        char mType;
        uint32_t mOrderToken;
        char mBankInternalReference[16];
        char mOrderVerb;
        uint32_t mOrderQuantity;
        uint32_t mOrderBook;
        uint32_t mOrderPrice;
        uint32_t mTimeInForce;
        uint32_t mPrincipalId;
        int32_t mSecondaryQuantity;
        char mOrderPlacement;
        uint64_t mAlgoID;

        swxEnterOrderMessage ()
        {
            mHeader.mMessageLength = htons(sizeof (swxEnterOrderMessage) - 2);
            mHeader.mMessageType = 'U';
            mType = 'O';

            mOrderToken = 0;
            memset (mBankInternalReference, ' ', 16);
            mOrderQuantity = 0;
            mOrderBook = 0;
            mOrderPrice = 0;
            mTimeInForce = 0;
            mPrincipalId = 0;
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

        bool setOrderToken (uint32_t v)
        {
            mOrderToken = htonl (v);
            return true;
        }

        uint32_t getOrderToken ()
        {
            return ntohl (mOrderToken);
        }

        bool setBankInternalReference (const string& v)
        {
            return setRightPaddedStringBuf (v, mBankInternalReference, 16, ' ');
        }

        string getBankInternalReference ()
        {
            std::string output;
            getRightPaddedString (mBankInternalReference, 16, ' ', output);
            return output;
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

        bool setPrincipalId (uint32_t v)
        {
            mPrincipalId = htonl (v);
            return true;
        }

        uint32_t getPrincipalId ()
        {
            return ntohl (mPrincipalId);
        }

        bool setSecondaryQuantity (int32_t v)
        {
            mSecondaryQuantity = htonl (v);
            return true;
        }

        int32_t getSecondaryQuantity ()
        {
            return ntohl (mSecondaryQuantity);
        }

        bool setOrderPlacement (char v)
        {
            mOrderPlacement = v;
            return true;
        }

        char getOrderPlacement ()
        {
            return mOrderPlacement;
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
            ss << "EnterOrderMessage::"
               << "[Type=" << getType () << "],"
               << "[OrderToken=" << getOrderToken () << "],"
               << "[BankInternalReference=" << getBankInternalReference () << "],"
               << "[OrderVerb=" << getOrderVerb () << "],"
               << "[OrderQuantity=" << getOrderQuantity () << "],"
               << "[OrderBook=" << getOrderBook () << "],"
               << "[OrderPrice=" << getOrderPrice () << "],"
               << "[TimeInForce=" << getTimeInForce () << "],"
               << "[PrincipalId=" << getPrincipalId () << "],"
               << "[SecondaryQuantity=" << getSecondaryQuantity () << "],"
               << "[OrderPlacement=" << getOrderPlacement () << "],"
               << "[AlgoID=" << getAlgoID () << "]";
            return ss.str ();
        }
});

} // namespace neueda

#endif
