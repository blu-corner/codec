/*
 * Copyright 2014-2018 Neueda Ltd.
 * 
 * Generated 14:16:38 30/04/19
 */
#ifndef _OPTIQ_OWNERSHIPREQUESTACK_PACKET_H_
#define _OPTIQ_OWNERSHIPREQUESTACK_PACKET_H_

#include <string>
#include <sstream>
#include <stdint.h>

#include "optiqConstants.h"
#include "optiqPacketUtils.h"
#include "optiqMessageHeaderPacket.h"


namespace neueda
{

PACKED(class optiqOwnershipRequestAckPacket
{
public:
    uint16_t mFrameLength;
    optiqMessageHeaderPacket mHeader;
        uint32_t mMsgSeqNum;
        char mFirmID[8];
        int64_t mClientOrderID;
        uint64_t mOrderID;
        uint32_t mSymbolIndex;
        uint32_t mLogicalAccessID;
        uint16_t mOEPartitionID;
        int32_t mTotalAffectedOrders;
        uint8_t mOrderCategory;

    optiqOwnershipRequestAckPacket ()
    {
        mFrameLength = sizeof (optiqOwnershipRequestAckPacket) - sizeof (uint16_t);
        mHeader.setBlockLength (sizeof (optiqOwnershipRequestAckPacket) -
                                sizeof (optiqMessageHeaderPacket) -
                                sizeof (mFrameLength));
        mHeader.setTemplateId (OptiqOwnershipRequestAckTemplateId);
        mHeader.setSchemaId (0);
        mHeader.setVersion (102);
        mMsgSeqNum = 0;
        memset (mFirmID, 0, 8);
        mClientOrderID = 0;
        mOrderID = UINT64_MAX;
        mSymbolIndex = 0;
        mLogicalAccessID = UINT32_MAX;
        mOEPartitionID = UINT16_MAX;
        mTotalAffectedOrders = 0;
        mOrderCategory = 0;
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
    
    uint32_t getLogicalAccessID () const
    {
        return mLogicalAccessID;
    }

    bool setLogicalAccessID (uint32_t val)
    {
        mLogicalAccessID = val;
        return true;
    }
    
    uint16_t getOEPartitionID () const
    {
        return mOEPartitionID;
    }

    bool setOEPartitionID (uint16_t val)
    {
        mOEPartitionID = val;
        return true;
    }
    
    int32_t getTotalAffectedOrders () const
    {
        return mTotalAffectedOrders;
    }

    bool setTotalAffectedOrders (int32_t val)
    {
        mTotalAffectedOrders = val;
        return true;
    }
    
    uint8_t getOrderCategory () const
    {
        return mOrderCategory;
    }

    bool setOrderCategory (uint8_t val)
    {
        mOrderCategory = val;
        return true;
    }
});

} // namespace neueda

#endif
