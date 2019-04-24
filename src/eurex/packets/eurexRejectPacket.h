/*
 * Copyright 2014-2018 Neueda Ltd.
 * 
 * Generated 24/04/2019
 */
#ifndef EUREX_REJECT_PACKET_H
#define EUREX_REJECT_PACKET_H

#include <string>
#include <vector>
#include <sstream>
#include <cstddef>
#include <stdint.h>
#include "eurexPackets.h"
#include "eurexPacketUtils.h"

namespace neueda
{

using namespace std;

class eurexRejectPacket
{
    public:
        // no value constants
        static const uint32_t SESSION_REJECT_REASON_MIN;
        static const uint32_t SESSION_REJECT_REASON_MAX;
        static const uint32_t SESSION_REJECT_REASON_NO_VALUE;
        static const int16_t VAR_TEXT_LEN_MIN;
        static const int16_t VAR_TEXT_LEN_MAX;
        static const int16_t VAR_TEXT_LEN_NO_VALUE;
        static const int8_t SESSION_STATUS_MIN;
        static const int8_t SESSION_STATUS_MAX;
        static const int8_t SESSION_STATUS_NO_VALUE;
        static const char PAD1_NO_VALUE[1];
        static const size_t PAD1_MAX_LENGTH;
        static const size_t VAR_TEXT_MAX_LENGTH;

        // fields (use with care)
        eurexMessageHeaderOutCompPacket mMessageHeaderOut;
        eurexNRResponseHeaderMECompPacket mNRResponseHeaderME;
        uint32_t mSessionRejectReason;
        int16_t mVarTextLen;
        int8_t mSessionStatus;
        char mPad1[1];
        string mVarText;
        int mVarTextPad; // reserved for internal use

        // constructor
        eurexRejectPacket ()
        {
            mMessageHeaderOut.mTemplateID = 10010;
            mSessionRejectReason = SESSION_REJECT_REASON_NO_VALUE;
            mVarTextLen = VAR_TEXT_LEN_NO_VALUE;
            mSessionStatus = SESSION_STATUS_NO_VALUE;
            memcpy(mPad1, PAD1_NO_VALUE, sizeof (mPad1));
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

        const eurexNRResponseHeaderMECompPacket& getNRResponseHeaderME () const
        {
            return mNRResponseHeaderME;
        }

        bool setNRResponseHeaderME (const eurexNRResponseHeaderMECompPacket& v)
        {
            mNRResponseHeaderME = v;
            return true;
        }

        uint32_t getSessionRejectReason () const
        {
            return mSessionRejectReason;
        }

        bool setSessionRejectReason (uint32_t v)
        {
            mSessionRejectReason = v;
            return ((SESSION_REJECT_REASON_MIN <= mSessionRejectReason && mSessionRejectReason <= SESSION_REJECT_REASON_MAX) || mSessionRejectReason == SESSION_REJECT_REASON_NO_VALUE);
        }

        bool isSessionRejectReasonValid () const
        {
            return (mSessionRejectReason != SESSION_REJECT_REASON_NO_VALUE);
        }

        void resetSessionRejectReason ()
        {
            mSessionRejectReason = SESSION_REJECT_REASON_NO_VALUE;
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

        int8_t getSessionStatus () const
        {
            return mSessionStatus;
        }

        bool setSessionStatus (int8_t v)
        {
            mSessionStatus = v;
            return ((SESSION_STATUS_MIN <= mSessionStatus && mSessionStatus <= SESSION_STATUS_MAX) || mSessionStatus == SESSION_STATUS_NO_VALUE);
        }

        bool isSessionStatusValid () const
        {
            return (mSessionStatus != SESSION_STATUS_NO_VALUE);
        }

        void resetSessionStatus ()
        {
            mSessionStatus = SESSION_STATUS_NO_VALUE;
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
                + mNRResponseHeaderME.getRawSize()
                + sizeof (mSessionRejectReason)
                + sizeof (mVarTextLen)
                + sizeof (mSessionStatus)
                + sizeof (mPad1)
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
            state = mNRResponseHeaderME.serialize (buf, len, used);
            if (state != GW_CODEC_SUCCESS) return state;
            state = eurex::serialize (mSessionRejectReason, buf, len, used);
            if (state != GW_CODEC_SUCCESS) return state;
            state = eurex::serialize (mVarTextLen, buf, len, used);
            if (state != GW_CODEC_SUCCESS) return state;
            state = eurex::serialize (mSessionStatus, buf, len, used);
            if (state != GW_CODEC_SUCCESS) return state;
            state = eurex::serialize (mPad1, buf, len, used);
            if (state != GW_CODEC_SUCCESS) return state;
            state = eurex::serialize (mVarText, VAR_TEXT_MAX_LENGTH, buf, len, used);
            if (state != GW_CODEC_SUCCESS) return state;
            size_t extraPad = mMessageHeaderOut.mBodyLen - used;
            state = eurex::serialize (string (extraPad, '\0'), extraPad, buf, len, used);
            if (state != GW_CODEC_SUCCESS) return state;
            return GW_CODEC_SUCCESS;
        }

        // deserialization
        codecState deserialize (const void *buf, size_t len, size_t &used)
        {
            codecState state;
            state = mMessageHeaderOut.deserialize (buf, len, used);
            if (state != GW_CODEC_SUCCESS) return state;
            state = mNRResponseHeaderME.deserialize (buf, len, used);
            if (state != GW_CODEC_SUCCESS) return state;
            state = eurex::deserialize (mSessionRejectReason, buf, len, used);
            if (state != GW_CODEC_SUCCESS) return state;
            state = eurex::deserialize (mVarTextLen, buf, len, used);
            if (state != GW_CODEC_SUCCESS) return state;
            state = eurex::deserialize (mSessionStatus, buf, len, used);
            if (state != GW_CODEC_SUCCESS) return state;
            state = eurex::deserialize (mPad1, buf, len, used);
            if (state != GW_CODEC_SUCCESS) return state;
            state = eurex::deserialize (mVarText, mVarTextLen, buf, len, used);
            if (state != GW_CODEC_SUCCESS) return state;
            mMessageHeaderOut.mBodyLen = getRawSize ();
            size_t extraPad = mMessageHeaderOut.mBodyLen - used;
            string stringPad;
            state = eurex::deserialize (stringPad, extraPad, buf, len, used);
            if (state != GW_CODEC_SUCCESS) return state;
            return GW_CODEC_SUCCESS;
        }

        // string conversion
        string toString () const
        {
            stringstream sss;
            sss << "Reject::"
                << "[MessageHeaderOut=" << mMessageHeaderOut.toString () << "],"
                << "[NRResponseHeaderME=" << mNRResponseHeaderME.toString () << "],"
                << "[SessionRejectReason=" << getSessionRejectReason () << "],"
                << "[VarTextLen=" << getVarTextLen () << "],"
                << "[SessionStatus=" << getSessionStatus () << "],"
                << "[Pad1=" << getPad1 () << "],"
                << "[VarText=" << getVarText () << "]";
            return sss.str();
        }
};

const uint32_t eurexRejectPacket::SESSION_REJECT_REASON_MIN = 0;
const uint32_t eurexRejectPacket::SESSION_REJECT_REASON_MAX = 4294967294;
const uint32_t eurexRejectPacket::SESSION_REJECT_REASON_NO_VALUE = 0xFFFFFFFF;
const int16_t eurexRejectPacket::VAR_TEXT_LEN_MIN = 0;
const int16_t eurexRejectPacket::VAR_TEXT_LEN_MAX = 2000;
const int16_t eurexRejectPacket::VAR_TEXT_LEN_NO_VALUE = 0xFFFF;
const int8_t eurexRejectPacket::SESSION_STATUS_MIN = 0;
const int8_t eurexRejectPacket::SESSION_STATUS_MAX = 4;
const int8_t eurexRejectPacket::SESSION_STATUS_NO_VALUE = 0xFF;
const char eurexRejectPacket::PAD1_NO_VALUE[1] = {0x00};
const size_t eurexRejectPacket::PAD1_MAX_LENGTH = 1;
const size_t eurexRejectPacket::VAR_TEXT_MAX_LENGTH = 2000;


} // namespace neueda

#endif // EUREX_REJECT_PACKET_H
