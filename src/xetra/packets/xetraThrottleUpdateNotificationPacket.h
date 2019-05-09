/*
 * Copyright 2014-2018 Neueda Ltd.
 * 
 * Generated 09/05/2019
 */
#ifndef XETRA_THROTTLEUPDATENOTIFICATION_PACKET_H
#define XETRA_THROTTLEUPDATENOTIFICATION_PACKET_H

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

class xetraThrottleUpdateNotificationPacket
{
    public:
        // no value constants
        static const int64_t THROTTLE_TIME_INTERVAL_MIN;
        static const int64_t THROTTLE_TIME_INTERVAL_MAX;
        static const int64_t THROTTLE_TIME_INTERVAL_NO_VALUE;
        static const uint32_t THROTTLE_NO_MSGS_MIN;
        static const uint32_t THROTTLE_NO_MSGS_MAX;
        static const uint32_t THROTTLE_NO_MSGS_NO_VALUE;
        static const uint32_t THROTTLE_DISCONNECT_LIMIT_MIN;
        static const uint32_t THROTTLE_DISCONNECT_LIMIT_MAX;
        static const uint32_t THROTTLE_DISCONNECT_LIMIT_NO_VALUE;

        // fields (use with care)
        xetraMessageHeaderOutCompPacket mMessageHeaderOut;
        xetraNotifHeaderCompPacket mNotifHeader;
        int64_t mThrottleTimeInterval;
        uint32_t mThrottleNoMsgs;
        uint32_t mThrottleDisconnectLimit;

        // constructor
        xetraThrottleUpdateNotificationPacket ()
        {
            mMessageHeaderOut.mTemplateID = 10028;
            mThrottleTimeInterval = THROTTLE_TIME_INTERVAL_NO_VALUE;
            mThrottleNoMsgs = THROTTLE_NO_MSGS_NO_VALUE;
            mThrottleDisconnectLimit = THROTTLE_DISCONNECT_LIMIT_NO_VALUE;
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

        const xetraNotifHeaderCompPacket& getNotifHeader () const
        {
            return mNotifHeader;
        }

        bool setNotifHeader (const xetraNotifHeaderCompPacket& v)
        {
            mNotifHeader = v;
            return true;
        }

        int64_t getThrottleTimeInterval () const
        {
            return mThrottleTimeInterval;
        }

        bool setThrottleTimeInterval (int64_t v)
        {
            mThrottleTimeInterval = v;
            return ((THROTTLE_TIME_INTERVAL_MIN <= mThrottleTimeInterval && mThrottleTimeInterval <= THROTTLE_TIME_INTERVAL_MAX) || mThrottleTimeInterval == THROTTLE_TIME_INTERVAL_NO_VALUE);
        }

        bool isThrottleTimeIntervalValid () const
        {
            return (mThrottleTimeInterval != THROTTLE_TIME_INTERVAL_NO_VALUE);
        }

        void resetThrottleTimeInterval ()
        {
            mThrottleTimeInterval = THROTTLE_TIME_INTERVAL_NO_VALUE;
        }

        uint32_t getThrottleNoMsgs () const
        {
            return mThrottleNoMsgs;
        }

        bool setThrottleNoMsgs (uint32_t v)
        {
            mThrottleNoMsgs = v;
            return ((THROTTLE_NO_MSGS_MIN <= mThrottleNoMsgs && mThrottleNoMsgs <= THROTTLE_NO_MSGS_MAX) || mThrottleNoMsgs == THROTTLE_NO_MSGS_NO_VALUE);
        }

        bool isThrottleNoMsgsValid () const
        {
            return (mThrottleNoMsgs != THROTTLE_NO_MSGS_NO_VALUE);
        }

        void resetThrottleNoMsgs ()
        {
            mThrottleNoMsgs = THROTTLE_NO_MSGS_NO_VALUE;
        }

        uint32_t getThrottleDisconnectLimit () const
        {
            return mThrottleDisconnectLimit;
        }

        bool setThrottleDisconnectLimit (uint32_t v)
        {
            mThrottleDisconnectLimit = v;
            return ((THROTTLE_DISCONNECT_LIMIT_MIN <= mThrottleDisconnectLimit && mThrottleDisconnectLimit <= THROTTLE_DISCONNECT_LIMIT_MAX) || mThrottleDisconnectLimit == THROTTLE_DISCONNECT_LIMIT_NO_VALUE);
        }

        bool isThrottleDisconnectLimitValid () const
        {
            return (mThrottleDisconnectLimit != THROTTLE_DISCONNECT_LIMIT_NO_VALUE);
        }

        void resetThrottleDisconnectLimit ()
        {
            mThrottleDisconnectLimit = THROTTLE_DISCONNECT_LIMIT_NO_VALUE;
        }


        // render current raw size
        size_t getRawSize () const
        {
            size_t result = mMessageHeaderOut.getRawSize()
                + mNotifHeader.getRawSize()
                + sizeof (mThrottleTimeInterval)
                + sizeof (mThrottleNoMsgs)
                + sizeof (mThrottleDisconnectLimit);
            return result;
        }

        // serialization
        codecState serialize (void *buf, size_t len, size_t &used)
        {
            mMessageHeaderOut.mBodyLen = getRawSize ();
            codecState state;
            state = mMessageHeaderOut.serialize (buf, len, used);
            if (state != GW_CODEC_SUCCESS) return state;
            state = mNotifHeader.serialize (buf, len, used);
            if (state != GW_CODEC_SUCCESS) return state;
            state = xetra::serialize (mThrottleTimeInterval, buf, len, used);
            if (state != GW_CODEC_SUCCESS) return state;
            state = xetra::serialize (mThrottleNoMsgs, buf, len, used);
            if (state != GW_CODEC_SUCCESS) return state;
            state = xetra::serialize (mThrottleDisconnectLimit, buf, len, used);
            if (state != GW_CODEC_SUCCESS) return state;
            return GW_CODEC_SUCCESS;
        }

        // deserialization
        codecState deserialize (const void *buf, size_t len, size_t &used)
        {
            codecState state;
            state = mMessageHeaderOut.deserialize (buf, len, used);
            if (state != GW_CODEC_SUCCESS) return state;
            state = mNotifHeader.deserialize (buf, len, used);
            if (state != GW_CODEC_SUCCESS) return state;
            state = xetra::deserialize (mThrottleTimeInterval, buf, len, used);
            if (state != GW_CODEC_SUCCESS) return state;
            state = xetra::deserialize (mThrottleNoMsgs, buf, len, used);
            if (state != GW_CODEC_SUCCESS) return state;
            state = xetra::deserialize (mThrottleDisconnectLimit, buf, len, used);
            if (state != GW_CODEC_SUCCESS) return state;
            mMessageHeaderOut.mBodyLen = getRawSize ();
            return GW_CODEC_SUCCESS;
        }

        // string conversion
        string toString () const
        {
            stringstream sss;
            sss << "ThrottleUpdateNotification::"
                << "[MessageHeaderOut=" << mMessageHeaderOut.toString () << "],"
                << "[NotifHeader=" << mNotifHeader.toString () << "],"
                << "[ThrottleTimeInterval=" << getThrottleTimeInterval () << "],"
                << "[ThrottleNoMsgs=" << getThrottleNoMsgs () << "],"
                << "[ThrottleDisconnectLimit=" << getThrottleDisconnectLimit () << "]";
            return sss.str();
        }
};

const int64_t xetraThrottleUpdateNotificationPacket::THROTTLE_TIME_INTERVAL_MIN = -9223372036854775807L;
const int64_t xetraThrottleUpdateNotificationPacket::THROTTLE_TIME_INTERVAL_MAX = 9223372036854775807L;
const int64_t xetraThrottleUpdateNotificationPacket::THROTTLE_TIME_INTERVAL_NO_VALUE = 0x8000000000000000;
const uint32_t xetraThrottleUpdateNotificationPacket::THROTTLE_NO_MSGS_MIN = 0;
const uint32_t xetraThrottleUpdateNotificationPacket::THROTTLE_NO_MSGS_MAX = 4294967294;
const uint32_t xetraThrottleUpdateNotificationPacket::THROTTLE_NO_MSGS_NO_VALUE = 0xFFFFFFFF;
const uint32_t xetraThrottleUpdateNotificationPacket::THROTTLE_DISCONNECT_LIMIT_MIN = 0;
const uint32_t xetraThrottleUpdateNotificationPacket::THROTTLE_DISCONNECT_LIMIT_MAX = 4294967294;
const uint32_t xetraThrottleUpdateNotificationPacket::THROTTLE_DISCONNECT_LIMIT_NO_VALUE = 0xFFFFFFFF;


} // namespace neueda

#endif // XETRA_THROTTLEUPDATENOTIFICATION_PACKET_H
