/*
 * Copyright 2014-2018 Neueda Ltd.
 * 
 * Generated 21/09/2018
 */
#ifndef JSE_SECURITYDEFINITIONRESPONSE_PACKET_H
#define JSE_SECURITYDEFINITIONRESPONSE_PACKET_H

#include <string>
#include <sstream>
#include <stdint.h>
#include "MillenniumPacketUtils.h"
#include "JseHeaderPacket.h"

namespace neueda
{

PACKED(class JseSecurityDefinitionResponse
{
    public:
        JseHeader mHeader;

        char mSecurityRequestID[10];
        uint8_t mSecurityResponseType;
        int32_t mRejectCode;
        int32_t mSecurityID;
        uint8_t mSecurityType;

        JseSecurityDefinitionResponse ()
        {
            mHeader.mMessageLength = (int16_t)sizeof (JseSecurityDefinitionResponse) - ((int16_t)sizeof (JseHeader) - 1);
            mHeader.mMessageType = 'R';

            memset (mSecurityRequestID, '\0', 10);
            mSecurityResponseType = 0;
            mRejectCode = 0;
            mSecurityID = 0;
            mSecurityType = 0;
        }

        bool setSecurityRequestID (const string& v)
        {
            return setString (mSecurityRequestID, v, 10);
        }

        string getSecurityRequestID ()
        {
            return getString (mSecurityRequestID, 10);
        }

        bool setSecurityResponseType (uint8_t v)
        {
            mSecurityResponseType = v;
            return true;
        }

        uint8_t getSecurityResponseType ()
        {
            return mSecurityResponseType;
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

        bool setSecurityID (int32_t v)
        {
            mSecurityID = v;
            return true;
        }

        int32_t getSecurityID ()
        {
            return mSecurityID;
        }

        bool setSecurityType (uint8_t v)
        {
            mSecurityType = v;
            return true;
        }

        uint8_t getSecurityType ()
        {
            return mSecurityType;
        }

        string toString ()
        {
            stringstream ss;
            ss << "SecurityDefinitionResponse::"
               << "[SecurityRequestID=" << getSecurityRequestID () << "],"
               << "[SecurityResponseType=" << unsigned(getSecurityResponseType ()) << "],"
               << "[RejectCode=" << getRejectCode () << "],"
               << "[SecurityID=" << getSecurityID () << "],"
               << "[SecurityType=" << unsigned(getSecurityType ()) << "]";
            return ss.str ();
        }
});

} // namespace neueda

#endif
