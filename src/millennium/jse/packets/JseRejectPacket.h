/*
 * Copyright 2014-2018 Neueda Ltd.
 * 
 * Generated 21/09/2018
 */
#ifndef JSE_REJECT_PACKET_H
#define JSE_REJECT_PACKET_H

#include <string>
#include <sstream>
#include <stdint.h>
#include "MillenniumPacketUtils.h"
#include "JseHeaderPacket.h"

namespace neueda
{

PACKED(class JseReject
{
    public:
        JseHeader mHeader;

        int32_t mRejectCode;
        char mRejectReason[30];
        char mMessageType;
        char mClientOrderID[30];

        JseReject ()
        {
            mHeader.mMessageLength = (int16_t)sizeof (JseReject) - ((int16_t)sizeof (JseHeader) - 1);
            mHeader.mMessageType = '3';

            mRejectCode = 0;
            memset (mRejectReason, '\0', 30);
            memset (mClientOrderID, '\0', 30);
        }

        bool setRejectCode (int32_t v)
        {
            mRejectCode = v;
            return true;
        }

        int32_t getRejectCode ()
        {
            return mRejectCode;
        }

        bool setRejectReason (const string& v)
        {
            return setString (mRejectReason, v, 30);
        }

        string getRejectReason ()
        {
            return getString (mRejectReason, 30);
        }

        bool setMessageType (char v)
        {
            mMessageType = v;
            return true;
        }

        char getMessageType ()
        {
            return mMessageType;
        }

        bool setClientOrderID (const string& v)
        {
            return setString (mClientOrderID, v, 30);
        }

        string getClientOrderID ()
        {
            return getString (mClientOrderID, 30);
        }

        string toString ()
        {
            stringstream ss;
            ss << "Reject::"
               << "[RejectCode=" << getRejectCode () << "],"
               << "[RejectReason=" << getRejectReason () << "],"
               << "[MessageType=" << getMessageType () << "],"
               << "[ClientOrderID=" << getClientOrderID () << "]";
            return ss.str ();
        }
});

} // namespace neueda

#endif
