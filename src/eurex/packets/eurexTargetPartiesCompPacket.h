/*
 * Copyright 2014-2018 Neueda Ltd.
 * 
 * Generated 24/04/2019
 */
#ifndef EUREX_TARGETPARTIESCOMP_PACKET_H
#define EUREX_TARGETPARTIESCOMP_PACKET_H

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

class eurexTargetPartiesCompPacket
{
    public:
        // no value constants
        static const int8_t SIDE_DISCLOSURE_INSTRUCTION_MIN;
        static const int8_t SIDE_DISCLOSURE_INSTRUCTION_MAX;
        static const int8_t SIDE_DISCLOSURE_INSTRUCTION_NO_VALUE;
        static const int8_t PRICE_DISCLOSURE_INSTRUCTION_MIN;
        static const int8_t PRICE_DISCLOSURE_INSTRUCTION_MAX;
        static const int8_t PRICE_DISCLOSURE_INSTRUCTION_NO_VALUE;
        static const int8_t LEAVES_QTY_DISCLOSURE_INSTRUCTION_MIN;
        static const int8_t LEAVES_QTY_DISCLOSURE_INSTRUCTION_MAX;
        static const int8_t LEAVES_QTY_DISCLOSURE_INSTRUCTION_NO_VALUE;
        static const int8_t LAST_PX_DISCLOSURE_INSTRUCTION_MIN;
        static const int8_t LAST_PX_DISCLOSURE_INSTRUCTION_MAX;
        static const int8_t LAST_PX_DISCLOSURE_INSTRUCTION_NO_VALUE;
        static const int8_t LAST_QTY_DISCLOSURE_INSTRUCTION_MIN;
        static const int8_t LAST_QTY_DISCLOSURE_INSTRUCTION_MAX;
        static const int8_t LAST_QTY_DISCLOSURE_INSTRUCTION_NO_VALUE;
        static const int8_t FREE_TEXT5DISCLOSURE_INSTRUCTION_MIN;
        static const int8_t FREE_TEXT5DISCLOSURE_INSTRUCTION_MAX;
        static const int8_t FREE_TEXT5DISCLOSURE_INSTRUCTION_NO_VALUE;
        static const int8_t QUOTE_INSTRUCTION_MIN;
        static const int8_t QUOTE_INSTRUCTION_MAX;
        static const int8_t QUOTE_INSTRUCTION_NO_VALUE;
        static const char TARGET_PARTY_EXECUTING_FIRM_NO_VALUE[5];
        static const size_t TARGET_PARTY_EXECUTING_FIRM_MAX_LENGTH;
        static const char TARGET_PARTY_EXECUTING_TRADER_NO_VALUE[6];
        static const size_t TARGET_PARTY_EXECUTING_TRADER_MAX_LENGTH;
        static const char PAD6_NO_VALUE[6];
        static const size_t PAD6_MAX_LENGTH;

        // fields (use with care)
        int8_t mSideDisclosureInstruction;
        int8_t mPriceDisclosureInstruction;
        int8_t mLeavesQtyDisclosureInstruction;
        int8_t mLastPxDisclosureInstruction;
        int8_t mLastQtyDisclosureInstruction;
        int8_t mFreeText5DisclosureInstruction;
        int8_t mQuoteInstruction;
        char mTargetPartyExecutingFirm[5];
        char mTargetPartyExecutingTrader[6];
        char mPad6[6];

        // constructor
        eurexTargetPartiesCompPacket ()
        {
            mSideDisclosureInstruction = SIDE_DISCLOSURE_INSTRUCTION_NO_VALUE;
            mPriceDisclosureInstruction = PRICE_DISCLOSURE_INSTRUCTION_NO_VALUE;
            mLeavesQtyDisclosureInstruction = LEAVES_QTY_DISCLOSURE_INSTRUCTION_NO_VALUE;
            mLastPxDisclosureInstruction = LAST_PX_DISCLOSURE_INSTRUCTION_NO_VALUE;
            mLastQtyDisclosureInstruction = LAST_QTY_DISCLOSURE_INSTRUCTION_NO_VALUE;
            mFreeText5DisclosureInstruction = FREE_TEXT5DISCLOSURE_INSTRUCTION_NO_VALUE;
            mQuoteInstruction = QUOTE_INSTRUCTION_NO_VALUE;
            memcpy(mTargetPartyExecutingFirm, TARGET_PARTY_EXECUTING_FIRM_NO_VALUE, sizeof (mTargetPartyExecutingFirm));
            memcpy(mTargetPartyExecutingTrader, TARGET_PARTY_EXECUTING_TRADER_NO_VALUE, sizeof (mTargetPartyExecutingTrader));
            memcpy(mPad6, PAD6_NO_VALUE, sizeof (mPad6));
        }

        // getters & setters
        int8_t getSideDisclosureInstruction () const
        {
            return mSideDisclosureInstruction;
        }

        bool setSideDisclosureInstruction (int8_t v)
        {
            mSideDisclosureInstruction = v;
            return ((SIDE_DISCLOSURE_INSTRUCTION_MIN <= mSideDisclosureInstruction && mSideDisclosureInstruction <= SIDE_DISCLOSURE_INSTRUCTION_MAX) || mSideDisclosureInstruction == SIDE_DISCLOSURE_INSTRUCTION_NO_VALUE);
        }

        bool isSideDisclosureInstructionValid () const
        {
            return (mSideDisclosureInstruction != SIDE_DISCLOSURE_INSTRUCTION_NO_VALUE);
        }

        void resetSideDisclosureInstruction ()
        {
            mSideDisclosureInstruction = SIDE_DISCLOSURE_INSTRUCTION_NO_VALUE;
        }

        int8_t getPriceDisclosureInstruction () const
        {
            return mPriceDisclosureInstruction;
        }

        bool setPriceDisclosureInstruction (int8_t v)
        {
            mPriceDisclosureInstruction = v;
            return ((PRICE_DISCLOSURE_INSTRUCTION_MIN <= mPriceDisclosureInstruction && mPriceDisclosureInstruction <= PRICE_DISCLOSURE_INSTRUCTION_MAX) || mPriceDisclosureInstruction == PRICE_DISCLOSURE_INSTRUCTION_NO_VALUE);
        }

        bool isPriceDisclosureInstructionValid () const
        {
            return (mPriceDisclosureInstruction != PRICE_DISCLOSURE_INSTRUCTION_NO_VALUE);
        }

        void resetPriceDisclosureInstruction ()
        {
            mPriceDisclosureInstruction = PRICE_DISCLOSURE_INSTRUCTION_NO_VALUE;
        }

        int8_t getLeavesQtyDisclosureInstruction () const
        {
            return mLeavesQtyDisclosureInstruction;
        }

        bool setLeavesQtyDisclosureInstruction (int8_t v)
        {
            mLeavesQtyDisclosureInstruction = v;
            return ((LEAVES_QTY_DISCLOSURE_INSTRUCTION_MIN <= mLeavesQtyDisclosureInstruction && mLeavesQtyDisclosureInstruction <= LEAVES_QTY_DISCLOSURE_INSTRUCTION_MAX) || mLeavesQtyDisclosureInstruction == LEAVES_QTY_DISCLOSURE_INSTRUCTION_NO_VALUE);
        }

        bool isLeavesQtyDisclosureInstructionValid () const
        {
            return (mLeavesQtyDisclosureInstruction != LEAVES_QTY_DISCLOSURE_INSTRUCTION_NO_VALUE);
        }

        void resetLeavesQtyDisclosureInstruction ()
        {
            mLeavesQtyDisclosureInstruction = LEAVES_QTY_DISCLOSURE_INSTRUCTION_NO_VALUE;
        }

        int8_t getLastPxDisclosureInstruction () const
        {
            return mLastPxDisclosureInstruction;
        }

        bool setLastPxDisclosureInstruction (int8_t v)
        {
            mLastPxDisclosureInstruction = v;
            return ((LAST_PX_DISCLOSURE_INSTRUCTION_MIN <= mLastPxDisclosureInstruction && mLastPxDisclosureInstruction <= LAST_PX_DISCLOSURE_INSTRUCTION_MAX) || mLastPxDisclosureInstruction == LAST_PX_DISCLOSURE_INSTRUCTION_NO_VALUE);
        }

        bool isLastPxDisclosureInstructionValid () const
        {
            return (mLastPxDisclosureInstruction != LAST_PX_DISCLOSURE_INSTRUCTION_NO_VALUE);
        }

        void resetLastPxDisclosureInstruction ()
        {
            mLastPxDisclosureInstruction = LAST_PX_DISCLOSURE_INSTRUCTION_NO_VALUE;
        }

        int8_t getLastQtyDisclosureInstruction () const
        {
            return mLastQtyDisclosureInstruction;
        }

        bool setLastQtyDisclosureInstruction (int8_t v)
        {
            mLastQtyDisclosureInstruction = v;
            return ((LAST_QTY_DISCLOSURE_INSTRUCTION_MIN <= mLastQtyDisclosureInstruction && mLastQtyDisclosureInstruction <= LAST_QTY_DISCLOSURE_INSTRUCTION_MAX) || mLastQtyDisclosureInstruction == LAST_QTY_DISCLOSURE_INSTRUCTION_NO_VALUE);
        }

        bool isLastQtyDisclosureInstructionValid () const
        {
            return (mLastQtyDisclosureInstruction != LAST_QTY_DISCLOSURE_INSTRUCTION_NO_VALUE);
        }

        void resetLastQtyDisclosureInstruction ()
        {
            mLastQtyDisclosureInstruction = LAST_QTY_DISCLOSURE_INSTRUCTION_NO_VALUE;
        }

        int8_t getFreeText5DisclosureInstruction () const
        {
            return mFreeText5DisclosureInstruction;
        }

        bool setFreeText5DisclosureInstruction (int8_t v)
        {
            mFreeText5DisclosureInstruction = v;
            return ((FREE_TEXT5DISCLOSURE_INSTRUCTION_MIN <= mFreeText5DisclosureInstruction && mFreeText5DisclosureInstruction <= FREE_TEXT5DISCLOSURE_INSTRUCTION_MAX) || mFreeText5DisclosureInstruction == FREE_TEXT5DISCLOSURE_INSTRUCTION_NO_VALUE);
        }

        bool isFreeText5DisclosureInstructionValid () const
        {
            return (mFreeText5DisclosureInstruction != FREE_TEXT5DISCLOSURE_INSTRUCTION_NO_VALUE);
        }

        void resetFreeText5DisclosureInstruction ()
        {
            mFreeText5DisclosureInstruction = FREE_TEXT5DISCLOSURE_INSTRUCTION_NO_VALUE;
        }

        int8_t getQuoteInstruction () const
        {
            return mQuoteInstruction;
        }

        bool setQuoteInstruction (int8_t v)
        {
            mQuoteInstruction = v;
            return ((QUOTE_INSTRUCTION_MIN <= mQuoteInstruction && mQuoteInstruction <= QUOTE_INSTRUCTION_MAX) || mQuoteInstruction == QUOTE_INSTRUCTION_NO_VALUE);
        }

        bool isQuoteInstructionValid () const
        {
            return (mQuoteInstruction != QUOTE_INSTRUCTION_NO_VALUE);
        }

        void resetQuoteInstruction ()
        {
            mQuoteInstruction = QUOTE_INSTRUCTION_NO_VALUE;
        }

        string getTargetPartyExecutingFirm () const
        {
            return string (mTargetPartyExecutingFirm, TARGET_PARTY_EXECUTING_FIRM_MAX_LENGTH);
        }

        bool setTargetPartyExecutingFirm (const string& v)
        {
            memset (mTargetPartyExecutingFirm, '\0', sizeof (mTargetPartyExecutingFirm));
            size_t size = min ((size_t) v.size (), (size_t) TARGET_PARTY_EXECUTING_FIRM_MAX_LENGTH);
            strncpy (mTargetPartyExecutingFirm, v.c_str (), size);
            return (v.size () <= TARGET_PARTY_EXECUTING_FIRM_MAX_LENGTH);
        }

        bool isTargetPartyExecutingFirmValid () const
        {
            return (memcmp (mTargetPartyExecutingFirm, TARGET_PARTY_EXECUTING_FIRM_NO_VALUE, sizeof (mTargetPartyExecutingFirm)) != 0);
        }

        void resetTargetPartyExecutingFirm ()
        {
            memcpy (mTargetPartyExecutingFirm, TARGET_PARTY_EXECUTING_FIRM_NO_VALUE, sizeof (mTargetPartyExecutingFirm));
        }

        string getTargetPartyExecutingTrader () const
        {
            return string (mTargetPartyExecutingTrader, TARGET_PARTY_EXECUTING_TRADER_MAX_LENGTH);
        }

        bool setTargetPartyExecutingTrader (const string& v)
        {
            memset (mTargetPartyExecutingTrader, '\0', sizeof (mTargetPartyExecutingTrader));
            size_t size = min ((size_t) v.size (), (size_t) TARGET_PARTY_EXECUTING_TRADER_MAX_LENGTH);
            strncpy (mTargetPartyExecutingTrader, v.c_str (), size);
            return (v.size () <= TARGET_PARTY_EXECUTING_TRADER_MAX_LENGTH);
        }

        bool isTargetPartyExecutingTraderValid () const
        {
            return (memcmp (mTargetPartyExecutingTrader, TARGET_PARTY_EXECUTING_TRADER_NO_VALUE, sizeof (mTargetPartyExecutingTrader)) != 0);
        }

        void resetTargetPartyExecutingTrader ()
        {
            memcpy (mTargetPartyExecutingTrader, TARGET_PARTY_EXECUTING_TRADER_NO_VALUE, sizeof (mTargetPartyExecutingTrader));
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
            size_t result = sizeof (mSideDisclosureInstruction)
                + sizeof (mPriceDisclosureInstruction)
                + sizeof (mLeavesQtyDisclosureInstruction)
                + sizeof (mLastPxDisclosureInstruction)
                + sizeof (mLastQtyDisclosureInstruction)
                + sizeof (mFreeText5DisclosureInstruction)
                + sizeof (mQuoteInstruction)
                + sizeof (mTargetPartyExecutingFirm)
                + sizeof (mTargetPartyExecutingTrader)
                + sizeof (mPad6);
            return result;
        }

        // serialization
        codecState serialize (void *buf, size_t len, size_t &used)
        {
            codecState state;
            state = eurex::serialize (mSideDisclosureInstruction, buf, len, used);
            if (state != GW_CODEC_SUCCESS) return state;
            state = eurex::serialize (mPriceDisclosureInstruction, buf, len, used);
            if (state != GW_CODEC_SUCCESS) return state;
            state = eurex::serialize (mLeavesQtyDisclosureInstruction, buf, len, used);
            if (state != GW_CODEC_SUCCESS) return state;
            state = eurex::serialize (mLastPxDisclosureInstruction, buf, len, used);
            if (state != GW_CODEC_SUCCESS) return state;
            state = eurex::serialize (mLastQtyDisclosureInstruction, buf, len, used);
            if (state != GW_CODEC_SUCCESS) return state;
            state = eurex::serialize (mFreeText5DisclosureInstruction, buf, len, used);
            if (state != GW_CODEC_SUCCESS) return state;
            state = eurex::serialize (mQuoteInstruction, buf, len, used);
            if (state != GW_CODEC_SUCCESS) return state;
            state = eurex::serialize (mTargetPartyExecutingFirm, buf, len, used);
            if (state != GW_CODEC_SUCCESS) return state;
            state = eurex::serialize (mTargetPartyExecutingTrader, buf, len, used);
            if (state != GW_CODEC_SUCCESS) return state;
            state = eurex::serialize (mPad6, buf, len, used);
            if (state != GW_CODEC_SUCCESS) return state;
            return GW_CODEC_SUCCESS;
        }

        // deserialization
        codecState deserialize (const void *buf, size_t len, size_t &used)
        {
            codecState state;
            state = eurex::deserialize (mSideDisclosureInstruction, buf, len, used);
            if (state != GW_CODEC_SUCCESS) return state;
            state = eurex::deserialize (mPriceDisclosureInstruction, buf, len, used);
            if (state != GW_CODEC_SUCCESS) return state;
            state = eurex::deserialize (mLeavesQtyDisclosureInstruction, buf, len, used);
            if (state != GW_CODEC_SUCCESS) return state;
            state = eurex::deserialize (mLastPxDisclosureInstruction, buf, len, used);
            if (state != GW_CODEC_SUCCESS) return state;
            state = eurex::deserialize (mLastQtyDisclosureInstruction, buf, len, used);
            if (state != GW_CODEC_SUCCESS) return state;
            state = eurex::deserialize (mFreeText5DisclosureInstruction, buf, len, used);
            if (state != GW_CODEC_SUCCESS) return state;
            state = eurex::deserialize (mQuoteInstruction, buf, len, used);
            if (state != GW_CODEC_SUCCESS) return state;
            state = eurex::deserialize (mTargetPartyExecutingFirm, buf, len, used);
            if (state != GW_CODEC_SUCCESS) return state;
            state = eurex::deserialize (mTargetPartyExecutingTrader, buf, len, used);
            if (state != GW_CODEC_SUCCESS) return state;
            state = eurex::deserialize (mPad6, buf, len, used);
            if (state != GW_CODEC_SUCCESS) return state;
            return GW_CODEC_SUCCESS;
        }

        // string conversion
        string toString () const
        {
            stringstream sss;
            sss << "TargetPartiesComp::"
                << "[SideDisclosureInstruction=" << getSideDisclosureInstruction () << "],"
                << "[PriceDisclosureInstruction=" << getPriceDisclosureInstruction () << "],"
                << "[LeavesQtyDisclosureInstruction=" << getLeavesQtyDisclosureInstruction () << "],"
                << "[LastPxDisclosureInstruction=" << getLastPxDisclosureInstruction () << "],"
                << "[LastQtyDisclosureInstruction=" << getLastQtyDisclosureInstruction () << "],"
                << "[FreeText5DisclosureInstruction=" << getFreeText5DisclosureInstruction () << "],"
                << "[QuoteInstruction=" << getQuoteInstruction () << "],"
                << "[TargetPartyExecutingFirm=" << getTargetPartyExecutingFirm () << "],"
                << "[TargetPartyExecutingTrader=" << getTargetPartyExecutingTrader () << "],"
                << "[Pad6=" << getPad6 () << "]";
            return sss.str();
        }
};

const int8_t eurexTargetPartiesCompPacket::SIDE_DISCLOSURE_INSTRUCTION_MIN = 0;
const int8_t eurexTargetPartiesCompPacket::SIDE_DISCLOSURE_INSTRUCTION_MAX = 1;
const int8_t eurexTargetPartiesCompPacket::SIDE_DISCLOSURE_INSTRUCTION_NO_VALUE = 0xFF;
const int8_t eurexTargetPartiesCompPacket::PRICE_DISCLOSURE_INSTRUCTION_MIN = 0;
const int8_t eurexTargetPartiesCompPacket::PRICE_DISCLOSURE_INSTRUCTION_MAX = 1;
const int8_t eurexTargetPartiesCompPacket::PRICE_DISCLOSURE_INSTRUCTION_NO_VALUE = 0xFF;
const int8_t eurexTargetPartiesCompPacket::LEAVES_QTY_DISCLOSURE_INSTRUCTION_MIN = 0;
const int8_t eurexTargetPartiesCompPacket::LEAVES_QTY_DISCLOSURE_INSTRUCTION_MAX = 1;
const int8_t eurexTargetPartiesCompPacket::LEAVES_QTY_DISCLOSURE_INSTRUCTION_NO_VALUE = 0xFF;
const int8_t eurexTargetPartiesCompPacket::LAST_PX_DISCLOSURE_INSTRUCTION_MIN = 0;
const int8_t eurexTargetPartiesCompPacket::LAST_PX_DISCLOSURE_INSTRUCTION_MAX = 1;
const int8_t eurexTargetPartiesCompPacket::LAST_PX_DISCLOSURE_INSTRUCTION_NO_VALUE = 0xFF;
const int8_t eurexTargetPartiesCompPacket::LAST_QTY_DISCLOSURE_INSTRUCTION_MIN = 0;
const int8_t eurexTargetPartiesCompPacket::LAST_QTY_DISCLOSURE_INSTRUCTION_MAX = 1;
const int8_t eurexTargetPartiesCompPacket::LAST_QTY_DISCLOSURE_INSTRUCTION_NO_VALUE = 0xFF;
const int8_t eurexTargetPartiesCompPacket::FREE_TEXT5DISCLOSURE_INSTRUCTION_MIN = 0;
const int8_t eurexTargetPartiesCompPacket::FREE_TEXT5DISCLOSURE_INSTRUCTION_MAX = 1;
const int8_t eurexTargetPartiesCompPacket::FREE_TEXT5DISCLOSURE_INSTRUCTION_NO_VALUE = 0xFF;
const int8_t eurexTargetPartiesCompPacket::QUOTE_INSTRUCTION_MIN = 0;
const int8_t eurexTargetPartiesCompPacket::QUOTE_INSTRUCTION_MAX = 1;
const int8_t eurexTargetPartiesCompPacket::QUOTE_INSTRUCTION_NO_VALUE = 0xFF;
const char eurexTargetPartiesCompPacket::TARGET_PARTY_EXECUTING_FIRM_NO_VALUE[5] = {0x00, 0x00, 0x00, 0x00, 0x00};
const size_t eurexTargetPartiesCompPacket::TARGET_PARTY_EXECUTING_FIRM_MAX_LENGTH = 5;
const char eurexTargetPartiesCompPacket::TARGET_PARTY_EXECUTING_TRADER_NO_VALUE[6] = {0x00, 0x00, 0x00, 0x00, 0x00, 0x00};
const size_t eurexTargetPartiesCompPacket::TARGET_PARTY_EXECUTING_TRADER_MAX_LENGTH = 6;
const char eurexTargetPartiesCompPacket::PAD6_NO_VALUE[6] = {0x00, 0x00, 0x00, 0x00, 0x00, 0x00};
const size_t eurexTargetPartiesCompPacket::PAD6_MAX_LENGTH = 6;


} // namespace neueda

#endif // EUREX_TARGETPARTIESCOMP_PACKET_H
