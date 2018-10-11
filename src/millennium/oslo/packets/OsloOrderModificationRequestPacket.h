/*
 * Copyright 2014-2018 Neueda Ltd.
 * 
 * Generated 21/09/2018
 */
#ifndef OSLO_ORDERMODIFICATIONREQUEST_PACKET_H
#define OSLO_ORDERMODIFICATIONREQUEST_PACKET_H

#include <string>
#include <sstream>
#include <stdint.h>
#include "MillenniumPacketUtils.h"
#include "OsloHeaderPacket.h"

namespace neueda
{

PACKED(class OsloOrderModificationRequest
{
    public:
        OsloHeader mHeader;

        char mClientOrderID[20];
        char mOriginalClientOrderID[20];
        char mOrderID[12];
        int32_t mInstrumentID;
        int8_t mReservedField1;
        int8_t mReservedField2;
        uint32_t mExpireDateTime;
        uint64_t mOrderQty;
        uint64_t mDisplayQty;
        int64_t mLimitPrice;
        char mAccount[10];
        uint8_t mReservedField3;
        int8_t mSide;
        int8_t mTargetBook;
        int8_t mExecInstruction;
        int32_t mMinimumQuantity;
        int16_t mReservedField4;
        char mReservedField5[10];
        int8_t mPassiveOnlyOrder;

        OsloOrderModificationRequest ()
        {
            mHeader.mMessageLength = (int16_t)sizeof (OsloOrderModificationRequest) - ((int16_t)sizeof (OsloHeader) - 1);
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
            mTargetBook = 0;
            mExecInstruction = 0;
            mMinimumQuantity = 0;
            mReservedField4 = 0;
            memset (mReservedField5, '\0', 10);
            mPassiveOnlyOrder = 0;
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

        bool setOrderQty (uint64_t v)
        {
            mOrderQty = v;
            return true;
        }

        uint64_t getOrderQty ()
        {
            return mOrderQty;
        }

        bool setDisplayQty (uint64_t v)
        {
            mDisplayQty = v;
            return true;
        }

        uint64_t getDisplayQty ()
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

        bool setReservedField4 (int16_t v)
        {
            mReservedField4 = v;
            return true;
        }

        int16_t getReservedField4 ()
        {
            return mReservedField4;
        }

        bool setReservedField5 (const string& v)
        {
            return setString (mReservedField5, v, 10);
        }

        string getReservedField5 ()
        {
            return getString (mReservedField5, 10);
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

        string toString ()
        {
            stringstream ss;
            ss << "OrderModificationRequest::"
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
               << "[TargetBook=" << getTargetBook () << "],"
               << "[ExecInstruction=" << getExecInstruction () << "],"
               << "[MinimumQuantity=" << getMinimumQuantity () << "],"
               << "[ReservedField4=" << getReservedField4 () << "],"
               << "[ReservedField5=" << getReservedField5 () << "],"
               << "[PassiveOnlyOrder=" << getPassiveOnlyOrder () << "]";
            return ss.str ();
        }
});

} // namespace neueda

#endif
