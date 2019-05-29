/*
 * Copyright 2014-2018 Neueda Ltd.
 * 
 * Generated 21/05/2019
 */
#ifndef XETRA_LEGALNOTIFICATIONBROADCAST_PACKET_H
#define XETRA_LEGALNOTIFICATIONBROADCAST_PACKET_H

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

class xetraLegalNotificationBroadcastPacket
{
    public:
        // no value constants
        static const uint64_t TRANSACT_TIME_MIN;
        static const uint64_t TRANSACT_TIME_MAX;
        static const uint64_t TRANSACT_TIME_NO_VALUE;
        static const int16_t VAR_TEXT_LEN_MIN;
        static const int16_t VAR_TEXT_LEN_MAX;
        static const int16_t VAR_TEXT_LEN_NO_VALUE;
        static const int8_t USER_STATUS_MIN;
        static const int8_t USER_STATUS_MAX;
        static const int8_t USER_STATUS_NO_VALUE;
        static const char PAD5_NO_VALUE[5];
        static const size_t PAD5_MAX_LENGTH;
        static const size_t VAR_TEXT_MAX_LENGTH;

        // fields (use with care)
        xetraMessageHeaderOutCompPacket mMessageHeaderOut;
        xetraRBCHeaderCompPacket mRBCHeader;
        uint64_t mTransactTime;
        int16_t mVarTextLen;
        int8_t mUserStatus;
        char mPad5[5];
        string mVarText;
        int mVarTextPad; // reserved for internal use

        // constructor
        xetraLegalNotificationBroadcastPacket ()
        {
            mMessageHeaderOut.mTemplateID = 10037;
            mTransactTime = TRANSACT_TIME_NO_VALUE;
            mVarTextLen = VAR_TEXT_LEN_NO_VALUE;
            mUserStatus = USER_STATUS_NO_VALUE;
            memcpy(mPad5, PAD5_NO_VALUE, sizeof (mPad5));
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

        uint64_t getTransactTime () const
        {
            return mTransactTime;
        }

        bool setTransactTime (uint64_t v)
        {
            mTransactTime = v;
            return ((TRANSACT_TIME_MIN <= mTransactTime && mTransactTime <= TRANSACT_TIME_MAX) || mTransactTime == TRANSACT_TIME_NO_VALUE);
        }

        bool isTransactTimeValid () const
        {
            return (mTransactTime != TRANSACT_TIME_NO_VALUE);
        }

        void resetTransactTime ()
        {
            mTransactTime = TRANSACT_TIME_NO_VALUE;
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

        string getPad5 () const
        {
            return string (mPad5, PAD5_MAX_LENGTH);
        }

        bool setPad5 (const string& v)
        {
            memset (mPad5, '\0', sizeof (mPad5));
            size_t size = min ((size_t) v.size (), (size_t) PAD5_MAX_LENGTH);
            strncpy (mPad5, v.c_str (), size);
            return (v.size () <= PAD5_MAX_LENGTH);
        }

        bool isPad5Valid () const
        {
            return (memcmp (mPad5, PAD5_NO_VALUE, sizeof (mPad5)) != 0);
        }

        void resetPad5 ()
        {
            memcpy (mPad5, PAD5_NO_VALUE, sizeof (mPad5));
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
                + sizeof (mTransactTime)
                + sizeof (mVarTextLen)
                + sizeof (mUserStatus)
                + sizeof (mPad5)
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
            state = eti::serialize (mTransactTime, buf, len, used);
            if (state != GW_CODEC_SUCCESS) return state;
            state = eti::serialize (mVarTextLen, buf, len, used);
            if (state != GW_CODEC_SUCCESS) return state;
            state = eti::serialize (mUserStatus, buf, len, used);
            if (state != GW_CODEC_SUCCESS) return state;
            state = eti::serialize (mPad5, buf, len, used);
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
            state = mRBCHeader.deserialize (buf, len, used);
            if (state != GW_CODEC_SUCCESS) return state;
            state = eti::deserialize (mTransactTime, buf, len, used);
            if (state != GW_CODEC_SUCCESS) return state;
            state = eti::deserialize (mVarTextLen, buf, len, used);
            if (state != GW_CODEC_SUCCESS) return state;
            state = eti::deserialize (mUserStatus, buf, len, used);
            if (state != GW_CODEC_SUCCESS) return state;
            state = eti::deserialize (mPad5, buf, len, used);
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
            sss << "LegalNotificationBroadcast::"
                << "[MessageHeaderOut=" << mMessageHeaderOut.toString () << "],"
                << "[RBCHeader=" << mRBCHeader.toString () << "],"
                << "[TransactTime=" << getTransactTime () << "],"
                << "[VarTextLen=" << getVarTextLen () << "],"
                << "[UserStatus=" << getUserStatus () << "],"
                << "[Pad5=" << getPad5 () << "],"
                << "[VarText=" << getVarText () << "]";
            return sss.str();
        }
};

const uint64_t xetraLegalNotificationBroadcastPacket::TRANSACT_TIME_MIN = 0UL;
const uint64_t xetraLegalNotificationBroadcastPacket::TRANSACT_TIME_MAX = 18446744073709551614UL;
const uint64_t xetraLegalNotificationBroadcastPacket::TRANSACT_TIME_NO_VALUE = 0xFFFFFFFFFFFFFFFF;
const int16_t xetraLegalNotificationBroadcastPacket::VAR_TEXT_LEN_MIN = 0;
const int16_t xetraLegalNotificationBroadcastPacket::VAR_TEXT_LEN_MAX = 2000;
const int16_t xetraLegalNotificationBroadcastPacket::VAR_TEXT_LEN_NO_VALUE = 0xFFFF;
const int8_t xetraLegalNotificationBroadcastPacket::USER_STATUS_MIN = 7;
const int8_t xetraLegalNotificationBroadcastPacket::USER_STATUS_MAX = 11;
const int8_t xetraLegalNotificationBroadcastPacket::USER_STATUS_NO_VALUE = 0xFF;
const char xetraLegalNotificationBroadcastPacket::PAD5_NO_VALUE[5] = {0x00, 0x00, 0x00, 0x00, 0x00};
const size_t xetraLegalNotificationBroadcastPacket::PAD5_MAX_LENGTH = 5;
const size_t xetraLegalNotificationBroadcastPacket::VAR_TEXT_MAX_LENGTH = 2000;


} // namespace neueda

#endif // XETRA_LEGALNOTIFICATIONBROADCAST_PACKET_H
