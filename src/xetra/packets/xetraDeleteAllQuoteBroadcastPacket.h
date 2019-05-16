/*
 * Copyright 2014-2018 Neueda Ltd.
 * 
 * Generated 09/05/2019
 */
#ifndef XETRA_DELETEALLQUOTEBROADCAST_PACKET_H
#define XETRA_DELETEALLQUOTEBROADCAST_PACKET_H

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

class xetraDeleteAllQuoteBroadcastPacket
{
    public:
        // no value constants
        static const uint64_t MASS_ACTION_REPORT_ID_MIN;
        static const uint64_t MASS_ACTION_REPORT_ID_MAX;
        static const uint64_t MASS_ACTION_REPORT_ID_NO_VALUE;
        static const int64_t SECURITY_ID_MIN;
        static const int64_t SECURITY_ID_MAX;
        static const int64_t SECURITY_ID_NO_VALUE;
        static const int32_t MARKET_SEGMENT_ID_MIN;
        static const int32_t MARKET_SEGMENT_ID_MAX;
        static const int32_t MARKET_SEGMENT_ID_NO_VALUE;
        static const uint32_t TARGET_PARTY_IDSESSION_ID_MIN;
        static const uint32_t TARGET_PARTY_IDSESSION_ID_MAX;
        static const uint32_t TARGET_PARTY_IDSESSION_ID_NO_VALUE;
        static const uint32_t PARTY_IDENTERING_TRADER_MIN;
        static const uint32_t PARTY_IDENTERING_TRADER_MAX;
        static const uint32_t PARTY_IDENTERING_TRADER_NO_VALUE;
        static const int32_t TARGET_PARTY_IDEXECUTING_TRADER_MIN;
        static const int32_t TARGET_PARTY_IDEXECUTING_TRADER_MAX;
        static const int32_t TARGET_PARTY_IDEXECUTING_TRADER_NO_VALUE;
        static const int16_t NO_NOT_AFFECTED_SECURITIES_MIN;
        static const int16_t NO_NOT_AFFECTED_SECURITIES_MAX;
        static const int16_t NO_NOT_AFFECTED_SECURITIES_NO_VALUE;
        static const uint8_t MASS_ACTION_REASON_MIN;
        static const uint8_t MASS_ACTION_REASON_MAX;
        static const uint8_t MASS_ACTION_REASON_NO_VALUE;
        static const int8_t PARTY_IDENTERING_FIRM_MIN;
        static const int8_t PARTY_IDENTERING_FIRM_MAX;
        static const int8_t PARTY_IDENTERING_FIRM_NO_VALUE;
        static const char TARGET_PARTY_IDDESK_ID_NO_VALUE[3];
        static const size_t TARGET_PARTY_IDDESK_ID_MAX_LENGTH;
        static const char PAD1_NO_VALUE[1];
        static const size_t PAD1_MAX_LENGTH;
        static const size_t NOT_AFFECTED_SECURITIES_GRP_MIN;
        static const size_t NOT_AFFECTED_SECURITIES_GRP_MAX;

        // fields (use with care)
        xetraMessageHeaderOutCompPacket mMessageHeaderOut;
        xetraRBCHeaderMECompPacket mRBCHeaderME;
        uint64_t mMassActionReportID;
        int64_t mSecurityID;
        int32_t mMarketSegmentID;
        uint32_t mTargetPartyIDSessionID;
        uint32_t mPartyIDEnteringTrader;
        int32_t mTargetPartyIDExecutingTrader;
        int16_t mNoNotAffectedSecurities;
        uint8_t mMassActionReason;
        int8_t mPartyIDEnteringFirm;
        char mTargetPartyIDDeskID[3];
        char mPad1[1];
        vector<xetraNotAffectedSecuritiesGrpCompPacket> mNotAffectedSecuritiesGrp;

        // constructor
        xetraDeleteAllQuoteBroadcastPacket ()
        {
            mMessageHeaderOut.mTemplateID = 10410;
            mMassActionReportID = MASS_ACTION_REPORT_ID_NO_VALUE;
            mSecurityID = SECURITY_ID_NO_VALUE;
            mMarketSegmentID = MARKET_SEGMENT_ID_NO_VALUE;
            mTargetPartyIDSessionID = TARGET_PARTY_IDSESSION_ID_NO_VALUE;
            mPartyIDEnteringTrader = PARTY_IDENTERING_TRADER_NO_VALUE;
            mTargetPartyIDExecutingTrader = TARGET_PARTY_IDEXECUTING_TRADER_NO_VALUE;
            mNoNotAffectedSecurities = NO_NOT_AFFECTED_SECURITIES_NO_VALUE;
            mMassActionReason = MASS_ACTION_REASON_NO_VALUE;
            mPartyIDEnteringFirm = PARTY_IDENTERING_FIRM_NO_VALUE;
            memcpy(mTargetPartyIDDeskID, TARGET_PARTY_IDDESK_ID_NO_VALUE, sizeof (mTargetPartyIDDeskID));
            memcpy(mPad1, PAD1_NO_VALUE, sizeof (mPad1));
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

        uint32_t getTargetPartyIDSessionID () const
        {
            return mTargetPartyIDSessionID;
        }

        bool setTargetPartyIDSessionID (uint32_t v)
        {
            mTargetPartyIDSessionID = v;
            return ((TARGET_PARTY_IDSESSION_ID_MIN <= mTargetPartyIDSessionID && mTargetPartyIDSessionID <= TARGET_PARTY_IDSESSION_ID_MAX) || mTargetPartyIDSessionID == TARGET_PARTY_IDSESSION_ID_NO_VALUE);
        }

        bool isTargetPartyIDSessionIDValid () const
        {
            return (mTargetPartyIDSessionID != TARGET_PARTY_IDSESSION_ID_NO_VALUE);
        }

        void resetTargetPartyIDSessionID ()
        {
            mTargetPartyIDSessionID = TARGET_PARTY_IDSESSION_ID_NO_VALUE;
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

        int32_t getTargetPartyIDExecutingTrader () const
        {
            return mTargetPartyIDExecutingTrader;
        }

        bool setTargetPartyIDExecutingTrader (int32_t v)
        {
            mTargetPartyIDExecutingTrader = v;
            return ((TARGET_PARTY_IDEXECUTING_TRADER_MIN <= mTargetPartyIDExecutingTrader && mTargetPartyIDExecutingTrader <= TARGET_PARTY_IDEXECUTING_TRADER_MAX) || mTargetPartyIDExecutingTrader == TARGET_PARTY_IDEXECUTING_TRADER_NO_VALUE);
        }

        bool isTargetPartyIDExecutingTraderValid () const
        {
            return (mTargetPartyIDExecutingTrader != TARGET_PARTY_IDEXECUTING_TRADER_NO_VALUE);
        }

        void resetTargetPartyIDExecutingTrader ()
        {
            mTargetPartyIDExecutingTrader = TARGET_PARTY_IDEXECUTING_TRADER_NO_VALUE;
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

        string getTargetPartyIDDeskID () const
        {
            return string (mTargetPartyIDDeskID, TARGET_PARTY_IDDESK_ID_MAX_LENGTH);
        }

        bool setTargetPartyIDDeskID (const string& v)
        {
            memset (mTargetPartyIDDeskID, '\0', sizeof (mTargetPartyIDDeskID));
            size_t size = min ((size_t) v.size (), (size_t) TARGET_PARTY_IDDESK_ID_MAX_LENGTH);
            strncpy (mTargetPartyIDDeskID, v.c_str (), size);
            return (v.size () <= TARGET_PARTY_IDDESK_ID_MAX_LENGTH);
        }

        bool isTargetPartyIDDeskIDValid () const
        {
            return (memcmp (mTargetPartyIDDeskID, TARGET_PARTY_IDDESK_ID_NO_VALUE, sizeof (mTargetPartyIDDeskID)) != 0);
        }

        void resetTargetPartyIDDeskID ()
        {
            memcpy (mTargetPartyIDDeskID, TARGET_PARTY_IDDESK_ID_NO_VALUE, sizeof (mTargetPartyIDDeskID));
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
                + sizeof (mSecurityID)
                + sizeof (mMarketSegmentID)
                + sizeof (mTargetPartyIDSessionID)
                + sizeof (mPartyIDEnteringTrader)
                + sizeof (mTargetPartyIDExecutingTrader)
                + sizeof (mNoNotAffectedSecurities)
                + sizeof (mMassActionReason)
                + sizeof (mPartyIDEnteringFirm)
                + sizeof (mTargetPartyIDDeskID)
                + sizeof (mPad1)
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
            state = xetra::serialize (mSecurityID, buf, len, used);
            if (state != GW_CODEC_SUCCESS) return state;
            state = xetra::serialize (mMarketSegmentID, buf, len, used);
            if (state != GW_CODEC_SUCCESS) return state;
            state = xetra::serialize (mTargetPartyIDSessionID, buf, len, used);
            if (state != GW_CODEC_SUCCESS) return state;
            state = xetra::serialize (mPartyIDEnteringTrader, buf, len, used);
            if (state != GW_CODEC_SUCCESS) return state;
            state = xetra::serialize (mTargetPartyIDExecutingTrader, buf, len, used);
            if (state != GW_CODEC_SUCCESS) return state;
            state = xetra::serialize (mNoNotAffectedSecurities, buf, len, used);
            if (state != GW_CODEC_SUCCESS) return state;
            state = xetra::serialize (mMassActionReason, buf, len, used);
            if (state != GW_CODEC_SUCCESS) return state;
            state = xetra::serialize (mPartyIDEnteringFirm, buf, len, used);
            if (state != GW_CODEC_SUCCESS) return state;
            state = xetra::serialize (mTargetPartyIDDeskID, buf, len, used);
            if (state != GW_CODEC_SUCCESS) return state;
            state = xetra::serialize (mPad1, buf, len, used);
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
            state = xetra::deserialize (mSecurityID, buf, len, used);
            if (state != GW_CODEC_SUCCESS) return state;
            state = xetra::deserialize (mMarketSegmentID, buf, len, used);
            if (state != GW_CODEC_SUCCESS) return state;
            state = xetra::deserialize (mTargetPartyIDSessionID, buf, len, used);
            if (state != GW_CODEC_SUCCESS) return state;
            state = xetra::deserialize (mPartyIDEnteringTrader, buf, len, used);
            if (state != GW_CODEC_SUCCESS) return state;
            state = xetra::deserialize (mTargetPartyIDExecutingTrader, buf, len, used);
            if (state != GW_CODEC_SUCCESS) return state;
            state = xetra::deserialize (mNoNotAffectedSecurities, buf, len, used);
            if (state != GW_CODEC_SUCCESS) return state;
            state = xetra::deserialize (mMassActionReason, buf, len, used);
            if (state != GW_CODEC_SUCCESS) return state;
            state = xetra::deserialize (mPartyIDEnteringFirm, buf, len, used);
            if (state != GW_CODEC_SUCCESS) return state;
            state = xetra::deserialize (mTargetPartyIDDeskID, buf, len, used);
            if (state != GW_CODEC_SUCCESS) return state;
            state = xetra::deserialize (mPad1, buf, len, used);
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
            sss << "DeleteAllQuoteBroadcast::"
                << "[MessageHeaderOut=" << mMessageHeaderOut.toString () << "],"
                << "[RBCHeaderME=" << mRBCHeaderME.toString () << "],"
                << "[MassActionReportID=" << getMassActionReportID () << "],"
                << "[SecurityID=" << getSecurityID () << "],"
                << "[MarketSegmentID=" << getMarketSegmentID () << "],"
                << "[TargetPartyIDSessionID=" << getTargetPartyIDSessionID () << "],"
                << "[PartyIDEnteringTrader=" << getPartyIDEnteringTrader () << "],"
                << "[TargetPartyIDExecutingTrader=" << getTargetPartyIDExecutingTrader () << "],"
                << "[NoNotAffectedSecurities=" << getNoNotAffectedSecurities () << "],"
                << "[MassActionReason=" << getMassActionReason () << "],"
                << "[PartyIDEnteringFirm=" << getPartyIDEnteringFirm () << "],"
                << "[TargetPartyIDDeskID=" << getTargetPartyIDDeskID () << "],"
                << "[Pad1=" << getPad1 () << "],"
                << "[NotAffectedSecuritiesGrp=" << xetra::toString (getNotAffectedSecuritiesGrp ()) << "]";
            return sss.str();
        }
};

const uint64_t xetraDeleteAllQuoteBroadcastPacket::MASS_ACTION_REPORT_ID_MIN = 0UL;
const uint64_t xetraDeleteAllQuoteBroadcastPacket::MASS_ACTION_REPORT_ID_MAX = 18446744073709551614UL;
const uint64_t xetraDeleteAllQuoteBroadcastPacket::MASS_ACTION_REPORT_ID_NO_VALUE = 0xFFFFFFFFFFFFFFFF;
const int64_t xetraDeleteAllQuoteBroadcastPacket::SECURITY_ID_MIN = -9223372036854775807L;
const int64_t xetraDeleteAllQuoteBroadcastPacket::SECURITY_ID_MAX = 9223372036854775807L;
const int64_t xetraDeleteAllQuoteBroadcastPacket::SECURITY_ID_NO_VALUE = 0x8000000000000000;
const int32_t xetraDeleteAllQuoteBroadcastPacket::MARKET_SEGMENT_ID_MIN = -2147483647;
const int32_t xetraDeleteAllQuoteBroadcastPacket::MARKET_SEGMENT_ID_MAX = 2147483647;
const int32_t xetraDeleteAllQuoteBroadcastPacket::MARKET_SEGMENT_ID_NO_VALUE = 0x80000000;
const uint32_t xetraDeleteAllQuoteBroadcastPacket::TARGET_PARTY_IDSESSION_ID_MIN = 0;
const uint32_t xetraDeleteAllQuoteBroadcastPacket::TARGET_PARTY_IDSESSION_ID_MAX = 4294967294;
const uint32_t xetraDeleteAllQuoteBroadcastPacket::TARGET_PARTY_IDSESSION_ID_NO_VALUE = 0xFFFFFFFF;
const uint32_t xetraDeleteAllQuoteBroadcastPacket::PARTY_IDENTERING_TRADER_MIN = 0;
const uint32_t xetraDeleteAllQuoteBroadcastPacket::PARTY_IDENTERING_TRADER_MAX = 4294967294;
const uint32_t xetraDeleteAllQuoteBroadcastPacket::PARTY_IDENTERING_TRADER_NO_VALUE = 0xFFFFFFFF;
const int32_t xetraDeleteAllQuoteBroadcastPacket::TARGET_PARTY_IDEXECUTING_TRADER_MIN = 0;
const int32_t xetraDeleteAllQuoteBroadcastPacket::TARGET_PARTY_IDEXECUTING_TRADER_MAX = 2147483647;
const int32_t xetraDeleteAllQuoteBroadcastPacket::TARGET_PARTY_IDEXECUTING_TRADER_NO_VALUE = 0xFFFFFFFF;
const int16_t xetraDeleteAllQuoteBroadcastPacket::NO_NOT_AFFECTED_SECURITIES_MIN = 0;
const int16_t xetraDeleteAllQuoteBroadcastPacket::NO_NOT_AFFECTED_SECURITIES_MAX = 500;
const int16_t xetraDeleteAllQuoteBroadcastPacket::NO_NOT_AFFECTED_SECURITIES_NO_VALUE = 0xFFFF;
const uint8_t xetraDeleteAllQuoteBroadcastPacket::MASS_ACTION_REASON_MIN = 0;
const uint8_t xetraDeleteAllQuoteBroadcastPacket::MASS_ACTION_REASON_MAX = 200;
const uint8_t xetraDeleteAllQuoteBroadcastPacket::MASS_ACTION_REASON_NO_VALUE = 0xFF;
const int8_t xetraDeleteAllQuoteBroadcastPacket::PARTY_IDENTERING_FIRM_MIN = 1;
const int8_t xetraDeleteAllQuoteBroadcastPacket::PARTY_IDENTERING_FIRM_MAX = 2;
const int8_t xetraDeleteAllQuoteBroadcastPacket::PARTY_IDENTERING_FIRM_NO_VALUE = 0xFF;
const char xetraDeleteAllQuoteBroadcastPacket::TARGET_PARTY_IDDESK_ID_NO_VALUE[3] = {0x00, 0x00, 0x00};
const size_t xetraDeleteAllQuoteBroadcastPacket::TARGET_PARTY_IDDESK_ID_MAX_LENGTH = 3;
const char xetraDeleteAllQuoteBroadcastPacket::PAD1_NO_VALUE[1] = {0x00};
const size_t xetraDeleteAllQuoteBroadcastPacket::PAD1_MAX_LENGTH = 1;
const size_t xetraDeleteAllQuoteBroadcastPacket::NOT_AFFECTED_SECURITIES_GRP_MIN = 0;
const size_t xetraDeleteAllQuoteBroadcastPacket::NOT_AFFECTED_SECURITIES_GRP_MAX = 500;


} // namespace neueda

#endif // XETRA_DELETEALLQUOTEBROADCAST_PACKET_H
