/*
 * Copyright 2014-2018 Neueda Ltd.
 * 
 * Generated 21/09/2018
 */
#ifndef LSE_ORDERCANCELREPLACEREQUEST_PACKET_H
#define LSE_ORDERCANCELREPLACEREQUEST_PACKET_H

#include <string>
#include <sstream>
#include <stdint.h>
#include "MillenniumPacketUtils.h"
#include "LseHeaderPacket.h"

namespace neueda
{

PACKED(class LseOrderCancelReplaceRequest
{
    public:
        LseHeader mHeader;

        char mClientOrderID[20];
        char mOriginalClientOrderID[20];
        char mOrderID[12];
        int32_t mInstrumentID;
        int8_t mReservedField1;
        int8_t mReservedField2;
        uint32_t mExpireDateTime;
        int32_t mOrderQty;
        int32_t mDisplayQty;
        int64_t mLimitPrice;
        char mAccount[10];
        uint8_t mReservedField3;
        int8_t mSide;
        int64_t mStopPrice;
        int8_t mPassiveOnlyOrder;
        char mReservedField4[9];
        int32_t mMinimumQuantity;

        LseOrderCancelReplaceRequest ()
        {
            mHeader.mMessageLength = (int16_t)sizeof (LseOrderCancelReplaceRequest) - ((int16_t)sizeof (LseHeader) - 1);
            mHeader.mMessageType = 'G';

            memset (mClientOrderID, '\0', 20);
            memset (mOriginalClientOrderID, '\0', 20);
            memset (mOrderID, '\0', 12);
            mInstrumentID = 0;
            mReservedField1 = 0;
            mReservedField2 = 0;
            mExpireDateTime = 0;
            mOrderQty = 0;
            mDisplayQty = 0;
            mLimitPrice = 0;
            memset (mAccount, '\0', 10);
            mReservedField3 = 0;
            mSide = 0;
            mStopPrice = 0;
            mPassiveOnlyOrder = 0;
            memset (mReservedField4, '\0', 9);
            mMinimumQuantity = 0;
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

        bool setInstrumentID (int32_t v)
        {
            mInstrumentID = v;
            return true;
        }

        int32_t getInstrumentID ()
        {
            return mInstrumentID;
        }

        bool setReservedField1 (int8_t v)
        {
            mReservedField1 = v;
            return true;
        }

        int8_t getReservedField1 ()
        {
            return mReservedField1;
        }

        bool setReservedField2 (int8_t v)
        {
            mReservedField2 = v;
            return true;
        }

        int8_t getReservedField2 ()
        {
            return mReservedField2;
        }

        bool setExpireDateTime (uint32_t v)
        {
            mExpireDateTime = v;
            return true;
        }

        uint32_t getExpireDateTime ()
        {
            return mExpireDateTime;
        }

        bool setOrderQty (int32_t v)
        {
            mOrderQty = v;
            return true;
        }

        int32_t getOrderQty ()
        {
            return mOrderQty;
        }

        bool setDisplayQty (int32_t v)
        {
            mDisplayQty = v;
            return true;
        }

        int32_t getDisplayQty ()
        {
            return mDisplayQty;
        }

        bool setLimitPrice (double p)
        {
            mLimitPrice = p * 100000000;
            return true;
        }

        double getLimitPrice ()
        {
            return ((double)mLimitPrice / 100000000);
        }

        bool setAccount (const string& v)
        {
            return setString (mAccount, v, 10);
        }

        string getAccount ()
        {
            return getString (mAccount, 10);
        }

        bool setReservedField3 (uint8_t v)
        {
            mReservedField3 = v;
            return true;
        }

        uint8_t getReservedField3 ()
        {
            return mReservedField3;
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

        bool setStopPrice (double p)
        {
            mStopPrice = p * 100000000;
            return true;
        }

        double getStopPrice ()
        {
            return ((double)mStopPrice / 100000000);
        }

        bool setPassiveOnlyOrder (int8_t v)
        {
            mPassiveOnlyOrder = v;
            return true;
        }

        int8_t getPassiveOnlyOrder ()
        {
            return mPassiveOnlyOrder;
        }

        bool setReservedField4 (const string& v)
        {
            return setString (mReservedField4, v, 9);
        }

        string getReservedField4 ()
        {
            return getString (mReservedField4, 9);
        }

        bool setMinimumQuantity (int32_t v)
        {
            mMinimumQuantity = v;
            return true;
        }

        int32_t getMinimumQuantity ()
        {
            return mMinimumQuantity;
        }

        string toString ()
        {
            stringstream ss;
            ss << "OrderCancelReplaceRequest::"
               << "[ClientOrderID=" << getClientOrderID () << "],"
               << "[OriginalClientOrderID=" << getOriginalClientOrderID () << "],"
               << "[OrderID=" << getOrderID () << "],"
               << "[InstrumentID=" << getInstrumentID () << "],"
               << "[ReservedField1=" << getReservedField1 () << "],"
               << "[ReservedField2=" << getReservedField2 () << "],"
               << "[ExpireDateTime=" << getExpireDateTime () << "],"
               << "[OrderQty=" << getOrderQty () << "],"
               << "[DisplayQty=" << getDisplayQty () << "],"
               << "[LimitPrice=" << getLimitPrice () << "],"
               << "[Account=" << getAccount () << "],"
               << "[ReservedField3=" << unsigned(getReservedField3 ()) << "],"
               << "[Side=" << getSide () << "],"
               << "[StopPrice=" << getStopPrice () << "],"
               << "[PassiveOnlyOrder=" << getPassiveOnlyOrder () << "],"
               << "[ReservedField4=" << getReservedField4 () << "],"
               << "[MinimumQuantity=" << getMinimumQuantity () << "]";
            return ss.str ();
        }
});

} // namespace neueda

#endif
