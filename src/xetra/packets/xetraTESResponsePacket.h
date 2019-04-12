/*
 * Copyright 2014-2018 Neueda Ltd.
 * 
 * Generated 11/04/2019
 */
#ifndef XETRA_TESRESPONSE_PACKET_H
#define XETRA_TESRESPONSE_PACKET_H

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

class xetraTESResponsePacket
{
    public:
        // no value constants
        static const uint32_t TESEXEC_ID_MIN;
        static const uint32_t TESEXEC_ID_MAX;
        static const uint32_t TESEXEC_ID_NO_VALUE;
        static const char TRADE_REPORT_ID_NO_VALUE[20];
        static const size_t TRADE_REPORT_ID_MAX_LENGTH;

        // fields (use with care)
        xetraMessageHeaderOutCompPacket mMessageHeaderOut;
        xetraResponseHeaderCompPacket mResponseHeader;
        uint32_t mTESExecID;
        char mTradeReportID[20];

        // constructor
        xetraTESResponsePacket ()
        {
            mMessageHeaderOut.mTemplateID = 10611;
            mTESExecID = TESEXEC_ID_NO_VALUE;
            memcpy(mTradeReportID, TRADE_REPORT_ID_NO_VALUE, sizeof (mTradeReportID));
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

        uint32_t getTESExecID () const
        {
            return mTESExecID;
        }

        bool setTESExecID (uint32_t v)
        {
            mTESExecID = v;
            return ((TESEXEC_ID_MIN <= mTESExecID && mTESExecID <= TESEXEC_ID_MAX) || mTESExecID == TESEXEC_ID_NO_VALUE);
        }

        bool isTESExecIDValid () const
        {
            return (mTESExecID != TESEXEC_ID_NO_VALUE);
        }

        void resetTESExecID ()
        {
            mTESExecID = TESEXEC_ID_NO_VALUE;
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
                + sizeof (mTESExecID)
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
            state = xetra::serialize (mTESExecID, buf, len, used);
            if (state != GW_CODEC_SUCCESS) return state;
            state = xetra::serialize (mTradeReportID, buf, len, used);
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
            state = xetra::deserialize (mTESExecID, buf, len, used);
            if (state != GW_CODEC_SUCCESS) return state;
            state = xetra::deserialize (mTradeReportID, buf, len, used);
            if (state != GW_CODEC_SUCCESS) return state;
            mMessageHeaderOut.mBodyLen = getRawSize ();
            return GW_CODEC_SUCCESS;
        }

        // string conversion
        string toString () const
        {
            stringstream sss;
            sss << "TESResponse::"
                << "[MessageHeaderOut=" << mMessageHeaderOut.toString () << "],"
                << "[ResponseHeader=" << mResponseHeader.toString () << "],"
                << "[TESExecID=" << getTESExecID () << "],"
                << "[TradeReportID=" << getTradeReportID () << "]";
            return sss.str();
        }
};

const uint32_t xetraTESResponsePacket::TESEXEC_ID_MIN = 0;
const uint32_t xetraTESResponsePacket::TESEXEC_ID_MAX = 4294967294;
const uint32_t xetraTESResponsePacket::TESEXEC_ID_NO_VALUE = 0xFFFFFFFF;
const char xetraTESResponsePacket::TRADE_REPORT_ID_NO_VALUE[20] = {0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00};
const size_t xetraTESResponsePacket::TRADE_REPORT_ID_MAX_LENGTH = 20;


} // namespace neueda

#endif // XETRA_TESRESPONSE_PACKET_H
