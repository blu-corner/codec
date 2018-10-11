/*
 * Copyright 2014-2018 Neueda Ltd.
 * 
 * Generated 11/10/2018
 */
#ifndef XETRA_INQUIREUSERRESPONSE_PACKET_H
#define XETRA_INQUIREUSERRESPONSE_PACKET_H

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

class xetraInquireUserResponsePacket
{
    public:
        // no value constants
        static const char LAST_ENTITY_PROCESSED_NO_VALUE[16];
        static const size_t LAST_ENTITY_PROCESSED_MAX_LENGTH;
        static const int16_t NO_PARTY_DETAILS_MIN;
        static const int16_t NO_PARTY_DETAILS_MAX;
        static const int16_t NO_PARTY_DETAILS_NO_VALUE;
        static const char PAD6_NO_VALUE[6];
        static const size_t PAD6_MAX_LENGTH;
        static const size_t PARTY_DETAILS_GRP_MIN;
        static const size_t PARTY_DETAILS_GRP_MAX;

        // fields (use with care)
        xetraMessageHeaderOutCompPacket mMessageHeaderOut;
        xetraResponseHeaderCompPacket mResponseHeader;
        char mLastEntityProcessed[16];
        int16_t mNoPartyDetails;
        char mPad6[6];
        vector<xetraPartyDetailsGrpCompPacket> mPartyDetailsGrp;

        // constructor
        xetraInquireUserResponsePacket ()
        {
            mMessageHeaderOut.mTemplateID = 10039;
            memcpy(mLastEntityProcessed, LAST_ENTITY_PROCESSED_NO_VALUE, sizeof (mLastEntityProcessed));
            mNoPartyDetails = NO_PARTY_DETAILS_NO_VALUE;
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

        string getLastEntityProcessed () const
        {
            return string (mLastEntityProcessed, LAST_ENTITY_PROCESSED_MAX_LENGTH);
        }

        bool setLastEntityProcessed (const string& v)
        {
            size_t size = min ((size_t) v.size (), (size_t) LAST_ENTITY_PROCESSED_MAX_LENGTH);
            for (size_t i = 0; i < size; i++)
                mLastEntityProcessed[i] = v[i];
            memset (&mLastEntityProcessed[size], '\0', LAST_ENTITY_PROCESSED_MAX_LENGTH-size);
            return (v.size () <= LAST_ENTITY_PROCESSED_MAX_LENGTH);
        }

        bool isLastEntityProcessedValid () const
        {
            return (memcmp (mLastEntityProcessed, LAST_ENTITY_PROCESSED_NO_VALUE, sizeof (mLastEntityProcessed)) != 0);
        }

        void resetLastEntityProcessed ()
        {
            memcpy (mLastEntityProcessed, LAST_ENTITY_PROCESSED_NO_VALUE, sizeof (mLastEntityProcessed));
        }

        int16_t getNoPartyDetails () const
        {
            return mNoPartyDetails;
        }

        bool setNoPartyDetails (int16_t v)
        {
            mNoPartyDetails = v;
            return ((NO_PARTY_DETAILS_MIN <= mNoPartyDetails && mNoPartyDetails <= NO_PARTY_DETAILS_MAX) || mNoPartyDetails == NO_PARTY_DETAILS_NO_VALUE);
        }

        bool isNoPartyDetailsValid () const
        {
            return (mNoPartyDetails != NO_PARTY_DETAILS_NO_VALUE);
        }

        void resetNoPartyDetails ()
        {
            mNoPartyDetails = NO_PARTY_DETAILS_NO_VALUE;
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

        const vector<xetraPartyDetailsGrpCompPacket>& getPartyDetailsGrp () const
        {
            return mPartyDetailsGrp;
        }

        bool setPartyDetailsGrp (const vector<xetraPartyDetailsGrpCompPacket>& v)
        {
            mPartyDetailsGrp = v;
            mNoPartyDetails = v.size ();
            return (PARTY_DETAILS_GRP_MIN <= v.size () && v.size () <= PARTY_DETAILS_GRP_MAX);
        }


        // render current raw size
        size_t getRawSize () const
        {
            size_t result = mMessageHeaderOut.getRawSize()
                + mResponseHeader.getRawSize()
                + sizeof (mLastEntityProcessed)
                + sizeof (mNoPartyDetails)
                + sizeof (mPad6)
                + xetra::getRawSize (mPartyDetailsGrp);
            return result;
        }

        // serialization
        codecState serialize (void *buf, size_t len, size_t &used)
        {
            mNoPartyDetails = mPartyDetailsGrp.size ();
            mMessageHeaderOut.mBodyLen = getRawSize ();
            codecState state;
            state = mMessageHeaderOut.serialize (buf, len, used);
            if (state != GW_CODEC_SUCCESS) return state;
            state = mResponseHeader.serialize (buf, len, used);
            if (state != GW_CODEC_SUCCESS) return state;
            state = xetra::serialize (mLastEntityProcessed, buf, len, used);
            if (state != GW_CODEC_SUCCESS) return state;
            state = xetra::serialize (mNoPartyDetails, buf, len, used);
            if (state != GW_CODEC_SUCCESS) return state;
            state = xetra::serialize (mPad6, buf, len, used);
            if (state != GW_CODEC_SUCCESS) return state;
            for (size_t i = 0; i < mPartyDetailsGrp.size (); i++)
            {
                state = mPartyDetailsGrp[i].serialize (buf, len, used);
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
            state = xetra::deserialize (mLastEntityProcessed, buf, len, used);
            if (state != GW_CODEC_SUCCESS) return state;
            state = xetra::deserialize (mNoPartyDetails, buf, len, used);
            if (state != GW_CODEC_SUCCESS) return state;
            state = xetra::deserialize (mPad6, buf, len, used);
            if (state != GW_CODEC_SUCCESS) return state;
            mPartyDetailsGrp.resize (mNoPartyDetails);
            for (vector<xetraPartyDetailsGrpCompPacket>::iterator it = mPartyDetailsGrp.begin (); it != mPartyDetailsGrp.end (); ++it)
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
            sss << "InquireUserResponse::"
                << "[MessageHeaderOut=" << mMessageHeaderOut.toString () << "],"
                << "[ResponseHeader=" << mResponseHeader.toString () << "],"
                << "[LastEntityProcessed=" << getLastEntityProcessed () << "],"
                << "[NoPartyDetails=" << getNoPartyDetails () << "],"
                << "[Pad6=" << getPad6 () << "],"
                << "[PartyDetailsGrp=" << xetra::toString (getPartyDetailsGrp ()) << "]";
            return sss.str();
        }
};

const char xetraInquireUserResponsePacket::LAST_ENTITY_PROCESSED_NO_VALUE[16] = {0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00};
const size_t xetraInquireUserResponsePacket::LAST_ENTITY_PROCESSED_MAX_LENGTH = 16;
const int16_t xetraInquireUserResponsePacket::NO_PARTY_DETAILS_MIN = 0;
const int16_t xetraInquireUserResponsePacket::NO_PARTY_DETAILS_MAX = 1000;
const int16_t xetraInquireUserResponsePacket::NO_PARTY_DETAILS_NO_VALUE = 0xFFFF;
const char xetraInquireUserResponsePacket::PAD6_NO_VALUE[6] = {0x00, 0x00, 0x00, 0x00, 0x00, 0x00};
const size_t xetraInquireUserResponsePacket::PAD6_MAX_LENGTH = 6;
const size_t xetraInquireUserResponsePacket::PARTY_DETAILS_GRP_MIN = 0;
const size_t xetraInquireUserResponsePacket::PARTY_DETAILS_GRP_MAX = 1000;


} // namespace neueda

#endif // XETRA_INQUIREUSERRESPONSE_PACKET_H
