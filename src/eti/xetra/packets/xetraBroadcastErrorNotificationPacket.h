/*
 * Copyright 2014-2018 Neueda Ltd.
 * 
 * Generated 21/05/2019
 */
#ifndef XETRA_BROADCASTERRORNOTIFICATION_PACKET_H
#define XETRA_BROADCASTERRORNOTIFICATION_PACKET_H

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

class xetraBroadcastErrorNotificationPacket
{
    public:
        // no value constants
        static const uint32_t APPL_IDSTATUS_MIN;
        static const uint32_t APPL_IDSTATUS_MAX;
        static const uint32_t APPL_IDSTATUS_NO_VALUE;
        static const uint32_t REF_APPL_SUB_ID_MIN;
        static const uint32_t REF_APPL_SUB_ID_MAX;
        static const uint32_t REF_APPL_SUB_ID_NO_VALUE;
        static const int16_t VAR_TEXT_LEN_MIN;
        static const int16_t VAR_TEXT_LEN_MAX;
        static const int16_t VAR_TEXT_LEN_NO_VALUE;
        static const int8_t REF_APPL_ID_MIN;
        static const int8_t REF_APPL_ID_MAX;
        static const int8_t REF_APPL_ID_NO_VALUE;
        static const int8_t SESSION_STATUS_MIN;
        static const int8_t SESSION_STATUS_MAX;
        static const int8_t SESSION_STATUS_NO_VALUE;
        static const char PAD4_NO_VALUE[4];
        static const size_t PAD4_MAX_LENGTH;
        static const size_t VAR_TEXT_MAX_LENGTH;

        // fields (use with care)
        xetraMessageHeaderOutCompPacket mMessageHeaderOut;
        xetraNotifHeaderCompPacket mNotifHeader;
        uint32_t mApplIDStatus;
        uint32_t mRefApplSubID;
        int16_t mVarTextLen;
        int8_t mRefApplID;
        int8_t mSessionStatus;
        char mPad4[4];
        string mVarText;
        int mVarTextPad; // reserved for internal use

        // constructor
        xetraBroadcastErrorNotificationPacket ()
        {
            mMessageHeaderOut.mTemplateID = 10032;
            mApplIDStatus = APPL_IDSTATUS_NO_VALUE;
            mRefApplSubID = REF_APPL_SUB_ID_NO_VALUE;
            mVarTextLen = VAR_TEXT_LEN_NO_VALUE;
            mRefApplID = REF_APPL_ID_NO_VALUE;
            mSessionStatus = SESSION_STATUS_NO_VALUE;
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

        const xetraNotifHeaderCompPacket& getNotifHeader () const
        {
            return mNotifHeader;
        }

        bool setNotifHeader (const xetraNotifHeaderCompPacket& v)
        {
            mNotifHeader = v;
            return true;
        }

        uint32_t getApplIDStatus () const
        {
            return mApplIDStatus;
        }

        bool setApplIDStatus (uint32_t v)
        {
            mApplIDStatus = v;
            return ((APPL_IDSTATUS_MIN <= mApplIDStatus && mApplIDStatus <= APPL_IDSTATUS_MAX) || mApplIDStatus == APPL_IDSTATUS_NO_VALUE);
        }

        bool isApplIDStatusValid () const
        {
            return (mApplIDStatus != APPL_IDSTATUS_NO_VALUE);
        }

        void resetApplIDStatus ()
        {
            mApplIDStatus = APPL_IDSTATUS_NO_VALUE;
        }

        uint32_t getRefApplSubID () const
        {
            return mRefApplSubID;
        }

        bool setRefApplSubID (uint32_t v)
        {
            mRefApplSubID = v;
            return ((REF_APPL_SUB_ID_MIN <= mRefApplSubID && mRefApplSubID <= REF_APPL_SUB_ID_MAX) || mRefApplSubID == REF_APPL_SUB_ID_NO_VALUE);
        }

        bool isRefApplSubIDValid () const
        {
            return (mRefApplSubID != REF_APPL_SUB_ID_NO_VALUE);
        }

        void resetRefApplSubID ()
        {
            mRefApplSubID = REF_APPL_SUB_ID_NO_VALUE;
        }

        int16_t getVarTextLen () const
        {
            return mVarTextLen;
        }

        bool setVarTextLen (int16_t v)
        {
            mVarTextLen = v;
            return ((VAR_TEXT_LEN_MIN <= mVarTextLen && mVarTextLen <= VAR_TEXT_LEN_MAX) || mVarTextLen == VAR_TEXT_LEN_NO_VALUE);
        }

        bool isVarTextLenValid () const
        {
            return (mVarTextLen != VAR_TEXT_LEN_NO_VALUE);
        }

        void resetVarTextLen ()
        {
            mVarTextLen = VAR_TEXT_LEN_NO_VALUE;
        }

        int8_t getRefApplID () const
        {
            return mRefApplID;
        }

        bool setRefApplID (int8_t v)
        {
            mRefApplID = v;
            return ((REF_APPL_ID_MIN <= mRefApplID && mRefApplID <= REF_APPL_ID_MAX) || mRefApplID == REF_APPL_ID_NO_VALUE);
        }

        bool isRefApplIDValid () const
        {
            return (mRefApplID != REF_APPL_ID_NO_VALUE);
        }

        void resetRefApplID ()
        {
            mRefApplID = REF_APPL_ID_NO_VALUE;
        }

        int8_t getSessionStatus () const
        {
            return mSessionStatus;
        }

        bool setSessionStatus (int8_t v)
        {
            mSessionStatus = v;
            return ((SESSION_STATUS_MIN <= mSessionStatus && mSessionStatus <= SESSION_STATUS_MAX) || mSessionStatus == SESSION_STATUS_NO_VALUE);
        }

        bool isSessionStatusValid () const
        {
            return (mSessionStatus != SESSION_STATUS_NO_VALUE);
        }

        void resetSessionStatus ()
        {
            mSessionStatus = SESSION_STATUS_NO_VALUE;
        }

        string getPad4 () const
        {
            return string (mPad4, PAD4_MAX_LENGTH);
        }

        bool setPad4 (const string& v)
        {
            memset (mPad4, '\0', sizeof (mPad4));
            size_t size = min ((size_t) v.size (), (size_t) PAD4_MAX_LENGTH);
            strncpy (mPad4, v.c_str (), size);
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

        string getVarText () const
        {
            return mVarText;
        }

        bool setVarText (const string& v)
        {
            mVarText = string (v);
            mVarText.resize (min ( (size_t) v.size (), (size_t) VAR_TEXT_MAX_LENGTH));
            mVarTextLen = mVarText.size ();
            return (v.size () <= VAR_TEXT_MAX_LENGTH);
        }

        bool isVarTextValid () const
        {
            return (mVarTextLen != VAR_TEXT_LEN_NO_VALUE);
        }

        void resetVarText ()
        {
            mVarTextLen = VAR_TEXT_LEN_NO_VALUE;
            mVarText = string();
        }


        // render current raw size
        size_t getRawSize () const
        {
            size_t result = mMessageHeaderOut.getRawSize()
                + mNotifHeader.getRawSize()
                + sizeof (mApplIDStatus)
                + sizeof (mRefApplSubID)
                + sizeof (mVarTextLen)
                + sizeof (mRefApplID)
                + sizeof (mSessionStatus)
                + sizeof (mPad4)
                + mVarText.size ();
            result += (8 - result) % 8;
            return result;
        }

        // serialization
        codecState serialize (void *buf, size_t len, size_t &used)
        {
            mVarTextLen = mVarText.size ();
            mMessageHeaderOut.mBodyLen = getRawSize ();
            codecState state;
            state = mMessageHeaderOut.serialize (buf, len, used);
            if (state != GW_CODEC_SUCCESS) return state;
            state = mNotifHeader.serialize (buf, len, used);
            if (state != GW_CODEC_SUCCESS) return state;
            state = eti::serialize (mApplIDStatus, buf, len, used);
            if (state != GW_CODEC_SUCCESS) return state;
            state = eti::serialize (mRefApplSubID, buf, len, used);
            if (state != GW_CODEC_SUCCESS) return state;
            state = eti::serialize (mVarTextLen, buf, len, used);
            if (state != GW_CODEC_SUCCESS) return state;
            state = eti::serialize (mRefApplID, buf, len, used);
            if (state != GW_CODEC_SUCCESS) return state;
            state = eti::serialize (mSessionStatus, buf, len, used);
            if (state != GW_CODEC_SUCCESS) return state;
            state = eti::serialize (mPad4, buf, len, used);
            if (state != GW_CODEC_SUCCESS) return state;
            state = eti::serialize (mVarText, VAR_TEXT_MAX_LENGTH, buf, len, used);
            if (state != GW_CODEC_SUCCESS) return state;
            size_t extraPad = mMessageHeaderOut.mBodyLen - used;
            state = eti::serialize (string (extraPad, '\0'), extraPad, buf, len, used);
            if (state != GW_CODEC_SUCCESS) return state;
            return GW_CODEC_SUCCESS;
        }

        // deserialization
        codecState deserialize (const void *buf, size_t len, size_t &used)
        {
            codecState state;
            state = mMessageHeaderOut.deserialize (buf, len, used);
            if (state != GW_CODEC_SUCCESS) return state;
            state = mNotifHeader.deserialize (buf, len, used);
            if (state != GW_CODEC_SUCCESS) return state;
            state = eti::deserialize (mApplIDStatus, buf, len, used);
            if (state != GW_CODEC_SUCCESS) return state;
            state = eti::deserialize (mRefApplSubID, buf, len, used);
            if (state != GW_CODEC_SUCCESS) return state;
            state = eti::deserialize (mVarTextLen, buf, len, used);
            if (state != GW_CODEC_SUCCESS) return state;
            state = eti::deserialize (mRefApplID, buf, len, used);
            if (state != GW_CODEC_SUCCESS) return state;
            state = eti::deserialize (mSessionStatus, buf, len, used);
            if (state != GW_CODEC_SUCCESS) return state;
            state = eti::deserialize (mPad4, buf, len, used);
            if (state != GW_CODEC_SUCCESS) return state;
            state = eti::deserialize (mVarText, mVarTextLen, buf, len, used);
            if (state != GW_CODEC_SUCCESS) return state;
            mMessageHeaderOut.mBodyLen = getRawSize ();
            size_t extraPad = mMessageHeaderOut.mBodyLen - used;
            string stringPad;
            state = eti::deserialize (stringPad, extraPad, buf, len, used);
            if (state != GW_CODEC_SUCCESS) return state;
            return GW_CODEC_SUCCESS;
        }

        // string conversion
        string toString () const
        {
            stringstream sss;
            sss << "BroadcastErrorNotification::"
                << "[MessageHeaderOut=" << mMessageHeaderOut.toString () << "],"
                << "[NotifHeader=" << mNotifHeader.toString () << "],"
                << "[ApplIDStatus=" << getApplIDStatus () << "],"
                << "[RefApplSubID=" << getRefApplSubID () << "],"
                << "[VarTextLen=" << getVarTextLen () << "],"
                << "[RefApplID=" << getRefApplID () << "],"
                << "[SessionStatus=" << getSessionStatus () << "],"
                << "[Pad4=" << getPad4 () << "],"
                << "[VarText=" << getVarText () << "]";
            return sss.str();
        }
};

const uint32_t xetraBroadcastErrorNotificationPacket::APPL_IDSTATUS_MIN = 0;
const uint32_t xetraBroadcastErrorNotificationPacket::APPL_IDSTATUS_MAX = 4294967294;
const uint32_t xetraBroadcastErrorNotificationPacket::APPL_IDSTATUS_NO_VALUE = 0xFFFFFFFF;
const uint32_t xetraBroadcastErrorNotificationPacket::REF_APPL_SUB_ID_MIN = 0;
const uint32_t xetraBroadcastErrorNotificationPacket::REF_APPL_SUB_ID_MAX = 4294967294;
const uint32_t xetraBroadcastErrorNotificationPacket::REF_APPL_SUB_ID_NO_VALUE = 0xFFFFFFFF;
const int16_t xetraBroadcastErrorNotificationPacket::VAR_TEXT_LEN_MIN = 0;
const int16_t xetraBroadcastErrorNotificationPacket::VAR_TEXT_LEN_MAX = 2000;
const int16_t xetraBroadcastErrorNotificationPacket::VAR_TEXT_LEN_NO_VALUE = 0xFFFF;
const int8_t xetraBroadcastErrorNotificationPacket::REF_APPL_ID_MIN = 0;
const int8_t xetraBroadcastErrorNotificationPacket::REF_APPL_ID_MAX = 10;
const int8_t xetraBroadcastErrorNotificationPacket::REF_APPL_ID_NO_VALUE = 0xFF;
const int8_t xetraBroadcastErrorNotificationPacket::SESSION_STATUS_MIN = 0;
const int8_t xetraBroadcastErrorNotificationPacket::SESSION_STATUS_MAX = 4;
const int8_t xetraBroadcastErrorNotificationPacket::SESSION_STATUS_NO_VALUE = 0xFF;
const char xetraBroadcastErrorNotificationPacket::PAD4_NO_VALUE[4] = {0x00, 0x00, 0x00, 0x00};
const size_t xetraBroadcastErrorNotificationPacket::PAD4_MAX_LENGTH = 4;
const size_t xetraBroadcastErrorNotificationPacket::VAR_TEXT_MAX_LENGTH = 2000;


} // namespace neueda

#endif // XETRA_BROADCASTERRORNOTIFICATION_PACKET_H
