/*
 * Copyright 2014-2018 Neueda Ltd.
 * 
 * Generated 21/09/2018
 */
#ifndef OSLO_EXECUTIONREPORT_PACKET_H
#define OSLO_EXECUTIONREPORT_PACKET_H

#include <string>
#include <sstream>
#include <stdint.h>
#include "MillenniumPacketUtils.h"
#include "OsloHeaderPacket.h"

namespace neueda
{

PACKED(class OsloExecutionReport
{
    public:
        OsloHeader mHeader;

        int8_t mPartitionID;
        int32_t mSequenceNo;
        char mExecutionID[12];
        char mClientOrderID[20];
        char mOrderID[12];
        char mExecType;
        char mExecutionReportRefID[12];
        int8_t mOrderStatus;
        int32_t mOrderRejectCode;
        int64_t mExecutedPrice;
        uint64_t mExecutedQty;
        uint64_t mLeavesQty;
        uint8_t mWorkingIndicator;
        uint64_t mDisplayQty;
        int32_t mInstrumentID;
        uint8_t mWaiverFlags;
        int8_t mReservedField;
        int8_t mSide;
        uint64_t mReservedField2;
        char mCounterParty[11];
        char mTradeLiquidityIndicator;
        uint64_t mTradeMatchID;
        uint32_t mTransactTimeSeconds;
        uint32_t mTransactTimeUsecs;
        int8_t mTargetBook;
        int32_t mMinimumQuantity;
        int8_t mReservedField3;
        char mReservedField4[4];
        uint8_t mReservedField5;
        int64_t mAvgPx;
        int64_t mReservedField6;
        char mReservedField7[20];
        uint8_t mTypeOfTrade;
        char mReservedField8[20];
        uint8_t mRestatementReason;
        char mPriceDifferential;
        char mPublicOrderID[12];

        OsloExecutionReport ()
        {
            mHeader.mMessageLength = (int16_t)sizeof (OsloExecutionReport) - ((int16_t)sizeof (OsloHeader) - 1);
            mHeader.mMessageType = '8';

            mPartitionID = 0;
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
            mWorkingIndicator = 0;
            mDisplayQty = 0;
            mInstrumentID = 0;
            mWaiverFlags = 0;
            mReservedField = 0;
            mSide = 0;
            mReservedField2 = 0;
            memset (mCounterParty, '\0', 11);
            mTradeMatchID = 0;
            mTransactTimeSeconds = 0;
            mTransactTimeUsecs = 0;
            mTargetBook = 0;
            mMinimumQuantity = 0;
            mReservedField3 = 0;
            memset (mReservedField4, '\0', 4);
            mReservedField5 = 0;
            mAvgPx = 0;
            mReservedField6 = 0;
            memset (mReservedField7, '\0', 20);
            mTypeOfTrade = 0;
            memset (mReservedField8, '\0', 20);
            mRestatementReason = 0;
            memset (mPublicOrderID, '\0', 12);
        }

        bool setPartitionID (int8_t v)
        {
            mPartitionID = v;
            return true;
        }

        int8_t getPartitionID ()
        {
            return mPartitionID;
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

        bool setOrderStatus (int8_t v)
        {
            mOrderStatus = v;
            return true;
        }

        int8_t getOrderStatus ()
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

        bool setReservedField (int8_t v)
        {
            mReservedField = v;
            return true;
        }

        int8_t getReservedField ()
        {
            return mReservedField;
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

        bool setReservedField2 (uint64_t v)
        {
            mReservedField2 = v;
            return true;
        }

        uint64_t getReservedField2 ()
        {
            return mReservedField2;
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

        bool setTargetBook (int8_t v)
        {
            mTargetBook = v;
            return true;
        }

        int8_t getTargetBook ()
        {
            return mTargetBook;
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

        bool setReservedField4 (const string& v)
        {
            return setString (mReservedField4, v, 4);
        }

        string getReservedField4 ()
        {
            return getString (mReservedField4, 4);
        }

        bool setReservedField5 (uint8_t v)
        {
            mReservedField5 = v;
            return true;
        }

        uint8_t getReservedField5 ()
        {
            return mReservedField5;
        }

        bool setAvgPx (double p)
        {
            mAvgPx = p * 100000000;
            return true;
        }

        double getAvgPx ()
        {
            return ((double)mAvgPx / 100000000);
        }

        bool setReservedField6 (double p)
        {
            mReservedField6 = p * 100000000;
            return true;
        }

        double getReservedField6 ()
        {
            return ((double)mReservedField6 / 100000000);
        }

        bool setReservedField7 (const string& v)
        {
            return setString (mReservedField7, v, 20);
        }

        string getReservedField7 ()
        {
            return getString (mReservedField7, 20);
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

        bool setReservedField8 (const string& v)
        {
            return setString (mReservedField8, v, 20);
        }

        string getReservedField8 ()
        {
            return getString (mReservedField8, 20);
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

        bool setPriceDifferential (char v)
        {
            mPriceDifferential = v;
            return true;
        }

        char getPriceDifferential ()
        {
            return mPriceDifferential;
        }

        bool setPublicOrderID (const string& v)
        {
            return setString (mPublicOrderID, v, 12);
        }

        string getPublicOrderID ()
        {
            return getString (mPublicOrderID, 12);
        }

        string toString ()
        {
            stringstream ss;
            ss << "ExecutionReport::"
               << "[PartitionID=" << getPartitionID () << "],"
               << "[SequenceNo=" << getSequenceNo () << "],"
               << "[ExecutionID=" << getExecutionID () << "],"
               << "[ClientOrderID=" << getClientOrderID () << "],"
               << "[OrderID=" << getOrderID () << "],"
               << "[ExecType=" << getExecType () << "],"
               << "[ExecutionReportRefID=" << getExecutionReportRefID () << "],"
               << "[OrderStatus=" << getOrderStatus () << "],"
               << "[OrderRejectCode=" << getOrderRejectCode () << "],"
               << "[ExecutedPrice=" << getExecutedPrice () << "],"
               << "[ExecutedQty=" << getExecutedQty () << "],"
               << "[LeavesQty=" << getLeavesQty () << "],"
               << "[WorkingIndicator=" << unsigned(getWorkingIndicator ()) << "],"
               << "[DisplayQty=" << getDisplayQty () << "],"
               << "[InstrumentID=" << getInstrumentID () << "],"
               << "[WaiverFlags=" << unsigned(getWaiverFlags ()) << "],"
               << "[ReservedField=" << getReservedField () << "],"
               << "[Side=" << getSide () << "],"
               << "[ReservedField2=" << getReservedField2 () << "],"
               << "[CounterParty=" << getCounterParty () << "],"
               << "[TradeLiquidityIndicator=" << getTradeLiquidityIndicator () << "],"
               << "[TradeMatchID=" << getTradeMatchID () << "],"
               << "[TransactTimeSeconds=" << getTransactTimeSeconds () << "],"
               << "[TransactTimeUsecs=" << getTransactTimeUsecs () << "],"
               << "[TargetBook=" << getTargetBook () << "],"
               << "[MinimumQuantity=" << getMinimumQuantity () << "],"
               << "[ReservedField3=" << getReservedField3 () << "],"
               << "[ReservedField4=" << getReservedField4 () << "],"
               << "[ReservedField5=" << unsigned(getReservedField5 ()) << "],"
               << "[AvgPx=" << getAvgPx () << "],"
               << "[ReservedField6=" << getReservedField6 () << "],"
               << "[ReservedField7=" << getReservedField7 () << "],"
               << "[TypeOfTrade=" << unsigned(getTypeOfTrade ()) << "],"
               << "[ReservedField8=" << getReservedField8 () << "],"
               << "[RestatementReason=" << unsigned(getRestatementReason ()) << "],"
               << "[PriceDifferential=" << getPriceDifferential () << "],"
               << "[PublicOrderID=" << getPublicOrderID () << "]";
            return ss.str ();
        }
});

} // namespace neueda

#endif
