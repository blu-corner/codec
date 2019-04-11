/*
 * Copyright 2014-2018 Neueda Ltd.
 * 
 * Generated 11/04/2019
 */
#ifndef XETRA_NEWSBROADCAST_PACKET_H
#define XETRA_NEWSBROADCAST_PACKET_H

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

class xetraNewsBroadcastPacket
{
    public:
        // no value constants
        static const uint64_t ORIG_TIME_MIN;
        static const uint64_t ORIG_TIME_MAX;
        static const uint64_t ORIG_TIME_NO_VALUE;
        static const int16_t VAR_TEXT_LEN_MIN;
        static const int16_t VAR_TEXT_LEN_MAX;
        static const int16_t VAR_TEXT_LEN_NO_VALUE;
        static const char HEADLINE_NO_VALUE[256];
        static const size_t HEADLINE_MAX_LENGTH;
        static const char PAD6_NO_VALUE[6];
        static const size_t PAD6_MAX_LENGTH;
        static const size_t VAR_TEXT_MAX_LENGTH;

        // fields (use with care)
        xetraMessageHeaderOutCompPacket mMessageHeaderOut;
        xetraRBCHeaderCompPacket mRBCHeader;
        uint64_t mOrigTime;
        int16_t mVarTextLen;
        char mHeadline[256];
        char mPad6[6];
        string mVarText;
        int mVarTextPad; // reserved for internal use

        // constructor
        xetraNewsBroadcastPacket ()
        {
            mMessageHeaderOut.mTemplateID = 10031;
            mOrigTime = ORIG_TIME_NO_VALUE;
            mVarTextLen = VAR_TEXT_LEN_NO_VALUE;
            memcpy(mHeadline, HEADLINE_NO_VALUE, sizeof (mHeadline));
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

        const xetraRBCHeaderCompPacket& getRBCHeader () const
        {
            return mRBCHeader;
        }

        bool setRBCHeader (const xetraRBCHeaderCompPacket& v)
        {
            mRBCHeader = v;
            return true;
        }

        uint64_t getOrigTime () const
        {
            return mOrigTime;
        }

        bool setOrigTime (uint64_t v)
        {
            mOrigTime = v;
            return ((ORIG_TIME_MIN <= mOrigTime && mOrigTime <= ORIG_TIME_MAX) || mOrigTime == ORIG_TIME_NO_VALUE);
        }

        bool isOrigTimeValid () const
        {
            return (mOrigTime != ORIG_TIME_NO_VALUE);
        }

        void resetOrigTime ()
        {
            mOrigTime = ORIG_TIME_NO_VALUE;
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

        string getHeadline () const
        {
            return string (mHeadline, HEADLINE_MAX_LENGTH);
        }

        bool setHeadline (const string& v)
        {
            memset (mHeadline, '\0', sizeof (mHeadline));
            size_t size = min ((size_t) v.size (), (size_t) HEADLINE_MAX_LENGTH);
            strncpy (mHeadline, v.c_str (), size);
            return (v.size () <= HEADLINE_MAX_LENGTH);
        }

        bool isHeadlineValid () const
        {
            return (memcmp (mHeadline, HEADLINE_NO_VALUE, sizeof (mHeadline)) != 0);
        }

        void resetHeadline ()
        {
            memcpy (mHeadline, HEADLINE_NO_VALUE, sizeof (mHeadline));
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
                + mRBCHeader.getRawSize()
                + sizeof (mOrigTime)
                + sizeof (mVarTextLen)
                + sizeof (mHeadline)
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
            state = mRBCHeader.serialize (buf, len, used);
            if (state != GW_CODEC_SUCCESS) return state;
            state = xetra::serialize (mOrigTime, buf, len, used);
            if (state != GW_CODEC_SUCCESS) return state;
            state = xetra::serialize (mVarTextLen, buf, len, used);
            if (state != GW_CODEC_SUCCESS) return state;
            state = xetra::serialize (mHeadline, buf, len, used);
            if (state != GW_CODEC_SUCCESS) return state;
            state = xetra::serialize (mPad6, buf, len, used);
            if (state != GW_CODEC_SUCCESS) return state;
            state = xetra::serialize (mVarText, VAR_TEXT_MAX_LENGTH, buf, len, used);
            if (state != GW_CODEC_SUCCESS) return state;
            size_t extraPad = mMessageHeaderOut.mBodyLen - used;
            state = xetra::serialize (string (extraPad, '\0'), extraPad, buf, len, used);
            if (state != GW_CODEC_SUCCESS) return state;
            return GW_CODEC_SUCCESS;
        }

        // deserialization
        codecState deserialize (const void *buf, size_t len, size_t &used)
        {
            codecState state;
            state = mMessageHeaderOut.deserialize (buf, len, used);
            if (state != GW_CODEC_SUCCESS) return state;
            state = mRBCHeader.deserialize (buf, len, used);
            if (state != GW_CODEC_SUCCESS) return state;
            state = xetra::deserialize (mOrigTime, buf, len, used);
            if (state != GW_CODEC_SUCCESS) return state;
            state = xetra::deserialize (mVarTextLen, buf, len, used);
            if (state != GW_CODEC_SUCCESS) return state;
            state = xetra::deserialize (mHeadline, buf, len, used);
            if (state != GW_CODEC_SUCCESS) return state;
            state = xetra::deserialize (mPad6, buf, len, used);
            if (state != GW_CODEC_SUCCESS) return state;
            state = xetra::deserialize (mVarText, mVarTextLen, buf, len, used);
            if (state != GW_CODEC_SUCCESS) return state;
            mMessageHeaderOut.mBodyLen = getRawSize ();
            size_t extraPad = mMessageHeaderOut.mBodyLen - used;
            string stringPad;
            state = xetra::deserialize (stringPad, extraPad, buf, len, used);
            if (state != GW_CODEC_SUCCESS) return state;
            return GW_CODEC_SUCCESS;
        }

        // string conversion
        string toString () const
        {
            stringstream sss;
            sss << "NewsBroadcast::"
                << "[MessageHeaderOut=" << mMessageHeaderOut.toString () << "],"
                << "[RBCHeader=" << mRBCHeader.toString () << "],"
                << "[OrigTime=" << getOrigTime () << "],"
                << "[VarTextLen=" << getVarTextLen () << "],"
                << "[Headline=" << getHeadline () << "],"
                << "[Pad6=" << getPad6 () << "],"
                << "[VarText=" << getVarText () << "]";
            return sss.str();
        }
};

const uint64_t xetraNewsBroadcastPacket::ORIG_TIME_MIN = 0UL;
const uint64_t xetraNewsBroadcastPacket::ORIG_TIME_MAX = 18446744073709551614UL;
const uint64_t xetraNewsBroadcastPacket::ORIG_TIME_NO_VALUE = 0xFFFFFFFFFFFFFFFF;
const int16_t xetraNewsBroadcastPacket::VAR_TEXT_LEN_MIN = 0;
const int16_t xetraNewsBroadcastPacket::VAR_TEXT_LEN_MAX = 2000;
const int16_t xetraNewsBroadcastPacket::VAR_TEXT_LEN_NO_VALUE = 0xFFFF;
const char xetraNewsBroadcastPacket::HEADLINE_NO_VALUE[256] = {0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00};
const size_t xetraNewsBroadcastPacket::HEADLINE_MAX_LENGTH = 256;
const char xetraNewsBroadcastPacket::PAD6_NO_VALUE[6] = {0x00, 0x00, 0x00, 0x00, 0x00, 0x00};
const size_t xetraNewsBroadcastPacket::PAD6_MAX_LENGTH = 6;
const size_t xetraNewsBroadcastPacket::VAR_TEXT_MAX_LENGTH = 2000;


} // namespace neueda

#endif // XETRA_NEWSBROADCAST_PACKET_H
