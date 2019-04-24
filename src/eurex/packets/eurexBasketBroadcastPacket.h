/*
 * Copyright 2014-2018 Neueda Ltd.
 * 
 * Generated 24/04/2019
 */
#ifndef EUREX_BASKETBROADCAST_PACKET_H
#define EUREX_BASKETBROADCAST_PACKET_H

#include <string>
#include <vector>
#include <sstream>
#include <cstddef>
#include <stdint.h>
#include "eurexPackets.h"
#include "eurexPacketUtils.h"

namespace neueda
{

using namespace std;

class eurexBasketBroadcastPacket
{
    public:
        // no value constants
        static const uint64_t BASKET_TRD_MATCH_ID_MIN;
        static const uint64_t BASKET_TRD_MATCH_ID_MAX;
        static const uint64_t BASKET_TRD_MATCH_ID_NO_VALUE;
        static const uint64_t TRANSACT_TIME_MIN;
        static const uint64_t TRANSACT_TIME_MAX;
        static const uint64_t TRANSACT_TIME_NO_VALUE;
        static const uint32_t BASKET_EXEC_ID_MIN;
        static const uint32_t BASKET_EXEC_ID_MAX;
        static const uint32_t BASKET_EXEC_ID_NO_VALUE;
        static const int32_t MARKET_SEGMENT_ID_MIN;
        static const int32_t MARKET_SEGMENT_ID_MAX;
        static const int32_t MARKET_SEGMENT_ID_NO_VALUE;
        static const int32_t MATURITY_MONTH_YEAR_MIN;
        static const int32_t MATURITY_MONTH_YEAR_MAX;
        static const int32_t MATURITY_MONTH_YEAR_NO_VALUE;
        static const int16_t TRD_TYPE_MIN;
        static const int16_t TRD_TYPE_MAX;
        static const int16_t TRD_TYPE_NO_VALUE;
        static const int8_t TRADE_REPORT_TYPE_MIN;
        static const int8_t TRADE_REPORT_TYPE_MAX;
        static const int8_t TRADE_REPORT_TYPE_NO_VALUE;
        static const int8_t BASKET_TRADE_REPORT_TYPE_MIN;
        static const int8_t BASKET_TRADE_REPORT_TYPE_MAX;
        static const int8_t BASKET_TRADE_REPORT_TYPE_NO_VALUE;
        static const char MESSAGE_EVENT_SOURCE_NO_VALUE[1];
        static const size_t MESSAGE_EVENT_SOURCE_MAX_LENGTH;
        static const int8_t NO_BASKET_ROOT_PARTY_GRPS_BC_MIN;
        static const int8_t NO_BASKET_ROOT_PARTY_GRPS_BC_MAX;
        static const int8_t NO_BASKET_ROOT_PARTY_GRPS_BC_NO_VALUE;
        static const int8_t NO_INSTRMT_MATCH_SIDES_MIN;
        static const int8_t NO_INSTRMT_MATCH_SIDES_MAX;
        static const int8_t NO_INSTRMT_MATCH_SIDES_NO_VALUE;
        static const uint8_t NO_BASKET_SIDE_ALLOC_MIN;
        static const uint8_t NO_BASKET_SIDE_ALLOC_MAX;
        static const uint8_t NO_BASKET_SIDE_ALLOC_NO_VALUE;
        static const char BASKET_TRADE_REPORT_TEXT_NO_VALUE[20];
        static const size_t BASKET_TRADE_REPORT_TEXT_MAX_LENGTH;
        static const char TRADE_REPORT_ID_NO_VALUE[20];
        static const size_t TRADE_REPORT_ID_MAX_LENGTH;
        static const char PAD4_NO_VALUE[4];
        static const size_t PAD4_MAX_LENGTH;
        static const size_t BASKET_ROOT_PARTY_GRP_MIN;
        static const size_t BASKET_ROOT_PARTY_GRP_MAX;
        static const size_t INSTRMT_MATCH_SIDE_GRP_MIN;
        static const size_t INSTRMT_MATCH_SIDE_GRP_MAX;
        static const size_t BASKET_SIDE_ALLOC_GRP_MIN;
        static const size_t BASKET_SIDE_ALLOC_GRP_MAX;

        // fields (use with care)
        eurexMessageHeaderOutCompPacket mMessageHeaderOut;
        eurexRBCHeaderCompPacket mRBCHeader;
        uint64_t mBasketTrdMatchID;
        uint64_t mTransactTime;
        uint32_t mBasketExecID;
        int32_t mMarketSegmentID;
        int32_t mMaturityMonthYear;
        int16_t mTrdType;
        int8_t mTradeReportType;
        int8_t mBasketTradeReportType;
        char mMessageEventSource[1];
        int8_t mNoBasketRootPartyGrpsBC;
        int8_t mNoInstrmtMatchSides;
        uint8_t mNoBasketSideAlloc;
        char mBasketTradeReportText[20];
        char mTradeReportID[20];
        char mPad4[4];
        vector<eurexBasketRootPartyGrpCompPacket> mBasketRootPartyGrp;
        vector<eurexInstrmtMatchSideGrpCompPacket> mInstrmtMatchSideGrp;
        vector<eurexBasketSideAllocGrpCompPacket> mBasketSideAllocGrp;

        // constructor
        eurexBasketBroadcastPacket ()
        {
            mMessageHeaderOut.mTemplateID = 10625;
            mBasketTrdMatchID = BASKET_TRD_MATCH_ID_NO_VALUE;
            mTransactTime = TRANSACT_TIME_NO_VALUE;
            mBasketExecID = BASKET_EXEC_ID_NO_VALUE;
            mMarketSegmentID = MARKET_SEGMENT_ID_NO_VALUE;
            mMaturityMonthYear = MATURITY_MONTH_YEAR_NO_VALUE;
            mTrdType = TRD_TYPE_NO_VALUE;
            mTradeReportType = TRADE_REPORT_TYPE_NO_VALUE;
            mBasketTradeReportType = BASKET_TRADE_REPORT_TYPE_NO_VALUE;
            memcpy(mMessageEventSource, MESSAGE_EVENT_SOURCE_NO_VALUE, sizeof (mMessageEventSource));
            mNoBasketRootPartyGrpsBC = NO_BASKET_ROOT_PARTY_GRPS_BC_NO_VALUE;
            mNoInstrmtMatchSides = NO_INSTRMT_MATCH_SIDES_NO_VALUE;
            mNoBasketSideAlloc = NO_BASKET_SIDE_ALLOC_NO_VALUE;
            memcpy(mBasketTradeReportText, BASKET_TRADE_REPORT_TEXT_NO_VALUE, sizeof (mBasketTradeReportText));
            memcpy(mTradeReportID, TRADE_REPORT_ID_NO_VALUE, sizeof (mTradeReportID));
            memcpy(mPad4, PAD4_NO_VALUE, sizeof (mPad4));
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

        const eurexRBCHeaderCompPacket& getRBCHeader () const
        {
            return mRBCHeader;
        }

        bool setRBCHeader (const eurexRBCHeaderCompPacket& v)
        {
            mRBCHeader = v;
            return true;
        }

        uint64_t getBasketTrdMatchID () const
        {
            return mBasketTrdMatchID;
        }

        bool setBasketTrdMatchID (uint64_t v)
        {
            mBasketTrdMatchID = v;
            return ((BASKET_TRD_MATCH_ID_MIN <= mBasketTrdMatchID && mBasketTrdMatchID <= BASKET_TRD_MATCH_ID_MAX) || mBasketTrdMatchID == BASKET_TRD_MATCH_ID_NO_VALUE);
        }

        bool isBasketTrdMatchIDValid () const
        {
            return (mBasketTrdMatchID != BASKET_TRD_MATCH_ID_NO_VALUE);
        }

        void resetBasketTrdMatchID ()
        {
            mBasketTrdMatchID = BASKET_TRD_MATCH_ID_NO_VALUE;
        }

        uint64_t getTransactTime () const
        {
            return mTransactTime;
        }

        bool setTransactTime (uint64_t v)
        {
            mTransactTime = v;
            return ((TRANSACT_TIME_MIN <= mTransactTime && mTransactTime <= TRANSACT_TIME_MAX) || mTransactTime == TRANSACT_TIME_NO_VALUE);
        }

        bool isTransactTimeValid () const
        {
            return (mTransactTime != TRANSACT_TIME_NO_VALUE);
        }

        void resetTransactTime ()
        {
            mTransactTime = TRANSACT_TIME_NO_VALUE;
        }

        uint32_t getBasketExecID () const
        {
            return mBasketExecID;
        }

        bool setBasketExecID (uint32_t v)
        {
            mBasketExecID = v;
            return ((BASKET_EXEC_ID_MIN <= mBasketExecID && mBasketExecID <= BASKET_EXEC_ID_MAX) || mBasketExecID == BASKET_EXEC_ID_NO_VALUE);
        }

        bool isBasketExecIDValid () const
        {
            return (mBasketExecID != BASKET_EXEC_ID_NO_VALUE);
        }

        void resetBasketExecID ()
        {
            mBasketExecID = BASKET_EXEC_ID_NO_VALUE;
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

        int32_t getMaturityMonthYear () const
        {
            return mMaturityMonthYear;
        }

        bool setMaturityMonthYear (int32_t v)
        {
            mMaturityMonthYear = v;
            return ((MATURITY_MONTH_YEAR_MIN <= mMaturityMonthYear && mMaturityMonthYear <= MATURITY_MONTH_YEAR_MAX) || mMaturityMonthYear == MATURITY_MONTH_YEAR_NO_VALUE);
        }

        bool isMaturityMonthYearValid () const
        {
            return (mMaturityMonthYear != MATURITY_MONTH_YEAR_NO_VALUE);
        }

        void resetMaturityMonthYear ()
        {
            mMaturityMonthYear = MATURITY_MONTH_YEAR_NO_VALUE;
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

        int8_t getBasketTradeReportType () const
        {
            return mBasketTradeReportType;
        }

        bool setBasketTradeReportType (int8_t v)
        {
            mBasketTradeReportType = v;
            return ((BASKET_TRADE_REPORT_TYPE_MIN <= mBasketTradeReportType && mBasketTradeReportType <= BASKET_TRADE_REPORT_TYPE_MAX) || mBasketTradeReportType == BASKET_TRADE_REPORT_TYPE_NO_VALUE);
        }

        bool isBasketTradeReportTypeValid () const
        {
            return (mBasketTradeReportType != BASKET_TRADE_REPORT_TYPE_NO_VALUE);
        }

        void resetBasketTradeReportType ()
        {
            mBasketTradeReportType = BASKET_TRADE_REPORT_TYPE_NO_VALUE;
        }

        string getMessageEventSource () const
        {
            return string (mMessageEventSource, MESSAGE_EVENT_SOURCE_MAX_LENGTH);
        }

        bool setMessageEventSource (const string& v)
        {
            memset (mMessageEventSource, '\0', sizeof (mMessageEventSource));
            size_t size = min ((size_t) v.size (), (size_t) MESSAGE_EVENT_SOURCE_MAX_LENGTH);
            strncpy (mMessageEventSource, v.c_str (), size);
            return (v.size () <= MESSAGE_EVENT_SOURCE_MAX_LENGTH);
        }

        bool isMessageEventSourceValid () const
        {
            return (memcmp (mMessageEventSource, MESSAGE_EVENT_SOURCE_NO_VALUE, sizeof (mMessageEventSource)) != 0);
        }

        void resetMessageEventSource ()
        {
            memcpy (mMessageEventSource, MESSAGE_EVENT_SOURCE_NO_VALUE, sizeof (mMessageEventSource));
        }

        int8_t getNoBasketRootPartyGrpsBC () const
        {
            return mNoBasketRootPartyGrpsBC;
        }

        bool setNoBasketRootPartyGrpsBC (int8_t v)
        {
            mNoBasketRootPartyGrpsBC = v;
            return ((NO_BASKET_ROOT_PARTY_GRPS_BC_MIN <= mNoBasketRootPartyGrpsBC && mNoBasketRootPartyGrpsBC <= NO_BASKET_ROOT_PARTY_GRPS_BC_MAX) || mNoBasketRootPartyGrpsBC == NO_BASKET_ROOT_PARTY_GRPS_BC_NO_VALUE);
        }

        bool isNoBasketRootPartyGrpsBCValid () const
        {
            return (mNoBasketRootPartyGrpsBC != NO_BASKET_ROOT_PARTY_GRPS_BC_NO_VALUE);
        }

        void resetNoBasketRootPartyGrpsBC ()
        {
            mNoBasketRootPartyGrpsBC = NO_BASKET_ROOT_PARTY_GRPS_BC_NO_VALUE;
        }

        int8_t getNoInstrmtMatchSides () const
        {
            return mNoInstrmtMatchSides;
        }

        bool setNoInstrmtMatchSides (int8_t v)
        {
            mNoInstrmtMatchSides = v;
            return ((NO_INSTRMT_MATCH_SIDES_MIN <= mNoInstrmtMatchSides && mNoInstrmtMatchSides <= NO_INSTRMT_MATCH_SIDES_MAX) || mNoInstrmtMatchSides == NO_INSTRMT_MATCH_SIDES_NO_VALUE);
        }

        bool isNoInstrmtMatchSidesValid () const
        {
            return (mNoInstrmtMatchSides != NO_INSTRMT_MATCH_SIDES_NO_VALUE);
        }

        void resetNoInstrmtMatchSides ()
        {
            mNoInstrmtMatchSides = NO_INSTRMT_MATCH_SIDES_NO_VALUE;
        }

        uint8_t getNoBasketSideAlloc () const
        {
            return mNoBasketSideAlloc;
        }

        bool setNoBasketSideAlloc (uint8_t v)
        {
            mNoBasketSideAlloc = v;
            return ((NO_BASKET_SIDE_ALLOC_MIN <= mNoBasketSideAlloc && mNoBasketSideAlloc <= NO_BASKET_SIDE_ALLOC_MAX) || mNoBasketSideAlloc == NO_BASKET_SIDE_ALLOC_NO_VALUE);
        }

        bool isNoBasketSideAllocValid () const
        {
            return (mNoBasketSideAlloc != NO_BASKET_SIDE_ALLOC_NO_VALUE);
        }

        void resetNoBasketSideAlloc ()
        {
            mNoBasketSideAlloc = NO_BASKET_SIDE_ALLOC_NO_VALUE;
        }

        string getBasketTradeReportText () const
        {
            return string (mBasketTradeReportText, BASKET_TRADE_REPORT_TEXT_MAX_LENGTH);
        }

        bool setBasketTradeReportText (const string& v)
        {
            memset (mBasketTradeReportText, '\0', sizeof (mBasketTradeReportText));
            size_t size = min ((size_t) v.size (), (size_t) BASKET_TRADE_REPORT_TEXT_MAX_LENGTH);
            strncpy (mBasketTradeReportText, v.c_str (), size);
            return (v.size () <= BASKET_TRADE_REPORT_TEXT_MAX_LENGTH);
        }

        bool isBasketTradeReportTextValid () const
        {
            return (memcmp (mBasketTradeReportText, BASKET_TRADE_REPORT_TEXT_NO_VALUE, sizeof (mBasketTradeReportText)) != 0);
        }

        void resetBasketTradeReportText ()
        {
            memcpy (mBasketTradeReportText, BASKET_TRADE_REPORT_TEXT_NO_VALUE, sizeof (mBasketTradeReportText));
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

        const vector<eurexBasketRootPartyGrpCompPacket>& getBasketRootPartyGrp () const
        {
            return mBasketRootPartyGrp;
        }

        bool setBasketRootPartyGrp (const vector<eurexBasketRootPartyGrpCompPacket>& v)
        {
            mBasketRootPartyGrp = v;
            mNoBasketRootPartyGrpsBC = v.size ();
            return (BASKET_ROOT_PARTY_GRP_MIN <= v.size () && v.size () <= BASKET_ROOT_PARTY_GRP_MAX);
        }

        const vector<eurexInstrmtMatchSideGrpCompPacket>& getInstrmtMatchSideGrp () const
        {
            return mInstrmtMatchSideGrp;
        }

        bool setInstrmtMatchSideGrp (const vector<eurexInstrmtMatchSideGrpCompPacket>& v)
        {
            mInstrmtMatchSideGrp = v;
            mNoInstrmtMatchSides = v.size ();
            return (INSTRMT_MATCH_SIDE_GRP_MIN <= v.size () && v.size () <= INSTRMT_MATCH_SIDE_GRP_MAX);
        }

        const vector<eurexBasketSideAllocGrpCompPacket>& getBasketSideAllocGrp () const
        {
            return mBasketSideAllocGrp;
        }

        bool setBasketSideAllocGrp (const vector<eurexBasketSideAllocGrpCompPacket>& v)
        {
            mBasketSideAllocGrp = v;
            mNoBasketSideAlloc = v.size ();
            return (BASKET_SIDE_ALLOC_GRP_MIN <= v.size () && v.size () <= BASKET_SIDE_ALLOC_GRP_MAX);
        }


        // render current raw size
        size_t getRawSize () const
        {
            size_t result = mMessageHeaderOut.getRawSize()
                + mRBCHeader.getRawSize()
                + sizeof (mBasketTrdMatchID)
                + sizeof (mTransactTime)
                + sizeof (mBasketExecID)
                + sizeof (mMarketSegmentID)
                + sizeof (mMaturityMonthYear)
                + sizeof (mTrdType)
                + sizeof (mTradeReportType)
                + sizeof (mBasketTradeReportType)
                + sizeof (mMessageEventSource)
                + sizeof (mNoBasketRootPartyGrpsBC)
                + sizeof (mNoInstrmtMatchSides)
                + sizeof (mNoBasketSideAlloc)
                + sizeof (mBasketTradeReportText)
                + sizeof (mTradeReportID)
                + sizeof (mPad4)
                + eurex::getRawSize (mBasketRootPartyGrp)
                + eurex::getRawSize (mInstrmtMatchSideGrp)
                + eurex::getRawSize (mBasketSideAllocGrp);
            return result;
        }

        // serialization
        codecState serialize (void *buf, size_t len, size_t &used)
        {
            mNoBasketRootPartyGrpsBC = mBasketRootPartyGrp.size ();
            mNoInstrmtMatchSides = mInstrmtMatchSideGrp.size ();
            mNoBasketSideAlloc = mBasketSideAllocGrp.size ();
            mMessageHeaderOut.mBodyLen = getRawSize ();
            codecState state;
            state = mMessageHeaderOut.serialize (buf, len, used);
            if (state != GW_CODEC_SUCCESS) return state;
            state = mRBCHeader.serialize (buf, len, used);
            if (state != GW_CODEC_SUCCESS) return state;
            state = eurex::serialize (mBasketTrdMatchID, buf, len, used);
            if (state != GW_CODEC_SUCCESS) return state;
            state = eurex::serialize (mTransactTime, buf, len, used);
            if (state != GW_CODEC_SUCCESS) return state;
            state = eurex::serialize (mBasketExecID, buf, len, used);
            if (state != GW_CODEC_SUCCESS) return state;
            state = eurex::serialize (mMarketSegmentID, buf, len, used);
            if (state != GW_CODEC_SUCCESS) return state;
            state = eurex::serialize (mMaturityMonthYear, buf, len, used);
            if (state != GW_CODEC_SUCCESS) return state;
            state = eurex::serialize (mTrdType, buf, len, used);
            if (state != GW_CODEC_SUCCESS) return state;
            state = eurex::serialize (mTradeReportType, buf, len, used);
            if (state != GW_CODEC_SUCCESS) return state;
            state = eurex::serialize (mBasketTradeReportType, buf, len, used);
            if (state != GW_CODEC_SUCCESS) return state;
            state = eurex::serialize (mMessageEventSource, buf, len, used);
            if (state != GW_CODEC_SUCCESS) return state;
            state = eurex::serialize (mNoBasketRootPartyGrpsBC, buf, len, used);
            if (state != GW_CODEC_SUCCESS) return state;
            state = eurex::serialize (mNoInstrmtMatchSides, buf, len, used);
            if (state != GW_CODEC_SUCCESS) return state;
            state = eurex::serialize (mNoBasketSideAlloc, buf, len, used);
            if (state != GW_CODEC_SUCCESS) return state;
            state = eurex::serialize (mBasketTradeReportText, buf, len, used);
            if (state != GW_CODEC_SUCCESS) return state;
            state = eurex::serialize (mTradeReportID, buf, len, used);
            if (state != GW_CODEC_SUCCESS) return state;
            state = eurex::serialize (mPad4, buf, len, used);
            if (state != GW_CODEC_SUCCESS) return state;
            for (size_t i = 0; i < mBasketRootPartyGrp.size (); i++)
            {
                state = mBasketRootPartyGrp[i].serialize (buf, len, used);
                if (state != GW_CODEC_SUCCESS) return state;
            }
            for (size_t i = 0; i < mInstrmtMatchSideGrp.size (); i++)
            {
                state = mInstrmtMatchSideGrp[i].serialize (buf, len, used);
                if (state != GW_CODEC_SUCCESS) return state;
            }
            for (size_t i = 0; i < mBasketSideAllocGrp.size (); i++)
            {
                state = mBasketSideAllocGrp[i].serialize (buf, len, used);
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
            state = mRBCHeader.deserialize (buf, len, used);
            if (state != GW_CODEC_SUCCESS) return state;
            state = eurex::deserialize (mBasketTrdMatchID, buf, len, used);
            if (state != GW_CODEC_SUCCESS) return state;
            state = eurex::deserialize (mTransactTime, buf, len, used);
            if (state != GW_CODEC_SUCCESS) return state;
            state = eurex::deserialize (mBasketExecID, buf, len, used);
            if (state != GW_CODEC_SUCCESS) return state;
            state = eurex::deserialize (mMarketSegmentID, buf, len, used);
            if (state != GW_CODEC_SUCCESS) return state;
            state = eurex::deserialize (mMaturityMonthYear, buf, len, used);
            if (state != GW_CODEC_SUCCESS) return state;
            state = eurex::deserialize (mTrdType, buf, len, used);
            if (state != GW_CODEC_SUCCESS) return state;
            state = eurex::deserialize (mTradeReportType, buf, len, used);
            if (state != GW_CODEC_SUCCESS) return state;
            state = eurex::deserialize (mBasketTradeReportType, buf, len, used);
            if (state != GW_CODEC_SUCCESS) return state;
            state = eurex::deserialize (mMessageEventSource, buf, len, used);
            if (state != GW_CODEC_SUCCESS) return state;
            state = eurex::deserialize (mNoBasketRootPartyGrpsBC, buf, len, used);
            if (state != GW_CODEC_SUCCESS) return state;
            state = eurex::deserialize (mNoInstrmtMatchSides, buf, len, used);
            if (state != GW_CODEC_SUCCESS) return state;
            state = eurex::deserialize (mNoBasketSideAlloc, buf, len, used);
            if (state != GW_CODEC_SUCCESS) return state;
            state = eurex::deserialize (mBasketTradeReportText, buf, len, used);
            if (state != GW_CODEC_SUCCESS) return state;
            state = eurex::deserialize (mTradeReportID, buf, len, used);
            if (state != GW_CODEC_SUCCESS) return state;
            state = eurex::deserialize (mPad4, buf, len, used);
            if (state != GW_CODEC_SUCCESS) return state;
            mBasketRootPartyGrp.resize (mNoBasketRootPartyGrpsBC);
            for (vector<eurexBasketRootPartyGrpCompPacket>::iterator it = mBasketRootPartyGrp.begin (); it != mBasketRootPartyGrp.end (); ++it)
            {
                state = it->deserialize (buf, len, used);
                if (state != GW_CODEC_SUCCESS) return state;
            }
            mInstrmtMatchSideGrp.resize (mNoInstrmtMatchSides);
            for (vector<eurexInstrmtMatchSideGrpCompPacket>::iterator it = mInstrmtMatchSideGrp.begin (); it != mInstrmtMatchSideGrp.end (); ++it)
            {
                state = it->deserialize (buf, len, used);
                if (state != GW_CODEC_SUCCESS) return state;
            }
            mBasketSideAllocGrp.resize (mNoBasketSideAlloc);
            for (vector<eurexBasketSideAllocGrpCompPacket>::iterator it = mBasketSideAllocGrp.begin (); it != mBasketSideAllocGrp.end (); ++it)
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
            sss << "BasketBroadcast::"
                << "[MessageHeaderOut=" << mMessageHeaderOut.toString () << "],"
                << "[RBCHeader=" << mRBCHeader.toString () << "],"
                << "[BasketTrdMatchID=" << getBasketTrdMatchID () << "],"
                << "[TransactTime=" << getTransactTime () << "],"
                << "[BasketExecID=" << getBasketExecID () << "],"
                << "[MarketSegmentID=" << getMarketSegmentID () << "],"
                << "[MaturityMonthYear=" << getMaturityMonthYear () << "],"
                << "[TrdType=" << getTrdType () << "],"
                << "[TradeReportType=" << getTradeReportType () << "],"
                << "[BasketTradeReportType=" << getBasketTradeReportType () << "],"
                << "[MessageEventSource=" << getMessageEventSource () << "],"
                << "[NoBasketRootPartyGrpsBC=" << getNoBasketRootPartyGrpsBC () << "],"
                << "[NoInstrmtMatchSides=" << getNoInstrmtMatchSides () << "],"
                << "[NoBasketSideAlloc=" << getNoBasketSideAlloc () << "],"
                << "[BasketTradeReportText=" << getBasketTradeReportText () << "],"
                << "[TradeReportID=" << getTradeReportID () << "],"
                << "[Pad4=" << getPad4 () << "],"
                << "[BasketRootPartyGrp=" << eurex::toString (getBasketRootPartyGrp ()) << "],"
                << "[InstrmtMatchSideGrp=" << eurex::toString (getInstrmtMatchSideGrp ()) << "],"
                << "[BasketSideAllocGrp=" << eurex::toString (getBasketSideAllocGrp ()) << "]";
            return sss.str();
        }
};

const uint64_t eurexBasketBroadcastPacket::BASKET_TRD_MATCH_ID_MIN = 0UL;
const uint64_t eurexBasketBroadcastPacket::BASKET_TRD_MATCH_ID_MAX = 18446744073709551614UL;
const uint64_t eurexBasketBroadcastPacket::BASKET_TRD_MATCH_ID_NO_VALUE = 0xFFFFFFFFFFFFFFFF;
const uint64_t eurexBasketBroadcastPacket::TRANSACT_TIME_MIN = 0UL;
const uint64_t eurexBasketBroadcastPacket::TRANSACT_TIME_MAX = 18446744073709551614UL;
const uint64_t eurexBasketBroadcastPacket::TRANSACT_TIME_NO_VALUE = 0xFFFFFFFFFFFFFFFF;
const uint32_t eurexBasketBroadcastPacket::BASKET_EXEC_ID_MIN = 0;
const uint32_t eurexBasketBroadcastPacket::BASKET_EXEC_ID_MAX = 4294967294;
const uint32_t eurexBasketBroadcastPacket::BASKET_EXEC_ID_NO_VALUE = 0xFFFFFFFF;
const int32_t eurexBasketBroadcastPacket::MARKET_SEGMENT_ID_MIN = -2147483647;
const int32_t eurexBasketBroadcastPacket::MARKET_SEGMENT_ID_MAX = 2147483647;
const int32_t eurexBasketBroadcastPacket::MARKET_SEGMENT_ID_NO_VALUE = 0x80000000;
const int32_t eurexBasketBroadcastPacket::MATURITY_MONTH_YEAR_MIN = 0;
const int32_t eurexBasketBroadcastPacket::MATURITY_MONTH_YEAR_MAX = 999912;
const int32_t eurexBasketBroadcastPacket::MATURITY_MONTH_YEAR_NO_VALUE = 0xFFFFFFFF;
const int16_t eurexBasketBroadcastPacket::TRD_TYPE_MIN = 1;
const int16_t eurexBasketBroadcastPacket::TRD_TYPE_MAX = 1010;
const int16_t eurexBasketBroadcastPacket::TRD_TYPE_NO_VALUE = 0xFFFF;
const int8_t eurexBasketBroadcastPacket::TRADE_REPORT_TYPE_MIN = 0;
const int8_t eurexBasketBroadcastPacket::TRADE_REPORT_TYPE_MAX = 13;
const int8_t eurexBasketBroadcastPacket::TRADE_REPORT_TYPE_NO_VALUE = 0xFF;
const int8_t eurexBasketBroadcastPacket::BASKET_TRADE_REPORT_TYPE_MIN = 0;
const int8_t eurexBasketBroadcastPacket::BASKET_TRADE_REPORT_TYPE_MAX = 5;
const int8_t eurexBasketBroadcastPacket::BASKET_TRADE_REPORT_TYPE_NO_VALUE = 0xFF;
const char eurexBasketBroadcastPacket::MESSAGE_EVENT_SOURCE_NO_VALUE[1] = {0x00};
const size_t eurexBasketBroadcastPacket::MESSAGE_EVENT_SOURCE_MAX_LENGTH = 1;
const int8_t eurexBasketBroadcastPacket::NO_BASKET_ROOT_PARTY_GRPS_BC_MIN = 3;
const int8_t eurexBasketBroadcastPacket::NO_BASKET_ROOT_PARTY_GRPS_BC_MAX = 3;
const int8_t eurexBasketBroadcastPacket::NO_BASKET_ROOT_PARTY_GRPS_BC_NO_VALUE = 0xFF;
const int8_t eurexBasketBroadcastPacket::NO_INSTRMT_MATCH_SIDES_MIN = 1;
const int8_t eurexBasketBroadcastPacket::NO_INSTRMT_MATCH_SIDES_MAX = 99;
const int8_t eurexBasketBroadcastPacket::NO_INSTRMT_MATCH_SIDES_NO_VALUE = 0xFF;
const uint8_t eurexBasketBroadcastPacket::NO_BASKET_SIDE_ALLOC_MIN = 1;
const uint8_t eurexBasketBroadcastPacket::NO_BASKET_SIDE_ALLOC_MAX = 198;
const uint8_t eurexBasketBroadcastPacket::NO_BASKET_SIDE_ALLOC_NO_VALUE = 0xFF;
const char eurexBasketBroadcastPacket::BASKET_TRADE_REPORT_TEXT_NO_VALUE[20] = {0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00};
const size_t eurexBasketBroadcastPacket::BASKET_TRADE_REPORT_TEXT_MAX_LENGTH = 20;
const char eurexBasketBroadcastPacket::TRADE_REPORT_ID_NO_VALUE[20] = {0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00};
const size_t eurexBasketBroadcastPacket::TRADE_REPORT_ID_MAX_LENGTH = 20;
const char eurexBasketBroadcastPacket::PAD4_NO_VALUE[4] = {0x00, 0x00, 0x00, 0x00};
const size_t eurexBasketBroadcastPacket::PAD4_MAX_LENGTH = 4;
const size_t eurexBasketBroadcastPacket::BASKET_ROOT_PARTY_GRP_MIN = 3;
const size_t eurexBasketBroadcastPacket::BASKET_ROOT_PARTY_GRP_MAX = 3;
const size_t eurexBasketBroadcastPacket::INSTRMT_MATCH_SIDE_GRP_MIN = 1;
const size_t eurexBasketBroadcastPacket::INSTRMT_MATCH_SIDE_GRP_MAX = 99;
const size_t eurexBasketBroadcastPacket::BASKET_SIDE_ALLOC_GRP_MIN = 1;
const size_t eurexBasketBroadcastPacket::BASKET_SIDE_ALLOC_GRP_MAX = 198;


} // namespace neueda

#endif // EUREX_BASKETBROADCAST_PACKET_H
