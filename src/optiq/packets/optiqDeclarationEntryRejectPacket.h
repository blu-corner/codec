/*
 * Copyright 2014-2018 Neueda Ltd.
 * 
 * Generated 08:18:20 18/04/19
 */
#ifndef _OPTIQ_DECLARATIONENTRYREJECT_PACKET_H_
#define _OPTIQ_DECLARATIONENTRYREJECT_PACKET_H_

#include <string>
#include <sstream>
#include <stdint.h>

#include "optiqConstants.h"
#include "optiqPacketUtils.h"
#include "optiqMessageHeaderPacket.h"


namespace neueda
{

PACKED(class optiqDeclarationEntryRejectPacket
{
public:
    uint16_t mFrameLength;
    optiqMessageHeaderPacket mHeader;
        uint32_t mMsgSeqNum;
        char mFirmID[8];
        int64_t mClientOrderID;
        uint32_t mSymbolIndex;
        uint8_t mEMM;
        char mMICofSecondaryListing[4];
        uint8_t mOperationType;
        uint16_t mErrorCode;
        uint8_t mRejectedMessage;
        uint16_t mRejectedMessageID;

    optiqDeclarationEntryRejectPacket ()
    {
        mFrameLength = sizeof (optiqDeclarationEntryRejectPacket) - sizeof (uint16_t);
        mHeader.setBlockLength (sizeof (optiqDeclarationEntryRejectPacket) -
                                sizeof (optiqMessageHeaderPacket) -
                                sizeof (mFrameLength));
        mHeader.setTemplateId (OptiqDeclarationEntryRejectTemplateId);
        mHeader.setSchemaId (0);
        mHeader.setVersion (102);
        mMsgSeqNum = 0;
        memset (mFirmID, 0, 8);
        mClientOrderID = 0;
        mSymbolIndex = 0;
        mEMM = 0;
        memset (mMICofSecondaryListing, 0, 4);
        mOperationType = 0;
        mErrorCode = 0;
        mRejectedMessage = UINT8_MAX;
        mRejectedMessageID = UINT16_MAX;
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
    
    int64_t getClientOrderID () const
    {
        return mClientOrderID;
    }

    bool setClientOrderID (int64_t val)
    {
        mClientOrderID = val;
        return true;
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
    
    uint8_t getEMM () const
    {
        return mEMM;
    }

    bool setEMM (uint8_t val)
    {
        mEMM = val;
        return true;
    }
    
    string getMICofSecondaryListing () const
    {
        return getString (mMICofSecondaryListing, sizeof (mMICofSecondaryListing));
    }

    bool setMICofSecondaryListing (const string& val)
    {
        return setString (mMICofSecondaryListing, val, sizeof (mMICofSecondaryListing));
    }
    
    uint8_t getOperationType () const
    {
        return mOperationType;
    }

    bool setOperationType (uint8_t val)
    {
        mOperationType = val;
        return true;
    }
    
    uint16_t getErrorCode () const
    {
        return mErrorCode;
    }

    bool setErrorCode (uint16_t val)
    {
        mErrorCode = val;
        return true;
    }
    
    uint8_t getRejectedMessage () const
    {
        return mRejectedMessage;
    }

    bool setRejectedMessage (uint8_t val)
    {
        mRejectedMessage = val;
        return true;
    }
    
    uint16_t getRejectedMessageID () const
    {
        return mRejectedMessageID;
    }

    bool setRejectedMessageID (uint16_t val)
    {
        mRejectedMessageID = val;
        return true;
    }
});

} // namespace neueda

#endif
