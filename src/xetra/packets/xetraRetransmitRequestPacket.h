/*
 * Copyright 2014-2018 Neueda Ltd.
 * 
 * Generated 09/05/2019
 */
#ifndef XETRA_RETRANSMITREQUEST_PACKET_H
#define XETRA_RETRANSMITREQUEST_PACKET_H

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

class xetraRetransmitRequestPacket
{
    public:
        // no value constants
        static const uint64_t APPL_BEG_SEQ_NUM_MIN;
        static const uint64_t APPL_BEG_SEQ_NUM_MAX;
        static const uint64_t APPL_BEG_SEQ_NUM_NO_VALUE;
        static const uint64_t APPL_END_SEQ_NUM_MIN;
        static const uint64_t APPL_END_SEQ_NUM_MAX;
        static const uint64_t APPL_END_SEQ_NUM_NO_VALUE;
        static const uint16_t PARTITION_ID_MIN;
        static const uint16_t PARTITION_ID_MAX;
        static const uint16_t PARTITION_ID_NO_VALUE;
        static const int8_t REF_APPL_ID_MIN;
        static const int8_t REF_APPL_ID_MAX;
        static const int8_t REF_APPL_ID_NO_VALUE;
        static const char PAD5_NO_VALUE[5];
        static const size_t PAD5_MAX_LENGTH;

        // fields (use with care)
        xetraMessageHeaderInCompPacket mMessageHeaderIn;
        xetraRequestHeaderCompPacket mRequestHeader;
        uint64_t mApplBegSeqNum;
        uint64_t mApplEndSeqNum;
        uint16_t mPartitionID;
        int8_t mRefApplID;
        char mPad5[5];

        // constructor
        xetraRetransmitRequestPacket ()
        {
            mMessageHeaderIn.mTemplateID = 10008;
            mApplBegSeqNum = APPL_BEG_SEQ_NUM_NO_VALUE;
            mApplEndSeqNum = APPL_END_SEQ_NUM_NO_VALUE;
            mPartitionID = PARTITION_ID_NO_VALUE;
            mRefApplID = REF_APPL_ID_NO_VALUE;
            memcpy(mPad5, PAD5_NO_VALUE, sizeof (mPad5));
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

        uint64_t getApplBegSeqNum () const
        {
            return mApplBegSeqNum;
        }

        bool setApplBegSeqNum (uint64_t v)
        {
            mApplBegSeqNum = v;
            return ((APPL_BEG_SEQ_NUM_MIN <= mApplBegSeqNum && mApplBegSeqNum <= APPL_BEG_SEQ_NUM_MAX) || mApplBegSeqNum == APPL_BEG_SEQ_NUM_NO_VALUE);
        }

        bool isApplBegSeqNumValid () const
        {
            return (mApplBegSeqNum != APPL_BEG_SEQ_NUM_NO_VALUE);
        }

        void resetApplBegSeqNum ()
        {
            mApplBegSeqNum = APPL_BEG_SEQ_NUM_NO_VALUE;
        }

        uint64_t getApplEndSeqNum () const
        {
            return mApplEndSeqNum;
        }

        bool setApplEndSeqNum (uint64_t v)
        {
            mApplEndSeqNum = v;
            return ((APPL_END_SEQ_NUM_MIN <= mApplEndSeqNum && mApplEndSeqNum <= APPL_END_SEQ_NUM_MAX) || mApplEndSeqNum == APPL_END_SEQ_NUM_NO_VALUE);
        }

        bool isApplEndSeqNumValid () const
        {
            return (mApplEndSeqNum != APPL_END_SEQ_NUM_NO_VALUE);
        }

        void resetApplEndSeqNum ()
        {
            mApplEndSeqNum = APPL_END_SEQ_NUM_NO_VALUE;
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

        int8_t getRefApplID () const
        {
            return mRefApplID;
        }

        bool setRefApplID (int8_t v)
        {
            mRefApplID = v;
            return ((REF_APPL_ID_MIN <= mRefApplID && mRefApplID <= REF_APPL_ID_MAX) || mRefApplID == REF_APPL_ID_NO_VALUE);
        }

        bool isRefApplIDValid () const
        {
            return (mRefApplID != REF_APPL_ID_NO_VALUE);
        }

        void resetRefApplID ()
        {
            mRefApplID = REF_APPL_ID_NO_VALUE;
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
            size_t result = mMessageHeaderIn.getRawSize()
                + mRequestHeader.getRawSize()
                + sizeof (mApplBegSeqNum)
                + sizeof (mApplEndSeqNum)
                + sizeof (mPartitionID)
                + sizeof (mRefApplID)
                + sizeof (mPad5);
            return result;
        }

        // serialization
        codecState serialize (void *buf, size_t len, size_t &used)
        {
            mMessageHeaderIn.mBodyLen = getRawSize ();
            codecState state;
            state = mMessageHeaderIn.serialize (buf, len, used);
            if (state != GW_CODEC_SUCCESS) return state;
            state = mRequestHeader.serialize (buf, len, used);
            if (state != GW_CODEC_SUCCESS) return state;
            state = xetra::serialize (mApplBegSeqNum, buf, len, used);
            if (state != GW_CODEC_SUCCESS) return state;
            state = xetra::serialize (mApplEndSeqNum, buf, len, used);
            if (state != GW_CODEC_SUCCESS) return state;
            state = xetra::serialize (mPartitionID, buf, len, used);
            if (state != GW_CODEC_SUCCESS) return state;
            state = xetra::serialize (mRefApplID, buf, len, used);
            if (state != GW_CODEC_SUCCESS) return state;
            state = xetra::serialize (mPad5, buf, len, used);
            if (state != GW_CODEC_SUCCESS) return state;
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
            state = xetra::deserialize (mApplBegSeqNum, buf, len, used);
            if (state != GW_CODEC_SUCCESS) return state;
            state = xetra::deserialize (mApplEndSeqNum, buf, len, used);
            if (state != GW_CODEC_SUCCESS) return state;
            state = xetra::deserialize (mPartitionID, buf, len, used);
            if (state != GW_CODEC_SUCCESS) return state;
            state = xetra::deserialize (mRefApplID, buf, len, used);
            if (state != GW_CODEC_SUCCESS) return state;
            state = xetra::deserialize (mPad5, buf, len, used);
            if (state != GW_CODEC_SUCCESS) return state;
            mMessageHeaderIn.mBodyLen = getRawSize ();
            return GW_CODEC_SUCCESS;
        }

        // string conversion
        string toString () const
        {
            stringstream sss;
            sss << "RetransmitRequest::"
                << "[MessageHeaderIn=" << mMessageHeaderIn.toString () << "],"
                << "[RequestHeader=" << mRequestHeader.toString () << "],"
                << "[ApplBegSeqNum=" << getApplBegSeqNum () << "],"
                << "[ApplEndSeqNum=" << getApplEndSeqNum () << "],"
                << "[PartitionID=" << getPartitionID () << "],"
                << "[RefApplID=" << getRefApplID () << "],"
                << "[Pad5=" << getPad5 () << "]";
            return sss.str();
        }
};

const uint64_t xetraRetransmitRequestPacket::APPL_BEG_SEQ_NUM_MIN = 0UL;
const uint64_t xetraRetransmitRequestPacket::APPL_BEG_SEQ_NUM_MAX = 18446744073709551614UL;
const uint64_t xetraRetransmitRequestPacket::APPL_BEG_SEQ_NUM_NO_VALUE = 0xFFFFFFFFFFFFFFFF;
const uint64_t xetraRetransmitRequestPacket::APPL_END_SEQ_NUM_MIN = 0UL;
const uint64_t xetraRetransmitRequestPacket::APPL_END_SEQ_NUM_MAX = 18446744073709551614UL;
const uint64_t xetraRetransmitRequestPacket::APPL_END_SEQ_NUM_NO_VALUE = 0xFFFFFFFFFFFFFFFF;
const uint16_t xetraRetransmitRequestPacket::PARTITION_ID_MIN = 0;
const uint16_t xetraRetransmitRequestPacket::PARTITION_ID_MAX = 65534;
const uint16_t xetraRetransmitRequestPacket::PARTITION_ID_NO_VALUE = 0xFFFF;
const int8_t xetraRetransmitRequestPacket::REF_APPL_ID_MIN = 0;
const int8_t xetraRetransmitRequestPacket::REF_APPL_ID_MAX = 10;
const int8_t xetraRetransmitRequestPacket::REF_APPL_ID_NO_VALUE = 0xFF;
const char xetraRetransmitRequestPacket::PAD5_NO_VALUE[5] = {0x00, 0x00, 0x00, 0x00, 0x00};
const size_t xetraRetransmitRequestPacket::PAD5_MAX_LENGTH = 5;


} // namespace neueda

#endif // XETRA_RETRANSMITREQUEST_PACKET_H
