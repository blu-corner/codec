/*
 * Copyright 2014-2018 Neueda Ltd.
 * 
 * Generated 09/05/2019
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
        static const int32_t T7ENTRY_SERVICE_TRADE_DATE_MIN;
        static const int32_t T7ENTRY_SERVICE_TRADE_DATE_MAX;
        static const int32_t T7ENTRY_SERVICE_TRADE_DATE_NO_VALUE;
        static const int32_t T7ENTRY_SERVICE_RTM_TRADE_DATE_MIN;
        static const int32_t T7ENTRY_SERVICE_RTM_TRADE_DATE_MAX;
        static const int32_t T7ENTRY_SERVICE_RTM_TRADE_DATE_NO_VALUE;
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
        static const int8_t T7ENTRY_SERVICE_STATUS_MIN;
        static const int8_t T7ENTRY_SERVICE_STATUS_MAX;
        static const int8_t T7ENTRY_SERVICE_STATUS_NO_VALUE;
        static const int8_t T7ENTRY_SERVICE_RTM_STATUS_MIN;
        static const int8_t T7ENTRY_SERVICE_RTM_STATUS_MAX;
        static const int8_t T7ENTRY_SERVICE_RTM_STATUS_NO_VALUE;
        static const char PAD5_NO_VALUE[5];
        static const size_t PAD5_MAX_LENGTH;

        // fields (use with care)
        xetraMessageHeaderOutCompPacket mMessageHeaderOut;
        xetraNRBCHeaderCompPacket mNRBCHeader;
        int32_t mMatchingEngineTradeDate;
        int32_t mTradeManagerTradeDate;
        int32_t mApplSeqTradeDate;
        int32_t mT7EntryServiceTradeDate;
        int32_t mT7EntryServiceRtmTradeDate;
        uint16_t mPartitionID;
        int8_t mMatchingEngineStatus;
        int8_t mTradeManagerStatus;
        int8_t mApplSeqStatus;
        int8_t mT7EntryServiceStatus;
        int8_t mT7EntryServiceRtmStatus;
        char mPad5[5];

        // constructor
        xetraServiceAvailabilityBroadcastPacket ()
        {
            mMessageHeaderOut.mTemplateID = 10030;
            mMatchingEngineTradeDate = MATCHING_ENGINE_TRADE_DATE_NO_VALUE;
            mTradeManagerTradeDate = TRADE_MANAGER_TRADE_DATE_NO_VALUE;
            mApplSeqTradeDate = APPL_SEQ_TRADE_DATE_NO_VALUE;
            mT7EntryServiceTradeDate = T7ENTRY_SERVICE_TRADE_DATE_NO_VALUE;
            mT7EntryServiceRtmTradeDate = T7ENTRY_SERVICE_RTM_TRADE_DATE_NO_VALUE;
            mPartitionID = PARTITION_ID_NO_VALUE;
            mMatchingEngineStatus = MATCHING_ENGINE_STATUS_NO_VALUE;
            mTradeManagerStatus = TRADE_MANAGER_STATUS_NO_VALUE;
            mApplSeqStatus = APPL_SEQ_STATUS_NO_VALUE;
            mT7EntryServiceStatus = T7ENTRY_SERVICE_STATUS_NO_VALUE;
            mT7EntryServiceRtmStatus = T7ENTRY_SERVICE_RTM_STATUS_NO_VALUE;
            memcpy(mPad5, PAD5_NO_VALUE, sizeof (mPad5));
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

        int32_t getT7EntryServiceTradeDate () const
        {
            return mT7EntryServiceTradeDate;
        }

        bool setT7EntryServiceTradeDate (int32_t v)
        {
            mT7EntryServiceTradeDate = v;
            return ((T7ENTRY_SERVICE_TRADE_DATE_MIN <= mT7EntryServiceTradeDate && mT7EntryServiceTradeDate <= T7ENTRY_SERVICE_TRADE_DATE_MAX) || mT7EntryServiceTradeDate == T7ENTRY_SERVICE_TRADE_DATE_NO_VALUE);
        }

        bool isT7EntryServiceTradeDateValid () const
        {
            return (mT7EntryServiceTradeDate != T7ENTRY_SERVICE_TRADE_DATE_NO_VALUE);
        }

        void resetT7EntryServiceTradeDate ()
        {
            mT7EntryServiceTradeDate = T7ENTRY_SERVICE_TRADE_DATE_NO_VALUE;
        }

        int32_t getT7EntryServiceRtmTradeDate () const
        {
            return mT7EntryServiceRtmTradeDate;
        }

        bool setT7EntryServiceRtmTradeDate (int32_t v)
        {
            mT7EntryServiceRtmTradeDate = v;
            return ((T7ENTRY_SERVICE_RTM_TRADE_DATE_MIN <= mT7EntryServiceRtmTradeDate && mT7EntryServiceRtmTradeDate <= T7ENTRY_SERVICE_RTM_TRADE_DATE_MAX) || mT7EntryServiceRtmTradeDate == T7ENTRY_SERVICE_RTM_TRADE_DATE_NO_VALUE);
        }

        bool isT7EntryServiceRtmTradeDateValid () const
        {
            return (mT7EntryServiceRtmTradeDate != T7ENTRY_SERVICE_RTM_TRADE_DATE_NO_VALUE);
        }

        void resetT7EntryServiceRtmTradeDate ()
        {
            mT7EntryServiceRtmTradeDate = T7ENTRY_SERVICE_RTM_TRADE_DATE_NO_VALUE;
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

        int8_t getT7EntryServiceStatus () const
        {
            return mT7EntryServiceStatus;
        }

        bool setT7EntryServiceStatus (int8_t v)
        {
            mT7EntryServiceStatus = v;
            return ((T7ENTRY_SERVICE_STATUS_MIN <= mT7EntryServiceStatus && mT7EntryServiceStatus <= T7ENTRY_SERVICE_STATUS_MAX) || mT7EntryServiceStatus == T7ENTRY_SERVICE_STATUS_NO_VALUE);
        }

        bool isT7EntryServiceStatusValid () const
        {
            return (mT7EntryServiceStatus != T7ENTRY_SERVICE_STATUS_NO_VALUE);
        }

        void resetT7EntryServiceStatus ()
        {
            mT7EntryServiceStatus = T7ENTRY_SERVICE_STATUS_NO_VALUE;
        }

        int8_t getT7EntryServiceRtmStatus () const
        {
            return mT7EntryServiceRtmStatus;
        }

        bool setT7EntryServiceRtmStatus (int8_t v)
        {
            mT7EntryServiceRtmStatus = v;
            return ((T7ENTRY_SERVICE_RTM_STATUS_MIN <= mT7EntryServiceRtmStatus && mT7EntryServiceRtmStatus <= T7ENTRY_SERVICE_RTM_STATUS_MAX) || mT7EntryServiceRtmStatus == T7ENTRY_SERVICE_RTM_STATUS_NO_VALUE);
        }

        bool isT7EntryServiceRtmStatusValid () const
        {
            return (mT7EntryServiceRtmStatus != T7ENTRY_SERVICE_RTM_STATUS_NO_VALUE);
        }

        void resetT7EntryServiceRtmStatus ()
        {
            mT7EntryServiceRtmStatus = T7ENTRY_SERVICE_RTM_STATUS_NO_VALUE;
        }

        string getPad5 () const
        {
            return string (mPad5, PAD5_MAX_LENGTH);
        }

        bool setPad5 (const string& v)
        {
            memset (mPad5, '\0', sizeof (mPad5));
            size_t size = min ((size_t) v.size (), (size_t) PAD5_MAX_LENGTH);
            strncpy (mPad5, v.c_str (), size);
            return (v.size () <= PAD5_MAX_LENGTH);
        }

        bool isPad5Valid () const
        {
            return (memcmp (mPad5, PAD5_NO_VALUE, sizeof (mPad5)) != 0);
        }

        void resetPad5 ()
        {
            memcpy (mPad5, PAD5_NO_VALUE, sizeof (mPad5));
        }


        // render current raw size
        size_t getRawSize () const
        {
            size_t result = mMessageHeaderOut.getRawSize()
                + mNRBCHeader.getRawSize()
                + sizeof (mMatchingEngineTradeDate)
                + sizeof (mTradeManagerTradeDate)
                + sizeof (mApplSeqTradeDate)
                + sizeof (mT7EntryServiceTradeDate)
                + sizeof (mT7EntryServiceRtmTradeDate)
                + sizeof (mPartitionID)
                + sizeof (mMatchingEngineStatus)
                + sizeof (mTradeManagerStatus)
                + sizeof (mApplSeqStatus)
                + sizeof (mT7EntryServiceStatus)
                + sizeof (mT7EntryServiceRtmStatus)
                + sizeof (mPad5);
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
            state = xetra::serialize (mT7EntryServiceTradeDate, buf, len, used);
            if (state != GW_CODEC_SUCCESS) return state;
            state = xetra::serialize (mT7EntryServiceRtmTradeDate, buf, len, used);
            if (state != GW_CODEC_SUCCESS) return state;
            state = xetra::serialize (mPartitionID, buf, len, used);
            if (state != GW_CODEC_SUCCESS) return state;
            state = xetra::serialize (mMatchingEngineStatus, buf, len, used);
            if (state != GW_CODEC_SUCCESS) return state;
            state = xetra::serialize (mTradeManagerStatus, buf, len, used);
            if (state != GW_CODEC_SUCCESS) return state;
            state = xetra::serialize (mApplSeqStatus, buf, len, used);
            if (state != GW_CODEC_SUCCESS) return state;
            state = xetra::serialize (mT7EntryServiceStatus, buf, len, used);
            if (state != GW_CODEC_SUCCESS) return state;
            state = xetra::serialize (mT7EntryServiceRtmStatus, buf, len, used);
            if (state != GW_CODEC_SUCCESS) return state;
            state = xetra::serialize (mPad5, buf, len, used);
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
            state = xetra::deserialize (mT7EntryServiceTradeDate, buf, len, used);
            if (state != GW_CODEC_SUCCESS) return state;
            state = xetra::deserialize (mT7EntryServiceRtmTradeDate, buf, len, used);
            if (state != GW_CODEC_SUCCESS) return state;
            state = xetra::deserialize (mPartitionID, buf, len, used);
            if (state != GW_CODEC_SUCCESS) return state;
            state = xetra::deserialize (mMatchingEngineStatus, buf, len, used);
            if (state != GW_CODEC_SUCCESS) return state;
            state = xetra::deserialize (mTradeManagerStatus, buf, len, used);
            if (state != GW_CODEC_SUCCESS) return state;
            state = xetra::deserialize (mApplSeqStatus, buf, len, used);
            if (state != GW_CODEC_SUCCESS) return state;
            state = xetra::deserialize (mT7EntryServiceStatus, buf, len, used);
            if (state != GW_CODEC_SUCCESS) return state;
            state = xetra::deserialize (mT7EntryServiceRtmStatus, buf, len, used);
            if (state != GW_CODEC_SUCCESS) return state;
            state = xetra::deserialize (mPad5, buf, len, used);
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
                << "[T7EntryServiceTradeDate=" << getT7EntryServiceTradeDate () << "],"
                << "[T7EntryServiceRtmTradeDate=" << getT7EntryServiceRtmTradeDate () << "],"
                << "[PartitionID=" << getPartitionID () << "],"
                << "[MatchingEngineStatus=" << getMatchingEngineStatus () << "],"
                << "[TradeManagerStatus=" << getTradeManagerStatus () << "],"
                << "[ApplSeqStatus=" << getApplSeqStatus () << "],"
                << "[T7EntryServiceStatus=" << getT7EntryServiceStatus () << "],"
                << "[T7EntryServiceRtmStatus=" << getT7EntryServiceRtmStatus () << "],"
                << "[Pad5=" << getPad5 () << "]";
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
const int32_t xetraServiceAvailabilityBroadcastPacket::T7ENTRY_SERVICE_TRADE_DATE_MIN = 0;
const int32_t xetraServiceAvailabilityBroadcastPacket::T7ENTRY_SERVICE_TRADE_DATE_MAX = 99991231;
const int32_t xetraServiceAvailabilityBroadcastPacket::T7ENTRY_SERVICE_TRADE_DATE_NO_VALUE = 0xFFFFFFFF;
const int32_t xetraServiceAvailabilityBroadcastPacket::T7ENTRY_SERVICE_RTM_TRADE_DATE_MIN = 0;
const int32_t xetraServiceAvailabilityBroadcastPacket::T7ENTRY_SERVICE_RTM_TRADE_DATE_MAX = 99991231;
const int32_t xetraServiceAvailabilityBroadcastPacket::T7ENTRY_SERVICE_RTM_TRADE_DATE_NO_VALUE = 0xFFFFFFFF;
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
const int8_t xetraServiceAvailabilityBroadcastPacket::T7ENTRY_SERVICE_STATUS_MIN = 0;
const int8_t xetraServiceAvailabilityBroadcastPacket::T7ENTRY_SERVICE_STATUS_MAX = 1;
const int8_t xetraServiceAvailabilityBroadcastPacket::T7ENTRY_SERVICE_STATUS_NO_VALUE = 0xFF;
const int8_t xetraServiceAvailabilityBroadcastPacket::T7ENTRY_SERVICE_RTM_STATUS_MIN = 0;
const int8_t xetraServiceAvailabilityBroadcastPacket::T7ENTRY_SERVICE_RTM_STATUS_MAX = 1;
const int8_t xetraServiceAvailabilityBroadcastPacket::T7ENTRY_SERVICE_RTM_STATUS_NO_VALUE = 0xFF;
const char xetraServiceAvailabilityBroadcastPacket::PAD5_NO_VALUE[5] = {0x00, 0x00, 0x00, 0x00, 0x00};
const size_t xetraServiceAvailabilityBroadcastPacket::PAD5_MAX_LENGTH = 5;


} // namespace neueda

#endif // XETRA_SERVICEAVAILABILITYBROADCAST_PACKET_H
