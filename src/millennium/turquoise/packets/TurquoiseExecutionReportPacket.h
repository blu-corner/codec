/*
 * Copyright 2014-2018 Neueda Ltd.
 * 
 * Generated 21/09/2018
 */
#ifndef TURQUOISE_EXECUTIONREPORT_PACKET_H
#define TURQUOISE_EXECUTIONREPORT_PACKET_H

#include <string>
#include <sstream>
#include <stdint.h>
#include "MillenniumPacketUtils.h"
#include "TurquoiseHeaderPacket.h"

namespace neueda
{

PACKED(class TurquoiseExecutionReport
{
    public:
        TurquoiseHeader mHeader;

        int8_t mAppID;
        int32_t mSequenceNo;
        char mExecutionID[12];
        char mClientOrderID[20];
        char mOrderID[12];
        char mExecType;
        char mExecutionReportRefID[12];
        int8_t mOrderStatus;
        int32_t mOrderRejectCode;
        int64_t mExecutedPrice;
        int32_t mExecutedQty;
        int32_t mLeavesQty;
        int8_t mContainer;
        int32_t mDisplayQty;
        char mCommonSymbol[8];
        int8_t mSide;
        uint64_t mSecondaryOrderID;
        char mCounterParty[11];
        char mTradeLiquidityIndicator;
        uint64_t mTradeMatchID;
        uint32_t mTransactTimeSeconds;
        uint32_t mTransactTimeUsecs;
        int8_t mTargetBook;
        int8_t mTypeOfTrade;
        int8_t mCapacity;
        char mPriceDifferential;
        char mPublicOrderID[12];
        int32_t mMinimumQuantity;
        int8_t mReputationalScore;

        TurquoiseExecutionReport ()
        {
            mHeader.mMessageLength = (int16_t)sizeof (TurquoiseExecutionReport) - ((int16_t)sizeof (TurquoiseHeader) - 1);
            mHeader.mMessageType = '8';

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
            mContainer = 0;
            mDisplayQty = 0;
            memset (mCommonSymbol, '\0', 8);
            mSide = 0;
            mSecondaryOrderID = 0;
            memset (mCounterParty, '\0', 11);
            mTradeMatchID = 0;
            mTransactTimeSeconds = 0;
            mTransactTimeUsecs = 0;
            mTargetBook = 0;
            mTypeOfTrade = 0;
            mCapacity = 0;
            memset (mPublicOrderID, '\0', 12);
            mMinimumQuantity = 0;
            mReputationalScore = 0;
        }

        bool setAppID (int8_t v)
        {
            mAppID = v;
            return true;
        }

        int8_t getAppID ()
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

        bool setContainer (int8_t v)
        {
            mContainer = v;
            return true;
        }

        int8_t getContainer ()
        {
            return mContainer;
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

        bool setSecondaryOrderID (uint64_t v)
        {
            mSecondaryOrderID = v;
            return true;
        }

        uint64_t getSecondaryOrderID ()
        {
            return mSecondaryOrderID;
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

        bool setTypeOfTrade (int8_t v)
        {
            mTypeOfTrade = v;
            return true;
        }

        int8_t getTypeOfTrade ()
        {
            return mTypeOfTrade;
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

        bool setMinimumQuantity (int32_t v)
        {
            mMinimumQuantity = v;
            return true;
        }

        int32_t getMinimumQuantity ()
        {
            return mMinimumQuantity;
        }

        bool setReputationalScore (int8_t v)
        {
            mReputationalScore = v;
            return true;
        }

        int8_t getReputationalScore ()
        {
            return mReputationalScore;
        }

        string toString ()
        {
            stringstream ss;
            ss << "ExecutionReport::"
               << "[AppID=" << getAppID () << "],"
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
               << "[Container=" << getContainer () << "],"
               << "[DisplayQty=" << getDisplayQty () << "],"
               << "[CommonSymbol=" << getCommonSymbol () << "],"
               << "[Side=" << getSide () << "],"
               << "[SecondaryOrderID=" << getSecondaryOrderID () << "],"
               << "[CounterParty=" << getCounterParty () << "],"
               << "[TradeLiquidityIndicator=" << getTradeLiquidityIndicator () << "],"
               << "[TradeMatchID=" << getTradeMatchID () << "],"
               << "[TransactTimeSeconds=" << getTransactTimeSeconds () << "],"
               << "[TransactTimeUsecs=" << getTransactTimeUsecs () << "],"
               << "[TargetBook=" << getTargetBook () << "],"
               << "[TypeOfTrade=" << getTypeOfTrade () << "],"
               << "[Capacity=" << getCapacity () << "],"
               << "[PriceDifferential=" << getPriceDifferential () << "],"
               << "[PublicOrderID=" << getPublicOrderID () << "],"
               << "[MinimumQuantity=" << getMinimumQuantity () << "],"
               << "[ReputationalScore=" << getReputationalScore () << "]";
            return ss.str ();
        }
});

} // namespace neueda

#endif
