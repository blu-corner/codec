/*
 * Copyright 2014-2018 Neueda Ltd.
 * 
 * Generated 21/05/2019
 */
#ifndef EUREX_MODIFYTESTRADEREQUEST_PACKET_H
#define EUREX_MODIFYTESTRADEREQUEST_PACKET_H

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

class eurexModifyTESTradeRequestPacket
{
    public:
        // no value constants
        static const double LAST_PX_MIN;
        static const double LAST_PX_MAX;
        static const int64_t LAST_PX_NO_VALUE;
        static const uint64_t TRANS_BKD_TIME_MIN;
        static const uint64_t TRANS_BKD_TIME_MAX;
        static const uint64_t TRANS_BKD_TIME_NO_VALUE;
        static const int32_t MARKET_SEGMENT_ID_MIN;
        static const int32_t MARKET_SEGMENT_ID_MAX;
        static const int32_t MARKET_SEGMENT_ID_NO_VALUE;
        static const uint32_t PACKAGE_ID_MIN;
        static const uint32_t PACKAGE_ID_MAX;
        static const uint32_t PACKAGE_ID_NO_VALUE;
        static const uint32_t TESEXEC_ID_MIN;
        static const uint32_t TESEXEC_ID_MAX;
        static const uint32_t TESEXEC_ID_NO_VALUE;
        static const int32_t RELATED_MARKET_SEGMENT_ID_MIN;
        static const int32_t RELATED_MARKET_SEGMENT_ID_MAX;
        static const int32_t RELATED_MARKET_SEGMENT_ID_NO_VALUE;
        static const uint32_t NEGOTIATION_ID_MIN;
        static const uint32_t NEGOTIATION_ID_MAX;
        static const uint32_t NEGOTIATION_ID_NO_VALUE;
        static const int8_t NO_SRQSRELATED_TRADE_IDS_MIN;
        static const int8_t NO_SRQSRELATED_TRADE_IDS_MAX;
        static const int8_t NO_SRQSRELATED_TRADE_IDS_NO_VALUE;
        static const char PAD1_NO_VALUE[1];
        static const size_t PAD1_MAX_LENGTH;
        static const int16_t TRD_TYPE_MIN;
        static const int16_t TRD_TYPE_MAX;
        static const int16_t TRD_TYPE_NO_VALUE;
        static const int8_t TRADE_REPORT_TYPE_MIN;
        static const int8_t TRADE_REPORT_TYPE_MAX;
        static const int8_t TRADE_REPORT_TYPE_NO_VALUE;
        static const int8_t TRADE_PUBLISH_INDICATOR_MIN;
        static const int8_t TRADE_PUBLISH_INDICATOR_MAX;
        static const int8_t TRADE_PUBLISH_INDICATOR_NO_VALUE;
        static const int8_t NO_SIDE_ALLOCS_MIN;
        static const int8_t NO_SIDE_ALLOCS_MAX;
        static const int8_t NO_SIDE_ALLOCS_NO_VALUE;
        static const int8_t NO_LEGS_MIN;
        static const int8_t NO_LEGS_MAX;
        static const int8_t NO_LEGS_NO_VALUE;
        static const char TRADE_REPORT_TEXT_NO_VALUE[20];
        static const size_t TRADE_REPORT_TEXT_MAX_LENGTH;
        static const char TRADE_REPORT_ID_NO_VALUE[20];
        static const size_t TRADE_REPORT_ID_MAX_LENGTH;
        static const char PAD4_NO_VALUE[4];
        static const size_t PAD4_MAX_LENGTH;
        static const size_t SIDE_ALLOC_GRP_MIN;
        static const size_t SIDE_ALLOC_GRP_MAX;
        static const size_t TRD_INSTRMNT_LEG_GRP_MIN;
        static const size_t TRD_INSTRMNT_LEG_GRP_MAX;
        static const size_t SRQSRELATED_TRADE_IDGRP_MIN;
        static const size_t SRQSRELATED_TRADE_IDGRP_MAX;

        // fields (use with care)
        eurexMessageHeaderInCompPacket mMessageHeaderIn;
        eurexRequestHeaderCompPacket mRequestHeader;
        int64_t mLastPx;
        uint64_t mTransBkdTime;
        int32_t mMarketSegmentID;
        uint32_t mPackageID;
        uint32_t mTESExecID;
        int32_t mRelatedMarketSegmentID;
        uint32_t mNegotiationID;
        int8_t mNoSRQSRelatedTradeIDs;
        char mPad1[1];
        int16_t mTrdType;
        int8_t mTradeReportType;
        int8_t mTradePublishIndicator;
        int8_t mNoSideAllocs;
        int8_t mNoLegs;
        char mTradeReportText[20];
        char mTradeReportID[20];
        char mPad4[4];
        vector<eurexSideAllocGrpCompPacket> mSideAllocGrp;
        vector<eurexTrdInstrmntLegGrpCompPacket> mTrdInstrmntLegGrp;
        vector<eurexSRQSRelatedTradeIDGrpCompPacket> mSRQSRelatedTradeIDGrp;

        // constructor
        eurexModifyTESTradeRequestPacket ()
        {
            mMessageHeaderIn.mTemplateID = 10601;
            mLastPx = LAST_PX_NO_VALUE;
            mTransBkdTime = TRANS_BKD_TIME_NO_VALUE;
            mMarketSegmentID = MARKET_SEGMENT_ID_NO_VALUE;
            mPackageID = PACKAGE_ID_NO_VALUE;
            mTESExecID = TESEXEC_ID_NO_VALUE;
            mRelatedMarketSegmentID = RELATED_MARKET_SEGMENT_ID_NO_VALUE;
            mNegotiationID = NEGOTIATION_ID_NO_VALUE;
            mNoSRQSRelatedTradeIDs = NO_SRQSRELATED_TRADE_IDS_NO_VALUE;
            memcpy(mPad1, PAD1_NO_VALUE, sizeof (mPad1));
            mTrdType = TRD_TYPE_NO_VALUE;
            mTradeReportType = TRADE_REPORT_TYPE_NO_VALUE;
            mTradePublishIndicator = TRADE_PUBLISH_INDICATOR_NO_VALUE;
            mNoSideAllocs = NO_SIDE_ALLOCS_NO_VALUE;
            mNoLegs = NO_LEGS_NO_VALUE;
            memcpy(mTradeReportText, TRADE_REPORT_TEXT_NO_VALUE, sizeof (mTradeReportText));
            memcpy(mTradeReportID, TRADE_REPORT_ID_NO_VALUE, sizeof (mTradeReportID));
            memcpy(mPad4, PAD4_NO_VALUE, sizeof (mPad4));
        }

        // getters & setters
        const eurexMessageHeaderInCompPacket& getMessageHeaderIn () const
        {
            return mMessageHeaderIn;
        }

        bool setMessageHeaderIn (const eurexMessageHeaderInCompPacket& v)
        {
            mMessageHeaderIn = v;
            return true;
        }

        const eurexRequestHeaderCompPacket& getRequestHeader () const
        {
            return mRequestHeader;
        }

        bool setRequestHeader (const eurexRequestHeaderCompPacket& v)
        {
            mRequestHeader = v;
            return true;
        }

        double getLastPx () const
        {
            return mLastPx / 100000000.0;
        }

        bool setLastPx (double v)
        {
            mLastPx = v * 100000000.0;
            return ((LAST_PX_MIN <= v && v <= LAST_PX_MAX) || mLastPx == LAST_PX_NO_VALUE);
        }

        bool isLastPxValid () const
        {
            return (mLastPx != LAST_PX_NO_VALUE);
        }

        void resetLastPx ()
        {
            mLastPx = LAST_PX_NO_VALUE;
        }

        uint64_t getTransBkdTime () const
        {
            return mTransBkdTime;
        }

        bool setTransBkdTime (uint64_t v)
        {
            mTransBkdTime = v;
            return ((TRANS_BKD_TIME_MIN <= mTransBkdTime && mTransBkdTime <= TRANS_BKD_TIME_MAX) || mTransBkdTime == TRANS_BKD_TIME_NO_VALUE);
        }

        bool isTransBkdTimeValid () const
        {
            return (mTransBkdTime != TRANS_BKD_TIME_NO_VALUE);
        }

        void resetTransBkdTime ()
        {
            mTransBkdTime = TRANS_BKD_TIME_NO_VALUE;
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

        uint32_t getPackageID () const
        {
            return mPackageID;
        }

        bool setPackageID (uint32_t v)
        {
            mPackageID = v;
            return ((PACKAGE_ID_MIN <= mPackageID && mPackageID <= PACKAGE_ID_MAX) || mPackageID == PACKAGE_ID_NO_VALUE);
        }

        bool isPackageIDValid () const
        {
            return (mPackageID != PACKAGE_ID_NO_VALUE);
        }

        void resetPackageID ()
        {
            mPackageID = PACKAGE_ID_NO_VALUE;
        }

        uint32_t getTESExecID () const
        {
            return mTESExecID;
        }

        bool setTESExecID (uint32_t v)
        {
            mTESExecID = v;
            return ((TESEXEC_ID_MIN <= mTESExecID && mTESExecID <= TESEXEC_ID_MAX) || mTESExecID == TESEXEC_ID_NO_VALUE);
        }

        bool isTESExecIDValid () const
        {
            return (mTESExecID != TESEXEC_ID_NO_VALUE);
        }

        void resetTESExecID ()
        {
            mTESExecID = TESEXEC_ID_NO_VALUE;
        }

        int32_t getRelatedMarketSegmentID () const
        {
            return mRelatedMarketSegmentID;
        }

        bool setRelatedMarketSegmentID (int32_t v)
        {
            mRelatedMarketSegmentID = v;
            return ((RELATED_MARKET_SEGMENT_ID_MIN <= mRelatedMarketSegmentID && mRelatedMarketSegmentID <= RELATED_MARKET_SEGMENT_ID_MAX) || mRelatedMarketSegmentID == RELATED_MARKET_SEGMENT_ID_NO_VALUE);
        }

        bool isRelatedMarketSegmentIDValid () const
        {
            return (mRelatedMarketSegmentID != RELATED_MARKET_SEGMENT_ID_NO_VALUE);
        }

        void resetRelatedMarketSegmentID ()
        {
            mRelatedMarketSegmentID = RELATED_MARKET_SEGMENT_ID_NO_VALUE;
        }

        uint32_t getNegotiationID () const
        {
            return mNegotiationID;
        }

        bool setNegotiationID (uint32_t v)
        {
            mNegotiationID = v;
            return ((NEGOTIATION_ID_MIN <= mNegotiationID && mNegotiationID <= NEGOTIATION_ID_MAX) || mNegotiationID == NEGOTIATION_ID_NO_VALUE);
        }

        bool isNegotiationIDValid () const
        {
            return (mNegotiationID != NEGOTIATION_ID_NO_VALUE);
        }

        void resetNegotiationID ()
        {
            mNegotiationID = NEGOTIATION_ID_NO_VALUE;
        }

        int8_t getNoSRQSRelatedTradeIDs () const
        {
            return mNoSRQSRelatedTradeIDs;
        }

        bool setNoSRQSRelatedTradeIDs (int8_t v)
        {
            mNoSRQSRelatedTradeIDs = v;
            return ((NO_SRQSRELATED_TRADE_IDS_MIN <= mNoSRQSRelatedTradeIDs && mNoSRQSRelatedTradeIDs <= NO_SRQSRELATED_TRADE_IDS_MAX) || mNoSRQSRelatedTradeIDs == NO_SRQSRELATED_TRADE_IDS_NO_VALUE);
        }

        bool isNoSRQSRelatedTradeIDsValid () const
        {
            return (mNoSRQSRelatedTradeIDs != NO_SRQSRELATED_TRADE_IDS_NO_VALUE);
        }

        void resetNoSRQSRelatedTradeIDs ()
        {
            mNoSRQSRelatedTradeIDs = NO_SRQSRELATED_TRADE_IDS_NO_VALUE;
        }

        string getPad1 () const
        {
            return string (mPad1, PAD1_MAX_LENGTH);
        }

        bool setPad1 (const string& v)
        {
            memset (mPad1, '\0', sizeof (mPad1));
            size_t size = min ((size_t) v.size (), (size_t) PAD1_MAX_LENGTH);
            strncpy (mPad1, v.c_str (), size);
            return (v.size () <= PAD1_MAX_LENGTH);
        }

        bool isPad1Valid () const
        {
            return (memcmp (mPad1, PAD1_NO_VALUE, sizeof (mPad1)) != 0);
        }

        void resetPad1 ()
        {
            memcpy (mPad1, PAD1_NO_VALUE, sizeof (mPad1));
        }

        int16_t getTrdType () const
        {
            return mTrdType;
        }

        bool setTrdType (int16_t v)
        {
            mTrdType = v;
            return ((TRD_TYPE_MIN <= mTrdType && mTrdType <= TRD_TYPE_MAX) || mTrdType == TRD_TYPE_NO_VALUE);
        }

        bool isTrdTypeValid () const
        {
            return (mTrdType != TRD_TYPE_NO_VALUE);
        }

        void resetTrdType ()
        {
            mTrdType = TRD_TYPE_NO_VALUE;
        }

        int8_t getTradeReportType () const
        {
            return mTradeReportType;
        }

        bool setTradeReportType (int8_t v)
        {
            mTradeReportType = v;
            return ((TRADE_REPORT_TYPE_MIN <= mTradeReportType && mTradeReportType <= TRADE_REPORT_TYPE_MAX) || mTradeReportType == TRADE_REPORT_TYPE_NO_VALUE);
        }

        bool isTradeReportTypeValid () const
        {
            return (mTradeReportType != TRADE_REPORT_TYPE_NO_VALUE);
        }

        void resetTradeReportType ()
        {
            mTradeReportType = TRADE_REPORT_TYPE_NO_VALUE;
        }

        int8_t getTradePublishIndicator () const
        {
            return mTradePublishIndicator;
        }

        bool setTradePublishIndicator (int8_t v)
        {
            mTradePublishIndicator = v;
            return ((TRADE_PUBLISH_INDICATOR_MIN <= mTradePublishIndicator && mTradePublishIndicator <= TRADE_PUBLISH_INDICATOR_MAX) || mTradePublishIndicator == TRADE_PUBLISH_INDICATOR_NO_VALUE);
        }

        bool isTradePublishIndicatorValid () const
        {
            return (mTradePublishIndicator != TRADE_PUBLISH_INDICATOR_NO_VALUE);
        }

        void resetTradePublishIndicator ()
        {
            mTradePublishIndicator = TRADE_PUBLISH_INDICATOR_NO_VALUE;
        }

        int8_t getNoSideAllocs () const
        {
            return mNoSideAllocs;
        }

        bool setNoSideAllocs (int8_t v)
        {
            mNoSideAllocs = v;
            return ((NO_SIDE_ALLOCS_MIN <= mNoSideAllocs && mNoSideAllocs <= NO_SIDE_ALLOCS_MAX) || mNoSideAllocs == NO_SIDE_ALLOCS_NO_VALUE);
        }

        bool isNoSideAllocsValid () const
        {
            return (mNoSideAllocs != NO_SIDE_ALLOCS_NO_VALUE);
        }

        void resetNoSideAllocs ()
        {
            mNoSideAllocs = NO_SIDE_ALLOCS_NO_VALUE;
        }

        int8_t getNoLegs () const
        {
            return mNoLegs;
        }

        bool setNoLegs (int8_t v)
        {
            mNoLegs = v;
            return ((NO_LEGS_MIN <= mNoLegs && mNoLegs <= NO_LEGS_MAX) || mNoLegs == NO_LEGS_NO_VALUE);
        }

        bool isNoLegsValid () const
        {
            return (mNoLegs != NO_LEGS_NO_VALUE);
        }

        void resetNoLegs ()
        {
            mNoLegs = NO_LEGS_NO_VALUE;
        }

        string getTradeReportText () const
        {
            return string (mTradeReportText, TRADE_REPORT_TEXT_MAX_LENGTH);
        }

        bool setTradeReportText (const string& v)
        {
            memset (mTradeReportText, '\0', sizeof (mTradeReportText));
            size_t size = min ((size_t) v.size (), (size_t) TRADE_REPORT_TEXT_MAX_LENGTH);
            strncpy (mTradeReportText, v.c_str (), size);
            return (v.size () <= TRADE_REPORT_TEXT_MAX_LENGTH);
        }

        bool isTradeReportTextValid () const
        {
            return (memcmp (mTradeReportText, TRADE_REPORT_TEXT_NO_VALUE, sizeof (mTradeReportText)) != 0);
        }

        void resetTradeReportText ()
        {
            memcpy (mTradeReportText, TRADE_REPORT_TEXT_NO_VALUE, sizeof (mTradeReportText));
        }

        string getTradeReportID () const
        {
            return string (mTradeReportID, TRADE_REPORT_ID_MAX_LENGTH);
        }

        bool setTradeReportID (const string& v)
        {
            memset (mTradeReportID, '\0', sizeof (mTradeReportID));
            size_t size = min ((size_t) v.size (), (size_t) TRADE_REPORT_ID_MAX_LENGTH);
            strncpy (mTradeReportID, v.c_str (), size);
            return (v.size () <= TRADE_REPORT_ID_MAX_LENGTH);
        }

        bool isTradeReportIDValid () const
        {
            return (memcmp (mTradeReportID, TRADE_REPORT_ID_NO_VALUE, sizeof (mTradeReportID)) != 0);
        }

        void resetTradeReportID ()
        {
            memcpy (mTradeReportID, TRADE_REPORT_ID_NO_VALUE, sizeof (mTradeReportID));
        }

        string getPad4 () const
        {
            return string (mPad4, PAD4_MAX_LENGTH);
        }

        bool setPad4 (const string& v)
        {
            memset (mPad4, '\0', sizeof (mPad4));
            size_t size = min ((size_t) v.size (), (size_t) PAD4_MAX_LENGTH);
            strncpy (mPad4, v.c_str (), size);
            return (v.size () <= PAD4_MAX_LENGTH);
        }

        bool isPad4Valid () const
        {
            return (memcmp (mPad4, PAD4_NO_VALUE, sizeof (mPad4)) != 0);
        }

        void resetPad4 ()
        {
            memcpy (mPad4, PAD4_NO_VALUE, sizeof (mPad4));
        }

        const vector<eurexSideAllocGrpCompPacket>& getSideAllocGrp () const
        {
            return mSideAllocGrp;
        }

        bool setSideAllocGrp (const vector<eurexSideAllocGrpCompPacket>& v)
        {
            mSideAllocGrp = v;
            mNoSideAllocs = v.size ();
            return (SIDE_ALLOC_GRP_MIN <= v.size () && v.size () <= SIDE_ALLOC_GRP_MAX);
        }

        const vector<eurexTrdInstrmntLegGrpCompPacket>& getTrdInstrmntLegGrp () const
        {
            return mTrdInstrmntLegGrp;
        }

        bool setTrdInstrmntLegGrp (const vector<eurexTrdInstrmntLegGrpCompPacket>& v)
        {
            mTrdInstrmntLegGrp = v;
            mNoLegs = v.size ();
            return (TRD_INSTRMNT_LEG_GRP_MIN <= v.size () && v.size () <= TRD_INSTRMNT_LEG_GRP_MAX);
        }

        const vector<eurexSRQSRelatedTradeIDGrpCompPacket>& getSRQSRelatedTradeIDGrp () const
        {
            return mSRQSRelatedTradeIDGrp;
        }

        bool setSRQSRelatedTradeIDGrp (const vector<eurexSRQSRelatedTradeIDGrpCompPacket>& v)
        {
            mSRQSRelatedTradeIDGrp = v;
            mNoSRQSRelatedTradeIDs = v.size ();
            return (SRQSRELATED_TRADE_IDGRP_MIN <= v.size () && v.size () <= SRQSRELATED_TRADE_IDGRP_MAX);
        }


        // render current raw size
        size_t getRawSize () const
        {
            size_t result = mMessageHeaderIn.getRawSize()
                + mRequestHeader.getRawSize()
                + sizeof (mLastPx)
                + sizeof (mTransBkdTime)
                + sizeof (mMarketSegmentID)
                + sizeof (mPackageID)
                + sizeof (mTESExecID)
                + sizeof (mRelatedMarketSegmentID)
                + sizeof (mNegotiationID)
                + sizeof (mNoSRQSRelatedTradeIDs)
                + sizeof (mPad1)
                + sizeof (mTrdType)
                + sizeof (mTradeReportType)
                + sizeof (mTradePublishIndicator)
                + sizeof (mNoSideAllocs)
                + sizeof (mNoLegs)
                + sizeof (mTradeReportText)
                + sizeof (mTradeReportID)
                + sizeof (mPad4)
                + eti::getRawSize (mSideAllocGrp)
                + eti::getRawSize (mTrdInstrmntLegGrp)
                + eti::getRawSize (mSRQSRelatedTradeIDGrp);
            return result;
        }

        // serialization
        codecState serialize (void *buf, size_t len, size_t &used)
        {
            mNoSideAllocs = mSideAllocGrp.size ();
            mNoLegs = mTrdInstrmntLegGrp.size ();
            mNoSRQSRelatedTradeIDs = mSRQSRelatedTradeIDGrp.size ();
            mMessageHeaderIn.mBodyLen = getRawSize ();
            codecState state;
            state = mMessageHeaderIn.serialize (buf, len, used);
            if (state != GW_CODEC_SUCCESS) return state;
            state = mRequestHeader.serialize (buf, len, used);
            if (state != GW_CODEC_SUCCESS) return state;
            state = eti::serialize (mLastPx, buf, len, used);
            if (state != GW_CODEC_SUCCESS) return state;
            state = eti::serialize (mTransBkdTime, buf, len, used);
            if (state != GW_CODEC_SUCCESS) return state;
            state = eti::serialize (mMarketSegmentID, buf, len, used);
            if (state != GW_CODEC_SUCCESS) return state;
            state = eti::serialize (mPackageID, buf, len, used);
            if (state != GW_CODEC_SUCCESS) return state;
            state = eti::serialize (mTESExecID, buf, len, used);
            if (state != GW_CODEC_SUCCESS) return state;
            state = eti::serialize (mRelatedMarketSegmentID, buf, len, used);
            if (state != GW_CODEC_SUCCESS) return state;
            state = eti::serialize (mNegotiationID, buf, len, used);
            if (state != GW_CODEC_SUCCESS) return state;
            state = eti::serialize (mNoSRQSRelatedTradeIDs, buf, len, used);
            if (state != GW_CODEC_SUCCESS) return state;
            state = eti::serialize (mPad1, buf, len, used);
            if (state != GW_CODEC_SUCCESS) return state;
            state = eti::serialize (mTrdType, buf, len, used);
            if (state != GW_CODEC_SUCCESS) return state;
            state = eti::serialize (mTradeReportType, buf, len, used);
            if (state != GW_CODEC_SUCCESS) return state;
            state = eti::serialize (mTradePublishIndicator, buf, len, used);
            if (state != GW_CODEC_SUCCESS) return state;
            state = eti::serialize (mNoSideAllocs, buf, len, used);
            if (state != GW_CODEC_SUCCESS) return state;
            state = eti::serialize (mNoLegs, buf, len, used);
            if (state != GW_CODEC_SUCCESS) return state;
            state = eti::serialize (mTradeReportText, buf, len, used);
            if (state != GW_CODEC_SUCCESS) return state;
            state = eti::serialize (mTradeReportID, buf, len, used);
            if (state != GW_CODEC_SUCCESS) return state;
            state = eti::serialize (mPad4, buf, len, used);
            if (state != GW_CODEC_SUCCESS) return state;
            for (size_t i = 0; i < mSideAllocGrp.size (); i++)
            {
                state = mSideAllocGrp[i].serialize (buf, len, used);
                if (state != GW_CODEC_SUCCESS) return state;
            }
            for (size_t i = 0; i < mTrdInstrmntLegGrp.size (); i++)
            {
                state = mTrdInstrmntLegGrp[i].serialize (buf, len, used);
                if (state != GW_CODEC_SUCCESS) return state;
            }
            for (size_t i = 0; i < mSRQSRelatedTradeIDGrp.size (); i++)
            {
                state = mSRQSRelatedTradeIDGrp[i].serialize (buf, len, used);
                if (state != GW_CODEC_SUCCESS) return state;
            }
            return GW_CODEC_SUCCESS;
        }

        // deserialization
        codecState deserialize (const void *buf, size_t len, size_t &used)
        {
            codecState state;
            state = mMessageHeaderIn.deserialize (buf, len, used);
            if (state != GW_CODEC_SUCCESS) return state;
            state = mRequestHeader.deserialize (buf, len, used);
            if (state != GW_CODEC_SUCCESS) return state;
            state = eti::deserialize (mLastPx, buf, len, used);
            if (state != GW_CODEC_SUCCESS) return state;
            state = eti::deserialize (mTransBkdTime, buf, len, used);
            if (state != GW_CODEC_SUCCESS) return state;
            state = eti::deserialize (mMarketSegmentID, buf, len, used);
            if (state != GW_CODEC_SUCCESS) return state;
            state = eti::deserialize (mPackageID, buf, len, used);
            if (state != GW_CODEC_SUCCESS) return state;
            state = eti::deserialize (mTESExecID, buf, len, used);
            if (state != GW_CODEC_SUCCESS) return state;
            state = eti::deserialize (mRelatedMarketSegmentID, buf, len, used);
            if (state != GW_CODEC_SUCCESS) return state;
            state = eti::deserialize (mNegotiationID, buf, len, used);
            if (state != GW_CODEC_SUCCESS) return state;
            state = eti::deserialize (mNoSRQSRelatedTradeIDs, buf, len, used);
            if (state != GW_CODEC_SUCCESS) return state;
            state = eti::deserialize (mPad1, buf, len, used);
            if (state != GW_CODEC_SUCCESS) return state;
            state = eti::deserialize (mTrdType, buf, len, used);
            if (state != GW_CODEC_SUCCESS) return state;
            state = eti::deserialize (mTradeReportType, buf, len, used);
            if (state != GW_CODEC_SUCCESS) return state;
            state = eti::deserialize (mTradePublishIndicator, buf, len, used);
            if (state != GW_CODEC_SUCCESS) return state;
            state = eti::deserialize (mNoSideAllocs, buf, len, used);
            if (state != GW_CODEC_SUCCESS) return state;
            state = eti::deserialize (mNoLegs, buf, len, used);
            if (state != GW_CODEC_SUCCESS) return state;
            state = eti::deserialize (mTradeReportText, buf, len, used);
            if (state != GW_CODEC_SUCCESS) return state;
            state = eti::deserialize (mTradeReportID, buf, len, used);
            if (state != GW_CODEC_SUCCESS) return state;
            state = eti::deserialize (mPad4, buf, len, used);
            if (state != GW_CODEC_SUCCESS) return state;
            mSideAllocGrp.resize (mNoSideAllocs);
            for (vector<eurexSideAllocGrpCompPacket>::iterator it = mSideAllocGrp.begin (); it != mSideAllocGrp.end (); ++it)
            {
                state = it->deserialize (buf, len, used);
                if (state != GW_CODEC_SUCCESS) return state;
            }
            mTrdInstrmntLegGrp.resize (mNoLegs);
            for (vector<eurexTrdInstrmntLegGrpCompPacket>::iterator it = mTrdInstrmntLegGrp.begin (); it != mTrdInstrmntLegGrp.end (); ++it)
            {
                state = it->deserialize (buf, len, used);
                if (state != GW_CODEC_SUCCESS) return state;
            }
            mSRQSRelatedTradeIDGrp.resize (mNoSRQSRelatedTradeIDs);
            for (vector<eurexSRQSRelatedTradeIDGrpCompPacket>::iterator it = mSRQSRelatedTradeIDGrp.begin (); it != mSRQSRelatedTradeIDGrp.end (); ++it)
            {
                state = it->deserialize (buf, len, used);
                if (state != GW_CODEC_SUCCESS) return state;
            }
            mMessageHeaderIn.mBodyLen = getRawSize ();
            return GW_CODEC_SUCCESS;
        }

        // string conversion
        string toString () const
        {
            stringstream sss;
            sss << "ModifyTESTradeRequest::"
                << "[MessageHeaderIn=" << mMessageHeaderIn.toString () << "],"
                << "[RequestHeader=" << mRequestHeader.toString () << "],"
                << "[LastPx=" << getLastPx () << "],"
                << "[TransBkdTime=" << getTransBkdTime () << "],"
                << "[MarketSegmentID=" << getMarketSegmentID () << "],"
                << "[PackageID=" << getPackageID () << "],"
                << "[TESExecID=" << getTESExecID () << "],"
                << "[RelatedMarketSegmentID=" << getRelatedMarketSegmentID () << "],"
                << "[NegotiationID=" << getNegotiationID () << "],"
                << "[NoSRQSRelatedTradeIDs=" << getNoSRQSRelatedTradeIDs () << "],"
                << "[Pad1=" << getPad1 () << "],"
                << "[TrdType=" << getTrdType () << "],"
                << "[TradeReportType=" << getTradeReportType () << "],"
                << "[TradePublishIndicator=" << getTradePublishIndicator () << "],"
                << "[NoSideAllocs=" << getNoSideAllocs () << "],"
                << "[NoLegs=" << getNoLegs () << "],"
                << "[TradeReportText=" << getTradeReportText () << "],"
                << "[TradeReportID=" << getTradeReportID () << "],"
                << "[Pad4=" << getPad4 () << "],"
                << "[SideAllocGrp=" << eti::toString (getSideAllocGrp ()) << "],"
                << "[TrdInstrmntLegGrp=" << eti::toString (getTrdInstrmntLegGrp ()) << "],"
                << "[SRQSRelatedTradeIDGrp=" << eti::toString (getSRQSRelatedTradeIDGrp ()) << "]";
            return sss.str();
        }
};

const double eurexModifyTESTradeRequestPacket::LAST_PX_MIN = -92233720368.54775807;
const double eurexModifyTESTradeRequestPacket::LAST_PX_MAX = 92233720368.54775807;
const int64_t eurexModifyTESTradeRequestPacket::LAST_PX_NO_VALUE = 0x8000000000000000;
const uint64_t eurexModifyTESTradeRequestPacket::TRANS_BKD_TIME_MIN = 0UL;
const uint64_t eurexModifyTESTradeRequestPacket::TRANS_BKD_TIME_MAX = 18446744073709551614UL;
const uint64_t eurexModifyTESTradeRequestPacket::TRANS_BKD_TIME_NO_VALUE = 0xFFFFFFFFFFFFFFFF;
const int32_t eurexModifyTESTradeRequestPacket::MARKET_SEGMENT_ID_MIN = -2147483647;
const int32_t eurexModifyTESTradeRequestPacket::MARKET_SEGMENT_ID_MAX = 2147483647;
const int32_t eurexModifyTESTradeRequestPacket::MARKET_SEGMENT_ID_NO_VALUE = 0x80000000;
const uint32_t eurexModifyTESTradeRequestPacket::PACKAGE_ID_MIN = 0;
const uint32_t eurexModifyTESTradeRequestPacket::PACKAGE_ID_MAX = 4294967294;
const uint32_t eurexModifyTESTradeRequestPacket::PACKAGE_ID_NO_VALUE = 0xFFFFFFFF;
const uint32_t eurexModifyTESTradeRequestPacket::TESEXEC_ID_MIN = 0;
const uint32_t eurexModifyTESTradeRequestPacket::TESEXEC_ID_MAX = 4294967294;
const uint32_t eurexModifyTESTradeRequestPacket::TESEXEC_ID_NO_VALUE = 0xFFFFFFFF;
const int32_t eurexModifyTESTradeRequestPacket::RELATED_MARKET_SEGMENT_ID_MIN = -2147483647;
const int32_t eurexModifyTESTradeRequestPacket::RELATED_MARKET_SEGMENT_ID_MAX = 2147483647;
const int32_t eurexModifyTESTradeRequestPacket::RELATED_MARKET_SEGMENT_ID_NO_VALUE = 0x80000000;
const uint32_t eurexModifyTESTradeRequestPacket::NEGOTIATION_ID_MIN = 0;
const uint32_t eurexModifyTESTradeRequestPacket::NEGOTIATION_ID_MAX = 4294967294;
const uint32_t eurexModifyTESTradeRequestPacket::NEGOTIATION_ID_NO_VALUE = 0xFFFFFFFF;
const int8_t eurexModifyTESTradeRequestPacket::NO_SRQSRELATED_TRADE_IDS_MIN = 0;
const int8_t eurexModifyTESTradeRequestPacket::NO_SRQSRELATED_TRADE_IDS_MAX = 12;
const int8_t eurexModifyTESTradeRequestPacket::NO_SRQSRELATED_TRADE_IDS_NO_VALUE = 0xFF;
const char eurexModifyTESTradeRequestPacket::PAD1_NO_VALUE[1] = {0x00};
const size_t eurexModifyTESTradeRequestPacket::PAD1_MAX_LENGTH = 1;
const int16_t eurexModifyTESTradeRequestPacket::TRD_TYPE_MIN = 1;
const int16_t eurexModifyTESTradeRequestPacket::TRD_TYPE_MAX = 1010;
const int16_t eurexModifyTESTradeRequestPacket::TRD_TYPE_NO_VALUE = 0xFFFF;
const int8_t eurexModifyTESTradeRequestPacket::TRADE_REPORT_TYPE_MIN = 0;
const int8_t eurexModifyTESTradeRequestPacket::TRADE_REPORT_TYPE_MAX = 13;
const int8_t eurexModifyTESTradeRequestPacket::TRADE_REPORT_TYPE_NO_VALUE = 0xFF;
const int8_t eurexModifyTESTradeRequestPacket::TRADE_PUBLISH_INDICATOR_MIN = 0;
const int8_t eurexModifyTESTradeRequestPacket::TRADE_PUBLISH_INDICATOR_MAX = 3;
const int8_t eurexModifyTESTradeRequestPacket::TRADE_PUBLISH_INDICATOR_NO_VALUE = 0xFF;
const int8_t eurexModifyTESTradeRequestPacket::NO_SIDE_ALLOCS_MIN = 1;
const int8_t eurexModifyTESTradeRequestPacket::NO_SIDE_ALLOCS_MAX = 30;
const int8_t eurexModifyTESTradeRequestPacket::NO_SIDE_ALLOCS_NO_VALUE = 0xFF;
const int8_t eurexModifyTESTradeRequestPacket::NO_LEGS_MIN = 0;
const int8_t eurexModifyTESTradeRequestPacket::NO_LEGS_MAX = 20;
const int8_t eurexModifyTESTradeRequestPacket::NO_LEGS_NO_VALUE = 0xFF;
const char eurexModifyTESTradeRequestPacket::TRADE_REPORT_TEXT_NO_VALUE[20] = {0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00};
const size_t eurexModifyTESTradeRequestPacket::TRADE_REPORT_TEXT_MAX_LENGTH = 20;
const char eurexModifyTESTradeRequestPacket::TRADE_REPORT_ID_NO_VALUE[20] = {0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00};
const size_t eurexModifyTESTradeRequestPacket::TRADE_REPORT_ID_MAX_LENGTH = 20;
const char eurexModifyTESTradeRequestPacket::PAD4_NO_VALUE[4] = {0x00, 0x00, 0x00, 0x00};
const size_t eurexModifyTESTradeRequestPacket::PAD4_MAX_LENGTH = 4;
const size_t eurexModifyTESTradeRequestPacket::SIDE_ALLOC_GRP_MIN = 1;
const size_t eurexModifyTESTradeRequestPacket::SIDE_ALLOC_GRP_MAX = 30;
const size_t eurexModifyTESTradeRequestPacket::TRD_INSTRMNT_LEG_GRP_MIN = 0;
const size_t eurexModifyTESTradeRequestPacket::TRD_INSTRMNT_LEG_GRP_MAX = 20;
const size_t eurexModifyTESTradeRequestPacket::SRQSRELATED_TRADE_IDGRP_MIN = 0;
const size_t eurexModifyTESTradeRequestPacket::SRQSRELATED_TRADE_IDGRP_MAX = 12;


} // namespace neueda

#endif // EUREX_MODIFYTESTRADEREQUEST_PACKET_H
