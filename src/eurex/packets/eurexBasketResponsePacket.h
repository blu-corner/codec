/*
 * Copyright 2014-2018 Neueda Ltd.
 * 
 * Generated 24/04/2019
 */
#ifndef EUREX_BASKETRESPONSE_PACKET_H
#define EUREX_BASKETRESPONSE_PACKET_H

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

class eurexBasketResponsePacket
{
    public:
        // no value constants
        static const uint32_t BASKET_EXEC_ID_MIN;
        static const uint32_t BASKET_EXEC_ID_MAX;
        static const uint32_t BASKET_EXEC_ID_NO_VALUE;
        static const char TRADE_REPORT_ID_NO_VALUE[20];
        static const size_t TRADE_REPORT_ID_MAX_LENGTH;

        // fields (use with care)
        eurexMessageHeaderOutCompPacket mMessageHeaderOut;
        eurexResponseHeaderCompPacket mResponseHeader;
        uint32_t mBasketExecID;
        char mTradeReportID[20];

        // constructor
        eurexBasketResponsePacket ()
        {
            mMessageHeaderOut.mTemplateID = 10624;
            mBasketExecID = BASKET_EXEC_ID_NO_VALUE;
            memcpy(mTradeReportID, TRADE_REPORT_ID_NO_VALUE, sizeof (mTradeReportID));
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

        const eurexResponseHeaderCompPacket& getResponseHeader () const
        {
            return mResponseHeader;
        }

        bool setResponseHeader (const eurexResponseHeaderCompPacket& v)
        {
            mResponseHeader = v;
            return true;
        }

        uint32_t getBasketExecID () const
        {
            return mBasketExecID;
        }

        bool setBasketExecID (uint32_t v)
        {
            mBasketExecID = v;
            return ((BASKET_EXEC_ID_MIN <= mBasketExecID && mBasketExecID <= BASKET_EXEC_ID_MAX) || mBasketExecID == BASKET_EXEC_ID_NO_VALUE);
        }

        bool isBasketExecIDValid () const
        {
            return (mBasketExecID != BASKET_EXEC_ID_NO_VALUE);
        }

        void resetBasketExecID ()
        {
            mBasketExecID = BASKET_EXEC_ID_NO_VALUE;
        }

        string getTradeReportID () const
        {
            return string (mTradeReportID, TRADE_REPORT_ID_MAX_LENGTH);
        }

        bool setTradeReportID (const string& v)
        {
            memset (mTradeReportID, '\0', sizeof (mTradeReportID));
            size_t size = min ((size_t) v.size (), (size_t) TRADE_REPORT_ID_MAX_LENGTH);
            strncpy (mTradeReportID, v.c_str (), size);
            return (v.size () <= TRADE_REPORT_ID_MAX_LENGTH);
        }

        bool isTradeReportIDValid () const
        {
            return (memcmp (mTradeReportID, TRADE_REPORT_ID_NO_VALUE, sizeof (mTradeReportID)) != 0);
        }

        void resetTradeReportID ()
        {
            memcpy (mTradeReportID, TRADE_REPORT_ID_NO_VALUE, sizeof (mTradeReportID));
        }


        // render current raw size
        size_t getRawSize () const
        {
            size_t result = mMessageHeaderOut.getRawSize()
                + mResponseHeader.getRawSize()
                + sizeof (mBasketExecID)
                + sizeof (mTradeReportID);
            return result;
        }

        // serialization
        codecState serialize (void *buf, size_t len, size_t &used)
        {
            mMessageHeaderOut.mBodyLen = getRawSize ();
            codecState state;
            state = mMessageHeaderOut.serialize (buf, len, used);
            if (state != GW_CODEC_SUCCESS) return state;
            state = mResponseHeader.serialize (buf, len, used);
            if (state != GW_CODEC_SUCCESS) return state;
            state = eurex::serialize (mBasketExecID, buf, len, used);
            if (state != GW_CODEC_SUCCESS) return state;
            state = eurex::serialize (mTradeReportID, buf, len, used);
            if (state != GW_CODEC_SUCCESS) return state;
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
            state = eurex::deserialize (mBasketExecID, buf, len, used);
            if (state != GW_CODEC_SUCCESS) return state;
            state = eurex::deserialize (mTradeReportID, buf, len, used);
            if (state != GW_CODEC_SUCCESS) return state;
            mMessageHeaderOut.mBodyLen = getRawSize ();
            return GW_CODEC_SUCCESS;
        }

        // string conversion
        string toString () const
        {
            stringstream sss;
            sss << "BasketResponse::"
                << "[MessageHeaderOut=" << mMessageHeaderOut.toString () << "],"
                << "[ResponseHeader=" << mResponseHeader.toString () << "],"
                << "[BasketExecID=" << getBasketExecID () << "],"
                << "[TradeReportID=" << getTradeReportID () << "]";
            return sss.str();
        }
};

const uint32_t eurexBasketResponsePacket::BASKET_EXEC_ID_MIN = 0;
const uint32_t eurexBasketResponsePacket::BASKET_EXEC_ID_MAX = 4294967294;
const uint32_t eurexBasketResponsePacket::BASKET_EXEC_ID_NO_VALUE = 0xFFFFFFFF;
const char eurexBasketResponsePacket::TRADE_REPORT_ID_NO_VALUE[20] = {0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00};
const size_t eurexBasketResponsePacket::TRADE_REPORT_ID_MAX_LENGTH = 20;


} // namespace neueda

#endif // EUREX_BASKETRESPONSE_PACKET_H
