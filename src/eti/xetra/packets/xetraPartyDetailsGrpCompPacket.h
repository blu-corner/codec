/*
 * Copyright 2014-2018 Neueda Ltd.
 * 
 * Generated 08/03/2020
 */
#ifndef XETRA_PARTYDETAILSGRPCOMP_PACKET_H
#define XETRA_PARTYDETAILSGRPCOMP_PACKET_H

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

class xetraPartyDetailsGrpCompPacket
{
    public:
        // no value constants
        static const uint32_t PARTY_DETAIL_IDEXECUTING_TRADER_MIN;
        static const uint32_t PARTY_DETAIL_IDEXECUTING_TRADER_MAX;
        static const uint32_t PARTY_DETAIL_IDEXECUTING_TRADER_NO_VALUE;
        static const char PARTY_DETAIL_EXECUTING_TRADER_NO_VALUE[6];
        static const size_t PARTY_DETAIL_EXECUTING_TRADER_MAX_LENGTH;
        static const int8_t PARTY_DETAIL_ROLE_QUALIFIER_MIN;
        static const int8_t PARTY_DETAIL_ROLE_QUALIFIER_MAX;
        static const int8_t PARTY_DETAIL_ROLE_QUALIFIER_NO_VALUE;
        static const int8_t PARTY_DETAIL_STATUS_MIN;
        static const int8_t PARTY_DETAIL_STATUS_MAX;
        static const int8_t PARTY_DETAIL_STATUS_NO_VALUE;
        static const char PARTY_DETAIL_DESK_ID_NO_VALUE[3];
        static const size_t PARTY_DETAIL_DESK_ID_MAX_LENGTH;
        static const char PAD1_NO_VALUE[1];
        static const size_t PAD1_MAX_LENGTH;

        // fields (use with care)
        uint32_t mPartyDetailIDExecutingTrader;
        char mPartyDetailExecutingTrader[6];
        int8_t mPartyDetailRoleQualifier;
        int8_t mPartyDetailStatus;
        char mPartyDetailDeskID[3];
        char mPad1[1];

        // constructor
        xetraPartyDetailsGrpCompPacket ()
        {
            mPartyDetailIDExecutingTrader = PARTY_DETAIL_IDEXECUTING_TRADER_NO_VALUE;
            memcpy(mPartyDetailExecutingTrader, PARTY_DETAIL_EXECUTING_TRADER_NO_VALUE, sizeof (mPartyDetailExecutingTrader));
            mPartyDetailRoleQualifier = PARTY_DETAIL_ROLE_QUALIFIER_NO_VALUE;
            mPartyDetailStatus = PARTY_DETAIL_STATUS_NO_VALUE;
            memcpy(mPartyDetailDeskID, PARTY_DETAIL_DESK_ID_NO_VALUE, sizeof (mPartyDetailDeskID));
            memcpy(mPad1, PAD1_NO_VALUE, sizeof (mPad1));
        }

        // getters & setters
        uint32_t getPartyDetailIDExecutingTrader () const
        {
            return mPartyDetailIDExecutingTrader;
        }

        bool setPartyDetailIDExecutingTrader (uint32_t v)
        {
            mPartyDetailIDExecutingTrader = v;
            return ((PARTY_DETAIL_IDEXECUTING_TRADER_MIN <= mPartyDetailIDExecutingTrader && mPartyDetailIDExecutingTrader <= PARTY_DETAIL_IDEXECUTING_TRADER_MAX) || mPartyDetailIDExecutingTrader == PARTY_DETAIL_IDEXECUTING_TRADER_NO_VALUE);
        }

        bool isPartyDetailIDExecutingTraderValid () const
        {
            return (mPartyDetailIDExecutingTrader != PARTY_DETAIL_IDEXECUTING_TRADER_NO_VALUE);
        }

        void resetPartyDetailIDExecutingTrader ()
        {
            mPartyDetailIDExecutingTrader = PARTY_DETAIL_IDEXECUTING_TRADER_NO_VALUE;
        }

        string getPartyDetailExecutingTrader () const
        {
            return string (mPartyDetailExecutingTrader, PARTY_DETAIL_EXECUTING_TRADER_MAX_LENGTH);
        }

        bool setPartyDetailExecutingTrader (const string& v)
        {
            memset (mPartyDetailExecutingTrader, '\0', sizeof (mPartyDetailExecutingTrader));
            size_t size = min ((size_t) v.size (), (size_t) PARTY_DETAIL_EXECUTING_TRADER_MAX_LENGTH);
            strncpy (mPartyDetailExecutingTrader, v.c_str (), size);
            return (v.size () <= PARTY_DETAIL_EXECUTING_TRADER_MAX_LENGTH);
        }

        bool isPartyDetailExecutingTraderValid () const
        {
            return (memcmp (mPartyDetailExecutingTrader, PARTY_DETAIL_EXECUTING_TRADER_NO_VALUE, sizeof (mPartyDetailExecutingTrader)) != 0);
        }

        void resetPartyDetailExecutingTrader ()
        {
            memcpy (mPartyDetailExecutingTrader, PARTY_DETAIL_EXECUTING_TRADER_NO_VALUE, sizeof (mPartyDetailExecutingTrader));
        }

        int8_t getPartyDetailRoleQualifier () const
        {
            return mPartyDetailRoleQualifier;
        }

        bool setPartyDetailRoleQualifier (int8_t v)
        {
            mPartyDetailRoleQualifier = v;
            return ((PARTY_DETAIL_ROLE_QUALIFIER_MIN <= mPartyDetailRoleQualifier && mPartyDetailRoleQualifier <= PARTY_DETAIL_ROLE_QUALIFIER_MAX) || mPartyDetailRoleQualifier == PARTY_DETAIL_ROLE_QUALIFIER_NO_VALUE);
        }

        bool isPartyDetailRoleQualifierValid () const
        {
            return (mPartyDetailRoleQualifier != PARTY_DETAIL_ROLE_QUALIFIER_NO_VALUE);
        }

        void resetPartyDetailRoleQualifier ()
        {
            mPartyDetailRoleQualifier = PARTY_DETAIL_ROLE_QUALIFIER_NO_VALUE;
        }

        int8_t getPartyDetailStatus () const
        {
            return mPartyDetailStatus;
        }

        bool setPartyDetailStatus (int8_t v)
        {
            mPartyDetailStatus = v;
            return ((PARTY_DETAIL_STATUS_MIN <= mPartyDetailStatus && mPartyDetailStatus <= PARTY_DETAIL_STATUS_MAX) || mPartyDetailStatus == PARTY_DETAIL_STATUS_NO_VALUE);
        }

        bool isPartyDetailStatusValid () const
        {
            return (mPartyDetailStatus != PARTY_DETAIL_STATUS_NO_VALUE);
        }

        void resetPartyDetailStatus ()
        {
            mPartyDetailStatus = PARTY_DETAIL_STATUS_NO_VALUE;
        }

        string getPartyDetailDeskID () const
        {
            return string (mPartyDetailDeskID, PARTY_DETAIL_DESK_ID_MAX_LENGTH);
        }

        bool setPartyDetailDeskID (const string& v)
        {
            memset (mPartyDetailDeskID, '\0', sizeof (mPartyDetailDeskID));
            size_t size = min ((size_t) v.size (), (size_t) PARTY_DETAIL_DESK_ID_MAX_LENGTH);
            strncpy (mPartyDetailDeskID, v.c_str (), size);
            return (v.size () <= PARTY_DETAIL_DESK_ID_MAX_LENGTH);
        }

        bool isPartyDetailDeskIDValid () const
        {
            return (memcmp (mPartyDetailDeskID, PARTY_DETAIL_DESK_ID_NO_VALUE, sizeof (mPartyDetailDeskID)) != 0);
        }

        void resetPartyDetailDeskID ()
        {
            memcpy (mPartyDetailDeskID, PARTY_DETAIL_DESK_ID_NO_VALUE, sizeof (mPartyDetailDeskID));
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
            size_t result = sizeof (mPartyDetailIDExecutingTrader)
                + sizeof (mPartyDetailExecutingTrader)
                + sizeof (mPartyDetailRoleQualifier)
                + sizeof (mPartyDetailStatus)
                + sizeof (mPartyDetailDeskID)
                + sizeof (mPad1);
            return result;
        }

        // serialization
        codecState serialize (void *buf, size_t len, size_t &used)
        {
            codecState state;
            state = eti::serialize (mPartyDetailIDExecutingTrader, buf, len, used);
            if (state != GW_CODEC_SUCCESS) return state;
            state = eti::serialize (mPartyDetailExecutingTrader, buf, len, used);
            if (state != GW_CODEC_SUCCESS) return state;
            state = eti::serialize (mPartyDetailRoleQualifier, buf, len, used);
            if (state != GW_CODEC_SUCCESS) return state;
            state = eti::serialize (mPartyDetailStatus, buf, len, used);
            if (state != GW_CODEC_SUCCESS) return state;
            state = eti::serialize (mPartyDetailDeskID, buf, len, used);
            if (state != GW_CODEC_SUCCESS) return state;
            state = eti::serialize (mPad1, buf, len, used);
            if (state != GW_CODEC_SUCCESS) return state;
            return GW_CODEC_SUCCESS;
        }

        // deserialization
        codecState deserialize (const void *buf, size_t len, size_t &used)
        {
            codecState state;
            state = eti::deserialize (mPartyDetailIDExecutingTrader, buf, len, used);
            if (state != GW_CODEC_SUCCESS) return state;
            state = eti::deserialize (mPartyDetailExecutingTrader, buf, len, used);
            if (state != GW_CODEC_SUCCESS) return state;
            state = eti::deserialize (mPartyDetailRoleQualifier, buf, len, used);
            if (state != GW_CODEC_SUCCESS) return state;
            state = eti::deserialize (mPartyDetailStatus, buf, len, used);
            if (state != GW_CODEC_SUCCESS) return state;
            state = eti::deserialize (mPartyDetailDeskID, buf, len, used);
            if (state != GW_CODEC_SUCCESS) return state;
            state = eti::deserialize (mPad1, buf, len, used);
            if (state != GW_CODEC_SUCCESS) return state;
            return GW_CODEC_SUCCESS;
        }

        // string conversion
        string toString () const
        {
            stringstream sss;
            sss << "PartyDetailsGrpComp::"
                << "[PartyDetailIDExecutingTrader=" << getPartyDetailIDExecutingTrader () << "],"
                << "[PartyDetailExecutingTrader=" << getPartyDetailExecutingTrader () << "],"
                << "[PartyDetailRoleQualifier=" << getPartyDetailRoleQualifier () << "],"
                << "[PartyDetailStatus=" << getPartyDetailStatus () << "],"
                << "[PartyDetailDeskID=" << getPartyDetailDeskID () << "],"
                << "[Pad1=" << getPad1 () << "]";
            return sss.str();
        }
};

const uint32_t xetraPartyDetailsGrpCompPacket::PARTY_DETAIL_IDEXECUTING_TRADER_MIN = 0;
const uint32_t xetraPartyDetailsGrpCompPacket::PARTY_DETAIL_IDEXECUTING_TRADER_MAX = 4294967294;
const uint32_t xetraPartyDetailsGrpCompPacket::PARTY_DETAIL_IDEXECUTING_TRADER_NO_VALUE = 0xFFFFFFFF;
const char xetraPartyDetailsGrpCompPacket::PARTY_DETAIL_EXECUTING_TRADER_NO_VALUE[6] = {0x00, 0x00, 0x00, 0x00, 0x00, 0x00};
const size_t xetraPartyDetailsGrpCompPacket::PARTY_DETAIL_EXECUTING_TRADER_MAX_LENGTH = 6;
const int8_t xetraPartyDetailsGrpCompPacket::PARTY_DETAIL_ROLE_QUALIFIER_MIN = 10;
const int8_t xetraPartyDetailsGrpCompPacket::PARTY_DETAIL_ROLE_QUALIFIER_MAX = 12;
const int8_t xetraPartyDetailsGrpCompPacket::PARTY_DETAIL_ROLE_QUALIFIER_NO_VALUE = 0xFF;
const int8_t xetraPartyDetailsGrpCompPacket::PARTY_DETAIL_STATUS_MIN = 0;
const int8_t xetraPartyDetailsGrpCompPacket::PARTY_DETAIL_STATUS_MAX = 1;
const int8_t xetraPartyDetailsGrpCompPacket::PARTY_DETAIL_STATUS_NO_VALUE = 0xFF;
const char xetraPartyDetailsGrpCompPacket::PARTY_DETAIL_DESK_ID_NO_VALUE[3] = {0x00, 0x00, 0x00};
const size_t xetraPartyDetailsGrpCompPacket::PARTY_DETAIL_DESK_ID_MAX_LENGTH = 3;
const char xetraPartyDetailsGrpCompPacket::PAD1_NO_VALUE[1] = {0x00};
const size_t xetraPartyDetailsGrpCompPacket::PAD1_MAX_LENGTH = 1;


} // namespace neueda

#endif // XETRA_PARTYDETAILSGRPCOMP_PACKET_H
