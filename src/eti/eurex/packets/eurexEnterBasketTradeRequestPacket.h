/*
 * Copyright 2014-2018 Neueda Ltd.
 * 
 * Generated 21/05/2019
 */
#ifndef EUREX_ENTERBASKETTRADEREQUEST_PACKET_H
#define EUREX_ENTERBASKETTRADEREQUEST_PACKET_H

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

class eurexEnterBasketTradeRequestPacket
{
    public:
        // no value constants
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
        static const int8_t NO_BASKET_ROOT_PARTY_GRPS_MIN;
        static const int8_t NO_BASKET_ROOT_PARTY_GRPS_MAX;
        static const int8_t NO_BASKET_ROOT_PARTY_GRPS_NO_VALUE;
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
        static const char PAD1_NO_VALUE[1];
        static const size_t PAD1_MAX_LENGTH;
        static const size_t BASKET_ROOT_PARTY_GRP_MIN;
        static const size_t BASKET_ROOT_PARTY_GRP_MAX;
        static const size_t INSTRMT_MATCH_SIDE_GRP_MIN;
        static const size_t INSTRMT_MATCH_SIDE_GRP_MAX;
        static const size_t BASKET_SIDE_ALLOC_GRP_MIN;
        static const size_t BASKET_SIDE_ALLOC_GRP_MAX;

        // fields (use with care)
        eurexMessageHeaderInCompPacket mMessageHeaderIn;
        eurexRequestHeaderCompPacket mRequestHeader;
        int32_t mMarketSegmentID;
        int32_t mMaturityMonthYear;
        int16_t mTrdType;
        int8_t mTradeReportType;
        int8_t mBasketTradeReportType;
        int8_t mNoBasketRootPartyGrps;
        int8_t mNoInstrmtMatchSides;
        uint8_t mNoBasketSideAlloc;
        char mBasketTradeReportText[20];
        char mTradeReportID[20];
        char mPad1[1];
        vector<eurexBasketRootPartyGrpCompPacket> mBasketRootPartyGrp;
        vector<eurexInstrmtMatchSideGrpCompPacket> mInstrmtMatchSideGrp;
        vector<eurexBasketSideAllocGrpCompPacket> mBasketSideAllocGrp;

        // constructor
        eurexEnterBasketTradeRequestPacket ()
        {
            mMessageHeaderIn.mTemplateID = 10620;
            mMarketSegmentID = MARKET_SEGMENT_ID_NO_VALUE;
            mMaturityMonthYear = MATURITY_MONTH_YEAR_NO_VALUE;
            mTrdType = TRD_TYPE_NO_VALUE;
            mTradeReportType = TRADE_REPORT_TYPE_NO_VALUE;
            mBasketTradeReportType = BASKET_TRADE_REPORT_TYPE_NO_VALUE;
            mNoBasketRootPartyGrps = NO_BASKET_ROOT_PARTY_GRPS_NO_VALUE;
            mNoInstrmtMatchSides = NO_INSTRMT_MATCH_SIDES_NO_VALUE;
            mNoBasketSideAlloc = NO_BASKET_SIDE_ALLOC_NO_VALUE;
            memcpy(mBasketTradeReportText, BASKET_TRADE_REPORT_TEXT_NO_VALUE, sizeof (mBasketTradeReportText));
            memcpy(mTradeReportID, TRADE_REPORT_ID_NO_VALUE, sizeof (mTradeReportID));
            memcpy(mPad1, PAD1_NO_VALUE, sizeof (mPad1));
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

        int8_t getNoBasketRootPartyGrps () const
        {
            return mNoBasketRootPartyGrps;
        }

        bool setNoBasketRootPartyGrps (int8_t v)
        {
            mNoBasketRootPartyGrps = v;
            return ((NO_BASKET_ROOT_PARTY_GRPS_MIN <= mNoBasketRootPartyGrps && mNoBasketRootPartyGrps <= NO_BASKET_ROOT_PARTY_GRPS_MAX) || mNoBasketRootPartyGrps == NO_BASKET_ROOT_PARTY_GRPS_NO_VALUE);
        }

        bool isNoBasketRootPartyGrpsValid () const
        {
            return (mNoBasketRootPartyGrps != NO_BASKET_ROOT_PARTY_GRPS_NO_VALUE);
        }

        void resetNoBasketRootPartyGrps ()
        {
            mNoBasketRootPartyGrps = NO_BASKET_ROOT_PARTY_GRPS_NO_VALUE;
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

        const vector<eurexBasketRootPartyGrpCompPacket>& getBasketRootPartyGrp () const
        {
            return mBasketRootPartyGrp;
        }

        bool setBasketRootPartyGrp (const vector<eurexBasketRootPartyGrpCompPacket>& v)
        {
            mBasketRootPartyGrp = v;
            mNoBasketRootPartyGrps = v.size ();
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
            size_t result = mMessageHeaderIn.getRawSize()
                + mRequestHeader.getRawSize()
                + sizeof (mMarketSegmentID)
                + sizeof (mMaturityMonthYear)
                + sizeof (mTrdType)
                + sizeof (mTradeReportType)
                + sizeof (mBasketTradeReportType)
                + sizeof (mNoBasketRootPartyGrps)
                + sizeof (mNoInstrmtMatchSides)
                + sizeof (mNoBasketSideAlloc)
                + sizeof (mBasketTradeReportText)
                + sizeof (mTradeReportID)
                + sizeof (mPad1)
                + eti::getRawSize (mBasketRootPartyGrp)
                + eti::getRawSize (mInstrmtMatchSideGrp)
                + eti::getRawSize (mBasketSideAllocGrp);
            return result;
        }

        // serialization
        codecState serialize (void *buf, size_t len, size_t &used)
        {
            mNoBasketRootPartyGrps = mBasketRootPartyGrp.size ();
            mNoInstrmtMatchSides = mInstrmtMatchSideGrp.size ();
            mNoBasketSideAlloc = mBasketSideAllocGrp.size ();
            mMessageHeaderIn.mBodyLen = getRawSize ();
            codecState state;
            state = mMessageHeaderIn.serialize (buf, len, used);
            if (state != GW_CODEC_SUCCESS) return state;
            state = mRequestHeader.serialize (buf, len, used);
            if (state != GW_CODEC_SUCCESS) return state;
            state = eti::serialize (mMarketSegmentID, buf, len, used);
            if (state != GW_CODEC_SUCCESS) return state;
            state = eti::serialize (mMaturityMonthYear, buf, len, used);
            if (state != GW_CODEC_SUCCESS) return state;
            state = eti::serialize (mTrdType, buf, len, used);
            if (state != GW_CODEC_SUCCESS) return state;
            state = eti::serialize (mTradeReportType, buf, len, used);
            if (state != GW_CODEC_SUCCESS) return state;
            state = eti::serialize (mBasketTradeReportType, buf, len, used);
            if (state != GW_CODEC_SUCCESS) return state;
            state = eti::serialize (mNoBasketRootPartyGrps, buf, len, used);
            if (state != GW_CODEC_SUCCESS) return state;
            state = eti::serialize (mNoInstrmtMatchSides, buf, len, used);
            if (state != GW_CODEC_SUCCESS) return state;
            state = eti::serialize (mNoBasketSideAlloc, buf, len, used);
            if (state != GW_CODEC_SUCCESS) return state;
            state = eti::serialize (mBasketTradeReportText, buf, len, used);
            if (state != GW_CODEC_SUCCESS) return state;
            state = eti::serialize (mTradeReportID, buf, len, used);
            if (state != GW_CODEC_SUCCESS) return state;
            state = eti::serialize (mPad1, buf, len, used);
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
            state = mMessageHeaderIn.deserialize (buf, len, used);
            if (state != GW_CODEC_SUCCESS) return state;
            state = mRequestHeader.deserialize (buf, len, used);
            if (state != GW_CODEC_SUCCESS) return state;
            state = eti::deserialize (mMarketSegmentID, buf, len, used);
            if (state != GW_CODEC_SUCCESS) return state;
            state = eti::deserialize (mMaturityMonthYear, buf, len, used);
            if (state != GW_CODEC_SUCCESS) return state;
            state = eti::deserialize (mTrdType, buf, len, used);
            if (state != GW_CODEC_SUCCESS) return state;
            state = eti::deserialize (mTradeReportType, buf, len, used);
            if (state != GW_CODEC_SUCCESS) return state;
            state = eti::deserialize (mBasketTradeReportType, buf, len, used);
            if (state != GW_CODEC_SUCCESS) return state;
            state = eti::deserialize (mNoBasketRootPartyGrps, buf, len, used);
            if (state != GW_CODEC_SUCCESS) return state;
            state = eti::deserialize (mNoInstrmtMatchSides, buf, len, used);
            if (state != GW_CODEC_SUCCESS) return state;
            state = eti::deserialize (mNoBasketSideAlloc, buf, len, used);
            if (state != GW_CODEC_SUCCESS) return state;
            state = eti::deserialize (mBasketTradeReportText, buf, len, used);
            if (state != GW_CODEC_SUCCESS) return state;
            state = eti::deserialize (mTradeReportID, buf, len, used);
            if (state != GW_CODEC_SUCCESS) return state;
            state = eti::deserialize (mPad1, buf, len, used);
            if (state != GW_CODEC_SUCCESS) return state;
            mBasketRootPartyGrp.resize (mNoBasketRootPartyGrps);
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
            mMessageHeaderIn.mBodyLen = getRawSize ();
            return GW_CODEC_SUCCESS;
        }

        // string conversion
        string toString () const
        {
            stringstream sss;
            sss << "EnterBasketTradeRequest::"
                << "[MessageHeaderIn=" << mMessageHeaderIn.toString () << "],"
                << "[RequestHeader=" << mRequestHeader.toString () << "],"
                << "[MarketSegmentID=" << getMarketSegmentID () << "],"
                << "[MaturityMonthYear=" << getMaturityMonthYear () << "],"
                << "[TrdType=" << getTrdType () << "],"
                << "[TradeReportType=" << getTradeReportType () << "],"
                << "[BasketTradeReportType=" << getBasketTradeReportType () << "],"
                << "[NoBasketRootPartyGrps=" << getNoBasketRootPartyGrps () << "],"
                << "[NoInstrmtMatchSides=" << getNoInstrmtMatchSides () << "],"
                << "[NoBasketSideAlloc=" << getNoBasketSideAlloc () << "],"
                << "[BasketTradeReportText=" << getBasketTradeReportText () << "],"
                << "[TradeReportID=" << getTradeReportID () << "],"
                << "[Pad1=" << getPad1 () << "],"
                << "[BasketRootPartyGrp=" << eti::toString (getBasketRootPartyGrp ()) << "],"
                << "[InstrmtMatchSideGrp=" << eti::toString (getInstrmtMatchSideGrp ()) << "],"
                << "[BasketSideAllocGrp=" << eti::toString (getBasketSideAllocGrp ()) << "]";
            return sss.str();
        }
};

const int32_t eurexEnterBasketTradeRequestPacket::MARKET_SEGMENT_ID_MIN = -2147483647;
const int32_t eurexEnterBasketTradeRequestPacket::MARKET_SEGMENT_ID_MAX = 2147483647;
const int32_t eurexEnterBasketTradeRequestPacket::MARKET_SEGMENT_ID_NO_VALUE = 0x80000000;
const int32_t eurexEnterBasketTradeRequestPacket::MATURITY_MONTH_YEAR_MIN = 0;
const int32_t eurexEnterBasketTradeRequestPacket::MATURITY_MONTH_YEAR_MAX = 999912;
const int32_t eurexEnterBasketTradeRequestPacket::MATURITY_MONTH_YEAR_NO_VALUE = 0xFFFFFFFF;
const int16_t eurexEnterBasketTradeRequestPacket::TRD_TYPE_MIN = 1;
const int16_t eurexEnterBasketTradeRequestPacket::TRD_TYPE_MAX = 1010;
const int16_t eurexEnterBasketTradeRequestPacket::TRD_TYPE_NO_VALUE = 0xFFFF;
const int8_t eurexEnterBasketTradeRequestPacket::TRADE_REPORT_TYPE_MIN = 0;
const int8_t eurexEnterBasketTradeRequestPacket::TRADE_REPORT_TYPE_MAX = 13;
const int8_t eurexEnterBasketTradeRequestPacket::TRADE_REPORT_TYPE_NO_VALUE = 0xFF;
const int8_t eurexEnterBasketTradeRequestPacket::BASKET_TRADE_REPORT_TYPE_MIN = 0;
const int8_t eurexEnterBasketTradeRequestPacket::BASKET_TRADE_REPORT_TYPE_MAX = 5;
const int8_t eurexEnterBasketTradeRequestPacket::BASKET_TRADE_REPORT_TYPE_NO_VALUE = 0xFF;
const int8_t eurexEnterBasketTradeRequestPacket::NO_BASKET_ROOT_PARTY_GRPS_MIN = 2;
const int8_t eurexEnterBasketTradeRequestPacket::NO_BASKET_ROOT_PARTY_GRPS_MAX = 2;
const int8_t eurexEnterBasketTradeRequestPacket::NO_BASKET_ROOT_PARTY_GRPS_NO_VALUE = 0xFF;
const int8_t eurexEnterBasketTradeRequestPacket::NO_INSTRMT_MATCH_SIDES_MIN = 1;
const int8_t eurexEnterBasketTradeRequestPacket::NO_INSTRMT_MATCH_SIDES_MAX = 99;
const int8_t eurexEnterBasketTradeRequestPacket::NO_INSTRMT_MATCH_SIDES_NO_VALUE = 0xFF;
const uint8_t eurexEnterBasketTradeRequestPacket::NO_BASKET_SIDE_ALLOC_MIN = 1;
const uint8_t eurexEnterBasketTradeRequestPacket::NO_BASKET_SIDE_ALLOC_MAX = 198;
const uint8_t eurexEnterBasketTradeRequestPacket::NO_BASKET_SIDE_ALLOC_NO_VALUE = 0xFF;
const char eurexEnterBasketTradeRequestPacket::BASKET_TRADE_REPORT_TEXT_NO_VALUE[20] = {0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00};
const size_t eurexEnterBasketTradeRequestPacket::BASKET_TRADE_REPORT_TEXT_MAX_LENGTH = 20;
const char eurexEnterBasketTradeRequestPacket::TRADE_REPORT_ID_NO_VALUE[20] = {0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00};
const size_t eurexEnterBasketTradeRequestPacket::TRADE_REPORT_ID_MAX_LENGTH = 20;
const char eurexEnterBasketTradeRequestPacket::PAD1_NO_VALUE[1] = {0x00};
const size_t eurexEnterBasketTradeRequestPacket::PAD1_MAX_LENGTH = 1;
const size_t eurexEnterBasketTradeRequestPacket::BASKET_ROOT_PARTY_GRP_MIN = 2;
const size_t eurexEnterBasketTradeRequestPacket::BASKET_ROOT_PARTY_GRP_MAX = 2;
const size_t eurexEnterBasketTradeRequestPacket::INSTRMT_MATCH_SIDE_GRP_MIN = 1;
const size_t eurexEnterBasketTradeRequestPacket::INSTRMT_MATCH_SIDE_GRP_MAX = 99;
const size_t eurexEnterBasketTradeRequestPacket::BASKET_SIDE_ALLOC_GRP_MIN = 1;
const size_t eurexEnterBasketTradeRequestPacket::BASKET_SIDE_ALLOC_GRP_MAX = 198;


} // namespace neueda

#endif // EUREX_ENTERBASKETTRADEREQUEST_PACKET_H
