/*
 * Copyright 2014-2018 Neueda Ltd.
 * 
 * Generated 09/05/2019
 */
#ifndef XETRA_ISSUERNOTIFICATION_PACKET_H
#define XETRA_ISSUERNOTIFICATION_PACKET_H

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

class xetraIssuerNotificationPacket
{
    public:
        // no value constants
        static const int64_t SECURITY_ID_MIN;
        static const int64_t SECURITY_ID_MAX;
        static const int64_t SECURITY_ID_NO_VALUE;
        static const uint64_t TRANSACT_TIME_MIN;
        static const uint64_t TRANSACT_TIME_MAX;
        static const uint64_t TRANSACT_TIME_NO_VALUE;
        static const double LAST_PX_MIN;
        static const double LAST_PX_MAX;
        static const int64_t LAST_PX_NO_VALUE;
        static const double POTENTIAL_EXEC_VOLUME_MIN;
        static const double POTENTIAL_EXEC_VOLUME_MAX;
        static const int64_t POTENTIAL_EXEC_VOLUME_NO_VALUE;
        static const double LAST_QTY_MIN;
        static const double LAST_QTY_MAX;
        static const int64_t LAST_QTY_NO_VALUE;
        static const double IMBALANCE_QTY_MIN;
        static const double IMBALANCE_QTY_MAX;
        static const int64_t IMBALANCE_QTY_NO_VALUE;
        static const int32_t MARKET_SEGMENT_ID_MIN;
        static const int32_t MARKET_SEGMENT_ID_MAX;
        static const int32_t MARKET_SEGMENT_ID_NO_VALUE;
        static const uint32_t PARTY_IDSESSION_ID_MIN;
        static const uint32_t PARTY_IDSESSION_ID_MAX;
        static const uint32_t PARTY_IDSESSION_ID_NO_VALUE;
        static const int8_t SECURITY_TRADING_STATUS_MIN;
        static const int8_t SECURITY_TRADING_STATUS_MAX;
        static const int8_t SECURITY_TRADING_STATUS_NO_VALUE;
        static const char PAD7_NO_VALUE[7];
        static const size_t PAD7_MAX_LENGTH;

        // fields (use with care)
        xetraMessageHeaderOutCompPacket mMessageHeaderOut;
        xetraRBCHeaderMECompPacket mRBCHeaderME;
        int64_t mSecurityID;
        uint64_t mTransactTime;
        int64_t mLastPx;
        int64_t mPotentialExecVolume;
        int64_t mLastQty;
        int64_t mImbalanceQty;
        int32_t mMarketSegmentID;
        uint32_t mPartyIDSessionID;
        int8_t mSecurityTradingStatus;
        char mPad7[7];

        // constructor
        xetraIssuerNotificationPacket ()
        {
            mMessageHeaderOut.mTemplateID = 10316;
            mSecurityID = SECURITY_ID_NO_VALUE;
            mTransactTime = TRANSACT_TIME_NO_VALUE;
            mLastPx = LAST_PX_NO_VALUE;
            mPotentialExecVolume = POTENTIAL_EXEC_VOLUME_NO_VALUE;
            mLastQty = LAST_QTY_NO_VALUE;
            mImbalanceQty = IMBALANCE_QTY_NO_VALUE;
            mMarketSegmentID = MARKET_SEGMENT_ID_NO_VALUE;
            mPartyIDSessionID = PARTY_IDSESSION_ID_NO_VALUE;
            mSecurityTradingStatus = SECURITY_TRADING_STATUS_NO_VALUE;
            memcpy(mPad7, PAD7_NO_VALUE, sizeof (mPad7));
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

        double getPotentialExecVolume () const
        {
            return mPotentialExecVolume / 10000.0;
        }

        bool setPotentialExecVolume (double v)
        {
            mPotentialExecVolume = v * 10000.0;
            return ((POTENTIAL_EXEC_VOLUME_MIN <= v && v <= POTENTIAL_EXEC_VOLUME_MAX) || mPotentialExecVolume == POTENTIAL_EXEC_VOLUME_NO_VALUE);
        }

        bool isPotentialExecVolumeValid () const
        {
            return (mPotentialExecVolume != POTENTIAL_EXEC_VOLUME_NO_VALUE);
        }

        void resetPotentialExecVolume ()
        {
            mPotentialExecVolume = POTENTIAL_EXEC_VOLUME_NO_VALUE;
        }

        double getLastQty () const
        {
            return mLastQty / 10000.0;
        }

        bool setLastQty (double v)
        {
            mLastQty = v * 10000.0;
            return ((LAST_QTY_MIN <= v && v <= LAST_QTY_MAX) || mLastQty == LAST_QTY_NO_VALUE);
        }

        bool isLastQtyValid () const
        {
            return (mLastQty != LAST_QTY_NO_VALUE);
        }

        void resetLastQty ()
        {
            mLastQty = LAST_QTY_NO_VALUE;
        }

        double getImbalanceQty () const
        {
            return mImbalanceQty / 10000.0;
        }

        bool setImbalanceQty (double v)
        {
            mImbalanceQty = v * 10000.0;
            return ((IMBALANCE_QTY_MIN <= v && v <= IMBALANCE_QTY_MAX) || mImbalanceQty == IMBALANCE_QTY_NO_VALUE);
        }

        bool isImbalanceQtyValid () const
        {
            return (mImbalanceQty != IMBALANCE_QTY_NO_VALUE);
        }

        void resetImbalanceQty ()
        {
            mImbalanceQty = IMBALANCE_QTY_NO_VALUE;
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

        uint32_t getPartyIDSessionID () const
        {
            return mPartyIDSessionID;
        }

        bool setPartyIDSessionID (uint32_t v)
        {
            mPartyIDSessionID = v;
            return ((PARTY_IDSESSION_ID_MIN <= mPartyIDSessionID && mPartyIDSessionID <= PARTY_IDSESSION_ID_MAX) || mPartyIDSessionID == PARTY_IDSESSION_ID_NO_VALUE);
        }

        bool isPartyIDSessionIDValid () const
        {
            return (mPartyIDSessionID != PARTY_IDSESSION_ID_NO_VALUE);
        }

        void resetPartyIDSessionID ()
        {
            mPartyIDSessionID = PARTY_IDSESSION_ID_NO_VALUE;
        }

        int8_t getSecurityTradingStatus () const
        {
            return mSecurityTradingStatus;
        }

        bool setSecurityTradingStatus (int8_t v)
        {
            mSecurityTradingStatus = v;
            return ((SECURITY_TRADING_STATUS_MIN <= mSecurityTradingStatus && mSecurityTradingStatus <= SECURITY_TRADING_STATUS_MAX) || mSecurityTradingStatus == SECURITY_TRADING_STATUS_NO_VALUE);
        }

        bool isSecurityTradingStatusValid () const
        {
            return (mSecurityTradingStatus != SECURITY_TRADING_STATUS_NO_VALUE);
        }

        void resetSecurityTradingStatus ()
        {
            mSecurityTradingStatus = SECURITY_TRADING_STATUS_NO_VALUE;
        }

        string getPad7 () const
        {
            return string (mPad7, PAD7_MAX_LENGTH);
        }

        bool setPad7 (const string& v)
        {
            memset (mPad7, '\0', sizeof (mPad7));
            size_t size = min ((size_t) v.size (), (size_t) PAD7_MAX_LENGTH);
            strncpy (mPad7, v.c_str (), size);
            return (v.size () <= PAD7_MAX_LENGTH);
        }

        bool isPad7Valid () const
        {
            return (memcmp (mPad7, PAD7_NO_VALUE, sizeof (mPad7)) != 0);
        }

        void resetPad7 ()
        {
            memcpy (mPad7, PAD7_NO_VALUE, sizeof (mPad7));
        }


        // render current raw size
        size_t getRawSize () const
        {
            size_t result = mMessageHeaderOut.getRawSize()
                + mRBCHeaderME.getRawSize()
                + sizeof (mSecurityID)
                + sizeof (mTransactTime)
                + sizeof (mLastPx)
                + sizeof (mPotentialExecVolume)
                + sizeof (mLastQty)
                + sizeof (mImbalanceQty)
                + sizeof (mMarketSegmentID)
                + sizeof (mPartyIDSessionID)
                + sizeof (mSecurityTradingStatus)
                + sizeof (mPad7);
            return result;
        }

        // serialization
        codecState serialize (void *buf, size_t len, size_t &used)
        {
            mMessageHeaderOut.mBodyLen = getRawSize ();
            codecState state;
            state = mMessageHeaderOut.serialize (buf, len, used);
            if (state != GW_CODEC_SUCCESS) return state;
            state = mRBCHeaderME.serialize (buf, len, used);
            if (state != GW_CODEC_SUCCESS) return state;
            state = xetra::serialize (mSecurityID, buf, len, used);
            if (state != GW_CODEC_SUCCESS) return state;
            state = xetra::serialize (mTransactTime, buf, len, used);
            if (state != GW_CODEC_SUCCESS) return state;
            state = xetra::serialize (mLastPx, buf, len, used);
            if (state != GW_CODEC_SUCCESS) return state;
            state = xetra::serialize (mPotentialExecVolume, buf, len, used);
            if (state != GW_CODEC_SUCCESS) return state;
            state = xetra::serialize (mLastQty, buf, len, used);
            if (state != GW_CODEC_SUCCESS) return state;
            state = xetra::serialize (mImbalanceQty, buf, len, used);
            if (state != GW_CODEC_SUCCESS) return state;
            state = xetra::serialize (mMarketSegmentID, buf, len, used);
            if (state != GW_CODEC_SUCCESS) return state;
            state = xetra::serialize (mPartyIDSessionID, buf, len, used);
            if (state != GW_CODEC_SUCCESS) return state;
            state = xetra::serialize (mSecurityTradingStatus, buf, len, used);
            if (state != GW_CODEC_SUCCESS) return state;
            state = xetra::serialize (mPad7, buf, len, used);
            if (state != GW_CODEC_SUCCESS) return state;
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
            state = xetra::deserialize (mSecurityID, buf, len, used);
            if (state != GW_CODEC_SUCCESS) return state;
            state = xetra::deserialize (mTransactTime, buf, len, used);
            if (state != GW_CODEC_SUCCESS) return state;
            state = xetra::deserialize (mLastPx, buf, len, used);
            if (state != GW_CODEC_SUCCESS) return state;
            state = xetra::deserialize (mPotentialExecVolume, buf, len, used);
            if (state != GW_CODEC_SUCCESS) return state;
            state = xetra::deserialize (mLastQty, buf, len, used);
            if (state != GW_CODEC_SUCCESS) return state;
            state = xetra::deserialize (mImbalanceQty, buf, len, used);
            if (state != GW_CODEC_SUCCESS) return state;
            state = xetra::deserialize (mMarketSegmentID, buf, len, used);
            if (state != GW_CODEC_SUCCESS) return state;
            state = xetra::deserialize (mPartyIDSessionID, buf, len, used);
            if (state != GW_CODEC_SUCCESS) return state;
            state = xetra::deserialize (mSecurityTradingStatus, buf, len, used);
            if (state != GW_CODEC_SUCCESS) return state;
            state = xetra::deserialize (mPad7, buf, len, used);
            if (state != GW_CODEC_SUCCESS) return state;
            mMessageHeaderOut.mBodyLen = getRawSize ();
            return GW_CODEC_SUCCESS;
        }

        // string conversion
        string toString () const
        {
            stringstream sss;
            sss << "IssuerNotification::"
                << "[MessageHeaderOut=" << mMessageHeaderOut.toString () << "],"
                << "[RBCHeaderME=" << mRBCHeaderME.toString () << "],"
                << "[SecurityID=" << getSecurityID () << "],"
                << "[TransactTime=" << getTransactTime () << "],"
                << "[LastPx=" << getLastPx () << "],"
                << "[PotentialExecVolume=" << getPotentialExecVolume () << "],"
                << "[LastQty=" << getLastQty () << "],"
                << "[ImbalanceQty=" << getImbalanceQty () << "],"
                << "[MarketSegmentID=" << getMarketSegmentID () << "],"
                << "[PartyIDSessionID=" << getPartyIDSessionID () << "],"
                << "[SecurityTradingStatus=" << getSecurityTradingStatus () << "],"
                << "[Pad7=" << getPad7 () << "]";
            return sss.str();
        }
};

const int64_t xetraIssuerNotificationPacket::SECURITY_ID_MIN = -9223372036854775807L;
const int64_t xetraIssuerNotificationPacket::SECURITY_ID_MAX = 9223372036854775807L;
const int64_t xetraIssuerNotificationPacket::SECURITY_ID_NO_VALUE = 0x8000000000000000;
const uint64_t xetraIssuerNotificationPacket::TRANSACT_TIME_MIN = 0UL;
const uint64_t xetraIssuerNotificationPacket::TRANSACT_TIME_MAX = 18446744073709551614UL;
const uint64_t xetraIssuerNotificationPacket::TRANSACT_TIME_NO_VALUE = 0xFFFFFFFFFFFFFFFF;
const double xetraIssuerNotificationPacket::LAST_PX_MIN = -92233720368.54775807;
const double xetraIssuerNotificationPacket::LAST_PX_MAX = 92233720368.54775807;
const int64_t xetraIssuerNotificationPacket::LAST_PX_NO_VALUE = 0x8000000000000000;
const double xetraIssuerNotificationPacket::POTENTIAL_EXEC_VOLUME_MIN = -214748.3647;
const double xetraIssuerNotificationPacket::POTENTIAL_EXEC_VOLUME_MAX = 214748.3647;
const int64_t xetraIssuerNotificationPacket::POTENTIAL_EXEC_VOLUME_NO_VALUE = 0x8000000000000000;
const double xetraIssuerNotificationPacket::LAST_QTY_MIN = -922337203685477.5807;
const double xetraIssuerNotificationPacket::LAST_QTY_MAX = 922337203685477.5807;
const int64_t xetraIssuerNotificationPacket::LAST_QTY_NO_VALUE = 0x8000000000000000;
const double xetraIssuerNotificationPacket::IMBALANCE_QTY_MIN = -922337203685477.5807;
const double xetraIssuerNotificationPacket::IMBALANCE_QTY_MAX = 922337203685477.5807;
const int64_t xetraIssuerNotificationPacket::IMBALANCE_QTY_NO_VALUE = 0x8000000000000000;
const int32_t xetraIssuerNotificationPacket::MARKET_SEGMENT_ID_MIN = -2147483647;
const int32_t xetraIssuerNotificationPacket::MARKET_SEGMENT_ID_MAX = 2147483647;
const int32_t xetraIssuerNotificationPacket::MARKET_SEGMENT_ID_NO_VALUE = 0x80000000;
const uint32_t xetraIssuerNotificationPacket::PARTY_IDSESSION_ID_MIN = 0;
const uint32_t xetraIssuerNotificationPacket::PARTY_IDSESSION_ID_MAX = 4294967294;
const uint32_t xetraIssuerNotificationPacket::PARTY_IDSESSION_ID_NO_VALUE = 0xFFFFFFFF;
const int8_t xetraIssuerNotificationPacket::SECURITY_TRADING_STATUS_MIN = 7;
const int8_t xetraIssuerNotificationPacket::SECURITY_TRADING_STATUS_MAX = 8;
const int8_t xetraIssuerNotificationPacket::SECURITY_TRADING_STATUS_NO_VALUE = 0xFF;
const char xetraIssuerNotificationPacket::PAD7_NO_VALUE[7] = {0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00};
const size_t xetraIssuerNotificationPacket::PAD7_MAX_LENGTH = 7;


} // namespace neueda

#endif // XETRA_ISSUERNOTIFICATION_PACKET_H
