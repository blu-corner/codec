/*
 * Copyright 2014-2018 Neueda Ltd.
 * 
 * Generated 09/05/2019
 */
#ifndef XETRA_RETRANSMITMEMESSAGEREQUEST_PACKET_H
#define XETRA_RETRANSMITMEMESSAGEREQUEST_PACKET_H

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

class xetraRetransmitMEMessageRequestPacket
{
    public:
        // no value constants
        static const uint32_t SUBSCRIPTION_SCOPE_MIN;
        static const uint32_t SUBSCRIPTION_SCOPE_MAX;
        static const uint32_t SUBSCRIPTION_SCOPE_NO_VALUE;
        static const uint16_t PARTITION_ID_MIN;
        static const uint16_t PARTITION_ID_MAX;
        static const uint16_t PARTITION_ID_NO_VALUE;
        static const int8_t REF_APPL_ID_MIN;
        static const int8_t REF_APPL_ID_MAX;
        static const int8_t REF_APPL_ID_NO_VALUE;
        static const char APPL_BEG_MSG_ID_NO_VALUE[16];
        static const size_t APPL_BEG_MSG_ID_MAX_LENGTH;
        static const char APPL_END_MSG_ID_NO_VALUE[16];
        static const size_t APPL_END_MSG_ID_MAX_LENGTH;
        static const char PAD1_NO_VALUE[1];
        static const size_t PAD1_MAX_LENGTH;

        // fields (use with care)
        xetraMessageHeaderInCompPacket mMessageHeaderIn;
        xetraRequestHeaderCompPacket mRequestHeader;
        uint32_t mSubscriptionScope;
        uint16_t mPartitionID;
        int8_t mRefApplID;
        char mApplBegMsgID[16];
        char mApplEndMsgID[16];
        char mPad1[1];

        // constructor
        xetraRetransmitMEMessageRequestPacket ()
        {
            mMessageHeaderIn.mTemplateID = 10026;
            mSubscriptionScope = SUBSCRIPTION_SCOPE_NO_VALUE;
            mPartitionID = PARTITION_ID_NO_VALUE;
            mRefApplID = REF_APPL_ID_NO_VALUE;
            memcpy(mApplBegMsgID, APPL_BEG_MSG_ID_NO_VALUE, sizeof (mApplBegMsgID));
            memcpy(mApplEndMsgID, APPL_END_MSG_ID_NO_VALUE, sizeof (mApplEndMsgID));
            memcpy(mPad1, PAD1_NO_VALUE, sizeof (mPad1));
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

        uint32_t getSubscriptionScope () const
        {
            return mSubscriptionScope;
        }

        bool setSubscriptionScope (uint32_t v)
        {
            mSubscriptionScope = v;
            return ((SUBSCRIPTION_SCOPE_MIN <= mSubscriptionScope && mSubscriptionScope <= SUBSCRIPTION_SCOPE_MAX) || mSubscriptionScope == SUBSCRIPTION_SCOPE_NO_VALUE);
        }

        bool isSubscriptionScopeValid () const
        {
            return (mSubscriptionScope != SUBSCRIPTION_SCOPE_NO_VALUE);
        }

        void resetSubscriptionScope ()
        {
            mSubscriptionScope = SUBSCRIPTION_SCOPE_NO_VALUE;
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

        string getApplBegMsgID () const
        {
            return string (mApplBegMsgID, APPL_BEG_MSG_ID_MAX_LENGTH);
        }

        bool setApplBegMsgID (const string& v)
        {
            memset (mApplBegMsgID, '\0', sizeof (mApplBegMsgID));
            size_t size = min ((size_t) v.size (), (size_t) APPL_BEG_MSG_ID_MAX_LENGTH);
            strncpy (mApplBegMsgID, v.c_str (), size);
            return (v.size () <= APPL_BEG_MSG_ID_MAX_LENGTH);
        }

        bool isApplBegMsgIDValid () const
        {
            return (memcmp (mApplBegMsgID, APPL_BEG_MSG_ID_NO_VALUE, sizeof (mApplBegMsgID)) != 0);
        }

        void resetApplBegMsgID ()
        {
            memcpy (mApplBegMsgID, APPL_BEG_MSG_ID_NO_VALUE, sizeof (mApplBegMsgID));
        }

        string getApplEndMsgID () const
        {
            return string (mApplEndMsgID, APPL_END_MSG_ID_MAX_LENGTH);
        }

        bool setApplEndMsgID (const string& v)
        {
            memset (mApplEndMsgID, '\0', sizeof (mApplEndMsgID));
            size_t size = min ((size_t) v.size (), (size_t) APPL_END_MSG_ID_MAX_LENGTH);
            strncpy (mApplEndMsgID, v.c_str (), size);
            return (v.size () <= APPL_END_MSG_ID_MAX_LENGTH);
        }

        bool isApplEndMsgIDValid () const
        {
            return (memcmp (mApplEndMsgID, APPL_END_MSG_ID_NO_VALUE, sizeof (mApplEndMsgID)) != 0);
        }

        void resetApplEndMsgID ()
        {
            memcpy (mApplEndMsgID, APPL_END_MSG_ID_NO_VALUE, sizeof (mApplEndMsgID));
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


        // render current raw size
        size_t getRawSize () const
        {
            size_t result = mMessageHeaderIn.getRawSize()
                + mRequestHeader.getRawSize()
                + sizeof (mSubscriptionScope)
                + sizeof (mPartitionID)
                + sizeof (mRefApplID)
                + sizeof (mApplBegMsgID)
                + sizeof (mApplEndMsgID)
                + sizeof (mPad1);
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
            state = xetra::serialize (mSubscriptionScope, buf, len, used);
            if (state != GW_CODEC_SUCCESS) return state;
            state = xetra::serialize (mPartitionID, buf, len, used);
            if (state != GW_CODEC_SUCCESS) return state;
            state = xetra::serialize (mRefApplID, buf, len, used);
            if (state != GW_CODEC_SUCCESS) return state;
            state = xetra::serialize (mApplBegMsgID, buf, len, used);
            if (state != GW_CODEC_SUCCESS) return state;
            state = xetra::serialize (mApplEndMsgID, buf, len, used);
            if (state != GW_CODEC_SUCCESS) return state;
            state = xetra::serialize (mPad1, buf, len, used);
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
            state = xetra::deserialize (mSubscriptionScope, buf, len, used);
            if (state != GW_CODEC_SUCCESS) return state;
            state = xetra::deserialize (mPartitionID, buf, len, used);
            if (state != GW_CODEC_SUCCESS) return state;
            state = xetra::deserialize (mRefApplID, buf, len, used);
            if (state != GW_CODEC_SUCCESS) return state;
            state = xetra::deserialize (mApplBegMsgID, buf, len, used);
            if (state != GW_CODEC_SUCCESS) return state;
            state = xetra::deserialize (mApplEndMsgID, buf, len, used);
            if (state != GW_CODEC_SUCCESS) return state;
            state = xetra::deserialize (mPad1, buf, len, used);
            if (state != GW_CODEC_SUCCESS) return state;
            mMessageHeaderIn.mBodyLen = getRawSize ();
            return GW_CODEC_SUCCESS;
        }

        // string conversion
        string toString () const
        {
            stringstream sss;
            sss << "RetransmitMEMessageRequest::"
                << "[MessageHeaderIn=" << mMessageHeaderIn.toString () << "],"
                << "[RequestHeader=" << mRequestHeader.toString () << "],"
                << "[SubscriptionScope=" << getSubscriptionScope () << "],"
                << "[PartitionID=" << getPartitionID () << "],"
                << "[RefApplID=" << getRefApplID () << "],"
                << "[ApplBegMsgID=" << getApplBegMsgID () << "],"
                << "[ApplEndMsgID=" << getApplEndMsgID () << "],"
                << "[Pad1=" << getPad1 () << "]";
            return sss.str();
        }
};

const uint32_t xetraRetransmitMEMessageRequestPacket::SUBSCRIPTION_SCOPE_MIN = 0;
const uint32_t xetraRetransmitMEMessageRequestPacket::SUBSCRIPTION_SCOPE_MAX = 4294967294;
const uint32_t xetraRetransmitMEMessageRequestPacket::SUBSCRIPTION_SCOPE_NO_VALUE = 0xFFFFFFFF;
const uint16_t xetraRetransmitMEMessageRequestPacket::PARTITION_ID_MIN = 0;
const uint16_t xetraRetransmitMEMessageRequestPacket::PARTITION_ID_MAX = 65534;
const uint16_t xetraRetransmitMEMessageRequestPacket::PARTITION_ID_NO_VALUE = 0xFFFF;
const int8_t xetraRetransmitMEMessageRequestPacket::REF_APPL_ID_MIN = 0;
const int8_t xetraRetransmitMEMessageRequestPacket::REF_APPL_ID_MAX = 10;
const int8_t xetraRetransmitMEMessageRequestPacket::REF_APPL_ID_NO_VALUE = 0xFF;
const char xetraRetransmitMEMessageRequestPacket::APPL_BEG_MSG_ID_NO_VALUE[16] = {0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00};
const size_t xetraRetransmitMEMessageRequestPacket::APPL_BEG_MSG_ID_MAX_LENGTH = 16;
const char xetraRetransmitMEMessageRequestPacket::APPL_END_MSG_ID_NO_VALUE[16] = {0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00};
const size_t xetraRetransmitMEMessageRequestPacket::APPL_END_MSG_ID_MAX_LENGTH = 16;
const char xetraRetransmitMEMessageRequestPacket::PAD1_NO_VALUE[1] = {0x00};
const size_t xetraRetransmitMEMessageRequestPacket::PAD1_MAX_LENGTH = 1;


} // namespace neueda

#endif // XETRA_RETRANSMITMEMESSAGEREQUEST_PACKET_H
