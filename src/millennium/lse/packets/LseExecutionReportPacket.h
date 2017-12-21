/*
 * Copyright 2014-2018 Neueda Ltd.
 * 
 * Generated 20/12/2017
 */
#ifndef LSE_EXECUTIONREPORT_PACKET_H
#define LSE_EXECUTIONREPORT_PACKET_H

#include <string>
#include <sstream>
#include <stdint.h>
#include "LsePacketUtils.h"

namespace LsePackets
{

PACKED(class LseExecutionReport
{
    public:
        uint8_t mAppID;
        int32_t mSequenceNo;
        char mExecutionID[12];
        char mClientOrderID[20];
        char mOrderID[12];
        char mExecType;
        char mExecutionReportRefID[12];
        uint8_t mOrderStatus;
        int32_t mOrderRejectCode;
        int64_t mExecutedPrice;
        int32_t mExecutedQty;
        int32_t mLeavesQty;
        uint8_t mWaiverFlags;
        int32_t mDisplayQty;
        int32_t mInstrumentID;
        uint8_t mRestatementReason;
        int8_t mReservedField2;
        int8_t mSide;
        uint64_t mReservedField3;
        char mCounterParty[11];
        char mTradeLiquidityIndicator;
        uint64_t mTradeMatchID;
        uint64_t mTransactTime;
        char mReservedField4;
        uint8_t mTypeOfTrade;
        uint8_t mCapacity;
        char mReservedField5;
        char mPublicOrderID[12];
        int32_t mMinimumQuantity;

        LseExecutionReport ()
        {
            mAppID = 0;
            mSequenceNo = 0;
            memset (mExecutionID, '\0', 12);
            memset (mClientOrderID, '\0', 20);
            memset (mOrderID, '\0', 12);
            memset (mExecutionReportRefID, '\0', 12);
            mOrderStatus = 0;
            mOrderRejectCode = 0;
            mExecutedPrice = 0;
            mExecutedQty = 0;
            mLeavesQty = 0;
            mWaiverFlags = 0;
            mDisplayQty = 0;
            mInstrumentID = 0;
            mRestatementReason = 0;
            mReservedField2 = 0;
            mSide = 0;
            mReservedField3 = 0;
            memset (mCounterParty, '\0', 11);
            mTradeMatchID = 0;
            mTransactTime = 0;
            mTypeOfTrade = 0;
            mCapacity = 0;
            memset (mPublicOrderID, '\0', 12);
            mMinimumQuantity = 0;
        }

        bool setAppID (uint8_t v)
        {
            mAppID = v;
            return true;
        }

        uint8_t getAppID ()
        {
            return mAppID;
        }

        bool setSequenceNo (int32_t v)
        {
            mSequenceNo = v;
            return true;
        }

        int32_t getSequenceNo ()
        {
            return mSequenceNo;
        }

        bool setExecutionID (const string& v)
        {
            return setString (mExecutionID, v, 12);
        }

        string getExecutionID ()
        {
            return getString (mExecutionID, 12);
        }

        bool setClientOrderID (const string& v)
        {
            return setString (mClientOrderID, v, 20);
        }

        string getClientOrderID ()
        {
            return getString (mClientOrderID, 20);
        }

        bool setOrderID (const string& v)
        {
            return setString (mOrderID, v, 12);
        }

        string getOrderID ()
        {
            return getString (mOrderID, 12);
        }

        bool setExecType (char v)
        {
            mExecType = v;
            return true;
        }

        char getExecType ()
        {
            return mExecType;
        }

        bool setExecutionReportRefID (const string& v)
        {
            return setString (mExecutionReportRefID, v, 12);
        }

        string getExecutionReportRefID ()
        {
            return getString (mExecutionReportRefID, 12);
        }

        bool setOrderStatus (uint8_t v)
        {
            mOrderStatus = v;
            return true;
        }

        uint8_t getOrderStatus ()
        {
            return mOrderStatus;
        }

        bool setOrderRejectCode (int32_t v)
        {
            mOrderRejectCode = v;
            return true;
        }

        int32_t getOrderRejectCode ()
        {
            return mOrderRejectCode;
        }

        bool setExecutedPrice (double p)
        {
            mExecutedPrice = p * 100000000;
            return true;
        }

        double getExecutedPrice ()
        {
            return ((double)mExecutedPrice / 100000000);
        }

        bool setExecutedQty (int32_t v)
        {
            mExecutedQty = v;
            return true;
        }

        int32_t getExecutedQty ()
        {
            return mExecutedQty;
        }

        bool setLeavesQty (int32_t v)
        {
            mLeavesQty = v;
            return true;
        }

        int32_t getLeavesQty ()
        {
            return mLeavesQty;
        }

        bool setWaiverFlags (uint8_t v)
        {
            mWaiverFlags = v;
            return true;
        }

        uint8_t getWaiverFlags ()
        {
            return mWaiverFlags;
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

        bool setInstrumentID (int32_t v)
        {
            mInstrumentID = v;
            return true;
        }

        int32_t getInstrumentID ()
        {
            return mInstrumentID;
        }

        bool setRestatementReason (uint8_t v)
        {
            mRestatementReason = v;
            return true;
        }

        uint8_t getRestatementReason ()
        {
            return mRestatementReason;
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

        bool setSide (int8_t v)
        {
            mSide = v;
            return true;
        }

        int8_t getSide ()
        {
            return mSide;
        }

        bool setReservedField3 (uint64_t v)
        {
            mReservedField3 = v;
            return true;
        }

        uint64_t getReservedField3 ()
        {
            return mReservedField3;
        }

        bool setCounterParty (const string& v)
        {
            return setString (mCounterParty, v, 11);
        }

        string getCounterParty ()
        {
            return getString (mCounterParty, 11);
        }

        bool setTradeLiquidityIndicator (char v)
        {
            mTradeLiquidityIndicator = v;
            return true;
        }

        char getTradeLiquidityIndicator ()
        {
            return mTradeLiquidityIndicator;
        }

        bool setTradeMatchID (uint64_t v)
        {
            mTradeMatchID = v;
            return true;
        }

        uint64_t getTradeMatchID ()
        {
            return mTradeMatchID;
        }

        bool setTransactTime (uint64_t v)
        {
            mTransactTime = v;
            return true;
        }

        uint64_t getTransactTime ()
        {
            return mTransactTime;
        }

        bool setReservedField4 (char v)
        {
            mReservedField4 = v;
            return true;
        }

        char getReservedField4 ()
        {
            return mReservedField4;
        }

        bool setTypeOfTrade (uint8_t v)
        {
            mTypeOfTrade = v;
            return true;
        }

        uint8_t getTypeOfTrade ()
        {
            return mTypeOfTrade;
        }

        bool setCapacity (uint8_t v)
        {
            mCapacity = v;
            return true;
        }

        uint8_t getCapacity ()
        {
            return mCapacity;
        }

        bool setReservedField5 (char v)
        {
            mReservedField5 = v;
            return true;
        }

        char getReservedField5 ()
        {
            return mReservedField5;
        }

        bool setPublicOrderID (const string& v)
        {
            return setString (mPublicOrderID, v, 12);
        }

        string getPublicOrderID ()
        {
            return getString (mPublicOrderID, 12);
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
            ss << "ExecutionReport::"
               << "[AppID=" << unsigned(getAppID ()) << "],"
               << "[SequenceNo=" << getSequenceNo () << "],"
               << "[ExecutionID=" << getExecutionID () << "],"
               << "[ClientOrderID=" << getClientOrderID () << "],"
               << "[OrderID=" << getOrderID () << "],"
               << "[ExecType=" << getExecType () << "],"
               << "[ExecutionReportRefID=" << getExecutionReportRefID () << "],"
               << "[OrderStatus=" << unsigned(getOrderStatus ()) << "],"
               << "[OrderRejectCode=" << getOrderRejectCode () << "],"
               << "[ExecutedPrice=" << getExecutedPrice () << "],"
               << "[ExecutedQty=" << getExecutedQty () << "],"
               << "[LeavesQty=" << getLeavesQty () << "],"
               << "[WaiverFlags=" << unsigned(getWaiverFlags ()) << "],"
               << "[DisplayQty=" << getDisplayQty () << "],"
               << "[InstrumentID=" << getInstrumentID () << "],"
               << "[RestatementReason=" << unsigned(getRestatementReason ()) << "],"
               << "[ReservedField2=" << getReservedField2 () << "],"
               << "[Side=" << getSide () << "],"
               << "[ReservedField3=" << getReservedField3 () << "],"
               << "[CounterParty=" << getCounterParty () << "],"
               << "[TradeLiquidityIndicator=" << getTradeLiquidityIndicator () << "],"
               << "[TradeMatchID=" << getTradeMatchID () << "],"
               << "[TransactTime=" << getTransactTime () << "],"
               << "[ReservedField4=" << getReservedField4 () << "],"
               << "[TypeOfTrade=" << unsigned(getTypeOfTrade ()) << "],"
               << "[Capacity=" << unsigned(getCapacity ()) << "],"
               << "[ReservedField5=" << getReservedField5 () << "],"
               << "[PublicOrderID=" << getPublicOrderID () << "],"
               << "[MinimumQuantity=" << getMinimumQuantity () << "]";
            return ss.str ();
        }
});

}

#endif
