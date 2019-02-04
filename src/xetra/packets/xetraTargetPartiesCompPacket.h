/*
 * Copyright 2014-2018 Neueda Ltd.
 * 
 * Generated 04/02/2019
 */
#ifndef XETRA_TARGETPARTIESCOMP_PACKET_H
#define XETRA_TARGETPARTIESCOMP_PACKET_H

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

class xetraTargetPartiesCompPacket
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
        static const int8_t QUOTE_INSTRUCTION_MIN;
        static const int8_t QUOTE_INSTRUCTION_MAX;
        static const int8_t QUOTE_INSTRUCTION_NO_VALUE;
        static const char TARGET_PARTY_EXECUTING_FIRM_NO_VALUE[5];
        static const size_t TARGET_PARTY_EXECUTING_FIRM_MAX_LENGTH;
        static const char TARGET_PARTY_EXECUTING_TRADER_NO_VALUE[6];
        static const size_t TARGET_PARTY_EXECUTING_TRADER_MAX_LENGTH;
        static const char PAD7_NO_VALUE[7];
        static const size_t PAD7_MAX_LENGTH;

        // fields (use with care)
        int8_t mSideDisclosureInstruction;
        int8_t mPriceDisclosureInstruction;
        int8_t mLeavesQtyDisclosureInstruction;
        int8_t mLastPxDisclosureInstruction;
        int8_t mLastQtyDisclosureInstruction;
        int8_t mQuoteInstruction;
        char mTargetPartyExecutingFirm[5];
        char mTargetPartyExecutingTrader[6];
        char mPad7[7];

        // constructor
        xetraTargetPartiesCompPacket ()
        {
            mSideDisclosureInstruction = SIDE_DISCLOSURE_INSTRUCTION_NO_VALUE;
            mPriceDisclosureInstruction = PRICE_DISCLOSURE_INSTRUCTION_NO_VALUE;
            mLeavesQtyDisclosureInstruction = LEAVES_QTY_DISCLOSURE_INSTRUCTION_NO_VALUE;
            mLastPxDisclosureInstruction = LAST_PX_DISCLOSURE_INSTRUCTION_NO_VALUE;
            mLastQtyDisclosureInstruction = LAST_QTY_DISCLOSURE_INSTRUCTION_NO_VALUE;
            mQuoteInstruction = QUOTE_INSTRUCTION_NO_VALUE;
            memcpy(mTargetPartyExecutingFirm, TARGET_PARTY_EXECUTING_FIRM_NO_VALUE, sizeof (mTargetPartyExecutingFirm));
            memcpy(mTargetPartyExecutingTrader, TARGET_PARTY_EXECUTING_TRADER_NO_VALUE, sizeof (mTargetPartyExecutingTrader));
            memcpy(mPad7, PAD7_NO_VALUE, sizeof (mPad7));
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
            size_t size = min ((size_t) v.size (), (size_t) TARGET_PARTY_EXECUTING_FIRM_MAX_LENGTH);
            for (size_t i = 0; i < size; i++)
                mTargetPartyExecutingFirm[i] = v[i];
            memset (&mTargetPartyExecutingFirm[size], '\0', TARGET_PARTY_EXECUTING_FIRM_MAX_LENGTH-size);
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
            size_t size = min ((size_t) v.size (), (size_t) TARGET_PARTY_EXECUTING_TRADER_MAX_LENGTH);
            for (size_t i = 0; i < size; i++)
                mTargetPartyExecutingTrader[i] = v[i];
            memset (&mTargetPartyExecutingTrader[size], '\0', TARGET_PARTY_EXECUTING_TRADER_MAX_LENGTH-size);
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

        string getPad7 () const
        {
            return string (mPad7, PAD7_MAX_LENGTH);
        }

        bool setPad7 (const string& v)
        {
            size_t size = min ((size_t) v.size (), (size_t) PAD7_MAX_LENGTH);
            for (size_t i = 0; i < size; i++)
                mPad7[i] = v[i];
            memset (&mPad7[size], '\0', PAD7_MAX_LENGTH-size);
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
            size_t result = sizeof (mSideDisclosureInstruction)
                + sizeof (mPriceDisclosureInstruction)
                + sizeof (mLeavesQtyDisclosureInstruction)
                + sizeof (mLastPxDisclosureInstruction)
                + sizeof (mLastQtyDisclosureInstruction)
                + sizeof (mQuoteInstruction)
                + sizeof (mTargetPartyExecutingFirm)
                + sizeof (mTargetPartyExecutingTrader)
                + sizeof (mPad7);
            return result;
        }

        // serialization
        codecState serialize (void *buf, size_t len, size_t &used)
        {
            codecState state;
            state = xetra::serialize (mSideDisclosureInstruction, buf, len, used);
            if (state != GW_CODEC_SUCCESS) return state;
            state = xetra::serialize (mPriceDisclosureInstruction, buf, len, used);
            if (state != GW_CODEC_SUCCESS) return state;
            state = xetra::serialize (mLeavesQtyDisclosureInstruction, buf, len, used);
            if (state != GW_CODEC_SUCCESS) return state;
            state = xetra::serialize (mLastPxDisclosureInstruction, buf, len, used);
            if (state != GW_CODEC_SUCCESS) return state;
            state = xetra::serialize (mLastQtyDisclosureInstruction, buf, len, used);
            if (state != GW_CODEC_SUCCESS) return state;
            state = xetra::serialize (mQuoteInstruction, buf, len, used);
            if (state != GW_CODEC_SUCCESS) return state;
            state = xetra::serialize (mTargetPartyExecutingFirm, buf, len, used);
            if (state != GW_CODEC_SUCCESS) return state;
            state = xetra::serialize (mTargetPartyExecutingTrader, buf, len, used);
            if (state != GW_CODEC_SUCCESS) return state;
            state = xetra::serialize (mPad7, buf, len, used);
            if (state != GW_CODEC_SUCCESS) return state;
            return GW_CODEC_SUCCESS;
        }

        // deserialization
        codecState deserialize (const void *buf, size_t len, size_t &used)
        {
            codecState state;
            state = xetra::deserialize (mSideDisclosureInstruction, buf, len, used);
            if (state != GW_CODEC_SUCCESS) return state;
            state = xetra::deserialize (mPriceDisclosureInstruction, buf, len, used);
            if (state != GW_CODEC_SUCCESS) return state;
            state = xetra::deserialize (mLeavesQtyDisclosureInstruction, buf, len, used);
            if (state != GW_CODEC_SUCCESS) return state;
            state = xetra::deserialize (mLastPxDisclosureInstruction, buf, len, used);
            if (state != GW_CODEC_SUCCESS) return state;
            state = xetra::deserialize (mLastQtyDisclosureInstruction, buf, len, used);
            if (state != GW_CODEC_SUCCESS) return state;
            state = xetra::deserialize (mQuoteInstruction, buf, len, used);
            if (state != GW_CODEC_SUCCESS) return state;
            state = xetra::deserialize (mTargetPartyExecutingFirm, buf, len, used);
            if (state != GW_CODEC_SUCCESS) return state;
            state = xetra::deserialize (mTargetPartyExecutingTrader, buf, len, used);
            if (state != GW_CODEC_SUCCESS) return state;
            state = xetra::deserialize (mPad7, buf, len, used);
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
                << "[QuoteInstruction=" << getQuoteInstruction () << "],"
                << "[TargetPartyExecutingFirm=" << getTargetPartyExecutingFirm () << "],"
                << "[TargetPartyExecutingTrader=" << getTargetPartyExecutingTrader () << "],"
                << "[Pad7=" << getPad7 () << "]";
            return sss.str();
        }
};

const int8_t xetraTargetPartiesCompPacket::SIDE_DISCLOSURE_INSTRUCTION_MIN = 0;
const int8_t xetraTargetPartiesCompPacket::SIDE_DISCLOSURE_INSTRUCTION_MAX = 1;
const int8_t xetraTargetPartiesCompPacket::SIDE_DISCLOSURE_INSTRUCTION_NO_VALUE = 0xFF;
const int8_t xetraTargetPartiesCompPacket::PRICE_DISCLOSURE_INSTRUCTION_MIN = 0;
const int8_t xetraTargetPartiesCompPacket::PRICE_DISCLOSURE_INSTRUCTION_MAX = 1;
const int8_t xetraTargetPartiesCompPacket::PRICE_DISCLOSURE_INSTRUCTION_NO_VALUE = 0xFF;
const int8_t xetraTargetPartiesCompPacket::LEAVES_QTY_DISCLOSURE_INSTRUCTION_MIN = 0;
const int8_t xetraTargetPartiesCompPacket::LEAVES_QTY_DISCLOSURE_INSTRUCTION_MAX = 1;
const int8_t xetraTargetPartiesCompPacket::LEAVES_QTY_DISCLOSURE_INSTRUCTION_NO_VALUE = 0xFF;
const int8_t xetraTargetPartiesCompPacket::LAST_PX_DISCLOSURE_INSTRUCTION_MIN = 0;
const int8_t xetraTargetPartiesCompPacket::LAST_PX_DISCLOSURE_INSTRUCTION_MAX = 1;
const int8_t xetraTargetPartiesCompPacket::LAST_PX_DISCLOSURE_INSTRUCTION_NO_VALUE = 0xFF;
const int8_t xetraTargetPartiesCompPacket::LAST_QTY_DISCLOSURE_INSTRUCTION_MIN = 0;
const int8_t xetraTargetPartiesCompPacket::LAST_QTY_DISCLOSURE_INSTRUCTION_MAX = 1;
const int8_t xetraTargetPartiesCompPacket::LAST_QTY_DISCLOSURE_INSTRUCTION_NO_VALUE = 0xFF;
const int8_t xetraTargetPartiesCompPacket::QUOTE_INSTRUCTION_MIN = 0;
const int8_t xetraTargetPartiesCompPacket::QUOTE_INSTRUCTION_MAX = 1;
const int8_t xetraTargetPartiesCompPacket::QUOTE_INSTRUCTION_NO_VALUE = 0xFF;
const char xetraTargetPartiesCompPacket::TARGET_PARTY_EXECUTING_FIRM_NO_VALUE[5] = {0x00, 0x00, 0x00, 0x00, 0x00};
const size_t xetraTargetPartiesCompPacket::TARGET_PARTY_EXECUTING_FIRM_MAX_LENGTH = 5;
const char xetraTargetPartiesCompPacket::TARGET_PARTY_EXECUTING_TRADER_NO_VALUE[6] = {0x00, 0x00, 0x00, 0x00, 0x00, 0x00};
const size_t xetraTargetPartiesCompPacket::TARGET_PARTY_EXECUTING_TRADER_MAX_LENGTH = 6;
const char xetraTargetPartiesCompPacket::PAD7_NO_VALUE[7] = {0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00};
const size_t xetraTargetPartiesCompPacket::PAD7_MAX_LENGTH = 7;


} // namespace neueda

#endif // XETRA_TARGETPARTIESCOMP_PACKET_H
