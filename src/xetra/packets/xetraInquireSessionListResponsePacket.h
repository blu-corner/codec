/*
 * Copyright 2014-2018 Neueda Ltd.
 * 
 * Generated 04/02/2019
 */
#ifndef XETRA_INQUIRESESSIONLISTRESPONSE_PACKET_H
#define XETRA_INQUIRESESSIONLISTRESPONSE_PACKET_H

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

class xetraInquireSessionListResponsePacket
{
    public:
        // no value constants
        static const int16_t NO_SESSIONS_MIN;
        static const int16_t NO_SESSIONS_MAX;
        static const int16_t NO_SESSIONS_NO_VALUE;
        static const char PAD6_NO_VALUE[6];
        static const size_t PAD6_MAX_LENGTH;
        static const size_t SESSIONS_GRP_MIN;
        static const size_t SESSIONS_GRP_MAX;

        // fields (use with care)
        xetraMessageHeaderOutCompPacket mMessageHeaderOut;
        xetraResponseHeaderCompPacket mResponseHeader;
        int16_t mNoSessions;
        char mPad6[6];
        vector<xetraSessionsGrpCompPacket> mSessionsGrp;

        // constructor
        xetraInquireSessionListResponsePacket ()
        {
            mMessageHeaderOut.mTemplateID = 10036;
            mNoSessions = NO_SESSIONS_NO_VALUE;
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

        const xetraResponseHeaderCompPacket& getResponseHeader () const
        {
            return mResponseHeader;
        }

        bool setResponseHeader (const xetraResponseHeaderCompPacket& v)
        {
            mResponseHeader = v;
            return true;
        }

        int16_t getNoSessions () const
        {
            return mNoSessions;
        }

        bool setNoSessions (int16_t v)
        {
            mNoSessions = v;
            return ((NO_SESSIONS_MIN <= mNoSessions && mNoSessions <= NO_SESSIONS_MAX) || mNoSessions == NO_SESSIONS_NO_VALUE);
        }

        bool isNoSessionsValid () const
        {
            return (mNoSessions != NO_SESSIONS_NO_VALUE);
        }

        void resetNoSessions ()
        {
            mNoSessions = NO_SESSIONS_NO_VALUE;
        }

        string getPad6 () const
        {
            return string (mPad6, PAD6_MAX_LENGTH);
        }

        bool setPad6 (const string& v)
        {
            size_t size = min ((size_t) v.size (), (size_t) PAD6_MAX_LENGTH);
            for (size_t i = 0; i < size; i++)
                mPad6[i] = v[i];
            memset (&mPad6[size], '\0', PAD6_MAX_LENGTH-size);
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

        const vector<xetraSessionsGrpCompPacket>& getSessionsGrp () const
        {
            return mSessionsGrp;
        }

        bool setSessionsGrp (const vector<xetraSessionsGrpCompPacket>& v)
        {
            mSessionsGrp = v;
            mNoSessions = v.size ();
            return (SESSIONS_GRP_MIN <= v.size () && v.size () <= SESSIONS_GRP_MAX);
        }


        // render current raw size
        size_t getRawSize () const
        {
            size_t result = mMessageHeaderOut.getRawSize()
                + mResponseHeader.getRawSize()
                + sizeof (mNoSessions)
                + sizeof (mPad6)
                + xetra::getRawSize (mSessionsGrp);
            return result;
        }

        // serialization
        codecState serialize (void *buf, size_t len, size_t &used)
        {
            mNoSessions = mSessionsGrp.size ();
            mMessageHeaderOut.mBodyLen = getRawSize ();
            codecState state;
            state = mMessageHeaderOut.serialize (buf, len, used);
            if (state != GW_CODEC_SUCCESS) return state;
            state = mResponseHeader.serialize (buf, len, used);
            if (state != GW_CODEC_SUCCESS) return state;
            state = xetra::serialize (mNoSessions, buf, len, used);
            if (state != GW_CODEC_SUCCESS) return state;
            state = xetra::serialize (mPad6, buf, len, used);
            if (state != GW_CODEC_SUCCESS) return state;
            for (size_t i = 0; i < mSessionsGrp.size (); i++)
            {
                state = mSessionsGrp[i].serialize (buf, len, used);
                if (state != GW_CODEC_SUCCESS) return state;
            }
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
            state = xetra::deserialize (mNoSessions, buf, len, used);
            if (state != GW_CODEC_SUCCESS) return state;
            state = xetra::deserialize (mPad6, buf, len, used);
            if (state != GW_CODEC_SUCCESS) return state;
            mSessionsGrp.resize (mNoSessions);
            for (vector<xetraSessionsGrpCompPacket>::iterator it = mSessionsGrp.begin (); it != mSessionsGrp.end (); ++it)
            {
                state = it->deserialize (buf, len, used);
                if (state != GW_CODEC_SUCCESS) return state;
            }
            mMessageHeaderOut.mBodyLen = getRawSize ();
            return GW_CODEC_SUCCESS;
        }

        // string conversion
        string toString () const
        {
            stringstream sss;
            sss << "InquireSessionListResponse::"
                << "[MessageHeaderOut=" << mMessageHeaderOut.toString () << "],"
                << "[ResponseHeader=" << mResponseHeader.toString () << "],"
                << "[NoSessions=" << getNoSessions () << "],"
                << "[Pad6=" << getPad6 () << "],"
                << "[SessionsGrp=" << xetra::toString (getSessionsGrp ()) << "]";
            return sss.str();
        }
};

const int16_t xetraInquireSessionListResponsePacket::NO_SESSIONS_MIN = 1;
const int16_t xetraInquireSessionListResponsePacket::NO_SESSIONS_MAX = 1000;
const int16_t xetraInquireSessionListResponsePacket::NO_SESSIONS_NO_VALUE = 0xFFFF;
const char xetraInquireSessionListResponsePacket::PAD6_NO_VALUE[6] = {0x00, 0x00, 0x00, 0x00, 0x00, 0x00};
const size_t xetraInquireSessionListResponsePacket::PAD6_MAX_LENGTH = 6;
const size_t xetraInquireSessionListResponsePacket::SESSIONS_GRP_MIN = 1;
const size_t xetraInquireSessionListResponsePacket::SESSIONS_GRP_MAX = 1000;


} // namespace neueda

#endif // XETRA_INQUIRESESSIONLISTRESPONSE_PACKET_H
