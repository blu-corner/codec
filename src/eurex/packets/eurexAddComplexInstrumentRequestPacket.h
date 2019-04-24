/*
 * Copyright 2014-2018 Neueda Ltd.
 * 
 * Generated 24/04/2019
 */
#ifndef EUREX_ADDCOMPLEXINSTRUMENTREQUEST_PACKET_H
#define EUREX_ADDCOMPLEXINSTRUMENTREQUEST_PACKET_H

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

class eurexAddComplexInstrumentRequestPacket
{
    public:
        // no value constants
        static const int32_t MARKET_SEGMENT_ID_MIN;
        static const int32_t MARKET_SEGMENT_ID_MAX;
        static const int32_t MARKET_SEGMENT_ID_NO_VALUE;
        static const int32_t SECURITY_SUB_TYPE_MIN;
        static const int32_t SECURITY_SUB_TYPE_MAX;
        static const int32_t SECURITY_SUB_TYPE_NO_VALUE;
        static const int8_t PRODUCT_COMPLEX_MIN;
        static const int8_t PRODUCT_COMPLEX_MAX;
        static const int8_t PRODUCT_COMPLEX_NO_VALUE;
        static const int8_t NO_LEGS_MIN;
        static const int8_t NO_LEGS_MAX;
        static const int8_t NO_LEGS_NO_VALUE;
        static const char COMPLIANCE_TEXT_NO_VALUE[20];
        static const size_t COMPLIANCE_TEXT_MAX_LENGTH;
        static const char PAD2_NO_VALUE[2];
        static const size_t PAD2_MAX_LENGTH;
        static const size_t INSTRMT_LEG_GRP_MIN;
        static const size_t INSTRMT_LEG_GRP_MAX;

        // fields (use with care)
        eurexMessageHeaderInCompPacket mMessageHeaderIn;
        eurexRequestHeaderCompPacket mRequestHeader;
        int32_t mMarketSegmentID;
        int32_t mSecuritySubType;
        int8_t mProductComplex;
        int8_t mNoLegs;
        char mComplianceText[20];
        char mPad2[2];
        vector<eurexInstrmtLegGrpCompPacket> mInstrmtLegGrp;

        // constructor
        eurexAddComplexInstrumentRequestPacket ()
        {
            mMessageHeaderIn.mTemplateID = 10301;
            mMarketSegmentID = MARKET_SEGMENT_ID_NO_VALUE;
            mSecuritySubType = SECURITY_SUB_TYPE_NO_VALUE;
            mProductComplex = PRODUCT_COMPLEX_NO_VALUE;
            mNoLegs = NO_LEGS_NO_VALUE;
            memcpy(mComplianceText, COMPLIANCE_TEXT_NO_VALUE, sizeof (mComplianceText));
            memcpy(mPad2, PAD2_NO_VALUE, sizeof (mPad2));
        }

        // getters & setters
        const eurexMessageHeaderInCompPacket& getMessageHeaderIn () const
        {
            return mMessageHeaderIn;
        }

        bool setMessageHeaderIn (const eurexMessageHeaderInCompPacket& v)
        {
            mMessageHeaderIn = v;
            return true;
        }

        const eurexRequestHeaderCompPacket& getRequestHeader () const
        {
            return mRequestHeader;
        }

        bool setRequestHeader (const eurexRequestHeaderCompPacket& v)
        {
            mRequestHeader = v;
            return true;
        }

        int32_t getMarketSegmentID () const
        {
            return mMarketSegmentID;
        }

        bool setMarketSegmentID (int32_t v)
        {
            mMarketSegmentID = v;
            return ((MARKET_SEGMENT_ID_MIN <= mMarketSegmentID && mMarketSegmentID <= MARKET_SEGMENT_ID_MAX) || mMarketSegmentID == MARKET_SEGMENT_ID_NO_VALUE);
        }

        bool isMarketSegmentIDValid () const
        {
            return (mMarketSegmentID != MARKET_SEGMENT_ID_NO_VALUE);
        }

        void resetMarketSegmentID ()
        {
            mMarketSegmentID = MARKET_SEGMENT_ID_NO_VALUE;
        }

        int32_t getSecuritySubType () const
        {
            return mSecuritySubType;
        }

        bool setSecuritySubType (int32_t v)
        {
            mSecuritySubType = v;
            return ((SECURITY_SUB_TYPE_MIN <= mSecuritySubType && mSecuritySubType <= SECURITY_SUB_TYPE_MAX) || mSecuritySubType == SECURITY_SUB_TYPE_NO_VALUE);
        }

        bool isSecuritySubTypeValid () const
        {
            return (mSecuritySubType != SECURITY_SUB_TYPE_NO_VALUE);
        }

        void resetSecuritySubType ()
        {
            mSecuritySubType = SECURITY_SUB_TYPE_NO_VALUE;
        }

        int8_t getProductComplex () const
        {
            return mProductComplex;
        }

        bool setProductComplex (int8_t v)
        {
            mProductComplex = v;
            return ((PRODUCT_COMPLEX_MIN <= mProductComplex && mProductComplex <= PRODUCT_COMPLEX_MAX) || mProductComplex == PRODUCT_COMPLEX_NO_VALUE);
        }

        bool isProductComplexValid () const
        {
            return (mProductComplex != PRODUCT_COMPLEX_NO_VALUE);
        }

        void resetProductComplex ()
        {
            mProductComplex = PRODUCT_COMPLEX_NO_VALUE;
        }

        int8_t getNoLegs () const
        {
            return mNoLegs;
        }

        bool setNoLegs (int8_t v)
        {
            mNoLegs = v;
            return ((NO_LEGS_MIN <= mNoLegs && mNoLegs <= NO_LEGS_MAX) || mNoLegs == NO_LEGS_NO_VALUE);
        }

        bool isNoLegsValid () const
        {
            return (mNoLegs != NO_LEGS_NO_VALUE);
        }

        void resetNoLegs ()
        {
            mNoLegs = NO_LEGS_NO_VALUE;
        }

        string getComplianceText () const
        {
            return string (mComplianceText, COMPLIANCE_TEXT_MAX_LENGTH);
        }

        bool setComplianceText (const string& v)
        {
            memset (mComplianceText, '\0', sizeof (mComplianceText));
            size_t size = min ((size_t) v.size (), (size_t) COMPLIANCE_TEXT_MAX_LENGTH);
            strncpy (mComplianceText, v.c_str (), size);
            return (v.size () <= COMPLIANCE_TEXT_MAX_LENGTH);
        }

        bool isComplianceTextValid () const
        {
            return (memcmp (mComplianceText, COMPLIANCE_TEXT_NO_VALUE, sizeof (mComplianceText)) != 0);
        }

        void resetComplianceText ()
        {
            memcpy (mComplianceText, COMPLIANCE_TEXT_NO_VALUE, sizeof (mComplianceText));
        }

        string getPad2 () const
        {
            return string (mPad2, PAD2_MAX_LENGTH);
        }

        bool setPad2 (const string& v)
        {
            memset (mPad2, '\0', sizeof (mPad2));
            size_t size = min ((size_t) v.size (), (size_t) PAD2_MAX_LENGTH);
            strncpy (mPad2, v.c_str (), size);
            return (v.size () <= PAD2_MAX_LENGTH);
        }

        bool isPad2Valid () const
        {
            return (memcmp (mPad2, PAD2_NO_VALUE, sizeof (mPad2)) != 0);
        }

        void resetPad2 ()
        {
            memcpy (mPad2, PAD2_NO_VALUE, sizeof (mPad2));
        }

        const vector<eurexInstrmtLegGrpCompPacket>& getInstrmtLegGrp () const
        {
            return mInstrmtLegGrp;
        }

        bool setInstrmtLegGrp (const vector<eurexInstrmtLegGrpCompPacket>& v)
        {
            mInstrmtLegGrp = v;
            mNoLegs = v.size ();
            return (INSTRMT_LEG_GRP_MIN <= v.size () && v.size () <= INSTRMT_LEG_GRP_MAX);
        }


        // render current raw size
        size_t getRawSize () const
        {
            size_t result = mMessageHeaderIn.getRawSize()
                + mRequestHeader.getRawSize()
                + sizeof (mMarketSegmentID)
                + sizeof (mSecuritySubType)
                + sizeof (mProductComplex)
                + sizeof (mNoLegs)
                + sizeof (mComplianceText)
                + sizeof (mPad2)
                + eurex::getRawSize (mInstrmtLegGrp);
            return result;
        }

        // serialization
        codecState serialize (void *buf, size_t len, size_t &used)
        {
            mNoLegs = mInstrmtLegGrp.size ();
            mMessageHeaderIn.mBodyLen = getRawSize ();
            codecState state;
            state = mMessageHeaderIn.serialize (buf, len, used);
            if (state != GW_CODEC_SUCCESS) return state;
            state = mRequestHeader.serialize (buf, len, used);
            if (state != GW_CODEC_SUCCESS) return state;
            state = eurex::serialize (mMarketSegmentID, buf, len, used);
            if (state != GW_CODEC_SUCCESS) return state;
            state = eurex::serialize (mSecuritySubType, buf, len, used);
            if (state != GW_CODEC_SUCCESS) return state;
            state = eurex::serialize (mProductComplex, buf, len, used);
            if (state != GW_CODEC_SUCCESS) return state;
            state = eurex::serialize (mNoLegs, buf, len, used);
            if (state != GW_CODEC_SUCCESS) return state;
            state = eurex::serialize (mComplianceText, buf, len, used);
            if (state != GW_CODEC_SUCCESS) return state;
            state = eurex::serialize (mPad2, buf, len, used);
            if (state != GW_CODEC_SUCCESS) return state;
            for (size_t i = 0; i < mInstrmtLegGrp.size (); i++)
            {
                state = mInstrmtLegGrp[i].serialize (buf, len, used);
                if (state != GW_CODEC_SUCCESS) return state;
            }
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
            state = eurex::deserialize (mMarketSegmentID, buf, len, used);
            if (state != GW_CODEC_SUCCESS) return state;
            state = eurex::deserialize (mSecuritySubType, buf, len, used);
            if (state != GW_CODEC_SUCCESS) return state;
            state = eurex::deserialize (mProductComplex, buf, len, used);
            if (state != GW_CODEC_SUCCESS) return state;
            state = eurex::deserialize (mNoLegs, buf, len, used);
            if (state != GW_CODEC_SUCCESS) return state;
            state = eurex::deserialize (mComplianceText, buf, len, used);
            if (state != GW_CODEC_SUCCESS) return state;
            state = eurex::deserialize (mPad2, buf, len, used);
            if (state != GW_CODEC_SUCCESS) return state;
            mInstrmtLegGrp.resize (mNoLegs);
            for (vector<eurexInstrmtLegGrpCompPacket>::iterator it = mInstrmtLegGrp.begin (); it != mInstrmtLegGrp.end (); ++it)
            {
                state = it->deserialize (buf, len, used);
                if (state != GW_CODEC_SUCCESS) return state;
            }
            mMessageHeaderIn.mBodyLen = getRawSize ();
            return GW_CODEC_SUCCESS;
        }

        // string conversion
        string toString () const
        {
            stringstream sss;
            sss << "AddComplexInstrumentRequest::"
                << "[MessageHeaderIn=" << mMessageHeaderIn.toString () << "],"
                << "[RequestHeader=" << mRequestHeader.toString () << "],"
                << "[MarketSegmentID=" << getMarketSegmentID () << "],"
                << "[SecuritySubType=" << getSecuritySubType () << "],"
                << "[ProductComplex=" << getProductComplex () << "],"
                << "[NoLegs=" << getNoLegs () << "],"
                << "[ComplianceText=" << getComplianceText () << "],"
                << "[Pad2=" << getPad2 () << "],"
                << "[InstrmtLegGrp=" << eurex::toString (getInstrmtLegGrp ()) << "]";
            return sss.str();
        }
};

const int32_t eurexAddComplexInstrumentRequestPacket::MARKET_SEGMENT_ID_MIN = -2147483647;
const int32_t eurexAddComplexInstrumentRequestPacket::MARKET_SEGMENT_ID_MAX = 2147483647;
const int32_t eurexAddComplexInstrumentRequestPacket::MARKET_SEGMENT_ID_NO_VALUE = 0x80000000;
const int32_t eurexAddComplexInstrumentRequestPacket::SECURITY_SUB_TYPE_MIN = -2147483647;
const int32_t eurexAddComplexInstrumentRequestPacket::SECURITY_SUB_TYPE_MAX = 2147483647;
const int32_t eurexAddComplexInstrumentRequestPacket::SECURITY_SUB_TYPE_NO_VALUE = 0x80000000;
const int8_t eurexAddComplexInstrumentRequestPacket::PRODUCT_COMPLEX_MIN = 1;
const int8_t eurexAddComplexInstrumentRequestPacket::PRODUCT_COMPLEX_MAX = 10;
const int8_t eurexAddComplexInstrumentRequestPacket::PRODUCT_COMPLEX_NO_VALUE = 0xFF;
const int8_t eurexAddComplexInstrumentRequestPacket::NO_LEGS_MIN = 0;
const int8_t eurexAddComplexInstrumentRequestPacket::NO_LEGS_MAX = 20;
const int8_t eurexAddComplexInstrumentRequestPacket::NO_LEGS_NO_VALUE = 0xFF;
const char eurexAddComplexInstrumentRequestPacket::COMPLIANCE_TEXT_NO_VALUE[20] = {0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00};
const size_t eurexAddComplexInstrumentRequestPacket::COMPLIANCE_TEXT_MAX_LENGTH = 20;
const char eurexAddComplexInstrumentRequestPacket::PAD2_NO_VALUE[2] = {0x00, 0x00};
const size_t eurexAddComplexInstrumentRequestPacket::PAD2_MAX_LENGTH = 2;
const size_t eurexAddComplexInstrumentRequestPacket::INSTRMT_LEG_GRP_MIN = 0;
const size_t eurexAddComplexInstrumentRequestPacket::INSTRMT_LEG_GRP_MAX = 20;


} // namespace neueda

#endif // EUREX_ADDCOMPLEXINSTRUMENTREQUEST_PACKET_H
