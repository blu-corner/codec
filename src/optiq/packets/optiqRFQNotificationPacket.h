/*
 * Copyright 2014-2018 Neueda Ltd.
 * 
 * Generated 14:16:38 30/04/19
 */
#ifndef _OPTIQ_RFQNOTIFICATION_PACKET_H_
#define _OPTIQ_RFQNOTIFICATION_PACKET_H_

#include <string>
#include <sstream>
#include <stdint.h>

#include "optiqConstants.h"
#include "optiqPacketUtils.h"
#include "optiqMessageHeaderPacket.h"


namespace neueda
{

PACKED(class optiqRFQNotificationPacket
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
        uint64_t mOrderQty;
        char mCounterpartFirmID[8];
        uint32_t mSymbolIndex;
        uint8_t mEMM;
        uint8_t mRFQUpdateType;
        uint8_t mOrderSide;
        char mEndClient[11];
        uint8_t mDarkExecutionInstruction;
        uint64_t mMinOrderQty;

    optiqRFQNotificationPacket ()
    {
        mFrameLength = sizeof (optiqRFQNotificationPacket) - sizeof (uint16_t);
        mHeader.setBlockLength (sizeof (optiqRFQNotificationPacket) -
                                sizeof (optiqMessageHeaderPacket) -
                                sizeof (mFrameLength));
        mHeader.setTemplateId (OptiqRFQNotificationTemplateId);
        mHeader.setSchemaId (0);
        mHeader.setVersion (102);
        mMsgSeqNum = 0;
        memset (mFirmID, 0, 8);
        mBookIn = 0;
        mBookOUTTime = UINT64_MAX;
        mOEGINFromME = UINT64_MAX;
        mOEGOUTToMember = UINT64_MAX;
        mQuoteReqID = 0;
        mOrderQty = 0;
        memset (mCounterpartFirmID, 0, 8);
        mSymbolIndex = 0;
        mEMM = 0;
        mRFQUpdateType = 0;
        mOrderSide = 0;
        memset (mEndClient, 0, 11);
        mDarkExecutionInstruction = 0;
        mMinOrderQty = UINT64_MAX;
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
    
    uint64_t getOrderQty () const
    {
        return mOrderQty;
    }

    bool setOrderQty (uint64_t val)
    {
        mOrderQty = val;
        return true;
    }
    
    string getCounterpartFirmID () const
    {
        return getString (mCounterpartFirmID, sizeof (mCounterpartFirmID));
    }

    bool setCounterpartFirmID (const string& val)
    {
        return setString (mCounterpartFirmID, val, sizeof (mCounterpartFirmID));
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
    
    uint8_t getRFQUpdateType () const
    {
        return mRFQUpdateType;
    }

    bool setRFQUpdateType (uint8_t val)
    {
        mRFQUpdateType = val;
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
    
    string getEndClient () const
    {
        return getString (mEndClient, sizeof (mEndClient));
    }

    bool setEndClient (const string& val)
    {
        return setString (mEndClient, val, sizeof (mEndClient));
    }
    
    uint8_t getDarkExecutionInstruction () const
    {
        return mDarkExecutionInstruction;
    }

    bool setDarkExecutionInstruction (uint8_t val)
    {
        mDarkExecutionInstruction = val;
        return true;
    }
    bool getDarkExecutionInstruction_DarkIndicator () const
    {
        return ((mDarkExecutionInstruction >> OPTIQ_DARKEXECUTIONINSTRUCTION_DARKINDICATOR) & 1);
    }

    void setDarkExecutionInstruction_DarkIndicator ()
    {
        mDarkExecutionInstruction |= OPTIQ_DARKEXECUTIONINSTRUCTION_DARKINDICATOR;
    }

    bool getDarkExecutionInstruction_DeferredTradeIndicator () const
    {
        return ((mDarkExecutionInstruction >> OPTIQ_DARKEXECUTIONINSTRUCTION_DEFERREDTRADEINDICATOR) & 1);
    }

    void setDarkExecutionInstruction_DeferredTradeIndicator ()
    {
        mDarkExecutionInstruction |= OPTIQ_DARKEXECUTIONINSTRUCTION_DEFERREDTRADEINDICATOR;
    }

    bool getDarkExecutionInstruction_DisplayedOrderInteraction () const
    {
        return ((mDarkExecutionInstruction >> OPTIQ_DARKEXECUTIONINSTRUCTION_DISPLAYEDORDERINTERACTION) & 1);
    }

    void setDarkExecutionInstruction_DisplayedOrderInteraction ()
    {
        mDarkExecutionInstruction |= OPTIQ_DARKEXECUTIONINSTRUCTION_DISPLAYEDORDERINTERACTION;
    }

    bool getDarkExecutionInstruction_SweepOrderIndicator () const
    {
        return ((mDarkExecutionInstruction >> OPTIQ_DARKEXECUTIONINSTRUCTION_SWEEPORDERINDICATOR) & 1);
    }

    void setDarkExecutionInstruction_SweepOrderIndicator ()
    {
        mDarkExecutionInstruction |= OPTIQ_DARKEXECUTIONINSTRUCTION_SWEEPORDERINDICATOR;
    }

    bool getDarkExecutionInstruction_MinimumQuantityType () const
    {
        return ((mDarkExecutionInstruction >> OPTIQ_DARKEXECUTIONINSTRUCTION_MINIMUMQUANTITYTYPE) & 1);
    }

    void setDarkExecutionInstruction_MinimumQuantityType ()
    {
        mDarkExecutionInstruction |= OPTIQ_DARKEXECUTIONINSTRUCTION_MINIMUMQUANTITYTYPE;
    }

    
    uint64_t getMinOrderQty () const
    {
        return mMinOrderQty;
    }

    bool setMinOrderQty (uint64_t val)
    {
        mMinOrderQty = val;
        return true;
    }
});

} // namespace neueda

#endif
