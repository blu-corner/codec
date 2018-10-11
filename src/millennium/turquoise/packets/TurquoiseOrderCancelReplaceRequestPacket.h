/*
 * Copyright 2014-2018 Neueda Ltd.
 * 
 * Generated 21/09/2018
 */
#ifndef TURQUOISE_ORDERCANCELREPLACEREQUEST_PACKET_H
#define TURQUOISE_ORDERCANCELREPLACEREQUEST_PACKET_H

#include <string>
#include <sstream>
#include <stdint.h>
#include "MillenniumPacketUtils.h"
#include "TurquoiseHeaderPacket.h"

namespace neueda
{

PACKED(class TurquoiseOrderCancelReplaceRequest
{
    public:
        TurquoiseHeader mHeader;

        char mClientOrderID[20];
        char mOriginalClientOrderID[20];
        char mOrderID[12];
        char mCommonSymbol[8];
        uint32_t mExpireDateTime;
        int32_t mOrderQty;
        int32_t mDisplayQty;
        int64_t mLimitPrice;
        char mAccount[10];
        int8_t mTIF;
        int8_t mSide;
        int64_t mReservedField1;
        int8_t mTargetBook;
        int8_t mExecInstruction;
        int32_t mMinQty;
        int8_t mPassiveOnlyOrder;
        char mReservedField2[3];

        TurquoiseOrderCancelReplaceRequest ()
        {
            mHeader.mMessageLength = (int16_t)sizeof (TurquoiseOrderCancelReplaceRequest) - ((int16_t)sizeof (TurquoiseHeader) - 1);
            mHeader.mMessageType = 'G';

            memset (mClientOrderID, '\0', 20);
            memset (mOriginalClientOrderID, '\0', 20);
            memset (mOrderID, '\0', 12);
            memset (mCommonSymbol, '\0', 8);
            mExpireDateTime = 0;
            mOrderQty = 0;
            mDisplayQty = 0;
            mLimitPrice = 0;
            memset (mAccount, '\0', 10);
            mTIF = 0;
            mSide = 0;
            mReservedField1 = 0;
            mTargetBook = 0;
            mExecInstruction = 0;
            mMinQty = 0;
            mPassiveOnlyOrder = 0;
            memset (mReservedField2, '\0', 3);
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

        bool setTIF (int8_t v)
        {
            mTIF = v;
            return true;
        }

        int8_t getTIF ()
        {
            return mTIF;
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

        bool setReservedField1 (double p)
        {
            mReservedField1 = p * 100000000;
            return true;
        }

        double getReservedField1 ()
        {
            return ((double)mReservedField1 / 100000000);
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

        bool setExecInstruction (int8_t v)
        {
            mExecInstruction = v;
            return true;
        }

        int8_t getExecInstruction ()
        {
            return mExecInstruction;
        }

        bool setMinQty (int32_t v)
        {
            mMinQty = v;
            return true;
        }

        int32_t getMinQty ()
        {
            return mMinQty;
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

        bool setReservedField2 (const string& v)
        {
            return setString (mReservedField2, v, 3);
        }

        string getReservedField2 ()
        {
            return getString (mReservedField2, 3);
        }

        string toString ()
        {
            stringstream ss;
            ss << "OrderCancelReplaceRequest::"
               << "[ClientOrderID=" << getClientOrderID () << "],"
               << "[OriginalClientOrderID=" << getOriginalClientOrderID () << "],"
               << "[OrderID=" << getOrderID () << "],"
               << "[CommonSymbol=" << getCommonSymbol () << "],"
               << "[ExpireDateTime=" << getExpireDateTime () << "],"
               << "[OrderQty=" << getOrderQty () << "],"
               << "[DisplayQty=" << getDisplayQty () << "],"
               << "[LimitPrice=" << getLimitPrice () << "],"
               << "[Account=" << getAccount () << "],"
               << "[TIF=" << getTIF () << "],"
               << "[Side=" << getSide () << "],"
               << "[ReservedField1=" << getReservedField1 () << "],"
               << "[TargetBook=" << getTargetBook () << "],"
               << "[ExecInstruction=" << getExecInstruction () << "],"
               << "[MinQty=" << getMinQty () << "],"
               << "[PassiveOnlyOrder=" << getPassiveOnlyOrder () << "],"
               << "[ReservedField2=" << getReservedField2 () << "]";
            return ss.str ();
        }
});

} // namespace neueda

#endif
