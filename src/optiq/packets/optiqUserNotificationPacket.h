/*
 * Copyright 2014-2018 Neueda Ltd.
 * 
 * Generated 14:16:38 30/04/19
 */
#ifndef _OPTIQ_USERNOTIFICATION_PACKET_H_
#define _OPTIQ_USERNOTIFICATION_PACKET_H_

#include <string>
#include <sstream>
#include <stdint.h>

#include "optiqConstants.h"
#include "optiqPacketUtils.h"
#include "optiqMessageHeaderPacket.h"


namespace neueda
{

PACKED(class optiqUserNotificationPacket
{
public:
    uint16_t mFrameLength;
    optiqMessageHeaderPacket mHeader;
        uint32_t mMsgSeqNum;
        char mFirmID[8];
        int32_t mExecutionWithinFirmShortCode;
        int32_t mClientIdentificationShortcode;
        char mFamilyID[8];
        uint32_t mSymbolIndex;
        uint8_t mUserStatus;

    optiqUserNotificationPacket ()
    {
        mFrameLength = sizeof (optiqUserNotificationPacket) - sizeof (uint16_t);
        mHeader.setBlockLength (sizeof (optiqUserNotificationPacket) -
                                sizeof (optiqMessageHeaderPacket) -
                                sizeof (mFrameLength));
        mHeader.setTemplateId (OptiqUserNotificationTemplateId);
        mHeader.setSchemaId (0);
        mHeader.setVersion (102);
        mMsgSeqNum = 0;
        memset (mFirmID, 0, 8);
        mExecutionWithinFirmShortCode = INT32_MIN;
        mClientIdentificationShortcode = INT32_MIN;
        memset (mFamilyID, 0, 8);
        mSymbolIndex = UINT32_MAX;
        mUserStatus = 0;
    }

    
    uint32_t getMsgSeqNum () const
    {
        return mMsgSeqNum;
    }

    bool setMsgSeqNum (uint32_t val)
    {
        mMsgSeqNum = val;
        return true;
    }
    
    string getFirmID () const
    {
        return getString (mFirmID, sizeof (mFirmID));
    }

    bool setFirmID (const string& val)
    {
        return setString (mFirmID, val, sizeof (mFirmID));
    }
    
    int32_t getExecutionWithinFirmShortCode () const
    {
        return mExecutionWithinFirmShortCode;
    }

    bool setExecutionWithinFirmShortCode (int32_t val)
    {
        mExecutionWithinFirmShortCode = val;
        return true;
    }
    
    int32_t getClientIdentificationShortcode () const
    {
        return mClientIdentificationShortcode;
    }

    bool setClientIdentificationShortcode (int32_t val)
    {
        mClientIdentificationShortcode = val;
        return true;
    }
    
    string getFamilyID () const
    {
        return getString (mFamilyID, sizeof (mFamilyID));
    }

    bool setFamilyID (const string& val)
    {
        return setString (mFamilyID, val, sizeof (mFamilyID));
    }
    
    uint32_t getSymbolIndex () const
    {
        return mSymbolIndex;
    }

    bool setSymbolIndex (uint32_t val)
    {
        mSymbolIndex = val;
        return true;
    }
    
    uint8_t getUserStatus () const
    {
        return mUserStatus;
    }

    bool setUserStatus (uint8_t val)
    {
        mUserStatus = val;
        return true;
    }
});

} // namespace neueda

#endif
