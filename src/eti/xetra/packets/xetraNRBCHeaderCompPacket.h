/*
 * Copyright 2014-2018 Neueda Ltd.
 * 
 * Generated 08/03/2020
 */
#ifndef XETRA_NRBCHEADERCOMP_PACKET_H
#define XETRA_NRBCHEADERCOMP_PACKET_H

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

class xetraNRBCHeaderCompPacket
{
    public:
        // no value constants
        static const uint64_t SENDING_TIME_MIN;
        static const uint64_t SENDING_TIME_MAX;
        static const uint64_t SENDING_TIME_NO_VALUE;
        static const uint32_t APPL_SUB_ID_MIN;
        static const uint32_t APPL_SUB_ID_MAX;
        static const uint32_t APPL_SUB_ID_NO_VALUE;
        static const int8_t APPL_ID_MIN;
        static const int8_t APPL_ID_MAX;
        static const int8_t APPL_ID_NO_VALUE;
        static const int8_t LAST_FRAGMENT_MIN;
        static const int8_t LAST_FRAGMENT_MAX;
        static const int8_t LAST_FRAGMENT_NO_VALUE;
        static const char PAD2_NO_VALUE[2];
        static const size_t PAD2_MAX_LENGTH;

        // fields (use with care)
        uint64_t mSendingTime;
        uint32_t mApplSubID;
        int8_t mApplID;
        int8_t mLastFragment;
        char mPad2[2];

        // constructor
        xetraNRBCHeaderCompPacket ()
        {
            mSendingTime = SENDING_TIME_NO_VALUE;
            mApplSubID = APPL_SUB_ID_NO_VALUE;
            mApplID = APPL_ID_NO_VALUE;
            mLastFragment = LAST_FRAGMENT_NO_VALUE;
            memcpy(mPad2, PAD2_NO_VALUE, sizeof (mPad2));
        }

        // getters & setters
        uint64_t getSendingTime () const
        {
            return mSendingTime;
        }

        bool setSendingTime (uint64_t v)
        {
            mSendingTime = v;
            return ((SENDING_TIME_MIN <= mSendingTime && mSendingTime <= SENDING_TIME_MAX) || mSendingTime == SENDING_TIME_NO_VALUE);
        }

        bool isSendingTimeValid () const
        {
            return (mSendingTime != SENDING_TIME_NO_VALUE);
        }

        void resetSendingTime ()
        {
            mSendingTime = SENDING_TIME_NO_VALUE;
        }

        uint32_t getApplSubID () const
        {
            return mApplSubID;
        }

        bool setApplSubID (uint32_t v)
        {
            mApplSubID = v;
            return ((APPL_SUB_ID_MIN <= mApplSubID && mApplSubID <= APPL_SUB_ID_MAX) || mApplSubID == APPL_SUB_ID_NO_VALUE);
        }

        bool isApplSubIDValid () const
        {
            return (mApplSubID != APPL_SUB_ID_NO_VALUE);
        }

        void resetApplSubID ()
        {
            mApplSubID = APPL_SUB_ID_NO_VALUE;
        }

        int8_t getApplID () const
        {
            return mApplID;
        }

        bool setApplID (int8_t v)
        {
            mApplID = v;
            return ((APPL_ID_MIN <= mApplID && mApplID <= APPL_ID_MAX) || mApplID == APPL_ID_NO_VALUE);
        }

        bool isApplIDValid () const
        {
            return (mApplID != APPL_ID_NO_VALUE);
        }

        void resetApplID ()
        {
            mApplID = APPL_ID_NO_VALUE;
        }

        int8_t getLastFragment () const
        {
            return mLastFragment;
        }

        bool setLastFragment (int8_t v)
        {
            mLastFragment = v;
            return ((LAST_FRAGMENT_MIN <= mLastFragment && mLastFragment <= LAST_FRAGMENT_MAX) || mLastFragment == LAST_FRAGMENT_NO_VALUE);
        }

        bool isLastFragmentValid () const
        {
            return (mLastFragment != LAST_FRAGMENT_NO_VALUE);
        }

        void resetLastFragment ()
        {
            mLastFragment = LAST_FRAGMENT_NO_VALUE;
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
            size_t result = sizeof (mSendingTime)
                + sizeof (mApplSubID)
                + sizeof (mApplID)
                + sizeof (mLastFragment)
                + sizeof (mPad2);
            return result;
        }

        // serialization
        codecState serialize (void *buf, size_t len, size_t &used)
        {
            codecState state;
            state = eti::serialize (mSendingTime, buf, len, used);
            if (state != GW_CODEC_SUCCESS) return state;
            state = eti::serialize (mApplSubID, buf, len, used);
            if (state != GW_CODEC_SUCCESS) return state;
            state = eti::serialize (mApplID, buf, len, used);
            if (state != GW_CODEC_SUCCESS) return state;
            state = eti::serialize (mLastFragment, buf, len, used);
            if (state != GW_CODEC_SUCCESS) return state;
            state = eti::serialize (mPad2, buf, len, used);
            if (state != GW_CODEC_SUCCESS) return state;
            return GW_CODEC_SUCCESS;
        }

        // deserialization
        codecState deserialize (const void *buf, size_t len, size_t &used)
        {
            codecState state;
            state = eti::deserialize (mSendingTime, buf, len, used);
            if (state != GW_CODEC_SUCCESS) return state;
            state = eti::deserialize (mApplSubID, buf, len, used);
            if (state != GW_CODEC_SUCCESS) return state;
            state = eti::deserialize (mApplID, buf, len, used);
            if (state != GW_CODEC_SUCCESS) return state;
            state = eti::deserialize (mLastFragment, buf, len, used);
            if (state != GW_CODEC_SUCCESS) return state;
            state = eti::deserialize (mPad2, buf, len, used);
            if (state != GW_CODEC_SUCCESS) return state;
            return GW_CODEC_SUCCESS;
        }

        // string conversion
        string toString () const
        {
            stringstream sss;
            sss << "NRBCHeaderComp::"
                << "[SendingTime=" << getSendingTime () << "],"
                << "[ApplSubID=" << getApplSubID () << "],"
                << "[ApplID=" << getApplID () << "],"
                << "[LastFragment=" << getLastFragment () << "],"
                << "[Pad2=" << getPad2 () << "]";
            return sss.str();
        }
};

const uint64_t xetraNRBCHeaderCompPacket::SENDING_TIME_MIN = 0UL;
const uint64_t xetraNRBCHeaderCompPacket::SENDING_TIME_MAX = 18446744073709551614UL;
const uint64_t xetraNRBCHeaderCompPacket::SENDING_TIME_NO_VALUE = 0xFFFFFFFFFFFFFFFF;
const uint32_t xetraNRBCHeaderCompPacket::APPL_SUB_ID_MIN = 0;
const uint32_t xetraNRBCHeaderCompPacket::APPL_SUB_ID_MAX = 4294967294;
const uint32_t xetraNRBCHeaderCompPacket::APPL_SUB_ID_NO_VALUE = 0xFFFFFFFF;
const int8_t xetraNRBCHeaderCompPacket::APPL_ID_MIN = 0;
const int8_t xetraNRBCHeaderCompPacket::APPL_ID_MAX = 11;
const int8_t xetraNRBCHeaderCompPacket::APPL_ID_NO_VALUE = 0xFF;
const int8_t xetraNRBCHeaderCompPacket::LAST_FRAGMENT_MIN = 0;
const int8_t xetraNRBCHeaderCompPacket::LAST_FRAGMENT_MAX = 1;
const int8_t xetraNRBCHeaderCompPacket::LAST_FRAGMENT_NO_VALUE = 0xFF;
const char xetraNRBCHeaderCompPacket::PAD2_NO_VALUE[2] = {0x00, 0x00};
const size_t xetraNRBCHeaderCompPacket::PAD2_MAX_LENGTH = 2;


} // namespace neueda

#endif // XETRA_NRBCHEADERCOMP_PACKET_H
