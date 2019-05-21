/*
 * Copyright 2014-2018 Neueda Ltd.
 * 
 * Generated 11/04/2019
 */
#ifndef XETRA_GATEWAYREQUEST_PACKET_H
#define XETRA_GATEWAYREQUEST_PACKET_H

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

class xetraGatewayRequestPacket
{
    public:
        // no value constants
        static const uint32_t PARTY_IDSESSION_ID_MIN;
        static const uint32_t PARTY_IDSESSION_ID_MAX;
        static const uint32_t PARTY_IDSESSION_ID_NO_VALUE;
        static const uint16_t PARTITION_ID_MIN;
        static const uint16_t PARTITION_ID_MAX;
        static const uint16_t PARTITION_ID_NO_VALUE;
        static const char DEFAULT_CSTM_APPL_VER_ID_NO_VALUE[30];
        static const size_t DEFAULT_CSTM_APPL_VER_ID_MAX_LENGTH;
        static const char PASSWORD_NO_VALUE[32];
        static const size_t PASSWORD_MAX_LENGTH;
        static const char PAD4_NO_VALUE[4];
        static const size_t PAD4_MAX_LENGTH;

        // fields (use with care)
        xetraMessageHeaderInCompPacket mMessageHeaderIn;
        xetraRequestHeaderCompPacket mRequestHeader;
        uint32_t mPartyIDSessionID;
        uint16_t mPartitionID;
        char mDefaultCstmApplVerID[30];
        char mPassword[32];
        char mPad4[4];

        // constructor
        xetraGatewayRequestPacket ()
        {
            mMessageHeaderIn.mTemplateID = 10020;
            mPartyIDSessionID = PARTY_IDSESSION_ID_NO_VALUE;
            mPartitionID = PARTITION_ID_NO_VALUE;
            memcpy(mDefaultCstmApplVerID, DEFAULT_CSTM_APPL_VER_ID_NO_VALUE, sizeof (mDefaultCstmApplVerID));
            memcpy(mPassword, PASSWORD_NO_VALUE, sizeof (mPassword));
            memcpy(mPad4, PAD4_NO_VALUE, sizeof (mPad4));
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

        string getDefaultCstmApplVerID () const
        {
            string result;
            for (size_t i = 0; mDefaultCstmApplVerID[i] && i < DEFAULT_CSTM_APPL_VER_ID_MAX_LENGTH; i++)
                result += (mDefaultCstmApplVerID[i]);
            return result;
        }

        bool setDefaultCstmApplVerID (const string& v)
        {
            memset (mDefaultCstmApplVerID, '\0', sizeof (mDefaultCstmApplVerID));
            size_t size = min ((size_t) v.size (), (size_t) DEFAULT_CSTM_APPL_VER_ID_MAX_LENGTH);
            strncpy (mDefaultCstmApplVerID, v.c_str (), size);
            return (v.size () <= DEFAULT_CSTM_APPL_VER_ID_MAX_LENGTH);
        }

        bool isDefaultCstmApplVerIDValid () const
        {
            return (memcmp (mDefaultCstmApplVerID, DEFAULT_CSTM_APPL_VER_ID_NO_VALUE, sizeof (mDefaultCstmApplVerID)) != 0);
        }

        void resetDefaultCstmApplVerID ()
        {
            memcpy (mDefaultCstmApplVerID, DEFAULT_CSTM_APPL_VER_ID_NO_VALUE, sizeof (mDefaultCstmApplVerID));
        }

        string getPassword () const
        {
            string result;
            for (size_t i = 0; mPassword[i] && i < PASSWORD_MAX_LENGTH; i++)
                result += (mPassword[i]);
            return result;
        }

        bool setPassword (const string& v)
        {
            memset (mPassword, '\0', sizeof (mPassword));
            size_t size = min ((size_t) v.size (), (size_t) PASSWORD_MAX_LENGTH);
            strncpy (mPassword, v.c_str (), size);
            return (v.size () <= PASSWORD_MAX_LENGTH);
        }

        bool isPasswordValid () const
        {
            return (memcmp (mPassword, PASSWORD_NO_VALUE, sizeof (mPassword)) != 0);
        }

        void resetPassword ()
        {
            memcpy (mPassword, PASSWORD_NO_VALUE, sizeof (mPassword));
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


        // render current raw size
        size_t getRawSize () const
        {
            size_t result = mMessageHeaderIn.getRawSize()
                + mRequestHeader.getRawSize()
                + sizeof (mPartyIDSessionID)
                + sizeof (mPartitionID)
                + sizeof (mDefaultCstmApplVerID)
                + sizeof (mPassword)
                + sizeof (mPad4);
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
            state = xetra::serialize (mPartyIDSessionID, buf, len, used);
            if (state != GW_CODEC_SUCCESS) return state;
            state = xetra::serialize (mPartitionID, buf, len, used);
            if (state != GW_CODEC_SUCCESS) return state;
            state = xetra::serialize (mDefaultCstmApplVerID, buf, len, used);
            if (state != GW_CODEC_SUCCESS) return state;
            state = xetra::serialize (mPassword, buf, len, used);
            if (state != GW_CODEC_SUCCESS) return state;
            state = xetra::serialize (mPad4, buf, len, used);
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
            state = xetra::deserialize (mPartyIDSessionID, buf, len, used);
            if (state != GW_CODEC_SUCCESS) return state;
            state = xetra::deserialize (mPartitionID, buf, len, used);
            if (state != GW_CODEC_SUCCESS) return state;
            state = xetra::deserialize (mDefaultCstmApplVerID, buf, len, used);
            if (state != GW_CODEC_SUCCESS) return state;
            state = xetra::deserialize (mPassword, buf, len, used);
            if (state != GW_CODEC_SUCCESS) return state;
            state = xetra::deserialize (mPad4, buf, len, used);
            if (state != GW_CODEC_SUCCESS) return state;
            mMessageHeaderIn.mBodyLen = getRawSize ();
            return GW_CODEC_SUCCESS;
        }

        // string conversion
        string toString () const
        {
            stringstream sss;
            sss << "GatewayRequest::"
                << "[MessageHeaderIn=" << mMessageHeaderIn.toString () << "],"
                << "[RequestHeader=" << mRequestHeader.toString () << "],"
                << "[PartyIDSessionID=" << getPartyIDSessionID () << "],"
                << "[PartitionID=" << getPartitionID () << "],"
                << "[DefaultCstmApplVerID=" << getDefaultCstmApplVerID () << "],"
                << "[Password=" << getPassword () << "],"
                << "[Pad4=" << getPad4 () << "]";
            return sss.str();
        }
};

const uint32_t xetraGatewayRequestPacket::PARTY_IDSESSION_ID_MIN = 0;
const uint32_t xetraGatewayRequestPacket::PARTY_IDSESSION_ID_MAX = 4294967294;
const uint32_t xetraGatewayRequestPacket::PARTY_IDSESSION_ID_NO_VALUE = 0xFFFFFFFF;
const uint16_t xetraGatewayRequestPacket::PARTITION_ID_MIN = 0;
const uint16_t xetraGatewayRequestPacket::PARTITION_ID_MAX = 65534;
const uint16_t xetraGatewayRequestPacket::PARTITION_ID_NO_VALUE = 0xFFFF;
const char xetraGatewayRequestPacket::DEFAULT_CSTM_APPL_VER_ID_NO_VALUE[30] = {0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00};
const size_t xetraGatewayRequestPacket::DEFAULT_CSTM_APPL_VER_ID_MAX_LENGTH = 30;
const char xetraGatewayRequestPacket::PASSWORD_NO_VALUE[32] = {0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00};
const size_t xetraGatewayRequestPacket::PASSWORD_MAX_LENGTH = 32;
const char xetraGatewayRequestPacket::PAD4_NO_VALUE[4] = {0x00, 0x00, 0x00, 0x00};
const size_t xetraGatewayRequestPacket::PAD4_MAX_LENGTH = 4;


} // namespace neueda

#endif // XETRA_GATEWAYREQUEST_PACKET_H
