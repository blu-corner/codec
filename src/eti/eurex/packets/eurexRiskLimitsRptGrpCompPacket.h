/*
 * Copyright 2014-2018 Neueda Ltd.
 * 
 * Generated 21/05/2019
 */
#ifndef EUREX_RISKLIMITSRPTGRPCOMP_PACKET_H
#define EUREX_RISKLIMITSRPTGRPCOMP_PACKET_H

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

class eurexRiskLimitsRptGrpCompPacket
{
    public:
        // no value constants
        static const double RISK_LIMIT_QTY_MIN;
        static const double RISK_LIMIT_QTY_MAX;
        static const int64_t RISK_LIMIT_QTY_NO_VALUE;
        static const double RISK_LIMIT_OPEN_QTY_MIN;
        static const double RISK_LIMIT_OPEN_QTY_MAX;
        static const int64_t RISK_LIMIT_OPEN_QTY_NO_VALUE;
        static const double RISK_LIMIT_NET_POSITION_QTY_MIN;
        static const double RISK_LIMIT_NET_POSITION_QTY_MAX;
        static const int64_t RISK_LIMIT_NET_POSITION_QTY_NO_VALUE;
        static const int8_t RISK_LIMIT_TYPE_MIN;
        static const int8_t RISK_LIMIT_TYPE_MAX;
        static const int8_t RISK_LIMIT_TYPE_NO_VALUE;
        static const int8_t RISK_LIMIT_REQUESTING_PARTY_ROLE_MIN;
        static const int8_t RISK_LIMIT_REQUESTING_PARTY_ROLE_MAX;
        static const int8_t RISK_LIMIT_REQUESTING_PARTY_ROLE_NO_VALUE;
        static const int8_t RISK_LIMIT_VIOLATION_INDICATOR_MIN;
        static const int8_t RISK_LIMIT_VIOLATION_INDICATOR_MAX;
        static const int8_t RISK_LIMIT_VIOLATION_INDICATOR_NO_VALUE;
        static const char RISK_LIMIT_GROUP_NO_VALUE[3];
        static const size_t RISK_LIMIT_GROUP_MAX_LENGTH;
        static const char PAD2_NO_VALUE[2];
        static const size_t PAD2_MAX_LENGTH;

        // fields (use with care)
        int64_t mRiskLimitQty;
        int64_t mRiskLimitOpenQty;
        int64_t mRiskLimitNetPositionQty;
        int8_t mRiskLimitType;
        int8_t mRiskLimitRequestingPartyRole;
        int8_t mRiskLimitViolationIndicator;
        char mRiskLimitGroup[3];
        char mPad2[2];

        // constructor
        eurexRiskLimitsRptGrpCompPacket ()
        {
            mRiskLimitQty = RISK_LIMIT_QTY_NO_VALUE;
            mRiskLimitOpenQty = RISK_LIMIT_OPEN_QTY_NO_VALUE;
            mRiskLimitNetPositionQty = RISK_LIMIT_NET_POSITION_QTY_NO_VALUE;
            mRiskLimitType = RISK_LIMIT_TYPE_NO_VALUE;
            mRiskLimitRequestingPartyRole = RISK_LIMIT_REQUESTING_PARTY_ROLE_NO_VALUE;
            mRiskLimitViolationIndicator = RISK_LIMIT_VIOLATION_INDICATOR_NO_VALUE;
            memcpy(mRiskLimitGroup, RISK_LIMIT_GROUP_NO_VALUE, sizeof (mRiskLimitGroup));
            memcpy(mPad2, PAD2_NO_VALUE, sizeof (mPad2));
        }

        // getters & setters
        double getRiskLimitQty () const
        {
            return mRiskLimitQty / 10000.0;
        }

        bool setRiskLimitQty (double v)
        {
            mRiskLimitQty = v * 10000.0;
            return ((RISK_LIMIT_QTY_MIN <= v && v <= RISK_LIMIT_QTY_MAX) || mRiskLimitQty == RISK_LIMIT_QTY_NO_VALUE);
        }

        bool isRiskLimitQtyValid () const
        {
            return (mRiskLimitQty != RISK_LIMIT_QTY_NO_VALUE);
        }

        void resetRiskLimitQty ()
        {
            mRiskLimitQty = RISK_LIMIT_QTY_NO_VALUE;
        }

        double getRiskLimitOpenQty () const
        {
            return mRiskLimitOpenQty / 10000.0;
        }

        bool setRiskLimitOpenQty (double v)
        {
            mRiskLimitOpenQty = v * 10000.0;
            return ((RISK_LIMIT_OPEN_QTY_MIN <= v && v <= RISK_LIMIT_OPEN_QTY_MAX) || mRiskLimitOpenQty == RISK_LIMIT_OPEN_QTY_NO_VALUE);
        }

        bool isRiskLimitOpenQtyValid () const
        {
            return (mRiskLimitOpenQty != RISK_LIMIT_OPEN_QTY_NO_VALUE);
        }

        void resetRiskLimitOpenQty ()
        {
            mRiskLimitOpenQty = RISK_LIMIT_OPEN_QTY_NO_VALUE;
        }

        double getRiskLimitNetPositionQty () const
        {
            return mRiskLimitNetPositionQty / 10000.0;
        }

        bool setRiskLimitNetPositionQty (double v)
        {
            mRiskLimitNetPositionQty = v * 10000.0;
            return ((RISK_LIMIT_NET_POSITION_QTY_MIN <= v && v <= RISK_LIMIT_NET_POSITION_QTY_MAX) || mRiskLimitNetPositionQty == RISK_LIMIT_NET_POSITION_QTY_NO_VALUE);
        }

        bool isRiskLimitNetPositionQtyValid () const
        {
            return (mRiskLimitNetPositionQty != RISK_LIMIT_NET_POSITION_QTY_NO_VALUE);
        }

        void resetRiskLimitNetPositionQty ()
        {
            mRiskLimitNetPositionQty = RISK_LIMIT_NET_POSITION_QTY_NO_VALUE;
        }

        int8_t getRiskLimitType () const
        {
            return mRiskLimitType;
        }

        bool setRiskLimitType (int8_t v)
        {
            mRiskLimitType = v;
            return ((RISK_LIMIT_TYPE_MIN <= mRiskLimitType && mRiskLimitType <= RISK_LIMIT_TYPE_MAX) || mRiskLimitType == RISK_LIMIT_TYPE_NO_VALUE);
        }

        bool isRiskLimitTypeValid () const
        {
            return (mRiskLimitType != RISK_LIMIT_TYPE_NO_VALUE);
        }

        void resetRiskLimitType ()
        {
            mRiskLimitType = RISK_LIMIT_TYPE_NO_VALUE;
        }

        int8_t getRiskLimitRequestingPartyRole () const
        {
            return mRiskLimitRequestingPartyRole;
        }

        bool setRiskLimitRequestingPartyRole (int8_t v)
        {
            mRiskLimitRequestingPartyRole = v;
            return ((RISK_LIMIT_REQUESTING_PARTY_ROLE_MIN <= mRiskLimitRequestingPartyRole && mRiskLimitRequestingPartyRole <= RISK_LIMIT_REQUESTING_PARTY_ROLE_MAX) || mRiskLimitRequestingPartyRole == RISK_LIMIT_REQUESTING_PARTY_ROLE_NO_VALUE);
        }

        bool isRiskLimitRequestingPartyRoleValid () const
        {
            return (mRiskLimitRequestingPartyRole != RISK_LIMIT_REQUESTING_PARTY_ROLE_NO_VALUE);
        }

        void resetRiskLimitRequestingPartyRole ()
        {
            mRiskLimitRequestingPartyRole = RISK_LIMIT_REQUESTING_PARTY_ROLE_NO_VALUE;
        }

        int8_t getRiskLimitViolationIndicator () const
        {
            return mRiskLimitViolationIndicator;
        }

        bool setRiskLimitViolationIndicator (int8_t v)
        {
            mRiskLimitViolationIndicator = v;
            return ((RISK_LIMIT_VIOLATION_INDICATOR_MIN <= mRiskLimitViolationIndicator && mRiskLimitViolationIndicator <= RISK_LIMIT_VIOLATION_INDICATOR_MAX) || mRiskLimitViolationIndicator == RISK_LIMIT_VIOLATION_INDICATOR_NO_VALUE);
        }

        bool isRiskLimitViolationIndicatorValid () const
        {
            return (mRiskLimitViolationIndicator != RISK_LIMIT_VIOLATION_INDICATOR_NO_VALUE);
        }

        void resetRiskLimitViolationIndicator ()
        {
            mRiskLimitViolationIndicator = RISK_LIMIT_VIOLATION_INDICATOR_NO_VALUE;
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


        // render current raw size
        size_t getRawSize () const
        {
            size_t result = sizeof (mRiskLimitQty)
                + sizeof (mRiskLimitOpenQty)
                + sizeof (mRiskLimitNetPositionQty)
                + sizeof (mRiskLimitType)
                + sizeof (mRiskLimitRequestingPartyRole)
                + sizeof (mRiskLimitViolationIndicator)
                + sizeof (mRiskLimitGroup)
                + sizeof (mPad2);
            return result;
        }

        // serialization
        codecState serialize (void *buf, size_t len, size_t &used)
        {
            codecState state;
            state = eti::serialize (mRiskLimitQty, buf, len, used);
            if (state != GW_CODEC_SUCCESS) return state;
            state = eti::serialize (mRiskLimitOpenQty, buf, len, used);
            if (state != GW_CODEC_SUCCESS) return state;
            state = eti::serialize (mRiskLimitNetPositionQty, buf, len, used);
            if (state != GW_CODEC_SUCCESS) return state;
            state = eti::serialize (mRiskLimitType, buf, len, used);
            if (state != GW_CODEC_SUCCESS) return state;
            state = eti::serialize (mRiskLimitRequestingPartyRole, buf, len, used);
            if (state != GW_CODEC_SUCCESS) return state;
            state = eti::serialize (mRiskLimitViolationIndicator, buf, len, used);
            if (state != GW_CODEC_SUCCESS) return state;
            state = eti::serialize (mRiskLimitGroup, buf, len, used);
            if (state != GW_CODEC_SUCCESS) return state;
            state = eti::serialize (mPad2, buf, len, used);
            if (state != GW_CODEC_SUCCESS) return state;
            return GW_CODEC_SUCCESS;
        }

        // deserialization
        codecState deserialize (const void *buf, size_t len, size_t &used)
        {
            codecState state;
            state = eti::deserialize (mRiskLimitQty, buf, len, used);
            if (state != GW_CODEC_SUCCESS) return state;
            state = eti::deserialize (mRiskLimitOpenQty, buf, len, used);
            if (state != GW_CODEC_SUCCESS) return state;
            state = eti::deserialize (mRiskLimitNetPositionQty, buf, len, used);
            if (state != GW_CODEC_SUCCESS) return state;
            state = eti::deserialize (mRiskLimitType, buf, len, used);
            if (state != GW_CODEC_SUCCESS) return state;
            state = eti::deserialize (mRiskLimitRequestingPartyRole, buf, len, used);
            if (state != GW_CODEC_SUCCESS) return state;
            state = eti::deserialize (mRiskLimitViolationIndicator, buf, len, used);
            if (state != GW_CODEC_SUCCESS) return state;
            state = eti::deserialize (mRiskLimitGroup, buf, len, used);
            if (state != GW_CODEC_SUCCESS) return state;
            state = eti::deserialize (mPad2, buf, len, used);
            if (state != GW_CODEC_SUCCESS) return state;
            return GW_CODEC_SUCCESS;
        }

        // string conversion
        string toString () const
        {
            stringstream sss;
            sss << "RiskLimitsRptGrpComp::"
                << "[RiskLimitQty=" << getRiskLimitQty () << "],"
                << "[RiskLimitOpenQty=" << getRiskLimitOpenQty () << "],"
                << "[RiskLimitNetPositionQty=" << getRiskLimitNetPositionQty () << "],"
                << "[RiskLimitType=" << getRiskLimitType () << "],"
                << "[RiskLimitRequestingPartyRole=" << getRiskLimitRequestingPartyRole () << "],"
                << "[RiskLimitViolationIndicator=" << getRiskLimitViolationIndicator () << "],"
                << "[RiskLimitGroup=" << getRiskLimitGroup () << "],"
                << "[Pad2=" << getPad2 () << "]";
            return sss.str();
        }
};

const double eurexRiskLimitsRptGrpCompPacket::RISK_LIMIT_QTY_MIN = -922337203685477.5807;
const double eurexRiskLimitsRptGrpCompPacket::RISK_LIMIT_QTY_MAX = 922337203685477.5807;
const int64_t eurexRiskLimitsRptGrpCompPacket::RISK_LIMIT_QTY_NO_VALUE = 0x8000000000000000;
const double eurexRiskLimitsRptGrpCompPacket::RISK_LIMIT_OPEN_QTY_MIN = -922337203685477.5807;
const double eurexRiskLimitsRptGrpCompPacket::RISK_LIMIT_OPEN_QTY_MAX = 922337203685477.5807;
const int64_t eurexRiskLimitsRptGrpCompPacket::RISK_LIMIT_OPEN_QTY_NO_VALUE = 0x8000000000000000;
const double eurexRiskLimitsRptGrpCompPacket::RISK_LIMIT_NET_POSITION_QTY_MIN = -922337203685477.5807;
const double eurexRiskLimitsRptGrpCompPacket::RISK_LIMIT_NET_POSITION_QTY_MAX = 922337203685477.5807;
const int64_t eurexRiskLimitsRptGrpCompPacket::RISK_LIMIT_NET_POSITION_QTY_NO_VALUE = 0x8000000000000000;
const int8_t eurexRiskLimitsRptGrpCompPacket::RISK_LIMIT_TYPE_MIN = 4;
const int8_t eurexRiskLimitsRptGrpCompPacket::RISK_LIMIT_TYPE_MAX = 5;
const int8_t eurexRiskLimitsRptGrpCompPacket::RISK_LIMIT_TYPE_NO_VALUE = 0xFF;
const int8_t eurexRiskLimitsRptGrpCompPacket::RISK_LIMIT_REQUESTING_PARTY_ROLE_MIN = 4;
const int8_t eurexRiskLimitsRptGrpCompPacket::RISK_LIMIT_REQUESTING_PARTY_ROLE_MAX = 59;
const int8_t eurexRiskLimitsRptGrpCompPacket::RISK_LIMIT_REQUESTING_PARTY_ROLE_NO_VALUE = 0xFF;
const int8_t eurexRiskLimitsRptGrpCompPacket::RISK_LIMIT_VIOLATION_INDICATOR_MIN = 0;
const int8_t eurexRiskLimitsRptGrpCompPacket::RISK_LIMIT_VIOLATION_INDICATOR_MAX = 1;
const int8_t eurexRiskLimitsRptGrpCompPacket::RISK_LIMIT_VIOLATION_INDICATOR_NO_VALUE = 0xFF;
const char eurexRiskLimitsRptGrpCompPacket::RISK_LIMIT_GROUP_NO_VALUE[3] = {0x00, 0x00, 0x00};
const size_t eurexRiskLimitsRptGrpCompPacket::RISK_LIMIT_GROUP_MAX_LENGTH = 3;
const char eurexRiskLimitsRptGrpCompPacket::PAD2_NO_VALUE[2] = {0x00, 0x00};
const size_t eurexRiskLimitsRptGrpCompPacket::PAD2_MAX_LENGTH = 2;


} // namespace neueda

#endif // EUREX_RISKLIMITSRPTGRPCOMP_PACKET_H
