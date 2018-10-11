/*
 * Copyright 2014-2018 Neueda Ltd.
 * 
 * Generated 11/10/2018
 */
#ifndef XETRA_SERVICEAVAILABILITYBROADCAST_PACKET_H
#define XETRA_SERVICEAVAILABILITYBROADCAST_PACKET_H

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

class xetraServiceAvailabilityBroadcastPacket
{
    public:
        // no value constants
        static const int32_t MATCHING_ENGINE_TRADE_DATE_MIN;
        static const int32_t MATCHING_ENGINE_TRADE_DATE_MAX;
        static const int32_t MATCHING_ENGINE_TRADE_DATE_NO_VALUE;
        static const int32_t TRADE_MANAGER_TRADE_DATE_MIN;
        static const int32_t TRADE_MANAGER_TRADE_DATE_MAX;
        static const int32_t TRADE_MANAGER_TRADE_DATE_NO_VALUE;
        static const int32_t APPL_SEQ_TRADE_DATE_MIN;
        static const int32_t APPL_SEQ_TRADE_DATE_MAX;
        static const int32_t APPL_SEQ_TRADE_DATE_NO_VALUE;
        static const uint16_t PARTITION_ID_MIN;
        static const uint16_t PARTITION_ID_MAX;
        static const uint16_t PARTITION_ID_NO_VALUE;
        static const int8_t MATCHING_ENGINE_STATUS_MIN;
        static const int8_t MATCHING_ENGINE_STATUS_MAX;
        static const int8_t MATCHING_ENGINE_STATUS_NO_VALUE;
        static const int8_t TRADE_MANAGER_STATUS_MIN;
        static const int8_t TRADE_MANAGER_STATUS_MAX;
        static const int8_t TRADE_MANAGER_STATUS_NO_VALUE;
        static const int8_t APPL_SEQ_STATUS_MIN;
        static const int8_t APPL_SEQ_STATUS_MAX;
        static const int8_t APPL_SEQ_STATUS_NO_VALUE;
        static const char PAD7_NO_VALUE[7];
        static const size_t PAD7_MAX_LENGTH;

        // fields (use with care)
        xetraMessageHeaderOutCompPacket mMessageHeaderOut;
        xetraNRBCHeaderCompPacket mNRBCHeader;
        int32_t mMatchingEngineTradeDate;
        int32_t mTradeManagerTradeDate;
        int32_t mApplSeqTradeDate;
        uint16_t mPartitionID;
        int8_t mMatchingEngineStatus;
        int8_t mTradeManagerStatus;
        int8_t mApplSeqStatus;
        char mPad7[7];

        // constructor
        xetraServiceAvailabilityBroadcastPacket ()
        {
            mMessageHeaderOut.mTemplateID = 10030;
            mMatchingEngineTradeDate = MATCHING_ENGINE_TRADE_DATE_NO_VALUE;
            mTradeManagerTradeDate = TRADE_MANAGER_TRADE_DATE_NO_VALUE;
            mApplSeqTradeDate = APPL_SEQ_TRADE_DATE_NO_VALUE;
            mPartitionID = PARTITION_ID_NO_VALUE;
            mMatchingEngineStatus = MATCHING_ENGINE_STATUS_NO_VALUE;
            mTradeManagerStatus = TRADE_MANAGER_STATUS_NO_VALUE;
            mApplSeqStatus = APPL_SEQ_STATUS_NO_VALUE;
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

        const xetraNRBCHeaderCompPacket& getNRBCHeader () const
        {
            return mNRBCHeader;
        }

        bool setNRBCHeader (const xetraNRBCHeaderCompPacket& v)
        {
            mNRBCHeader = v;
            return true;
        }

        int32_t getMatchingEngineTradeDate () const
        {
            return mMatchingEngineTradeDate;
        }

        bool setMatchingEngineTradeDate (int32_t v)
        {
            mMatchingEngineTradeDate = v;
            return ((MATCHING_ENGINE_TRADE_DATE_MIN <= mMatchingEngineTradeDate && mMatchingEngineTradeDate <= MATCHING_ENGINE_TRADE_DATE_MAX) || mMatchingEngineTradeDate == MATCHING_ENGINE_TRADE_DATE_NO_VALUE);
        }

        bool isMatchingEngineTradeDateValid () const
        {
            return (mMatchingEngineTradeDate != MATCHING_ENGINE_TRADE_DATE_NO_VALUE);
        }

        void resetMatchingEngineTradeDate ()
        {
            mMatchingEngineTradeDate = MATCHING_ENGINE_TRADE_DATE_NO_VALUE;
        }

        int32_t getTradeManagerTradeDate () const
        {
            return mTradeManagerTradeDate;
        }

        bool setTradeManagerTradeDate (int32_t v)
        {
            mTradeManagerTradeDate = v;
            return ((TRADE_MANAGER_TRADE_DATE_MIN <= mTradeManagerTradeDate && mTradeManagerTradeDate <= TRADE_MANAGER_TRADE_DATE_MAX) || mTradeManagerTradeDate == TRADE_MANAGER_TRADE_DATE_NO_VALUE);
        }

        bool isTradeManagerTradeDateValid () const
        {
            return (mTradeManagerTradeDate != TRADE_MANAGER_TRADE_DATE_NO_VALUE);
        }

        void resetTradeManagerTradeDate ()
        {
            mTradeManagerTradeDate = TRADE_MANAGER_TRADE_DATE_NO_VALUE;
        }

        int32_t getApplSeqTradeDate () const
        {
            return mApplSeqTradeDate;
        }

        bool setApplSeqTradeDate (int32_t v)
        {
            mApplSeqTradeDate = v;
            return ((APPL_SEQ_TRADE_DATE_MIN <= mApplSeqTradeDate && mApplSeqTradeDate <= APPL_SEQ_TRADE_DATE_MAX) || mApplSeqTradeDate == APPL_SEQ_TRADE_DATE_NO_VALUE);
        }

        bool isApplSeqTradeDateValid () const
        {
            return (mApplSeqTradeDate != APPL_SEQ_TRADE_DATE_NO_VALUE);
        }

        void resetApplSeqTradeDate ()
        {
            mApplSeqTradeDate = APPL_SEQ_TRADE_DATE_NO_VALUE;
        }

        uint16_t getPartitionID () const
        {
            return mPartitionID;
        }

        bool setPartitionID (uint16_t v)
        {
            mPartitionID = v;
            return ((PARTITION_ID_MIN <= mPartitionID && mPartitionID <= PARTITION_ID_MAX) || mPartitionID == PARTITION_ID_NO_VALUE);
        }

        bool isPartitionIDValid () const
        {
            return (mPartitionID != PARTITION_ID_NO_VALUE);
        }

        void resetPartitionID ()
        {
            mPartitionID = PARTITION_ID_NO_VALUE;
        }

        int8_t getMatchingEngineStatus () const
        {
            return mMatchingEngineStatus;
        }

        bool setMatchingEngineStatus (int8_t v)
        {
            mMatchingEngineStatus = v;
            return ((MATCHING_ENGINE_STATUS_MIN <= mMatchingEngineStatus && mMatchingEngineStatus <= MATCHING_ENGINE_STATUS_MAX) || mMatchingEngineStatus == MATCHING_ENGINE_STATUS_NO_VALUE);
        }

        bool isMatchingEngineStatusValid () const
        {
            return (mMatchingEngineStatus != MATCHING_ENGINE_STATUS_NO_VALUE);
        }

        void resetMatchingEngineStatus ()
        {
            mMatchingEngineStatus = MATCHING_ENGINE_STATUS_NO_VALUE;
        }

        int8_t getTradeManagerStatus () const
        {
            return mTradeManagerStatus;
        }

        bool setTradeManagerStatus (int8_t v)
        {
            mTradeManagerStatus = v;
            return ((TRADE_MANAGER_STATUS_MIN <= mTradeManagerStatus && mTradeManagerStatus <= TRADE_MANAGER_STATUS_MAX) || mTradeManagerStatus == TRADE_MANAGER_STATUS_NO_VALUE);
        }

        bool isTradeManagerStatusValid () const
        {
            return (mTradeManagerStatus != TRADE_MANAGER_STATUS_NO_VALUE);
        }

        void resetTradeManagerStatus ()
        {
            mTradeManagerStatus = TRADE_MANAGER_STATUS_NO_VALUE;
        }

        int8_t getApplSeqStatus () const
        {
            return mApplSeqStatus;
        }

        bool setApplSeqStatus (int8_t v)
        {
            mApplSeqStatus = v;
            return ((APPL_SEQ_STATUS_MIN <= mApplSeqStatus && mApplSeqStatus <= APPL_SEQ_STATUS_MAX) || mApplSeqStatus == APPL_SEQ_STATUS_NO_VALUE);
        }

        bool isApplSeqStatusValid () const
        {
            return (mApplSeqStatus != APPL_SEQ_STATUS_NO_VALUE);
        }

        void resetApplSeqStatus ()
        {
            mApplSeqStatus = APPL_SEQ_STATUS_NO_VALUE;
        }

        string getPad7 () const
        {
            return string (mPad7, PAD7_MAX_LENGTH);
        }

        bool setPad7 (const string& v)
        {
            size_t size = min ((size_t) v.size (), (size_t) PAD7_MAX_LENGTH);
            for (size_t i = 0; i < size; i++)
                mPad7[i] = v[i];
            memset (&mPad7[size], '\0', PAD7_MAX_LENGTH-size);
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
                + mNRBCHeader.getRawSize()
                + sizeof (mMatchingEngineTradeDate)
                + sizeof (mTradeManagerTradeDate)
                + sizeof (mApplSeqTradeDate)
                + sizeof (mPartitionID)
                + sizeof (mMatchingEngineStatus)
                + sizeof (mTradeManagerStatus)
                + sizeof (mApplSeqStatus)
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
            state = mNRBCHeader.serialize (buf, len, used);
            if (state != GW_CODEC_SUCCESS) return state;
            state = xetra::serialize (mMatchingEngineTradeDate, buf, len, used);
            if (state != GW_CODEC_SUCCESS) return state;
            state = xetra::serialize (mTradeManagerTradeDate, buf, len, used);
            if (state != GW_CODEC_SUCCESS) return state;
            state = xetra::serialize (mApplSeqTradeDate, buf, len, used);
            if (state != GW_CODEC_SUCCESS) return state;
            state = xetra::serialize (mPartitionID, buf, len, used);
            if (state != GW_CODEC_SUCCESS) return state;
            state = xetra::serialize (mMatchingEngineStatus, buf, len, used);
            if (state != GW_CODEC_SUCCESS) return state;
            state = xetra::serialize (mTradeManagerStatus, buf, len, used);
            if (state != GW_CODEC_SUCCESS) return state;
            state = xetra::serialize (mApplSeqStatus, buf, len, used);
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
            state = mNRBCHeader.deserialize (buf, len, used);
            if (state != GW_CODEC_SUCCESS) return state;
            state = xetra::deserialize (mMatchingEngineTradeDate, buf, len, used);
            if (state != GW_CODEC_SUCCESS) return state;
            state = xetra::deserialize (mTradeManagerTradeDate, buf, len, used);
            if (state != GW_CODEC_SUCCESS) return state;
            state = xetra::deserialize (mApplSeqTradeDate, buf, len, used);
            if (state != GW_CODEC_SUCCESS) return state;
            state = xetra::deserialize (mPartitionID, buf, len, used);
            if (state != GW_CODEC_SUCCESS) return state;
            state = xetra::deserialize (mMatchingEngineStatus, buf, len, used);
            if (state != GW_CODEC_SUCCESS) return state;
            state = xetra::deserialize (mTradeManagerStatus, buf, len, used);
            if (state != GW_CODEC_SUCCESS) return state;
            state = xetra::deserialize (mApplSeqStatus, buf, len, used);
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
            sss << "ServiceAvailabilityBroadcast::"
                << "[MessageHeaderOut=" << mMessageHeaderOut.toString () << "],"
                << "[NRBCHeader=" << mNRBCHeader.toString () << "],"
                << "[MatchingEngineTradeDate=" << getMatchingEngineTradeDate () << "],"
                << "[TradeManagerTradeDate=" << getTradeManagerTradeDate () << "],"
                << "[ApplSeqTradeDate=" << getApplSeqTradeDate () << "],"
                << "[PartitionID=" << getPartitionID () << "],"
                << "[MatchingEngineStatus=" << getMatchingEngineStatus () << "],"
                << "[TradeManagerStatus=" << getTradeManagerStatus () << "],"
                << "[ApplSeqStatus=" << getApplSeqStatus () << "],"
                << "[Pad7=" << getPad7 () << "]";
            return sss.str();
        }
};

const int32_t xetraServiceAvailabilityBroadcastPacket::MATCHING_ENGINE_TRADE_DATE_MIN = 0;
const int32_t xetraServiceAvailabilityBroadcastPacket::MATCHING_ENGINE_TRADE_DATE_MAX = 99991231;
const int32_t xetraServiceAvailabilityBroadcastPacket::MATCHING_ENGINE_TRADE_DATE_NO_VALUE = 0xFFFFFFFF;
const int32_t xetraServiceAvailabilityBroadcastPacket::TRADE_MANAGER_TRADE_DATE_MIN = 0;
const int32_t xetraServiceAvailabilityBroadcastPacket::TRADE_MANAGER_TRADE_DATE_MAX = 99991231;
const int32_t xetraServiceAvailabilityBroadcastPacket::TRADE_MANAGER_TRADE_DATE_NO_VALUE = 0xFFFFFFFF;
const int32_t xetraServiceAvailabilityBroadcastPacket::APPL_SEQ_TRADE_DATE_MIN = 0;
const int32_t xetraServiceAvailabilityBroadcastPacket::APPL_SEQ_TRADE_DATE_MAX = 99991231;
const int32_t xetraServiceAvailabilityBroadcastPacket::APPL_SEQ_TRADE_DATE_NO_VALUE = 0xFFFFFFFF;
const uint16_t xetraServiceAvailabilityBroadcastPacket::PARTITION_ID_MIN = 0;
const uint16_t xetraServiceAvailabilityBroadcastPacket::PARTITION_ID_MAX = 65534;
const uint16_t xetraServiceAvailabilityBroadcastPacket::PARTITION_ID_NO_VALUE = 0xFFFF;
const int8_t xetraServiceAvailabilityBroadcastPacket::MATCHING_ENGINE_STATUS_MIN = 0;
const int8_t xetraServiceAvailabilityBroadcastPacket::MATCHING_ENGINE_STATUS_MAX = 1;
const int8_t xetraServiceAvailabilityBroadcastPacket::MATCHING_ENGINE_STATUS_NO_VALUE = 0xFF;
const int8_t xetraServiceAvailabilityBroadcastPacket::TRADE_MANAGER_STATUS_MIN = 0;
const int8_t xetraServiceAvailabilityBroadcastPacket::TRADE_MANAGER_STATUS_MAX = 1;
const int8_t xetraServiceAvailabilityBroadcastPacket::TRADE_MANAGER_STATUS_NO_VALUE = 0xFF;
const int8_t xetraServiceAvailabilityBroadcastPacket::APPL_SEQ_STATUS_MIN = 0;
const int8_t xetraServiceAvailabilityBroadcastPacket::APPL_SEQ_STATUS_MAX = 1;
const int8_t xetraServiceAvailabilityBroadcastPacket::APPL_SEQ_STATUS_NO_VALUE = 0xFF;
const char xetraServiceAvailabilityBroadcastPacket::PAD7_NO_VALUE[7] = {0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00};
const size_t xetraServiceAvailabilityBroadcastPacket::PAD7_MAX_LENGTH = 7;


} // namespace neueda

#endif // XETRA_SERVICEAVAILABILITYBROADCAST_PACKET_H
