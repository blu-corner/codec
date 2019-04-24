/*
 * Copyright 2014-2018 Neueda Ltd.
 * 
 * Generated 24/04/2019
 */
#ifndef EUREX_ADDFLEXIBLEINSTRUMENTREQUEST_PACKET_H
#define EUREX_ADDFLEXIBLEINSTRUMENTREQUEST_PACKET_H

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

class eurexAddFlexibleInstrumentRequestPacket
{
    public:
        // no value constants
        static const double STRIKE_PRICE_MIN;
        static const double STRIKE_PRICE_MAX;
        static const int64_t STRIKE_PRICE_NO_VALUE;
        static const int32_t MARKET_SEGMENT_ID_MIN;
        static const int32_t MARKET_SEGMENT_ID_MAX;
        static const int32_t MARKET_SEGMENT_ID_NO_VALUE;
        static const int32_t MATURITY_DATE_MIN;
        static const int32_t MATURITY_DATE_MAX;
        static const int32_t MATURITY_DATE_NO_VALUE;
        static const char SETTL_METHOD_NO_VALUE[1];
        static const size_t SETTL_METHOD_MAX_LENGTH;
        static const int8_t OPT_ATTRIBUTE_MIN;
        static const int8_t OPT_ATTRIBUTE_MAX;
        static const int8_t OPT_ATTRIBUTE_NO_VALUE;
        static const int8_t PUT_OR_CALL_MIN;
        static const int8_t PUT_OR_CALL_MAX;
        static const int8_t PUT_OR_CALL_NO_VALUE;
        static const int8_t EXERCISE_STYLE_MIN;
        static const int8_t EXERCISE_STYLE_MAX;
        static const int8_t EXERCISE_STYLE_NO_VALUE;
        static const char COMPLIANCE_TEXT_NO_VALUE[20];
        static const size_t COMPLIANCE_TEXT_MAX_LENGTH;

        // fields (use with care)
        eurexMessageHeaderInCompPacket mMessageHeaderIn;
        eurexRequestHeaderCompPacket mRequestHeader;
        int64_t mStrikePrice;
        int32_t mMarketSegmentID;
        int32_t mMaturityDate;
        char mSettlMethod[1];
        int8_t mOptAttribute;
        int8_t mPutOrCall;
        int8_t mExerciseStyle;
        char mComplianceText[20];

        // constructor
        eurexAddFlexibleInstrumentRequestPacket ()
        {
            mMessageHeaderIn.mTemplateID = 10309;
            mStrikePrice = STRIKE_PRICE_NO_VALUE;
            mMarketSegmentID = MARKET_SEGMENT_ID_NO_VALUE;
            mMaturityDate = MATURITY_DATE_NO_VALUE;
            memcpy(mSettlMethod, SETTL_METHOD_NO_VALUE, sizeof (mSettlMethod));
            mOptAttribute = OPT_ATTRIBUTE_NO_VALUE;
            mPutOrCall = PUT_OR_CALL_NO_VALUE;
            mExerciseStyle = EXERCISE_STYLE_NO_VALUE;
            memcpy(mComplianceText, COMPLIANCE_TEXT_NO_VALUE, sizeof (mComplianceText));
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

        double getStrikePrice () const
        {
            return mStrikePrice / 100000000.0;
        }

        bool setStrikePrice (double v)
        {
            mStrikePrice = v * 100000000.0;
            return ((STRIKE_PRICE_MIN <= v && v <= STRIKE_PRICE_MAX) || mStrikePrice == STRIKE_PRICE_NO_VALUE);
        }

        bool isStrikePriceValid () const
        {
            return (mStrikePrice != STRIKE_PRICE_NO_VALUE);
        }

        void resetStrikePrice ()
        {
            mStrikePrice = STRIKE_PRICE_NO_VALUE;
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

        int32_t getMaturityDate () const
        {
            return mMaturityDate;
        }

        bool setMaturityDate (int32_t v)
        {
            mMaturityDate = v;
            return ((MATURITY_DATE_MIN <= mMaturityDate && mMaturityDate <= MATURITY_DATE_MAX) || mMaturityDate == MATURITY_DATE_NO_VALUE);
        }

        bool isMaturityDateValid () const
        {
            return (mMaturityDate != MATURITY_DATE_NO_VALUE);
        }

        void resetMaturityDate ()
        {
            mMaturityDate = MATURITY_DATE_NO_VALUE;
        }

        string getSettlMethod () const
        {
            return string (mSettlMethod, SETTL_METHOD_MAX_LENGTH);
        }

        bool setSettlMethod (const string& v)
        {
            memset (mSettlMethod, '\0', sizeof (mSettlMethod));
            size_t size = min ((size_t) v.size (), (size_t) SETTL_METHOD_MAX_LENGTH);
            strncpy (mSettlMethod, v.c_str (), size);
            return (v.size () <= SETTL_METHOD_MAX_LENGTH);
        }

        bool isSettlMethodValid () const
        {
            return (memcmp (mSettlMethod, SETTL_METHOD_NO_VALUE, sizeof (mSettlMethod)) != 0);
        }

        void resetSettlMethod ()
        {
            memcpy (mSettlMethod, SETTL_METHOD_NO_VALUE, sizeof (mSettlMethod));
        }

        int8_t getOptAttribute () const
        {
            return mOptAttribute;
        }

        bool setOptAttribute (int8_t v)
        {
            mOptAttribute = v;
            return ((OPT_ATTRIBUTE_MIN <= mOptAttribute && mOptAttribute <= OPT_ATTRIBUTE_MAX) || mOptAttribute == OPT_ATTRIBUTE_NO_VALUE);
        }

        bool isOptAttributeValid () const
        {
            return (mOptAttribute != OPT_ATTRIBUTE_NO_VALUE);
        }

        void resetOptAttribute ()
        {
            mOptAttribute = OPT_ATTRIBUTE_NO_VALUE;
        }

        int8_t getPutOrCall () const
        {
            return mPutOrCall;
        }

        bool setPutOrCall (int8_t v)
        {
            mPutOrCall = v;
            return ((PUT_OR_CALL_MIN <= mPutOrCall && mPutOrCall <= PUT_OR_CALL_MAX) || mPutOrCall == PUT_OR_CALL_NO_VALUE);
        }

        bool isPutOrCallValid () const
        {
            return (mPutOrCall != PUT_OR_CALL_NO_VALUE);
        }

        void resetPutOrCall ()
        {
            mPutOrCall = PUT_OR_CALL_NO_VALUE;
        }

        int8_t getExerciseStyle () const
        {
            return mExerciseStyle;
        }

        bool setExerciseStyle (int8_t v)
        {
            mExerciseStyle = v;
            return ((EXERCISE_STYLE_MIN <= mExerciseStyle && mExerciseStyle <= EXERCISE_STYLE_MAX) || mExerciseStyle == EXERCISE_STYLE_NO_VALUE);
        }

        bool isExerciseStyleValid () const
        {
            return (mExerciseStyle != EXERCISE_STYLE_NO_VALUE);
        }

        void resetExerciseStyle ()
        {
            mExerciseStyle = EXERCISE_STYLE_NO_VALUE;
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


        // render current raw size
        size_t getRawSize () const
        {
            size_t result = mMessageHeaderIn.getRawSize()
                + mRequestHeader.getRawSize()
                + sizeof (mStrikePrice)
                + sizeof (mMarketSegmentID)
                + sizeof (mMaturityDate)
                + sizeof (mSettlMethod)
                + sizeof (mOptAttribute)
                + sizeof (mPutOrCall)
                + sizeof (mExerciseStyle)
                + sizeof (mComplianceText);
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
            state = eurex::serialize (mStrikePrice, buf, len, used);
            if (state != GW_CODEC_SUCCESS) return state;
            state = eurex::serialize (mMarketSegmentID, buf, len, used);
            if (state != GW_CODEC_SUCCESS) return state;
            state = eurex::serialize (mMaturityDate, buf, len, used);
            if (state != GW_CODEC_SUCCESS) return state;
            state = eurex::serialize (mSettlMethod, buf, len, used);
            if (state != GW_CODEC_SUCCESS) return state;
            state = eurex::serialize (mOptAttribute, buf, len, used);
            if (state != GW_CODEC_SUCCESS) return state;
            state = eurex::serialize (mPutOrCall, buf, len, used);
            if (state != GW_CODEC_SUCCESS) return state;
            state = eurex::serialize (mExerciseStyle, buf, len, used);
            if (state != GW_CODEC_SUCCESS) return state;
            state = eurex::serialize (mComplianceText, buf, len, used);
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
            state = eurex::deserialize (mStrikePrice, buf, len, used);
            if (state != GW_CODEC_SUCCESS) return state;
            state = eurex::deserialize (mMarketSegmentID, buf, len, used);
            if (state != GW_CODEC_SUCCESS) return state;
            state = eurex::deserialize (mMaturityDate, buf, len, used);
            if (state != GW_CODEC_SUCCESS) return state;
            state = eurex::deserialize (mSettlMethod, buf, len, used);
            if (state != GW_CODEC_SUCCESS) return state;
            state = eurex::deserialize (mOptAttribute, buf, len, used);
            if (state != GW_CODEC_SUCCESS) return state;
            state = eurex::deserialize (mPutOrCall, buf, len, used);
            if (state != GW_CODEC_SUCCESS) return state;
            state = eurex::deserialize (mExerciseStyle, buf, len, used);
            if (state != GW_CODEC_SUCCESS) return state;
            state = eurex::deserialize (mComplianceText, buf, len, used);
            if (state != GW_CODEC_SUCCESS) return state;
            mMessageHeaderIn.mBodyLen = getRawSize ();
            return GW_CODEC_SUCCESS;
        }

        // string conversion
        string toString () const
        {
            stringstream sss;
            sss << "AddFlexibleInstrumentRequest::"
                << "[MessageHeaderIn=" << mMessageHeaderIn.toString () << "],"
                << "[RequestHeader=" << mRequestHeader.toString () << "],"
                << "[StrikePrice=" << getStrikePrice () << "],"
                << "[MarketSegmentID=" << getMarketSegmentID () << "],"
                << "[MaturityDate=" << getMaturityDate () << "],"
                << "[SettlMethod=" << getSettlMethod () << "],"
                << "[OptAttribute=" << getOptAttribute () << "],"
                << "[PutOrCall=" << getPutOrCall () << "],"
                << "[ExerciseStyle=" << getExerciseStyle () << "],"
                << "[ComplianceText=" << getComplianceText () << "]";
            return sss.str();
        }
};

const double eurexAddFlexibleInstrumentRequestPacket::STRIKE_PRICE_MIN = -92233720368.54775807;
const double eurexAddFlexibleInstrumentRequestPacket::STRIKE_PRICE_MAX = 92233720368.54775807;
const int64_t eurexAddFlexibleInstrumentRequestPacket::STRIKE_PRICE_NO_VALUE = 0x8000000000000000;
const int32_t eurexAddFlexibleInstrumentRequestPacket::MARKET_SEGMENT_ID_MIN = -2147483647;
const int32_t eurexAddFlexibleInstrumentRequestPacket::MARKET_SEGMENT_ID_MAX = 2147483647;
const int32_t eurexAddFlexibleInstrumentRequestPacket::MARKET_SEGMENT_ID_NO_VALUE = 0x80000000;
const int32_t eurexAddFlexibleInstrumentRequestPacket::MATURITY_DATE_MIN = 0;
const int32_t eurexAddFlexibleInstrumentRequestPacket::MATURITY_DATE_MAX = 99991231;
const int32_t eurexAddFlexibleInstrumentRequestPacket::MATURITY_DATE_NO_VALUE = 0xFFFFFFFF;
const char eurexAddFlexibleInstrumentRequestPacket::SETTL_METHOD_NO_VALUE[1] = {0x00};
const size_t eurexAddFlexibleInstrumentRequestPacket::SETTL_METHOD_MAX_LENGTH = 1;
const int8_t eurexAddFlexibleInstrumentRequestPacket::OPT_ATTRIBUTE_MIN = 0;
const int8_t eurexAddFlexibleInstrumentRequestPacket::OPT_ATTRIBUTE_MAX = 9;
const int8_t eurexAddFlexibleInstrumentRequestPacket::OPT_ATTRIBUTE_NO_VALUE = 0xFF;
const int8_t eurexAddFlexibleInstrumentRequestPacket::PUT_OR_CALL_MIN = 0;
const int8_t eurexAddFlexibleInstrumentRequestPacket::PUT_OR_CALL_MAX = 1;
const int8_t eurexAddFlexibleInstrumentRequestPacket::PUT_OR_CALL_NO_VALUE = 0xFF;
const int8_t eurexAddFlexibleInstrumentRequestPacket::EXERCISE_STYLE_MIN = 0;
const int8_t eurexAddFlexibleInstrumentRequestPacket::EXERCISE_STYLE_MAX = 1;
const int8_t eurexAddFlexibleInstrumentRequestPacket::EXERCISE_STYLE_NO_VALUE = 0xFF;
const char eurexAddFlexibleInstrumentRequestPacket::COMPLIANCE_TEXT_NO_VALUE[20] = {0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00};
const size_t eurexAddFlexibleInstrumentRequestPacket::COMPLIANCE_TEXT_MAX_LENGTH = 20;


} // namespace neueda

#endif // EUREX_ADDFLEXIBLEINSTRUMENTREQUEST_PACKET_H
