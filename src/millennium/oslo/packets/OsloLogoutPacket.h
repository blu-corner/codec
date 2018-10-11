/*
 * Copyright 2014-2018 Neueda Ltd.
 * 
 * Generated 21/09/2018
 */
#ifndef OSLO_LOGOUT_PACKET_H
#define OSLO_LOGOUT_PACKET_H

#include <string>
#include <sstream>
#include <stdint.h>
#include "MillenniumPacketUtils.h"
#include "OsloHeaderPacket.h"

namespace neueda
{

PACKED(class OsloLogout
{
    public:
        OsloHeader mHeader;

        char mReason[20];

        OsloLogout ()
        {
            mHeader.mMessageLength = (int16_t)sizeof (OsloLogout) - ((int16_t)sizeof (OsloHeader) - 1);
            mHeader.mMessageType = '5';

            memset (mReason, '\0', 20);
        }

        bool setReason (const string& v)
        {
            return setString (mReason, v, 20);
        }

        string getReason ()
        {
            return getString (mReason, 20);
        }

        string toString ()
        {
            stringstream ss;
            ss << "Logout::"
               << "[Reason=" << getReason () << "]";
            return ss.str ();
        }
});

} // namespace neueda

#endif
