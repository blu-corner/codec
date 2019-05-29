/*
 * Copyright 2014-2018 Neueda Ltd.
 * 
 * Generated 21/05/2019
 */
#ifndef EUREX_CLIPEXECUTIONNOTIFICATION_PACKET_H
#define EUREX_CLIPEXECUTIONNOTIFICATION_PACKET_H

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

class eurexCLIPExecutionNotificationPacket
{
    public:
        // no value constants
        static const uint64_t ORDER_ID_MIN;
        static const uint64_t ORDER_ID_MAX;
        static const uint64_t ORDER_ID_NO_VALUE;
        static const uint64_t EXEC_ID_MIN;
        static const uint64_t EXEC_ID_MAX;
        static const uint64_t EXEC_ID_NO_VALUE;
        static const int64_t SECURITY_ID_MIN;
        static const int64_t SECURITY_ID_MAX;
        static const int64_t SECURITY_ID_NO_VALUE;
        static const double CXL_QTY_MIN;
        static const double CXL_QTY_MAX;
        static const int64_t CXL_QTY_NO_VALUE;
        static const double LEAVES_QTY_MIN;
        static const double LEAVES_QTY_MAX;
        static const int64_t LEAVES_QTY_NO_VALUE;
        static const double CUM_QTY_MIN;
        static const double CUM_QTY_MAX;
        static const int64_t CUM_QTY_NO_VALUE;
        static const int32_t MARKET_SEGMENT_ID_MIN;
        static const int32_t MARKET_SEGMENT_ID_MAX;
        static const int32_t MARKET_SEGMENT_ID_NO_VALUE;
        static const int16_t EXEC_RESTATEMENT_REASON_MIN;
        static const int16_t EXEC_RESTATEMENT_REASON_MAX;
        static const int16_t EXEC_RESTATEMENT_REASON_NO_VALUE;
        static const int16_t NO_LEG_EXECS_MIN;
        static const int16_t NO_LEG_EXECS_MAX;
        static const int16_t NO_LEG_EXECS_NO_VALUE;
        static const int8_t PRODUCT_COMPLEX_MIN;
        static const int8_t PRODUCT_COMPLEX_MAX;
        static const int8_t PRODUCT_COMPLEX_NO_VALUE;
        static const int8_t SIDE_MIN;
        static const int8_t SIDE_MAX;
        static const int8_t SIDE_NO_VALUE;
        static const char ORD_STATUS_NO_VALUE[1];
        static const size_t ORD_STATUS_MAX_LENGTH;
        static const char EXEC_TYPE_NO_VALUE[1];
        static const size_t EXEC_TYPE_MAX_LENGTH;
        static const int8_t MATCH_TYPE_MIN;
        static const int8_t MATCH_TYPE_MAX;
        static const int8_t MATCH_TYPE_NO_VALUE;
        static const int8_t NO_FILLS_MIN;
        static const int8_t NO_FILLS_MAX;
        static const int8_t NO_FILLS_NO_VALUE;
        static const char PAD2_NO_VALUE[2];
        static const size_t PAD2_MAX_LENGTH;
        static const size_t FILLS_GRP_MIN;
        static const size_t FILLS_GRP_MAX;
        static const size_t INSTRMNT_LEG_EXEC_GRP_MIN;
        static const size_t INSTRMNT_LEG_EXEC_GRP_MAX;

        // fields (use with care)
        eurexMessageHeaderOutCompPacket mMessageHeaderOut;
        eurexRBCHeaderMECompPacket mRBCHeaderME;
        uint64_t mOrderID;
        uint64_t mExecID;
        int64_t mSecurityID;
        int64_t mCxlQty;
        int64_t mLeavesQty;
        int64_t mCumQty;
        int32_t mMarketSegmentID;
        int16_t mExecRestatementReason;
        int16_t mNoLegExecs;
        int8_t mProductComplex;
        int8_t mSide;
        char mOrdStatus[1];
        char mExecType[1];
        int8_t mMatchType;
        int8_t mNoFills;
        char mPad2[2];
        vector<eurexFillsGrpCompPacket> mFillsGrp;
        vector<eurexInstrmntLegExecGrpCompPacket> mInstrmntLegExecGrp;

        // constructor
        eurexCLIPExecutionNotificationPacket ()
        {
            mMessageHeaderOut.mTemplateID = 10135;
            mOrderID = ORDER_ID_NO_VALUE;
            mExecID = EXEC_ID_NO_VALUE;
            mSecurityID = SECURITY_ID_NO_VALUE;
            mCxlQty = CXL_QTY_NO_VALUE;
            mLeavesQty = LEAVES_QTY_NO_VALUE;
            mCumQty = CUM_QTY_NO_VALUE;
            mMarketSegmentID = MARKET_SEGMENT_ID_NO_VALUE;
            mExecRestatementReason = EXEC_RESTATEMENT_REASON_NO_VALUE;
            mNoLegExecs = NO_LEG_EXECS_NO_VALUE;
            mProductComplex = PRODUCT_COMPLEX_NO_VALUE;
            mSide = SIDE_NO_VALUE;
            memcpy(mOrdStatus, ORD_STATUS_NO_VALUE, sizeof (mOrdStatus));
            memcpy(mExecType, EXEC_TYPE_NO_VALUE, sizeof (mExecType));
            mMatchType = MATCH_TYPE_NO_VALUE;
            mNoFills = NO_FILLS_NO_VALUE;
            memcpy(mPad2, PAD2_NO_VALUE, sizeof (mPad2));
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

        const eurexRBCHeaderMECompPacket& getRBCHeaderME () const
        {
            return mRBCHeaderME;
        }

        bool setRBCHeaderME (const eurexRBCHeaderMECompPacket& v)
        {
            mRBCHeaderME = v;
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

        int8_t getMatchType () const
        {
            return mMatchType;
        }

        bool setMatchType (int8_t v)
        {
            mMatchType = v;
            return ((MATCH_TYPE_MIN <= mMatchType && mMatchType <= MATCH_TYPE_MAX) || mMatchType == MATCH_TYPE_NO_VALUE);
        }

        bool isMatchTypeValid () const
        {
            return (mMatchType != MATCH_TYPE_NO_VALUE);
        }

        void resetMatchType ()
        {
            mMatchType = MATCH_TYPE_NO_VALUE;
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

        string getPad2 () const
        {
            return string (mPad2, PAD2_MAX_LENGTH);
        }

        bool setPad2 (const string& v)
        {
            memset (mPad2, '\0', sizeof (mPad2));
            size_t size = min ((size_t) v.size (), (size_t) PAD2_MAX_LENGTH);
            strncpy (mPad2, v.c_str (), size);
            return (v.size () <= PAD2_MAX_LENGTH);
        }

        bool isPad2Valid () const
        {
            return (memcmp (mPad2, PAD2_NO_VALUE, sizeof (mPad2)) != 0);
        }

        void resetPad2 ()
        {
            memcpy (mPad2, PAD2_NO_VALUE, sizeof (mPad2));
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
                + mRBCHeaderME.getRawSize()
                + sizeof (mOrderID)
                + sizeof (mExecID)
                + sizeof (mSecurityID)
                + sizeof (mCxlQty)
                + sizeof (mLeavesQty)
                + sizeof (mCumQty)
                + sizeof (mMarketSegmentID)
                + sizeof (mExecRestatementReason)
                + sizeof (mNoLegExecs)
                + sizeof (mProductComplex)
                + sizeof (mSide)
                + sizeof (mOrdStatus)
                + sizeof (mExecType)
                + sizeof (mMatchType)
                + sizeof (mNoFills)
                + sizeof (mPad2)
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
            state = mRBCHeaderME.serialize (buf, len, used);
            if (state != GW_CODEC_SUCCESS) return state;
            state = eti::serialize (mOrderID, buf, len, used);
            if (state != GW_CODEC_SUCCESS) return state;
            state = eti::serialize (mExecID, buf, len, used);
            if (state != GW_CODEC_SUCCESS) return state;
            state = eti::serialize (mSecurityID, buf, len, used);
            if (state != GW_CODEC_SUCCESS) return state;
            state = eti::serialize (mCxlQty, buf, len, used);
            if (state != GW_CODEC_SUCCESS) return state;
            state = eti::serialize (mLeavesQty, buf, len, used);
            if (state != GW_CODEC_SUCCESS) return state;
            state = eti::serialize (mCumQty, buf, len, used);
            if (state != GW_CODEC_SUCCESS) return state;
            state = eti::serialize (mMarketSegmentID, buf, len, used);
            if (state != GW_CODEC_SUCCESS) return state;
            state = eti::serialize (mExecRestatementReason, buf, len, used);
            if (state != GW_CODEC_SUCCESS) return state;
            state = eti::serialize (mNoLegExecs, buf, len, used);
            if (state != GW_CODEC_SUCCESS) return state;
            state = eti::serialize (mProductComplex, buf, len, used);
            if (state != GW_CODEC_SUCCESS) return state;
            state = eti::serialize (mSide, buf, len, used);
            if (state != GW_CODEC_SUCCESS) return state;
            state = eti::serialize (mOrdStatus, buf, len, used);
            if (state != GW_CODEC_SUCCESS) return state;
            state = eti::serialize (mExecType, buf, len, used);
            if (state != GW_CODEC_SUCCESS) return state;
            state = eti::serialize (mMatchType, buf, len, used);
            if (state != GW_CODEC_SUCCESS) return state;
            state = eti::serialize (mNoFills, buf, len, used);
            if (state != GW_CODEC_SUCCESS) return state;
            state = eti::serialize (mPad2, buf, len, used);
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
            state = mRBCHeaderME.deserialize (buf, len, used);
            if (state != GW_CODEC_SUCCESS) return state;
            state = eti::deserialize (mOrderID, buf, len, used);
            if (state != GW_CODEC_SUCCESS) return state;
            state = eti::deserialize (mExecID, buf, len, used);
            if (state != GW_CODEC_SUCCESS) return state;
            state = eti::deserialize (mSecurityID, buf, len, used);
            if (state != GW_CODEC_SUCCESS) return state;
            state = eti::deserialize (mCxlQty, buf, len, used);
            if (state != GW_CODEC_SUCCESS) return state;
            state = eti::deserialize (mLeavesQty, buf, len, used);
            if (state != GW_CODEC_SUCCESS) return state;
            state = eti::deserialize (mCumQty, buf, len, used);
            if (state != GW_CODEC_SUCCESS) return state;
            state = eti::deserialize (mMarketSegmentID, buf, len, used);
            if (state != GW_CODEC_SUCCESS) return state;
            state = eti::deserialize (mExecRestatementReason, buf, len, used);
            if (state != GW_CODEC_SUCCESS) return state;
            state = eti::deserialize (mNoLegExecs, buf, len, used);
            if (state != GW_CODEC_SUCCESS) return state;
            state = eti::deserialize (mProductComplex, buf, len, used);
            if (state != GW_CODEC_SUCCESS) return state;
            state = eti::deserialize (mSide, buf, len, used);
            if (state != GW_CODEC_SUCCESS) return state;
            state = eti::deserialize (mOrdStatus, buf, len, used);
            if (state != GW_CODEC_SUCCESS) return state;
            state = eti::deserialize (mExecType, buf, len, used);
            if (state != GW_CODEC_SUCCESS) return state;
            state = eti::deserialize (mMatchType, buf, len, used);
            if (state != GW_CODEC_SUCCESS) return state;
            state = eti::deserialize (mNoFills, buf, len, used);
            if (state != GW_CODEC_SUCCESS) return state;
            state = eti::deserialize (mPad2, buf, len, used);
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
            sss << "CLIPExecutionNotification::"
                << "[MessageHeaderOut=" << mMessageHeaderOut.toString () << "],"
                << "[RBCHeaderME=" << mRBCHeaderME.toString () << "],"
                << "[OrderID=" << getOrderID () << "],"
                << "[ExecID=" << getExecID () << "],"
                << "[SecurityID=" << getSecurityID () << "],"
                << "[CxlQty=" << getCxlQty () << "],"
                << "[LeavesQty=" << getLeavesQty () << "],"
                << "[CumQty=" << getCumQty () << "],"
                << "[MarketSegmentID=" << getMarketSegmentID () << "],"
                << "[ExecRestatementReason=" << getExecRestatementReason () << "],"
                << "[NoLegExecs=" << getNoLegExecs () << "],"
                << "[ProductComplex=" << getProductComplex () << "],"
                << "[Side=" << getSide () << "],"
                << "[OrdStatus=" << getOrdStatus () << "],"
                << "[ExecType=" << getExecType () << "],"
                << "[MatchType=" << getMatchType () << "],"
                << "[NoFills=" << getNoFills () << "],"
                << "[Pad2=" << getPad2 () << "],"
                << "[FillsGrp=" << eti::toString (getFillsGrp ()) << "],"
                << "[InstrmntLegExecGrp=" << eti::toString (getInstrmntLegExecGrp ()) << "]";
            return sss.str();
        }
};

const uint64_t eurexCLIPExecutionNotificationPacket::ORDER_ID_MIN = 0UL;
const uint64_t eurexCLIPExecutionNotificationPacket::ORDER_ID_MAX = 18446744073709551614UL;
const uint64_t eurexCLIPExecutionNotificationPacket::ORDER_ID_NO_VALUE = 0xFFFFFFFFFFFFFFFF;
const uint64_t eurexCLIPExecutionNotificationPacket::EXEC_ID_MIN = 0UL;
const uint64_t eurexCLIPExecutionNotificationPacket::EXEC_ID_MAX = 18446744073709551614UL;
const uint64_t eurexCLIPExecutionNotificationPacket::EXEC_ID_NO_VALUE = 0xFFFFFFFFFFFFFFFF;
const int64_t eurexCLIPExecutionNotificationPacket::SECURITY_ID_MIN = -9223372036854775807L;
const int64_t eurexCLIPExecutionNotificationPacket::SECURITY_ID_MAX = 9223372036854775807L;
const int64_t eurexCLIPExecutionNotificationPacket::SECURITY_ID_NO_VALUE = 0x8000000000000000;
const double eurexCLIPExecutionNotificationPacket::CXL_QTY_MIN = -922337203685477.5807;
const double eurexCLIPExecutionNotificationPacket::CXL_QTY_MAX = 922337203685477.5807;
const int64_t eurexCLIPExecutionNotificationPacket::CXL_QTY_NO_VALUE = 0x8000000000000000;
const double eurexCLIPExecutionNotificationPacket::LEAVES_QTY_MIN = -922337203685477.5807;
const double eurexCLIPExecutionNotificationPacket::LEAVES_QTY_MAX = 922337203685477.5807;
const int64_t eurexCLIPExecutionNotificationPacket::LEAVES_QTY_NO_VALUE = 0x8000000000000000;
const double eurexCLIPExecutionNotificationPacket::CUM_QTY_MIN = -922337203685477.5807;
const double eurexCLIPExecutionNotificationPacket::CUM_QTY_MAX = 922337203685477.5807;
const int64_t eurexCLIPExecutionNotificationPacket::CUM_QTY_NO_VALUE = 0x8000000000000000;
const int32_t eurexCLIPExecutionNotificationPacket::MARKET_SEGMENT_ID_MIN = -2147483647;
const int32_t eurexCLIPExecutionNotificationPacket::MARKET_SEGMENT_ID_MAX = 2147483647;
const int32_t eurexCLIPExecutionNotificationPacket::MARKET_SEGMENT_ID_NO_VALUE = 0x80000000;
const int16_t eurexCLIPExecutionNotificationPacket::EXEC_RESTATEMENT_REASON_MIN = 0;
const int16_t eurexCLIPExecutionNotificationPacket::EXEC_RESTATEMENT_REASON_MAX = 344;
const int16_t eurexCLIPExecutionNotificationPacket::EXEC_RESTATEMENT_REASON_NO_VALUE = 0xFFFF;
const int16_t eurexCLIPExecutionNotificationPacket::NO_LEG_EXECS_MIN = 0;
const int16_t eurexCLIPExecutionNotificationPacket::NO_LEG_EXECS_MAX = 600;
const int16_t eurexCLIPExecutionNotificationPacket::NO_LEG_EXECS_NO_VALUE = 0xFFFF;
const int8_t eurexCLIPExecutionNotificationPacket::PRODUCT_COMPLEX_MIN = 1;
const int8_t eurexCLIPExecutionNotificationPacket::PRODUCT_COMPLEX_MAX = 10;
const int8_t eurexCLIPExecutionNotificationPacket::PRODUCT_COMPLEX_NO_VALUE = 0xFF;
const int8_t eurexCLIPExecutionNotificationPacket::SIDE_MIN = 1;
const int8_t eurexCLIPExecutionNotificationPacket::SIDE_MAX = 2;
const int8_t eurexCLIPExecutionNotificationPacket::SIDE_NO_VALUE = 0xFF;
const char eurexCLIPExecutionNotificationPacket::ORD_STATUS_NO_VALUE[1] = {0x00};
const size_t eurexCLIPExecutionNotificationPacket::ORD_STATUS_MAX_LENGTH = 1;
const char eurexCLIPExecutionNotificationPacket::EXEC_TYPE_NO_VALUE[1] = {0x00};
const size_t eurexCLIPExecutionNotificationPacket::EXEC_TYPE_MAX_LENGTH = 1;
const int8_t eurexCLIPExecutionNotificationPacket::MATCH_TYPE_MIN = 0;
const int8_t eurexCLIPExecutionNotificationPacket::MATCH_TYPE_MAX = 14;
const int8_t eurexCLIPExecutionNotificationPacket::MATCH_TYPE_NO_VALUE = 0xFF;
const int8_t eurexCLIPExecutionNotificationPacket::NO_FILLS_MIN = 0;
const int8_t eurexCLIPExecutionNotificationPacket::NO_FILLS_MAX = 100;
const int8_t eurexCLIPExecutionNotificationPacket::NO_FILLS_NO_VALUE = 0xFF;
const char eurexCLIPExecutionNotificationPacket::PAD2_NO_VALUE[2] = {0x00, 0x00};
const size_t eurexCLIPExecutionNotificationPacket::PAD2_MAX_LENGTH = 2;
const size_t eurexCLIPExecutionNotificationPacket::FILLS_GRP_MIN = 0;
const size_t eurexCLIPExecutionNotificationPacket::FILLS_GRP_MAX = 100;
const size_t eurexCLIPExecutionNotificationPacket::INSTRMNT_LEG_EXEC_GRP_MIN = 0;
const size_t eurexCLIPExecutionNotificationPacket::INSTRMNT_LEG_EXEC_GRP_MAX = 600;


} // namespace neueda

#endif // EUREX_CLIPEXECUTIONNOTIFICATION_PACKET_H
