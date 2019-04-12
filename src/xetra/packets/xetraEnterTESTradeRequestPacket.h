/*
 * Copyright 2014-2018 Neueda Ltd.
 * 
 * Generated 11/04/2019
 */
#ifndef XETRA_ENTERTESTRADEREQUEST_PACKET_H
#define XETRA_ENTERTESTRADEREQUEST_PACKET_H

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

class xetraEnterTESTradeRequestPacket
{
    public:
        // no value constants
        static const int64_t SECURITY_ID_MIN;
        static const int64_t SECURITY_ID_MAX;
        static const int64_t SECURITY_ID_NO_VALUE;
        static const double LAST_PX_MIN;
        static const double LAST_PX_MAX;
        static const int64_t LAST_PX_NO_VALUE;
        static const uint64_t TRANS_BKD_TIME_MIN;
        static const uint64_t TRANS_BKD_TIME_MAX;
        static const uint64_t TRANS_BKD_TIME_NO_VALUE;
        static const double SETTL_CURR_FX_RATE_MIN;
        static const double SETTL_CURR_FX_RATE_MAX;
        static const int64_t SETTL_CURR_FX_RATE_NO_VALUE;
        static const int32_t MARKET_SEGMENT_ID_MIN;
        static const int32_t MARKET_SEGMENT_ID_MAX;
        static const int32_t MARKET_SEGMENT_ID_NO_VALUE;
        static const int32_t SETTL_DATE_MIN;
        static const int32_t SETTL_DATE_MAX;
        static const int32_t SETTL_DATE_NO_VALUE;
        static const int16_t TRD_TYPE_MIN;
        static const int16_t TRD_TYPE_MAX;
        static const int16_t TRD_TYPE_NO_VALUE;
        static const int8_t TRADE_REPORT_TYPE_MIN;
        static const int8_t TRADE_REPORT_TYPE_MAX;
        static const int8_t TRADE_REPORT_TYPE_NO_VALUE;
        static const int8_t NO_SIDE_ALLOCS_MIN;
        static const int8_t NO_SIDE_ALLOCS_MAX;
        static const int8_t NO_SIDE_ALLOCS_NO_VALUE;
        static const char TRADE_REPORT_TEXT_NO_VALUE[20];
        static const size_t TRADE_REPORT_TEXT_MAX_LENGTH;
        static const char TRADE_REPORT_ID_NO_VALUE[20];
        static const size_t TRADE_REPORT_ID_MAX_LENGTH;
        static const char PAD4_NO_VALUE[4];
        static const size_t PAD4_MAX_LENGTH;
        static const size_t SIDE_ALLOC_GRP_MIN;
        static const size_t SIDE_ALLOC_GRP_MAX;

        // fields (use with care)
        xetraMessageHeaderInCompPacket mMessageHeaderIn;
        xetraRequestHeaderCompPacket mRequestHeader;
        int64_t mSecurityID;
        int64_t mLastPx;
        uint64_t mTransBkdTime;
        int64_t mSettlCurrFxRate;
        int32_t mMarketSegmentID;
        int32_t mSettlDate;
        int16_t mTrdType;
        int8_t mTradeReportType;
        int8_t mNoSideAllocs;
        char mTradeReportText[20];
        char mTradeReportID[20];
        char mPad4[4];
        vector<xetraSideAllocGrpCompPacket> mSideAllocGrp;

        // constructor
        xetraEnterTESTradeRequestPacket ()
        {
            mMessageHeaderIn.mTemplateID = 10600;
            mSecurityID = SECURITY_ID_NO_VALUE;
            mLastPx = LAST_PX_NO_VALUE;
            mTransBkdTime = TRANS_BKD_TIME_NO_VALUE;
            mSettlCurrFxRate = SETTL_CURR_FX_RATE_NO_VALUE;
            mMarketSegmentID = MARKET_SEGMENT_ID_NO_VALUE;
            mSettlDate = SETTL_DATE_NO_VALUE;
            mTrdType = TRD_TYPE_NO_VALUE;
            mTradeReportType = TRADE_REPORT_TYPE_NO_VALUE;
            mNoSideAllocs = NO_SIDE_ALLOCS_NO_VALUE;
            memcpy(mTradeReportText, TRADE_REPORT_TEXT_NO_VALUE, sizeof (mTradeReportText));
            memcpy(mTradeReportID, TRADE_REPORT_ID_NO_VALUE, sizeof (mTradeReportID));
            memcpy(mPad4, PAD4_NO_VALUE, sizeof (mPad4));
        }

        // getters & setters
        const xetraMessageHeaderInCompPacket& getMessageHeaderIn () const
        {
            return mMessageHeaderIn;
        }

        bool setMessageHeaderIn (const xetraMessageHeaderInCompPacket& v)
        {
            mMessageHeaderIn = v;
            return true;
        }

        const xetraRequestHeaderCompPacket& getRequestHeader () const
        {
            return mRequestHeader;
        }

        bool setRequestHeader (const xetraRequestHeaderCompPacket& v)
        {
            mRequestHeader = v;
            return true;
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

        double getSettlCurrFxRate () const
        {
            return mSettlCurrFxRate / 100000000.0;
        }

        bool setSettlCurrFxRate (double v)
        {
            mSettlCurrFxRate = v * 100000000.0;
            return ((SETTL_CURR_FX_RATE_MIN <= v && v <= SETTL_CURR_FX_RATE_MAX) || mSettlCurrFxRate == SETTL_CURR_FX_RATE_NO_VALUE);
        }

        bool isSettlCurrFxRateValid () const
        {
            return (mSettlCurrFxRate != SETTL_CURR_FX_RATE_NO_VALUE);
        }

        void resetSettlCurrFxRate ()
        {
            mSettlCurrFxRate = SETTL_CURR_FX_RATE_NO_VALUE;
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

        int32_t getSettlDate () const
        {
            return mSettlDate;
        }

        bool setSettlDate (int32_t v)
        {
            mSettlDate = v;
            return ((SETTL_DATE_MIN <= mSettlDate && mSettlDate <= SETTL_DATE_MAX) || mSettlDate == SETTL_DATE_NO_VALUE);
        }

        bool isSettlDateValid () const
        {
            return (mSettlDate != SETTL_DATE_NO_VALUE);
        }

        void resetSettlDate ()
        {
            mSettlDate = SETTL_DATE_NO_VALUE;
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

        const vector<xetraSideAllocGrpCompPacket>& getSideAllocGrp () const
        {
            return mSideAllocGrp;
        }

        bool setSideAllocGrp (const vector<xetraSideAllocGrpCompPacket>& v)
        {
            mSideAllocGrp = v;
            mNoSideAllocs = v.size ();
            return (SIDE_ALLOC_GRP_MIN <= v.size () && v.size () <= SIDE_ALLOC_GRP_MAX);
        }


        // render current raw size
        size_t getRawSize () const
        {
            size_t result = mMessageHeaderIn.getRawSize()
                + mRequestHeader.getRawSize()
                + sizeof (mSecurityID)
                + sizeof (mLastPx)
                + sizeof (mTransBkdTime)
                + sizeof (mSettlCurrFxRate)
                + sizeof (mMarketSegmentID)
                + sizeof (mSettlDate)
                + sizeof (mTrdType)
                + sizeof (mTradeReportType)
                + sizeof (mNoSideAllocs)
                + sizeof (mTradeReportText)
                + sizeof (mTradeReportID)
                + sizeof (mPad4)
                + xetra::getRawSize (mSideAllocGrp);
            return result;
        }

        // serialization
        codecState serialize (void *buf, size_t len, size_t &used)
        {
            mNoSideAllocs = mSideAllocGrp.size ();
            mMessageHeaderIn.mBodyLen = getRawSize ();
            codecState state;
            state = mMessageHeaderIn.serialize (buf, len, used);
            if (state != GW_CODEC_SUCCESS) return state;
            state = mRequestHeader.serialize (buf, len, used);
            if (state != GW_CODEC_SUCCESS) return state;
            state = xetra::serialize (mSecurityID, buf, len, used);
            if (state != GW_CODEC_SUCCESS) return state;
            state = xetra::serialize (mLastPx, buf, len, used);
            if (state != GW_CODEC_SUCCESS) return state;
            state = xetra::serialize (mTransBkdTime, buf, len, used);
            if (state != GW_CODEC_SUCCESS) return state;
            state = xetra::serialize (mSettlCurrFxRate, buf, len, used);
            if (state != GW_CODEC_SUCCESS) return state;
            state = xetra::serialize (mMarketSegmentID, buf, len, used);
            if (state != GW_CODEC_SUCCESS) return state;
            state = xetra::serialize (mSettlDate, buf, len, used);
            if (state != GW_CODEC_SUCCESS) return state;
            state = xetra::serialize (mTrdType, buf, len, used);
            if (state != GW_CODEC_SUCCESS) return state;
            state = xetra::serialize (mTradeReportType, buf, len, used);
            if (state != GW_CODEC_SUCCESS) return state;
            state = xetra::serialize (mNoSideAllocs, buf, len, used);
            if (state != GW_CODEC_SUCCESS) return state;
            state = xetra::serialize (mTradeReportText, buf, len, used);
            if (state != GW_CODEC_SUCCESS) return state;
            state = xetra::serialize (mTradeReportID, buf, len, used);
            if (state != GW_CODEC_SUCCESS) return state;
            state = xetra::serialize (mPad4, buf, len, used);
            if (state != GW_CODEC_SUCCESS) return state;
            for (size_t i = 0; i < mSideAllocGrp.size (); i++)
            {
                state = mSideAllocGrp[i].serialize (buf, len, used);
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
            state = xetra::deserialize (mSecurityID, buf, len, used);
            if (state != GW_CODEC_SUCCESS) return state;
            state = xetra::deserialize (mLastPx, buf, len, used);
            if (state != GW_CODEC_SUCCESS) return state;
            state = xetra::deserialize (mTransBkdTime, buf, len, used);
            if (state != GW_CODEC_SUCCESS) return state;
            state = xetra::deserialize (mSettlCurrFxRate, buf, len, used);
            if (state != GW_CODEC_SUCCESS) return state;
            state = xetra::deserialize (mMarketSegmentID, buf, len, used);
            if (state != GW_CODEC_SUCCESS) return state;
            state = xetra::deserialize (mSettlDate, buf, len, used);
            if (state != GW_CODEC_SUCCESS) return state;
            state = xetra::deserialize (mTrdType, buf, len, used);
            if (state != GW_CODEC_SUCCESS) return state;
            state = xetra::deserialize (mTradeReportType, buf, len, used);
            if (state != GW_CODEC_SUCCESS) return state;
            state = xetra::deserialize (mNoSideAllocs, buf, len, used);
            if (state != GW_CODEC_SUCCESS) return state;
            state = xetra::deserialize (mTradeReportText, buf, len, used);
            if (state != GW_CODEC_SUCCESS) return state;
            state = xetra::deserialize (mTradeReportID, buf, len, used);
            if (state != GW_CODEC_SUCCESS) return state;
            state = xetra::deserialize (mPad4, buf, len, used);
            if (state != GW_CODEC_SUCCESS) return state;
            mSideAllocGrp.resize (mNoSideAllocs);
            for (vector<xetraSideAllocGrpCompPacket>::iterator it = mSideAllocGrp.begin (); it != mSideAllocGrp.end (); ++it)
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
            sss << "EnterTESTradeRequest::"
                << "[MessageHeaderIn=" << mMessageHeaderIn.toString () << "],"
                << "[RequestHeader=" << mRequestHeader.toString () << "],"
                << "[SecurityID=" << getSecurityID () << "],"
                << "[LastPx=" << getLastPx () << "],"
                << "[TransBkdTime=" << getTransBkdTime () << "],"
                << "[SettlCurrFxRate=" << getSettlCurrFxRate () << "],"
                << "[MarketSegmentID=" << getMarketSegmentID () << "],"
                << "[SettlDate=" << getSettlDate () << "],"
                << "[TrdType=" << getTrdType () << "],"
                << "[TradeReportType=" << getTradeReportType () << "],"
                << "[NoSideAllocs=" << getNoSideAllocs () << "],"
                << "[TradeReportText=" << getTradeReportText () << "],"
                << "[TradeReportID=" << getTradeReportID () << "],"
                << "[Pad4=" << getPad4 () << "],"
                << "[SideAllocGrp=" << xetra::toString (getSideAllocGrp ()) << "]";
            return sss.str();
        }
};

const int64_t xetraEnterTESTradeRequestPacket::SECURITY_ID_MIN = -9223372036854775807L;
const int64_t xetraEnterTESTradeRequestPacket::SECURITY_ID_MAX = 9223372036854775807L;
const int64_t xetraEnterTESTradeRequestPacket::SECURITY_ID_NO_VALUE = 0x8000000000000000;
const double xetraEnterTESTradeRequestPacket::LAST_PX_MIN = -92233720368.54775807;
const double xetraEnterTESTradeRequestPacket::LAST_PX_MAX = 92233720368.54775807;
const int64_t xetraEnterTESTradeRequestPacket::LAST_PX_NO_VALUE = 0x8000000000000000;
const uint64_t xetraEnterTESTradeRequestPacket::TRANS_BKD_TIME_MIN = 0UL;
const uint64_t xetraEnterTESTradeRequestPacket::TRANS_BKD_TIME_MAX = 18446744073709551614UL;
const uint64_t xetraEnterTESTradeRequestPacket::TRANS_BKD_TIME_NO_VALUE = 0xFFFFFFFFFFFFFFFF;
const double xetraEnterTESTradeRequestPacket::SETTL_CURR_FX_RATE_MIN = -92233720368.54775807;
const double xetraEnterTESTradeRequestPacket::SETTL_CURR_FX_RATE_MAX = 92233720368.54775807;
const int64_t xetraEnterTESTradeRequestPacket::SETTL_CURR_FX_RATE_NO_VALUE = 0x8000000000000000;
const int32_t xetraEnterTESTradeRequestPacket::MARKET_SEGMENT_ID_MIN = -2147483647;
const int32_t xetraEnterTESTradeRequestPacket::MARKET_SEGMENT_ID_MAX = 2147483647;
const int32_t xetraEnterTESTradeRequestPacket::MARKET_SEGMENT_ID_NO_VALUE = 0x80000000;
const int32_t xetraEnterTESTradeRequestPacket::SETTL_DATE_MIN = 0;
const int32_t xetraEnterTESTradeRequestPacket::SETTL_DATE_MAX = 99991231;
const int32_t xetraEnterTESTradeRequestPacket::SETTL_DATE_NO_VALUE = 0xFFFFFFFF;
const int16_t xetraEnterTESTradeRequestPacket::TRD_TYPE_MIN = 1;
const int16_t xetraEnterTESTradeRequestPacket::TRD_TYPE_MAX = 1005;
const int16_t xetraEnterTESTradeRequestPacket::TRD_TYPE_NO_VALUE = 0xFFFF;
const int8_t xetraEnterTESTradeRequestPacket::TRADE_REPORT_TYPE_MIN = 0;
const int8_t xetraEnterTESTradeRequestPacket::TRADE_REPORT_TYPE_MAX = 13;
const int8_t xetraEnterTESTradeRequestPacket::TRADE_REPORT_TYPE_NO_VALUE = 0xFF;
const int8_t xetraEnterTESTradeRequestPacket::NO_SIDE_ALLOCS_MIN = 1;
const int8_t xetraEnterTESTradeRequestPacket::NO_SIDE_ALLOCS_MAX = 30;
const int8_t xetraEnterTESTradeRequestPacket::NO_SIDE_ALLOCS_NO_VALUE = 0xFF;
const char xetraEnterTESTradeRequestPacket::TRADE_REPORT_TEXT_NO_VALUE[20] = {0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00};
const size_t xetraEnterTESTradeRequestPacket::TRADE_REPORT_TEXT_MAX_LENGTH = 20;
const char xetraEnterTESTradeRequestPacket::TRADE_REPORT_ID_NO_VALUE[20] = {0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00};
const size_t xetraEnterTESTradeRequestPacket::TRADE_REPORT_ID_MAX_LENGTH = 20;
const char xetraEnterTESTradeRequestPacket::PAD4_NO_VALUE[4] = {0x00, 0x00, 0x00, 0x00};
const size_t xetraEnterTESTradeRequestPacket::PAD4_MAX_LENGTH = 4;
const size_t xetraEnterTESTradeRequestPacket::SIDE_ALLOC_GRP_MIN = 1;
const size_t xetraEnterTESTradeRequestPacket::SIDE_ALLOC_GRP_MAX = 30;


} // namespace neueda

#endif // XETRA_ENTERTESTRADEREQUEST_PACKET_H
