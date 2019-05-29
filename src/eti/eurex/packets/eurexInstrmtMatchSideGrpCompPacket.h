/*
 * Copyright 2014-2018 Neueda Ltd.
 * 
 * Generated 21/05/2019
 */
#ifndef EUREX_INSTRMTMATCHSIDEGRPCOMP_PACKET_H
#define EUREX_INSTRMTMATCHSIDEGRPCOMP_PACKET_H

#include <string>
#include <vector>
#include <sstream>
#include <cstddef>
#include <stdint.h>
#include "eurexPackets.h"
#include "EtiPacketUtils.h"

namespace neueda
{

using namespace std;

class eurexInstrmtMatchSideGrpCompPacket
{
    public:
        // no value constants
        static const int64_t SECURITY_ID_MIN;
        static const int64_t SECURITY_ID_MAX;
        static const int64_t SECURITY_ID_NO_VALUE;
        static const double LAST_PX_MIN;
        static const double LAST_PX_MAX;
        static const int64_t LAST_PX_NO_VALUE;
        static const uint64_t TRANS_BKD_TIME_MIN;
        static const uint64_t TRANS_BKD_TIME_MAX;
        static const uint64_t TRANS_BKD_TIME_NO_VALUE;
        static const double RELATED_CLOSE_PRICE_MIN;
        static const double RELATED_CLOSE_PRICE_MAX;
        static const int64_t RELATED_CLOSE_PRICE_NO_VALUE;
        static const uint32_t PACKAGE_ID_MIN;
        static const uint32_t PACKAGE_ID_MAX;
        static const uint32_t PACKAGE_ID_NO_VALUE;
        static const int32_t SIDE_MARKET_SEGMENT_ID_MIN;
        static const int32_t SIDE_MARKET_SEGMENT_ID_MAX;
        static const int32_t SIDE_MARKET_SEGMENT_ID_NO_VALUE;
        static const uint32_t NEGOTIATION_ID_MIN;
        static const uint32_t NEGOTIATION_ID_MAX;
        static const uint32_t NEGOTIATION_ID_NO_VALUE;
        static const uint32_t SRQSRELATED_TRADE_ID_MIN;
        static const uint32_t SRQSRELATED_TRADE_ID_MAX;
        static const uint32_t SRQSRELATED_TRADE_ID_NO_VALUE;
        static const int16_t SIDE_TRD_SUB_TYP_MIN;
        static const int16_t SIDE_TRD_SUB_TYP_MAX;
        static const int16_t SIDE_TRD_SUB_TYP_NO_VALUE;
        static const int8_t PRODUCT_COMPLEX_MIN;
        static const int8_t PRODUCT_COMPLEX_MAX;
        static const int8_t PRODUCT_COMPLEX_NO_VALUE;
        static const int8_t TRADE_PUBLISH_INDICATOR_MIN;
        static const int8_t TRADE_PUBLISH_INDICATOR_MAX;
        static const int8_t TRADE_PUBLISH_INDICATOR_NO_VALUE;
        static const int8_t INSTRMT_MATCH_SIDE_ID_MIN;
        static const int8_t INSTRMT_MATCH_SIDE_ID_MAX;
        static const int8_t INSTRMT_MATCH_SIDE_ID_NO_VALUE;
        static const int8_t EFFECT_ON_BASKET_MIN;
        static const int8_t EFFECT_ON_BASKET_MAX;
        static const int8_t EFFECT_ON_BASKET_NO_VALUE;
        static const char TRADE_REPORT_TEXT_NO_VALUE[20];
        static const size_t TRADE_REPORT_TEXT_MAX_LENGTH;
        static const char PAD6_NO_VALUE[6];
        static const size_t PAD6_MAX_LENGTH;

        // fields (use with care)
        int64_t mSecurityID;
        int64_t mLastPx;
        uint64_t mTransBkdTime;
        int64_t mRelatedClosePrice;
        uint32_t mPackageID;
        int32_t mSideMarketSegmentID;
        uint32_t mNegotiationID;
        uint32_t mSRQSRelatedTradeID;
        int16_t mSideTrdSubTyp;
        int8_t mProductComplex;
        int8_t mTradePublishIndicator;
        int8_t mInstrmtMatchSideID;
        int8_t mEffectOnBasket;
        char mTradeReportText[20];
        char mPad6[6];

        // constructor
        eurexInstrmtMatchSideGrpCompPacket ()
        {
            mSecurityID = SECURITY_ID_NO_VALUE;
            mLastPx = LAST_PX_NO_VALUE;
            mTransBkdTime = TRANS_BKD_TIME_NO_VALUE;
            mRelatedClosePrice = RELATED_CLOSE_PRICE_NO_VALUE;
            mPackageID = PACKAGE_ID_NO_VALUE;
            mSideMarketSegmentID = SIDE_MARKET_SEGMENT_ID_NO_VALUE;
            mNegotiationID = NEGOTIATION_ID_NO_VALUE;
            mSRQSRelatedTradeID = SRQSRELATED_TRADE_ID_NO_VALUE;
            mSideTrdSubTyp = SIDE_TRD_SUB_TYP_NO_VALUE;
            mProductComplex = PRODUCT_COMPLEX_NO_VALUE;
            mTradePublishIndicator = TRADE_PUBLISH_INDICATOR_NO_VALUE;
            mInstrmtMatchSideID = INSTRMT_MATCH_SIDE_ID_NO_VALUE;
            mEffectOnBasket = EFFECT_ON_BASKET_NO_VALUE;
            memcpy(mTradeReportText, TRADE_REPORT_TEXT_NO_VALUE, sizeof (mTradeReportText));
            memcpy(mPad6, PAD6_NO_VALUE, sizeof (mPad6));
        }

        // getters & setters
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

        double getLastPx () const
        {
            return mLastPx / 100000000.0;
        }

        bool setLastPx (double v)
        {
            mLastPx = v * 100000000.0;
            return ((LAST_PX_MIN <= v && v <= LAST_PX_MAX) || mLastPx == LAST_PX_NO_VALUE);
        }

        bool isLastPxValid () const
        {
            return (mLastPx != LAST_PX_NO_VALUE);
        }

        void resetLastPx ()
        {
            mLastPx = LAST_PX_NO_VALUE;
        }

        uint64_t getTransBkdTime () const
        {
            return mTransBkdTime;
        }

        bool setTransBkdTime (uint64_t v)
        {
            mTransBkdTime = v;
            return ((TRANS_BKD_TIME_MIN <= mTransBkdTime && mTransBkdTime <= TRANS_BKD_TIME_MAX) || mTransBkdTime == TRANS_BKD_TIME_NO_VALUE);
        }

        bool isTransBkdTimeValid () const
        {
            return (mTransBkdTime != TRANS_BKD_TIME_NO_VALUE);
        }

        void resetTransBkdTime ()
        {
            mTransBkdTime = TRANS_BKD_TIME_NO_VALUE;
        }

        double getRelatedClosePrice () const
        {
            return mRelatedClosePrice / 1000000.0;
        }

        bool setRelatedClosePrice (double v)
        {
            mRelatedClosePrice = v * 1000000.0;
            return ((RELATED_CLOSE_PRICE_MIN <= v && v <= RELATED_CLOSE_PRICE_MAX) || mRelatedClosePrice == RELATED_CLOSE_PRICE_NO_VALUE);
        }

        bool isRelatedClosePriceValid () const
        {
            return (mRelatedClosePrice != RELATED_CLOSE_PRICE_NO_VALUE);
        }

        void resetRelatedClosePrice ()
        {
            mRelatedClosePrice = RELATED_CLOSE_PRICE_NO_VALUE;
        }

        uint32_t getPackageID () const
        {
            return mPackageID;
        }

        bool setPackageID (uint32_t v)
        {
            mPackageID = v;
            return ((PACKAGE_ID_MIN <= mPackageID && mPackageID <= PACKAGE_ID_MAX) || mPackageID == PACKAGE_ID_NO_VALUE);
        }

        bool isPackageIDValid () const
        {
            return (mPackageID != PACKAGE_ID_NO_VALUE);
        }

        void resetPackageID ()
        {
            mPackageID = PACKAGE_ID_NO_VALUE;
        }

        int32_t getSideMarketSegmentID () const
        {
            return mSideMarketSegmentID;
        }

        bool setSideMarketSegmentID (int32_t v)
        {
            mSideMarketSegmentID = v;
            return ((SIDE_MARKET_SEGMENT_ID_MIN <= mSideMarketSegmentID && mSideMarketSegmentID <= SIDE_MARKET_SEGMENT_ID_MAX) || mSideMarketSegmentID == SIDE_MARKET_SEGMENT_ID_NO_VALUE);
        }

        bool isSideMarketSegmentIDValid () const
        {
            return (mSideMarketSegmentID != SIDE_MARKET_SEGMENT_ID_NO_VALUE);
        }

        void resetSideMarketSegmentID ()
        {
            mSideMarketSegmentID = SIDE_MARKET_SEGMENT_ID_NO_VALUE;
        }

        uint32_t getNegotiationID () const
        {
            return mNegotiationID;
        }

        bool setNegotiationID (uint32_t v)
        {
            mNegotiationID = v;
            return ((NEGOTIATION_ID_MIN <= mNegotiationID && mNegotiationID <= NEGOTIATION_ID_MAX) || mNegotiationID == NEGOTIATION_ID_NO_VALUE);
        }

        bool isNegotiationIDValid () const
        {
            return (mNegotiationID != NEGOTIATION_ID_NO_VALUE);
        }

        void resetNegotiationID ()
        {
            mNegotiationID = NEGOTIATION_ID_NO_VALUE;
        }

        uint32_t getSRQSRelatedTradeID () const
        {
            return mSRQSRelatedTradeID;
        }

        bool setSRQSRelatedTradeID (uint32_t v)
        {
            mSRQSRelatedTradeID = v;
            return ((SRQSRELATED_TRADE_ID_MIN <= mSRQSRelatedTradeID && mSRQSRelatedTradeID <= SRQSRELATED_TRADE_ID_MAX) || mSRQSRelatedTradeID == SRQSRELATED_TRADE_ID_NO_VALUE);
        }

        bool isSRQSRelatedTradeIDValid () const
        {
            return (mSRQSRelatedTradeID != SRQSRELATED_TRADE_ID_NO_VALUE);
        }

        void resetSRQSRelatedTradeID ()
        {
            mSRQSRelatedTradeID = SRQSRELATED_TRADE_ID_NO_VALUE;
        }

        int16_t getSideTrdSubTyp () const
        {
            return mSideTrdSubTyp;
        }

        bool setSideTrdSubTyp (int16_t v)
        {
            mSideTrdSubTyp = v;
            return ((SIDE_TRD_SUB_TYP_MIN <= mSideTrdSubTyp && mSideTrdSubTyp <= SIDE_TRD_SUB_TYP_MAX) || mSideTrdSubTyp == SIDE_TRD_SUB_TYP_NO_VALUE);
        }

        bool isSideTrdSubTypValid () const
        {
            return (mSideTrdSubTyp != SIDE_TRD_SUB_TYP_NO_VALUE);
        }

        void resetSideTrdSubTyp ()
        {
            mSideTrdSubTyp = SIDE_TRD_SUB_TYP_NO_VALUE;
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

        int8_t getTradePublishIndicator () const
        {
            return mTradePublishIndicator;
        }

        bool setTradePublishIndicator (int8_t v)
        {
            mTradePublishIndicator = v;
            return ((TRADE_PUBLISH_INDICATOR_MIN <= mTradePublishIndicator && mTradePublishIndicator <= TRADE_PUBLISH_INDICATOR_MAX) || mTradePublishIndicator == TRADE_PUBLISH_INDICATOR_NO_VALUE);
        }

        bool isTradePublishIndicatorValid () const
        {
            return (mTradePublishIndicator != TRADE_PUBLISH_INDICATOR_NO_VALUE);
        }

        void resetTradePublishIndicator ()
        {
            mTradePublishIndicator = TRADE_PUBLISH_INDICATOR_NO_VALUE;
        }

        int8_t getInstrmtMatchSideID () const
        {
            return mInstrmtMatchSideID;
        }

        bool setInstrmtMatchSideID (int8_t v)
        {
            mInstrmtMatchSideID = v;
            return ((INSTRMT_MATCH_SIDE_ID_MIN <= mInstrmtMatchSideID && mInstrmtMatchSideID <= INSTRMT_MATCH_SIDE_ID_MAX) || mInstrmtMatchSideID == INSTRMT_MATCH_SIDE_ID_NO_VALUE);
        }

        bool isInstrmtMatchSideIDValid () const
        {
            return (mInstrmtMatchSideID != INSTRMT_MATCH_SIDE_ID_NO_VALUE);
        }

        void resetInstrmtMatchSideID ()
        {
            mInstrmtMatchSideID = INSTRMT_MATCH_SIDE_ID_NO_VALUE;
        }

        int8_t getEffectOnBasket () const
        {
            return mEffectOnBasket;
        }

        bool setEffectOnBasket (int8_t v)
        {
            mEffectOnBasket = v;
            return ((EFFECT_ON_BASKET_MIN <= mEffectOnBasket && mEffectOnBasket <= EFFECT_ON_BASKET_MAX) || mEffectOnBasket == EFFECT_ON_BASKET_NO_VALUE);
        }

        bool isEffectOnBasketValid () const
        {
            return (mEffectOnBasket != EFFECT_ON_BASKET_NO_VALUE);
        }

        void resetEffectOnBasket ()
        {
            mEffectOnBasket = EFFECT_ON_BASKET_NO_VALUE;
        }

        string getTradeReportText () const
        {
            return string (mTradeReportText, TRADE_REPORT_TEXT_MAX_LENGTH);
        }

        bool setTradeReportText (const string& v)
        {
            memset (mTradeReportText, '\0', sizeof (mTradeReportText));
            size_t size = min ((size_t) v.size (), (size_t) TRADE_REPORT_TEXT_MAX_LENGTH);
            strncpy (mTradeReportText, v.c_str (), size);
            return (v.size () <= TRADE_REPORT_TEXT_MAX_LENGTH);
        }

        bool isTradeReportTextValid () const
        {
            return (memcmp (mTradeReportText, TRADE_REPORT_TEXT_NO_VALUE, sizeof (mTradeReportText)) != 0);
        }

        void resetTradeReportText ()
        {
            memcpy (mTradeReportText, TRADE_REPORT_TEXT_NO_VALUE, sizeof (mTradeReportText));
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


        // render current raw size
        size_t getRawSize () const
        {
            size_t result = sizeof (mSecurityID)
                + sizeof (mLastPx)
                + sizeof (mTransBkdTime)
                + sizeof (mRelatedClosePrice)
                + sizeof (mPackageID)
                + sizeof (mSideMarketSegmentID)
                + sizeof (mNegotiationID)
                + sizeof (mSRQSRelatedTradeID)
                + sizeof (mSideTrdSubTyp)
                + sizeof (mProductComplex)
                + sizeof (mTradePublishIndicator)
                + sizeof (mInstrmtMatchSideID)
                + sizeof (mEffectOnBasket)
                + sizeof (mTradeReportText)
                + sizeof (mPad6);
            return result;
        }

        // serialization
        codecState serialize (void *buf, size_t len, size_t &used)
        {
            codecState state;
            state = eti::serialize (mSecurityID, buf, len, used);
            if (state != GW_CODEC_SUCCESS) return state;
            state = eti::serialize (mLastPx, buf, len, used);
            if (state != GW_CODEC_SUCCESS) return state;
            state = eti::serialize (mTransBkdTime, buf, len, used);
            if (state != GW_CODEC_SUCCESS) return state;
            state = eti::serialize (mRelatedClosePrice, buf, len, used);
            if (state != GW_CODEC_SUCCESS) return state;
            state = eti::serialize (mPackageID, buf, len, used);
            if (state != GW_CODEC_SUCCESS) return state;
            state = eti::serialize (mSideMarketSegmentID, buf, len, used);
            if (state != GW_CODEC_SUCCESS) return state;
            state = eti::serialize (mNegotiationID, buf, len, used);
            if (state != GW_CODEC_SUCCESS) return state;
            state = eti::serialize (mSRQSRelatedTradeID, buf, len, used);
            if (state != GW_CODEC_SUCCESS) return state;
            state = eti::serialize (mSideTrdSubTyp, buf, len, used);
            if (state != GW_CODEC_SUCCESS) return state;
            state = eti::serialize (mProductComplex, buf, len, used);
            if (state != GW_CODEC_SUCCESS) return state;
            state = eti::serialize (mTradePublishIndicator, buf, len, used);
            if (state != GW_CODEC_SUCCESS) return state;
            state = eti::serialize (mInstrmtMatchSideID, buf, len, used);
            if (state != GW_CODEC_SUCCESS) return state;
            state = eti::serialize (mEffectOnBasket, buf, len, used);
            if (state != GW_CODEC_SUCCESS) return state;
            state = eti::serialize (mTradeReportText, buf, len, used);
            if (state != GW_CODEC_SUCCESS) return state;
            state = eti::serialize (mPad6, buf, len, used);
            if (state != GW_CODEC_SUCCESS) return state;
            return GW_CODEC_SUCCESS;
        }

        // deserialization
        codecState deserialize (const void *buf, size_t len, size_t &used)
        {
            codecState state;
            state = eti::deserialize (mSecurityID, buf, len, used);
            if (state != GW_CODEC_SUCCESS) return state;
            state = eti::deserialize (mLastPx, buf, len, used);
            if (state != GW_CODEC_SUCCESS) return state;
            state = eti::deserialize (mTransBkdTime, buf, len, used);
            if (state != GW_CODEC_SUCCESS) return state;
            state = eti::deserialize (mRelatedClosePrice, buf, len, used);
            if (state != GW_CODEC_SUCCESS) return state;
            state = eti::deserialize (mPackageID, buf, len, used);
            if (state != GW_CODEC_SUCCESS) return state;
            state = eti::deserialize (mSideMarketSegmentID, buf, len, used);
            if (state != GW_CODEC_SUCCESS) return state;
            state = eti::deserialize (mNegotiationID, buf, len, used);
            if (state != GW_CODEC_SUCCESS) return state;
            state = eti::deserialize (mSRQSRelatedTradeID, buf, len, used);
            if (state != GW_CODEC_SUCCESS) return state;
            state = eti::deserialize (mSideTrdSubTyp, buf, len, used);
            if (state != GW_CODEC_SUCCESS) return state;
            state = eti::deserialize (mProductComplex, buf, len, used);
            if (state != GW_CODEC_SUCCESS) return state;
            state = eti::deserialize (mTradePublishIndicator, buf, len, used);
            if (state != GW_CODEC_SUCCESS) return state;
            state = eti::deserialize (mInstrmtMatchSideID, buf, len, used);
            if (state != GW_CODEC_SUCCESS) return state;
            state = eti::deserialize (mEffectOnBasket, buf, len, used);
            if (state != GW_CODEC_SUCCESS) return state;
            state = eti::deserialize (mTradeReportText, buf, len, used);
            if (state != GW_CODEC_SUCCESS) return state;
            state = eti::deserialize (mPad6, buf, len, used);
            if (state != GW_CODEC_SUCCESS) return state;
            return GW_CODEC_SUCCESS;
        }

        // string conversion
        string toString () const
        {
            stringstream sss;
            sss << "InstrmtMatchSideGrpComp::"
                << "[SecurityID=" << getSecurityID () << "],"
                << "[LastPx=" << getLastPx () << "],"
                << "[TransBkdTime=" << getTransBkdTime () << "],"
                << "[RelatedClosePrice=" << getRelatedClosePrice () << "],"
                << "[PackageID=" << getPackageID () << "],"
                << "[SideMarketSegmentID=" << getSideMarketSegmentID () << "],"
                << "[NegotiationID=" << getNegotiationID () << "],"
                << "[SRQSRelatedTradeID=" << getSRQSRelatedTradeID () << "],"
                << "[SideTrdSubTyp=" << getSideTrdSubTyp () << "],"
                << "[ProductComplex=" << getProductComplex () << "],"
                << "[TradePublishIndicator=" << getTradePublishIndicator () << "],"
                << "[InstrmtMatchSideID=" << getInstrmtMatchSideID () << "],"
                << "[EffectOnBasket=" << getEffectOnBasket () << "],"
                << "[TradeReportText=" << getTradeReportText () << "],"
                << "[Pad6=" << getPad6 () << "]";
            return sss.str();
        }
};

const int64_t eurexInstrmtMatchSideGrpCompPacket::SECURITY_ID_MIN = -9223372036854775807L;
const int64_t eurexInstrmtMatchSideGrpCompPacket::SECURITY_ID_MAX = 9223372036854775807L;
const int64_t eurexInstrmtMatchSideGrpCompPacket::SECURITY_ID_NO_VALUE = 0x8000000000000000;
const double eurexInstrmtMatchSideGrpCompPacket::LAST_PX_MIN = -92233720368.54775807;
const double eurexInstrmtMatchSideGrpCompPacket::LAST_PX_MAX = 92233720368.54775807;
const int64_t eurexInstrmtMatchSideGrpCompPacket::LAST_PX_NO_VALUE = 0x8000000000000000;
const uint64_t eurexInstrmtMatchSideGrpCompPacket::TRANS_BKD_TIME_MIN = 0UL;
const uint64_t eurexInstrmtMatchSideGrpCompPacket::TRANS_BKD_TIME_MAX = 18446744073709551614UL;
const uint64_t eurexInstrmtMatchSideGrpCompPacket::TRANS_BKD_TIME_NO_VALUE = 0xFFFFFFFFFFFFFFFF;
const double eurexInstrmtMatchSideGrpCompPacket::RELATED_CLOSE_PRICE_MIN = -9223372036854.775807;
const double eurexInstrmtMatchSideGrpCompPacket::RELATED_CLOSE_PRICE_MAX = 9223372036854.775807;
const int64_t eurexInstrmtMatchSideGrpCompPacket::RELATED_CLOSE_PRICE_NO_VALUE = 0x8000000000000000;
const uint32_t eurexInstrmtMatchSideGrpCompPacket::PACKAGE_ID_MIN = 0;
const uint32_t eurexInstrmtMatchSideGrpCompPacket::PACKAGE_ID_MAX = 4294967294;
const uint32_t eurexInstrmtMatchSideGrpCompPacket::PACKAGE_ID_NO_VALUE = 0xFFFFFFFF;
const int32_t eurexInstrmtMatchSideGrpCompPacket::SIDE_MARKET_SEGMENT_ID_MIN = -2147483647;
const int32_t eurexInstrmtMatchSideGrpCompPacket::SIDE_MARKET_SEGMENT_ID_MAX = 2147483647;
const int32_t eurexInstrmtMatchSideGrpCompPacket::SIDE_MARKET_SEGMENT_ID_NO_VALUE = 0x80000000;
const uint32_t eurexInstrmtMatchSideGrpCompPacket::NEGOTIATION_ID_MIN = 0;
const uint32_t eurexInstrmtMatchSideGrpCompPacket::NEGOTIATION_ID_MAX = 4294967294;
const uint32_t eurexInstrmtMatchSideGrpCompPacket::NEGOTIATION_ID_NO_VALUE = 0xFFFFFFFF;
const uint32_t eurexInstrmtMatchSideGrpCompPacket::SRQSRELATED_TRADE_ID_MIN = 0;
const uint32_t eurexInstrmtMatchSideGrpCompPacket::SRQSRELATED_TRADE_ID_MAX = 4294967294;
const uint32_t eurexInstrmtMatchSideGrpCompPacket::SRQSRELATED_TRADE_ID_NO_VALUE = 0xFFFFFFFF;
const int16_t eurexInstrmtMatchSideGrpCompPacket::SIDE_TRD_SUB_TYP_MIN = 2001;
const int16_t eurexInstrmtMatchSideGrpCompPacket::SIDE_TRD_SUB_TYP_MAX = 2004;
const int16_t eurexInstrmtMatchSideGrpCompPacket::SIDE_TRD_SUB_TYP_NO_VALUE = 0xFFFF;
const int8_t eurexInstrmtMatchSideGrpCompPacket::PRODUCT_COMPLEX_MIN = 1;
const int8_t eurexInstrmtMatchSideGrpCompPacket::PRODUCT_COMPLEX_MAX = 10;
const int8_t eurexInstrmtMatchSideGrpCompPacket::PRODUCT_COMPLEX_NO_VALUE = 0xFF;
const int8_t eurexInstrmtMatchSideGrpCompPacket::TRADE_PUBLISH_INDICATOR_MIN = 0;
const int8_t eurexInstrmtMatchSideGrpCompPacket::TRADE_PUBLISH_INDICATOR_MAX = 3;
const int8_t eurexInstrmtMatchSideGrpCompPacket::TRADE_PUBLISH_INDICATOR_NO_VALUE = 0xFF;
const int8_t eurexInstrmtMatchSideGrpCompPacket::INSTRMT_MATCH_SIDE_ID_MIN = 1;
const int8_t eurexInstrmtMatchSideGrpCompPacket::INSTRMT_MATCH_SIDE_ID_MAX = 99;
const int8_t eurexInstrmtMatchSideGrpCompPacket::INSTRMT_MATCH_SIDE_ID_NO_VALUE = 0xFF;
const int8_t eurexInstrmtMatchSideGrpCompPacket::EFFECT_ON_BASKET_MIN = 1;
const int8_t eurexInstrmtMatchSideGrpCompPacket::EFFECT_ON_BASKET_MAX = 2;
const int8_t eurexInstrmtMatchSideGrpCompPacket::EFFECT_ON_BASKET_NO_VALUE = 0xFF;
const char eurexInstrmtMatchSideGrpCompPacket::TRADE_REPORT_TEXT_NO_VALUE[20] = {0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00};
const size_t eurexInstrmtMatchSideGrpCompPacket::TRADE_REPORT_TEXT_MAX_LENGTH = 20;
const char eurexInstrmtMatchSideGrpCompPacket::PAD6_NO_VALUE[6] = {0x00, 0x00, 0x00, 0x00, 0x00, 0x00};
const size_t eurexInstrmtMatchSideGrpCompPacket::PAD6_MAX_LENGTH = 6;


} // namespace neueda

#endif // EUREX_INSTRMTMATCHSIDEGRPCOMP_PACKET_H
