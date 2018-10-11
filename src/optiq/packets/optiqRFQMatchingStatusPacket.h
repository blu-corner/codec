/*
 * Copyright 2014-2018 Neueda Ltd.
 * 
 * Generated 22:51:13 05/10/18
 */
#ifndef _OPTIQ_RFQMATCHINGSTATUS_PACKET_H_
#define _OPTIQ_RFQMATCHINGSTATUS_PACKET_H_

#include <string>
#include <sstream>
#include <stdint.h>

#include "optiqConstants.h"
#include "optiqPacketUtils.h"
#include "optiqMessageHeaderPacket.h"


namespace neueda
{

PACKED(class optiqRFQMatchingStatusPacket
{
public:
    uint16_t mFrameLength;
    optiqMessageHeaderPacket mHeader;
        uint32_t mMsgSeqNum;
        char mFirmID[8];
        uint64_t mBookIn;
        uint64_t mBookOUTTime;
        uint64_t mOEGINFromME;
        uint64_t mOEGOUTToMember;
        uint64_t mQuoteReqID;
        int64_t mPotentialMatchingPX;
        uint64_t mPotentialMatchingQty;
        uint32_t mSymbolIndex;
        uint8_t mEMM;
        uint8_t mOrderSide;
        uint8_t mNumberOfLPs;
        uint8_t mRecipientType;

    optiqRFQMatchingStatusPacket ()
    {
        mFrameLength = sizeof (optiqRFQMatchingStatusPacket) - sizeof (uint16_t);
        mHeader.setBlockLength (sizeof (optiqRFQMatchingStatusPacket) -
                                sizeof (optiqMessageHeaderPacket) -
                                sizeof (mFrameLength));
        mHeader.setTemplateId (OptiqRFQMatchingStatusTemplateId);
        mHeader.setSchemaId (0);
        mHeader.setVersion (102);
        mMsgSeqNum = 0;
        memset (mFirmID, 0, 8);
        mBookIn = 0;
        mBookOUTTime = UINT64_MAX;
        mOEGINFromME = UINT64_MAX;
        mOEGOUTToMember = UINT64_MAX;
        mQuoteReqID = 0;
        mPotentialMatchingPX = INT64_MIN;
        mPotentialMatchingQty = 0;
        mSymbolIndex = 0;
        mEMM = 0;
        mOrderSide = 0;
        mNumberOfLPs = UINT8_MAX;
        mRecipientType = 0;
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
    
    uint64_t getQuoteReqID () const
    {
        return mQuoteReqID;
    }

    bool setQuoteReqID (uint64_t val)
    {
        mQuoteReqID = val;
        return true;
    }
    
    int64_t getPotentialMatchingPX () const
    {
        return mPotentialMatchingPX;
    }

    bool setPotentialMatchingPX (int64_t val)
    {
        mPotentialMatchingPX = val;
        return true;
    }
    
    uint64_t getPotentialMatchingQty () const
    {
        return mPotentialMatchingQty;
    }

    bool setPotentialMatchingQty (uint64_t val)
    {
        mPotentialMatchingQty = val;
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
    
    uint8_t getOrderSide () const
    {
        return mOrderSide;
    }

    bool setOrderSide (uint8_t val)
    {
        mOrderSide = val;
        return true;
    }
    
    uint8_t getNumberOfLPs () const
    {
        return mNumberOfLPs;
    }

    bool setNumberOfLPs (uint8_t val)
    {
        mNumberOfLPs = val;
        return true;
    }
    
    uint8_t getRecipientType () const
    {
        return mRecipientType;
    }

    bool setRecipientType (uint8_t val)
    {
        mRecipientType = val;
        return true;
    }
});

} // namespace neueda

#endif
