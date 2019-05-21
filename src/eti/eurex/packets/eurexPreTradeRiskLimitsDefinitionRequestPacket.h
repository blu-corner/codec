/*
 * Copyright 2014-2018 Neueda Ltd.
 * 
 * Generated 21/05/2019
 */
#ifndef EUREX_PRETRADERISKLIMITSDEFINITIONREQUEST_PACKET_H
#define EUREX_PRETRADERISKLIMITSDEFINITIONREQUEST_PACKET_H

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

class eurexPreTradeRiskLimitsDefinitionRequestPacket
{
    public:
        // no value constants
        static const int32_t MARKET_SEGMENT_ID_MIN;
        static const int32_t MARKET_SEGMENT_ID_MAX;
        static const int32_t MARKET_SEGMENT_ID_NO_VALUE;
        static const int8_t RISK_LIMIT_PLATFORM_MIN;
        static const int8_t RISK_LIMIT_PLATFORM_MAX;
        static const int8_t RISK_LIMIT_PLATFORM_NO_VALUE;
        static const int8_t NO_RISK_LIMITS_QTY_MIN;
        static const int8_t NO_RISK_LIMITS_QTY_MAX;
        static const int8_t NO_RISK_LIMITS_QTY_NO_VALUE;
        static const int8_t PARTY_DETAIL_STATUS_MIN;
        static const int8_t PARTY_DETAIL_STATUS_MAX;
        static const int8_t PARTY_DETAIL_STATUS_NO_VALUE;
        static const char RISK_LIMIT_GROUP_NO_VALUE[3];
        static const size_t RISK_LIMIT_GROUP_MAX_LENGTH;
        static const char PARTY_DETAIL_EXECUTING_UNIT_NO_VALUE[5];
        static const size_t PARTY_DETAIL_EXECUTING_UNIT_MAX_LENGTH;
        static const char PAD1_NO_VALUE[1];
        static const size_t PAD1_MAX_LENGTH;
        static const size_t RISK_LIMIT_QTY_GRP_MIN;
        static const size_t RISK_LIMIT_QTY_GRP_MAX;

        // fields (use with care)
        eurexMessageHeaderInCompPacket mMessageHeaderIn;
        eurexRequestHeaderCompPacket mRequestHeader;
        int32_t mMarketSegmentID;
        int8_t mRiskLimitPlatform;
        int8_t mNoRiskLimitsQty;
        int8_t mPartyDetailStatus;
        char mRiskLimitGroup[3];
        char mPartyDetailExecutingUnit[5];
        char mPad1[1];
        vector<eurexRiskLimitQtyGrpCompPacket> mRiskLimitQtyGrp;

        // constructor
        eurexPreTradeRiskLimitsDefinitionRequestPacket ()
        {
            mMessageHeaderIn.mTemplateID = 10312;
            mMarketSegmentID = MARKET_SEGMENT_ID_NO_VALUE;
            mRiskLimitPlatform = RISK_LIMIT_PLATFORM_NO_VALUE;
            mNoRiskLimitsQty = NO_RISK_LIMITS_QTY_NO_VALUE;
            mPartyDetailStatus = PARTY_DETAIL_STATUS_NO_VALUE;
            memcpy(mRiskLimitGroup, RISK_LIMIT_GROUP_NO_VALUE, sizeof (mRiskLimitGroup));
            memcpy(mPartyDetailExecutingUnit, PARTY_DETAIL_EXECUTING_UNIT_NO_VALUE, sizeof (mPartyDetailExecutingUnit));
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

        int8_t getNoRiskLimitsQty () const
        {
            return mNoRiskLimitsQty;
        }

        bool setNoRiskLimitsQty (int8_t v)
        {
            mNoRiskLimitsQty = v;
            return ((NO_RISK_LIMITS_QTY_MIN <= mNoRiskLimitsQty && mNoRiskLimitsQty <= NO_RISK_LIMITS_QTY_MAX) || mNoRiskLimitsQty == NO_RISK_LIMITS_QTY_NO_VALUE);
        }

        bool isNoRiskLimitsQtyValid () const
        {
            return (mNoRiskLimitsQty != NO_RISK_LIMITS_QTY_NO_VALUE);
        }

        void resetNoRiskLimitsQty ()
        {
            mNoRiskLimitsQty = NO_RISK_LIMITS_QTY_NO_VALUE;
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

        string getRiskLimitGroup () const
        {
            return string (mRiskLimitGroup, RISK_LIMIT_GROUP_MAX_LENGTH);
        }

        bool setRiskLimitGroup (const string& v)
        {
            memset (mRiskLimitGroup, '\0', sizeof (mRiskLimitGroup));
            size_t size = min ((size_t) v.size (), (size_t) RISK_LIMIT_GROUP_MAX_LENGTH);
            strncpy (mRiskLimitGroup, v.c_str (), size);
            return (v.size () <= RISK_LIMIT_GROUP_MAX_LENGTH);
        }

        bool isRiskLimitGroupValid () const
        {
            return (memcmp (mRiskLimitGroup, RISK_LIMIT_GROUP_NO_VALUE, sizeof (mRiskLimitGroup)) != 0);
        }

        void resetRiskLimitGroup ()
        {
            memcpy (mRiskLimitGroup, RISK_LIMIT_GROUP_NO_VALUE, sizeof (mRiskLimitGroup));
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

        const vector<eurexRiskLimitQtyGrpCompPacket>& getRiskLimitQtyGrp () const
        {
            return mRiskLimitQtyGrp;
        }

        bool setRiskLimitQtyGrp (const vector<eurexRiskLimitQtyGrpCompPacket>& v)
        {
            mRiskLimitQtyGrp = v;
            mNoRiskLimitsQty = v.size ();
            return (RISK_LIMIT_QTY_GRP_MIN <= v.size () && v.size () <= RISK_LIMIT_QTY_GRP_MAX);
        }


        // render current raw size
        size_t getRawSize () const
        {
            size_t result = mMessageHeaderIn.getRawSize()
                + mRequestHeader.getRawSize()
                + sizeof (mMarketSegmentID)
                + sizeof (mRiskLimitPlatform)
                + sizeof (mNoRiskLimitsQty)
                + sizeof (mPartyDetailStatus)
                + sizeof (mRiskLimitGroup)
                + sizeof (mPartyDetailExecutingUnit)
                + sizeof (mPad1)
                + eti::getRawSize (mRiskLimitQtyGrp);
            return result;
        }

        // serialization
        codecState serialize (void *buf, size_t len, size_t &used)
        {
            mNoRiskLimitsQty = mRiskLimitQtyGrp.size ();
            mMessageHeaderIn.mBodyLen = getRawSize ();
            codecState state;
            state = mMessageHeaderIn.serialize (buf, len, used);
            if (state != GW_CODEC_SUCCESS) return state;
            state = mRequestHeader.serialize (buf, len, used);
            if (state != GW_CODEC_SUCCESS) return state;
            state = eti::serialize (mMarketSegmentID, buf, len, used);
            if (state != GW_CODEC_SUCCESS) return state;
            state = eti::serialize (mRiskLimitPlatform, buf, len, used);
            if (state != GW_CODEC_SUCCESS) return state;
            state = eti::serialize (mNoRiskLimitsQty, buf, len, used);
            if (state != GW_CODEC_SUCCESS) return state;
            state = eti::serialize (mPartyDetailStatus, buf, len, used);
            if (state != GW_CODEC_SUCCESS) return state;
            state = eti::serialize (mRiskLimitGroup, buf, len, used);
            if (state != GW_CODEC_SUCCESS) return state;
            state = eti::serialize (mPartyDetailExecutingUnit, buf, len, used);
            if (state != GW_CODEC_SUCCESS) return state;
            state = eti::serialize (mPad1, buf, len, used);
            if (state != GW_CODEC_SUCCESS) return state;
            for (size_t i = 0; i < mRiskLimitQtyGrp.size (); i++)
            {
                state = mRiskLimitQtyGrp[i].serialize (buf, len, used);
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
            state = eti::deserialize (mRiskLimitPlatform, buf, len, used);
            if (state != GW_CODEC_SUCCESS) return state;
            state = eti::deserialize (mNoRiskLimitsQty, buf, len, used);
            if (state != GW_CODEC_SUCCESS) return state;
            state = eti::deserialize (mPartyDetailStatus, buf, len, used);
            if (state != GW_CODEC_SUCCESS) return state;
            state = eti::deserialize (mRiskLimitGroup, buf, len, used);
            if (state != GW_CODEC_SUCCESS) return state;
            state = eti::deserialize (mPartyDetailExecutingUnit, buf, len, used);
            if (state != GW_CODEC_SUCCESS) return state;
            state = eti::deserialize (mPad1, buf, len, used);
            if (state != GW_CODEC_SUCCESS) return state;
            mRiskLimitQtyGrp.resize (mNoRiskLimitsQty);
            for (vector<eurexRiskLimitQtyGrpCompPacket>::iterator it = mRiskLimitQtyGrp.begin (); it != mRiskLimitQtyGrp.end (); ++it)
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
            sss << "PreTradeRiskLimitsDefinitionRequest::"
                << "[MessageHeaderIn=" << mMessageHeaderIn.toString () << "],"
                << "[RequestHeader=" << mRequestHeader.toString () << "],"
                << "[MarketSegmentID=" << getMarketSegmentID () << "],"
                << "[RiskLimitPlatform=" << getRiskLimitPlatform () << "],"
                << "[NoRiskLimitsQty=" << getNoRiskLimitsQty () << "],"
                << "[PartyDetailStatus=" << getPartyDetailStatus () << "],"
                << "[RiskLimitGroup=" << getRiskLimitGroup () << "],"
                << "[PartyDetailExecutingUnit=" << getPartyDetailExecutingUnit () << "],"
                << "[Pad1=" << getPad1 () << "],"
                << "[RiskLimitQtyGrp=" << eti::toString (getRiskLimitQtyGrp ()) << "]";
            return sss.str();
        }
};

const int32_t eurexPreTradeRiskLimitsDefinitionRequestPacket::MARKET_SEGMENT_ID_MIN = -2147483647;
const int32_t eurexPreTradeRiskLimitsDefinitionRequestPacket::MARKET_SEGMENT_ID_MAX = 2147483647;
const int32_t eurexPreTradeRiskLimitsDefinitionRequestPacket::MARKET_SEGMENT_ID_NO_VALUE = 0x80000000;
const int8_t eurexPreTradeRiskLimitsDefinitionRequestPacket::RISK_LIMIT_PLATFORM_MIN = 0;
const int8_t eurexPreTradeRiskLimitsDefinitionRequestPacket::RISK_LIMIT_PLATFORM_MAX = 1;
const int8_t eurexPreTradeRiskLimitsDefinitionRequestPacket::RISK_LIMIT_PLATFORM_NO_VALUE = 0xFF;
const int8_t eurexPreTradeRiskLimitsDefinitionRequestPacket::NO_RISK_LIMITS_QTY_MIN = 0;
const int8_t eurexPreTradeRiskLimitsDefinitionRequestPacket::NO_RISK_LIMITS_QTY_MAX = 2;
const int8_t eurexPreTradeRiskLimitsDefinitionRequestPacket::NO_RISK_LIMITS_QTY_NO_VALUE = 0xFF;
const int8_t eurexPreTradeRiskLimitsDefinitionRequestPacket::PARTY_DETAIL_STATUS_MIN = 0;
const int8_t eurexPreTradeRiskLimitsDefinitionRequestPacket::PARTY_DETAIL_STATUS_MAX = 1;
const int8_t eurexPreTradeRiskLimitsDefinitionRequestPacket::PARTY_DETAIL_STATUS_NO_VALUE = 0xFF;
const char eurexPreTradeRiskLimitsDefinitionRequestPacket::RISK_LIMIT_GROUP_NO_VALUE[3] = {0x00, 0x00, 0x00};
const size_t eurexPreTradeRiskLimitsDefinitionRequestPacket::RISK_LIMIT_GROUP_MAX_LENGTH = 3;
const char eurexPreTradeRiskLimitsDefinitionRequestPacket::PARTY_DETAIL_EXECUTING_UNIT_NO_VALUE[5] = {0x00, 0x00, 0x00, 0x00, 0x00};
const size_t eurexPreTradeRiskLimitsDefinitionRequestPacket::PARTY_DETAIL_EXECUTING_UNIT_MAX_LENGTH = 5;
const char eurexPreTradeRiskLimitsDefinitionRequestPacket::PAD1_NO_VALUE[1] = {0x00};
const size_t eurexPreTradeRiskLimitsDefinitionRequestPacket::PAD1_MAX_LENGTH = 1;
const size_t eurexPreTradeRiskLimitsDefinitionRequestPacket::RISK_LIMIT_QTY_GRP_MIN = 0;
const size_t eurexPreTradeRiskLimitsDefinitionRequestPacket::RISK_LIMIT_QTY_GRP_MAX = 2;


} // namespace neueda

#endif // EUREX_PRETRADERISKLIMITSDEFINITIONREQUEST_PACKET_H
