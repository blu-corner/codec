/*
 * Copyright 2014-2018 Neueda Ltd.
 * 
 * Generated 21/09/2018
 */
#ifndef TURQUOISE_ORDERCANCELREQUEST_PACKET_H
#define TURQUOISE_ORDERCANCELREQUEST_PACKET_H

#include <string>
#include <sstream>
#include <stdint.h>
#include "MillenniumPacketUtils.h"
#include "TurquoiseHeaderPacket.h"

namespace neueda
{

PACKED(class TurquoiseOrderCancelRequest
{
    public:
        TurquoiseHeader mHeader;

        char mClientOrderID[20];
        char mOriginalClientOrderID[20];
        char mOrderID[12];
        char mCommonSymbol[8];
        int8_t mSide;
        int8_t mTargetBook;
        char mReservedField1[9];

        TurquoiseOrderCancelRequest ()
        {
            mHeader.mMessageLength = (int16_t)sizeof (TurquoiseOrderCancelRequest) - ((int16_t)sizeof (TurquoiseHeader) - 1);
            mHeader.mMessageType = 'F';

            memset (mClientOrderID, '\0', 20);
            memset (mOriginalClientOrderID, '\0', 20);
            memset (mOrderID, '\0', 12);
            memset (mCommonSymbol, '\0', 8);
            mSide = 0;
            mTargetBook = 0;
            memset (mReservedField1, '\0', 9);
        }

        bool setClientOrderID (const string& v)
        {
            return setString (mClientOrderID, v, 20);
        }

        string getClientOrderID ()
        {
            return getString (mClientOrderID, 20);
        }

        bool setOriginalClientOrderID (const string& v)
        {
            return setString (mOriginalClientOrderID, v, 20);
        }

        string getOriginalClientOrderID ()
        {
            return getString (mOriginalClientOrderID, 20);
        }

        bool setOrderID (const string& v)
        {
            return setString (mOrderID, v, 12);
        }

        string getOrderID ()
        {
            return getString (mOrderID, 12);
        }

        bool setCommonSymbol (const string& v)
        {
            return setString (mCommonSymbol, v, 8);
        }

        string getCommonSymbol ()
        {
            return getString (mCommonSymbol, 8);
        }

        bool setSide (int8_t v)
        {
            mSide = v;
            return true;
        }

        int8_t getSide ()
        {
            return mSide;
        }

        bool setTargetBook (int8_t v)
        {
            mTargetBook = v;
            return true;
        }

        int8_t getTargetBook ()
        {
            return mTargetBook;
        }

        bool setReservedField1 (const string& v)
        {
            return setString (mReservedField1, v, 9);
        }

        string getReservedField1 ()
        {
            return getString (mReservedField1, 9);
        }

        string toString ()
        {
            stringstream ss;
            ss << "OrderCancelRequest::"
               << "[ClientOrderID=" << getClientOrderID () << "],"
               << "[OriginalClientOrderID=" << getOriginalClientOrderID () << "],"
               << "[OrderID=" << getOrderID () << "],"
               << "[CommonSymbol=" << getCommonSymbol () << "],"
               << "[Side=" << getSide () << "],"
               << "[TargetBook=" << getTargetBook () << "],"
               << "[ReservedField1=" << getReservedField1 () << "]";
            return ss.str ();
        }
});

} // namespace neueda

#endif
