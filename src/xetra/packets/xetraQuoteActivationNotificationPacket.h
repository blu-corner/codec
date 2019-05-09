/*
 * Copyright 2014-2018 Neueda Ltd.
 * 
 * Generated 11/04/2019
 */
#ifndef XETRA_QUOTEACTIVATIONNOTIFICATION_PACKET_H
#define XETRA_QUOTEACTIVATIONNOTIFICATION_PACKET_H

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

class xetraQuoteActivationNotificationPacket
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
        static const int16_t NO_NOT_AFFECTED_SECURITIES_MIN;
        static const int16_t NO_NOT_AFFECTED_SECURITIES_MAX;
        static const int16_t NO_NOT_AFFECTED_SECURITIES_NO_VALUE;
        static const int8_t PARTY_IDENTERING_FIRM_MIN;
        static const int8_t PARTY_IDENTERING_FIRM_MAX;
        static const int8_t PARTY_IDENTERING_FIRM_NO_VALUE;
        static const int8_t MASS_ACTION_TYPE_MIN;
        static const int8_t MASS_ACTION_TYPE_MAX;
        static const int8_t MASS_ACTION_TYPE_NO_VALUE;
        static const uint8_t MASS_ACTION_REASON_MIN;
        static const uint8_t MASS_ACTION_REASON_MAX;
        static const uint8_t MASS_ACTION_REASON_NO_VALUE;
        static const char PAD3_NO_VALUE[3];
        static const size_t PAD3_MAX_LENGTH;
        static const size_t NOT_AFFECTED_SECURITIES_GRP_MIN;
        static const size_t NOT_AFFECTED_SECURITIES_GRP_MAX;

        // fields (use with care)
        xetraMessageHeaderOutCompPacket mMessageHeaderOut;
        xetraRBCHeaderMECompPacket mRBCHeaderME;
        uint64_t mMassActionReportID;
        int32_t mMarketSegmentID;
        uint32_t mPartyIDEnteringTrader;
        int16_t mNoNotAffectedSecurities;
        int8_t mPartyIDEnteringFirm;
        int8_t mMassActionType;
        uint8_t mMassActionReason;
        char mPad3[3];
        vector<xetraNotAffectedSecuritiesGrpCompPacket> mNotAffectedSecuritiesGrp;

        // constructor
        xetraQuoteActivationNotificationPacket ()
        {
            mMessageHeaderOut.mTemplateID = 10411;
            mMassActionReportID = MASS_ACTION_REPORT_ID_NO_VALUE;
            mMarketSegmentID = MARKET_SEGMENT_ID_NO_VALUE;
            mPartyIDEnteringTrader = PARTY_IDENTERING_TRADER_NO_VALUE;
            mNoNotAffectedSecurities = NO_NOT_AFFECTED_SECURITIES_NO_VALUE;
            mPartyIDEnteringFirm = PARTY_IDENTERING_FIRM_NO_VALUE;
            mMassActionType = MASS_ACTION_TYPE_NO_VALUE;
            mMassActionReason = MASS_ACTION_REASON_NO_VALUE;
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

        int16_t getNoNotAffectedSecurities () const
        {
            return mNoNotAffectedSecurities;
        }

        bool setNoNotAffectedSecurities (int16_t v)
        {
            mNoNotAffectedSecurities = v;
            return ((NO_NOT_AFFECTED_SECURITIES_MIN <= mNoNotAffectedSecurities && mNoNotAffectedSecurities <= NO_NOT_AFFECTED_SECURITIES_MAX) || mNoNotAffectedSecurities == NO_NOT_AFFECTED_SECURITIES_NO_VALUE);
        }

        bool isNoNotAffectedSecuritiesValid () const
        {
            return (mNoNotAffectedSecurities != NO_NOT_AFFECTED_SECURITIES_NO_VALUE);
        }

        void resetNoNotAffectedSecurities ()
        {
            mNoNotAffectedSecurities = NO_NOT_AFFECTED_SECURITIES_NO_VALUE;
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

        int8_t getMassActionType () const
        {
            return mMassActionType;
        }

        bool setMassActionType (int8_t v)
        {
            mMassActionType = v;
            return ((MASS_ACTION_TYPE_MIN <= mMassActionType && mMassActionType <= MASS_ACTION_TYPE_MAX) || mMassActionType == MASS_ACTION_TYPE_NO_VALUE);
        }

        bool isMassActionTypeValid () const
        {
            return (mMassActionType != MASS_ACTION_TYPE_NO_VALUE);
        }

        void resetMassActionType ()
        {
            mMassActionType = MASS_ACTION_TYPE_NO_VALUE;
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

        const vector<xetraNotAffectedSecuritiesGrpCompPacket>& getNotAffectedSecuritiesGrp () const
        {
            return mNotAffectedSecuritiesGrp;
        }

        bool setNotAffectedSecuritiesGrp (const vector<xetraNotAffectedSecuritiesGrpCompPacket>& v)
        {
            mNotAffectedSecuritiesGrp = v;
            mNoNotAffectedSecurities = v.size ();
            return (NOT_AFFECTED_SECURITIES_GRP_MIN <= v.size () && v.size () <= NOT_AFFECTED_SECURITIES_GRP_MAX);
        }


        // render current raw size
        size_t getRawSize () const
        {
            size_t result = mMessageHeaderOut.getRawSize()
                + mRBCHeaderME.getRawSize()
                + sizeof (mMassActionReportID)
                + sizeof (mMarketSegmentID)
                + sizeof (mPartyIDEnteringTrader)
                + sizeof (mNoNotAffectedSecurities)
                + sizeof (mPartyIDEnteringFirm)
                + sizeof (mMassActionType)
                + sizeof (mMassActionReason)
                + sizeof (mPad3)
                + xetra::getRawSize (mNotAffectedSecuritiesGrp);
            return result;
        }

        // serialization
        codecState serialize (void *buf, size_t len, size_t &used)
        {
            mNoNotAffectedSecurities = mNotAffectedSecuritiesGrp.size ();
            mMessageHeaderOut.mBodyLen = getRawSize ();
            codecState state;
            state = mMessageHeaderOut.serialize (buf, len, used);
            if (state != GW_CODEC_SUCCESS) return state;
            state = mRBCHeaderME.serialize (buf, len, used);
            if (state != GW_CODEC_SUCCESS) return state;
            state = xetra::serialize (mMassActionReportID, buf, len, used);
            if (state != GW_CODEC_SUCCESS) return state;
            state = xetra::serialize (mMarketSegmentID, buf, len, used);
            if (state != GW_CODEC_SUCCESS) return state;
            state = xetra::serialize (mPartyIDEnteringTrader, buf, len, used);
            if (state != GW_CODEC_SUCCESS) return state;
            state = xetra::serialize (mNoNotAffectedSecurities, buf, len, used);
            if (state != GW_CODEC_SUCCESS) return state;
            state = xetra::serialize (mPartyIDEnteringFirm, buf, len, used);
            if (state != GW_CODEC_SUCCESS) return state;
            state = xetra::serialize (mMassActionType, buf, len, used);
            if (state != GW_CODEC_SUCCESS) return state;
            state = xetra::serialize (mMassActionReason, buf, len, used);
            if (state != GW_CODEC_SUCCESS) return state;
            state = xetra::serialize (mPad3, buf, len, used);
            if (state != GW_CODEC_SUCCESS) return state;
            for (size_t i = 0; i < mNotAffectedSecuritiesGrp.size (); i++)
            {
                state = mNotAffectedSecuritiesGrp[i].serialize (buf, len, used);
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
            state = xetra::deserialize (mMassActionReportID, buf, len, used);
            if (state != GW_CODEC_SUCCESS) return state;
            state = xetra::deserialize (mMarketSegmentID, buf, len, used);
            if (state != GW_CODEC_SUCCESS) return state;
            state = xetra::deserialize (mPartyIDEnteringTrader, buf, len, used);
            if (state != GW_CODEC_SUCCESS) return state;
            state = xetra::deserialize (mNoNotAffectedSecurities, buf, len, used);
            if (state != GW_CODEC_SUCCESS) return state;
            state = xetra::deserialize (mPartyIDEnteringFirm, buf, len, used);
            if (state != GW_CODEC_SUCCESS) return state;
            state = xetra::deserialize (mMassActionType, buf, len, used);
            if (state != GW_CODEC_SUCCESS) return state;
            state = xetra::deserialize (mMassActionReason, buf, len, used);
            if (state != GW_CODEC_SUCCESS) return state;
            state = xetra::deserialize (mPad3, buf, len, used);
            if (state != GW_CODEC_SUCCESS) return state;
            mNotAffectedSecuritiesGrp.resize (mNoNotAffectedSecurities);
            for (vector<xetraNotAffectedSecuritiesGrpCompPacket>::iterator it = mNotAffectedSecuritiesGrp.begin (); it != mNotAffectedSecuritiesGrp.end (); ++it)
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
            sss << "QuoteActivationNotification::"
                << "[MessageHeaderOut=" << mMessageHeaderOut.toString () << "],"
                << "[RBCHeaderME=" << mRBCHeaderME.toString () << "],"
                << "[MassActionReportID=" << getMassActionReportID () << "],"
                << "[MarketSegmentID=" << getMarketSegmentID () << "],"
                << "[PartyIDEnteringTrader=" << getPartyIDEnteringTrader () << "],"
                << "[NoNotAffectedSecurities=" << getNoNotAffectedSecurities () << "],"
                << "[PartyIDEnteringFirm=" << getPartyIDEnteringFirm () << "],"
                << "[MassActionType=" << getMassActionType () << "],"
                << "[MassActionReason=" << getMassActionReason () << "],"
                << "[Pad3=" << getPad3 () << "],"
                << "[NotAffectedSecuritiesGrp=" << xetra::toString (getNotAffectedSecuritiesGrp ()) << "]";
            return sss.str();
        }
};

const uint64_t xetraQuoteActivationNotificationPacket::MASS_ACTION_REPORT_ID_MIN = 0UL;
const uint64_t xetraQuoteActivationNotificationPacket::MASS_ACTION_REPORT_ID_MAX = 18446744073709551614UL;
const uint64_t xetraQuoteActivationNotificationPacket::MASS_ACTION_REPORT_ID_NO_VALUE = 0xFFFFFFFFFFFFFFFF;
const int32_t xetraQuoteActivationNotificationPacket::MARKET_SEGMENT_ID_MIN = -2147483647;
const int32_t xetraQuoteActivationNotificationPacket::MARKET_SEGMENT_ID_MAX = 2147483647;
const int32_t xetraQuoteActivationNotificationPacket::MARKET_SEGMENT_ID_NO_VALUE = 0x80000000;
const uint32_t xetraQuoteActivationNotificationPacket::PARTY_IDENTERING_TRADER_MIN = 0;
const uint32_t xetraQuoteActivationNotificationPacket::PARTY_IDENTERING_TRADER_MAX = 4294967294;
const uint32_t xetraQuoteActivationNotificationPacket::PARTY_IDENTERING_TRADER_NO_VALUE = 0xFFFFFFFF;
const int16_t xetraQuoteActivationNotificationPacket::NO_NOT_AFFECTED_SECURITIES_MIN = 0;
const int16_t xetraQuoteActivationNotificationPacket::NO_NOT_AFFECTED_SECURITIES_MAX = 500;
const int16_t xetraQuoteActivationNotificationPacket::NO_NOT_AFFECTED_SECURITIES_NO_VALUE = 0xFFFF;
const int8_t xetraQuoteActivationNotificationPacket::PARTY_IDENTERING_FIRM_MIN = 1;
const int8_t xetraQuoteActivationNotificationPacket::PARTY_IDENTERING_FIRM_MAX = 2;
const int8_t xetraQuoteActivationNotificationPacket::PARTY_IDENTERING_FIRM_NO_VALUE = 0xFF;
const int8_t xetraQuoteActivationNotificationPacket::MASS_ACTION_TYPE_MIN = 1;
const int8_t xetraQuoteActivationNotificationPacket::MASS_ACTION_TYPE_MAX = 2;
const int8_t xetraQuoteActivationNotificationPacket::MASS_ACTION_TYPE_NO_VALUE = 0xFF;
const uint8_t xetraQuoteActivationNotificationPacket::MASS_ACTION_REASON_MIN = 0;
const uint8_t xetraQuoteActivationNotificationPacket::MASS_ACTION_REASON_MAX = 200;
const uint8_t xetraQuoteActivationNotificationPacket::MASS_ACTION_REASON_NO_VALUE = 0xFF;
const char xetraQuoteActivationNotificationPacket::PAD3_NO_VALUE[3] = {0x00, 0x00, 0x00};
const size_t xetraQuoteActivationNotificationPacket::PAD3_MAX_LENGTH = 3;
const size_t xetraQuoteActivationNotificationPacket::NOT_AFFECTED_SECURITIES_GRP_MIN = 0;
const size_t xetraQuoteActivationNotificationPacket::NOT_AFFECTED_SECURITIES_GRP_MAX = 500;


} // namespace neueda

#endif // XETRA_QUOTEACTIVATIONNOTIFICATION_PACKET_H
