/*
 * Copyright 2014-2018 Neueda Ltd.
 * 
 * Generated 24/04/2019
 */
#ifndef EUREX_APPROVEBASKETTRADEREQUEST_PACKET_H
#define EUREX_APPROVEBASKETTRADEREQUEST_PACKET_H

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

class eurexApproveBasketTradeRequestPacket
{
    public:
        // no value constants
        static const uint64_t BASKET_TRD_MATCH_ID_MIN;
        static const uint64_t BASKET_TRD_MATCH_ID_MAX;
        static const uint64_t BASKET_TRD_MATCH_ID_NO_VALUE;
        static const uint32_t BASKET_EXEC_ID_MIN;
        static const uint32_t BASKET_EXEC_ID_MAX;
        static const uint32_t BASKET_EXEC_ID_NO_VALUE;
        static const int32_t MARKET_SEGMENT_ID_MIN;
        static const int32_t MARKET_SEGMENT_ID_MAX;
        static const int32_t MARKET_SEGMENT_ID_NO_VALUE;
        static const int16_t ROOT_PARTY_SUB_IDTYPE_MIN;
        static const int16_t ROOT_PARTY_SUB_IDTYPE_MAX;
        static const int16_t ROOT_PARTY_SUB_IDTYPE_NO_VALUE;
        static const int16_t TRD_TYPE_MIN;
        static const int16_t TRD_TYPE_MAX;
        static const int16_t TRD_TYPE_NO_VALUE;
        static const int8_t TRADE_REPORT_TYPE_MIN;
        static const int8_t TRADE_REPORT_TYPE_MAX;
        static const int8_t TRADE_REPORT_TYPE_NO_VALUE;
        static const uint8_t NO_BASKET_SIDE_ALLOC_MIN;
        static const uint8_t NO_BASKET_SIDE_ALLOC_MAX;
        static const uint8_t NO_BASKET_SIDE_ALLOC_NO_VALUE;
        static const char BASKET_TRADE_REPORT_TEXT_NO_VALUE[20];
        static const size_t BASKET_TRADE_REPORT_TEXT_MAX_LENGTH;
        static const char TRADE_REPORT_ID_NO_VALUE[20];
        static const size_t TRADE_REPORT_ID_MAX_LENGTH;
        static const char BASKET_SIDE_TRADE_REPORT_ID_NO_VALUE[20];
        static const size_t BASKET_SIDE_TRADE_REPORT_ID_MAX_LENGTH;
        static const char PAD6_NO_VALUE[6];
        static const size_t PAD6_MAX_LENGTH;
        static const size_t BASKET_SIDE_ALLOC_EXT_GRP_MIN;
        static const size_t BASKET_SIDE_ALLOC_EXT_GRP_MAX;

        // fields (use with care)
        eurexMessageHeaderInCompPacket mMessageHeaderIn;
        eurexRequestHeaderCompPacket mRequestHeader;
        uint64_t mBasketTrdMatchID;
        uint32_t mBasketExecID;
        int32_t mMarketSegmentID;
        int16_t mRootPartySubIDType;
        int16_t mTrdType;
        int8_t mTradeReportType;
        uint8_t mNoBasketSideAlloc;
        char mBasketTradeReportText[20];
        char mTradeReportID[20];
        char mBasketSideTradeReportID[20];
        char mPad6[6];
        vector<eurexBasketSideAllocExtGrpCompPacket> mBasketSideAllocExtGrp;

        // constructor
        eurexApproveBasketTradeRequestPacket ()
        {
            mMessageHeaderIn.mTemplateID = 10623;
            mBasketTrdMatchID = BASKET_TRD_MATCH_ID_NO_VALUE;
            mBasketExecID = BASKET_EXEC_ID_NO_VALUE;
            mMarketSegmentID = MARKET_SEGMENT_ID_NO_VALUE;
            mRootPartySubIDType = ROOT_PARTY_SUB_IDTYPE_NO_VALUE;
            mTrdType = TRD_TYPE_NO_VALUE;
            mTradeReportType = TRADE_REPORT_TYPE_NO_VALUE;
            mNoBasketSideAlloc = NO_BASKET_SIDE_ALLOC_NO_VALUE;
            memcpy(mBasketTradeReportText, BASKET_TRADE_REPORT_TEXT_NO_VALUE, sizeof (mBasketTradeReportText));
            memcpy(mTradeReportID, TRADE_REPORT_ID_NO_VALUE, sizeof (mTradeReportID));
            memcpy(mBasketSideTradeReportID, BASKET_SIDE_TRADE_REPORT_ID_NO_VALUE, sizeof (mBasketSideTradeReportID));
            memcpy(mPad6, PAD6_NO_VALUE, sizeof (mPad6));
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

        uint64_t getBasketTrdMatchID () const
        {
            return mBasketTrdMatchID;
        }

        bool setBasketTrdMatchID (uint64_t v)
        {
            mBasketTrdMatchID = v;
            return ((BASKET_TRD_MATCH_ID_MIN <= mBasketTrdMatchID && mBasketTrdMatchID <= BASKET_TRD_MATCH_ID_MAX) || mBasketTrdMatchID == BASKET_TRD_MATCH_ID_NO_VALUE);
        }

        bool isBasketTrdMatchIDValid () const
        {
            return (mBasketTrdMatchID != BASKET_TRD_MATCH_ID_NO_VALUE);
        }

        void resetBasketTrdMatchID ()
        {
            mBasketTrdMatchID = BASKET_TRD_MATCH_ID_NO_VALUE;
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

        int16_t getRootPartySubIDType () const
        {
            return mRootPartySubIDType;
        }

        bool setRootPartySubIDType (int16_t v)
        {
            mRootPartySubIDType = v;
            return ((ROOT_PARTY_SUB_IDTYPE_MIN <= mRootPartySubIDType && mRootPartySubIDType <= ROOT_PARTY_SUB_IDTYPE_MAX) || mRootPartySubIDType == ROOT_PARTY_SUB_IDTYPE_NO_VALUE);
        }

        bool isRootPartySubIDTypeValid () const
        {
            return (mRootPartySubIDType != ROOT_PARTY_SUB_IDTYPE_NO_VALUE);
        }

        void resetRootPartySubIDType ()
        {
            mRootPartySubIDType = ROOT_PARTY_SUB_IDTYPE_NO_VALUE;
        }

        int16_t getTrdType () const
        {
            return mTrdType;
        }

        bool setTrdType (int16_t v)
        {
            mTrdType = v;
            return ((TRD_TYPE_MIN <= mTrdType && mTrdType <= TRD_TYPE_MAX) || mTrdType == TRD_TYPE_NO_VALUE);
        }

        bool isTrdTypeValid () const
        {
            return (mTrdType != TRD_TYPE_NO_VALUE);
        }

        void resetTrdType ()
        {
            mTrdType = TRD_TYPE_NO_VALUE;
        }

        int8_t getTradeReportType () const
        {
            return mTradeReportType;
        }

        bool setTradeReportType (int8_t v)
        {
            mTradeReportType = v;
            return ((TRADE_REPORT_TYPE_MIN <= mTradeReportType && mTradeReportType <= TRADE_REPORT_TYPE_MAX) || mTradeReportType == TRADE_REPORT_TYPE_NO_VALUE);
        }

        bool isTradeReportTypeValid () const
        {
            return (mTradeReportType != TRADE_REPORT_TYPE_NO_VALUE);
        }

        void resetTradeReportType ()
        {
            mTradeReportType = TRADE_REPORT_TYPE_NO_VALUE;
        }

        uint8_t getNoBasketSideAlloc () const
        {
            return mNoBasketSideAlloc;
        }

        bool setNoBasketSideAlloc (uint8_t v)
        {
            mNoBasketSideAlloc = v;
            return ((NO_BASKET_SIDE_ALLOC_MIN <= mNoBasketSideAlloc && mNoBasketSideAlloc <= NO_BASKET_SIDE_ALLOC_MAX) || mNoBasketSideAlloc == NO_BASKET_SIDE_ALLOC_NO_VALUE);
        }

        bool isNoBasketSideAllocValid () const
        {
            return (mNoBasketSideAlloc != NO_BASKET_SIDE_ALLOC_NO_VALUE);
        }

        void resetNoBasketSideAlloc ()
        {
            mNoBasketSideAlloc = NO_BASKET_SIDE_ALLOC_NO_VALUE;
        }

        string getBasketTradeReportText () const
        {
            return string (mBasketTradeReportText, BASKET_TRADE_REPORT_TEXT_MAX_LENGTH);
        }

        bool setBasketTradeReportText (const string& v)
        {
            memset (mBasketTradeReportText, '\0', sizeof (mBasketTradeReportText));
            size_t size = min ((size_t) v.size (), (size_t) BASKET_TRADE_REPORT_TEXT_MAX_LENGTH);
            strncpy (mBasketTradeReportText, v.c_str (), size);
            return (v.size () <= BASKET_TRADE_REPORT_TEXT_MAX_LENGTH);
        }

        bool isBasketTradeReportTextValid () const
        {
            return (memcmp (mBasketTradeReportText, BASKET_TRADE_REPORT_TEXT_NO_VALUE, sizeof (mBasketTradeReportText)) != 0);
        }

        void resetBasketTradeReportText ()
        {
            memcpy (mBasketTradeReportText, BASKET_TRADE_REPORT_TEXT_NO_VALUE, sizeof (mBasketTradeReportText));
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

        string getBasketSideTradeReportID () const
        {
            return string (mBasketSideTradeReportID, BASKET_SIDE_TRADE_REPORT_ID_MAX_LENGTH);
        }

        bool setBasketSideTradeReportID (const string& v)
        {
            memset (mBasketSideTradeReportID, '\0', sizeof (mBasketSideTradeReportID));
            size_t size = min ((size_t) v.size (), (size_t) BASKET_SIDE_TRADE_REPORT_ID_MAX_LENGTH);
            strncpy (mBasketSideTradeReportID, v.c_str (), size);
            return (v.size () <= BASKET_SIDE_TRADE_REPORT_ID_MAX_LENGTH);
        }

        bool isBasketSideTradeReportIDValid () const
        {
            return (memcmp (mBasketSideTradeReportID, BASKET_SIDE_TRADE_REPORT_ID_NO_VALUE, sizeof (mBasketSideTradeReportID)) != 0);
        }

        void resetBasketSideTradeReportID ()
        {
            memcpy (mBasketSideTradeReportID, BASKET_SIDE_TRADE_REPORT_ID_NO_VALUE, sizeof (mBasketSideTradeReportID));
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

        const vector<eurexBasketSideAllocExtGrpCompPacket>& getBasketSideAllocExtGrp () const
        {
            return mBasketSideAllocExtGrp;
        }

        bool setBasketSideAllocExtGrp (const vector<eurexBasketSideAllocExtGrpCompPacket>& v)
        {
            mBasketSideAllocExtGrp = v;
            mNoBasketSideAlloc = v.size ();
            return (BASKET_SIDE_ALLOC_EXT_GRP_MIN <= v.size () && v.size () <= BASKET_SIDE_ALLOC_EXT_GRP_MAX);
        }


        // render current raw size
        size_t getRawSize () const
        {
            size_t result = mMessageHeaderIn.getRawSize()
                + mRequestHeader.getRawSize()
                + sizeof (mBasketTrdMatchID)
                + sizeof (mBasketExecID)
                + sizeof (mMarketSegmentID)
                + sizeof (mRootPartySubIDType)
                + sizeof (mTrdType)
                + sizeof (mTradeReportType)
                + sizeof (mNoBasketSideAlloc)
                + sizeof (mBasketTradeReportText)
                + sizeof (mTradeReportID)
                + sizeof (mBasketSideTradeReportID)
                + sizeof (mPad6)
                + eurex::getRawSize (mBasketSideAllocExtGrp);
            return result;
        }

        // serialization
        codecState serialize (void *buf, size_t len, size_t &used)
        {
            mNoBasketSideAlloc = mBasketSideAllocExtGrp.size ();
            mMessageHeaderIn.mBodyLen = getRawSize ();
            codecState state;
            state = mMessageHeaderIn.serialize (buf, len, used);
            if (state != GW_CODEC_SUCCESS) return state;
            state = mRequestHeader.serialize (buf, len, used);
            if (state != GW_CODEC_SUCCESS) return state;
            state = eurex::serialize (mBasketTrdMatchID, buf, len, used);
            if (state != GW_CODEC_SUCCESS) return state;
            state = eurex::serialize (mBasketExecID, buf, len, used);
            if (state != GW_CODEC_SUCCESS) return state;
            state = eurex::serialize (mMarketSegmentID, buf, len, used);
            if (state != GW_CODEC_SUCCESS) return state;
            state = eurex::serialize (mRootPartySubIDType, buf, len, used);
            if (state != GW_CODEC_SUCCESS) return state;
            state = eurex::serialize (mTrdType, buf, len, used);
            if (state != GW_CODEC_SUCCESS) return state;
            state = eurex::serialize (mTradeReportType, buf, len, used);
            if (state != GW_CODEC_SUCCESS) return state;
            state = eurex::serialize (mNoBasketSideAlloc, buf, len, used);
            if (state != GW_CODEC_SUCCESS) return state;
            state = eurex::serialize (mBasketTradeReportText, buf, len, used);
            if (state != GW_CODEC_SUCCESS) return state;
            state = eurex::serialize (mTradeReportID, buf, len, used);
            if (state != GW_CODEC_SUCCESS) return state;
            state = eurex::serialize (mBasketSideTradeReportID, buf, len, used);
            if (state != GW_CODEC_SUCCESS) return state;
            state = eurex::serialize (mPad6, buf, len, used);
            if (state != GW_CODEC_SUCCESS) return state;
            for (size_t i = 0; i < mBasketSideAllocExtGrp.size (); i++)
            {
                state = mBasketSideAllocExtGrp[i].serialize (buf, len, used);
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
            state = eurex::deserialize (mBasketTrdMatchID, buf, len, used);
            if (state != GW_CODEC_SUCCESS) return state;
            state = eurex::deserialize (mBasketExecID, buf, len, used);
            if (state != GW_CODEC_SUCCESS) return state;
            state = eurex::deserialize (mMarketSegmentID, buf, len, used);
            if (state != GW_CODEC_SUCCESS) return state;
            state = eurex::deserialize (mRootPartySubIDType, buf, len, used);
            if (state != GW_CODEC_SUCCESS) return state;
            state = eurex::deserialize (mTrdType, buf, len, used);
            if (state != GW_CODEC_SUCCESS) return state;
            state = eurex::deserialize (mTradeReportType, buf, len, used);
            if (state != GW_CODEC_SUCCESS) return state;
            state = eurex::deserialize (mNoBasketSideAlloc, buf, len, used);
            if (state != GW_CODEC_SUCCESS) return state;
            state = eurex::deserialize (mBasketTradeReportText, buf, len, used);
            if (state != GW_CODEC_SUCCESS) return state;
            state = eurex::deserialize (mTradeReportID, buf, len, used);
            if (state != GW_CODEC_SUCCESS) return state;
            state = eurex::deserialize (mBasketSideTradeReportID, buf, len, used);
            if (state != GW_CODEC_SUCCESS) return state;
            state = eurex::deserialize (mPad6, buf, len, used);
            if (state != GW_CODEC_SUCCESS) return state;
            mBasketSideAllocExtGrp.resize (mNoBasketSideAlloc);
            for (vector<eurexBasketSideAllocExtGrpCompPacket>::iterator it = mBasketSideAllocExtGrp.begin (); it != mBasketSideAllocExtGrp.end (); ++it)
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
            sss << "ApproveBasketTradeRequest::"
                << "[MessageHeaderIn=" << mMessageHeaderIn.toString () << "],"
                << "[RequestHeader=" << mRequestHeader.toString () << "],"
                << "[BasketTrdMatchID=" << getBasketTrdMatchID () << "],"
                << "[BasketExecID=" << getBasketExecID () << "],"
                << "[MarketSegmentID=" << getMarketSegmentID () << "],"
                << "[RootPartySubIDType=" << getRootPartySubIDType () << "],"
                << "[TrdType=" << getTrdType () << "],"
                << "[TradeReportType=" << getTradeReportType () << "],"
                << "[NoBasketSideAlloc=" << getNoBasketSideAlloc () << "],"
                << "[BasketTradeReportText=" << getBasketTradeReportText () << "],"
                << "[TradeReportID=" << getTradeReportID () << "],"
                << "[BasketSideTradeReportID=" << getBasketSideTradeReportID () << "],"
                << "[Pad6=" << getPad6 () << "],"
                << "[BasketSideAllocExtGrp=" << eurex::toString (getBasketSideAllocExtGrp ()) << "]";
            return sss.str();
        }
};

const uint64_t eurexApproveBasketTradeRequestPacket::BASKET_TRD_MATCH_ID_MIN = 0UL;
const uint64_t eurexApproveBasketTradeRequestPacket::BASKET_TRD_MATCH_ID_MAX = 18446744073709551614UL;
const uint64_t eurexApproveBasketTradeRequestPacket::BASKET_TRD_MATCH_ID_NO_VALUE = 0xFFFFFFFFFFFFFFFF;
const uint32_t eurexApproveBasketTradeRequestPacket::BASKET_EXEC_ID_MIN = 0;
const uint32_t eurexApproveBasketTradeRequestPacket::BASKET_EXEC_ID_MAX = 4294967294;
const uint32_t eurexApproveBasketTradeRequestPacket::BASKET_EXEC_ID_NO_VALUE = 0xFFFFFFFF;
const int32_t eurexApproveBasketTradeRequestPacket::MARKET_SEGMENT_ID_MIN = -2147483647;
const int32_t eurexApproveBasketTradeRequestPacket::MARKET_SEGMENT_ID_MAX = 2147483647;
const int32_t eurexApproveBasketTradeRequestPacket::MARKET_SEGMENT_ID_NO_VALUE = 0x80000000;
const int16_t eurexApproveBasketTradeRequestPacket::ROOT_PARTY_SUB_IDTYPE_MIN = 4001;
const int16_t eurexApproveBasketTradeRequestPacket::ROOT_PARTY_SUB_IDTYPE_MAX = 4003;
const int16_t eurexApproveBasketTradeRequestPacket::ROOT_PARTY_SUB_IDTYPE_NO_VALUE = 0xFFFF;
const int16_t eurexApproveBasketTradeRequestPacket::TRD_TYPE_MIN = 1;
const int16_t eurexApproveBasketTradeRequestPacket::TRD_TYPE_MAX = 1010;
const int16_t eurexApproveBasketTradeRequestPacket::TRD_TYPE_NO_VALUE = 0xFFFF;
const int8_t eurexApproveBasketTradeRequestPacket::TRADE_REPORT_TYPE_MIN = 0;
const int8_t eurexApproveBasketTradeRequestPacket::TRADE_REPORT_TYPE_MAX = 13;
const int8_t eurexApproveBasketTradeRequestPacket::TRADE_REPORT_TYPE_NO_VALUE = 0xFF;
const uint8_t eurexApproveBasketTradeRequestPacket::NO_BASKET_SIDE_ALLOC_MIN = 1;
const uint8_t eurexApproveBasketTradeRequestPacket::NO_BASKET_SIDE_ALLOC_MAX = 198;
const uint8_t eurexApproveBasketTradeRequestPacket::NO_BASKET_SIDE_ALLOC_NO_VALUE = 0xFF;
const char eurexApproveBasketTradeRequestPacket::BASKET_TRADE_REPORT_TEXT_NO_VALUE[20] = {0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00};
const size_t eurexApproveBasketTradeRequestPacket::BASKET_TRADE_REPORT_TEXT_MAX_LENGTH = 20;
const char eurexApproveBasketTradeRequestPacket::TRADE_REPORT_ID_NO_VALUE[20] = {0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00};
const size_t eurexApproveBasketTradeRequestPacket::TRADE_REPORT_ID_MAX_LENGTH = 20;
const char eurexApproveBasketTradeRequestPacket::BASKET_SIDE_TRADE_REPORT_ID_NO_VALUE[20] = {0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00};
const size_t eurexApproveBasketTradeRequestPacket::BASKET_SIDE_TRADE_REPORT_ID_MAX_LENGTH = 20;
const char eurexApproveBasketTradeRequestPacket::PAD6_NO_VALUE[6] = {0x00, 0x00, 0x00, 0x00, 0x00, 0x00};
const size_t eurexApproveBasketTradeRequestPacket::PAD6_MAX_LENGTH = 6;
const size_t eurexApproveBasketTradeRequestPacket::BASKET_SIDE_ALLOC_EXT_GRP_MIN = 1;
const size_t eurexApproveBasketTradeRequestPacket::BASKET_SIDE_ALLOC_EXT_GRP_MAX = 198;


} // namespace neueda

#endif // EUREX_APPROVEBASKETTRADEREQUEST_PACKET_H
