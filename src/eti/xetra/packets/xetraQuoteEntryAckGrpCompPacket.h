/*
 * Copyright 2014-2018 Neueda Ltd.
 * 
 * Generated 08/03/2020
 */
#ifndef XETRA_QUOTEENTRYACKGRPCOMP_PACKET_H
#define XETRA_QUOTEENTRYACKGRPCOMP_PACKET_H

#include <string>
#include <vector>
#include <sstream>
#include <cstddef>
#include <stdint.h>
#include "xetraPackets.h"
#include "EtiPacketUtils.h"

namespace neueda
{

using namespace std;

class xetraQuoteEntryAckGrpCompPacket
{
    public:
        // no value constants
        static const int64_t SECURITY_ID_MIN;
        static const int64_t SECURITY_ID_MAX;
        static const int64_t SECURITY_ID_NO_VALUE;
        static const double CXL_SIZE_MIN;
        static const double CXL_SIZE_MAX;
        static const int64_t CXL_SIZE_NO_VALUE;
        static const int32_t QUOTE_ENTRY_REJECT_REASON_MIN;
        static const int32_t QUOTE_ENTRY_REJECT_REASON_MAX;
        static const int32_t QUOTE_ENTRY_REJECT_REASON_NO_VALUE;
        static const int8_t QUOTE_ENTRY_STATUS_MIN;
        static const int8_t QUOTE_ENTRY_STATUS_MAX;
        static const int8_t QUOTE_ENTRY_STATUS_NO_VALUE;
        static const int8_t SIDE_MIN;
        static const int8_t SIDE_MAX;
        static const int8_t SIDE_NO_VALUE;
        static const char PAD2_NO_VALUE[2];
        static const size_t PAD2_MAX_LENGTH;

        // fields (use with care)
        int64_t mSecurityID;
        int64_t mCxlSize;
        int32_t mQuoteEntryRejectReason;
        int8_t mQuoteEntryStatus;
        int8_t mSide;
        char mPad2[2];

        // constructor
        xetraQuoteEntryAckGrpCompPacket ()
        {
            mSecurityID = SECURITY_ID_NO_VALUE;
            mCxlSize = CXL_SIZE_NO_VALUE;
            mQuoteEntryRejectReason = QUOTE_ENTRY_REJECT_REASON_NO_VALUE;
            mQuoteEntryStatus = QUOTE_ENTRY_STATUS_NO_VALUE;
            mSide = SIDE_NO_VALUE;
            memcpy(mPad2, PAD2_NO_VALUE, sizeof (mPad2));
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

        double getCxlSize () const
        {
            return mCxlSize / 10000.0;
        }

        bool setCxlSize (double v)
        {
            mCxlSize = v * 10000.0;
            return ((CXL_SIZE_MIN <= v && v <= CXL_SIZE_MAX) || mCxlSize == CXL_SIZE_NO_VALUE);
        }

        bool isCxlSizeValid () const
        {
            return (mCxlSize != CXL_SIZE_NO_VALUE);
        }

        void resetCxlSize ()
        {
            mCxlSize = CXL_SIZE_NO_VALUE;
        }

        int32_t getQuoteEntryRejectReason () const
        {
            return mQuoteEntryRejectReason;
        }

        bool setQuoteEntryRejectReason (int32_t v)
        {
            mQuoteEntryRejectReason = v;
            return ((QUOTE_ENTRY_REJECT_REASON_MIN <= mQuoteEntryRejectReason && mQuoteEntryRejectReason <= QUOTE_ENTRY_REJECT_REASON_MAX) || mQuoteEntryRejectReason == QUOTE_ENTRY_REJECT_REASON_NO_VALUE);
        }

        bool isQuoteEntryRejectReasonValid () const
        {
            return (mQuoteEntryRejectReason != QUOTE_ENTRY_REJECT_REASON_NO_VALUE);
        }

        void resetQuoteEntryRejectReason ()
        {
            mQuoteEntryRejectReason = QUOTE_ENTRY_REJECT_REASON_NO_VALUE;
        }

        int8_t getQuoteEntryStatus () const
        {
            return mQuoteEntryStatus;
        }

        bool setQuoteEntryStatus (int8_t v)
        {
            mQuoteEntryStatus = v;
            return ((QUOTE_ENTRY_STATUS_MIN <= mQuoteEntryStatus && mQuoteEntryStatus <= QUOTE_ENTRY_STATUS_MAX) || mQuoteEntryStatus == QUOTE_ENTRY_STATUS_NO_VALUE);
        }

        bool isQuoteEntryStatusValid () const
        {
            return (mQuoteEntryStatus != QUOTE_ENTRY_STATUS_NO_VALUE);
        }

        void resetQuoteEntryStatus ()
        {
            mQuoteEntryStatus = QUOTE_ENTRY_STATUS_NO_VALUE;
        }

        int8_t getSide () const
        {
            return mSide;
        }

        bool setSide (int8_t v)
        {
            mSide = v;
            return ((SIDE_MIN <= mSide && mSide <= SIDE_MAX) || mSide == SIDE_NO_VALUE);
        }

        bool isSideValid () const
        {
            return (mSide != SIDE_NO_VALUE);
        }

        void resetSide ()
        {
            mSide = SIDE_NO_VALUE;
        }

        string getPad2 () const
        {
            return string (mPad2, PAD2_MAX_LENGTH);
        }

        bool setPad2 (const string& v)
        {
            memset (mPad2, '\0', sizeof (mPad2));
            size_t size = min ((size_t) v.size (), (size_t) PAD2_MAX_LENGTH);
            strncpy (mPad2, v.c_str (), size);
            return (v.size () <= PAD2_MAX_LENGTH);
        }

        bool isPad2Valid () const
        {
            return (memcmp (mPad2, PAD2_NO_VALUE, sizeof (mPad2)) != 0);
        }

        void resetPad2 ()
        {
            memcpy (mPad2, PAD2_NO_VALUE, sizeof (mPad2));
        }


        // render current raw size
        size_t getRawSize () const
        {
            size_t result = sizeof (mSecurityID)
                + sizeof (mCxlSize)
                + sizeof (mQuoteEntryRejectReason)
                + sizeof (mQuoteEntryStatus)
                + sizeof (mSide)
                + sizeof (mPad2);
            return result;
        }

        // serialization
        codecState serialize (void *buf, size_t len, size_t &used)
        {
            codecState state;
            state = eti::serialize (mSecurityID, buf, len, used);
            if (state != GW_CODEC_SUCCESS) return state;
            state = eti::serialize (mCxlSize, buf, len, used);
            if (state != GW_CODEC_SUCCESS) return state;
            state = eti::serialize (mQuoteEntryRejectReason, buf, len, used);
            if (state != GW_CODEC_SUCCESS) return state;
            state = eti::serialize (mQuoteEntryStatus, buf, len, used);
            if (state != GW_CODEC_SUCCESS) return state;
            state = eti::serialize (mSide, buf, len, used);
            if (state != GW_CODEC_SUCCESS) return state;
            state = eti::serialize (mPad2, buf, len, used);
            if (state != GW_CODEC_SUCCESS) return state;
            return GW_CODEC_SUCCESS;
        }

        // deserialization
        codecState deserialize (const void *buf, size_t len, size_t &used)
        {
            codecState state;
            state = eti::deserialize (mSecurityID, buf, len, used);
            if (state != GW_CODEC_SUCCESS) return state;
            state = eti::deserialize (mCxlSize, buf, len, used);
            if (state != GW_CODEC_SUCCESS) return state;
            state = eti::deserialize (mQuoteEntryRejectReason, buf, len, used);
            if (state != GW_CODEC_SUCCESS) return state;
            state = eti::deserialize (mQuoteEntryStatus, buf, len, used);
            if (state != GW_CODEC_SUCCESS) return state;
            state = eti::deserialize (mSide, buf, len, used);
            if (state != GW_CODEC_SUCCESS) return state;
            state = eti::deserialize (mPad2, buf, len, used);
            if (state != GW_CODEC_SUCCESS) return state;
            return GW_CODEC_SUCCESS;
        }

        // string conversion
        string toString () const
        {
            stringstream sss;
            sss << "QuoteEntryAckGrpComp::"
                << "[SecurityID=" << getSecurityID () << "],"
                << "[CxlSize=" << getCxlSize () << "],"
                << "[QuoteEntryRejectReason=" << getQuoteEntryRejectReason () << "],"
                << "[QuoteEntryStatus=" << getQuoteEntryStatus () << "],"
                << "[Side=" << getSide () << "],"
                << "[Pad2=" << getPad2 () << "]";
            return sss.str();
        }
};

const int64_t xetraQuoteEntryAckGrpCompPacket::SECURITY_ID_MIN = -9223372036854775807L;
const int64_t xetraQuoteEntryAckGrpCompPacket::SECURITY_ID_MAX = 9223372036854775807L;
const int64_t xetraQuoteEntryAckGrpCompPacket::SECURITY_ID_NO_VALUE = 0x8000000000000000;
const double xetraQuoteEntryAckGrpCompPacket::CXL_SIZE_MIN = -922337203685477.5807;
const double xetraQuoteEntryAckGrpCompPacket::CXL_SIZE_MAX = 922337203685477.5807;
const int64_t xetraQuoteEntryAckGrpCompPacket::CXL_SIZE_NO_VALUE = 0x8000000000000000;
const int32_t xetraQuoteEntryAckGrpCompPacket::QUOTE_ENTRY_REJECT_REASON_MIN = 0;
const int32_t xetraQuoteEntryAckGrpCompPacket::QUOTE_ENTRY_REJECT_REASON_MAX = 65535;
const int32_t xetraQuoteEntryAckGrpCompPacket::QUOTE_ENTRY_REJECT_REASON_NO_VALUE = 0xFFFFFFFF;
const int8_t xetraQuoteEntryAckGrpCompPacket::QUOTE_ENTRY_STATUS_MIN = 0;
const int8_t xetraQuoteEntryAckGrpCompPacket::QUOTE_ENTRY_STATUS_MAX = 100;
const int8_t xetraQuoteEntryAckGrpCompPacket::QUOTE_ENTRY_STATUS_NO_VALUE = 0xFF;
const int8_t xetraQuoteEntryAckGrpCompPacket::SIDE_MIN = 1;
const int8_t xetraQuoteEntryAckGrpCompPacket::SIDE_MAX = 2;
const int8_t xetraQuoteEntryAckGrpCompPacket::SIDE_NO_VALUE = 0xFF;
const char xetraQuoteEntryAckGrpCompPacket::PAD2_NO_VALUE[2] = {0x00, 0x00};
const size_t xetraQuoteEntryAckGrpCompPacket::PAD2_MAX_LENGTH = 2;


} // namespace neueda

#endif // XETRA_QUOTEENTRYACKGRPCOMP_PACKET_H
