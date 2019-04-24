/*
 * Copyright 2014-2018 Neueda Ltd.
 * 
 * Generated 24/04/2019
 */
#ifndef EUREX_PRETRADERISKLIMITRESPONSE_PACKET_H
#define EUREX_PRETRADERISKLIMITRESPONSE_PACKET_H

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

class eurexPreTradeRiskLimitResponsePacket
{
    public:
        // no value constants
        static const uint64_t RISK_LIMIT_REPORT_ID_MIN;
        static const uint64_t RISK_LIMIT_REPORT_ID_MAX;
        static const uint64_t RISK_LIMIT_REPORT_ID_NO_VALUE;
        static const int32_t MARKET_SEGMENT_ID_MIN;
        static const int32_t MARKET_SEGMENT_ID_MAX;
        static const int32_t MARKET_SEGMENT_ID_NO_VALUE;
        static const int8_t NO_RISK_LIMITS_MIN;
        static const int8_t NO_RISK_LIMITS_MAX;
        static const int8_t NO_RISK_LIMITS_NO_VALUE;
        static const int8_t PARTY_DETAIL_STATUS_MIN;
        static const int8_t PARTY_DETAIL_STATUS_MAX;
        static const int8_t PARTY_DETAIL_STATUS_NO_VALUE;
        static const int8_t RISK_LIMIT_PLATFORM_MIN;
        static const int8_t RISK_LIMIT_PLATFORM_MAX;
        static const int8_t RISK_LIMIT_PLATFORM_NO_VALUE;
        static const char PARTY_DETAIL_EXECUTING_UNIT_NO_VALUE[5];
        static const size_t PARTY_DETAIL_EXECUTING_UNIT_MAX_LENGTH;
        static const char PAD4_NO_VALUE[4];
        static const size_t PAD4_MAX_LENGTH;
        static const size_t RISK_LIMITS_RPT_GRP_MIN;
        static const size_t RISK_LIMITS_RPT_GRP_MAX;

        // fields (use with care)
        eurexMessageHeaderOutCompPacket mMessageHeaderOut;
        eurexNRResponseHeaderMECompPacket mNRResponseHeaderME;
        uint64_t mRiskLimitReportID;
        int32_t mMarketSegmentID;
        int8_t mNoRiskLimits;
        int8_t mPartyDetailStatus;
        int8_t mRiskLimitPlatform;
        char mPartyDetailExecutingUnit[5];
        char mPad4[4];
        vector<eurexRiskLimitsRptGrpCompPacket> mRiskLimitsRptGrp;

        // constructor
        eurexPreTradeRiskLimitResponsePacket ()
        {
            mMessageHeaderOut.mTemplateID = 10313;
            mRiskLimitReportID = RISK_LIMIT_REPORT_ID_NO_VALUE;
            mMarketSegmentID = MARKET_SEGMENT_ID_NO_VALUE;
            mNoRiskLimits = NO_RISK_LIMITS_NO_VALUE;
            mPartyDetailStatus = PARTY_DETAIL_STATUS_NO_VALUE;
            mRiskLimitPlatform = RISK_LIMIT_PLATFORM_NO_VALUE;
            memcpy(mPartyDetailExecutingUnit, PARTY_DETAIL_EXECUTING_UNIT_NO_VALUE, sizeof (mPartyDetailExecutingUnit));
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

        const eurexNRResponseHeaderMECompPacket& getNRResponseHeaderME () const
        {
            return mNRResponseHeaderME;
        }

        bool setNRResponseHeaderME (const eurexNRResponseHeaderMECompPacket& v)
        {
            mNRResponseHeaderME = v;
            return true;
        }

        uint64_t getRiskLimitReportID () const
        {
            return mRiskLimitReportID;
        }

        bool setRiskLimitReportID (uint64_t v)
        {
            mRiskLimitReportID = v;
            return ((RISK_LIMIT_REPORT_ID_MIN <= mRiskLimitReportID && mRiskLimitReportID <= RISK_LIMIT_REPORT_ID_MAX) || mRiskLimitReportID == RISK_LIMIT_REPORT_ID_NO_VALUE);
        }

        bool isRiskLimitReportIDValid () const
        {
            return (mRiskLimitReportID != RISK_LIMIT_REPORT_ID_NO_VALUE);
        }

        void resetRiskLimitReportID ()
        {
            mRiskLimitReportID = RISK_LIMIT_REPORT_ID_NO_VALUE;
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

        int8_t getNoRiskLimits () const
        {
            return mNoRiskLimits;
        }

        bool setNoRiskLimits (int8_t v)
        {
            mNoRiskLimits = v;
            return ((NO_RISK_LIMITS_MIN <= mNoRiskLimits && mNoRiskLimits <= NO_RISK_LIMITS_MAX) || mNoRiskLimits == NO_RISK_LIMITS_NO_VALUE);
        }

        bool isNoRiskLimitsValid () const
        {
            return (mNoRiskLimits != NO_RISK_LIMITS_NO_VALUE);
        }

        void resetNoRiskLimits ()
        {
            mNoRiskLimits = NO_RISK_LIMITS_NO_VALUE;
        }

        int8_t getPartyDetailStatus () const
        {
            return mPartyDetailStatus;
        }

        bool setPartyDetailStatus (int8_t v)
        {
            mPartyDetailStatus = v;
            return ((PARTY_DETAIL_STATUS_MIN <= mPartyDetailStatus && mPartyDetailStatus <= PARTY_DETAIL_STATUS_MAX) || mPartyDetailStatus == PARTY_DETAIL_STATUS_NO_VALUE);
        }

        bool isPartyDetailStatusValid () const
        {
            return (mPartyDetailStatus != PARTY_DETAIL_STATUS_NO_VALUE);
        }

        void resetPartyDetailStatus ()
        {
            mPartyDetailStatus = PARTY_DETAIL_STATUS_NO_VALUE;
        }

        int8_t getRiskLimitPlatform () const
        {
            return mRiskLimitPlatform;
        }

        bool setRiskLimitPlatform (int8_t v)
        {
            mRiskLimitPlatform = v;
            return ((RISK_LIMIT_PLATFORM_MIN <= mRiskLimitPlatform && mRiskLimitPlatform <= RISK_LIMIT_PLATFORM_MAX) || mRiskLimitPlatform == RISK_LIMIT_PLATFORM_NO_VALUE);
        }

        bool isRiskLimitPlatformValid () const
        {
            return (mRiskLimitPlatform != RISK_LIMIT_PLATFORM_NO_VALUE);
        }

        void resetRiskLimitPlatform ()
        {
            mRiskLimitPlatform = RISK_LIMIT_PLATFORM_NO_VALUE;
        }

        string getPartyDetailExecutingUnit () const
        {
            return string (mPartyDetailExecutingUnit, PARTY_DETAIL_EXECUTING_UNIT_MAX_LENGTH);
        }

        bool setPartyDetailExecutingUnit (const string& v)
        {
            memset (mPartyDetailExecutingUnit, '\0', sizeof (mPartyDetailExecutingUnit));
            size_t size = min ((size_t) v.size (), (size_t) PARTY_DETAIL_EXECUTING_UNIT_MAX_LENGTH);
            strncpy (mPartyDetailExecutingUnit, v.c_str (), size);
            return (v.size () <= PARTY_DETAIL_EXECUTING_UNIT_MAX_LENGTH);
        }

        bool isPartyDetailExecutingUnitValid () const
        {
            return (memcmp (mPartyDetailExecutingUnit, PARTY_DETAIL_EXECUTING_UNIT_NO_VALUE, sizeof (mPartyDetailExecutingUnit)) != 0);
        }

        void resetPartyDetailExecutingUnit ()
        {
            memcpy (mPartyDetailExecutingUnit, PARTY_DETAIL_EXECUTING_UNIT_NO_VALUE, sizeof (mPartyDetailExecutingUnit));
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

        const vector<eurexRiskLimitsRptGrpCompPacket>& getRiskLimitsRptGrp () const
        {
            return mRiskLimitsRptGrp;
        }

        bool setRiskLimitsRptGrp (const vector<eurexRiskLimitsRptGrpCompPacket>& v)
        {
            mRiskLimitsRptGrp = v;
            mNoRiskLimits = v.size ();
            return (RISK_LIMITS_RPT_GRP_MIN <= v.size () && v.size () <= RISK_LIMITS_RPT_GRP_MAX);
        }


        // render current raw size
        size_t getRawSize () const
        {
            size_t result = mMessageHeaderOut.getRawSize()
                + mNRResponseHeaderME.getRawSize()
                + sizeof (mRiskLimitReportID)
                + sizeof (mMarketSegmentID)
                + sizeof (mNoRiskLimits)
                + sizeof (mPartyDetailStatus)
                + sizeof (mRiskLimitPlatform)
                + sizeof (mPartyDetailExecutingUnit)
                + sizeof (mPad4)
                + eurex::getRawSize (mRiskLimitsRptGrp);
            return result;
        }

        // serialization
        codecState serialize (void *buf, size_t len, size_t &used)
        {
            mNoRiskLimits = mRiskLimitsRptGrp.size ();
            mMessageHeaderOut.mBodyLen = getRawSize ();
            codecState state;
            state = mMessageHeaderOut.serialize (buf, len, used);
            if (state != GW_CODEC_SUCCESS) return state;
            state = mNRResponseHeaderME.serialize (buf, len, used);
            if (state != GW_CODEC_SUCCESS) return state;
            state = eurex::serialize (mRiskLimitReportID, buf, len, used);
            if (state != GW_CODEC_SUCCESS) return state;
            state = eurex::serialize (mMarketSegmentID, buf, len, used);
            if (state != GW_CODEC_SUCCESS) return state;
            state = eurex::serialize (mNoRiskLimits, buf, len, used);
            if (state != GW_CODEC_SUCCESS) return state;
            state = eurex::serialize (mPartyDetailStatus, buf, len, used);
            if (state != GW_CODEC_SUCCESS) return state;
            state = eurex::serialize (mRiskLimitPlatform, buf, len, used);
            if (state != GW_CODEC_SUCCESS) return state;
            state = eurex::serialize (mPartyDetailExecutingUnit, buf, len, used);
            if (state != GW_CODEC_SUCCESS) return state;
            state = eurex::serialize (mPad4, buf, len, used);
            if (state != GW_CODEC_SUCCESS) return state;
            for (size_t i = 0; i < mRiskLimitsRptGrp.size (); i++)
            {
                state = mRiskLimitsRptGrp[i].serialize (buf, len, used);
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
            state = mNRResponseHeaderME.deserialize (buf, len, used);
            if (state != GW_CODEC_SUCCESS) return state;
            state = eurex::deserialize (mRiskLimitReportID, buf, len, used);
            if (state != GW_CODEC_SUCCESS) return state;
            state = eurex::deserialize (mMarketSegmentID, buf, len, used);
            if (state != GW_CODEC_SUCCESS) return state;
            state = eurex::deserialize (mNoRiskLimits, buf, len, used);
            if (state != GW_CODEC_SUCCESS) return state;
            state = eurex::deserialize (mPartyDetailStatus, buf, len, used);
            if (state != GW_CODEC_SUCCESS) return state;
            state = eurex::deserialize (mRiskLimitPlatform, buf, len, used);
            if (state != GW_CODEC_SUCCESS) return state;
            state = eurex::deserialize (mPartyDetailExecutingUnit, buf, len, used);
            if (state != GW_CODEC_SUCCESS) return state;
            state = eurex::deserialize (mPad4, buf, len, used);
            if (state != GW_CODEC_SUCCESS) return state;
            mRiskLimitsRptGrp.resize (mNoRiskLimits);
            for (vector<eurexRiskLimitsRptGrpCompPacket>::iterator it = mRiskLimitsRptGrp.begin (); it != mRiskLimitsRptGrp.end (); ++it)
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
            sss << "PreTradeRiskLimitResponse::"
                << "[MessageHeaderOut=" << mMessageHeaderOut.toString () << "],"
                << "[NRResponseHeaderME=" << mNRResponseHeaderME.toString () << "],"
                << "[RiskLimitReportID=" << getRiskLimitReportID () << "],"
                << "[MarketSegmentID=" << getMarketSegmentID () << "],"
                << "[NoRiskLimits=" << getNoRiskLimits () << "],"
                << "[PartyDetailStatus=" << getPartyDetailStatus () << "],"
                << "[RiskLimitPlatform=" << getRiskLimitPlatform () << "],"
                << "[PartyDetailExecutingUnit=" << getPartyDetailExecutingUnit () << "],"
                << "[Pad4=" << getPad4 () << "],"
                << "[RiskLimitsRptGrp=" << eurex::toString (getRiskLimitsRptGrp ()) << "]";
            return sss.str();
        }
};

const uint64_t eurexPreTradeRiskLimitResponsePacket::RISK_LIMIT_REPORT_ID_MIN = 0UL;
const uint64_t eurexPreTradeRiskLimitResponsePacket::RISK_LIMIT_REPORT_ID_MAX = 18446744073709551614UL;
const uint64_t eurexPreTradeRiskLimitResponsePacket::RISK_LIMIT_REPORT_ID_NO_VALUE = 0xFFFFFFFFFFFFFFFF;
const int32_t eurexPreTradeRiskLimitResponsePacket::MARKET_SEGMENT_ID_MIN = -2147483647;
const int32_t eurexPreTradeRiskLimitResponsePacket::MARKET_SEGMENT_ID_MAX = 2147483647;
const int32_t eurexPreTradeRiskLimitResponsePacket::MARKET_SEGMENT_ID_NO_VALUE = 0x80000000;
const int8_t eurexPreTradeRiskLimitResponsePacket::NO_RISK_LIMITS_MIN = 0;
const int8_t eurexPreTradeRiskLimitResponsePacket::NO_RISK_LIMITS_MAX = 64;
const int8_t eurexPreTradeRiskLimitResponsePacket::NO_RISK_LIMITS_NO_VALUE = 0xFF;
const int8_t eurexPreTradeRiskLimitResponsePacket::PARTY_DETAIL_STATUS_MIN = 0;
const int8_t eurexPreTradeRiskLimitResponsePacket::PARTY_DETAIL_STATUS_MAX = 1;
const int8_t eurexPreTradeRiskLimitResponsePacket::PARTY_DETAIL_STATUS_NO_VALUE = 0xFF;
const int8_t eurexPreTradeRiskLimitResponsePacket::RISK_LIMIT_PLATFORM_MIN = 0;
const int8_t eurexPreTradeRiskLimitResponsePacket::RISK_LIMIT_PLATFORM_MAX = 1;
const int8_t eurexPreTradeRiskLimitResponsePacket::RISK_LIMIT_PLATFORM_NO_VALUE = 0xFF;
const char eurexPreTradeRiskLimitResponsePacket::PARTY_DETAIL_EXECUTING_UNIT_NO_VALUE[5] = {0x00, 0x00, 0x00, 0x00, 0x00};
const size_t eurexPreTradeRiskLimitResponsePacket::PARTY_DETAIL_EXECUTING_UNIT_MAX_LENGTH = 5;
const char eurexPreTradeRiskLimitResponsePacket::PAD4_NO_VALUE[4] = {0x00, 0x00, 0x00, 0x00};
const size_t eurexPreTradeRiskLimitResponsePacket::PAD4_MAX_LENGTH = 4;
const size_t eurexPreTradeRiskLimitResponsePacket::RISK_LIMITS_RPT_GRP_MIN = 0;
const size_t eurexPreTradeRiskLimitResponsePacket::RISK_LIMITS_RPT_GRP_MAX = 64;


} // namespace neueda

#endif // EUREX_PRETRADERISKLIMITRESPONSE_PACKET_H
