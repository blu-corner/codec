/*
 * Copyright 2014-2018 Neueda Ltd.
 * 
 * Generated 09/05/2019
 */
#ifndef XETRA_XETRAENLIGHTTARGETPARTIESCOMP_PACKET_H
#define XETRA_XETRAENLIGHTTARGETPARTIESCOMP_PACKET_H

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

class xetraXetraEnLightTargetPartiesCompPacket
{
    public:
        // no value constants
        static const int32_t TARGET_PARTY_IDEXECUTING_TRADER_MIN;
        static const int32_t TARGET_PARTY_IDEXECUTING_TRADER_MAX;
        static const int32_t TARGET_PARTY_IDEXECUTING_TRADER_NO_VALUE;
        static const char TARGET_PARTY_EXECUTING_FIRM_NO_VALUE[5];
        static const size_t TARGET_PARTY_EXECUTING_FIRM_MAX_LENGTH;
        static const char TARGET_PARTY_EXECUTING_TRADER_NO_VALUE[6];
        static const size_t TARGET_PARTY_EXECUTING_TRADER_MAX_LENGTH;
        static const char PAD1_NO_VALUE[1];
        static const size_t PAD1_MAX_LENGTH;

        // fields (use with care)
        int32_t mTargetPartyIDExecutingTrader;
        char mTargetPartyExecutingFirm[5];
        char mTargetPartyExecutingTrader[6];
        char mPad1[1];

        // constructor
        xetraXetraEnLightTargetPartiesCompPacket ()
        {
            mTargetPartyIDExecutingTrader = TARGET_PARTY_IDEXECUTING_TRADER_NO_VALUE;
            memcpy(mTargetPartyExecutingFirm, TARGET_PARTY_EXECUTING_FIRM_NO_VALUE, sizeof (mTargetPartyExecutingFirm));
            memcpy(mTargetPartyExecutingTrader, TARGET_PARTY_EXECUTING_TRADER_NO_VALUE, sizeof (mTargetPartyExecutingTrader));
            memcpy(mPad1, PAD1_NO_VALUE, sizeof (mPad1));
        }

        // getters & setters
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

        string getTargetPartyExecutingFirm () const
        {
            return string (mTargetPartyExecutingFirm, TARGET_PARTY_EXECUTING_FIRM_MAX_LENGTH);
        }

        bool setTargetPartyExecutingFirm (const string& v)
        {
            memset (mTargetPartyExecutingFirm, '\0', sizeof (mTargetPartyExecutingFirm));
            size_t size = min ((size_t) v.size (), (size_t) TARGET_PARTY_EXECUTING_FIRM_MAX_LENGTH);
            strncpy (mTargetPartyExecutingFirm, v.c_str (), size);
            return (v.size () <= TARGET_PARTY_EXECUTING_FIRM_MAX_LENGTH);
        }

        bool isTargetPartyExecutingFirmValid () const
        {
            return (memcmp (mTargetPartyExecutingFirm, TARGET_PARTY_EXECUTING_FIRM_NO_VALUE, sizeof (mTargetPartyExecutingFirm)) != 0);
        }

        void resetTargetPartyExecutingFirm ()
        {
            memcpy (mTargetPartyExecutingFirm, TARGET_PARTY_EXECUTING_FIRM_NO_VALUE, sizeof (mTargetPartyExecutingFirm));
        }

        string getTargetPartyExecutingTrader () const
        {
            return string (mTargetPartyExecutingTrader, TARGET_PARTY_EXECUTING_TRADER_MAX_LENGTH);
        }

        bool setTargetPartyExecutingTrader (const string& v)
        {
            memset (mTargetPartyExecutingTrader, '\0', sizeof (mTargetPartyExecutingTrader));
            size_t size = min ((size_t) v.size (), (size_t) TARGET_PARTY_EXECUTING_TRADER_MAX_LENGTH);
            strncpy (mTargetPartyExecutingTrader, v.c_str (), size);
            return (v.size () <= TARGET_PARTY_EXECUTING_TRADER_MAX_LENGTH);
        }

        bool isTargetPartyExecutingTraderValid () const
        {
            return (memcmp (mTargetPartyExecutingTrader, TARGET_PARTY_EXECUTING_TRADER_NO_VALUE, sizeof (mTargetPartyExecutingTrader)) != 0);
        }

        void resetTargetPartyExecutingTrader ()
        {
            memcpy (mTargetPartyExecutingTrader, TARGET_PARTY_EXECUTING_TRADER_NO_VALUE, sizeof (mTargetPartyExecutingTrader));
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
            size_t result = sizeof (mTargetPartyIDExecutingTrader)
                + sizeof (mTargetPartyExecutingFirm)
                + sizeof (mTargetPartyExecutingTrader)
                + sizeof (mPad1);
            return result;
        }

        // serialization
        codecState serialize (void *buf, size_t len, size_t &used)
        {
            codecState state;
            state = xetra::serialize (mTargetPartyIDExecutingTrader, buf, len, used);
            if (state != GW_CODEC_SUCCESS) return state;
            state = xetra::serialize (mTargetPartyExecutingFirm, buf, len, used);
            if (state != GW_CODEC_SUCCESS) return state;
            state = xetra::serialize (mTargetPartyExecutingTrader, buf, len, used);
            if (state != GW_CODEC_SUCCESS) return state;
            state = xetra::serialize (mPad1, buf, len, used);
            if (state != GW_CODEC_SUCCESS) return state;
            return GW_CODEC_SUCCESS;
        }

        // deserialization
        codecState deserialize (const void *buf, size_t len, size_t &used)
        {
            codecState state;
            state = xetra::deserialize (mTargetPartyIDExecutingTrader, buf, len, used);
            if (state != GW_CODEC_SUCCESS) return state;
            state = xetra::deserialize (mTargetPartyExecutingFirm, buf, len, used);
            if (state != GW_CODEC_SUCCESS) return state;
            state = xetra::deserialize (mTargetPartyExecutingTrader, buf, len, used);
            if (state != GW_CODEC_SUCCESS) return state;
            state = xetra::deserialize (mPad1, buf, len, used);
            if (state != GW_CODEC_SUCCESS) return state;
            return GW_CODEC_SUCCESS;
        }

        // string conversion
        string toString () const
        {
            stringstream sss;
            sss << "XetraEnLightTargetPartiesComp::"
                << "[TargetPartyIDExecutingTrader=" << getTargetPartyIDExecutingTrader () << "],"
                << "[TargetPartyExecutingFirm=" << getTargetPartyExecutingFirm () << "],"
                << "[TargetPartyExecutingTrader=" << getTargetPartyExecutingTrader () << "],"
                << "[Pad1=" << getPad1 () << "]";
            return sss.str();
        }
};

const int32_t xetraXetraEnLightTargetPartiesCompPacket::TARGET_PARTY_IDEXECUTING_TRADER_MIN = 0;
const int32_t xetraXetraEnLightTargetPartiesCompPacket::TARGET_PARTY_IDEXECUTING_TRADER_MAX = 2147483647;
const int32_t xetraXetraEnLightTargetPartiesCompPacket::TARGET_PARTY_IDEXECUTING_TRADER_NO_VALUE = 0xFFFFFFFF;
const char xetraXetraEnLightTargetPartiesCompPacket::TARGET_PARTY_EXECUTING_FIRM_NO_VALUE[5] = {0x00, 0x00, 0x00, 0x00, 0x00};
const size_t xetraXetraEnLightTargetPartiesCompPacket::TARGET_PARTY_EXECUTING_FIRM_MAX_LENGTH = 5;
const char xetraXetraEnLightTargetPartiesCompPacket::TARGET_PARTY_EXECUTING_TRADER_NO_VALUE[6] = {0x00, 0x00, 0x00, 0x00, 0x00, 0x00};
const size_t xetraXetraEnLightTargetPartiesCompPacket::TARGET_PARTY_EXECUTING_TRADER_MAX_LENGTH = 6;
const char xetraXetraEnLightTargetPartiesCompPacket::PAD1_NO_VALUE[1] = {0x00};
const size_t xetraXetraEnLightTargetPartiesCompPacket::PAD1_MAX_LENGTH = 1;


} // namespace neueda

#endif // XETRA_XETRAENLIGHTTARGETPARTIESCOMP_PACKET_H
