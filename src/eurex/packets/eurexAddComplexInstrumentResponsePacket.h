/*
 * Copyright 2014-2018 Neueda Ltd.
 * 
 * Generated 24/04/2019
 */
#ifndef EUREX_ADDCOMPLEXINSTRUMENTRESPONSE_PACKET_H
#define EUREX_ADDCOMPLEXINSTRUMENTRESPONSE_PACKET_H

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

class eurexAddComplexInstrumentResponsePacket
{
    public:
        // no value constants
        static const double LOW_LIMIT_PRICE_MIN;
        static const double LOW_LIMIT_PRICE_MAX;
        static const int64_t LOW_LIMIT_PRICE_NO_VALUE;
        static const double HIGH_LIMIT_PRICE_MIN;
        static const double HIGH_LIMIT_PRICE_MAX;
        static const int64_t HIGH_LIMIT_PRICE_NO_VALUE;
        static const int64_t SECURITY_ID_MIN;
        static const int64_t SECURITY_ID_MAX;
        static const int64_t SECURITY_ID_NO_VALUE;
        static const uint64_t LAST_UPDATE_TIME_MIN;
        static const uint64_t LAST_UPDATE_TIME_MAX;
        static const uint64_t LAST_UPDATE_TIME_NO_VALUE;
        static const uint64_t SECURITY_RESPONSE_ID_MIN;
        static const uint64_t SECURITY_RESPONSE_ID_MAX;
        static const uint64_t SECURITY_RESPONSE_ID_NO_VALUE;
        static const int32_t MARKET_SEGMENT_ID_MIN;
        static const int32_t MARKET_SEGMENT_ID_MAX;
        static const int32_t MARKET_SEGMENT_ID_NO_VALUE;
        static const int32_t NUMBER_OF_SECURITIES_MIN;
        static const int32_t NUMBER_OF_SECURITIES_MAX;
        static const int32_t NUMBER_OF_SECURITIES_NO_VALUE;
        static const int32_t SECURITY_SUB_TYPE_MIN;
        static const int32_t SECURITY_SUB_TYPE_MAX;
        static const int32_t SECURITY_SUB_TYPE_NO_VALUE;
        static const int8_t MULTILEG_MODEL_MIN;
        static const int8_t MULTILEG_MODEL_MAX;
        static const int8_t MULTILEG_MODEL_NO_VALUE;
        static const int8_t IMPLIED_MARKET_INDICATOR_MIN;
        static const int8_t IMPLIED_MARKET_INDICATOR_MAX;
        static const int8_t IMPLIED_MARKET_INDICATOR_NO_VALUE;
        static const int8_t PRODUCT_COMPLEX_MIN;
        static const int8_t PRODUCT_COMPLEX_MAX;
        static const int8_t PRODUCT_COMPLEX_NO_VALUE;
        static const int8_t NO_LEGS_MIN;
        static const int8_t NO_LEGS_MAX;
        static const int8_t NO_LEGS_NO_VALUE;
        static const size_t INSTRMT_LEG_GRP_MIN;
        static const size_t INSTRMT_LEG_GRP_MAX;

        // fields (use with care)
        eurexMessageHeaderOutCompPacket mMessageHeaderOut;
        eurexNRResponseHeaderMECompPacket mNRResponseHeaderME;
        int64_t mLowLimitPrice;
        int64_t mHighLimitPrice;
        int64_t mSecurityID;
        uint64_t mLastUpdateTime;
        uint64_t mSecurityResponseID;
        int32_t mMarketSegmentID;
        int32_t mNumberOfSecurities;
        int32_t mSecuritySubType;
        int8_t mMultilegModel;
        int8_t mImpliedMarketIndicator;
        int8_t mProductComplex;
        int8_t mNoLegs;
        vector<eurexInstrmtLegGrpCompPacket> mInstrmtLegGrp;

        // constructor
        eurexAddComplexInstrumentResponsePacket ()
        {
            mMessageHeaderOut.mTemplateID = 10302;
            mLowLimitPrice = LOW_LIMIT_PRICE_NO_VALUE;
            mHighLimitPrice = HIGH_LIMIT_PRICE_NO_VALUE;
            mSecurityID = SECURITY_ID_NO_VALUE;
            mLastUpdateTime = LAST_UPDATE_TIME_NO_VALUE;
            mSecurityResponseID = SECURITY_RESPONSE_ID_NO_VALUE;
            mMarketSegmentID = MARKET_SEGMENT_ID_NO_VALUE;
            mNumberOfSecurities = NUMBER_OF_SECURITIES_NO_VALUE;
            mSecuritySubType = SECURITY_SUB_TYPE_NO_VALUE;
            mMultilegModel = MULTILEG_MODEL_NO_VALUE;
            mImpliedMarketIndicator = IMPLIED_MARKET_INDICATOR_NO_VALUE;
            mProductComplex = PRODUCT_COMPLEX_NO_VALUE;
            mNoLegs = NO_LEGS_NO_VALUE;
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

        double getLowLimitPrice () const
        {
            return mLowLimitPrice / 100000000.0;
        }

        bool setLowLimitPrice (double v)
        {
            mLowLimitPrice = v * 100000000.0;
            return ((LOW_LIMIT_PRICE_MIN <= v && v <= LOW_LIMIT_PRICE_MAX) || mLowLimitPrice == LOW_LIMIT_PRICE_NO_VALUE);
        }

        bool isLowLimitPriceValid () const
        {
            return (mLowLimitPrice != LOW_LIMIT_PRICE_NO_VALUE);
        }

        void resetLowLimitPrice ()
        {
            mLowLimitPrice = LOW_LIMIT_PRICE_NO_VALUE;
        }

        double getHighLimitPrice () const
        {
            return mHighLimitPrice / 100000000.0;
        }

        bool setHighLimitPrice (double v)
        {
            mHighLimitPrice = v * 100000000.0;
            return ((HIGH_LIMIT_PRICE_MIN <= v && v <= HIGH_LIMIT_PRICE_MAX) || mHighLimitPrice == HIGH_LIMIT_PRICE_NO_VALUE);
        }

        bool isHighLimitPriceValid () const
        {
            return (mHighLimitPrice != HIGH_LIMIT_PRICE_NO_VALUE);
        }

        void resetHighLimitPrice ()
        {
            mHighLimitPrice = HIGH_LIMIT_PRICE_NO_VALUE;
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

        uint64_t getLastUpdateTime () const
        {
            return mLastUpdateTime;
        }

        bool setLastUpdateTime (uint64_t v)
        {
            mLastUpdateTime = v;
            return ((LAST_UPDATE_TIME_MIN <= mLastUpdateTime && mLastUpdateTime <= LAST_UPDATE_TIME_MAX) || mLastUpdateTime == LAST_UPDATE_TIME_NO_VALUE);
        }

        bool isLastUpdateTimeValid () const
        {
            return (mLastUpdateTime != LAST_UPDATE_TIME_NO_VALUE);
        }

        void resetLastUpdateTime ()
        {
            mLastUpdateTime = LAST_UPDATE_TIME_NO_VALUE;
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

        int32_t getNumberOfSecurities () const
        {
            return mNumberOfSecurities;
        }

        bool setNumberOfSecurities (int32_t v)
        {
            mNumberOfSecurities = v;
            return ((NUMBER_OF_SECURITIES_MIN <= mNumberOfSecurities && mNumberOfSecurities <= NUMBER_OF_SECURITIES_MAX) || mNumberOfSecurities == NUMBER_OF_SECURITIES_NO_VALUE);
        }

        bool isNumberOfSecuritiesValid () const
        {
            return (mNumberOfSecurities != NUMBER_OF_SECURITIES_NO_VALUE);
        }

        void resetNumberOfSecurities ()
        {
            mNumberOfSecurities = NUMBER_OF_SECURITIES_NO_VALUE;
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

        int8_t getMultilegModel () const
        {
            return mMultilegModel;
        }

        bool setMultilegModel (int8_t v)
        {
            mMultilegModel = v;
            return ((MULTILEG_MODEL_MIN <= mMultilegModel && mMultilegModel <= MULTILEG_MODEL_MAX) || mMultilegModel == MULTILEG_MODEL_NO_VALUE);
        }

        bool isMultilegModelValid () const
        {
            return (mMultilegModel != MULTILEG_MODEL_NO_VALUE);
        }

        void resetMultilegModel ()
        {
            mMultilegModel = MULTILEG_MODEL_NO_VALUE;
        }

        int8_t getImpliedMarketIndicator () const
        {
            return mImpliedMarketIndicator;
        }

        bool setImpliedMarketIndicator (int8_t v)
        {
            mImpliedMarketIndicator = v;
            return ((IMPLIED_MARKET_INDICATOR_MIN <= mImpliedMarketIndicator && mImpliedMarketIndicator <= IMPLIED_MARKET_INDICATOR_MAX) || mImpliedMarketIndicator == IMPLIED_MARKET_INDICATOR_NO_VALUE);
        }

        bool isImpliedMarketIndicatorValid () const
        {
            return (mImpliedMarketIndicator != IMPLIED_MARKET_INDICATOR_NO_VALUE);
        }

        void resetImpliedMarketIndicator ()
        {
            mImpliedMarketIndicator = IMPLIED_MARKET_INDICATOR_NO_VALUE;
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
            size_t result = mMessageHeaderOut.getRawSize()
                + mNRResponseHeaderME.getRawSize()
                + sizeof (mLowLimitPrice)
                + sizeof (mHighLimitPrice)
                + sizeof (mSecurityID)
                + sizeof (mLastUpdateTime)
                + sizeof (mSecurityResponseID)
                + sizeof (mMarketSegmentID)
                + sizeof (mNumberOfSecurities)
                + sizeof (mSecuritySubType)
                + sizeof (mMultilegModel)
                + sizeof (mImpliedMarketIndicator)
                + sizeof (mProductComplex)
                + sizeof (mNoLegs)
                + eurex::getRawSize (mInstrmtLegGrp);
            return result;
        }

        // serialization
        codecState serialize (void *buf, size_t len, size_t &used)
        {
            mNoLegs = mInstrmtLegGrp.size ();
            mMessageHeaderOut.mBodyLen = getRawSize ();
            codecState state;
            state = mMessageHeaderOut.serialize (buf, len, used);
            if (state != GW_CODEC_SUCCESS) return state;
            state = mNRResponseHeaderME.serialize (buf, len, used);
            if (state != GW_CODEC_SUCCESS) return state;
            state = eurex::serialize (mLowLimitPrice, buf, len, used);
            if (state != GW_CODEC_SUCCESS) return state;
            state = eurex::serialize (mHighLimitPrice, buf, len, used);
            if (state != GW_CODEC_SUCCESS) return state;
            state = eurex::serialize (mSecurityID, buf, len, used);
            if (state != GW_CODEC_SUCCESS) return state;
            state = eurex::serialize (mLastUpdateTime, buf, len, used);
            if (state != GW_CODEC_SUCCESS) return state;
            state = eurex::serialize (mSecurityResponseID, buf, len, used);
            if (state != GW_CODEC_SUCCESS) return state;
            state = eurex::serialize (mMarketSegmentID, buf, len, used);
            if (state != GW_CODEC_SUCCESS) return state;
            state = eurex::serialize (mNumberOfSecurities, buf, len, used);
            if (state != GW_CODEC_SUCCESS) return state;
            state = eurex::serialize (mSecuritySubType, buf, len, used);
            if (state != GW_CODEC_SUCCESS) return state;
            state = eurex::serialize (mMultilegModel, buf, len, used);
            if (state != GW_CODEC_SUCCESS) return state;
            state = eurex::serialize (mImpliedMarketIndicator, buf, len, used);
            if (state != GW_CODEC_SUCCESS) return state;
            state = eurex::serialize (mProductComplex, buf, len, used);
            if (state != GW_CODEC_SUCCESS) return state;
            state = eurex::serialize (mNoLegs, buf, len, used);
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
            state = mMessageHeaderOut.deserialize (buf, len, used);
            if (state != GW_CODEC_SUCCESS) return state;
            state = mNRResponseHeaderME.deserialize (buf, len, used);
            if (state != GW_CODEC_SUCCESS) return state;
            state = eurex::deserialize (mLowLimitPrice, buf, len, used);
            if (state != GW_CODEC_SUCCESS) return state;
            state = eurex::deserialize (mHighLimitPrice, buf, len, used);
            if (state != GW_CODEC_SUCCESS) return state;
            state = eurex::deserialize (mSecurityID, buf, len, used);
            if (state != GW_CODEC_SUCCESS) return state;
            state = eurex::deserialize (mLastUpdateTime, buf, len, used);
            if (state != GW_CODEC_SUCCESS) return state;
            state = eurex::deserialize (mSecurityResponseID, buf, len, used);
            if (state != GW_CODEC_SUCCESS) return state;
            state = eurex::deserialize (mMarketSegmentID, buf, len, used);
            if (state != GW_CODEC_SUCCESS) return state;
            state = eurex::deserialize (mNumberOfSecurities, buf, len, used);
            if (state != GW_CODEC_SUCCESS) return state;
            state = eurex::deserialize (mSecuritySubType, buf, len, used);
            if (state != GW_CODEC_SUCCESS) return state;
            state = eurex::deserialize (mMultilegModel, buf, len, used);
            if (state != GW_CODEC_SUCCESS) return state;
            state = eurex::deserialize (mImpliedMarketIndicator, buf, len, used);
            if (state != GW_CODEC_SUCCESS) return state;
            state = eurex::deserialize (mProductComplex, buf, len, used);
            if (state != GW_CODEC_SUCCESS) return state;
            state = eurex::deserialize (mNoLegs, buf, len, used);
            if (state != GW_CODEC_SUCCESS) return state;
            mInstrmtLegGrp.resize (mNoLegs);
            for (vector<eurexInstrmtLegGrpCompPacket>::iterator it = mInstrmtLegGrp.begin (); it != mInstrmtLegGrp.end (); ++it)
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
            sss << "AddComplexInstrumentResponse::"
                << "[MessageHeaderOut=" << mMessageHeaderOut.toString () << "],"
                << "[NRResponseHeaderME=" << mNRResponseHeaderME.toString () << "],"
                << "[LowLimitPrice=" << getLowLimitPrice () << "],"
                << "[HighLimitPrice=" << getHighLimitPrice () << "],"
                << "[SecurityID=" << getSecurityID () << "],"
                << "[LastUpdateTime=" << getLastUpdateTime () << "],"
                << "[SecurityResponseID=" << getSecurityResponseID () << "],"
                << "[MarketSegmentID=" << getMarketSegmentID () << "],"
                << "[NumberOfSecurities=" << getNumberOfSecurities () << "],"
                << "[SecuritySubType=" << getSecuritySubType () << "],"
                << "[MultilegModel=" << getMultilegModel () << "],"
                << "[ImpliedMarketIndicator=" << getImpliedMarketIndicator () << "],"
                << "[ProductComplex=" << getProductComplex () << "],"
                << "[NoLegs=" << getNoLegs () << "],"
                << "[InstrmtLegGrp=" << eurex::toString (getInstrmtLegGrp ()) << "]";
            return sss.str();
        }
};

const double eurexAddComplexInstrumentResponsePacket::LOW_LIMIT_PRICE_MIN = -92233720368.54775807;
const double eurexAddComplexInstrumentResponsePacket::LOW_LIMIT_PRICE_MAX = 92233720368.54775807;
const int64_t eurexAddComplexInstrumentResponsePacket::LOW_LIMIT_PRICE_NO_VALUE = 0x8000000000000000;
const double eurexAddComplexInstrumentResponsePacket::HIGH_LIMIT_PRICE_MIN = -92233720368.54775807;
const double eurexAddComplexInstrumentResponsePacket::HIGH_LIMIT_PRICE_MAX = 92233720368.54775807;
const int64_t eurexAddComplexInstrumentResponsePacket::HIGH_LIMIT_PRICE_NO_VALUE = 0x8000000000000000;
const int64_t eurexAddComplexInstrumentResponsePacket::SECURITY_ID_MIN = -9223372036854775807L;
const int64_t eurexAddComplexInstrumentResponsePacket::SECURITY_ID_MAX = 9223372036854775807L;
const int64_t eurexAddComplexInstrumentResponsePacket::SECURITY_ID_NO_VALUE = 0x8000000000000000;
const uint64_t eurexAddComplexInstrumentResponsePacket::LAST_UPDATE_TIME_MIN = 0UL;
const uint64_t eurexAddComplexInstrumentResponsePacket::LAST_UPDATE_TIME_MAX = 18446744073709551614UL;
const uint64_t eurexAddComplexInstrumentResponsePacket::LAST_UPDATE_TIME_NO_VALUE = 0xFFFFFFFFFFFFFFFF;
const uint64_t eurexAddComplexInstrumentResponsePacket::SECURITY_RESPONSE_ID_MIN = 0UL;
const uint64_t eurexAddComplexInstrumentResponsePacket::SECURITY_RESPONSE_ID_MAX = 18446744073709551614UL;
const uint64_t eurexAddComplexInstrumentResponsePacket::SECURITY_RESPONSE_ID_NO_VALUE = 0xFFFFFFFFFFFFFFFF;
const int32_t eurexAddComplexInstrumentResponsePacket::MARKET_SEGMENT_ID_MIN = -2147483647;
const int32_t eurexAddComplexInstrumentResponsePacket::MARKET_SEGMENT_ID_MAX = 2147483647;
const int32_t eurexAddComplexInstrumentResponsePacket::MARKET_SEGMENT_ID_NO_VALUE = 0x80000000;
const int32_t eurexAddComplexInstrumentResponsePacket::NUMBER_OF_SECURITIES_MIN = -2147483647;
const int32_t eurexAddComplexInstrumentResponsePacket::NUMBER_OF_SECURITIES_MAX = 2147483647;
const int32_t eurexAddComplexInstrumentResponsePacket::NUMBER_OF_SECURITIES_NO_VALUE = 0x80000000;
const int32_t eurexAddComplexInstrumentResponsePacket::SECURITY_SUB_TYPE_MIN = -2147483647;
const int32_t eurexAddComplexInstrumentResponsePacket::SECURITY_SUB_TYPE_MAX = 2147483647;
const int32_t eurexAddComplexInstrumentResponsePacket::SECURITY_SUB_TYPE_NO_VALUE = 0x80000000;
const int8_t eurexAddComplexInstrumentResponsePacket::MULTILEG_MODEL_MIN = 0;
const int8_t eurexAddComplexInstrumentResponsePacket::MULTILEG_MODEL_MAX = 1;
const int8_t eurexAddComplexInstrumentResponsePacket::MULTILEG_MODEL_NO_VALUE = 0xFF;
const int8_t eurexAddComplexInstrumentResponsePacket::IMPLIED_MARKET_INDICATOR_MIN = 0;
const int8_t eurexAddComplexInstrumentResponsePacket::IMPLIED_MARKET_INDICATOR_MAX = 3;
const int8_t eurexAddComplexInstrumentResponsePacket::IMPLIED_MARKET_INDICATOR_NO_VALUE = 0xFF;
const int8_t eurexAddComplexInstrumentResponsePacket::PRODUCT_COMPLEX_MIN = 1;
const int8_t eurexAddComplexInstrumentResponsePacket::PRODUCT_COMPLEX_MAX = 10;
const int8_t eurexAddComplexInstrumentResponsePacket::PRODUCT_COMPLEX_NO_VALUE = 0xFF;
const int8_t eurexAddComplexInstrumentResponsePacket::NO_LEGS_MIN = 0;
const int8_t eurexAddComplexInstrumentResponsePacket::NO_LEGS_MAX = 20;
const int8_t eurexAddComplexInstrumentResponsePacket::NO_LEGS_NO_VALUE = 0xFF;
const size_t eurexAddComplexInstrumentResponsePacket::INSTRMT_LEG_GRP_MIN = 0;
const size_t eurexAddComplexInstrumentResponsePacket::INSTRMT_LEG_GRP_MAX = 20;


} // namespace neueda

#endif // EUREX_ADDCOMPLEXINSTRUMENTRESPONSE_PACKET_H
