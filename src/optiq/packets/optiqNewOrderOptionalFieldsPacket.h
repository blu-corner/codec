/*
 * Copyright 2014-2018 Neueda Ltd.
 * 
 * Generated 11:10:58 07/05/19
 */
#ifndef _OPTIQ_NEWORDEROPTIONALFIELDS_PACKET_H_
#define _OPTIQ_NEWORDEROPTIONALFIELDS_PACKET_H_

#include <string>
#include <sstream>
#include <stdint.h>

#include "optiqConstants.h"
#include "optiqPacketUtils.h"
/* #include "OptiqMessageHeaderPacket.h" */


namespace neueda
{

PACKED(class optiqNewOrderOptionalFieldsPacket
{
public:
        int64_t mStopPx;
        int64_t mUndisclosedPrice;
        uint64_t mDisclosedQty;
        uint64_t mMinOrderQty;
        uint64_t mQuoteReqID;
        uint32_t mOrderExpirationTime;
        uint16_t mOrderExpirationDate;
        int8_t mPegOffset;
        uint8_t mTradingSession;
        uint8_t mUndisclosedIcebergType;
        uint8_t mStopTriggeredTimeInForce;

    optiqNewOrderOptionalFieldsPacket ()
    {
        mStopPx = INT64_MIN;
        mUndisclosedPrice = INT64_MIN;
        mDisclosedQty = UINT64_MAX;
        mMinOrderQty = UINT64_MAX;
        mQuoteReqID = UINT64_MAX;
        mOrderExpirationTime = UINT32_MAX;
        mOrderExpirationDate = UINT16_MAX;
        mPegOffset = INT8_MIN;
        mTradingSession = 0;
        mUndisclosedIcebergType = 0;
        mStopTriggeredTimeInForce = 0;
    }

    
    int64_t getStopPx () const
    {
        return mStopPx;
    }

    bool setStopPx (int64_t val)
    {
        mStopPx = val;
        return true;
    }
    
    int64_t getUndisclosedPrice () const
    {
        return mUndisclosedPrice;
    }

    bool setUndisclosedPrice (int64_t val)
    {
        mUndisclosedPrice = val;
        return true;
    }
    
    uint64_t getDisclosedQty () const
    {
        return mDisclosedQty;
    }

    bool setDisclosedQty (uint64_t val)
    {
        mDisclosedQty = val;
        return true;
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
    
    uint64_t getQuoteReqID () const
    {
        return mQuoteReqID;
    }

    bool setQuoteReqID (uint64_t val)
    {
        mQuoteReqID = val;
        return true;
    }
    
    uint32_t getOrderExpirationTime () const
    {
        return mOrderExpirationTime;
    }

    bool setOrderExpirationTime (uint32_t val)
    {
        mOrderExpirationTime = val;
        return true;
    }
    
    uint16_t getOrderExpirationDate () const
    {
        return mOrderExpirationDate;
    }

    bool setOrderExpirationDate (uint16_t val)
    {
        mOrderExpirationDate = val;
        return true;
    }
    
    int8_t getPegOffset () const
    {
        return mPegOffset;
    }

    bool setPegOffset (int8_t val)
    {
        mPegOffset = val;
        return true;
    }
    
    uint8_t getTradingSession () const
    {
        return mTradingSession;
    }

    bool setTradingSession (uint8_t val)
    {
        mTradingSession = val;
        return true;
    }
    bool getTradingSession_Session1 () const
    {
        return ((mTradingSession >> OPTIQ_TRADINGSESSIONVALIDITY_SESSION1) & 1);
    }

    void setTradingSession_Session1 ()
    {
        mTradingSession |= OPTIQ_TRADINGSESSIONVALIDITY_SESSION1;
    }

    bool getTradingSession_Session2 () const
    {
        return ((mTradingSession >> OPTIQ_TRADINGSESSIONVALIDITY_SESSION2) & 1);
    }

    void setTradingSession_Session2 ()
    {
        mTradingSession |= OPTIQ_TRADINGSESSIONVALIDITY_SESSION2;
    }

    bool getTradingSession_Session3 () const
    {
        return ((mTradingSession >> OPTIQ_TRADINGSESSIONVALIDITY_SESSION3) & 1);
    }

    void setTradingSession_Session3 ()
    {
        mTradingSession |= OPTIQ_TRADINGSESSIONVALIDITY_SESSION3;
    }

    
    uint8_t getUndisclosedIcebergType () const
    {
        return mUndisclosedIcebergType;
    }

    bool setUndisclosedIcebergType (uint8_t val)
    {
        mUndisclosedIcebergType = val;
        return true;
    }
    
    uint8_t getStopTriggeredTimeInForce () const
    {
        return mStopTriggeredTimeInForce;
    }

    bool setStopTriggeredTimeInForce (uint8_t val)
    {
        mStopTriggeredTimeInForce = val;
        return true;
    }

});

} // namespace neueda

#endif
