/*
 * Copyright 2014-2018 Neueda Ltd.
 * 
 * Generated 04/02/2019
 */
#ifndef XETRA_ENRICHMENTRULESGRPCOMP_PACKET_H
#define XETRA_ENRICHMENTRULESGRPCOMP_PACKET_H

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

class xetraEnrichmentRulesGrpCompPacket
{
    public:
        // no value constants
        static const int16_t ENRICHMENT_RULE_ID_MIN;
        static const int16_t ENRICHMENT_RULE_ID_MAX;
        static const int16_t ENRICHMENT_RULE_ID_NO_VALUE;
        static const char FREE_TEXT1_NO_VALUE[12];
        static const size_t FREE_TEXT1_MAX_LENGTH;
        static const char FREE_TEXT2_NO_VALUE[12];
        static const size_t FREE_TEXT2_MAX_LENGTH;
        static const char FREE_TEXT4_NO_VALUE[16];
        static const size_t FREE_TEXT4_MAX_LENGTH;
        static const char PAD6_NO_VALUE[6];
        static const size_t PAD6_MAX_LENGTH;

        // fields (use with care)
        int16_t mEnrichmentRuleID;
        char mFreeText1[12];
        char mFreeText2[12];
        char mFreeText4[16];
        char mPad6[6];

        // constructor
        xetraEnrichmentRulesGrpCompPacket ()
        {
            mEnrichmentRuleID = ENRICHMENT_RULE_ID_NO_VALUE;
            memcpy(mFreeText1, FREE_TEXT1_NO_VALUE, sizeof (mFreeText1));
            memcpy(mFreeText2, FREE_TEXT2_NO_VALUE, sizeof (mFreeText2));
            memcpy(mFreeText4, FREE_TEXT4_NO_VALUE, sizeof (mFreeText4));
            memcpy(mPad6, PAD6_NO_VALUE, sizeof (mPad6));
        }

        // getters & setters
        int16_t getEnrichmentRuleID () const
        {
            return mEnrichmentRuleID;
        }

        bool setEnrichmentRuleID (int16_t v)
        {
            mEnrichmentRuleID = v;
            return ((ENRICHMENT_RULE_ID_MIN <= mEnrichmentRuleID && mEnrichmentRuleID <= ENRICHMENT_RULE_ID_MAX) || mEnrichmentRuleID == ENRICHMENT_RULE_ID_NO_VALUE);
        }

        bool isEnrichmentRuleIDValid () const
        {
            return (mEnrichmentRuleID != ENRICHMENT_RULE_ID_NO_VALUE);
        }

        void resetEnrichmentRuleID ()
        {
            mEnrichmentRuleID = ENRICHMENT_RULE_ID_NO_VALUE;
        }

        string getFreeText1 () const
        {
            return string (mFreeText1, FREE_TEXT1_MAX_LENGTH);
        }

        bool setFreeText1 (const string& v)
        {
            size_t size = min ((size_t) v.size (), (size_t) FREE_TEXT1_MAX_LENGTH);
            for (size_t i = 0; i < size; i++)
                mFreeText1[i] = v[i];
            memset (&mFreeText1[size], '\0', FREE_TEXT1_MAX_LENGTH-size);
            return (v.size () <= FREE_TEXT1_MAX_LENGTH);
        }

        bool isFreeText1Valid () const
        {
            return (memcmp (mFreeText1, FREE_TEXT1_NO_VALUE, sizeof (mFreeText1)) != 0);
        }

        void resetFreeText1 ()
        {
            memcpy (mFreeText1, FREE_TEXT1_NO_VALUE, sizeof (mFreeText1));
        }

        string getFreeText2 () const
        {
            return string (mFreeText2, FREE_TEXT2_MAX_LENGTH);
        }

        bool setFreeText2 (const string& v)
        {
            size_t size = min ((size_t) v.size (), (size_t) FREE_TEXT2_MAX_LENGTH);
            for (size_t i = 0; i < size; i++)
                mFreeText2[i] = v[i];
            memset (&mFreeText2[size], '\0', FREE_TEXT2_MAX_LENGTH-size);
            return (v.size () <= FREE_TEXT2_MAX_LENGTH);
        }

        bool isFreeText2Valid () const
        {
            return (memcmp (mFreeText2, FREE_TEXT2_NO_VALUE, sizeof (mFreeText2)) != 0);
        }

        void resetFreeText2 ()
        {
            memcpy (mFreeText2, FREE_TEXT2_NO_VALUE, sizeof (mFreeText2));
        }

        string getFreeText4 () const
        {
            return string (mFreeText4, FREE_TEXT4_MAX_LENGTH);
        }

        bool setFreeText4 (const string& v)
        {
            size_t size = min ((size_t) v.size (), (size_t) FREE_TEXT4_MAX_LENGTH);
            for (size_t i = 0; i < size; i++)
                mFreeText4[i] = v[i];
            memset (&mFreeText4[size], '\0', FREE_TEXT4_MAX_LENGTH-size);
            return (v.size () <= FREE_TEXT4_MAX_LENGTH);
        }

        bool isFreeText4Valid () const
        {
            return (memcmp (mFreeText4, FREE_TEXT4_NO_VALUE, sizeof (mFreeText4)) != 0);
        }

        void resetFreeText4 ()
        {
            memcpy (mFreeText4, FREE_TEXT4_NO_VALUE, sizeof (mFreeText4));
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


        // render current raw size
        size_t getRawSize () const
        {
            size_t result = sizeof (mEnrichmentRuleID)
                + sizeof (mFreeText1)
                + sizeof (mFreeText2)
                + sizeof (mFreeText4)
                + sizeof (mPad6);
            return result;
        }

        // serialization
        codecState serialize (void *buf, size_t len, size_t &used)
        {
            codecState state;
            state = xetra::serialize (mEnrichmentRuleID, buf, len, used);
            if (state != GW_CODEC_SUCCESS) return state;
            state = xetra::serialize (mFreeText1, buf, len, used);
            if (state != GW_CODEC_SUCCESS) return state;
            state = xetra::serialize (mFreeText2, buf, len, used);
            if (state != GW_CODEC_SUCCESS) return state;
            state = xetra::serialize (mFreeText4, buf, len, used);
            if (state != GW_CODEC_SUCCESS) return state;
            state = xetra::serialize (mPad6, buf, len, used);
            if (state != GW_CODEC_SUCCESS) return state;
            return GW_CODEC_SUCCESS;
        }

        // deserialization
        codecState deserialize (const void *buf, size_t len, size_t &used)
        {
            codecState state;
            state = xetra::deserialize (mEnrichmentRuleID, buf, len, used);
            if (state != GW_CODEC_SUCCESS) return state;
            state = xetra::deserialize (mFreeText1, buf, len, used);
            if (state != GW_CODEC_SUCCESS) return state;
            state = xetra::deserialize (mFreeText2, buf, len, used);
            if (state != GW_CODEC_SUCCESS) return state;
            state = xetra::deserialize (mFreeText4, buf, len, used);
            if (state != GW_CODEC_SUCCESS) return state;
            state = xetra::deserialize (mPad6, buf, len, used);
            if (state != GW_CODEC_SUCCESS) return state;
            return GW_CODEC_SUCCESS;
        }

        // string conversion
        string toString () const
        {
            stringstream sss;
            sss << "EnrichmentRulesGrpComp::"
                << "[EnrichmentRuleID=" << getEnrichmentRuleID () << "],"
                << "[FreeText1=" << getFreeText1 () << "],"
                << "[FreeText2=" << getFreeText2 () << "],"
                << "[FreeText4=" << getFreeText4 () << "],"
                << "[Pad6=" << getPad6 () << "]";
            return sss.str();
        }
};

const int16_t xetraEnrichmentRulesGrpCompPacket::ENRICHMENT_RULE_ID_MIN = 1;
const int16_t xetraEnrichmentRulesGrpCompPacket::ENRICHMENT_RULE_ID_MAX = 10000;
const int16_t xetraEnrichmentRulesGrpCompPacket::ENRICHMENT_RULE_ID_NO_VALUE = 0xFFFF;
const char xetraEnrichmentRulesGrpCompPacket::FREE_TEXT1_NO_VALUE[12] = {0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00};
const size_t xetraEnrichmentRulesGrpCompPacket::FREE_TEXT1_MAX_LENGTH = 12;
const char xetraEnrichmentRulesGrpCompPacket::FREE_TEXT2_NO_VALUE[12] = {0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00};
const size_t xetraEnrichmentRulesGrpCompPacket::FREE_TEXT2_MAX_LENGTH = 12;
const char xetraEnrichmentRulesGrpCompPacket::FREE_TEXT4_NO_VALUE[16] = {0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00};
const size_t xetraEnrichmentRulesGrpCompPacket::FREE_TEXT4_MAX_LENGTH = 16;
const char xetraEnrichmentRulesGrpCompPacket::PAD6_NO_VALUE[6] = {0x00, 0x00, 0x00, 0x00, 0x00, 0x00};
const size_t xetraEnrichmentRulesGrpCompPacket::PAD6_MAX_LENGTH = 6;


} // namespace neueda

#endif // XETRA_ENRICHMENTRULESGRPCOMP_PACKET_H
