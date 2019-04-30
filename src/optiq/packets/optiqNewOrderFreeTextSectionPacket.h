/*
 * Copyright 2014-2018 Neueda Ltd.
 * 
 * Generated 14:16:38 30/04/19
 */
#ifndef _OPTIQ_NEWORDERFREETEXTSECTION_PACKET_H_
#define _OPTIQ_NEWORDERFREETEXTSECTION_PACKET_H_

#include <string>
#include <sstream>
#include <stdint.h>

#include "optiqConstants.h"
#include "optiqPacketUtils.h"
/* #include "OptiqMessageHeaderPacket.h" */


namespace neueda
{

PACKED(class optiqNewOrderFreeTextSectionPacket
{
public:
        char mFreeText[18];

    optiqNewOrderFreeTextSectionPacket ()
    {
        memset (mFreeText, 0, 18);
    }

    
    string getFreeText () const
    {
        return getString (mFreeText, sizeof (mFreeText));
    }

    bool setFreeText (const string& val)
    {
        return setString (mFreeText, val, sizeof (mFreeText));
    }

});

} // namespace neueda

#endif
