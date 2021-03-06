/*
 * Copyright 2014-2018 Neueda Ltd.
 * 
 * Generated 21/05/2019
 */
#ifndef EUREX_LOGONRESPONSE_PACKET_H
#define EUREX_LOGONRESPONSE_PACKET_H

#include <string>
#include <vector>
#include <sstream>
#include <cstddef>
#include <stdint.h>
#include "eurexPackets.h"
#include "EtiPacketUtils.h"

namespace neueda
{

using namespace std;

class eurexLogonResponsePacket
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
        static const uint32_t HEART_BT_INT_MIN;
        static const uint32_t HEART_BT_INT_MAX;
        static const uint32_t HEART_BT_INT_NO_VALUE;
        static const uint32_t SESSION_INSTANCE_ID_MIN;
        static const uint32_t SESSION_INSTANCE_ID_MAX;
        static const uint32_t SESSION_INSTANCE_ID_NO_VALUE;
        static const int16_t MARKET_ID_MIN;
        static const int16_t MARKET_ID_MAX;
        static const int16_t MARKET_ID_NO_VALUE;
        static const int8_t TRAD_SES_MODE_MIN;
        static const int8_t TRAD_SES_MODE_MAX;
        static const int8_t TRAD_SES_MODE_NO_VALUE;
        static const char DEFAULT_CSTM_APPL_VER_ID_NO_VALUE[30];
        static const size_t DEFAULT_CSTM_APPL_VER_ID_MAX_LENGTH;
        static const char DEFAULT_CSTM_APPL_VER_SUB_ID_NO_VALUE[5];
        static const size_t DEFAULT_CSTM_APPL_VER_SUB_ID_MAX_LENGTH;
        static const char PAD2_NO_VALUE[2];
        static const size_t PAD2_MAX_LENGTH;

        // fields (use with care)
        eurexMessageHeaderOutCompPacket mMessageHeaderOut;
        eurexResponseHeaderCompPacket mResponseHeader;
        int64_t mThrottleTimeInterval;
        uint32_t mThrottleNoMsgs;
        uint32_t mThrottleDisconnectLimit;
        uint32_t mHeartBtInt;
        uint32_t mSessionInstanceID;
        int16_t mMarketID;
        int8_t mTradSesMode;
        char mDefaultCstmApplVerID[30];
        char mDefaultCstmApplVerSubID[5];
        char mPad2[2];

        // constructor
        eurexLogonResponsePacket ()
        {
            mMessageHeaderOut.mTemplateID = 10001;
            mThrottleTimeInterval = THROTTLE_TIME_INTERVAL_NO_VALUE;
            mThrottleNoMsgs = THROTTLE_NO_MSGS_NO_VALUE;
            mThrottleDisconnectLimit = THROTTLE_DISCONNECT_LIMIT_NO_VALUE;
            mHeartBtInt = HEART_BT_INT_NO_VALUE;
            mSessionInstanceID = SESSION_INSTANCE_ID_NO_VALUE;
            mMarketID = MARKET_ID_NO_VALUE;
            mTradSesMode = TRAD_SES_MODE_NO_VALUE;
            memcpy(mDefaultCstmApplVerID, DEFAULT_CSTM_APPL_VER_ID_NO_VALUE, sizeof (mDefaultCstmApplVerID));
            memcpy(mDefaultCstmApplVerSubID, DEFAULT_CSTM_APPL_VER_SUB_ID_NO_VALUE, sizeof (mDefaultCstmApplVerSubID));
            memcpy(mPad2, PAD2_NO_VALUE, sizeof (mPad2));
        }

        // getters & setters
        const eurexMessageHeaderOutCompPacket& getMessageHeaderOut () const
        {
            return mMessageHeaderOut;
        }

        bool setMessageHeaderOut (const eurexMessageHeaderOutCompPacket& v)
        {
            mMessageHeaderOut = v;
            return true;
        }

        const eurexResponseHeaderCompPacket& getResponseHeader () const
        {
            return mResponseHeader;
        }

        bool setResponseHeader (const eurexResponseHeaderCompPacket& v)
        {
            mResponseHeader = v;
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

        uint32_t getHeartBtInt () const
        {
            return mHeartBtInt;
        }

        bool setHeartBtInt (uint32_t v)
        {
            mHeartBtInt = v;
            return ((HEART_BT_INT_MIN <= mHeartBtInt && mHeartBtInt <= HEART_BT_INT_MAX) || mHeartBtInt == HEART_BT_INT_NO_VALUE);
        }

        bool isHeartBtIntValid () const
        {
            return (mHeartBtInt != HEART_BT_INT_NO_VALUE);
        }

        void resetHeartBtInt ()
        {
            mHeartBtInt = HEART_BT_INT_NO_VALUE;
        }

        uint32_t getSessionInstanceID () const
        {
            return mSessionInstanceID;
        }

        bool setSessionInstanceID (uint32_t v)
        {
            mSessionInstanceID = v;
            return ((SESSION_INSTANCE_ID_MIN <= mSessionInstanceID && mSessionInstanceID <= SESSION_INSTANCE_ID_MAX) || mSessionInstanceID == SESSION_INSTANCE_ID_NO_VALUE);
        }

        bool isSessionInstanceIDValid () const
        {
            return (mSessionInstanceID != SESSION_INSTANCE_ID_NO_VALUE);
        }

        void resetSessionInstanceID ()
        {
            mSessionInstanceID = SESSION_INSTANCE_ID_NO_VALUE;
        }

        int16_t getMarketID () const
        {
            return mMarketID;
        }

        bool setMarketID (int16_t v)
        {
            mMarketID = v;
            return ((MARKET_ID_MIN <= mMarketID && mMarketID <= MARKET_ID_MAX) || mMarketID == MARKET_ID_NO_VALUE);
        }

        bool isMarketIDValid () const
        {
            return (mMarketID != MARKET_ID_NO_VALUE);
        }

        void resetMarketID ()
        {
            mMarketID = MARKET_ID_NO_VALUE;
        }

        int8_t getTradSesMode () const
        {
            return mTradSesMode;
        }

        bool setTradSesMode (int8_t v)
        {
            mTradSesMode = v;
            return ((TRAD_SES_MODE_MIN <= mTradSesMode && mTradSesMode <= TRAD_SES_MODE_MAX) || mTradSesMode == TRAD_SES_MODE_NO_VALUE);
        }

        bool isTradSesModeValid () const
        {
            return (mTradSesMode != TRAD_SES_MODE_NO_VALUE);
        }

        void resetTradSesMode ()
        {
            mTradSesMode = TRAD_SES_MODE_NO_VALUE;
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

        string getDefaultCstmApplVerSubID () const
        {
            return string (mDefaultCstmApplVerSubID, DEFAULT_CSTM_APPL_VER_SUB_ID_MAX_LENGTH);
        }

        bool setDefaultCstmApplVerSubID (const string& v)
        {
            memset (mDefaultCstmApplVerSubID, '\0', sizeof (mDefaultCstmApplVerSubID));
            size_t size = min ((size_t) v.size (), (size_t) DEFAULT_CSTM_APPL_VER_SUB_ID_MAX_LENGTH);
            strncpy (mDefaultCstmApplVerSubID, v.c_str (), size);
            return (v.size () <= DEFAULT_CSTM_APPL_VER_SUB_ID_MAX_LENGTH);
        }

        bool isDefaultCstmApplVerSubIDValid () const
        {
            return (memcmp (mDefaultCstmApplVerSubID, DEFAULT_CSTM_APPL_VER_SUB_ID_NO_VALUE, sizeof (mDefaultCstmApplVerSubID)) != 0);
        }

        void resetDefaultCstmApplVerSubID ()
        {
            memcpy (mDefaultCstmApplVerSubID, DEFAULT_CSTM_APPL_VER_SUB_ID_NO_VALUE, sizeof (mDefaultCstmApplVerSubID));
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
            size_t result = mMessageHeaderOut.getRawSize()
                + mResponseHeader.getRawSize()
                + sizeof (mThrottleTimeInterval)
                + sizeof (mThrottleNoMsgs)
                + sizeof (mThrottleDisconnectLimit)
                + sizeof (mHeartBtInt)
                + sizeof (mSessionInstanceID)
                + sizeof (mMarketID)
                + sizeof (mTradSesMode)
                + sizeof (mDefaultCstmApplVerID)
                + sizeof (mDefaultCstmApplVerSubID)
                + sizeof (mPad2);
            return result;
        }

        // serialization
        codecState serialize (void *buf, size_t len, size_t &used)
        {
            mMessageHeaderOut.mBodyLen = getRawSize ();
            codecState state;
            state = mMessageHeaderOut.serialize (buf, len, used);
            if (state != GW_CODEC_SUCCESS) return state;
            state = mResponseHeader.serialize (buf, len, used);
            if (state != GW_CODEC_SUCCESS) return state;
            state = eti::serialize (mThrottleTimeInterval, buf, len, used);
            if (state != GW_CODEC_SUCCESS) return state;
            state = eti::serialize (mThrottleNoMsgs, buf, len, used);
            if (state != GW_CODEC_SUCCESS) return state;
            state = eti::serialize (mThrottleDisconnectLimit, buf, len, used);
            if (state != GW_CODEC_SUCCESS) return state;
            state = eti::serialize (mHeartBtInt, buf, len, used);
            if (state != GW_CODEC_SUCCESS) return state;
            state = eti::serialize (mSessionInstanceID, buf, len, used);
            if (state != GW_CODEC_SUCCESS) return state;
            state = eti::serialize (mMarketID, buf, len, used);
            if (state != GW_CODEC_SUCCESS) return state;
            state = eti::serialize (mTradSesMode, buf, len, used);
            if (state != GW_CODEC_SUCCESS) return state;
            state = eti::serialize (mDefaultCstmApplVerID, buf, len, used);
            if (state != GW_CODEC_SUCCESS) return state;
            state = eti::serialize (mDefaultCstmApplVerSubID, buf, len, used);
            if (state != GW_CODEC_SUCCESS) return state;
            state = eti::serialize (mPad2, buf, len, used);
            if (state != GW_CODEC_SUCCESS) return state;
            return GW_CODEC_SUCCESS;
        }

        // deserialization
        codecState deserialize (const void *buf, size_t len, size_t &used)
        {
            codecState state;
            state = mMessageHeaderOut.deserialize (buf, len, used);
            if (state != GW_CODEC_SUCCESS) return state;
            state = mResponseHeader.deserialize (buf, len, used);
            if (state != GW_CODEC_SUCCESS) return state;
            state = eti::deserialize (mThrottleTimeInterval, buf, len, used);
            if (state != GW_CODEC_SUCCESS) return state;
            state = eti::deserialize (mThrottleNoMsgs, buf, len, used);
            if (state != GW_CODEC_SUCCESS) return state;
            state = eti::deserialize (mThrottleDisconnectLimit, buf, len, used);
            if (state != GW_CODEC_SUCCESS) return state;
            state = eti::deserialize (mHeartBtInt, buf, len, used);
            if (state != GW_CODEC_SUCCESS) return state;
            state = eti::deserialize (mSessionInstanceID, buf, len, used);
            if (state != GW_CODEC_SUCCESS) return state;
            state = eti::deserialize (mMarketID, buf, len, used);
            if (state != GW_CODEC_SUCCESS) return state;
            state = eti::deserialize (mTradSesMode, buf, len, used);
            if (state != GW_CODEC_SUCCESS) return state;
            state = eti::deserialize (mDefaultCstmApplVerID, buf, len, used);
            if (state != GW_CODEC_SUCCESS) return state;
            state = eti::deserialize (mDefaultCstmApplVerSubID, buf, len, used);
            if (state != GW_CODEC_SUCCESS) return state;
            state = eti::deserialize (mPad2, buf, len, used);
            if (state != GW_CODEC_SUCCESS) return state;
            mMessageHeaderOut.mBodyLen = getRawSize ();
            return GW_CODEC_SUCCESS;
        }

        // string conversion
        string toString () const
        {
            stringstream sss;
            sss << "LogonResponse::"
                << "[MessageHeaderOut=" << mMessageHeaderOut.toString () << "],"
                << "[ResponseHeader=" << mResponseHeader.toString () << "],"
                << "[ThrottleTimeInterval=" << getThrottleTimeInterval () << "],"
                << "[ThrottleNoMsgs=" << getThrottleNoMsgs () << "],"
                << "[ThrottleDisconnectLimit=" << getThrottleDisconnectLimit () << "],"
                << "[HeartBtInt=" << getHeartBtInt () << "],"
                << "[SessionInstanceID=" << getSessionInstanceID () << "],"
                << "[MarketID=" << getMarketID () << "],"
                << "[TradSesMode=" << getTradSesMode () << "],"
                << "[DefaultCstmApplVerID=" << getDefaultCstmApplVerID () << "],"
                << "[DefaultCstmApplVerSubID=" << getDefaultCstmApplVerSubID () << "],"
                << "[Pad2=" << getPad2 () << "]";
            return sss.str();
        }
};

const int64_t eurexLogonResponsePacket::THROTTLE_TIME_INTERVAL_MIN = -9223372036854775807L;
const int64_t eurexLogonResponsePacket::THROTTLE_TIME_INTERVAL_MAX = 9223372036854775807L;
const int64_t eurexLogonResponsePacket::THROTTLE_TIME_INTERVAL_NO_VALUE = 0x8000000000000000;
const uint32_t eurexLogonResponsePacket::THROTTLE_NO_MSGS_MIN = 0;
const uint32_t eurexLogonResponsePacket::THROTTLE_NO_MSGS_MAX = 4294967294;
const uint32_t eurexLogonResponsePacket::THROTTLE_NO_MSGS_NO_VALUE = 0xFFFFFFFF;
const uint32_t eurexLogonResponsePacket::THROTTLE_DISCONNECT_LIMIT_MIN = 0;
const uint32_t eurexLogonResponsePacket::THROTTLE_DISCONNECT_LIMIT_MAX = 4294967294;
const uint32_t eurexLogonResponsePacket::THROTTLE_DISCONNECT_LIMIT_NO_VALUE = 0xFFFFFFFF;
const uint32_t eurexLogonResponsePacket::HEART_BT_INT_MIN = 0;
const uint32_t eurexLogonResponsePacket::HEART_BT_INT_MAX = 4294967294;
const uint32_t eurexLogonResponsePacket::HEART_BT_INT_NO_VALUE = 0xFFFFFFFF;
const uint32_t eurexLogonResponsePacket::SESSION_INSTANCE_ID_MIN = 0;
const uint32_t eurexLogonResponsePacket::SESSION_INSTANCE_ID_MAX = 4294967294;
const uint32_t eurexLogonResponsePacket::SESSION_INSTANCE_ID_NO_VALUE = 0xFFFFFFFF;
const int16_t eurexLogonResponsePacket::MARKET_ID_MIN = 1;
const int16_t eurexLogonResponsePacket::MARKET_ID_MAX = 255;
const int16_t eurexLogonResponsePacket::MARKET_ID_NO_VALUE = 0xFFFF;
const int8_t eurexLogonResponsePacket::TRAD_SES_MODE_MIN = 1;
const int8_t eurexLogonResponsePacket::TRAD_SES_MODE_MAX = 5;
const int8_t eurexLogonResponsePacket::TRAD_SES_MODE_NO_VALUE = 0xFF;
const char eurexLogonResponsePacket::DEFAULT_CSTM_APPL_VER_ID_NO_VALUE[30] = {0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00};
const size_t eurexLogonResponsePacket::DEFAULT_CSTM_APPL_VER_ID_MAX_LENGTH = 30;
const char eurexLogonResponsePacket::DEFAULT_CSTM_APPL_VER_SUB_ID_NO_VALUE[5] = {0x00, 0x00, 0x00, 0x00, 0x00};
const size_t eurexLogonResponsePacket::DEFAULT_CSTM_APPL_VER_SUB_ID_MAX_LENGTH = 5;
const char eurexLogonResponsePacket::PAD2_NO_VALUE[2] = {0x00, 0x00};
const size_t eurexLogonResponsePacket::PAD2_MAX_LENGTH = 2;


} // namespace neueda

#endif // EUREX_LOGONRESPONSE_PACKET_H
