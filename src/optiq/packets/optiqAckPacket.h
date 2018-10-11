/*
 * Copyright 2014-2018 Neueda Ltd.
 * 
 * Generated 22:51:13 05/10/18
 */
#ifndef _OPTIQ_ACK_PACKET_H_
#define _OPTIQ_ACK_PACKET_H_

#include <string>
#include <sstream>
#include <stdint.h>

#include "optiqConstants.h"
#include "optiqPacketUtils.h"
#include "optiqMessageHeaderPacket.h"


namespace neueda
{

PACKED(class optiqAckPacket
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
        int64_t mOrigClientOrderID;
        uint32_t mSymbolIndex;
        uint8_t mEMM;
        uint8_t mOrderSide;
        uint8_t mAckType;
        uint8_t mAckPhase;
        uint64_t mOrderID;
        uint64_t mOrderPriority;
        int64_t mOrderPx;
        uint64_t mOrderQty;
        uint8_t mAckQualifiers;

    optiqAckPacket ()
    {
        mFrameLength = sizeof (optiqAckPacket) - sizeof (uint16_t);
        mHeader.setBlockLength (sizeof (optiqAckPacket) -
                                sizeof (optiqMessageHeaderPacket) -
                                sizeof (mFrameLength));
        mHeader.setTemplateId (OptiqAckTemplateId);
        mHeader.setSchemaId (0);
        mHeader.setVersion (102);
        mMsgSeqNum = 0;
        memset (mFirmID, 0, 8);
        mSendingTime = UINT64_MAX;
        mOEGINFromMember = UINT64_MAX;
        mOEGOUTTimeToME = UINT64_MAX;
        mBookIn = 0;
        mBookOUTTime = UINT64_MAX;
        mOEGINFromME = UINT64_MAX;
        mOEGOUTToMember = UINT64_MAX;
        mClientOrderID = INT64_MIN;
        mOrigClientOrderID = INT64_MIN;
        mSymbolIndex = 0;
        mEMM = 0;
        mOrderSide = 0;
        mAckType = 0;
        mAckPhase = 0;
        mOrderID = UINT64_MAX;
        mOrderPriority = UINT64_MAX;
        mOrderPx = INT64_MIN;
        mOrderQty = UINT64_MAX;
        mAckQualifiers = 0;
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
    
    int64_t getOrigClientOrderID () const
    {
        return mOrigClientOrderID;
    }

    bool setOrigClientOrderID (int64_t val)
    {
        mOrigClientOrderID = val;
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
    
    uint8_t getAckType () const
    {
        return mAckType;
    }

    bool setAckType (uint8_t val)
    {
        mAckType = val;
        return true;
    }
    
    uint8_t getAckPhase () const
    {
        return mAckPhase;
    }

    bool setAckPhase (uint8_t val)
    {
        mAckPhase = val;
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
    
    uint64_t getOrderPriority () const
    {
        return mOrderPriority;
    }

    bool setOrderPriority (uint64_t val)
    {
        mOrderPriority = val;
        return true;
    }
    
    int64_t getOrderPx () const
    {
        return mOrderPx;
    }

    bool setOrderPx (int64_t val)
    {
        mOrderPx = val;
        return true;
    }
    
    uint64_t getOrderQty () const
    {
        return mOrderQty;
    }

    bool setOrderQty (uint64_t val)
    {
        mOrderQty = val;
        return true;
    }
    
    uint8_t getAckQualifiers () const
    {
        return mAckQualifiers;
    }

    bool setAckQualifiers (uint8_t val)
    {
        mAckQualifiers = val;
        return true;
    }
    bool getAckQualifiers_DarkIndicator () const
    {
        return ((mAckQualifiers >> OPTIQ_ACKQUALIFIERS_DARKINDICATOR) & 1);
    }

    void setAckQualifiers_DarkIndicator ()
    {
        mAckQualifiers |= OPTIQ_ACKQUALIFIERS_DARKINDICATOR;
    }

    bool getAckQualifiers_QueueIndicator () const
    {
        return ((mAckQualifiers >> OPTIQ_ACKQUALIFIERS_QUEUEINDICATOR) & 1);
    }

    void setAckQualifiers_QueueIndicator ()
    {
        mAckQualifiers |= OPTIQ_ACKQUALIFIERS_QUEUEINDICATOR;
    }

});

} // namespace neueda

#endif
