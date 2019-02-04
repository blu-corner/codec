/*
 * Copyright 2014-2018 Neueda Ltd.
 * 
 * Generated 04/02/2019
 */
#ifndef XETRA_USERLOGOUTREQUEST_PACKET_H
#define XETRA_USERLOGOUTREQUEST_PACKET_H

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

class xetraUserLogoutRequestPacket
{
    public:
        // no value constants
        static const int32_t USERNAME_MIN;
        static const int32_t USERNAME_MAX;
        static const int32_t USERNAME_NO_VALUE;
        static const char PAD4_NO_VALUE[4];
        static const size_t PAD4_MAX_LENGTH;

        // fields (use with care)
        xetraMessageHeaderInCompPacket mMessageHeaderIn;
        xetraRequestHeaderCompPacket mRequestHeader;
        int32_t mUsername;
        char mPad4[4];

        // constructor
        xetraUserLogoutRequestPacket ()
        {
            mMessageHeaderIn.mTemplateID = 10029;
            mUsername = USERNAME_NO_VALUE;
            memcpy(mPad4, PAD4_NO_VALUE, sizeof (mPad4));
        }

        // getters & setters
        const xetraMessageHeaderInCompPacket& getMessageHeaderIn () const
        {
            return mMessageHeaderIn;
        }

        bool setMessageHeaderIn (const xetraMessageHeaderInCompPacket& v)
        {
            mMessageHeaderIn = v;
            return true;
        }

        const xetraRequestHeaderCompPacket& getRequestHeader () const
        {
            return mRequestHeader;
        }

        bool setRequestHeader (const xetraRequestHeaderCompPacket& v)
        {
            mRequestHeader = v;
            return true;
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

        string getPad4 () const
        {
            return string (mPad4, PAD4_MAX_LENGTH);
        }

        bool setPad4 (const string& v)
        {
            size_t size = min ((size_t) v.size (), (size_t) PAD4_MAX_LENGTH);
            for (size_t i = 0; i < size; i++)
                mPad4[i] = v[i];
            memset (&mPad4[size], '\0', PAD4_MAX_LENGTH-size);
            return (v.size () <= PAD4_MAX_LENGTH);
        }

        bool isPad4Valid () const
        {
            return (memcmp (mPad4, PAD4_NO_VALUE, sizeof (mPad4)) != 0);
        }

        void resetPad4 ()
        {
            memcpy (mPad4, PAD4_NO_VALUE, sizeof (mPad4));
        }


        // render current raw size
        size_t getRawSize () const
        {
            size_t result = mMessageHeaderIn.getRawSize()
                + mRequestHeader.getRawSize()
                + sizeof (mUsername)
                + sizeof (mPad4);
            return result;
        }

        // serialization
        codecState serialize (void *buf, size_t len, size_t &used)
        {
            mMessageHeaderIn.mBodyLen = getRawSize ();
            codecState state;
            state = mMessageHeaderIn.serialize (buf, len, used);
            if (state != GW_CODEC_SUCCESS) return state;
            state = mRequestHeader.serialize (buf, len, used);
            if (state != GW_CODEC_SUCCESS) return state;
            state = xetra::serialize (mUsername, buf, len, used);
            if (state != GW_CODEC_SUCCESS) return state;
            state = xetra::serialize (mPad4, buf, len, used);
            if (state != GW_CODEC_SUCCESS) return state;
            return GW_CODEC_SUCCESS;
        }

        // deserialization
        codecState deserialize (const void *buf, size_t len, size_t &used)
        {
            codecState state;
            state = mMessageHeaderIn.deserialize (buf, len, used);
            if (state != GW_CODEC_SUCCESS) return state;
            state = mRequestHeader.deserialize (buf, len, used);
            if (state != GW_CODEC_SUCCESS) return state;
            state = xetra::deserialize (mUsername, buf, len, used);
            if (state != GW_CODEC_SUCCESS) return state;
            state = xetra::deserialize (mPad4, buf, len, used);
            if (state != GW_CODEC_SUCCESS) return state;
            mMessageHeaderIn.mBodyLen = getRawSize ();
            return GW_CODEC_SUCCESS;
        }

        // string conversion
        string toString () const
        {
            stringstream sss;
            sss << "UserLogoutRequest::"
                << "[MessageHeaderIn=" << mMessageHeaderIn.toString () << "],"
                << "[RequestHeader=" << mRequestHeader.toString () << "],"
                << "[Username=" << getUsername () << "],"
                << "[Pad4=" << getPad4 () << "]";
            return sss.str();
        }
};

const int32_t xetraUserLogoutRequestPacket::USERNAME_MIN = 0;
const int32_t xetraUserLogoutRequestPacket::USERNAME_MAX = 2147483647;
const int32_t xetraUserLogoutRequestPacket::USERNAME_NO_VALUE = 0xFFFFFFFF;
const char xetraUserLogoutRequestPacket::PAD4_NO_VALUE[4] = {0x00, 0x00, 0x00, 0x00};
const size_t xetraUserLogoutRequestPacket::PAD4_MAX_LENGTH = 4;


} // namespace neueda

#endif // XETRA_USERLOGOUTREQUEST_PACKET_H
