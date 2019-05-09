/*
 * Copyright 2014-2018 Neueda Ltd.
 * 
 * Generated 11/04/2019
 */
#ifndef XETRA_ORDEREXECNOTIFICATION_PACKET_H
#define XETRA_ORDEREXECNOTIFICATION_PACKET_H

#include <string>
#include <vector>
#include <sstream>
#include <cstddef>
#include <stdint.h>
#include "xetraPackets.h"
#include "xetraPacketUtils.h"

namespace neueda
{

using namespace std;

class xetraOrderExecNotificationPacket
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
        static const double LEAVES_QTY_MIN;
        static const double LEAVES_QTY_MAX;
        static const int64_t LEAVES_QTY_NO_VALUE;
        static const double CUM_QTY_MIN;
        static const double CUM_QTY_MAX;
        static const int64_t CUM_QTY_NO_VALUE;
        static const double CXL_QTY_MIN;
        static const double CXL_QTY_MAX;
        static const int64_t CXL_QTY_NO_VALUE;
        static const double DISPLAY_QTY_MIN;
        static const double DISPLAY_QTY_MAX;
        static const int64_t DISPLAY_QTY_NO_VALUE;
        static const int32_t MARKET_SEGMENT_ID_MIN;
        static const int32_t MARKET_SEGMENT_ID_MAX;
        static const int32_t MARKET_SEGMENT_ID_NO_VALUE;
        static const uint32_t ORDER_IDSFX_MIN;
        static const uint32_t ORDER_IDSFX_MAX;
        static const uint32_t ORDER_IDSFX_NO_VALUE;
        static const int16_t EXEC_RESTATEMENT_REASON_MIN;
        static const int16_t EXEC_RESTATEMENT_REASON_MAX;
        static const int16_t EXEC_RESTATEMENT_REASON_NO_VALUE;
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
        static const int8_t TRIGGERED_MIN;
        static const int8_t TRIGGERED_MAX;
        static const int8_t TRIGGERED_NO_VALUE;
        static const int8_t CROSSED_INDICATOR_MIN;
        static const int8_t CROSSED_INDICATOR_MAX;
        static const int8_t CROSSED_INDICATOR_NO_VALUE;
        static const char FIXCL_ORD_ID_NO_VALUE[20];
        static const size_t FIXCL_ORD_ID_MAX_LENGTH;
        static const int8_t NO_FILLS_MIN;
        static const int8_t NO_FILLS_MAX;
        static const int8_t NO_FILLS_NO_VALUE;
        static const char PAD3_NO_VALUE[3];
        static const size_t PAD3_MAX_LENGTH;
        static const size_t FILLS_GRP_MIN;
        static const size_t FILLS_GRP_MAX;

        // fields (use with care)
        xetraMessageHeaderOutCompPacket mMessageHeaderOut;
        xetraRBCHeaderMECompPacket mRBCHeaderME;
        uint64_t mOrderID;
        uint64_t mClOrdID;
        uint64_t mOrigClOrdID;
        int64_t mSecurityID;
        uint64_t mExecID;
        int64_t mLeavesQty;
        int64_t mCumQty;
        int64_t mCxlQty;
        int64_t mDisplayQty;
        int32_t mMarketSegmentID;
        uint32_t mOrderIDSfx;
        int16_t mExecRestatementReason;
        int8_t mSide;
        char mOrdStatus[1];
        char mExecType[1];
        int8_t mMatchType;
        int8_t mTriggered;
        int8_t mCrossedIndicator;
        char mFIXClOrdID[20];
        int8_t mNoFills;
        char mPad3[3];
        vector<xetraFillsGrpCompPacket> mFillsGrp;

        // constructor
        xetraOrderExecNotificationPacket ()
        {
            mMessageHeaderOut.mTemplateID = 10104;
            mOrderID = ORDER_ID_NO_VALUE;
            mClOrdID = CL_ORD_ID_NO_VALUE;
            mOrigClOrdID = ORIG_CL_ORD_ID_NO_VALUE;
            mSecurityID = SECURITY_ID_NO_VALUE;
            mExecID = EXEC_ID_NO_VALUE;
            mLeavesQty = LEAVES_QTY_NO_VALUE;
            mCumQty = CUM_QTY_NO_VALUE;
            mCxlQty = CXL_QTY_NO_VALUE;
            mDisplayQty = DISPLAY_QTY_NO_VALUE;
            mMarketSegmentID = MARKET_SEGMENT_ID_NO_VALUE;
            mOrderIDSfx = ORDER_IDSFX_NO_VALUE;
            mExecRestatementReason = EXEC_RESTATEMENT_REASON_NO_VALUE;
            mSide = SIDE_NO_VALUE;
            memcpy(mOrdStatus, ORD_STATUS_NO_VALUE, sizeof (mOrdStatus));
            memcpy(mExecType, EXEC_TYPE_NO_VALUE, sizeof (mExecType));
            mMatchType = MATCH_TYPE_NO_VALUE;
            mTriggered = TRIGGERED_NO_VALUE;
            mCrossedIndicator = CROSSED_INDICATOR_NO_VALUE;
            memcpy(mFIXClOrdID, FIXCL_ORD_ID_NO_VALUE, sizeof (mFIXClOrdID));
            mNoFills = NO_FILLS_NO_VALUE;
            memcpy(mPad3, PAD3_NO_VALUE, sizeof (mPad3));
        }

        // getters & setters
        const xetraMessageHeaderOutCompPacket& getMessageHeaderOut () const
        {
            return mMessageHeaderOut;
        }

        bool setMessageHeaderOut (const xetraMessageHeaderOutCompPacket& v)
        {
            mMessageHeaderOut = v;
            return true;
        }

        const xetraRBCHeaderMECompPacket& getRBCHeaderME () const
        {
            return mRBCHeaderME;
        }

        bool setRBCHeaderME (const xetraRBCHeaderMECompPacket& v)
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

        double getDisplayQty () const
        {
            return mDisplayQty / 10000.0;
        }

        bool setDisplayQty (double v)
        {
            mDisplayQty = v * 10000.0;
            return ((DISPLAY_QTY_MIN <= v && v <= DISPLAY_QTY_MAX) || mDisplayQty == DISPLAY_QTY_NO_VALUE);
        }

        bool isDisplayQtyValid () const
        {
            return (mDisplayQty != DISPLAY_QTY_NO_VALUE);
        }

        void resetDisplayQty ()
        {
            mDisplayQty = DISPLAY_QTY_NO_VALUE;
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

        uint32_t getOrderIDSfx () const
        {
            return mOrderIDSfx;
        }

        bool setOrderIDSfx (uint32_t v)
        {
            mOrderIDSfx = v;
            return ((ORDER_IDSFX_MIN <= mOrderIDSfx && mOrderIDSfx <= ORDER_IDSFX_MAX) || mOrderIDSfx == ORDER_IDSFX_NO_VALUE);
        }

        bool isOrderIDSfxValid () const
        {
            return (mOrderIDSfx != ORDER_IDSFX_NO_VALUE);
        }

        void resetOrderIDSfx ()
        {
            mOrderIDSfx = ORDER_IDSFX_NO_VALUE;
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

        string getFIXClOrdID () const
        {
            return string (mFIXClOrdID, FIXCL_ORD_ID_MAX_LENGTH);
        }

        bool setFIXClOrdID (const string& v)
        {
            memset (mFIXClOrdID, '\0', sizeof (mFIXClOrdID));
            size_t size = min ((size_t) v.size (), (size_t) FIXCL_ORD_ID_MAX_LENGTH);
            strncpy (mFIXClOrdID, v.c_str (), size);
            return (v.size () <= FIXCL_ORD_ID_MAX_LENGTH);
        }

        bool isFIXClOrdIDValid () const
        {
            return (memcmp (mFIXClOrdID, FIXCL_ORD_ID_NO_VALUE, sizeof (mFIXClOrdID)) != 0);
        }

        void resetFIXClOrdID ()
        {
            memcpy (mFIXClOrdID, FIXCL_ORD_ID_NO_VALUE, sizeof (mFIXClOrdID));
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

        string getPad3 () const
        {
            return string (mPad3, PAD3_MAX_LENGTH);
        }

        bool setPad3 (const string& v)
        {
            memset (mPad3, '\0', sizeof (mPad3));
            size_t size = min ((size_t) v.size (), (size_t) PAD3_MAX_LENGTH);
            strncpy (mPad3, v.c_str (), size);
            return (v.size () <= PAD3_MAX_LENGTH);
        }

        bool isPad3Valid () const
        {
            return (memcmp (mPad3, PAD3_NO_VALUE, sizeof (mPad3)) != 0);
        }

        void resetPad3 ()
        {
            memcpy (mPad3, PAD3_NO_VALUE, sizeof (mPad3));
        }

        const vector<xetraFillsGrpCompPacket>& getFillsGrp () const
        {
            return mFillsGrp;
        }

        bool setFillsGrp (const vector<xetraFillsGrpCompPacket>& v)
        {
            mFillsGrp = v;
            mNoFills = v.size ();
            return (FILLS_GRP_MIN <= v.size () && v.size () <= FILLS_GRP_MAX);
        }


        // render current raw size
        size_t getRawSize () const
        {
            size_t result = mMessageHeaderOut.getRawSize()
                + mRBCHeaderME.getRawSize()
                + sizeof (mOrderID)
                + sizeof (mClOrdID)
                + sizeof (mOrigClOrdID)
                + sizeof (mSecurityID)
                + sizeof (mExecID)
                + sizeof (mLeavesQty)
                + sizeof (mCumQty)
                + sizeof (mCxlQty)
                + sizeof (mDisplayQty)
                + sizeof (mMarketSegmentID)
                + sizeof (mOrderIDSfx)
                + sizeof (mExecRestatementReason)
                + sizeof (mSide)
                + sizeof (mOrdStatus)
                + sizeof (mExecType)
                + sizeof (mMatchType)
                + sizeof (mTriggered)
                + sizeof (mCrossedIndicator)
                + sizeof (mFIXClOrdID)
                + sizeof (mNoFills)
                + sizeof (mPad3)
                + xetra::getRawSize (mFillsGrp);
            return result;
        }

        // serialization
        codecState serialize (void *buf, size_t len, size_t &used)
        {
            mNoFills = mFillsGrp.size ();
            mMessageHeaderOut.mBodyLen = getRawSize ();
            codecState state;
            state = mMessageHeaderOut.serialize (buf, len, used);
            if (state != GW_CODEC_SUCCESS) return state;
            state = mRBCHeaderME.serialize (buf, len, used);
            if (state != GW_CODEC_SUCCESS) return state;
            state = xetra::serialize (mOrderID, buf, len, used);
            if (state != GW_CODEC_SUCCESS) return state;
            state = xetra::serialize (mClOrdID, buf, len, used);
            if (state != GW_CODEC_SUCCESS) return state;
            state = xetra::serialize (mOrigClOrdID, buf, len, used);
            if (state != GW_CODEC_SUCCESS) return state;
            state = xetra::serialize (mSecurityID, buf, len, used);
            if (state != GW_CODEC_SUCCESS) return state;
            state = xetra::serialize (mExecID, buf, len, used);
            if (state != GW_CODEC_SUCCESS) return state;
            state = xetra::serialize (mLeavesQty, buf, len, used);
            if (state != GW_CODEC_SUCCESS) return state;
            state = xetra::serialize (mCumQty, buf, len, used);
            if (state != GW_CODEC_SUCCESS) return state;
            state = xetra::serialize (mCxlQty, buf, len, used);
            if (state != GW_CODEC_SUCCESS) return state;
            state = xetra::serialize (mDisplayQty, buf, len, used);
            if (state != GW_CODEC_SUCCESS) return state;
            state = xetra::serialize (mMarketSegmentID, buf, len, used);
            if (state != GW_CODEC_SUCCESS) return state;
            state = xetra::serialize (mOrderIDSfx, buf, len, used);
            if (state != GW_CODEC_SUCCESS) return state;
            state = xetra::serialize (mExecRestatementReason, buf, len, used);
            if (state != GW_CODEC_SUCCESS) return state;
            state = xetra::serialize (mSide, buf, len, used);
            if (state != GW_CODEC_SUCCESS) return state;
            state = xetra::serialize (mOrdStatus, buf, len, used);
            if (state != GW_CODEC_SUCCESS) return state;
            state = xetra::serialize (mExecType, buf, len, used);
            if (state != GW_CODEC_SUCCESS) return state;
            state = xetra::serialize (mMatchType, buf, len, used);
            if (state != GW_CODEC_SUCCESS) return state;
            state = xetra::serialize (mTriggered, buf, len, used);
            if (state != GW_CODEC_SUCCESS) return state;
            state = xetra::serialize (mCrossedIndicator, buf, len, used);
            if (state != GW_CODEC_SUCCESS) return state;
            state = xetra::serialize (mFIXClOrdID, buf, len, used);
            if (state != GW_CODEC_SUCCESS) return state;
            state = xetra::serialize (mNoFills, buf, len, used);
            if (state != GW_CODEC_SUCCESS) return state;
            state = xetra::serialize (mPad3, buf, len, used);
            if (state != GW_CODEC_SUCCESS) return state;
            for (size_t i = 0; i < mFillsGrp.size (); i++)
            {
                state = mFillsGrp[i].serialize (buf, len, used);
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
            state = xetra::deserialize (mOrderID, buf, len, used);
            if (state != GW_CODEC_SUCCESS) return state;
            state = xetra::deserialize (mClOrdID, buf, len, used);
            if (state != GW_CODEC_SUCCESS) return state;
            state = xetra::deserialize (mOrigClOrdID, buf, len, used);
            if (state != GW_CODEC_SUCCESS) return state;
            state = xetra::deserialize (mSecurityID, buf, len, used);
            if (state != GW_CODEC_SUCCESS) return state;
            state = xetra::deserialize (mExecID, buf, len, used);
            if (state != GW_CODEC_SUCCESS) return state;
            state = xetra::deserialize (mLeavesQty, buf, len, used);
            if (state != GW_CODEC_SUCCESS) return state;
            state = xetra::deserialize (mCumQty, buf, len, used);
            if (state != GW_CODEC_SUCCESS) return state;
            state = xetra::deserialize (mCxlQty, buf, len, used);
            if (state != GW_CODEC_SUCCESS) return state;
            state = xetra::deserialize (mDisplayQty, buf, len, used);
            if (state != GW_CODEC_SUCCESS) return state;
            state = xetra::deserialize (mMarketSegmentID, buf, len, used);
            if (state != GW_CODEC_SUCCESS) return state;
            state = xetra::deserialize (mOrderIDSfx, buf, len, used);
            if (state != GW_CODEC_SUCCESS) return state;
            state = xetra::deserialize (mExecRestatementReason, buf, len, used);
            if (state != GW_CODEC_SUCCESS) return state;
            state = xetra::deserialize (mSide, buf, len, used);
            if (state != GW_CODEC_SUCCESS) return state;
            state = xetra::deserialize (mOrdStatus, buf, len, used);
            if (state != GW_CODEC_SUCCESS) return state;
            state = xetra::deserialize (mExecType, buf, len, used);
            if (state != GW_CODEC_SUCCESS) return state;
            state = xetra::deserialize (mMatchType, buf, len, used);
            if (state != GW_CODEC_SUCCESS) return state;
            state = xetra::deserialize (mTriggered, buf, len, used);
            if (state != GW_CODEC_SUCCESS) return state;
            state = xetra::deserialize (mCrossedIndicator, buf, len, used);
            if (state != GW_CODEC_SUCCESS) return state;
            state = xetra::deserialize (mFIXClOrdID, buf, len, used);
            if (state != GW_CODEC_SUCCESS) return state;
            state = xetra::deserialize (mNoFills, buf, len, used);
            if (state != GW_CODEC_SUCCESS) return state;
            state = xetra::deserialize (mPad3, buf, len, used);
            if (state != GW_CODEC_SUCCESS) return state;
            mFillsGrp.resize (mNoFills);
            for (vector<xetraFillsGrpCompPacket>::iterator it = mFillsGrp.begin (); it != mFillsGrp.end (); ++it)
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
            sss << "OrderExecNotification::"
                << "[MessageHeaderOut=" << mMessageHeaderOut.toString () << "],"
                << "[RBCHeaderME=" << mRBCHeaderME.toString () << "],"
                << "[OrderID=" << getOrderID () << "],"
                << "[ClOrdID=" << getClOrdID () << "],"
                << "[OrigClOrdID=" << getOrigClOrdID () << "],"
                << "[SecurityID=" << getSecurityID () << "],"
                << "[ExecID=" << getExecID () << "],"
                << "[LeavesQty=" << getLeavesQty () << "],"
                << "[CumQty=" << getCumQty () << "],"
                << "[CxlQty=" << getCxlQty () << "],"
                << "[DisplayQty=" << getDisplayQty () << "],"
                << "[MarketSegmentID=" << getMarketSegmentID () << "],"
                << "[OrderIDSfx=" << getOrderIDSfx () << "],"
                << "[ExecRestatementReason=" << getExecRestatementReason () << "],"
                << "[Side=" << getSide () << "],"
                << "[OrdStatus=" << getOrdStatus () << "],"
                << "[ExecType=" << getExecType () << "],"
                << "[MatchType=" << getMatchType () << "],"
                << "[Triggered=" << getTriggered () << "],"
                << "[CrossedIndicator=" << getCrossedIndicator () << "],"
                << "[FIXClOrdID=" << getFIXClOrdID () << "],"
                << "[NoFills=" << getNoFills () << "],"
                << "[Pad3=" << getPad3 () << "],"
                << "[FillsGrp=" << xetra::toString (getFillsGrp ()) << "]";
            return sss.str();
        }
};

const uint64_t xetraOrderExecNotificationPacket::ORDER_ID_MIN = 0UL;
const uint64_t xetraOrderExecNotificationPacket::ORDER_ID_MAX = 18446744073709551614UL;
const uint64_t xetraOrderExecNotificationPacket::ORDER_ID_NO_VALUE = 0xFFFFFFFFFFFFFFFF;
const uint64_t xetraOrderExecNotificationPacket::CL_ORD_ID_MIN = 0UL;
const uint64_t xetraOrderExecNotificationPacket::CL_ORD_ID_MAX = 18446744073709551614UL;
const uint64_t xetraOrderExecNotificationPacket::CL_ORD_ID_NO_VALUE = 0xFFFFFFFFFFFFFFFF;
const uint64_t xetraOrderExecNotificationPacket::ORIG_CL_ORD_ID_MIN = 0UL;
const uint64_t xetraOrderExecNotificationPacket::ORIG_CL_ORD_ID_MAX = 18446744073709551614UL;
const uint64_t xetraOrderExecNotificationPacket::ORIG_CL_ORD_ID_NO_VALUE = 0xFFFFFFFFFFFFFFFF;
const int64_t xetraOrderExecNotificationPacket::SECURITY_ID_MIN = -9223372036854775807L;
const int64_t xetraOrderExecNotificationPacket::SECURITY_ID_MAX = 9223372036854775807L;
const int64_t xetraOrderExecNotificationPacket::SECURITY_ID_NO_VALUE = 0x8000000000000000;
const uint64_t xetraOrderExecNotificationPacket::EXEC_ID_MIN = 0UL;
const uint64_t xetraOrderExecNotificationPacket::EXEC_ID_MAX = 18446744073709551614UL;
const uint64_t xetraOrderExecNotificationPacket::EXEC_ID_NO_VALUE = 0xFFFFFFFFFFFFFFFF;
const double xetraOrderExecNotificationPacket::LEAVES_QTY_MIN = -922337203685477.5807;
const double xetraOrderExecNotificationPacket::LEAVES_QTY_MAX = 922337203685477.5807;
const int64_t xetraOrderExecNotificationPacket::LEAVES_QTY_NO_VALUE = 0x8000000000000000;
const double xetraOrderExecNotificationPacket::CUM_QTY_MIN = -922337203685477.5807;
const double xetraOrderExecNotificationPacket::CUM_QTY_MAX = 922337203685477.5807;
const int64_t xetraOrderExecNotificationPacket::CUM_QTY_NO_VALUE = 0x8000000000000000;
const double xetraOrderExecNotificationPacket::CXL_QTY_MIN = -922337203685477.5807;
const double xetraOrderExecNotificationPacket::CXL_QTY_MAX = 922337203685477.5807;
const int64_t xetraOrderExecNotificationPacket::CXL_QTY_NO_VALUE = 0x8000000000000000;
const double xetraOrderExecNotificationPacket::DISPLAY_QTY_MIN = -922337203685477.5807;
const double xetraOrderExecNotificationPacket::DISPLAY_QTY_MAX = 922337203685477.5807;
const int64_t xetraOrderExecNotificationPacket::DISPLAY_QTY_NO_VALUE = 0x8000000000000000;
const int32_t xetraOrderExecNotificationPacket::MARKET_SEGMENT_ID_MIN = -2147483647;
const int32_t xetraOrderExecNotificationPacket::MARKET_SEGMENT_ID_MAX = 2147483647;
const int32_t xetraOrderExecNotificationPacket::MARKET_SEGMENT_ID_NO_VALUE = 0x80000000;
const uint32_t xetraOrderExecNotificationPacket::ORDER_IDSFX_MIN = 0;
const uint32_t xetraOrderExecNotificationPacket::ORDER_IDSFX_MAX = 4294967294;
const uint32_t xetraOrderExecNotificationPacket::ORDER_IDSFX_NO_VALUE = 0xFFFFFFFF;
const int16_t xetraOrderExecNotificationPacket::EXEC_RESTATEMENT_REASON_MIN = 0;
const int16_t xetraOrderExecNotificationPacket::EXEC_RESTATEMENT_REASON_MAX = 344;
const int16_t xetraOrderExecNotificationPacket::EXEC_RESTATEMENT_REASON_NO_VALUE = 0xFFFF;
const int8_t xetraOrderExecNotificationPacket::SIDE_MIN = 1;
const int8_t xetraOrderExecNotificationPacket::SIDE_MAX = 2;
const int8_t xetraOrderExecNotificationPacket::SIDE_NO_VALUE = 0xFF;
const char xetraOrderExecNotificationPacket::ORD_STATUS_NO_VALUE[1] = {0x00};
const size_t xetraOrderExecNotificationPacket::ORD_STATUS_MAX_LENGTH = 1;
const char xetraOrderExecNotificationPacket::EXEC_TYPE_NO_VALUE[1] = {0x00};
const size_t xetraOrderExecNotificationPacket::EXEC_TYPE_MAX_LENGTH = 1;
const int8_t xetraOrderExecNotificationPacket::MATCH_TYPE_MIN = 0;
const int8_t xetraOrderExecNotificationPacket::MATCH_TYPE_MAX = 14;
const int8_t xetraOrderExecNotificationPacket::MATCH_TYPE_NO_VALUE = 0xFF;
const int8_t xetraOrderExecNotificationPacket::TRIGGERED_MIN = 0;
const int8_t xetraOrderExecNotificationPacket::TRIGGERED_MAX = 2;
const int8_t xetraOrderExecNotificationPacket::TRIGGERED_NO_VALUE = 0xFF;
const int8_t xetraOrderExecNotificationPacket::CROSSED_INDICATOR_MIN = 0;
const int8_t xetraOrderExecNotificationPacket::CROSSED_INDICATOR_MAX = 1;
const int8_t xetraOrderExecNotificationPacket::CROSSED_INDICATOR_NO_VALUE = 0xFF;
const char xetraOrderExecNotificationPacket::FIXCL_ORD_ID_NO_VALUE[20] = {0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00};
const size_t xetraOrderExecNotificationPacket::FIXCL_ORD_ID_MAX_LENGTH = 20;
const int8_t xetraOrderExecNotificationPacket::NO_FILLS_MIN = 0;
const int8_t xetraOrderExecNotificationPacket::NO_FILLS_MAX = 100;
const int8_t xetraOrderExecNotificationPacket::NO_FILLS_NO_VALUE = 0xFF;
const char xetraOrderExecNotificationPacket::PAD3_NO_VALUE[3] = {0x00, 0x00, 0x00};
const size_t xetraOrderExecNotificationPacket::PAD3_MAX_LENGTH = 3;
const size_t xetraOrderExecNotificationPacket::FILLS_GRP_MIN = 0;
const size_t xetraOrderExecNotificationPacket::FILLS_GRP_MAX = 100;


} // namespace neueda

#endif // XETRA_ORDEREXECNOTIFICATION_PACKET_H
