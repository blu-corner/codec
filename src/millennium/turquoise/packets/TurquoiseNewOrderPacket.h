/*
 * Copyright 2014-2018 Neueda Ltd.
 * 
 * Generated 21/09/2018
 */
#ifndef TURQUOISE_NEWORDER_PACKET_H
#define TURQUOISE_NEWORDER_PACKET_H

#include <string>
#include <sstream>
#include <stdint.h>
#include "MillenniumPacketUtils.h"
#include "TurquoiseHeaderPacket.h"

namespace neueda
{

PACKED(class TurquoiseNewOrder
{
    public:
        TurquoiseHeader mHeader;

        char mClientOrderID[20];
        char mTraderID[11];
        char mAccount[10];
        int8_t mClearingAccount;
        char mCommonSymbol[8];
        int8_t mOrderType;
        int8_t mTIF;
        uint32_t mExpireDateTime;
        int8_t mSide;
        int32_t mOrderQty;
        int32_t mDisplayQty;
        int64_t mLimitPrice;
        int8_t mCapacity;
        int8_t mAutoCancel;
        int8_t mOrderSubType;
        int8_t mReservedField1;
        int64_t mReservedField2;
        int8_t mTargetBook;
        int8_t mExecInstruction;
        int32_t mMinimumQuantity;
        int8_t mReservedField3;
        int8_t mReservedField4;
        int8_t mReservedField5;
        int8_t mPassiveOnlyOrder;
        char mCIOrdLinkID[12];

        TurquoiseNewOrder ()
        {
            mHeader.mMessageLength = (int16_t)sizeof (TurquoiseNewOrder) - ((int16_t)sizeof (TurquoiseHeader) - 1);
            mHeader.mMessageType = 'D';

            memset (mClientOrderID, '\0', 20);
            memset (mTraderID, '\0', 11);
            memset (mAccount, '\0', 10);
            mClearingAccount = 1;
            memset (mCommonSymbol, '\0', 8);
            mOrderType = 0;
            mTIF = 0;
            mExpireDateTime = 0;
            mSide = 0;
            mOrderQty = 0;
            mDisplayQty = 0;
            mLimitPrice = 0;
            mCapacity = 0;
            mAutoCancel = 0;
            mOrderSubType = 0;
            mReservedField1 = 0;
            mReservedField2 = 0;
            mTargetBook = 0;
            mExecInstruction = 0;
            mMinimumQuantity = 0;
            mReservedField3 = 0;
            mReservedField4 = 0;
            mReservedField5 = 0;
            mPassiveOnlyOrder = 0;
            memset (mCIOrdLinkID, '\0', 12);
        }

        bool setClientOrderID (const string& v)
        {
            return setString (mClientOrderID, v, 20);
        }

        string getClientOrderID ()
        {
            return getString (mClientOrderID, 20);
        }

        bool setTraderID (const string& v)
        {
            return setString (mTraderID, v, 11);
        }

        string getTraderID ()
        {
            return getString (mTraderID, 11);
        }

        bool setAccount (const string& v)
        {
            return setString (mAccount, v, 10);
        }

        string getAccount ()
        {
            return getString (mAccount, 10);
        }

        bool setClearingAccount (int8_t v)
        {
            mClearingAccount = v;
            return true;
        }

        int8_t getClearingAccount ()
        {
            return mClearingAccount;
        }

        bool setCommonSymbol (const string& v)
        {
            return setString (mCommonSymbol, v, 8);
        }

        string getCommonSymbol ()
        {
            return getString (mCommonSymbol, 8);
        }

        bool setOrderType (int8_t v)
        {
            mOrderType = v;
            return true;
        }

        int8_t getOrderType ()
        {
            return mOrderType;
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

        bool setExpireDateTime (uint32_t v)
        {
            mExpireDateTime = v;
            return true;
        }

        uint32_t getExpireDateTime ()
        {
            return mExpireDateTime;
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

        bool setCapacity (int8_t v)
        {
            mCapacity = v;
            return true;
        }

        int8_t getCapacity ()
        {
            return mCapacity;
        }

        bool setAutoCancel (int8_t v)
        {
            mAutoCancel = v;
            return true;
        }

        int8_t getAutoCancel ()
        {
            return mAutoCancel;
        }

        bool setOrderSubType (int8_t v)
        {
            mOrderSubType = v;
            return true;
        }

        int8_t getOrderSubType ()
        {
            return mOrderSubType;
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

        bool setReservedField2 (double p)
        {
            mReservedField2 = p * 100000000;
            return true;
        }

        double getReservedField2 ()
        {
            return ((double)mReservedField2 / 100000000);
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

        bool setMinimumQuantity (int32_t v)
        {
            mMinimumQuantity = v;
            return true;
        }

        int32_t getMinimumQuantity ()
        {
            return mMinimumQuantity;
        }

        bool setReservedField3 (int8_t v)
        {
            mReservedField3 = v;
            return true;
        }

        int8_t getReservedField3 ()
        {
            return mReservedField3;
        }

        bool setReservedField4 (int8_t v)
        {
            mReservedField4 = v;
            return true;
        }

        int8_t getReservedField4 ()
        {
            return mReservedField4;
        }

        bool setReservedField5 (int8_t v)
        {
            mReservedField5 = v;
            return true;
        }

        int8_t getReservedField5 ()
        {
            return mReservedField5;
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

        bool setCIOrdLinkID (const string& v)
        {
            return setString (mCIOrdLinkID, v, 12);
        }

        string getCIOrdLinkID ()
        {
            return getString (mCIOrdLinkID, 12);
        }

        string toString ()
        {
            stringstream ss;
            ss << "NewOrder::"
               << "[ClientOrderID=" << getClientOrderID () << "],"
               << "[TraderID=" << getTraderID () << "],"
               << "[Account=" << getAccount () << "],"
               << "[ClearingAccount=" << getClearingAccount () << "],"
               << "[CommonSymbol=" << getCommonSymbol () << "],"
               << "[OrderType=" << getOrderType () << "],"
               << "[TIF=" << getTIF () << "],"
               << "[ExpireDateTime=" << getExpireDateTime () << "],"
               << "[Side=" << getSide () << "],"
               << "[OrderQty=" << getOrderQty () << "],"
               << "[DisplayQty=" << getDisplayQty () << "],"
               << "[LimitPrice=" << getLimitPrice () << "],"
               << "[Capacity=" << getCapacity () << "],"
               << "[AutoCancel=" << getAutoCancel () << "],"
               << "[OrderSubType=" << getOrderSubType () << "],"
               << "[ReservedField1=" << getReservedField1 () << "],"
               << "[ReservedField2=" << getReservedField2 () << "],"
               << "[TargetBook=" << getTargetBook () << "],"
               << "[ExecInstruction=" << getExecInstruction () << "],"
               << "[MinimumQuantity=" << getMinimumQuantity () << "],"
               << "[ReservedField3=" << getReservedField3 () << "],"
               << "[ReservedField4=" << getReservedField4 () << "],"
               << "[ReservedField5=" << getReservedField5 () << "],"
               << "[PassiveOnlyOrder=" << getPassiveOnlyOrder () << "],"
               << "[CIOrdLinkID=" << getCIOrdLinkID () << "]";
            return ss.str ();
        }
});

} // namespace neueda

#endif
