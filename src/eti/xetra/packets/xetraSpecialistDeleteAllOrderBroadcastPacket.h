/*
 * Copyright 2014-2018 Neueda Ltd.
 * 
 * Generated 08/03/2020
 */
#ifndef XETRA_SPECIALISTDELETEALLORDERBROADCAST_PACKET_H
#define XETRA_SPECIALISTDELETEALLORDERBROADCAST_PACKET_H

#include <string>
#include <vector>
#include <sstream>
#include <cstddef>
#include <stdint.h>
#include "xetraPackets.h"
#include "EtiPacketUtils.h"

namespace neueda
{

using namespace std;

class xetraSpecialistDeleteAllOrderBroadcastPacket
{
    public:
        // no value constants
        static const uint64_t MASS_ACTION_REPORT_ID_MIN;
        static const uint64_t MASS_ACTION_REPORT_ID_MAX;
        static const uint64_t MASS_ACTION_REPORT_ID_NO_VALUE;
        static const int32_t MARKET_SEGMENT_ID_MIN;
        static const int32_t MARKET_SEGMENT_ID_MAX;
        static const int32_t MARKET_SEGMENT_ID_NO_VALUE;
        static const uint32_t PARTY_IDENTERING_TRADER_MIN;
        static const uint32_t PARTY_IDENTERING_TRADER_MAX;
        static const uint32_t PARTY_IDENTERING_TRADER_NO_VALUE;
        static const int16_t NO_AFFECTED_ORDERS_MIN;
        static const int16_t NO_AFFECTED_ORDERS_MAX;
        static const int16_t NO_AFFECTED_ORDERS_NO_VALUE;
        static const int8_t PARTY_IDENTERING_FIRM_MIN;
        static const int8_t PARTY_IDENTERING_FIRM_MAX;
        static const int8_t PARTY_IDENTERING_FIRM_NO_VALUE;
        static const uint8_t MASS_ACTION_REASON_MIN;
        static const uint8_t MASS_ACTION_REASON_MAX;
        static const uint8_t MASS_ACTION_REASON_NO_VALUE;
        static const char PAD4_NO_VALUE[4];
        static const size_t PAD4_MAX_LENGTH;
        static const size_t AFFECTED_ORD_GRP_MIN;
        static const size_t AFFECTED_ORD_GRP_MAX;

        // fields (use with care)
        xetraMessageHeaderOutCompPacket mMessageHeaderOut;
        xetraRBCHeaderMECompPacket mRBCHeaderME;
        uint64_t mMassActionReportID;
        int32_t mMarketSegmentID;
        uint32_t mPartyIDEnteringTrader;
        int16_t mNoAffectedOrders;
        int8_t mPartyIDEnteringFirm;
        uint8_t mMassActionReason;
        char mPad4[4];
        vector<xetraAffectedOrdGrpCompPacket> mAffectedOrdGrp;

        // constructor
        xetraSpecialistDeleteAllOrderBroadcastPacket ()
        {
            mMessageHeaderOut.mTemplateID = 10137;
            mMassActionReportID = MASS_ACTION_REPORT_ID_NO_VALUE;
            mMarketSegmentID = MARKET_SEGMENT_ID_NO_VALUE;
            mPartyIDEnteringTrader = PARTY_IDENTERING_TRADER_NO_VALUE;
            mNoAffectedOrders = NO_AFFECTED_ORDERS_NO_VALUE;
            mPartyIDEnteringFirm = PARTY_IDENTERING_FIRM_NO_VALUE;
            mMassActionReason = MASS_ACTION_REASON_NO_VALUE;
            memcpy(mPad4, PAD4_NO_VALUE, sizeof (mPad4));
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

        uint64_t getMassActionReportID () const
        {
            return mMassActionReportID;
        }

        bool setMassActionReportID (uint64_t v)
        {
            mMassActionReportID = v;
            return ((MASS_ACTION_REPORT_ID_MIN <= mMassActionReportID && mMassActionReportID <= MASS_ACTION_REPORT_ID_MAX) || mMassActionReportID == MASS_ACTION_REPORT_ID_NO_VALUE);
        }

        bool isMassActionReportIDValid () const
        {
            return (mMassActionReportID != MASS_ACTION_REPORT_ID_NO_VALUE);
        }

        void resetMassActionReportID ()
        {
            mMassActionReportID = MASS_ACTION_REPORT_ID_NO_VALUE;
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

        uint32_t getPartyIDEnteringTrader () const
        {
            return mPartyIDEnteringTrader;
        }

        bool setPartyIDEnteringTrader (uint32_t v)
        {
            mPartyIDEnteringTrader = v;
            return ((PARTY_IDENTERING_TRADER_MIN <= mPartyIDEnteringTrader && mPartyIDEnteringTrader <= PARTY_IDENTERING_TRADER_MAX) || mPartyIDEnteringTrader == PARTY_IDENTERING_TRADER_NO_VALUE);
        }

        bool isPartyIDEnteringTraderValid () const
        {
            return (mPartyIDEnteringTrader != PARTY_IDENTERING_TRADER_NO_VALUE);
        }

        void resetPartyIDEnteringTrader ()
        {
            mPartyIDEnteringTrader = PARTY_IDENTERING_TRADER_NO_VALUE;
        }

        int16_t getNoAffectedOrders () const
        {
            return mNoAffectedOrders;
        }

        bool setNoAffectedOrders (int16_t v)
        {
            mNoAffectedOrders = v;
            return ((NO_AFFECTED_ORDERS_MIN <= mNoAffectedOrders && mNoAffectedOrders <= NO_AFFECTED_ORDERS_MAX) || mNoAffectedOrders == NO_AFFECTED_ORDERS_NO_VALUE);
        }

        bool isNoAffectedOrdersValid () const
        {
            return (mNoAffectedOrders != NO_AFFECTED_ORDERS_NO_VALUE);
        }

        void resetNoAffectedOrders ()
        {
            mNoAffectedOrders = NO_AFFECTED_ORDERS_NO_VALUE;
        }

        int8_t getPartyIDEnteringFirm () const
        {
            return mPartyIDEnteringFirm;
        }

        bool setPartyIDEnteringFirm (int8_t v)
        {
            mPartyIDEnteringFirm = v;
            return ((PARTY_IDENTERING_FIRM_MIN <= mPartyIDEnteringFirm && mPartyIDEnteringFirm <= PARTY_IDENTERING_FIRM_MAX) || mPartyIDEnteringFirm == PARTY_IDENTERING_FIRM_NO_VALUE);
        }

        bool isPartyIDEnteringFirmValid () const
        {
            return (mPartyIDEnteringFirm != PARTY_IDENTERING_FIRM_NO_VALUE);
        }

        void resetPartyIDEnteringFirm ()
        {
            mPartyIDEnteringFirm = PARTY_IDENTERING_FIRM_NO_VALUE;
        }

        uint8_t getMassActionReason () const
        {
            return mMassActionReason;
        }

        bool setMassActionReason (uint8_t v)
        {
            mMassActionReason = v;
            return ((MASS_ACTION_REASON_MIN <= mMassActionReason && mMassActionReason <= MASS_ACTION_REASON_MAX) || mMassActionReason == MASS_ACTION_REASON_NO_VALUE);
        }

        bool isMassActionReasonValid () const
        {
            return (mMassActionReason != MASS_ACTION_REASON_NO_VALUE);
        }

        void resetMassActionReason ()
        {
            mMassActionReason = MASS_ACTION_REASON_NO_VALUE;
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

        const vector<xetraAffectedOrdGrpCompPacket>& getAffectedOrdGrp () const
        {
            return mAffectedOrdGrp;
        }

        bool setAffectedOrdGrp (const vector<xetraAffectedOrdGrpCompPacket>& v)
        {
            mAffectedOrdGrp = v;
            mNoAffectedOrders = v.size ();
            return (AFFECTED_ORD_GRP_MIN <= v.size () && v.size () <= AFFECTED_ORD_GRP_MAX);
        }


        // render current raw size
        size_t getRawSize () const
        {
            size_t result = mMessageHeaderOut.getRawSize()
                + mRBCHeaderME.getRawSize()
                + sizeof (mMassActionReportID)
                + sizeof (mMarketSegmentID)
                + sizeof (mPartyIDEnteringTrader)
                + sizeof (mNoAffectedOrders)
                + sizeof (mPartyIDEnteringFirm)
                + sizeof (mMassActionReason)
                + sizeof (mPad4)
                + eti::getRawSize (mAffectedOrdGrp);
            return result;
        }

        // serialization
        codecState serialize (void *buf, size_t len, size_t &used)
        {
            mNoAffectedOrders = mAffectedOrdGrp.size ();
            mMessageHeaderOut.mBodyLen = getRawSize ();
            codecState state;
            state = mMessageHeaderOut.serialize (buf, len, used);
            if (state != GW_CODEC_SUCCESS) return state;
            state = mRBCHeaderME.serialize (buf, len, used);
            if (state != GW_CODEC_SUCCESS) return state;
            state = eti::serialize (mMassActionReportID, buf, len, used);
            if (state != GW_CODEC_SUCCESS) return state;
            state = eti::serialize (mMarketSegmentID, buf, len, used);
            if (state != GW_CODEC_SUCCESS) return state;
            state = eti::serialize (mPartyIDEnteringTrader, buf, len, used);
            if (state != GW_CODEC_SUCCESS) return state;
            state = eti::serialize (mNoAffectedOrders, buf, len, used);
            if (state != GW_CODEC_SUCCESS) return state;
            state = eti::serialize (mPartyIDEnteringFirm, buf, len, used);
            if (state != GW_CODEC_SUCCESS) return state;
            state = eti::serialize (mMassActionReason, buf, len, used);
            if (state != GW_CODEC_SUCCESS) return state;
            state = eti::serialize (mPad4, buf, len, used);
            if (state != GW_CODEC_SUCCESS) return state;
            for (size_t i = 0; i < mAffectedOrdGrp.size (); i++)
            {
                state = mAffectedOrdGrp[i].serialize (buf, len, used);
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
            state = eti::deserialize (mMassActionReportID, buf, len, used);
            if (state != GW_CODEC_SUCCESS) return state;
            state = eti::deserialize (mMarketSegmentID, buf, len, used);
            if (state != GW_CODEC_SUCCESS) return state;
            state = eti::deserialize (mPartyIDEnteringTrader, buf, len, used);
            if (state != GW_CODEC_SUCCESS) return state;
            state = eti::deserialize (mNoAffectedOrders, buf, len, used);
            if (state != GW_CODEC_SUCCESS) return state;
            state = eti::deserialize (mPartyIDEnteringFirm, buf, len, used);
            if (state != GW_CODEC_SUCCESS) return state;
            state = eti::deserialize (mMassActionReason, buf, len, used);
            if (state != GW_CODEC_SUCCESS) return state;
            state = eti::deserialize (mPad4, buf, len, used);
            if (state != GW_CODEC_SUCCESS) return state;
            mAffectedOrdGrp.resize (mNoAffectedOrders);
            for (vector<xetraAffectedOrdGrpCompPacket>::iterator it = mAffectedOrdGrp.begin (); it != mAffectedOrdGrp.end (); ++it)
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
            sss << "SpecialistDeleteAllOrderBroadcast::"
                << "[MessageHeaderOut=" << mMessageHeaderOut.toString () << "],"
                << "[RBCHeaderME=" << mRBCHeaderME.toString () << "],"
                << "[MassActionReportID=" << getMassActionReportID () << "],"
                << "[MarketSegmentID=" << getMarketSegmentID () << "],"
                << "[PartyIDEnteringTrader=" << getPartyIDEnteringTrader () << "],"
                << "[NoAffectedOrders=" << getNoAffectedOrders () << "],"
                << "[PartyIDEnteringFirm=" << getPartyIDEnteringFirm () << "],"
                << "[MassActionReason=" << getMassActionReason () << "],"
                << "[Pad4=" << getPad4 () << "],"
                << "[AffectedOrdGrp=" << eti::toString (getAffectedOrdGrp ()) << "]";
            return sss.str();
        }
};

const uint64_t xetraSpecialistDeleteAllOrderBroadcastPacket::MASS_ACTION_REPORT_ID_MIN = 0UL;
const uint64_t xetraSpecialistDeleteAllOrderBroadcastPacket::MASS_ACTION_REPORT_ID_MAX = 18446744073709551614UL;
const uint64_t xetraSpecialistDeleteAllOrderBroadcastPacket::MASS_ACTION_REPORT_ID_NO_VALUE = 0xFFFFFFFFFFFFFFFF;
const int32_t xetraSpecialistDeleteAllOrderBroadcastPacket::MARKET_SEGMENT_ID_MIN = -2147483647;
const int32_t xetraSpecialistDeleteAllOrderBroadcastPacket::MARKET_SEGMENT_ID_MAX = 2147483647;
const int32_t xetraSpecialistDeleteAllOrderBroadcastPacket::MARKET_SEGMENT_ID_NO_VALUE = 0x80000000;
const uint32_t xetraSpecialistDeleteAllOrderBroadcastPacket::PARTY_IDENTERING_TRADER_MIN = 0;
const uint32_t xetraSpecialistDeleteAllOrderBroadcastPacket::PARTY_IDENTERING_TRADER_MAX = 4294967294;
const uint32_t xetraSpecialistDeleteAllOrderBroadcastPacket::PARTY_IDENTERING_TRADER_NO_VALUE = 0xFFFFFFFF;
const int16_t xetraSpecialistDeleteAllOrderBroadcastPacket::NO_AFFECTED_ORDERS_MIN = 0;
const int16_t xetraSpecialistDeleteAllOrderBroadcastPacket::NO_AFFECTED_ORDERS_MAX = 500;
const int16_t xetraSpecialistDeleteAllOrderBroadcastPacket::NO_AFFECTED_ORDERS_NO_VALUE = 0xFFFF;
const int8_t xetraSpecialistDeleteAllOrderBroadcastPacket::PARTY_IDENTERING_FIRM_MIN = 1;
const int8_t xetraSpecialistDeleteAllOrderBroadcastPacket::PARTY_IDENTERING_FIRM_MAX = 3;
const int8_t xetraSpecialistDeleteAllOrderBroadcastPacket::PARTY_IDENTERING_FIRM_NO_VALUE = 0xFF;
const uint8_t xetraSpecialistDeleteAllOrderBroadcastPacket::MASS_ACTION_REASON_MIN = 0;
const uint8_t xetraSpecialistDeleteAllOrderBroadcastPacket::MASS_ACTION_REASON_MAX = 200;
const uint8_t xetraSpecialistDeleteAllOrderBroadcastPacket::MASS_ACTION_REASON_NO_VALUE = 0xFF;
const char xetraSpecialistDeleteAllOrderBroadcastPacket::PAD4_NO_VALUE[4] = {0x00, 0x00, 0x00, 0x00};
const size_t xetraSpecialistDeleteAllOrderBroadcastPacket::PAD4_MAX_LENGTH = 4;
const size_t xetraSpecialistDeleteAllOrderBroadcastPacket::AFFECTED_ORD_GRP_MIN = 0;
const size_t xetraSpecialistDeleteAllOrderBroadcastPacket::AFFECTED_ORD_GRP_MAX = 500;


} // namespace neueda

#endif // XETRA_SPECIALISTDELETEALLORDERBROADCAST_PACKET_H
