/*
 * Copyright 2014-2018 Neueda Ltd.
 * 
 * Generated 24/04/2019
 */
#ifndef EUREX_ADDFLEXIBLEINSTRUMENTRESPONSE_PACKET_H
#define EUREX_ADDFLEXIBLEINSTRUMENTRESPONSE_PACKET_H

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

class eurexAddFlexibleInstrumentResponsePacket
{
    public:
        // no value constants
        static const uint64_t SECURITY_RESPONSE_ID_MIN;
        static const uint64_t SECURITY_RESPONSE_ID_MAX;
        static const uint64_t SECURITY_RESPONSE_ID_NO_VALUE;
        static const int64_t SECURITY_ID_MIN;
        static const int64_t SECURITY_ID_MAX;
        static const int64_t SECURITY_ID_NO_VALUE;
        static const double STRIKE_PRICE_MIN;
        static const double STRIKE_PRICE_MAX;
        static const int64_t STRIKE_PRICE_NO_VALUE;
        static const int32_t MARKET_SEGMENT_ID_MIN;
        static const int32_t MARKET_SEGMENT_ID_MAX;
        static const int32_t MARKET_SEGMENT_ID_NO_VALUE;
        static const int32_t MATURITY_DATE_MIN;
        static const int32_t MATURITY_DATE_MAX;
        static const int32_t MATURITY_DATE_NO_VALUE;
        static const int8_t PRODUCT_COMPLEX_MIN;
        static const int8_t PRODUCT_COMPLEX_MAX;
        static const int8_t PRODUCT_COMPLEX_NO_VALUE;
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
        static const char SYMBOL_NO_VALUE[4];
        static const size_t SYMBOL_MAX_LENGTH;
        static const char PAD7_NO_VALUE[7];
        static const size_t PAD7_MAX_LENGTH;

        // fields (use with care)
        eurexMessageHeaderOutCompPacket mMessageHeaderOut;
        eurexNRResponseHeaderMECompPacket mNRResponseHeaderME;
        uint64_t mSecurityResponseID;
        int64_t mSecurityID;
        int64_t mStrikePrice;
        int32_t mMarketSegmentID;
        int32_t mMaturityDate;
        int8_t mProductComplex;
        char mSettlMethod[1];
        int8_t mOptAttribute;
        int8_t mPutOrCall;
        int8_t mExerciseStyle;
        char mSymbol[4];
        char mPad7[7];

        // constructor
        eurexAddFlexibleInstrumentResponsePacket ()
        {
            mMessageHeaderOut.mTemplateID = 10310;
            mSecurityResponseID = SECURITY_RESPONSE_ID_NO_VALUE;
            mSecurityID = SECURITY_ID_NO_VALUE;
            mStrikePrice = STRIKE_PRICE_NO_VALUE;
            mMarketSegmentID = MARKET_SEGMENT_ID_NO_VALUE;
            mMaturityDate = MATURITY_DATE_NO_VALUE;
            mProductComplex = PRODUCT_COMPLEX_NO_VALUE;
            memcpy(mSettlMethod, SETTL_METHOD_NO_VALUE, sizeof (mSettlMethod));
            mOptAttribute = OPT_ATTRIBUTE_NO_VALUE;
            mPutOrCall = PUT_OR_CALL_NO_VALUE;
            mExerciseStyle = EXERCISE_STYLE_NO_VALUE;
            memcpy(mSymbol, SYMBOL_NO_VALUE, sizeof (mSymbol));
            memcpy(mPad7, PAD7_NO_VALUE, sizeof (mPad7));
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

        uint64_t getSecurityResponseID () const
        {
            return mSecurityResponseID;
        }

        bool setSecurityResponseID (uint64_t v)
        {
            mSecurityResponseID = v;
            return ((SECURITY_RESPONSE_ID_MIN <= mSecurityResponseID && mSecurityResponseID <= SECURITY_RESPONSE_ID_MAX) || mSecurityResponseID == SECURITY_RESPONSE_ID_NO_VALUE);
        }

        bool isSecurityResponseIDValid () const
        {
            return (mSecurityResponseID != SECURITY_RESPONSE_ID_NO_VALUE);
        }

        void resetSecurityResponseID ()
        {
            mSecurityResponseID = SECURITY_RESPONSE_ID_NO_VALUE;
        }

        int64_t getSecurityID () const
        {
            return mSecurityID;
        }

        bool setSecurityID (int64_t v)
        {
            mSecurityID = v;
            return ((SECURITY_ID_MIN <= mSecurityID && mSecurityID <= SECURITY_ID_MAX) || mSecurityID == SECURITY_ID_NO_VALUE);
        }

        bool isSecurityIDValid () const
        {
            return (mSecurityID != SECURITY_ID_NO_VALUE);
        }

        void resetSecurityID ()
        {
            mSecurityID = SECURITY_ID_NO_VALUE;
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

        string getSymbol () const
        {
            return string (mSymbol, SYMBOL_MAX_LENGTH);
        }

        bool setSymbol (const string& v)
        {
            memset (mSymbol, '\0', sizeof (mSymbol));
            size_t size = min ((size_t) v.size (), (size_t) SYMBOL_MAX_LENGTH);
            strncpy (mSymbol, v.c_str (), size);
            return (v.size () <= SYMBOL_MAX_LENGTH);
        }

        bool isSymbolValid () const
        {
            return (memcmp (mSymbol, SYMBOL_NO_VALUE, sizeof (mSymbol)) != 0);
        }

        void resetSymbol ()
        {
            memcpy (mSymbol, SYMBOL_NO_VALUE, sizeof (mSymbol));
        }

        string getPad7 () const
        {
            return string (mPad7, PAD7_MAX_LENGTH);
        }

        bool setPad7 (const string& v)
        {
            memset (mPad7, '\0', sizeof (mPad7));
            size_t size = min ((size_t) v.size (), (size_t) PAD7_MAX_LENGTH);
            strncpy (mPad7, v.c_str (), size);
            return (v.size () <= PAD7_MAX_LENGTH);
        }

        bool isPad7Valid () const
        {
            return (memcmp (mPad7, PAD7_NO_VALUE, sizeof (mPad7)) != 0);
        }

        void resetPad7 ()
        {
            memcpy (mPad7, PAD7_NO_VALUE, sizeof (mPad7));
        }


        // render current raw size
        size_t getRawSize () const
        {
            size_t result = mMessageHeaderOut.getRawSize()
                + mNRResponseHeaderME.getRawSize()
                + sizeof (mSecurityResponseID)
                + sizeof (mSecurityID)
                + sizeof (mStrikePrice)
                + sizeof (mMarketSegmentID)
                + sizeof (mMaturityDate)
                + sizeof (mProductComplex)
                + sizeof (mSettlMethod)
                + sizeof (mOptAttribute)
                + sizeof (mPutOrCall)
                + sizeof (mExerciseStyle)
                + sizeof (mSymbol)
                + sizeof (mPad7);
            return result;
        }

        // serialization
        codecState serialize (void *buf, size_t len, size_t &used)
        {
            mMessageHeaderOut.mBodyLen = getRawSize ();
            codecState state;
            state = mMessageHeaderOut.serialize (buf, len, used);
            if (state != GW_CODEC_SUCCESS) return state;
            state = mNRResponseHeaderME.serialize (buf, len, used);
            if (state != GW_CODEC_SUCCESS) return state;
            state = eurex::serialize (mSecurityResponseID, buf, len, used);
            if (state != GW_CODEC_SUCCESS) return state;
            state = eurex::serialize (mSecurityID, buf, len, used);
            if (state != GW_CODEC_SUCCESS) return state;
            state = eurex::serialize (mStrikePrice, buf, len, used);
            if (state != GW_CODEC_SUCCESS) return state;
            state = eurex::serialize (mMarketSegmentID, buf, len, used);
            if (state != GW_CODEC_SUCCESS) return state;
            state = eurex::serialize (mMaturityDate, buf, len, used);
            if (state != GW_CODEC_SUCCESS) return state;
            state = eurex::serialize (mProductComplex, buf, len, used);
            if (state != GW_CODEC_SUCCESS) return state;
            state = eurex::serialize (mSettlMethod, buf, len, used);
            if (state != GW_CODEC_SUCCESS) return state;
            state = eurex::serialize (mOptAttribute, buf, len, used);
            if (state != GW_CODEC_SUCCESS) return state;
            state = eurex::serialize (mPutOrCall, buf, len, used);
            if (state != GW_CODEC_SUCCESS) return state;
            state = eurex::serialize (mExerciseStyle, buf, len, used);
            if (state != GW_CODEC_SUCCESS) return state;
            state = eurex::serialize (mSymbol, buf, len, used);
            if (state != GW_CODEC_SUCCESS) return state;
            state = eurex::serialize (mPad7, buf, len, used);
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
            state = eurex::deserialize (mSecurityResponseID, buf, len, used);
            if (state != GW_CODEC_SUCCESS) return state;
            state = eurex::deserialize (mSecurityID, buf, len, used);
            if (state != GW_CODEC_SUCCESS) return state;
            state = eurex::deserialize (mStrikePrice, buf, len, used);
            if (state != GW_CODEC_SUCCESS) return state;
            state = eurex::deserialize (mMarketSegmentID, buf, len, used);
            if (state != GW_CODEC_SUCCESS) return state;
            state = eurex::deserialize (mMaturityDate, buf, len, used);
            if (state != GW_CODEC_SUCCESS) return state;
            state = eurex::deserialize (mProductComplex, buf, len, used);
            if (state != GW_CODEC_SUCCESS) return state;
            state = eurex::deserialize (mSettlMethod, buf, len, used);
            if (state != GW_CODEC_SUCCESS) return state;
            state = eurex::deserialize (mOptAttribute, buf, len, used);
            if (state != GW_CODEC_SUCCESS) return state;
            state = eurex::deserialize (mPutOrCall, buf, len, used);
            if (state != GW_CODEC_SUCCESS) return state;
            state = eurex::deserialize (mExerciseStyle, buf, len, used);
            if (state != GW_CODEC_SUCCESS) return state;
            state = eurex::deserialize (mSymbol, buf, len, used);
            if (state != GW_CODEC_SUCCESS) return state;
            state = eurex::deserialize (mPad7, buf, len, used);
            if (state != GW_CODEC_SUCCESS) return state;
            mMessageHeaderOut.mBodyLen = getRawSize ();
            return GW_CODEC_SUCCESS;
        }

        // string conversion
        string toString () const
        {
            stringstream sss;
            sss << "AddFlexibleInstrumentResponse::"
                << "[MessageHeaderOut=" << mMessageHeaderOut.toString () << "],"
                << "[NRResponseHeaderME=" << mNRResponseHeaderME.toString () << "],"
                << "[SecurityResponseID=" << getSecurityResponseID () << "],"
                << "[SecurityID=" << getSecurityID () << "],"
                << "[StrikePrice=" << getStrikePrice () << "],"
                << "[MarketSegmentID=" << getMarketSegmentID () << "],"
                << "[MaturityDate=" << getMaturityDate () << "],"
                << "[ProductComplex=" << getProductComplex () << "],"
                << "[SettlMethod=" << getSettlMethod () << "],"
                << "[OptAttribute=" << getOptAttribute () << "],"
                << "[PutOrCall=" << getPutOrCall () << "],"
                << "[ExerciseStyle=" << getExerciseStyle () << "],"
                << "[Symbol=" << getSymbol () << "],"
                << "[Pad7=" << getPad7 () << "]";
            return sss.str();
        }
};

const uint64_t eurexAddFlexibleInstrumentResponsePacket::SECURITY_RESPONSE_ID_MIN = 0UL;
const uint64_t eurexAddFlexibleInstrumentResponsePacket::SECURITY_RESPONSE_ID_MAX = 18446744073709551614UL;
const uint64_t eurexAddFlexibleInstrumentResponsePacket::SECURITY_RESPONSE_ID_NO_VALUE = 0xFFFFFFFFFFFFFFFF;
const int64_t eurexAddFlexibleInstrumentResponsePacket::SECURITY_ID_MIN = -9223372036854775807L;
const int64_t eurexAddFlexibleInstrumentResponsePacket::SECURITY_ID_MAX = 9223372036854775807L;
const int64_t eurexAddFlexibleInstrumentResponsePacket::SECURITY_ID_NO_VALUE = 0x8000000000000000;
const double eurexAddFlexibleInstrumentResponsePacket::STRIKE_PRICE_MIN = -92233720368.54775807;
const double eurexAddFlexibleInstrumentResponsePacket::STRIKE_PRICE_MAX = 92233720368.54775807;
const int64_t eurexAddFlexibleInstrumentResponsePacket::STRIKE_PRICE_NO_VALUE = 0x8000000000000000;
const int32_t eurexAddFlexibleInstrumentResponsePacket::MARKET_SEGMENT_ID_MIN = -2147483647;
const int32_t eurexAddFlexibleInstrumentResponsePacket::MARKET_SEGMENT_ID_MAX = 2147483647;
const int32_t eurexAddFlexibleInstrumentResponsePacket::MARKET_SEGMENT_ID_NO_VALUE = 0x80000000;
const int32_t eurexAddFlexibleInstrumentResponsePacket::MATURITY_DATE_MIN = 0;
const int32_t eurexAddFlexibleInstrumentResponsePacket::MATURITY_DATE_MAX = 99991231;
const int32_t eurexAddFlexibleInstrumentResponsePacket::MATURITY_DATE_NO_VALUE = 0xFFFFFFFF;
const int8_t eurexAddFlexibleInstrumentResponsePacket::PRODUCT_COMPLEX_MIN = 1;
const int8_t eurexAddFlexibleInstrumentResponsePacket::PRODUCT_COMPLEX_MAX = 10;
const int8_t eurexAddFlexibleInstrumentResponsePacket::PRODUCT_COMPLEX_NO_VALUE = 0xFF;
const char eurexAddFlexibleInstrumentResponsePacket::SETTL_METHOD_NO_VALUE[1] = {0x00};
const size_t eurexAddFlexibleInstrumentResponsePacket::SETTL_METHOD_MAX_LENGTH = 1;
const int8_t eurexAddFlexibleInstrumentResponsePacket::OPT_ATTRIBUTE_MIN = 0;
const int8_t eurexAddFlexibleInstrumentResponsePacket::OPT_ATTRIBUTE_MAX = 9;
const int8_t eurexAddFlexibleInstrumentResponsePacket::OPT_ATTRIBUTE_NO_VALUE = 0xFF;
const int8_t eurexAddFlexibleInstrumentResponsePacket::PUT_OR_CALL_MIN = 0;
const int8_t eurexAddFlexibleInstrumentResponsePacket::PUT_OR_CALL_MAX = 1;
const int8_t eurexAddFlexibleInstrumentResponsePacket::PUT_OR_CALL_NO_VALUE = 0xFF;
const int8_t eurexAddFlexibleInstrumentResponsePacket::EXERCISE_STYLE_MIN = 0;
const int8_t eurexAddFlexibleInstrumentResponsePacket::EXERCISE_STYLE_MAX = 1;
const int8_t eurexAddFlexibleInstrumentResponsePacket::EXERCISE_STYLE_NO_VALUE = 0xFF;
const char eurexAddFlexibleInstrumentResponsePacket::SYMBOL_NO_VALUE[4] = {0x00, 0x00, 0x00, 0x00};
const size_t eurexAddFlexibleInstrumentResponsePacket::SYMBOL_MAX_LENGTH = 4;
const char eurexAddFlexibleInstrumentResponsePacket::PAD7_NO_VALUE[7] = {0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00};
const size_t eurexAddFlexibleInstrumentResponsePacket::PAD7_MAX_LENGTH = 7;


} // namespace neueda

#endif // EUREX_ADDFLEXIBLEINSTRUMENTRESPONSE_PACKET_H
