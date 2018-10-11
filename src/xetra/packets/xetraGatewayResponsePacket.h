/*
 * Copyright 2014-2018 Neueda Ltd.
 * 
 * Generated 11/10/2018
 */
#ifndef XETRA_GATEWAYRESPONSE_PACKET_H
#define XETRA_GATEWAYRESPONSE_PACKET_H

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

class xetraGatewayResponsePacket
{
    public:
        // no value constants
        static const uint32_t GATEWAY_ID_MIN;
        static const uint32_t GATEWAY_ID_MAX;
        static const uint32_t GATEWAY_ID_NO_VALUE;
        static const uint32_t GATEWAY_SUB_ID_MIN;
        static const uint32_t GATEWAY_SUB_ID_MAX;
        static const uint32_t GATEWAY_SUB_ID_NO_VALUE;
        static const uint32_t SECONDARY_GATEWAY_ID_MIN;
        static const uint32_t SECONDARY_GATEWAY_ID_MAX;
        static const uint32_t SECONDARY_GATEWAY_ID_NO_VALUE;
        static const uint32_t SECONDARY_GATEWAY_SUB_ID_MIN;
        static const uint32_t SECONDARY_GATEWAY_SUB_ID_MAX;
        static const uint32_t SECONDARY_GATEWAY_SUB_ID_NO_VALUE;
        static const int8_t GATEWAY_STATUS_MIN;
        static const int8_t GATEWAY_STATUS_MAX;
        static const int8_t GATEWAY_STATUS_NO_VALUE;
        static const int8_t SECONDARY_GATEWAY_STATUS_MIN;
        static const int8_t SECONDARY_GATEWAY_STATUS_MAX;
        static const int8_t SECONDARY_GATEWAY_STATUS_NO_VALUE;
        static const int8_t SESSION_MODE_MIN;
        static const int8_t SESSION_MODE_MAX;
        static const int8_t SESSION_MODE_NO_VALUE;
        static const int8_t TRAD_SES_MODE_MIN;
        static const int8_t TRAD_SES_MODE_MAX;
        static const int8_t TRAD_SES_MODE_NO_VALUE;
        static const char PAD4_NO_VALUE[4];
        static const size_t PAD4_MAX_LENGTH;

        // fields (use with care)
        xetraMessageHeaderOutCompPacket mMessageHeaderOut;
        xetraResponseHeaderCompPacket mResponseHeader;
        uint32_t mGatewayID;
        uint32_t mGatewaySubID;
        uint32_t mSecondaryGatewayID;
        uint32_t mSecondaryGatewaySubID;
        int8_t mGatewayStatus;
        int8_t mSecondaryGatewayStatus;
        int8_t mSessionMode;
        int8_t mTradSesMode;
        char mPad4[4];

        // constructor
        xetraGatewayResponsePacket ()
        {
            mMessageHeaderOut.mTemplateID = 10021;
            mGatewayID = GATEWAY_ID_NO_VALUE;
            mGatewaySubID = GATEWAY_SUB_ID_NO_VALUE;
            mSecondaryGatewayID = SECONDARY_GATEWAY_ID_NO_VALUE;
            mSecondaryGatewaySubID = SECONDARY_GATEWAY_SUB_ID_NO_VALUE;
            mGatewayStatus = GATEWAY_STATUS_NO_VALUE;
            mSecondaryGatewayStatus = SECONDARY_GATEWAY_STATUS_NO_VALUE;
            mSessionMode = SESSION_MODE_NO_VALUE;
            mTradSesMode = TRAD_SES_MODE_NO_VALUE;
            memcpy(mPad4, PAD4_NO_VALUE, sizeof (mPad4));
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

        uint32_t getGatewayID () const
        {
            return mGatewayID;
        }

        bool setGatewayID (uint32_t v)
        {
            mGatewayID = v;
            return ((GATEWAY_ID_MIN <= mGatewayID && mGatewayID <= GATEWAY_ID_MAX) || mGatewayID == GATEWAY_ID_NO_VALUE);
        }

        bool isGatewayIDValid () const
        {
            return (mGatewayID != GATEWAY_ID_NO_VALUE);
        }

        void resetGatewayID ()
        {
            mGatewayID = GATEWAY_ID_NO_VALUE;
        }

        uint32_t getGatewaySubID () const
        {
            return mGatewaySubID;
        }

        bool setGatewaySubID (uint32_t v)
        {
            mGatewaySubID = v;
            return ((GATEWAY_SUB_ID_MIN <= mGatewaySubID && mGatewaySubID <= GATEWAY_SUB_ID_MAX) || mGatewaySubID == GATEWAY_SUB_ID_NO_VALUE);
        }

        bool isGatewaySubIDValid () const
        {
            return (mGatewaySubID != GATEWAY_SUB_ID_NO_VALUE);
        }

        void resetGatewaySubID ()
        {
            mGatewaySubID = GATEWAY_SUB_ID_NO_VALUE;
        }

        uint32_t getSecondaryGatewayID () const
        {
            return mSecondaryGatewayID;
        }

        bool setSecondaryGatewayID (uint32_t v)
        {
            mSecondaryGatewayID = v;
            return ((SECONDARY_GATEWAY_ID_MIN <= mSecondaryGatewayID && mSecondaryGatewayID <= SECONDARY_GATEWAY_ID_MAX) || mSecondaryGatewayID == SECONDARY_GATEWAY_ID_NO_VALUE);
        }

        bool isSecondaryGatewayIDValid () const
        {
            return (mSecondaryGatewayID != SECONDARY_GATEWAY_ID_NO_VALUE);
        }

        void resetSecondaryGatewayID ()
        {
            mSecondaryGatewayID = SECONDARY_GATEWAY_ID_NO_VALUE;
        }

        uint32_t getSecondaryGatewaySubID () const
        {
            return mSecondaryGatewaySubID;
        }

        bool setSecondaryGatewaySubID (uint32_t v)
        {
            mSecondaryGatewaySubID = v;
            return ((SECONDARY_GATEWAY_SUB_ID_MIN <= mSecondaryGatewaySubID && mSecondaryGatewaySubID <= SECONDARY_GATEWAY_SUB_ID_MAX) || mSecondaryGatewaySubID == SECONDARY_GATEWAY_SUB_ID_NO_VALUE);
        }

        bool isSecondaryGatewaySubIDValid () const
        {
            return (mSecondaryGatewaySubID != SECONDARY_GATEWAY_SUB_ID_NO_VALUE);
        }

        void resetSecondaryGatewaySubID ()
        {
            mSecondaryGatewaySubID = SECONDARY_GATEWAY_SUB_ID_NO_VALUE;
        }

        int8_t getGatewayStatus () const
        {
            return mGatewayStatus;
        }

        bool setGatewayStatus (int8_t v)
        {
            mGatewayStatus = v;
            return ((GATEWAY_STATUS_MIN <= mGatewayStatus && mGatewayStatus <= GATEWAY_STATUS_MAX) || mGatewayStatus == GATEWAY_STATUS_NO_VALUE);
        }

        bool isGatewayStatusValid () const
        {
            return (mGatewayStatus != GATEWAY_STATUS_NO_VALUE);
        }

        void resetGatewayStatus ()
        {
            mGatewayStatus = GATEWAY_STATUS_NO_VALUE;
        }

        int8_t getSecondaryGatewayStatus () const
        {
            return mSecondaryGatewayStatus;
        }

        bool setSecondaryGatewayStatus (int8_t v)
        {
            mSecondaryGatewayStatus = v;
            return ((SECONDARY_GATEWAY_STATUS_MIN <= mSecondaryGatewayStatus && mSecondaryGatewayStatus <= SECONDARY_GATEWAY_STATUS_MAX) || mSecondaryGatewayStatus == SECONDARY_GATEWAY_STATUS_NO_VALUE);
        }

        bool isSecondaryGatewayStatusValid () const
        {
            return (mSecondaryGatewayStatus != SECONDARY_GATEWAY_STATUS_NO_VALUE);
        }

        void resetSecondaryGatewayStatus ()
        {
            mSecondaryGatewayStatus = SECONDARY_GATEWAY_STATUS_NO_VALUE;
        }

        int8_t getSessionMode () const
        {
            return mSessionMode;
        }

        bool setSessionMode (int8_t v)
        {
            mSessionMode = v;
            return ((SESSION_MODE_MIN <= mSessionMode && mSessionMode <= SESSION_MODE_MAX) || mSessionMode == SESSION_MODE_NO_VALUE);
        }

        bool isSessionModeValid () const
        {
            return (mSessionMode != SESSION_MODE_NO_VALUE);
        }

        void resetSessionMode ()
        {
            mSessionMode = SESSION_MODE_NO_VALUE;
        }

        int8_t getTradSesMode () const
        {
            return mTradSesMode;
        }

        bool setTradSesMode (int8_t v)
        {
            mTradSesMode = v;
            return ((TRAD_SES_MODE_MIN <= mTradSesMode && mTradSesMode <= TRAD_SES_MODE_MAX) || mTradSesMode == TRAD_SES_MODE_NO_VALUE);
        }

        bool isTradSesModeValid () const
        {
            return (mTradSesMode != TRAD_SES_MODE_NO_VALUE);
        }

        void resetTradSesMode ()
        {
            mTradSesMode = TRAD_SES_MODE_NO_VALUE;
        }

        string getPad4 () const
        {
            return string (mPad4, PAD4_MAX_LENGTH);
        }

        bool setPad4 (const string& v)
        {
            size_t size = min ((size_t) v.size (), (size_t) PAD4_MAX_LENGTH);
            for (size_t i = 0; i < size; i++)
                mPad4[i] = v[i];
            memset (&mPad4[size], '\0', PAD4_MAX_LENGTH-size);
            return (v.size () <= PAD4_MAX_LENGTH);
        }

        bool isPad4Valid () const
        {
            return (memcmp (mPad4, PAD4_NO_VALUE, sizeof (mPad4)) != 0);
        }

        void resetPad4 ()
        {
            memcpy (mPad4, PAD4_NO_VALUE, sizeof (mPad4));
        }


        // render current raw size
        size_t getRawSize () const
        {
            size_t result = mMessageHeaderOut.getRawSize()
                + mResponseHeader.getRawSize()
                + sizeof (mGatewayID)
                + sizeof (mGatewaySubID)
                + sizeof (mSecondaryGatewayID)
                + sizeof (mSecondaryGatewaySubID)
                + sizeof (mGatewayStatus)
                + sizeof (mSecondaryGatewayStatus)
                + sizeof (mSessionMode)
                + sizeof (mTradSesMode)
                + sizeof (mPad4);
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
            state = xetra::serialize (mGatewayID, buf, len, used);
            if (state != GW_CODEC_SUCCESS) return state;
            state = xetra::serialize (mGatewaySubID, buf, len, used);
            if (state != GW_CODEC_SUCCESS) return state;
            state = xetra::serialize (mSecondaryGatewayID, buf, len, used);
            if (state != GW_CODEC_SUCCESS) return state;
            state = xetra::serialize (mSecondaryGatewaySubID, buf, len, used);
            if (state != GW_CODEC_SUCCESS) return state;
            state = xetra::serialize (mGatewayStatus, buf, len, used);
            if (state != GW_CODEC_SUCCESS) return state;
            state = xetra::serialize (mSecondaryGatewayStatus, buf, len, used);
            if (state != GW_CODEC_SUCCESS) return state;
            state = xetra::serialize (mSessionMode, buf, len, used);
            if (state != GW_CODEC_SUCCESS) return state;
            state = xetra::serialize (mTradSesMode, buf, len, used);
            if (state != GW_CODEC_SUCCESS) return state;
            state = xetra::serialize (mPad4, buf, len, used);
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
            state = xetra::deserialize (mGatewayID, buf, len, used);
            if (state != GW_CODEC_SUCCESS) return state;
            state = xetra::deserialize (mGatewaySubID, buf, len, used);
            if (state != GW_CODEC_SUCCESS) return state;
            state = xetra::deserialize (mSecondaryGatewayID, buf, len, used);
            if (state != GW_CODEC_SUCCESS) return state;
            state = xetra::deserialize (mSecondaryGatewaySubID, buf, len, used);
            if (state != GW_CODEC_SUCCESS) return state;
            state = xetra::deserialize (mGatewayStatus, buf, len, used);
            if (state != GW_CODEC_SUCCESS) return state;
            state = xetra::deserialize (mSecondaryGatewayStatus, buf, len, used);
            if (state != GW_CODEC_SUCCESS) return state;
            state = xetra::deserialize (mSessionMode, buf, len, used);
            if (state != GW_CODEC_SUCCESS) return state;
            state = xetra::deserialize (mTradSesMode, buf, len, used);
            if (state != GW_CODEC_SUCCESS) return state;
            state = xetra::deserialize (mPad4, buf, len, used);
            if (state != GW_CODEC_SUCCESS) return state;
            mMessageHeaderOut.mBodyLen = getRawSize ();
            return GW_CODEC_SUCCESS;
        }

        // string conversion
        string toString () const
        {
            stringstream sss;
            sss << "GatewayResponse::"
                << "[MessageHeaderOut=" << mMessageHeaderOut.toString () << "],"
                << "[ResponseHeader=" << mResponseHeader.toString () << "],"
                << "[GatewayID=" << getGatewayID () << "],"
                << "[GatewaySubID=" << getGatewaySubID () << "],"
                << "[SecondaryGatewayID=" << getSecondaryGatewayID () << "],"
                << "[SecondaryGatewaySubID=" << getSecondaryGatewaySubID () << "],"
                << "[GatewayStatus=" << getGatewayStatus () << "],"
                << "[SecondaryGatewayStatus=" << getSecondaryGatewayStatus () << "],"
                << "[SessionMode=" << getSessionMode () << "],"
                << "[TradSesMode=" << getTradSesMode () << "],"
                << "[Pad4=" << getPad4 () << "]";
            return sss.str();
        }
};

const uint32_t xetraGatewayResponsePacket::GATEWAY_ID_MIN = 0;
const uint32_t xetraGatewayResponsePacket::GATEWAY_ID_MAX = 4294967294;
const uint32_t xetraGatewayResponsePacket::GATEWAY_ID_NO_VALUE = 0xFFFFFFFF;
const uint32_t xetraGatewayResponsePacket::GATEWAY_SUB_ID_MIN = 0;
const uint32_t xetraGatewayResponsePacket::GATEWAY_SUB_ID_MAX = 4294967294;
const uint32_t xetraGatewayResponsePacket::GATEWAY_SUB_ID_NO_VALUE = 0xFFFFFFFF;
const uint32_t xetraGatewayResponsePacket::SECONDARY_GATEWAY_ID_MIN = 0;
const uint32_t xetraGatewayResponsePacket::SECONDARY_GATEWAY_ID_MAX = 4294967294;
const uint32_t xetraGatewayResponsePacket::SECONDARY_GATEWAY_ID_NO_VALUE = 0xFFFFFFFF;
const uint32_t xetraGatewayResponsePacket::SECONDARY_GATEWAY_SUB_ID_MIN = 0;
const uint32_t xetraGatewayResponsePacket::SECONDARY_GATEWAY_SUB_ID_MAX = 4294967294;
const uint32_t xetraGatewayResponsePacket::SECONDARY_GATEWAY_SUB_ID_NO_VALUE = 0xFFFFFFFF;
const int8_t xetraGatewayResponsePacket::GATEWAY_STATUS_MIN = 0;
const int8_t xetraGatewayResponsePacket::GATEWAY_STATUS_MAX = 1;
const int8_t xetraGatewayResponsePacket::GATEWAY_STATUS_NO_VALUE = 0xFF;
const int8_t xetraGatewayResponsePacket::SECONDARY_GATEWAY_STATUS_MIN = 0;
const int8_t xetraGatewayResponsePacket::SECONDARY_GATEWAY_STATUS_MAX = 1;
const int8_t xetraGatewayResponsePacket::SECONDARY_GATEWAY_STATUS_NO_VALUE = 0xFF;
const int8_t xetraGatewayResponsePacket::SESSION_MODE_MIN = 1;
const int8_t xetraGatewayResponsePacket::SESSION_MODE_MAX = 3;
const int8_t xetraGatewayResponsePacket::SESSION_MODE_NO_VALUE = 0xFF;
const int8_t xetraGatewayResponsePacket::TRAD_SES_MODE_MIN = 1;
const int8_t xetraGatewayResponsePacket::TRAD_SES_MODE_MAX = 4;
const int8_t xetraGatewayResponsePacket::TRAD_SES_MODE_NO_VALUE = 0xFF;
const char xetraGatewayResponsePacket::PAD4_NO_VALUE[4] = {0x00, 0x00, 0x00, 0x00};
const size_t xetraGatewayResponsePacket::PAD4_MAX_LENGTH = 4;


} // namespace neueda

#endif // XETRA_GATEWAYRESPONSE_PACKET_H
