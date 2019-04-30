/*
 * Copyright 2014-2018 Neueda Ltd.
 * 
 * Generated 14:16:38 30/04/19
 */
#ifndef _OPTIQ_REJECT_PACKET_H_
#define _OPTIQ_REJECT_PACKET_H_

#include <string>
#include <sstream>
#include <stdint.h>

#include "optiqConstants.h"
#include "optiqPacketUtils.h"
#include "optiqMessageHeaderPacket.h"


namespace neueda
{

PACKED(class optiqRejectPacket
{
public:
    uint16_t mFrameLength;
    optiqMessageHeaderPacket mHeader;
        uint32_t mMsgSeqNum;
        char mFirmID[8];
        uint64_t mSendingTime;
        uint64_t mOEGINFromMember;
        uint64_t mOEGOUTTimeToME;
        uint64_t mBookIn;
        uint64_t mBookOUTTime;
        uint64_t mOEGINFromME;
        uint64_t mOEGOUTToMember;
        int64_t mClientOrderID;
        uint64_t mOrderID;
        uint32_t mSymbolIndex;
        uint8_t mEMM;
        uint8_t mRejectedMessage;
        uint16_t mErrorCode;
        uint16_t mRejectedMessageID;

    optiqRejectPacket ()
    {
        mFrameLength = sizeof (optiqRejectPacket) - sizeof (uint16_t);
        mHeader.setBlockLength (sizeof (optiqRejectPacket) -
                                sizeof (optiqMessageHeaderPacket) -
                                sizeof (mFrameLength));
        mHeader.setTemplateId (OptiqRejectTemplateId);
        mHeader.setSchemaId (0);
        mHeader.setVersion (102);
        mMsgSeqNum = 0;
        memset (mFirmID, 0, 8);
        mSendingTime = UINT64_MAX;
        mOEGINFromMember = UINT64_MAX;
        mOEGOUTTimeToME = UINT64_MAX;
        mBookIn = UINT64_MAX;
        mBookOUTTime = UINT64_MAX;
        mOEGINFromME = UINT64_MAX;
        mOEGOUTToMember = UINT64_MAX;
        mClientOrderID = INT64_MIN;
        mOrderID = UINT64_MAX;
        mSymbolIndex = UINT32_MAX;
        mEMM = 0;
        mRejectedMessage = UINT8_MAX;
        mErrorCode = 0;
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
    
    uint64_t getSendingTime () const
    {
        return mSendingTime;
    }

    bool setSendingTime (uint64_t val)
    {
        mSendingTime = val;
        return true;
    }
    
    uint64_t getOEGINFromMember () const
    {
        return mOEGINFromMember;
    }

    bool setOEGINFromMember (uint64_t val)
    {
        mOEGINFromMember = val;
        return true;
    }
    
    uint64_t getOEGOUTTimeToME () const
    {
        return mOEGOUTTimeToME;
    }

    bool setOEGOUTTimeToME (uint64_t val)
    {
        mOEGOUTTimeToME = val;
        return true;
    }
    
    uint64_t getBookIn () const
    {
        return mBookIn;
    }

    bool setBookIn (uint64_t val)
    {
        mBookIn = val;
        return true;
    }
    
    uint64_t getBookOUTTime () const
    {
        return mBookOUTTime;
    }

    bool setBookOUTTime (uint64_t val)
    {
        mBookOUTTime = val;
        return true;
    }
    
    uint64_t getOEGINFromME () const
    {
        return mOEGINFromME;
    }

    bool setOEGINFromME (uint64_t val)
    {
        mOEGINFromME = val;
        return true;
    }
    
    uint64_t getOEGOUTToMember () const
    {
        return mOEGOUTToMember;
    }

    bool setOEGOUTToMember (uint64_t val)
    {
        mOEGOUTToMember = val;
        return true;
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
    
    uint64_t getOrderID () const
    {
        return mOrderID;
    }

    bool setOrderID (uint64_t val)
    {
        mOrderID = val;
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
    
    uint8_t getRejectedMessage () const
    {
        return mRejectedMessage;
    }

    bool setRejectedMessage (uint8_t val)
    {
        mRejectedMessage = val;
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
