/*
 * Copyright 2014-2018 Neueda Ltd.
 * 
 * Generated 21/05/2019
 */
#ifndef XETRA_INQUIREENRICHMENTRULEIDLISTRESPONSE_PACKET_H
#define XETRA_INQUIREENRICHMENTRULEIDLISTRESPONSE_PACKET_H

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

class xetraInquireEnrichmentRuleIDListResponsePacket
{
    public:
        // no value constants
        static const char LAST_ENTITY_PROCESSED_NO_VALUE[16];
        static const size_t LAST_ENTITY_PROCESSED_MAX_LENGTH;
        static const int16_t NO_ENRICHMENT_RULES_MIN;
        static const int16_t NO_ENRICHMENT_RULES_MAX;
        static const int16_t NO_ENRICHMENT_RULES_NO_VALUE;
        static const char PAD6_NO_VALUE[6];
        static const size_t PAD6_MAX_LENGTH;
        static const size_t ENRICHMENT_RULES_GRP_MIN;
        static const size_t ENRICHMENT_RULES_GRP_MAX;

        // fields (use with care)
        xetraMessageHeaderOutCompPacket mMessageHeaderOut;
        xetraResponseHeaderCompPacket mResponseHeader;
        char mLastEntityProcessed[16];
        int16_t mNoEnrichmentRules;
        char mPad6[6];
        vector<xetraEnrichmentRulesGrpCompPacket> mEnrichmentRulesGrp;

        // constructor
        xetraInquireEnrichmentRuleIDListResponsePacket ()
        {
            mMessageHeaderOut.mTemplateID = 10041;
            memcpy(mLastEntityProcessed, LAST_ENTITY_PROCESSED_NO_VALUE, sizeof (mLastEntityProcessed));
            mNoEnrichmentRules = NO_ENRICHMENT_RULES_NO_VALUE;
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

        int16_t getNoEnrichmentRules () const
        {
            return mNoEnrichmentRules;
        }

        bool setNoEnrichmentRules (int16_t v)
        {
            mNoEnrichmentRules = v;
            return ((NO_ENRICHMENT_RULES_MIN <= mNoEnrichmentRules && mNoEnrichmentRules <= NO_ENRICHMENT_RULES_MAX) || mNoEnrichmentRules == NO_ENRICHMENT_RULES_NO_VALUE);
        }

        bool isNoEnrichmentRulesValid () const
        {
            return (mNoEnrichmentRules != NO_ENRICHMENT_RULES_NO_VALUE);
        }

        void resetNoEnrichmentRules ()
        {
            mNoEnrichmentRules = NO_ENRICHMENT_RULES_NO_VALUE;
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

        const vector<xetraEnrichmentRulesGrpCompPacket>& getEnrichmentRulesGrp () const
        {
            return mEnrichmentRulesGrp;
        }

        bool setEnrichmentRulesGrp (const vector<xetraEnrichmentRulesGrpCompPacket>& v)
        {
            mEnrichmentRulesGrp = v;
            mNoEnrichmentRules = v.size ();
            return (ENRICHMENT_RULES_GRP_MIN <= v.size () && v.size () <= ENRICHMENT_RULES_GRP_MAX);
        }


        // render current raw size
        size_t getRawSize () const
        {
            size_t result = mMessageHeaderOut.getRawSize()
                + mResponseHeader.getRawSize()
                + sizeof (mLastEntityProcessed)
                + sizeof (mNoEnrichmentRules)
                + sizeof (mPad6)
                + eti::getRawSize (mEnrichmentRulesGrp);
            return result;
        }

        // serialization
        codecState serialize (void *buf, size_t len, size_t &used)
        {
            mNoEnrichmentRules = mEnrichmentRulesGrp.size ();
            mMessageHeaderOut.mBodyLen = getRawSize ();
            codecState state;
            state = mMessageHeaderOut.serialize (buf, len, used);
            if (state != GW_CODEC_SUCCESS) return state;
            state = mResponseHeader.serialize (buf, len, used);
            if (state != GW_CODEC_SUCCESS) return state;
            state = eti::serialize (mLastEntityProcessed, buf, len, used);
            if (state != GW_CODEC_SUCCESS) return state;
            state = eti::serialize (mNoEnrichmentRules, buf, len, used);
            if (state != GW_CODEC_SUCCESS) return state;
            state = eti::serialize (mPad6, buf, len, used);
            if (state != GW_CODEC_SUCCESS) return state;
            for (size_t i = 0; i < mEnrichmentRulesGrp.size (); i++)
            {
                state = mEnrichmentRulesGrp[i].serialize (buf, len, used);
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
            state = eti::deserialize (mLastEntityProcessed, buf, len, used);
            if (state != GW_CODEC_SUCCESS) return state;
            state = eti::deserialize (mNoEnrichmentRules, buf, len, used);
            if (state != GW_CODEC_SUCCESS) return state;
            state = eti::deserialize (mPad6, buf, len, used);
            if (state != GW_CODEC_SUCCESS) return state;
            mEnrichmentRulesGrp.resize (mNoEnrichmentRules);
            for (vector<xetraEnrichmentRulesGrpCompPacket>::iterator it = mEnrichmentRulesGrp.begin (); it != mEnrichmentRulesGrp.end (); ++it)
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
            sss << "InquireEnrichmentRuleIDListResponse::"
                << "[MessageHeaderOut=" << mMessageHeaderOut.toString () << "],"
                << "[ResponseHeader=" << mResponseHeader.toString () << "],"
                << "[LastEntityProcessed=" << getLastEntityProcessed () << "],"
                << "[NoEnrichmentRules=" << getNoEnrichmentRules () << "],"
                << "[Pad6=" << getPad6 () << "],"
                << "[EnrichmentRulesGrp=" << eti::toString (getEnrichmentRulesGrp ()) << "]";
            return sss.str();
        }
};

const char xetraInquireEnrichmentRuleIDListResponsePacket::LAST_ENTITY_PROCESSED_NO_VALUE[16] = {0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00};
const size_t xetraInquireEnrichmentRuleIDListResponsePacket::LAST_ENTITY_PROCESSED_MAX_LENGTH = 16;
const int16_t xetraInquireEnrichmentRuleIDListResponsePacket::NO_ENRICHMENT_RULES_MIN = 0;
const int16_t xetraInquireEnrichmentRuleIDListResponsePacket::NO_ENRICHMENT_RULES_MAX = 400;
const int16_t xetraInquireEnrichmentRuleIDListResponsePacket::NO_ENRICHMENT_RULES_NO_VALUE = 0xFFFF;
const char xetraInquireEnrichmentRuleIDListResponsePacket::PAD6_NO_VALUE[6] = {0x00, 0x00, 0x00, 0x00, 0x00, 0x00};
const size_t xetraInquireEnrichmentRuleIDListResponsePacket::PAD6_MAX_LENGTH = 6;
const size_t xetraInquireEnrichmentRuleIDListResponsePacket::ENRICHMENT_RULES_GRP_MIN = 0;
const size_t xetraInquireEnrichmentRuleIDListResponsePacket::ENRICHMENT_RULES_GRP_MAX = 400;


} // namespace neueda

#endif // XETRA_INQUIREENRICHMENTRULEIDLISTRESPONSE_PACKET_H
