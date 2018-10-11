/*
 * Copyright 2014-2018 Neueda Ltd.
 * 
 * Generated 11/10/2018
 */
#ifndef XETRA_NOTIFHEADERCOMP_PACKET_H
#define XETRA_NOTIFHEADERCOMP_PACKET_H

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

class xetraNotifHeaderCompPacket
{
    public:
        // no value constants
        static const uint64_t SENDING_TIME_MIN;
        static const uint64_t SENDING_TIME_MAX;
        static const uint64_t SENDING_TIME_NO_VALUE;

        // fields (use with care)
        uint64_t mSendingTime;

        // constructor
        xetraNotifHeaderCompPacket ()
        {
            mSendingTime = SENDING_TIME_NO_VALUE;
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


        // render current raw size
        size_t getRawSize () const
        {
            size_t result = sizeof (mSendingTime);
            return result;
        }

        // serialization
        codecState serialize (void *buf, size_t len, size_t &used)
        {
            codecState state;
            state = xetra::serialize (mSendingTime, buf, len, used);
            if (state != GW_CODEC_SUCCESS) return state;
            return GW_CODEC_SUCCESS;
        }

        // deserialization
        codecState deserialize (const void *buf, size_t len, size_t &used)
        {
            codecState state;
            state = xetra::deserialize (mSendingTime, buf, len, used);
            if (state != GW_CODEC_SUCCESS) return state;
            return GW_CODEC_SUCCESS;
        }

        // string conversion
        string toString () const
        {
            stringstream sss;
            sss << "NotifHeaderComp::"
                << "[SendingTime=" << getSendingTime () << "]";
            return sss.str();
        }
};

const uint64_t xetraNotifHeaderCompPacket::SENDING_TIME_MIN = 0UL;
const uint64_t xetraNotifHeaderCompPacket::SENDING_TIME_MAX = 18446744073709551614UL;
const uint64_t xetraNotifHeaderCompPacket::SENDING_TIME_NO_VALUE = 0xFFFFFFFFFFFFFFFF;


} // namespace neueda

#endif // XETRA_NOTIFHEADERCOMP_PACKET_H
