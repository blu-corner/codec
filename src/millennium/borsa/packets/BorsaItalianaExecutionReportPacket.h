/*
 * Copyright 2014-2018 Neueda Ltd.
 * 
 * Generated 21/09/2018
 */
#ifndef BORSAITALIANA_EXECUTIONREPORT_PACKET_H
#define BORSAITALIANA_EXECUTIONREPORT_PACKET_H

#include <string>
#include <sstream>
#include <stdint.h>
#include "MillenniumPacketUtils.h"
#include "BorsaItalianaHeaderPacket.h"

namespace neueda
{

PACKED(class BorsaItalianaExecutionReport
{
    public:
        BorsaItalianaHeader mHeader;

        uint8_t mAppID;
        int32_t mSequenceNo;
        char mExecutionID[12];
        char mClientOrderID[20];
        char mOrderID[12];
        char mExecType[1];
        char mExecutionReportRefID[12];
        uint8_t mOrderStatus;
        int32_t mOrderRejectCode;
        int64_t mExecutedPrice;
        uint64_t mExecutedQty;
        uint64_t mLeavesQty;
        uint8_t mWorkingIndicator;
        uint64_t mDisplayQty;
        int32_t mInstrumentID;
        uint8_t mWaiverFlags;
        int8_t mReservedforfutureuse1;
        uint8_t mSide;
        uint64_t mReservedforfutureuse2;
        char mCounterparty[11];
        char mTradeLiquidityIndicator[1];
        uint64_t mTradeMatchID;
        uint32_t mTransactTimeSeconds;
        uint32_t mTransactTimeUsecs;
        uint64_t mReservedfield1;
        char mReservedfield2[2];
        uint8_t mOrderSource;
        int64_t mAvgPx;
        int64_t mImpliedPrice;
        char mCrossID[20];
        uint8_t mCrossType;
        char mOriginalCrossID[20];
        uint8_t mResatementReason;
        char mPublicOrderID[12];
        uint8_t mTypeOfTrade;

        BorsaItalianaExecutionReport ()
        {
            mHeader.mMessageLength = (int16_t)sizeof (BorsaItalianaExecutionReport) - ((int16_t)sizeof (BorsaItalianaHeader) - 1);
            mHeader.mMessageType = '8';

            mAppID = 0;
            mSequenceNo = 0;
            memset (mExecutionID, '\0', 12);
            memset (mClientOrderID, '\0', 20);
            memset (mOrderID, '\0', 12);
            memset (mExecType, '\0', 1);
            memset (mExecutionReportRefID, '\0', 12);
            mOrderStatus = 0;
            mOrderRejectCode = 0;
            mExecutedPrice = 0;
            mExecutedQty = 0;
            mLeavesQty = 0;
            mWorkingIndicator = 0;
            mDisplayQty = 0;
            mInstrumentID = 0;
            mWaiverFlags = 0;
            mReservedforfutureuse1 = 0;
            mSide = 0;
            mReservedforfutureuse2 = 0;
            memset (mCounterparty, '\0', 11);
            memset (mTradeLiquidityIndicator, '\0', 1);
            mTradeMatchID = 0;
            mTransactTimeSeconds = 0;
            mTransactTimeUsecs = 0;
            mReservedfield1 = 0;
            memset (mReservedfield2, '\0', 2);
            mOrderSource = 0;
            mAvgPx = 0;
            mImpliedPrice = 0;
            memset (mCrossID, '\0', 20);
            mCrossType = 0;
            memset (mOriginalCrossID, '\0', 20);
            mResatementReason = 0;
            memset (mPublicOrderID, '\0', 12);
            mTypeOfTrade = 0;
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

        bool setExecType (const string& v)
        {
            return setString (mExecType, v, 1);
        }

        string getExecType ()
        {
            return getString (mExecType, 1);
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

        bool setExecutedPrice (int64_t v)
        {
            mExecutedPrice = v;
            return true;
        }

        int64_t getExecutedPrice ()
        {
            return mExecutedPrice;
        }

        bool setExecutedQty (uint64_t v)
        {
            mExecutedQty = v;
            return true;
        }

        uint64_t getExecutedQty ()
        {
            return mExecutedQty;
        }

        bool setLeavesQty (uint64_t v)
        {
            mLeavesQty = v;
            return true;
        }

        uint64_t getLeavesQty ()
        {
            return mLeavesQty;
        }

        bool setWorkingIndicator (uint8_t v)
        {
            mWorkingIndicator = v;
            return true;
        }

        uint8_t getWorkingIndicator ()
        {
            return mWorkingIndicator;
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

        bool setInstrumentID (int32_t v)
        {
            mInstrumentID = v;
            return true;
        }

        int32_t getInstrumentID ()
        {
            return mInstrumentID;
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

        bool setReservedforfutureuse1 (int8_t v)
        {
            mReservedforfutureuse1 = v;
            return true;
        }

        int8_t getReservedforfutureuse1 ()
        {
            return mReservedforfutureuse1;
        }

        bool setSide (uint8_t v)
        {
            mSide = v;
            return true;
        }

        uint8_t getSide ()
        {
            return mSide;
        }

        bool setReservedforfutureuse2 (uint64_t v)
        {
            mReservedforfutureuse2 = v;
            return true;
        }

        uint64_t getReservedforfutureuse2 ()
        {
            return mReservedforfutureuse2;
        }

        bool setCounterparty (const string& v)
        {
            return setString (mCounterparty, v, 11);
        }

        string getCounterparty ()
        {
            return getString (mCounterparty, 11);
        }

        bool setTradeLiquidityIndicator (const string& v)
        {
            return setString (mTradeLiquidityIndicator, v, 1);
        }

        string getTradeLiquidityIndicator ()
        {
            return getString (mTradeLiquidityIndicator, 1);
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

        bool setTransactTimeSeconds (uint32_t v)
        {
            mTransactTimeSeconds = v;
            return true;
        }

        uint32_t getTransactTimeSeconds ()
        {
            return mTransactTimeSeconds;
        }

        bool setTransactTimeUsecs (uint32_t v)
        {
            mTransactTimeUsecs = v;
            return true;
        }

        uint32_t getTransactTimeUsecs ()
        {
            return mTransactTimeUsecs;
        }

        bool setReservedfield1 (uint64_t v)
        {
            mReservedfield1 = v;
            return true;
        }

        uint64_t getReservedfield1 ()
        {
            return mReservedfield1;
        }

        bool setReservedfield2 (const string& v)
        {
            return setString (mReservedfield2, v, 2);
        }

        string getReservedfield2 ()
        {
            return getString (mReservedfield2, 2);
        }

        bool setOrderSource (uint8_t v)
        {
            mOrderSource = v;
            return true;
        }

        uint8_t getOrderSource ()
        {
            return mOrderSource;
        }

        bool setAvgPx (int64_t v)
        {
            mAvgPx = v;
            return true;
        }

        int64_t getAvgPx ()
        {
            return mAvgPx;
        }

        bool setImpliedPrice (int64_t v)
        {
            mImpliedPrice = v;
            return true;
        }

        int64_t getImpliedPrice ()
        {
            return mImpliedPrice;
        }

        bool setCrossID (const string& v)
        {
            return setString (mCrossID, v, 20);
        }

        string getCrossID ()
        {
            return getString (mCrossID, 20);
        }

        bool setCrossType (uint8_t v)
        {
            mCrossType = v;
            return true;
        }

        uint8_t getCrossType ()
        {
            return mCrossType;
        }

        bool setOriginalCrossID (const string& v)
        {
            return setString (mOriginalCrossID, v, 20);
        }

        string getOriginalCrossID ()
        {
            return getString (mOriginalCrossID, 20);
        }

        bool setResatementReason (uint8_t v)
        {
            mResatementReason = v;
            return true;
        }

        uint8_t getResatementReason ()
        {
            return mResatementReason;
        }

        bool setPublicOrderID (const string& v)
        {
            return setString (mPublicOrderID, v, 12);
        }

        string getPublicOrderID ()
        {
            return getString (mPublicOrderID, 12);
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
               << "[WorkingIndicator=" << unsigned(getWorkingIndicator ()) << "],"
               << "[DisplayQty=" << getDisplayQty () << "],"
               << "[InstrumentID=" << getInstrumentID () << "],"
               << "[WaiverFlags=" << unsigned(getWaiverFlags ()) << "],"
               << "[Reservedforfutureuse1=" << getReservedforfutureuse1 () << "],"
               << "[Side=" << unsigned(getSide ()) << "],"
               << "[Reservedforfutureuse2=" << getReservedforfutureuse2 () << "],"
               << "[Counterparty=" << getCounterparty () << "],"
               << "[TradeLiquidityIndicator=" << getTradeLiquidityIndicator () << "],"
               << "[TradeMatchID=" << getTradeMatchID () << "],"
               << "[TransactTimeSeconds=" << getTransactTimeSeconds () << "],"
               << "[TransactTimeUsecs=" << getTransactTimeUsecs () << "],"
               << "[Reservedfield1=" << getReservedfield1 () << "],"
               << "[Reservedfield2=" << getReservedfield2 () << "],"
               << "[OrderSource=" << unsigned(getOrderSource ()) << "],"
               << "[AvgPx=" << getAvgPx () << "],"
               << "[ImpliedPrice=" << getImpliedPrice () << "],"
               << "[CrossID=" << getCrossID () << "],"
               << "[CrossType=" << unsigned(getCrossType ()) << "],"
               << "[OriginalCrossID=" << getOriginalCrossID () << "],"
               << "[ResatementReason=" << unsigned(getResatementReason ()) << "],"
               << "[PublicOrderID=" << getPublicOrderID () << "],"
               << "[TypeOfTrade=" << unsigned(getTypeOfTrade ()) << "]";
            return ss.str ();
        }
});

} // namespace neueda

#endif
