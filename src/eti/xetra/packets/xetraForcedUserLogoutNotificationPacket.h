/*
 * Copyright 2014-2018 Neueda Ltd.
 * 
 * Generated 08/03/2020
 */
#ifndef XETRA_FORCEDUSERLOGOUTNOTIFICATION_PACKET_H
#define XETRA_FORCEDUSERLOGOUTNOTIFICATION_PACKET_H

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

class xetraForcedUserLogoutNotificationPacket
{
    public:
        // no value constants
        static const int8_t USER_STATUS_MIN;
        static const int8_t USER_STATUS_MAX;
        static const int8_t USER_STATUS_NO_VALUE;
        static const char PAD3_NO_VALUE[3];
        static const size_t PAD3_MAX_LENGTH;
        static const int32_t USERNAME_MIN;
        static const int32_t USERNAME_MAX;
        static const int32_t USERNAME_NO_VALUE;
        static const int16_t VAR_TEXT_LEN_MIN;
        static const int16_t VAR_TEXT_LEN_MAX;
        static const int16_t VAR_TEXT_LEN_NO_VALUE;
        static const char PAD6_NO_VALUE[6];
        static const size_t PAD6_MAX_LENGTH;
        static const size_t VAR_TEXT_MAX_LENGTH;

        // fields (use with care)
        xetraMessageHeaderOutCompPacket mMessageHeaderOut;
        xetraNotifHeaderCompPacket mNotifHeader;
        int8_t mUserStatus;
        char mPad3[3];
        int32_t mUsername;
        int16_t mVarTextLen;
        char mPad6[6];
        string mVarText;
        int mVarTextPad; // reserved for internal use

        // constructor
        xetraForcedUserLogoutNotificationPacket ()
        {
            mMessageHeaderOut.mTemplateID = 10043;
            mUserStatus = USER_STATUS_NO_VALUE;
            memcpy(mPad3, PAD3_NO_VALUE, sizeof (mPad3));
            mUsername = USERNAME_NO_VALUE;
            mVarTextLen = VAR_TEXT_LEN_NO_VALUE;
            memcpy(mPad6, PAD6_NO_VALUE, sizeof (mPad6));
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

        int8_t getUserStatus () const
        {
            return mUserStatus;
        }

        bool setUserStatus (int8_t v)
        {
            mUserStatus = v;
            return ((USER_STATUS_MIN <= mUserStatus && mUserStatus <= USER_STATUS_MAX) || mUserStatus == USER_STATUS_NO_VALUE);
        }

        bool isUserStatusValid () const
        {
            return (mUserStatus != USER_STATUS_NO_VALUE);
        }

        void resetUserStatus ()
        {
            mUserStatus = USER_STATUS_NO_VALUE;
        }

        string getPad3 () const
        {
            return string (mPad3, PAD3_MAX_LENGTH);
        }

        bool setPad3 (const string& v)
        {
            memset (mPad3, '\0', sizeof (mPad3));
            size_t size = min ((size_t) v.size (), (size_t) PAD3_MAX_LENGTH);
            strncpy (mPad3, v.c_str (), size);
            return (v.size () <= PAD3_MAX_LENGTH);
        }

        bool isPad3Valid () const
        {
            return (memcmp (mPad3, PAD3_NO_VALUE, sizeof (mPad3)) != 0);
        }

        void resetPad3 ()
        {
            memcpy (mPad3, PAD3_NO_VALUE, sizeof (mPad3));
        }

        int32_t getUsername () const
        {
            return mUsername;
        }

        bool setUsername (int32_t v)
        {
            mUsername = v;
            return ((USERNAME_MIN <= mUsername && mUsername <= USERNAME_MAX) || mUsername == USERNAME_NO_VALUE);
        }

        bool isUsernameValid () const
        {
            return (mUsername != USERNAME_NO_VALUE);
        }

        void resetUsername ()
        {
            mUsername = USERNAME_NO_VALUE;
        }

        int16_t getVarTextLen () const
        {
            return mVarTextLen;
        }

        bool setVarTextLen (int16_t v)
        {
            mVarTextLen = v;
            return ((VAR_TEXT_LEN_MIN <= mVarTextLen && mVarTextLen <= VAR_TEXT_LEN_MAX) || mVarTextLen == VAR_TEXT_LEN_NO_VALUE);
        }

        bool isVarTextLenValid () const
        {
            return (mVarTextLen != VAR_TEXT_LEN_NO_VALUE);
        }

        void resetVarTextLen ()
        {
            mVarTextLen = VAR_TEXT_LEN_NO_VALUE;
        }

        string getPad6 () const
        {
            return string (mPad6, PAD6_MAX_LENGTH);
        }

        bool setPad6 (const string& v)
        {
            memset (mPad6, '\0', sizeof (mPad6));
            size_t size = min ((size_t) v.size (), (size_t) PAD6_MAX_LENGTH);
            strncpy (mPad6, v.c_str (), size);
            return (v.size () <= PAD6_MAX_LENGTH);
        }

        bool isPad6Valid () const
        {
            return (memcmp (mPad6, PAD6_NO_VALUE, sizeof (mPad6)) != 0);
        }

        void resetPad6 ()
        {
            memcpy (mPad6, PAD6_NO_VALUE, sizeof (mPad6));
        }

        string getVarText () const
        {
            return mVarText;
        }

        bool setVarText (const string& v)
        {
            mVarText = string (v);
            mVarText.resize (min ( (size_t) v.size (), (size_t) VAR_TEXT_MAX_LENGTH));
            mVarTextLen = mVarText.size ();
            return (v.size () <= VAR_TEXT_MAX_LENGTH);
        }

        bool isVarTextValid () const
        {
            return (mVarTextLen != VAR_TEXT_LEN_NO_VALUE);
        }

        void resetVarText ()
        {
            mVarTextLen = VAR_TEXT_LEN_NO_VALUE;
            mVarText = string();
        }


        // render current raw size
        size_t getRawSize () const
        {
            size_t result = mMessageHeaderOut.getRawSize()
                + mNotifHeader.getRawSize()
                + sizeof (mUserStatus)
                + sizeof (mPad3)
                + sizeof (mUsername)
                + sizeof (mVarTextLen)
                + sizeof (mPad6)
                + mVarText.size ();
            result += (8 - result) % 8;
            return result;
        }

        // serialization
        codecState serialize (void *buf, size_t len, size_t &used)
        {
            mVarTextLen = mVarText.size ();
            mMessageHeaderOut.mBodyLen = getRawSize ();
            codecState state;
            state = mMessageHeaderOut.serialize (buf, len, used);
            if (state != GW_CODEC_SUCCESS) return state;
            state = mNotifHeader.serialize (buf, len, used);
            if (state != GW_CODEC_SUCCESS) return state;
            state = eti::serialize (mUserStatus, buf, len, used);
            if (state != GW_CODEC_SUCCESS) return state;
            state = eti::serialize (mPad3, buf, len, used);
            if (state != GW_CODEC_SUCCESS) return state;
            state = eti::serialize (mUsername, buf, len, used);
            if (state != GW_CODEC_SUCCESS) return state;
            state = eti::serialize (mVarTextLen, buf, len, used);
            if (state != GW_CODEC_SUCCESS) return state;
            state = eti::serialize (mPad6, buf, len, used);
            if (state != GW_CODEC_SUCCESS) return state;
            state = eti::serialize (mVarText, VAR_TEXT_MAX_LENGTH, buf, len, used);
            if (state != GW_CODEC_SUCCESS) return state;
            size_t extraPad = mMessageHeaderOut.mBodyLen - used;
            state = eti::serialize (string (extraPad, '\0'), extraPad, buf, len, used);
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
            state = eti::deserialize (mUserStatus, buf, len, used);
            if (state != GW_CODEC_SUCCESS) return state;
            state = eti::deserialize (mPad3, buf, len, used);
            if (state != GW_CODEC_SUCCESS) return state;
            state = eti::deserialize (mUsername, buf, len, used);
            if (state != GW_CODEC_SUCCESS) return state;
            state = eti::deserialize (mVarTextLen, buf, len, used);
            if (state != GW_CODEC_SUCCESS) return state;
            state = eti::deserialize (mPad6, buf, len, used);
            if (state != GW_CODEC_SUCCESS) return state;
            state = eti::deserialize (mVarText, mVarTextLen, buf, len, used);
            if (state != GW_CODEC_SUCCESS) return state;
            mMessageHeaderOut.mBodyLen = getRawSize ();
            size_t extraPad = mMessageHeaderOut.mBodyLen - used;
            string stringPad;
            state = eti::deserialize (stringPad, extraPad, buf, len, used);
            if (state != GW_CODEC_SUCCESS) return state;
            return GW_CODEC_SUCCESS;
        }

        // string conversion
        string toString () const
        {
            stringstream sss;
            sss << "ForcedUserLogoutNotification::"
                << "[MessageHeaderOut=" << mMessageHeaderOut.toString () << "],"
                << "[NotifHeader=" << mNotifHeader.toString () << "],"
                << "[UserStatus=" << getUserStatus () << "],"
                << "[Pad3=" << getPad3 () << "],"
                << "[Username=" << getUsername () << "],"
                << "[VarTextLen=" << getVarTextLen () << "],"
                << "[Pad6=" << getPad6 () << "],"
                << "[VarText=" << getVarText () << "]";
            return sss.str();
        }
};

const int8_t xetraForcedUserLogoutNotificationPacket::USER_STATUS_MIN = 7;
const int8_t xetraForcedUserLogoutNotificationPacket::USER_STATUS_MAX = 11;
const int8_t xetraForcedUserLogoutNotificationPacket::USER_STATUS_NO_VALUE = 0xFF;
const char xetraForcedUserLogoutNotificationPacket::PAD3_NO_VALUE[3] = {0x00, 0x00, 0x00};
const size_t xetraForcedUserLogoutNotificationPacket::PAD3_MAX_LENGTH = 3;
const int32_t xetraForcedUserLogoutNotificationPacket::USERNAME_MIN = 0;
const int32_t xetraForcedUserLogoutNotificationPacket::USERNAME_MAX = 2147483647;
const int32_t xetraForcedUserLogoutNotificationPacket::USERNAME_NO_VALUE = 0xFFFFFFFF;
const int16_t xetraForcedUserLogoutNotificationPacket::VAR_TEXT_LEN_MIN = 0;
const int16_t xetraForcedUserLogoutNotificationPacket::VAR_TEXT_LEN_MAX = 2000;
const int16_t xetraForcedUserLogoutNotificationPacket::VAR_TEXT_LEN_NO_VALUE = 0xFFFF;
const char xetraForcedUserLogoutNotificationPacket::PAD6_NO_VALUE[6] = {0x00, 0x00, 0x00, 0x00, 0x00, 0x00};
const size_t xetraForcedUserLogoutNotificationPacket::PAD6_MAX_LENGTH = 6;
const size_t xetraForcedUserLogoutNotificationPacket::VAR_TEXT_MAX_LENGTH = 2000;


} // namespace neueda

#endif // XETRA_FORCEDUSERLOGOUTNOTIFICATION_PACKET_H
