/*
 * Copyright 2014-2018 Neueda Ltd.
 * 
 * Generated 08/03/2020
 */
#ifndef XETRA_INQUIREENRICHMENTRULEIDLISTREQUEST_PACKET_H
#define XETRA_INQUIREENRICHMENTRULEIDLISTREQUEST_PACKET_H

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

class xetraInquireEnrichmentRuleIDListRequestPacket
{
    public:
        // no value constants
        static const char LAST_ENTITY_PROCESSED_NO_VALUE[16];
        static const size_t LAST_ENTITY_PROCESSED_MAX_LENGTH;

        // fields (use with care)
        xetraMessageHeaderInCompPacket mMessageHeaderIn;
        xetraRequestHeaderCompPacket mRequestHeader;
        char mLastEntityProcessed[16];

        // constructor
        xetraInquireEnrichmentRuleIDListRequestPacket ()
        {
            mMessageHeaderIn.mTemplateID = 10040;
            memcpy(mLastEntityProcessed, LAST_ENTITY_PROCESSED_NO_VALUE, sizeof (mLastEntityProcessed));
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

        string getLastEntityProcessed () const
        {
            return string (mLastEntityProcessed, LAST_ENTITY_PROCESSED_MAX_LENGTH);
        }

        bool setLastEntityProcessed (const string& v)
        {
            memset (mLastEntityProcessed, '\0', sizeof (mLastEntityProcessed));
            size_t size = min ((size_t) v.size (), (size_t) LAST_ENTITY_PROCESSED_MAX_LENGTH);
            strncpy (mLastEntityProcessed, v.c_str (), size);
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


        // render current raw size
        size_t getRawSize () const
        {
            size_t result = mMessageHeaderIn.getRawSize()
                + mRequestHeader.getRawSize()
                + sizeof (mLastEntityProcessed);
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
            state = eti::serialize (mLastEntityProcessed, buf, len, used);
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
            state = eti::deserialize (mLastEntityProcessed, buf, len, used);
            if (state != GW_CODEC_SUCCESS) return state;
            mMessageHeaderIn.mBodyLen = getRawSize ();
            return GW_CODEC_SUCCESS;
        }

        // string conversion
        string toString () const
        {
            stringstream sss;
            sss << "InquireEnrichmentRuleIDListRequest::"
                << "[MessageHeaderIn=" << mMessageHeaderIn.toString () << "],"
                << "[RequestHeader=" << mRequestHeader.toString () << "],"
                << "[LastEntityProcessed=" << getLastEntityProcessed () << "]";
            return sss.str();
        }
};

const char xetraInquireEnrichmentRuleIDListRequestPacket::LAST_ENTITY_PROCESSED_NO_VALUE[16] = {0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00};
const size_t xetraInquireEnrichmentRuleIDListRequestPacket::LAST_ENTITY_PROCESSED_MAX_LENGTH = 16;


} // namespace neueda

#endif // XETRA_INQUIREENRICHMENTRULEIDLISTREQUEST_PACKET_H
