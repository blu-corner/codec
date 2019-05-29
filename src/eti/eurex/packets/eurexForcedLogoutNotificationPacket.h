/*
 * Copyright 2014-2018 Neueda Ltd.
 * 
 * Generated 21/05/2019
 */
#ifndef EUREX_FORCEDLOGOUTNOTIFICATION_PACKET_H
#define EUREX_FORCEDLOGOUTNOTIFICATION_PACKET_H

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

class eurexForcedLogoutNotificationPacket
{
    public:
        // no value constants
        static const int16_t VAR_TEXT_LEN_MIN;
        static const int16_t VAR_TEXT_LEN_MAX;
        static const int16_t VAR_TEXT_LEN_NO_VALUE;
        static const char PAD6_NO_VALUE[6];
        static const size_t PAD6_MAX_LENGTH;
        static const size_t VAR_TEXT_MAX_LENGTH;

        // fields (use with care)
        eurexMessageHeaderOutCompPacket mMessageHeaderOut;
        eurexNotifHeaderCompPacket mNotifHeader;
        int16_t mVarTextLen;
        char mPad6[6];
        string mVarText;
        int mVarTextPad; // reserved for internal use

        // constructor
        eurexForcedLogoutNotificationPacket ()
        {
            mMessageHeaderOut.mTemplateID = 10012;
            mVarTextLen = VAR_TEXT_LEN_NO_VALUE;
            memcpy(mPad6, PAD6_NO_VALUE, sizeof (mPad6));
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

        const eurexNotifHeaderCompPacket& getNotifHeader () const
        {
            return mNotifHeader;
        }

        bool setNotifHeader (const eurexNotifHeaderCompPacket& v)
        {
            mNotifHeader = v;
            return true;
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
            sss << "ForcedLogoutNotification::"
                << "[MessageHeaderOut=" << mMessageHeaderOut.toString () << "],"
                << "[NotifHeader=" << mNotifHeader.toString () << "],"
                << "[VarTextLen=" << getVarTextLen () << "],"
                << "[Pad6=" << getPad6 () << "],"
                << "[VarText=" << getVarText () << "]";
            return sss.str();
        }
};

const int16_t eurexForcedLogoutNotificationPacket::VAR_TEXT_LEN_MIN = 0;
const int16_t eurexForcedLogoutNotificationPacket::VAR_TEXT_LEN_MAX = 2000;
const int16_t eurexForcedLogoutNotificationPacket::VAR_TEXT_LEN_NO_VALUE = 0xFFFF;
const char eurexForcedLogoutNotificationPacket::PAD6_NO_VALUE[6] = {0x00, 0x00, 0x00, 0x00, 0x00, 0x00};
const size_t eurexForcedLogoutNotificationPacket::PAD6_MAX_LENGTH = 6;
const size_t eurexForcedLogoutNotificationPacket::VAR_TEXT_MAX_LENGTH = 2000;


} // namespace neueda

#endif // EUREX_FORCEDLOGOUTNOTIFICATION_PACKET_H
