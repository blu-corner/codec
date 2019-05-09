/*
 * Copyright 2014-2018 Neueda Ltd.
 * 
 * Generated 09/05/2019
 */
#ifndef XETRA_XETRAENLIGHTQUOTEREQUESTERNOTIFICATION_PACKET_H
#define XETRA_XETRAENLIGHTQUOTEREQUESTERNOTIFICATION_PACKET_H

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

class xetraXetraEnLightQuoteRequesterNotificationPacket
{
    public:
        // no value constants
        static const uint64_t TRANSACT_TIME_MIN;
        static const uint64_t TRANSACT_TIME_MAX;
        static const uint64_t TRANSACT_TIME_NO_VALUE;
        static const uint32_t NEGOTIATION_ID_MIN;
        static const uint32_t NEGOTIATION_ID_MAX;
        static const uint32_t NEGOTIATION_ID_NO_VALUE;
        static const uint32_t TRADE_ID_MIN;
        static const uint32_t TRADE_ID_MAX;
        static const uint32_t TRADE_ID_NO_VALUE;
        static const char QUOTE_REQ_ID_NO_VALUE[20];
        static const size_t QUOTE_REQ_ID_MAX_LENGTH;
        static const int8_t NO_QUOTE_ENTRIES_MIN;
        static const int8_t NO_QUOTE_ENTRIES_MAX;
        static const int8_t NO_QUOTE_ENTRIES_NO_VALUE;
        static const char PAD3_NO_VALUE[3];
        static const size_t PAD3_MAX_LENGTH;
        static const size_t SRQSQUOTE_ENTRY_GRP_MIN;
        static const size_t SRQSQUOTE_ENTRY_GRP_MAX;

        // fields (use with care)
        xetraMessageHeaderOutCompPacket mMessageHeaderOut;
        xetraRBCHeaderCompPacket mRBCHeader;
        uint64_t mTransactTime;
        uint32_t mNegotiationID;
        uint32_t mTradeID;
        char mQuoteReqID[20];
        int8_t mNoQuoteEntries;
        char mPad3[3];
        vector<xetraSRQSQuoteEntryGrpCompPacket> mSRQSQuoteEntryGrp;

        // constructor
        xetraXetraEnLightQuoteRequesterNotificationPacket ()
        {
            mMessageHeaderOut.mTemplateID = 10816;
            mTransactTime = TRANSACT_TIME_NO_VALUE;
            mNegotiationID = NEGOTIATION_ID_NO_VALUE;
            mTradeID = TRADE_ID_NO_VALUE;
            memcpy(mQuoteReqID, QUOTE_REQ_ID_NO_VALUE, sizeof (mQuoteReqID));
            mNoQuoteEntries = NO_QUOTE_ENTRIES_NO_VALUE;
            memcpy(mPad3, PAD3_NO_VALUE, sizeof (mPad3));
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

        const xetraRBCHeaderCompPacket& getRBCHeader () const
        {
            return mRBCHeader;
        }

        bool setRBCHeader (const xetraRBCHeaderCompPacket& v)
        {
            mRBCHeader = v;
            return true;
        }

        uint64_t getTransactTime () const
        {
            return mTransactTime;
        }

        bool setTransactTime (uint64_t v)
        {
            mTransactTime = v;
            return ((TRANSACT_TIME_MIN <= mTransactTime && mTransactTime <= TRANSACT_TIME_MAX) || mTransactTime == TRANSACT_TIME_NO_VALUE);
        }

        bool isTransactTimeValid () const
        {
            return (mTransactTime != TRANSACT_TIME_NO_VALUE);
        }

        void resetTransactTime ()
        {
            mTransactTime = TRANSACT_TIME_NO_VALUE;
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

        uint32_t getTradeID () const
        {
            return mTradeID;
        }

        bool setTradeID (uint32_t v)
        {
            mTradeID = v;
            return ((TRADE_ID_MIN <= mTradeID && mTradeID <= TRADE_ID_MAX) || mTradeID == TRADE_ID_NO_VALUE);
        }

        bool isTradeIDValid () const
        {
            return (mTradeID != TRADE_ID_NO_VALUE);
        }

        void resetTradeID ()
        {
            mTradeID = TRADE_ID_NO_VALUE;
        }

        string getQuoteReqID () const
        {
            return string (mQuoteReqID, QUOTE_REQ_ID_MAX_LENGTH);
        }

        bool setQuoteReqID (const string& v)
        {
            memset (mQuoteReqID, '\0', sizeof (mQuoteReqID));
            size_t size = min ((size_t) v.size (), (size_t) QUOTE_REQ_ID_MAX_LENGTH);
            strncpy (mQuoteReqID, v.c_str (), size);
            return (v.size () <= QUOTE_REQ_ID_MAX_LENGTH);
        }

        bool isQuoteReqIDValid () const
        {
            return (memcmp (mQuoteReqID, QUOTE_REQ_ID_NO_VALUE, sizeof (mQuoteReqID)) != 0);
        }

        void resetQuoteReqID ()
        {
            memcpy (mQuoteReqID, QUOTE_REQ_ID_NO_VALUE, sizeof (mQuoteReqID));
        }

        int8_t getNoQuoteEntries () const
        {
            return mNoQuoteEntries;
        }

        bool setNoQuoteEntries (int8_t v)
        {
            mNoQuoteEntries = v;
            return ((NO_QUOTE_ENTRIES_MIN <= mNoQuoteEntries && mNoQuoteEntries <= NO_QUOTE_ENTRIES_MAX) || mNoQuoteEntries == NO_QUOTE_ENTRIES_NO_VALUE);
        }

        bool isNoQuoteEntriesValid () const
        {
            return (mNoQuoteEntries != NO_QUOTE_ENTRIES_NO_VALUE);
        }

        void resetNoQuoteEntries ()
        {
            mNoQuoteEntries = NO_QUOTE_ENTRIES_NO_VALUE;
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

        const vector<xetraSRQSQuoteEntryGrpCompPacket>& getSRQSQuoteEntryGrp () const
        {
            return mSRQSQuoteEntryGrp;
        }

        bool setSRQSQuoteEntryGrp (const vector<xetraSRQSQuoteEntryGrpCompPacket>& v)
        {
            mSRQSQuoteEntryGrp = v;
            mNoQuoteEntries = v.size ();
            return (SRQSQUOTE_ENTRY_GRP_MIN <= v.size () && v.size () <= SRQSQUOTE_ENTRY_GRP_MAX);
        }


        // render current raw size
        size_t getRawSize () const
        {
            size_t result = mMessageHeaderOut.getRawSize()
                + mRBCHeader.getRawSize()
                + sizeof (mTransactTime)
                + sizeof (mNegotiationID)
                + sizeof (mTradeID)
                + sizeof (mQuoteReqID)
                + sizeof (mNoQuoteEntries)
                + sizeof (mPad3)
                + xetra::getRawSize (mSRQSQuoteEntryGrp);
            return result;
        }

        // serialization
        codecState serialize (void *buf, size_t len, size_t &used)
        {
            mNoQuoteEntries = mSRQSQuoteEntryGrp.size ();
            mMessageHeaderOut.mBodyLen = getRawSize ();
            codecState state;
            state = mMessageHeaderOut.serialize (buf, len, used);
            if (state != GW_CODEC_SUCCESS) return state;
            state = mRBCHeader.serialize (buf, len, used);
            if (state != GW_CODEC_SUCCESS) return state;
            state = xetra::serialize (mTransactTime, buf, len, used);
            if (state != GW_CODEC_SUCCESS) return state;
            state = xetra::serialize (mNegotiationID, buf, len, used);
            if (state != GW_CODEC_SUCCESS) return state;
            state = xetra::serialize (mTradeID, buf, len, used);
            if (state != GW_CODEC_SUCCESS) return state;
            state = xetra::serialize (mQuoteReqID, buf, len, used);
            if (state != GW_CODEC_SUCCESS) return state;
            state = xetra::serialize (mNoQuoteEntries, buf, len, used);
            if (state != GW_CODEC_SUCCESS) return state;
            state = xetra::serialize (mPad3, buf, len, used);
            if (state != GW_CODEC_SUCCESS) return state;
            for (size_t i = 0; i < mSRQSQuoteEntryGrp.size (); i++)
            {
                state = mSRQSQuoteEntryGrp[i].serialize (buf, len, used);
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
            state = mRBCHeader.deserialize (buf, len, used);
            if (state != GW_CODEC_SUCCESS) return state;
            state = xetra::deserialize (mTransactTime, buf, len, used);
            if (state != GW_CODEC_SUCCESS) return state;
            state = xetra::deserialize (mNegotiationID, buf, len, used);
            if (state != GW_CODEC_SUCCESS) return state;
            state = xetra::deserialize (mTradeID, buf, len, used);
            if (state != GW_CODEC_SUCCESS) return state;
            state = xetra::deserialize (mQuoteReqID, buf, len, used);
            if (state != GW_CODEC_SUCCESS) return state;
            state = xetra::deserialize (mNoQuoteEntries, buf, len, used);
            if (state != GW_CODEC_SUCCESS) return state;
            state = xetra::deserialize (mPad3, buf, len, used);
            if (state != GW_CODEC_SUCCESS) return state;
            mSRQSQuoteEntryGrp.resize (mNoQuoteEntries);
            for (vector<xetraSRQSQuoteEntryGrpCompPacket>::iterator it = mSRQSQuoteEntryGrp.begin (); it != mSRQSQuoteEntryGrp.end (); ++it)
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
            sss << "XetraEnLightQuoteRequesterNotification::"
                << "[MessageHeaderOut=" << mMessageHeaderOut.toString () << "],"
                << "[RBCHeader=" << mRBCHeader.toString () << "],"
                << "[TransactTime=" << getTransactTime () << "],"
                << "[NegotiationID=" << getNegotiationID () << "],"
                << "[TradeID=" << getTradeID () << "],"
                << "[QuoteReqID=" << getQuoteReqID () << "],"
                << "[NoQuoteEntries=" << getNoQuoteEntries () << "],"
                << "[Pad3=" << getPad3 () << "],"
                << "[SRQSQuoteEntryGrp=" << xetra::toString (getSRQSQuoteEntryGrp ()) << "]";
            return sss.str();
        }
};

const uint64_t xetraXetraEnLightQuoteRequesterNotificationPacket::TRANSACT_TIME_MIN = 0UL;
const uint64_t xetraXetraEnLightQuoteRequesterNotificationPacket::TRANSACT_TIME_MAX = 18446744073709551614UL;
const uint64_t xetraXetraEnLightQuoteRequesterNotificationPacket::TRANSACT_TIME_NO_VALUE = 0xFFFFFFFFFFFFFFFF;
const uint32_t xetraXetraEnLightQuoteRequesterNotificationPacket::NEGOTIATION_ID_MIN = 0;
const uint32_t xetraXetraEnLightQuoteRequesterNotificationPacket::NEGOTIATION_ID_MAX = 4294967294;
const uint32_t xetraXetraEnLightQuoteRequesterNotificationPacket::NEGOTIATION_ID_NO_VALUE = 0xFFFFFFFF;
const uint32_t xetraXetraEnLightQuoteRequesterNotificationPacket::TRADE_ID_MIN = 0;
const uint32_t xetraXetraEnLightQuoteRequesterNotificationPacket::TRADE_ID_MAX = 4294967294;
const uint32_t xetraXetraEnLightQuoteRequesterNotificationPacket::TRADE_ID_NO_VALUE = 0xFFFFFFFF;
const char xetraXetraEnLightQuoteRequesterNotificationPacket::QUOTE_REQ_ID_NO_VALUE[20] = {0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00};
const size_t xetraXetraEnLightQuoteRequesterNotificationPacket::QUOTE_REQ_ID_MAX_LENGTH = 20;
const int8_t xetraXetraEnLightQuoteRequesterNotificationPacket::NO_QUOTE_ENTRIES_MIN = 0;
const int8_t xetraXetraEnLightQuoteRequesterNotificationPacket::NO_QUOTE_ENTRIES_MAX = 100;
const int8_t xetraXetraEnLightQuoteRequesterNotificationPacket::NO_QUOTE_ENTRIES_NO_VALUE = 0xFF;
const char xetraXetraEnLightQuoteRequesterNotificationPacket::PAD3_NO_VALUE[3] = {0x00, 0x00, 0x00};
const size_t xetraXetraEnLightQuoteRequesterNotificationPacket::PAD3_MAX_LENGTH = 3;
const size_t xetraXetraEnLightQuoteRequesterNotificationPacket::SRQSQUOTE_ENTRY_GRP_MIN = 0;
const size_t xetraXetraEnLightQuoteRequesterNotificationPacket::SRQSQUOTE_ENTRY_GRP_MAX = 100;


} // namespace neueda

#endif // XETRA_XETRAENLIGHTQUOTEREQUESTERNOTIFICATION_PACKET_H
