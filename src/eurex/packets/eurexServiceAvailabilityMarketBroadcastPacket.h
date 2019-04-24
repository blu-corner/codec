/*
 * Copyright 2014-2018 Neueda Ltd.
 * 
 * Generated 24/04/2019
 */
#ifndef EUREX_SERVICEAVAILABILITYMARKETBROADCAST_PACKET_H
#define EUREX_SERVICEAVAILABILITYMARKETBROADCAST_PACKET_H

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

class eurexServiceAvailabilityMarketBroadcastPacket
{
    public:
        // no value constants
        static const int32_t SELECTIVE_REQUEST_FOR_QUOTE_SERVICE_TRADE_DATE_MIN;
        static const int32_t SELECTIVE_REQUEST_FOR_QUOTE_SERVICE_TRADE_DATE_MAX;
        static const int32_t SELECTIVE_REQUEST_FOR_QUOTE_SERVICE_TRADE_DATE_NO_VALUE;
        static const int8_t SELECTIVE_REQUEST_FOR_QUOTE_SERVICE_STATUS_MIN;
        static const int8_t SELECTIVE_REQUEST_FOR_QUOTE_SERVICE_STATUS_MAX;
        static const int8_t SELECTIVE_REQUEST_FOR_QUOTE_SERVICE_STATUS_NO_VALUE;
        static const char PAD3_NO_VALUE[3];
        static const size_t PAD3_MAX_LENGTH;

        // fields (use with care)
        eurexMessageHeaderOutCompPacket mMessageHeaderOut;
        eurexNRBCHeaderCompPacket mNRBCHeader;
        int32_t mSelectiveRequestForQuoteServiceTradeDate;
        int8_t mSelectiveRequestForQuoteServiceStatus;
        char mPad3[3];

        // constructor
        eurexServiceAvailabilityMarketBroadcastPacket ()
        {
            mMessageHeaderOut.mTemplateID = 10044;
            mSelectiveRequestForQuoteServiceTradeDate = SELECTIVE_REQUEST_FOR_QUOTE_SERVICE_TRADE_DATE_NO_VALUE;
            mSelectiveRequestForQuoteServiceStatus = SELECTIVE_REQUEST_FOR_QUOTE_SERVICE_STATUS_NO_VALUE;
            memcpy(mPad3, PAD3_NO_VALUE, sizeof (mPad3));
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

        const eurexNRBCHeaderCompPacket& getNRBCHeader () const
        {
            return mNRBCHeader;
        }

        bool setNRBCHeader (const eurexNRBCHeaderCompPacket& v)
        {
            mNRBCHeader = v;
            return true;
        }

        int32_t getSelectiveRequestForQuoteServiceTradeDate () const
        {
            return mSelectiveRequestForQuoteServiceTradeDate;
        }

        bool setSelectiveRequestForQuoteServiceTradeDate (int32_t v)
        {
            mSelectiveRequestForQuoteServiceTradeDate = v;
            return ((SELECTIVE_REQUEST_FOR_QUOTE_SERVICE_TRADE_DATE_MIN <= mSelectiveRequestForQuoteServiceTradeDate && mSelectiveRequestForQuoteServiceTradeDate <= SELECTIVE_REQUEST_FOR_QUOTE_SERVICE_TRADE_DATE_MAX) || mSelectiveRequestForQuoteServiceTradeDate == SELECTIVE_REQUEST_FOR_QUOTE_SERVICE_TRADE_DATE_NO_VALUE);
        }

        bool isSelectiveRequestForQuoteServiceTradeDateValid () const
        {
            return (mSelectiveRequestForQuoteServiceTradeDate != SELECTIVE_REQUEST_FOR_QUOTE_SERVICE_TRADE_DATE_NO_VALUE);
        }

        void resetSelectiveRequestForQuoteServiceTradeDate ()
        {
            mSelectiveRequestForQuoteServiceTradeDate = SELECTIVE_REQUEST_FOR_QUOTE_SERVICE_TRADE_DATE_NO_VALUE;
        }

        int8_t getSelectiveRequestForQuoteServiceStatus () const
        {
            return mSelectiveRequestForQuoteServiceStatus;
        }

        bool setSelectiveRequestForQuoteServiceStatus (int8_t v)
        {
            mSelectiveRequestForQuoteServiceStatus = v;
            return ((SELECTIVE_REQUEST_FOR_QUOTE_SERVICE_STATUS_MIN <= mSelectiveRequestForQuoteServiceStatus && mSelectiveRequestForQuoteServiceStatus <= SELECTIVE_REQUEST_FOR_QUOTE_SERVICE_STATUS_MAX) || mSelectiveRequestForQuoteServiceStatus == SELECTIVE_REQUEST_FOR_QUOTE_SERVICE_STATUS_NO_VALUE);
        }

        bool isSelectiveRequestForQuoteServiceStatusValid () const
        {
            return (mSelectiveRequestForQuoteServiceStatus != SELECTIVE_REQUEST_FOR_QUOTE_SERVICE_STATUS_NO_VALUE);
        }

        void resetSelectiveRequestForQuoteServiceStatus ()
        {
            mSelectiveRequestForQuoteServiceStatus = SELECTIVE_REQUEST_FOR_QUOTE_SERVICE_STATUS_NO_VALUE;
        }

        string getPad3 () const
        {
            return string (mPad3, PAD3_MAX_LENGTH);
        }

        bool setPad3 (const string& v)
        {
            memset (mPad3, '\0', sizeof (mPad3));
            size_t size = min ((size_t) v.size (), (size_t) PAD3_MAX_LENGTH);
            strncpy (mPad3, v.c_str (), size);
            return (v.size () <= PAD3_MAX_LENGTH);
        }

        bool isPad3Valid () const
        {
            return (memcmp (mPad3, PAD3_NO_VALUE, sizeof (mPad3)) != 0);
        }

        void resetPad3 ()
        {
            memcpy (mPad3, PAD3_NO_VALUE, sizeof (mPad3));
        }


        // render current raw size
        size_t getRawSize () const
        {
            size_t result = mMessageHeaderOut.getRawSize()
                + mNRBCHeader.getRawSize()
                + sizeof (mSelectiveRequestForQuoteServiceTradeDate)
                + sizeof (mSelectiveRequestForQuoteServiceStatus)
                + sizeof (mPad3);
            return result;
        }

        // serialization
        codecState serialize (void *buf, size_t len, size_t &used)
        {
            mMessageHeaderOut.mBodyLen = getRawSize ();
            codecState state;
            state = mMessageHeaderOut.serialize (buf, len, used);
            if (state != GW_CODEC_SUCCESS) return state;
            state = mNRBCHeader.serialize (buf, len, used);
            if (state != GW_CODEC_SUCCESS) return state;
            state = eurex::serialize (mSelectiveRequestForQuoteServiceTradeDate, buf, len, used);
            if (state != GW_CODEC_SUCCESS) return state;
            state = eurex::serialize (mSelectiveRequestForQuoteServiceStatus, buf, len, used);
            if (state != GW_CODEC_SUCCESS) return state;
            state = eurex::serialize (mPad3, buf, len, used);
            if (state != GW_CODEC_SUCCESS) return state;
            return GW_CODEC_SUCCESS;
        }

        // deserialization
        codecState deserialize (const void *buf, size_t len, size_t &used)
        {
            codecState state;
            state = mMessageHeaderOut.deserialize (buf, len, used);
            if (state != GW_CODEC_SUCCESS) return state;
            state = mNRBCHeader.deserialize (buf, len, used);
            if (state != GW_CODEC_SUCCESS) return state;
            state = eurex::deserialize (mSelectiveRequestForQuoteServiceTradeDate, buf, len, used);
            if (state != GW_CODEC_SUCCESS) return state;
            state = eurex::deserialize (mSelectiveRequestForQuoteServiceStatus, buf, len, used);
            if (state != GW_CODEC_SUCCESS) return state;
            state = eurex::deserialize (mPad3, buf, len, used);
            if (state != GW_CODEC_SUCCESS) return state;
            mMessageHeaderOut.mBodyLen = getRawSize ();
            return GW_CODEC_SUCCESS;
        }

        // string conversion
        string toString () const
        {
            stringstream sss;
            sss << "ServiceAvailabilityMarketBroadcast::"
                << "[MessageHeaderOut=" << mMessageHeaderOut.toString () << "],"
                << "[NRBCHeader=" << mNRBCHeader.toString () << "],"
                << "[SelectiveRequestForQuoteServiceTradeDate=" << getSelectiveRequestForQuoteServiceTradeDate () << "],"
                << "[SelectiveRequestForQuoteServiceStatus=" << getSelectiveRequestForQuoteServiceStatus () << "],"
                << "[Pad3=" << getPad3 () << "]";
            return sss.str();
        }
};

const int32_t eurexServiceAvailabilityMarketBroadcastPacket::SELECTIVE_REQUEST_FOR_QUOTE_SERVICE_TRADE_DATE_MIN = 0;
const int32_t eurexServiceAvailabilityMarketBroadcastPacket::SELECTIVE_REQUEST_FOR_QUOTE_SERVICE_TRADE_DATE_MAX = 99991231;
const int32_t eurexServiceAvailabilityMarketBroadcastPacket::SELECTIVE_REQUEST_FOR_QUOTE_SERVICE_TRADE_DATE_NO_VALUE = 0xFFFFFFFF;
const int8_t eurexServiceAvailabilityMarketBroadcastPacket::SELECTIVE_REQUEST_FOR_QUOTE_SERVICE_STATUS_MIN = 0;
const int8_t eurexServiceAvailabilityMarketBroadcastPacket::SELECTIVE_REQUEST_FOR_QUOTE_SERVICE_STATUS_MAX = 1;
const int8_t eurexServiceAvailabilityMarketBroadcastPacket::SELECTIVE_REQUEST_FOR_QUOTE_SERVICE_STATUS_NO_VALUE = 0xFF;
const char eurexServiceAvailabilityMarketBroadcastPacket::PAD3_NO_VALUE[3] = {0x00, 0x00, 0x00};
const size_t eurexServiceAvailabilityMarketBroadcastPacket::PAD3_MAX_LENGTH = 3;


} // namespace neueda

#endif // EUREX_SERVICEAVAILABILITYMARKETBROADCAST_PACKET_H
