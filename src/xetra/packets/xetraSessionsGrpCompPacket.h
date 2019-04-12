/*
 * Copyright 2014-2018 Neueda Ltd.
 * 
 * Generated 11/04/2019
 */
#ifndef XETRA_SESSIONSGRPCOMP_PACKET_H
#define XETRA_SESSIONSGRPCOMP_PACKET_H

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

class xetraSessionsGrpCompPacket
{
    public:
        // no value constants
        static const uint32_t PARTY_IDSESSION_ID_MIN;
        static const uint32_t PARTY_IDSESSION_ID_MAX;
        static const uint32_t PARTY_IDSESSION_ID_NO_VALUE;
        static const int8_t SESSION_MODE_MIN;
        static const int8_t SESSION_MODE_MAX;
        static const int8_t SESSION_MODE_NO_VALUE;
        static const int8_t SESSION_SUB_MODE_MIN;
        static const int8_t SESSION_SUB_MODE_MAX;
        static const int8_t SESSION_SUB_MODE_NO_VALUE;
        static const char PAD2_NO_VALUE[2];
        static const size_t PAD2_MAX_LENGTH;

        // fields (use with care)
        uint32_t mPartyIDSessionID;
        int8_t mSessionMode;
        int8_t mSessionSubMode;
        char mPad2[2];

        // constructor
        xetraSessionsGrpCompPacket ()
        {
            mPartyIDSessionID = PARTY_IDSESSION_ID_NO_VALUE;
            mSessionMode = SESSION_MODE_NO_VALUE;
            mSessionSubMode = SESSION_SUB_MODE_NO_VALUE;
            memcpy(mPad2, PAD2_NO_VALUE, sizeof (mPad2));
        }

        // getters & setters
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

        int8_t getSessionMode () const
        {
            return mSessionMode;
        }

        bool setSessionMode (int8_t v)
        {
            mSessionMode = v;
            return ((SESSION_MODE_MIN <= mSessionMode && mSessionMode <= SESSION_MODE_MAX) || mSessionMode == SESSION_MODE_NO_VALUE);
        }

        bool isSessionModeValid () const
        {
            return (mSessionMode != SESSION_MODE_NO_VALUE);
        }

        void resetSessionMode ()
        {
            mSessionMode = SESSION_MODE_NO_VALUE;
        }

        int8_t getSessionSubMode () const
        {
            return mSessionSubMode;
        }

        bool setSessionSubMode (int8_t v)
        {
            mSessionSubMode = v;
            return ((SESSION_SUB_MODE_MIN <= mSessionSubMode && mSessionSubMode <= SESSION_SUB_MODE_MAX) || mSessionSubMode == SESSION_SUB_MODE_NO_VALUE);
        }

        bool isSessionSubModeValid () const
        {
            return (mSessionSubMode != SESSION_SUB_MODE_NO_VALUE);
        }

        void resetSessionSubMode ()
        {
            mSessionSubMode = SESSION_SUB_MODE_NO_VALUE;
        }

        string getPad2 () const
        {
            return string (mPad2, PAD2_MAX_LENGTH);
        }

        bool setPad2 (const string& v)
        {
            memset (mPad2, '\0', sizeof (mPad2));
            size_t size = min ((size_t) v.size (), (size_t) PAD2_MAX_LENGTH);
            strncpy (mPad2, v.c_str (), size);
            return (v.size () <= PAD2_MAX_LENGTH);
        }

        bool isPad2Valid () const
        {
            return (memcmp (mPad2, PAD2_NO_VALUE, sizeof (mPad2)) != 0);
        }

        void resetPad2 ()
        {
            memcpy (mPad2, PAD2_NO_VALUE, sizeof (mPad2));
        }


        // render current raw size
        size_t getRawSize () const
        {
            size_t result = sizeof (mPartyIDSessionID)
                + sizeof (mSessionMode)
                + sizeof (mSessionSubMode)
                + sizeof (mPad2);
            return result;
        }

        // serialization
        codecState serialize (void *buf, size_t len, size_t &used)
        {
            codecState state;
            state = xetra::serialize (mPartyIDSessionID, buf, len, used);
            if (state != GW_CODEC_SUCCESS) return state;
            state = xetra::serialize (mSessionMode, buf, len, used);
            if (state != GW_CODEC_SUCCESS) return state;
            state = xetra::serialize (mSessionSubMode, buf, len, used);
            if (state != GW_CODEC_SUCCESS) return state;
            state = xetra::serialize (mPad2, buf, len, used);
            if (state != GW_CODEC_SUCCESS) return state;
            return GW_CODEC_SUCCESS;
        }

        // deserialization
        codecState deserialize (const void *buf, size_t len, size_t &used)
        {
            codecState state;
            state = xetra::deserialize (mPartyIDSessionID, buf, len, used);
            if (state != GW_CODEC_SUCCESS) return state;
            state = xetra::deserialize (mSessionMode, buf, len, used);
            if (state != GW_CODEC_SUCCESS) return state;
            state = xetra::deserialize (mSessionSubMode, buf, len, used);
            if (state != GW_CODEC_SUCCESS) return state;
            state = xetra::deserialize (mPad2, buf, len, used);
            if (state != GW_CODEC_SUCCESS) return state;
            return GW_CODEC_SUCCESS;
        }

        // string conversion
        string toString () const
        {
            stringstream sss;
            sss << "SessionsGrpComp::"
                << "[PartyIDSessionID=" << getPartyIDSessionID () << "],"
                << "[SessionMode=" << getSessionMode () << "],"
                << "[SessionSubMode=" << getSessionSubMode () << "],"
                << "[Pad2=" << getPad2 () << "]";
            return sss.str();
        }
};

const uint32_t xetraSessionsGrpCompPacket::PARTY_IDSESSION_ID_MIN = 0;
const uint32_t xetraSessionsGrpCompPacket::PARTY_IDSESSION_ID_MAX = 4294967294;
const uint32_t xetraSessionsGrpCompPacket::PARTY_IDSESSION_ID_NO_VALUE = 0xFFFFFFFF;
const int8_t xetraSessionsGrpCompPacket::SESSION_MODE_MIN = 1;
const int8_t xetraSessionsGrpCompPacket::SESSION_MODE_MAX = 3;
const int8_t xetraSessionsGrpCompPacket::SESSION_MODE_NO_VALUE = 0xFF;
const int8_t xetraSessionsGrpCompPacket::SESSION_SUB_MODE_MIN = 0;
const int8_t xetraSessionsGrpCompPacket::SESSION_SUB_MODE_MAX = 2;
const int8_t xetraSessionsGrpCompPacket::SESSION_SUB_MODE_NO_VALUE = 0xFF;
const char xetraSessionsGrpCompPacket::PAD2_NO_VALUE[2] = {0x00, 0x00};
const size_t xetraSessionsGrpCompPacket::PAD2_MAX_LENGTH = 2;


} // namespace neueda

#endif // XETRA_SESSIONSGRPCOMP_PACKET_H
