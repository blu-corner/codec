/*
 * Copyright 2014-2018 Neueda Ltd.
 * 
 * Generated 21/05/2019
 */
#ifndef EUREX_ORDEREXECRESPONSE_PACKET_H
#define EUREX_ORDEREXECRESPONSE_PACKET_H

#include <string>
#include <vector>
#include <sstream>
#include <cstddef>
#include <stdint.h>
#include "eurexPackets.h"
#include "EtiPacketUtils.h"

namespace neueda
{

using namespace std;

class eurexOrderExecResponsePacket
{
    public:
        // no value constants
        static const uint64_t ORDER_ID_MIN;
        static const uint64_t ORDER_ID_MAX;
        static const uint64_t ORDER_ID_NO_VALUE;
        static const uint64_t CL_ORD_ID_MIN;
        static const uint64_t CL_ORD_ID_MAX;
        static const uint64_t CL_ORD_ID_NO_VALUE;
        static const uint64_t ORIG_CL_ORD_ID_MIN;
        static const uint64_t ORIG_CL_ORD_ID_MAX;
        static const uint64_t ORIG_CL_ORD_ID_NO_VALUE;
        static const int64_t SECURITY_ID_MIN;
        static const int64_t SECURITY_ID_MAX;
        static const int64_t SECURITY_ID_NO_VALUE;
        static const uint64_t EXEC_ID_MIN;
        static const uint64_t EXEC_ID_MAX;
        static const uint64_t EXEC_ID_NO_VALUE;
        static const uint64_t TRD_REG_TSENTRY_TIME_MIN;
        static const uint64_t TRD_REG_TSENTRY_TIME_MAX;
        static const uint64_t TRD_REG_TSENTRY_TIME_NO_VALUE;
        static const uint64_t TRD_REG_TSTIME_PRIORITY_MIN;
        static const uint64_t TRD_REG_TSTIME_PRIORITY_MAX;
        static const uint64_t TRD_REG_TSTIME_PRIORITY_NO_VALUE;
        static const double LEAVES_QTY_MIN;
        static const double LEAVES_QTY_MAX;
        static const int64_t LEAVES_QTY_NO_VALUE;
        static const double CUM_QTY_MIN;
        static const double CUM_QTY_MAX;
        static const int64_t CUM_QTY_NO_VALUE;
        static const double CXL_QTY_MIN;
        static const double CXL_QTY_MAX;
        static const int64_t CXL_QTY_NO_VALUE;
        static const int32_t MARKET_SEGMENT_ID_MIN;
        static const int32_t MARKET_SEGMENT_ID_MAX;
        static const int32_t MARKET_SEGMENT_ID_NO_VALUE;
        static const int16_t NO_LEG_EXECS_MIN;
        static const int16_t NO_LEG_EXECS_MAX;
        static const int16_t NO_LEG_EXECS_NO_VALUE;
        static const int16_t EXEC_RESTATEMENT_REASON_MIN;
        static const int16_t EXEC_RESTATEMENT_REASON_MAX;
        static const int16_t EXEC_RESTATEMENT_REASON_NO_VALUE;
        static const int8_t SIDE_MIN;
        static const int8_t SIDE_MAX;
        static const int8_t SIDE_NO_VALUE;
        static const int8_t PRODUCT_COMPLEX_MIN;
        static const int8_t PRODUCT_COMPLEX_MAX;
        static const int8_t PRODUCT_COMPLEX_NO_VALUE;
        static const char ORD_STATUS_NO_VALUE[1];
        static const size_t ORD_STATUS_MAX_LENGTH;
        static const char EXEC_TYPE_NO_VALUE[1];
        static const size_t EXEC_TYPE_MAX_LENGTH;
        static const int8_t TRIGGERED_MIN;
        static const int8_t TRIGGERED_MAX;
        static const int8_t TRIGGERED_NO_VALUE;
        static const int8_t CROSSED_INDICATOR_MIN;
        static const int8_t CROSSED_INDICATOR_MAX;
        static const int8_t CROSSED_INDICATOR_NO_VALUE;
        static const int8_t TRANSACTION_DELAY_INDICATOR_MIN;
        static const int8_t TRANSACTION_DELAY_INDICATOR_MAX;
        static const int8_t TRANSACTION_DELAY_INDICATOR_NO_VALUE;
        static const int8_t NO_FILLS_MIN;
        static const int8_t NO_FILLS_MAX;
        static const int8_t NO_FILLS_NO_VALUE;
        static const size_t FILLS_GRP_MIN;
        static const size_t FILLS_GRP_MAX;
        static const size_t INSTRMNT_LEG_EXEC_GRP_MIN;
        static const size_t INSTRMNT_LEG_EXEC_GRP_MAX;

        // fields (use with care)
        eurexMessageHeaderOutCompPacket mMessageHeaderOut;
        eurexResponseHeaderMECompPacket mResponseHeaderME;
        uint64_t mOrderID;
        uint64_t mClOrdID;
        uint64_t mOrigClOrdID;
        int64_t mSecurityID;
        uint64_t mExecID;
        uint64_t mTrdRegTSEntryTime;
        uint64_t mTrdRegTSTimePriority;
        int64_t mLeavesQty;
        int64_t mCumQty;
        int64_t mCxlQty;
        int32_t mMarketSegmentID;
        int16_t mNoLegExecs;
        int16_t mExecRestatementReason;
        int8_t mSide;
        int8_t mProductComplex;
        char mOrdStatus[1];
        char mExecType[1];
        int8_t mTriggered;
        int8_t mCrossedIndicator;
        int8_t mTransactionDelayIndicator;
        int8_t mNoFills;
        vector<eurexFillsGrpCompPacket> mFillsGrp;
        vector<eurexInstrmntLegExecGrpCompPacket> mInstrmntLegExecGrp;

        // constructor
        eurexOrderExecResponsePacket ()
        {
            mMessageHeaderOut.mTemplateID = 10103;
            mOrderID = ORDER_ID_NO_VALUE;
            mClOrdID = CL_ORD_ID_NO_VALUE;
            mOrigClOrdID = ORIG_CL_ORD_ID_NO_VALUE;
            mSecurityID = SECURITY_ID_NO_VALUE;
            mExecID = EXEC_ID_NO_VALUE;
            mTrdRegTSEntryTime = TRD_REG_TSENTRY_TIME_NO_VALUE;
            mTrdRegTSTimePriority = TRD_REG_TSTIME_PRIORITY_NO_VALUE;
            mLeavesQty = LEAVES_QTY_NO_VALUE;
            mCumQty = CUM_QTY_NO_VALUE;
            mCxlQty = CXL_QTY_NO_VALUE;
            mMarketSegmentID = MARKET_SEGMENT_ID_NO_VALUE;
            mNoLegExecs = NO_LEG_EXECS_NO_VALUE;
            mExecRestatementReason = EXEC_RESTATEMENT_REASON_NO_VALUE;
            mSide = SIDE_NO_VALUE;
            mProductComplex = PRODUCT_COMPLEX_NO_VALUE;
            memcpy(mOrdStatus, ORD_STATUS_NO_VALUE, sizeof (mOrdStatus));
            memcpy(mExecType, EXEC_TYPE_NO_VALUE, sizeof (mExecType));
            mTriggered = TRIGGERED_NO_VALUE;
            mCrossedIndicator = CROSSED_INDICATOR_NO_VALUE;
            mTransactionDelayIndicator = TRANSACTION_DELAY_INDICATOR_NO_VALUE;
            mNoFills = NO_FILLS_NO_VALUE;
        }

        // getters & setters
        const eurexMessageHeaderOutCompPacket& getMessageHeaderOut () const
        {
            return mMessageHeaderOut;
        }

        bool setMessageHeaderOut (const eurexMessageHeaderOutCompPacket& v)
        {
            mMessageHeaderOut = v;
            return true;
        }

        const eurexResponseHeaderMECompPacket& getResponseHeaderME () const
        {
            return mResponseHeaderME;
        }

        bool setResponseHeaderME (const eurexResponseHeaderMECompPacket& v)
        {
            mResponseHeaderME = v;
            return true;
        }

        uint64_t getOrderID () const
        {
            return mOrderID;
        }

        bool setOrderID (uint64_t v)
        {
            mOrderID = v;
            return ((ORDER_ID_MIN <= mOrderID && mOrderID <= ORDER_ID_MAX) || mOrderID == ORDER_ID_NO_VALUE);
        }

        bool isOrderIDValid () const
        {
            return (mOrderID != ORDER_ID_NO_VALUE);
        }

        void resetOrderID ()
        {
            mOrderID = ORDER_ID_NO_VALUE;
        }

        uint64_t getClOrdID () const
        {
            return mClOrdID;
        }

        bool setClOrdID (uint64_t v)
        {
            mClOrdID = v;
            return ((CL_ORD_ID_MIN <= mClOrdID && mClOrdID <= CL_ORD_ID_MAX) || mClOrdID == CL_ORD_ID_NO_VALUE);
        }

        bool isClOrdIDValid () const
        {
            return (mClOrdID != CL_ORD_ID_NO_VALUE);
        }

        void resetClOrdID ()
        {
            mClOrdID = CL_ORD_ID_NO_VALUE;
        }

        uint64_t getOrigClOrdID () const
        {
            return mOrigClOrdID;
        }

        bool setOrigClOrdID (uint64_t v)
        {
            mOrigClOrdID = v;
            return ((ORIG_CL_ORD_ID_MIN <= mOrigClOrdID && mOrigClOrdID <= ORIG_CL_ORD_ID_MAX) || mOrigClOrdID == ORIG_CL_ORD_ID_NO_VALUE);
        }

        bool isOrigClOrdIDValid () const
        {
            return (mOrigClOrdID != ORIG_CL_ORD_ID_NO_VALUE);
        }

        void resetOrigClOrdID ()
        {
            mOrigClOrdID = ORIG_CL_ORD_ID_NO_VALUE;
        }

        int64_t getSecurityID () const
        {
            return mSecurityID;
        }

        bool setSecurityID (int64_t v)
        {
            mSecurityID = v;
            return ((SECURITY_ID_MIN <= mSecurityID && mSecurityID <= SECURITY_ID_MAX) || mSecurityID == SECURITY_ID_NO_VALUE);
        }

        bool isSecurityIDValid () const
        {
            return (mSecurityID != SECURITY_ID_NO_VALUE);
        }

        void resetSecurityID ()
        {
            mSecurityID = SECURITY_ID_NO_VALUE;
        }

        uint64_t getExecID () const
        {
            return mExecID;
        }

        bool setExecID (uint64_t v)
        {
            mExecID = v;
            return ((EXEC_ID_MIN <= mExecID && mExecID <= EXEC_ID_MAX) || mExecID == EXEC_ID_NO_VALUE);
        }

        bool isExecIDValid () const
        {
            return (mExecID != EXEC_ID_NO_VALUE);
        }

        void resetExecID ()
        {
            mExecID = EXEC_ID_NO_VALUE;
        }

        uint64_t getTrdRegTSEntryTime () const
        {
            return mTrdRegTSEntryTime;
        }

        bool setTrdRegTSEntryTime (uint64_t v)
        {
            mTrdRegTSEntryTime = v;
            return ((TRD_REG_TSENTRY_TIME_MIN <= mTrdRegTSEntryTime && mTrdRegTSEntryTime <= TRD_REG_TSENTRY_TIME_MAX) || mTrdRegTSEntryTime == TRD_REG_TSENTRY_TIME_NO_VALUE);
        }

        bool isTrdRegTSEntryTimeValid () const
        {
            return (mTrdRegTSEntryTime != TRD_REG_TSENTRY_TIME_NO_VALUE);
        }

        void resetTrdRegTSEntryTime ()
        {
            mTrdRegTSEntryTime = TRD_REG_TSENTRY_TIME_NO_VALUE;
        }

        uint64_t getTrdRegTSTimePriority () const
        {
            return mTrdRegTSTimePriority;
        }

        bool setTrdRegTSTimePriority (uint64_t v)
        {
            mTrdRegTSTimePriority = v;
            return ((TRD_REG_TSTIME_PRIORITY_MIN <= mTrdRegTSTimePriority && mTrdRegTSTimePriority <= TRD_REG_TSTIME_PRIORITY_MAX) || mTrdRegTSTimePriority == TRD_REG_TSTIME_PRIORITY_NO_VALUE);
        }

        bool isTrdRegTSTimePriorityValid () const
        {
            return (mTrdRegTSTimePriority != TRD_REG_TSTIME_PRIORITY_NO_VALUE);
        }

        void resetTrdRegTSTimePriority ()
        {
            mTrdRegTSTimePriority = TRD_REG_TSTIME_PRIORITY_NO_VALUE;
        }

        double getLeavesQty () const
        {
            return mLeavesQty / 10000.0;
        }

        bool setLeavesQty (double v)
        {
            mLeavesQty = v * 10000.0;
            return ((LEAVES_QTY_MIN <= v && v <= LEAVES_QTY_MAX) || mLeavesQty == LEAVES_QTY_NO_VALUE);
        }

        bool isLeavesQtyValid () const
        {
            return (mLeavesQty != LEAVES_QTY_NO_VALUE);
        }

        void resetLeavesQty ()
        {
            mLeavesQty = LEAVES_QTY_NO_VALUE;
        }

        double getCumQty () const
        {
            return mCumQty / 10000.0;
        }

        bool setCumQty (double v)
        {
            mCumQty = v * 10000.0;
            return ((CUM_QTY_MIN <= v && v <= CUM_QTY_MAX) || mCumQty == CUM_QTY_NO_VALUE);
        }

        bool isCumQtyValid () const
        {
            return (mCumQty != CUM_QTY_NO_VALUE);
        }

        void resetCumQty ()
        {
            mCumQty = CUM_QTY_NO_VALUE;
        }

        double getCxlQty () const
        {
            return mCxlQty / 10000.0;
        }

        bool setCxlQty (double v)
        {
            mCxlQty = v * 10000.0;
            return ((CXL_QTY_MIN <= v && v <= CXL_QTY_MAX) || mCxlQty == CXL_QTY_NO_VALUE);
        }

        bool isCxlQtyValid () const
        {
            return (mCxlQty != CXL_QTY_NO_VALUE);
        }

        void resetCxlQty ()
        {
            mCxlQty = CXL_QTY_NO_VALUE;
        }

        int32_t getMarketSegmentID () const
        {
            return mMarketSegmentID;
        }

        bool setMarketSegmentID (int32_t v)
        {
            mMarketSegmentID = v;
            return ((MARKET_SEGMENT_ID_MIN <= mMarketSegmentID && mMarketSegmentID <= MARKET_SEGMENT_ID_MAX) || mMarketSegmentID == MARKET_SEGMENT_ID_NO_VALUE);
        }

        bool isMarketSegmentIDValid () const
        {
            return (mMarketSegmentID != MARKET_SEGMENT_ID_NO_VALUE);
        }

        void resetMarketSegmentID ()
        {
            mMarketSegmentID = MARKET_SEGMENT_ID_NO_VALUE;
        }

        int16_t getNoLegExecs () const
        {
            return mNoLegExecs;
        }

        bool setNoLegExecs (int16_t v)
        {
            mNoLegExecs = v;
            return ((NO_LEG_EXECS_MIN <= mNoLegExecs && mNoLegExecs <= NO_LEG_EXECS_MAX) || mNoLegExecs == NO_LEG_EXECS_NO_VALUE);
        }

        bool isNoLegExecsValid () const
        {
            return (mNoLegExecs != NO_LEG_EXECS_NO_VALUE);
        }

        void resetNoLegExecs ()
        {
            mNoLegExecs = NO_LEG_EXECS_NO_VALUE;
        }

        int16_t getExecRestatementReason () const
        {
            return mExecRestatementReason;
        }

        bool setExecRestatementReason (int16_t v)
        {
            mExecRestatementReason = v;
            return ((EXEC_RESTATEMENT_REASON_MIN <= mExecRestatementReason && mExecRestatementReason <= EXEC_RESTATEMENT_REASON_MAX) || mExecRestatementReason == EXEC_RESTATEMENT_REASON_NO_VALUE);
        }

        bool isExecRestatementReasonValid () const
        {
            return (mExecRestatementReason != EXEC_RESTATEMENT_REASON_NO_VALUE);
        }

        void resetExecRestatementReason ()
        {
            mExecRestatementReason = EXEC_RESTATEMENT_REASON_NO_VALUE;
        }

        int8_t getSide () const
        {
            return mSide;
        }

        bool setSide (int8_t v)
        {
            mSide = v;
            return ((SIDE_MIN <= mSide && mSide <= SIDE_MAX) || mSide == SIDE_NO_VALUE);
        }

        bool isSideValid () const
        {
            return (mSide != SIDE_NO_VALUE);
        }

        void resetSide ()
        {
            mSide = SIDE_NO_VALUE;
        }

        int8_t getProductComplex () const
        {
            return mProductComplex;
        }

        bool setProductComplex (int8_t v)
        {
            mProductComplex = v;
            return ((PRODUCT_COMPLEX_MIN <= mProductComplex && mProductComplex <= PRODUCT_COMPLEX_MAX) || mProductComplex == PRODUCT_COMPLEX_NO_VALUE);
        }

        bool isProductComplexValid () const
        {
            return (mProductComplex != PRODUCT_COMPLEX_NO_VALUE);
        }

        void resetProductComplex ()
        {
            mProductComplex = PRODUCT_COMPLEX_NO_VALUE;
        }

        string getOrdStatus () const
        {
            return string (mOrdStatus, ORD_STATUS_MAX_LENGTH);
        }

        bool setOrdStatus (const string& v)
        {
            memset (mOrdStatus, '\0', sizeof (mOrdStatus));
            size_t size = min ((size_t) v.size (), (size_t) ORD_STATUS_MAX_LENGTH);
            strncpy (mOrdStatus, v.c_str (), size);
            return (v.size () <= ORD_STATUS_MAX_LENGTH);
        }

        bool isOrdStatusValid () const
        {
            return (memcmp (mOrdStatus, ORD_STATUS_NO_VALUE, sizeof (mOrdStatus)) != 0);
        }

        void resetOrdStatus ()
        {
            memcpy (mOrdStatus, ORD_STATUS_NO_VALUE, sizeof (mOrdStatus));
        }

        string getExecType () const
        {
            return string (mExecType, EXEC_TYPE_MAX_LENGTH);
        }

        bool setExecType (const string& v)
        {
            memset (mExecType, '\0', sizeof (mExecType));
            size_t size = min ((size_t) v.size (), (size_t) EXEC_TYPE_MAX_LENGTH);
            strncpy (mExecType, v.c_str (), size);
            return (v.size () <= EXEC_TYPE_MAX_LENGTH);
        }

        bool isExecTypeValid () const
        {
            return (memcmp (mExecType, EXEC_TYPE_NO_VALUE, sizeof (mExecType)) != 0);
        }

        void resetExecType ()
        {
            memcpy (mExecType, EXEC_TYPE_NO_VALUE, sizeof (mExecType));
        }

        int8_t getTriggered () const
        {
            return mTriggered;
        }

        bool setTriggered (int8_t v)
        {
            mTriggered = v;
            return ((TRIGGERED_MIN <= mTriggered && mTriggered <= TRIGGERED_MAX) || mTriggered == TRIGGERED_NO_VALUE);
        }

        bool isTriggeredValid () const
        {
            return (mTriggered != TRIGGERED_NO_VALUE);
        }

        void resetTriggered ()
        {
            mTriggered = TRIGGERED_NO_VALUE;
        }

        int8_t getCrossedIndicator () const
        {
            return mCrossedIndicator;
        }

        bool setCrossedIndicator (int8_t v)
        {
            mCrossedIndicator = v;
            return ((CROSSED_INDICATOR_MIN <= mCrossedIndicator && mCrossedIndicator <= CROSSED_INDICATOR_MAX) || mCrossedIndicator == CROSSED_INDICATOR_NO_VALUE);
        }

        bool isCrossedIndicatorValid () const
        {
            return (mCrossedIndicator != CROSSED_INDICATOR_NO_VALUE);
        }

        void resetCrossedIndicator ()
        {
            mCrossedIndicator = CROSSED_INDICATOR_NO_VALUE;
        }

        int8_t getTransactionDelayIndicator () const
        {
            return mTransactionDelayIndicator;
        }

        bool setTransactionDelayIndicator (int8_t v)
        {
            mTransactionDelayIndicator = v;
            return ((TRANSACTION_DELAY_INDICATOR_MIN <= mTransactionDelayIndicator && mTransactionDelayIndicator <= TRANSACTION_DELAY_INDICATOR_MAX) || mTransactionDelayIndicator == TRANSACTION_DELAY_INDICATOR_NO_VALUE);
        }

        bool isTransactionDelayIndicatorValid () const
        {
            return (mTransactionDelayIndicator != TRANSACTION_DELAY_INDICATOR_NO_VALUE);
        }

        void resetTransactionDelayIndicator ()
        {
            mTransactionDelayIndicator = TRANSACTION_DELAY_INDICATOR_NO_VALUE;
        }

        int8_t getNoFills () const
        {
            return mNoFills;
        }

        bool setNoFills (int8_t v)
        {
            mNoFills = v;
            return ((NO_FILLS_MIN <= mNoFills && mNoFills <= NO_FILLS_MAX) || mNoFills == NO_FILLS_NO_VALUE);
        }

        bool isNoFillsValid () const
        {
            return (mNoFills != NO_FILLS_NO_VALUE);
        }

        void resetNoFills ()
        {
            mNoFills = NO_FILLS_NO_VALUE;
        }

        const vector<eurexFillsGrpCompPacket>& getFillsGrp () const
        {
            return mFillsGrp;
        }

        bool setFillsGrp (const vector<eurexFillsGrpCompPacket>& v)
        {
            mFillsGrp = v;
            mNoFills = v.size ();
            return (FILLS_GRP_MIN <= v.size () && v.size () <= FILLS_GRP_MAX);
        }

        const vector<eurexInstrmntLegExecGrpCompPacket>& getInstrmntLegExecGrp () const
        {
            return mInstrmntLegExecGrp;
        }

        bool setInstrmntLegExecGrp (const vector<eurexInstrmntLegExecGrpCompPacket>& v)
        {
            mInstrmntLegExecGrp = v;
            mNoLegExecs = v.size ();
            return (INSTRMNT_LEG_EXEC_GRP_MIN <= v.size () && v.size () <= INSTRMNT_LEG_EXEC_GRP_MAX);
        }


        // render current raw size
        size_t getRawSize () const
        {
            size_t result = mMessageHeaderOut.getRawSize()
                + mResponseHeaderME.getRawSize()
                + sizeof (mOrderID)
                + sizeof (mClOrdID)
                + sizeof (mOrigClOrdID)
                + sizeof (mSecurityID)
                + sizeof (mExecID)
                + sizeof (mTrdRegTSEntryTime)
                + sizeof (mTrdRegTSTimePriority)
                + sizeof (mLeavesQty)
                + sizeof (mCumQty)
                + sizeof (mCxlQty)
                + sizeof (mMarketSegmentID)
                + sizeof (mNoLegExecs)
                + sizeof (mExecRestatementReason)
                + sizeof (mSide)
                + sizeof (mProductComplex)
                + sizeof (mOrdStatus)
                + sizeof (mExecType)
                + sizeof (mTriggered)
                + sizeof (mCrossedIndicator)
                + sizeof (mTransactionDelayIndicator)
                + sizeof (mNoFills)
                + eti::getRawSize (mFillsGrp)
                + eti::getRawSize (mInstrmntLegExecGrp);
            return result;
        }

        // serialization
        codecState serialize (void *buf, size_t len, size_t &used)
        {
            mNoFills = mFillsGrp.size ();
            mNoLegExecs = mInstrmntLegExecGrp.size ();
            mMessageHeaderOut.mBodyLen = getRawSize ();
            codecState state;
            state = mMessageHeaderOut.serialize (buf, len, used);
            if (state != GW_CODEC_SUCCESS) return state;
            state = mResponseHeaderME.serialize (buf, len, used);
            if (state != GW_CODEC_SUCCESS) return state;
            state = eti::serialize (mOrderID, buf, len, used);
            if (state != GW_CODEC_SUCCESS) return state;
            state = eti::serialize (mClOrdID, buf, len, used);
            if (state != GW_CODEC_SUCCESS) return state;
            state = eti::serialize (mOrigClOrdID, buf, len, used);
            if (state != GW_CODEC_SUCCESS) return state;
            state = eti::serialize (mSecurityID, buf, len, used);
            if (state != GW_CODEC_SUCCESS) return state;
            state = eti::serialize (mExecID, buf, len, used);
            if (state != GW_CODEC_SUCCESS) return state;
            state = eti::serialize (mTrdRegTSEntryTime, buf, len, used);
            if (state != GW_CODEC_SUCCESS) return state;
            state = eti::serialize (mTrdRegTSTimePriority, buf, len, used);
            if (state != GW_CODEC_SUCCESS) return state;
            state = eti::serialize (mLeavesQty, buf, len, used);
            if (state != GW_CODEC_SUCCESS) return state;
            state = eti::serialize (mCumQty, buf, len, used);
            if (state != GW_CODEC_SUCCESS) return state;
            state = eti::serialize (mCxlQty, buf, len, used);
            if (state != GW_CODEC_SUCCESS) return state;
            state = eti::serialize (mMarketSegmentID, buf, len, used);
            if (state != GW_CODEC_SUCCESS) return state;
            state = eti::serialize (mNoLegExecs, buf, len, used);
            if (state != GW_CODEC_SUCCESS) return state;
            state = eti::serialize (mExecRestatementReason, buf, len, used);
            if (state != GW_CODEC_SUCCESS) return state;
            state = eti::serialize (mSide, buf, len, used);
            if (state != GW_CODEC_SUCCESS) return state;
            state = eti::serialize (mProductComplex, buf, len, used);
            if (state != GW_CODEC_SUCCESS) return state;
            state = eti::serialize (mOrdStatus, buf, len, used);
            if (state != GW_CODEC_SUCCESS) return state;
            state = eti::serialize (mExecType, buf, len, used);
            if (state != GW_CODEC_SUCCESS) return state;
            state = eti::serialize (mTriggered, buf, len, used);
            if (state != GW_CODEC_SUCCESS) return state;
            state = eti::serialize (mCrossedIndicator, buf, len, used);
            if (state != GW_CODEC_SUCCESS) return state;
            state = eti::serialize (mTransactionDelayIndicator, buf, len, used);
            if (state != GW_CODEC_SUCCESS) return state;
            state = eti::serialize (mNoFills, buf, len, used);
            if (state != GW_CODEC_SUCCESS) return state;
            for (size_t i = 0; i < mFillsGrp.size (); i++)
            {
                state = mFillsGrp[i].serialize (buf, len, used);
                if (state != GW_CODEC_SUCCESS) return state;
            }
            for (size_t i = 0; i < mInstrmntLegExecGrp.size (); i++)
            {
                state = mInstrmntLegExecGrp[i].serialize (buf, len, used);
                if (state != GW_CODEC_SUCCESS) return state;
            }
            return GW_CODEC_SUCCESS;
        }

        // deserialization
        codecState deserialize (const void *buf, size_t len, size_t &used)
        {
            codecState state;
            state = mMessageHeaderOut.deserialize (buf, len, used);
            if (state != GW_CODEC_SUCCESS) return state;
            state = mResponseHeaderME.deserialize (buf, len, used);
            if (state != GW_CODEC_SUCCESS) return state;
            state = eti::deserialize (mOrderID, buf, len, used);
            if (state != GW_CODEC_SUCCESS) return state;
            state = eti::deserialize (mClOrdID, buf, len, used);
            if (state != GW_CODEC_SUCCESS) return state;
            state = eti::deserialize (mOrigClOrdID, buf, len, used);
            if (state != GW_CODEC_SUCCESS) return state;
            state = eti::deserialize (mSecurityID, buf, len, used);
            if (state != GW_CODEC_SUCCESS) return state;
            state = eti::deserialize (mExecID, buf, len, used);
            if (state != GW_CODEC_SUCCESS) return state;
            state = eti::deserialize (mTrdRegTSEntryTime, buf, len, used);
            if (state != GW_CODEC_SUCCESS) return state;
            state = eti::deserialize (mTrdRegTSTimePriority, buf, len, used);
            if (state != GW_CODEC_SUCCESS) return state;
            state = eti::deserialize (mLeavesQty, buf, len, used);
            if (state != GW_CODEC_SUCCESS) return state;
            state = eti::deserialize (mCumQty, buf, len, used);
            if (state != GW_CODEC_SUCCESS) return state;
            state = eti::deserialize (mCxlQty, buf, len, used);
            if (state != GW_CODEC_SUCCESS) return state;
            state = eti::deserialize (mMarketSegmentID, buf, len, used);
            if (state != GW_CODEC_SUCCESS) return state;
            state = eti::deserialize (mNoLegExecs, buf, len, used);
            if (state != GW_CODEC_SUCCESS) return state;
            state = eti::deserialize (mExecRestatementReason, buf, len, used);
            if (state != GW_CODEC_SUCCESS) return state;
            state = eti::deserialize (mSide, buf, len, used);
            if (state != GW_CODEC_SUCCESS) return state;
            state = eti::deserialize (mProductComplex, buf, len, used);
            if (state != GW_CODEC_SUCCESS) return state;
            state = eti::deserialize (mOrdStatus, buf, len, used);
            if (state != GW_CODEC_SUCCESS) return state;
            state = eti::deserialize (mExecType, buf, len, used);
            if (state != GW_CODEC_SUCCESS) return state;
            state = eti::deserialize (mTriggered, buf, len, used);
            if (state != GW_CODEC_SUCCESS) return state;
            state = eti::deserialize (mCrossedIndicator, buf, len, used);
            if (state != GW_CODEC_SUCCESS) return state;
            state = eti::deserialize (mTransactionDelayIndicator, buf, len, used);
            if (state != GW_CODEC_SUCCESS) return state;
            state = eti::deserialize (mNoFills, buf, len, used);
            if (state != GW_CODEC_SUCCESS) return state;
            mFillsGrp.resize (mNoFills);
            for (vector<eurexFillsGrpCompPacket>::iterator it = mFillsGrp.begin (); it != mFillsGrp.end (); ++it)
            {
                state = it->deserialize (buf, len, used);
                if (state != GW_CODEC_SUCCESS) return state;
            }
            mInstrmntLegExecGrp.resize (mNoLegExecs);
            for (vector<eurexInstrmntLegExecGrpCompPacket>::iterator it = mInstrmntLegExecGrp.begin (); it != mInstrmntLegExecGrp.end (); ++it)
            {
                state = it->deserialize (buf, len, used);
                if (state != GW_CODEC_SUCCESS) return state;
            }
            mMessageHeaderOut.mBodyLen = getRawSize ();
            return GW_CODEC_SUCCESS;
        }

        // string conversion
        string toString () const
        {
            stringstream sss;
            sss << "OrderExecResponse::"
                << "[MessageHeaderOut=" << mMessageHeaderOut.toString () << "],"
                << "[ResponseHeaderME=" << mResponseHeaderME.toString () << "],"
                << "[OrderID=" << getOrderID () << "],"
                << "[ClOrdID=" << getClOrdID () << "],"
                << "[OrigClOrdID=" << getOrigClOrdID () << "],"
                << "[SecurityID=" << getSecurityID () << "],"
                << "[ExecID=" << getExecID () << "],"
                << "[TrdRegTSEntryTime=" << getTrdRegTSEntryTime () << "],"
                << "[TrdRegTSTimePriority=" << getTrdRegTSTimePriority () << "],"
                << "[LeavesQty=" << getLeavesQty () << "],"
                << "[CumQty=" << getCumQty () << "],"
                << "[CxlQty=" << getCxlQty () << "],"
                << "[MarketSegmentID=" << getMarketSegmentID () << "],"
                << "[NoLegExecs=" << getNoLegExecs () << "],"
                << "[ExecRestatementReason=" << getExecRestatementReason () << "],"
                << "[Side=" << getSide () << "],"
                << "[ProductComplex=" << getProductComplex () << "],"
                << "[OrdStatus=" << getOrdStatus () << "],"
                << "[ExecType=" << getExecType () << "],"
                << "[Triggered=" << getTriggered () << "],"
                << "[CrossedIndicator=" << getCrossedIndicator () << "],"
                << "[TransactionDelayIndicator=" << getTransactionDelayIndicator () << "],"
                << "[NoFills=" << getNoFills () << "],"
                << "[FillsGrp=" << eti::toString (getFillsGrp ()) << "],"
                << "[InstrmntLegExecGrp=" << eti::toString (getInstrmntLegExecGrp ()) << "]";
            return sss.str();
        }
};

const uint64_t eurexOrderExecResponsePacket::ORDER_ID_MIN = 0UL;
const uint64_t eurexOrderExecResponsePacket::ORDER_ID_MAX = 18446744073709551614UL;
const uint64_t eurexOrderExecResponsePacket::ORDER_ID_NO_VALUE = 0xFFFFFFFFFFFFFFFF;
const uint64_t eurexOrderExecResponsePacket::CL_ORD_ID_MIN = 0UL;
const uint64_t eurexOrderExecResponsePacket::CL_ORD_ID_MAX = 18446744073709551614UL;
const uint64_t eurexOrderExecResponsePacket::CL_ORD_ID_NO_VALUE = 0xFFFFFFFFFFFFFFFF;
const uint64_t eurexOrderExecResponsePacket::ORIG_CL_ORD_ID_MIN = 0UL;
const uint64_t eurexOrderExecResponsePacket::ORIG_CL_ORD_ID_MAX = 18446744073709551614UL;
const uint64_t eurexOrderExecResponsePacket::ORIG_CL_ORD_ID_NO_VALUE = 0xFFFFFFFFFFFFFFFF;
const int64_t eurexOrderExecResponsePacket::SECURITY_ID_MIN = -9223372036854775807L;
const int64_t eurexOrderExecResponsePacket::SECURITY_ID_MAX = 9223372036854775807L;
const int64_t eurexOrderExecResponsePacket::SECURITY_ID_NO_VALUE = 0x8000000000000000;
const uint64_t eurexOrderExecResponsePacket::EXEC_ID_MIN = 0UL;
const uint64_t eurexOrderExecResponsePacket::EXEC_ID_MAX = 18446744073709551614UL;
const uint64_t eurexOrderExecResponsePacket::EXEC_ID_NO_VALUE = 0xFFFFFFFFFFFFFFFF;
const uint64_t eurexOrderExecResponsePacket::TRD_REG_TSENTRY_TIME_MIN = 0UL;
const uint64_t eurexOrderExecResponsePacket::TRD_REG_TSENTRY_TIME_MAX = 18446744073709551614UL;
const uint64_t eurexOrderExecResponsePacket::TRD_REG_TSENTRY_TIME_NO_VALUE = 0xFFFFFFFFFFFFFFFF;
const uint64_t eurexOrderExecResponsePacket::TRD_REG_TSTIME_PRIORITY_MIN = 0UL;
const uint64_t eurexOrderExecResponsePacket::TRD_REG_TSTIME_PRIORITY_MAX = 18446744073709551614UL;
const uint64_t eurexOrderExecResponsePacket::TRD_REG_TSTIME_PRIORITY_NO_VALUE = 0xFFFFFFFFFFFFFFFF;
const double eurexOrderExecResponsePacket::LEAVES_QTY_MIN = -922337203685477.5807;
const double eurexOrderExecResponsePacket::LEAVES_QTY_MAX = 922337203685477.5807;
const int64_t eurexOrderExecResponsePacket::LEAVES_QTY_NO_VALUE = 0x8000000000000000;
const double eurexOrderExecResponsePacket::CUM_QTY_MIN = -922337203685477.5807;
const double eurexOrderExecResponsePacket::CUM_QTY_MAX = 922337203685477.5807;
const int64_t eurexOrderExecResponsePacket::CUM_QTY_NO_VALUE = 0x8000000000000000;
const double eurexOrderExecResponsePacket::CXL_QTY_MIN = -922337203685477.5807;
const double eurexOrderExecResponsePacket::CXL_QTY_MAX = 922337203685477.5807;
const int64_t eurexOrderExecResponsePacket::CXL_QTY_NO_VALUE = 0x8000000000000000;
const int32_t eurexOrderExecResponsePacket::MARKET_SEGMENT_ID_MIN = -2147483647;
const int32_t eurexOrderExecResponsePacket::MARKET_SEGMENT_ID_MAX = 2147483647;
const int32_t eurexOrderExecResponsePacket::MARKET_SEGMENT_ID_NO_VALUE = 0x80000000;
const int16_t eurexOrderExecResponsePacket::NO_LEG_EXECS_MIN = 0;
const int16_t eurexOrderExecResponsePacket::NO_LEG_EXECS_MAX = 600;
const int16_t eurexOrderExecResponsePacket::NO_LEG_EXECS_NO_VALUE = 0xFFFF;
const int16_t eurexOrderExecResponsePacket::EXEC_RESTATEMENT_REASON_MIN = 0;
const int16_t eurexOrderExecResponsePacket::EXEC_RESTATEMENT_REASON_MAX = 344;
const int16_t eurexOrderExecResponsePacket::EXEC_RESTATEMENT_REASON_NO_VALUE = 0xFFFF;
const int8_t eurexOrderExecResponsePacket::SIDE_MIN = 1;
const int8_t eurexOrderExecResponsePacket::SIDE_MAX = 2;
const int8_t eurexOrderExecResponsePacket::SIDE_NO_VALUE = 0xFF;
const int8_t eurexOrderExecResponsePacket::PRODUCT_COMPLEX_MIN = 1;
const int8_t eurexOrderExecResponsePacket::PRODUCT_COMPLEX_MAX = 10;
const int8_t eurexOrderExecResponsePacket::PRODUCT_COMPLEX_NO_VALUE = 0xFF;
const char eurexOrderExecResponsePacket::ORD_STATUS_NO_VALUE[1] = {0x00};
const size_t eurexOrderExecResponsePacket::ORD_STATUS_MAX_LENGTH = 1;
const char eurexOrderExecResponsePacket::EXEC_TYPE_NO_VALUE[1] = {0x00};
const size_t eurexOrderExecResponsePacket::EXEC_TYPE_MAX_LENGTH = 1;
const int8_t eurexOrderExecResponsePacket::TRIGGERED_MIN = 0;
const int8_t eurexOrderExecResponsePacket::TRIGGERED_MAX = 2;
const int8_t eurexOrderExecResponsePacket::TRIGGERED_NO_VALUE = 0xFF;
const int8_t eurexOrderExecResponsePacket::CROSSED_INDICATOR_MIN = 0;
const int8_t eurexOrderExecResponsePacket::CROSSED_INDICATOR_MAX = 1;
const int8_t eurexOrderExecResponsePacket::CROSSED_INDICATOR_NO_VALUE = 0xFF;
const int8_t eurexOrderExecResponsePacket::TRANSACTION_DELAY_INDICATOR_MIN = 0;
const int8_t eurexOrderExecResponsePacket::TRANSACTION_DELAY_INDICATOR_MAX = 1;
const int8_t eurexOrderExecResponsePacket::TRANSACTION_DELAY_INDICATOR_NO_VALUE = 0xFF;
const int8_t eurexOrderExecResponsePacket::NO_FILLS_MIN = 0;
const int8_t eurexOrderExecResponsePacket::NO_FILLS_MAX = 100;
const int8_t eurexOrderExecResponsePacket::NO_FILLS_NO_VALUE = 0xFF;
const size_t eurexOrderExecResponsePacket::FILLS_GRP_MIN = 0;
const size_t eurexOrderExecResponsePacket::FILLS_GRP_MAX = 100;
const size_t eurexOrderExecResponsePacket::INSTRMNT_LEG_EXEC_GRP_MIN = 0;
const size_t eurexOrderExecResponsePacket::INSTRMNT_LEG_EXEC_GRP_MAX = 600;


} // namespace neueda

#endif // EUREX_ORDEREXECRESPONSE_PACKET_H
