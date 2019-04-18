/*
 * Copyright 2014-2018 Neueda
 */
/* swx Version 3.17.0 */
#include "swxCodec.h"
#include "swxPacketUtils.h"
#include <stdint.h>
#include <limits.h>
#include <sstream>

namespace neueda
{

extern "C" codec*
getCodec ()
{
    return new swxCodec ();
}
 
bool
swxCodec::setLeftPaddedString (const cdr& d,
                                     cdrKey_t name,    
                                     char* buf,
                                     size_t bufLen,
                                     unsigned char paddingByte)
{
    std::string from;
    if (!d.getString (name, from))
        return false;
    if (from.size () > bufLen)
        return false;

    return setLeftPaddedStringBuf (from, buf, bufLen, paddingByte);
}

bool
swxCodec::setRightPaddedString (const cdr& d,
                                     cdrKey_t name,    
                                     char* buf,
                                     size_t bufLen,
                                     unsigned char paddingByte)
{
    std::string from;
    if (!d.getString (name, from))
        return false;
    if (from.size () > bufLen)
        return false;

    return setRightPaddedStringBuf (from, buf, bufLen, paddingByte);
}

bool
swxCodec::putCharacter (const cdr& d,
                                 cdrKey_t key,
                                 char* c)
{
    if (!d.isType (key, CDR_STRING, 1))
    {
        std::ostringstream s;
        s << key <<  " not a string";
        setLastError (s.str ());
        return false;
    }
    *c = *d.getItem (key)->mString.c_str ();
    return true;
}

bool
swxCodec::putIntegerBigEndian (const cdr& d,
                                     cdrKey_t key,
                                     void* vp,
                                     size_t size)
{
    if (!d.isType (key, CDR_INTEGER))
    {
        std::ostringstream s;
        s << key << " not an integer";
        setLastError (s.str ());
        return false;
    }
    int64_t value = d.getItem (key)->mInteger;
    switch (size)
    {
    case 2:
        if (value > UINT16_MAX)
        {
            std::ostringstream s;
            s << key << " too big";
            setLastError (s.str ());
            return false;
        }
        *(uint16_t*)vp = htons (value);
        return true;
    case 4:
        if (value > UINT32_MAX)
        {
            std::ostringstream s;
            s << key << " too big";
            setLastError (s.str ());
            return false;
        }
        *(uint32_t*)vp = htonl (value);
        return true;
    case 8:
        *(uint64_t*)vp = htonll (value);
        return true;
    default:
        setLastError ("unknown integer size");
        return false;
    }
}

bool
swxCodec::putIntegerLittleEndian (const cdr& d,
                                     cdrKey_t key,
                                     void* vp,
                                     size_t size)
{
    if (!d.isType (key, CDR_INTEGER))
    {
        std::ostringstream s;
        s << key << " not an integer";
        setLastError (s.str ());
        return false;
    }
    int64_t value = d.getItem (key)->mInteger;
    switch (size)
    {
    case 2:
        if (value > UINT16_MAX)
        {
            std::ostringstream s;
            s << key << " too big";
            setLastError (s.str ());
            return false;
        }
        *(uint16_t*)vp = value;
        return true;
    case 4:
        if (value > UINT32_MAX)
        {
            std::ostringstream s;
            s << key << " too big";
            setLastError (s.str ());
            return false;
        }
        *(uint32_t*)vp = value;
        return true;
    case 8:
        *(uint64_t*)vp = value;
        return true;
    default:
        setLastError ("unknown integer size");
        return false;
    }
}

codecState
swxCodec::getEnterOrderMessage (cdr &d, swxHeader* hdr)
{
    d.setString (MessageName, "EnterOrderMessage");
    swxEnterOrderMessage* p = (swxEnterOrderMessage*)hdr;

    d.setString (Type, "%c", p->mType);
    d.setInteger (OrderToken, ntohl (p->mOrderToken));
    {
    std::string stringBuffer;
    bool ok = getRightPaddedString (p->mBankInternalReference,
                                    16,
                                    ' ',
                                    stringBuffer);
    
    if (!ok)
        return GW_CODEC_ERROR;
    d.setString (BankInternalReference, stringBuffer);
    }
    d.setString (OrderVerb, "%c", p->mOrderVerb);
    d.setInteger (OrderQuantity, ntohl (p->mOrderQuantity));
    d.setInteger (OrderBook, ntohl (p->mOrderBook));
    d.setInteger (OrderPrice, ntohl (p->mOrderPrice));
    d.setInteger (TimeInForce, ntohl (p->mTimeInForce));
    d.setInteger (PrincipalId, ntohl (p->mPrincipalId));
    d.setInteger (SecondaryQuantity, ntohl (p->mSecondaryQuantity));
    d.setString (OrderPlacement, "%c", p->mOrderPlacement);
    d.setInteger (AlgoID, ntohll (p->mAlgoID));

    return GW_CODEC_SUCCESS;
}

codecState
swxCodec::getReplaceOrderMessage (cdr &d, swxHeader* hdr)
{
    d.setString (MessageName, "ReplaceOrderMessage");
    swxReplaceOrderMessage* p = (swxReplaceOrderMessage*)hdr;

    d.setString (Type, "%c", p->mType);
    d.setInteger (ExistingOrderToken, ntohl (p->mExistingOrderToken));
    d.setInteger (ReplacementOrderToken, ntohl (p->mReplacementOrderToken));
    d.setInteger (OrderQuantity, ntohl (p->mOrderQuantity));
    d.setInteger (OrderPrice, ntohl (p->mOrderPrice));
    d.setInteger (TimeInForce, ntohl (p->mTimeInForce));
    d.setInteger (SecondaryQuantity, ntohl (p->mSecondaryQuantity));
    d.setInteger (AlgoID, ntohll (p->mAlgoID));

    return GW_CODEC_SUCCESS;
}

codecState
swxCodec::getCancelOrderMessage (cdr &d, swxHeader* hdr)
{
    d.setString (MessageName, "CancelOrderMessage");
    swxCancelOrderMessage* p = (swxCancelOrderMessage*)hdr;

    d.setString (Type, "%c", p->mType);
    d.setInteger (OriginalOrderToken, ntohl (p->mOriginalOrderToken));
    d.setInteger (OrderQuantity, ntohl (p->mOrderQuantity));

    return GW_CODEC_SUCCESS;
}

codecState
swxCodec::getSystemEventMessage (cdr &d, swxHeader* hdr)
{
    d.setString (MessageName, "SystemEventMessage");
    swxSystemEventMessage* p = (swxSystemEventMessage*)hdr;

    d.setString (Type, "%c", p->mType);
    d.setInteger (Timestamp, ntohll (p->mTimestamp));
    d.setString (EventCode, "%c", p->mEventCode);

    return GW_CODEC_SUCCESS;
}

codecState
swxCodec::getAcceptedMessage (cdr &d, swxHeader* hdr)
{
    d.setString (MessageName, "AcceptedMessage");
    swxAcceptedMessage* p = (swxAcceptedMessage*)hdr;

    d.setString (Type, "%c", p->mType);
    d.setInteger (Timestamp, ntohll (p->mTimestamp));
    d.setInteger (OrderToken, ntohl (p->mOrderToken));
    {
    std::string stringBuffer;
    bool ok = getRightPaddedString (p->mBankInternalReference,
                                    16,
                                    ' ',
                                    stringBuffer);
    
    if (!ok)
        return GW_CODEC_ERROR;
    d.setString (BankInternalReference, stringBuffer);
    }
    d.setString (OrderVerb, "%c", p->mOrderVerb);
    d.setInteger (OrderQuantity, ntohl (p->mOrderQuantity));
    d.setInteger (OrderBook, ntohl (p->mOrderBook));
    d.setInteger (OrderPrice, ntohl (p->mOrderPrice));
    d.setInteger (TimeInForce, ntohl (p->mTimeInForce));
    d.setInteger (PrincipalId, ntohl (p->mPrincipalId));
    d.setInteger (OrderNumber, ntohll (p->mOrderNumber));
    d.setInteger (SecondaryQuantity, ntohl (p->mSecondaryQuantity));
    d.setString (OrderPlacement, "%c", p->mOrderPlacement);
    d.setInteger (AlgoID, ntohll (p->mAlgoID));
    d.setString (OrderState, "%c", p->mOrderState);

    return GW_CODEC_SUCCESS;
}

codecState
swxCodec::getReplacedMessage (cdr &d, swxHeader* hdr)
{
    d.setString (MessageName, "ReplacedMessage");
    swxReplacedMessage* p = (swxReplacedMessage*)hdr;

    d.setString (Type, "%c", p->mType);
    d.setInteger (Timestamp, ntohll (p->mTimestamp));
    d.setInteger (ReplacementOrderToken, ntohl (p->mReplacementOrderToken));
    d.setString (OrderVerb, "%c", p->mOrderVerb);
    d.setInteger (OrderQuantity, ntohl (p->mOrderQuantity));
    d.setInteger (OrderBook, ntohl (p->mOrderBook));
    d.setInteger (OrderPrice, ntohl (p->mOrderPrice));
    d.setInteger (TimeInForce, ntohl (p->mTimeInForce));
    d.setInteger (OrderNumber, ntohll (p->mOrderNumber));
    d.setInteger (SecondaryQuantity, ntohl (p->mSecondaryQuantity));
    d.setInteger (AlgoID, ntohll (p->mAlgoID));
    d.setString (OrderState, "%c", p->mOrderState);
    d.setInteger (PreviousOrderToken, ntohl (p->mPreviousOrderToken));

    return GW_CODEC_SUCCESS;
}

codecState
swxCodec::getOrderPriorityUpdateChangeMessage (cdr &d, swxHeader* hdr)
{
    d.setString (MessageName, "OrderPriorityUpdateChangeMessage");
    swxOrderPriorityUpdateChangeMessage* p = (swxOrderPriorityUpdateChangeMessage*)hdr;

    d.setString (Type, "%c", p->mType);
    d.setInteger (Timestamp, ntohll (p->mTimestamp));
    d.setInteger (OrderToken, ntohl (p->mOrderToken));
    d.setInteger (OrderNumber, ntohll (p->mOrderNumber));

    return GW_CODEC_SUCCESS;
}

codecState
swxCodec::getCancelledMessage (cdr &d, swxHeader* hdr)
{
    d.setString (MessageName, "CancelledMessage");
    swxCancelledMessage* p = (swxCancelledMessage*)hdr;

    d.setString (Type, "%c", p->mType);
    d.setInteger (Timestamp, ntohll (p->mTimestamp));
    d.setInteger (OrderToken, ntohl (p->mOrderToken));
    d.setInteger (OrderQuantity, ntohl (p->mOrderQuantity));
    d.setString (Reason, "%c", p->mReason);

    return GW_CODEC_SUCCESS;
}

codecState
swxCodec::getExecutedOrderMessage (cdr &d, swxHeader* hdr)
{
    d.setString (MessageName, "ExecutedOrderMessage");
    swxExecutedOrderMessage* p = (swxExecutedOrderMessage*)hdr;

    d.setString (Type, "%c", p->mType);
    d.setInteger (Timestamp, ntohll (p->mTimestamp));
    d.setInteger (OrderToken, ntohl (p->mOrderToken));
    d.setInteger (ExecutedQuantity, ntohl (p->mExecutedQuantity));
    d.setInteger (ExecutedPrice, ntohl (p->mExecutedPrice));
    d.setString (LiquidityFlag, "%c", p->mLiquidityFlag);
    d.setInteger (MatchNumber, ntohll (p->mMatchNumber));
    d.setString (NostroCrossFlag, "%c", p->mNostroCrossFlag);
    d.setInteger (CounterPartyId, ntohl (p->mCounterPartyId));
    d.setString (BookType, "%c", p->mBookType);

    return GW_CODEC_SUCCESS;
}

codecState
swxCodec::getBrokenTradeMessage (cdr &d, swxHeader* hdr)
{
    d.setString (MessageName, "BrokenTradeMessage");
    swxBrokenTradeMessage* p = (swxBrokenTradeMessage*)hdr;

    d.setString (Type, "%c", p->mType);
    d.setInteger (Timestamp, ntohll (p->mTimestamp));
    d.setInteger (OrderToken, ntohl (p->mOrderToken));
    d.setInteger (MatchNumber, ntohll (p->mMatchNumber));
    d.setString (Reason, "%c", p->mReason);

    return GW_CODEC_SUCCESS;
}

codecState
swxCodec::getRejectedOrderMessage (cdr &d, swxHeader* hdr)
{
    d.setString (MessageName, "RejectedOrderMessage");
    swxRejectedOrderMessage* p = (swxRejectedOrderMessage*)hdr;

    d.setString (Type, "%c", p->mType);
    d.setInteger (Timestamp, ntohll (p->mTimestamp));
    d.setInteger (OrderToken, ntohl (p->mOrderToken));
    d.setString (Reason, "%c", p->mReason);

    return GW_CODEC_SUCCESS;
}

codecState
swxCodec::getDebugMessage (cdr &d, swxHeader* hdr)
{
    d.setString (MessageName, "DebugMessage");

    {
    uint16_t messageLength = ntohs(hdr->mMessageLength);
    uint16_t totalLength = messageLength + 2;

    size_t offset = sizeof(swxHeader) + 0;
    unsigned char* ptr = (unsigned char*)hdr + offset;
    
    std::string buffer ((const char*)ptr, totalLength - offset);
    d.setString (Text, "%s", buffer.c_str ());
    }

    return GW_CODEC_SUCCESS;
}

codecState
swxCodec::getLoginAcceptedMessage (cdr &d, swxHeader* hdr)
{
    d.setString (MessageName, "LoginAcceptedMessage");
    swxLoginAcceptedMessage* p = (swxLoginAcceptedMessage*)hdr;

    {
    std::string stringBuffer;
    bool ok = getRightPaddedString (p->mSession,
                                    10,
                                    ' ',
                                    stringBuffer);
    
    if (!ok)
        return GW_CODEC_ERROR;
    d.setString (Session, stringBuffer);
    }
    {
    std::string stringBuffer;
    bool ok = getLeftPaddedString (p->mSequenceNumber,
                                   20,
                                   ' ',
                                   stringBuffer);
    
    if (!ok)
        return GW_CODEC_ERROR;            

    uint32_t value;
    std::istringstream iss(stringBuffer);
    iss >> value;
    if (iss.bad ())
        return GW_CODEC_ERROR;

    d.setInteger (SequenceNumber, value);
    }

    return GW_CODEC_SUCCESS;
}

codecState
swxCodec::getLoginRejectedMessage (cdr &d, swxHeader* hdr)
{
    d.setString (MessageName, "LoginRejectedMessage");
    swxLoginRejectedMessage* p = (swxLoginRejectedMessage*)hdr;

    d.setString (RejectReasonCode, "%c", p->mRejectReasonCode);

    return GW_CODEC_SUCCESS;
}

codecState
swxCodec::getClientHeartbeatMessage (cdr &d, swxHeader* hdr)
{
    d.setString (MessageName, "ClientHeartbeatMessage");


    return GW_CODEC_SUCCESS;
}

codecState
swxCodec::getServerHeartbeatMessage (cdr &d, swxHeader* hdr)
{
    d.setString (MessageName, "ServerHeartbeatMessage");


    return GW_CODEC_SUCCESS;
}

codecState
swxCodec::getEndofSessionMessage (cdr &d, swxHeader* hdr)
{
    d.setString (MessageName, "EndofSessionMessage");


    return GW_CODEC_SUCCESS;
}

codecState
swxCodec::getLoginRequestMessage (cdr &d, swxHeader* hdr)
{
    d.setString (MessageName, "LoginRequestMessage");
    swxLoginRequestMessage* p = (swxLoginRequestMessage*)hdr;

    {
    std::string stringBuffer;
    bool ok = getRightPaddedString (p->mUsername,
                                    6,
                                    ' ',
                                    stringBuffer);
    
    if (!ok)
        return GW_CODEC_ERROR;
    d.setString (Username, stringBuffer);
    }
    {
    std::string stringBuffer;
    bool ok = getRightPaddedString (p->mPassword,
                                    10,
                                    ' ',
                                    stringBuffer);
    
    if (!ok)
        return GW_CODEC_ERROR;
    d.setString (Password, stringBuffer);
    }
    {
    std::string stringBuffer;
    bool ok = getRightPaddedString (p->mRequestedSession,
                                    10,
                                    ' ',
                                    stringBuffer);
    
    if (!ok)
        return GW_CODEC_ERROR;
    d.setString (RequestedSession, stringBuffer);
    }
    {
    std::string stringBuffer;
    bool ok = getLeftPaddedString (p->mRequestedSequenceNumber,
                                   20,
                                   ' ',
                                   stringBuffer);
    
    if (!ok)
        return GW_CODEC_ERROR;            

    uint32_t value;
    std::istringstream iss(stringBuffer);
    iss >> value;
    if (iss.bad ())
        return GW_CODEC_ERROR;

    d.setInteger (RequestedSequenceNumber, value);
    }

    return GW_CODEC_SUCCESS;
}

codecState
swxCodec::getLogoutRequestMessage (cdr &d, swxHeader* hdr)
{
    d.setString (MessageName, "LogoutRequestMessage");


    return GW_CODEC_SUCCESS;
}

codecState
swxCodec::putEnterOrderMessage (const cdr &d, swxHeader* hdr, size_t len, size_t& used)
{
    swxEnterOrderMessage* p = (swxEnterOrderMessage*)hdr;
    if (len < sizeof *p)
        return GW_CODEC_SHORT;
    used = sizeof *p;

        if (!putCharacter (d, Type, &p->mType))
        {
            setLastError ("invalid or missing Type");
            return GW_CODEC_ERROR;
        }
        {
            uint32_t tmp;
            if (!d.getInteger (OrderToken, &tmp))
            {
                setLastError ("invalid or missing OrderToken");
                return GW_CODEC_ERROR;
            }
            p->setOrderToken (tmp);
        }
        if (!setRightPaddedString(d, BankInternalReference, p->mBankInternalReference, sizeof p->mBankInternalReference, ' '))
        {
            setLastError ("BankInternalReference missing or not string");
            return GW_CODEC_ERROR;
        }
        if (!putCharacter (d, OrderVerb, &p->mOrderVerb))
        {
            setLastError ("invalid or missing OrderVerb");
            return GW_CODEC_ERROR;
        }
        {
            uint32_t tmp;
            if (!d.getInteger (OrderQuantity, &tmp))
            {
                setLastError ("invalid or missing OrderQuantity");
                return GW_CODEC_ERROR;
            }
            p->setOrderQuantity (tmp);
        }
        {
            uint32_t tmp;
            if (!d.getInteger (OrderBook, &tmp))
            {
                setLastError ("invalid or missing OrderBook");
                return GW_CODEC_ERROR;
            }
            p->setOrderBook (tmp);
        }
        {
            uint32_t tmp;
            if (!d.getInteger (OrderPrice, &tmp))
            {
                setLastError ("invalid or missing OrderPrice");
                return GW_CODEC_ERROR;
            }
            p->setOrderPrice (tmp);
        }
        {
            uint32_t tmp;
            if (!d.getInteger (TimeInForce, &tmp))
            {
                setLastError ("invalid or missing TimeInForce");
                return GW_CODEC_ERROR;
            }
            p->setTimeInForce (tmp);
        }
        {
            uint32_t tmp;
            if (!d.getInteger (PrincipalId, &tmp))
            {
                setLastError ("invalid or missing PrincipalId");
                return GW_CODEC_ERROR;
            }
            p->setPrincipalId (tmp);
        }
        {
            int32_t tmp;
            if (!d.getInteger (SecondaryQuantity, &tmp))
            {
                setLastError ("invalid or missing SecondaryQuantity");
                return GW_CODEC_ERROR;
            }
            p->setSecondaryQuantity (tmp);
        }
        if (!putCharacter (d, OrderPlacement, &p->mOrderPlacement))
        {
            setLastError ("invalid or missing OrderPlacement");
            return GW_CODEC_ERROR;
        }
        {
            uint64_t tmp;
            if (!d.getInteger (AlgoID, &tmp))
            {
                setLastError ("invalid or missing AlgoID");
                return GW_CODEC_ERROR;
            }
            p->setAlgoID (tmp);
        }

    return GW_CODEC_SUCCESS;
}

codecState
swxCodec::putReplaceOrderMessage (const cdr &d, swxHeader* hdr, size_t len, size_t& used)
{
    swxReplaceOrderMessage* p = (swxReplaceOrderMessage*)hdr;
    if (len < sizeof *p)
        return GW_CODEC_SHORT;
    used = sizeof *p;

        if (!putCharacter (d, Type, &p->mType))
        {
            setLastError ("invalid or missing Type");
            return GW_CODEC_ERROR;
        }
        {
            uint32_t tmp;
            if (!d.getInteger (ExistingOrderToken, &tmp))
            {
                setLastError ("invalid or missing ExistingOrderToken");
                return GW_CODEC_ERROR;
            }
            p->setExistingOrderToken (tmp);
        }
        {
            uint32_t tmp;
            if (!d.getInteger (ReplacementOrderToken, &tmp))
            {
                setLastError ("invalid or missing ReplacementOrderToken");
                return GW_CODEC_ERROR;
            }
            p->setReplacementOrderToken (tmp);
        }
        {
            uint32_t tmp;
            if (!d.getInteger (OrderQuantity, &tmp))
            {
                setLastError ("invalid or missing OrderQuantity");
                return GW_CODEC_ERROR;
            }
            p->setOrderQuantity (tmp);
        }
        {
            uint32_t tmp;
            if (!d.getInteger (OrderPrice, &tmp))
            {
                setLastError ("invalid or missing OrderPrice");
                return GW_CODEC_ERROR;
            }
            p->setOrderPrice (tmp);
        }
        {
            uint32_t tmp;
            if (!d.getInteger (TimeInForce, &tmp))
            {
                setLastError ("invalid or missing TimeInForce");
                return GW_CODEC_ERROR;
            }
            p->setTimeInForce (tmp);
        }
        {
            uint32_t tmp;
            if (!d.getInteger (SecondaryQuantity, &tmp))
            {
                setLastError ("invalid or missing SecondaryQuantity");
                return GW_CODEC_ERROR;
            }
            p->setSecondaryQuantity (tmp);
        }
        {
            uint64_t tmp;
            if (!d.getInteger (AlgoID, &tmp))
            {
                setLastError ("invalid or missing AlgoID");
                return GW_CODEC_ERROR;
            }
            p->setAlgoID (tmp);
        }

    return GW_CODEC_SUCCESS;
}

codecState
swxCodec::putCancelOrderMessage (const cdr &d, swxHeader* hdr, size_t len, size_t& used)
{
    swxCancelOrderMessage* p = (swxCancelOrderMessage*)hdr;
    if (len < sizeof *p)
        return GW_CODEC_SHORT;
    used = sizeof *p;

        if (!putCharacter (d, Type, &p->mType))
        {
            setLastError ("invalid or missing Type");
            return GW_CODEC_ERROR;
        }
        {
            uint32_t tmp;
            if (!d.getInteger (OriginalOrderToken, &tmp))
            {
                setLastError ("invalid or missing OriginalOrderToken");
                return GW_CODEC_ERROR;
            }
            p->setOriginalOrderToken (tmp);
        }
        {
            uint32_t tmp;
            if (!d.getInteger (OrderQuantity, &tmp))
            {
                setLastError ("invalid or missing OrderQuantity");
                return GW_CODEC_ERROR;
            }
            p->setOrderQuantity (tmp);
        }

    return GW_CODEC_SUCCESS;
}

codecState
swxCodec::putSystemEventMessage (const cdr &d, swxHeader* hdr, size_t len, size_t& used)
{
    swxSystemEventMessage* p = (swxSystemEventMessage*)hdr;
    if (len < sizeof *p)
        return GW_CODEC_SHORT;
    used = sizeof *p;

        if (!putCharacter (d, Type, &p->mType))
        {
            setLastError ("invalid or missing Type");
            return GW_CODEC_ERROR;
        }
        {
            uint64_t tmp;
            if (!d.getInteger (Timestamp, &tmp))
            {
                setLastError ("invalid or missing Timestamp");
                return GW_CODEC_ERROR;
            }
            p->setTimestamp (tmp);
        }
        if (!putCharacter (d, EventCode, &p->mEventCode))
        {
            setLastError ("invalid or missing EventCode");
            return GW_CODEC_ERROR;
        }

    return GW_CODEC_SUCCESS;
}

codecState
swxCodec::putAcceptedMessage (const cdr &d, swxHeader* hdr, size_t len, size_t& used)
{
    swxAcceptedMessage* p = (swxAcceptedMessage*)hdr;
    if (len < sizeof *p)
        return GW_CODEC_SHORT;
    used = sizeof *p;

        if (!putCharacter (d, Type, &p->mType))
        {
            setLastError ("invalid or missing Type");
            return GW_CODEC_ERROR;
        }
        {
            uint64_t tmp;
            if (!d.getInteger (Timestamp, &tmp))
            {
                setLastError ("invalid or missing Timestamp");
                return GW_CODEC_ERROR;
            }
            p->setTimestamp (tmp);
        }
        {
            uint32_t tmp;
            if (!d.getInteger (OrderToken, &tmp))
            {
                setLastError ("invalid or missing OrderToken");
                return GW_CODEC_ERROR;
            }
            p->setOrderToken (tmp);
        }
        if (!setRightPaddedString(d, BankInternalReference, p->mBankInternalReference, sizeof p->mBankInternalReference, ' '))
        {
            setLastError ("BankInternalReference missing or not string");
            return GW_CODEC_ERROR;
        }
        if (!putCharacter (d, OrderVerb, &p->mOrderVerb))
        {
            setLastError ("invalid or missing OrderVerb");
            return GW_CODEC_ERROR;
        }
        {
            uint32_t tmp;
            if (!d.getInteger (OrderQuantity, &tmp))
            {
                setLastError ("invalid or missing OrderQuantity");
                return GW_CODEC_ERROR;
            }
            p->setOrderQuantity (tmp);
        }
        {
            uint32_t tmp;
            if (!d.getInteger (OrderBook, &tmp))
            {
                setLastError ("invalid or missing OrderBook");
                return GW_CODEC_ERROR;
            }
            p->setOrderBook (tmp);
        }
        {
            uint32_t tmp;
            if (!d.getInteger (OrderPrice, &tmp))
            {
                setLastError ("invalid or missing OrderPrice");
                return GW_CODEC_ERROR;
            }
            p->setOrderPrice (tmp);
        }
        {
            uint32_t tmp;
            if (!d.getInteger (TimeInForce, &tmp))
            {
                setLastError ("invalid or missing TimeInForce");
                return GW_CODEC_ERROR;
            }
            p->setTimeInForce (tmp);
        }
        {
            uint32_t tmp;
            if (!d.getInteger (PrincipalId, &tmp))
            {
                setLastError ("invalid or missing PrincipalId");
                return GW_CODEC_ERROR;
            }
            p->setPrincipalId (tmp);
        }
        {
            uint64_t tmp;
            if (!d.getInteger (OrderNumber, &tmp))
            {
                setLastError ("invalid or missing OrderNumber");
                return GW_CODEC_ERROR;
            }
            p->setOrderNumber (tmp);
        }
        {
            uint32_t tmp;
            if (!d.getInteger (SecondaryQuantity, &tmp))
            {
                setLastError ("invalid or missing SecondaryQuantity");
                return GW_CODEC_ERROR;
            }
            p->setSecondaryQuantity (tmp);
        }
        if (!putCharacter (d, OrderPlacement, &p->mOrderPlacement))
        {
            setLastError ("invalid or missing OrderPlacement");
            return GW_CODEC_ERROR;
        }
        {
            uint64_t tmp;
            if (!d.getInteger (AlgoID, &tmp))
            {
                setLastError ("invalid or missing AlgoID");
                return GW_CODEC_ERROR;
            }
            p->setAlgoID (tmp);
        }
        if (!putCharacter (d, OrderState, &p->mOrderState))
        {
            setLastError ("invalid or missing OrderState");
            return GW_CODEC_ERROR;
        }

    return GW_CODEC_SUCCESS;
}

codecState
swxCodec::putReplacedMessage (const cdr &d, swxHeader* hdr, size_t len, size_t& used)
{
    swxReplacedMessage* p = (swxReplacedMessage*)hdr;
    if (len < sizeof *p)
        return GW_CODEC_SHORT;
    used = sizeof *p;

        if (!putCharacter (d, Type, &p->mType))
        {
            setLastError ("invalid or missing Type");
            return GW_CODEC_ERROR;
        }
        {
            uint64_t tmp;
            if (!d.getInteger (Timestamp, &tmp))
            {
                setLastError ("invalid or missing Timestamp");
                return GW_CODEC_ERROR;
            }
            p->setTimestamp (tmp);
        }
        {
            uint32_t tmp;
            if (!d.getInteger (ReplacementOrderToken, &tmp))
            {
                setLastError ("invalid or missing ReplacementOrderToken");
                return GW_CODEC_ERROR;
            }
            p->setReplacementOrderToken (tmp);
        }
        if (!putCharacter (d, OrderVerb, &p->mOrderVerb))
        {
            setLastError ("invalid or missing OrderVerb");
            return GW_CODEC_ERROR;
        }
        {
            uint32_t tmp;
            if (!d.getInteger (OrderQuantity, &tmp))
            {
                setLastError ("invalid or missing OrderQuantity");
                return GW_CODEC_ERROR;
            }
            p->setOrderQuantity (tmp);
        }
        {
            uint32_t tmp;
            if (!d.getInteger (OrderBook, &tmp))
            {
                setLastError ("invalid or missing OrderBook");
                return GW_CODEC_ERROR;
            }
            p->setOrderBook (tmp);
        }
        {
            uint32_t tmp;
            if (!d.getInteger (OrderPrice, &tmp))
            {
                setLastError ("invalid or missing OrderPrice");
                return GW_CODEC_ERROR;
            }
            p->setOrderPrice (tmp);
        }
        {
            uint32_t tmp;
            if (!d.getInteger (TimeInForce, &tmp))
            {
                setLastError ("invalid or missing TimeInForce");
                return GW_CODEC_ERROR;
            }
            p->setTimeInForce (tmp);
        }
        {
            uint64_t tmp;
            if (!d.getInteger (OrderNumber, &tmp))
            {
                setLastError ("invalid or missing OrderNumber");
                return GW_CODEC_ERROR;
            }
            p->setOrderNumber (tmp);
        }
        {
            uint32_t tmp;
            if (!d.getInteger (SecondaryQuantity, &tmp))
            {
                setLastError ("invalid or missing SecondaryQuantity");
                return GW_CODEC_ERROR;
            }
            p->setSecondaryQuantity (tmp);
        }
        {
            uint64_t tmp;
            if (!d.getInteger (AlgoID, &tmp))
            {
                setLastError ("invalid or missing AlgoID");
                return GW_CODEC_ERROR;
            }
            p->setAlgoID (tmp);
        }
        if (!putCharacter (d, OrderState, &p->mOrderState))
        {
            setLastError ("invalid or missing OrderState");
            return GW_CODEC_ERROR;
        }
        {
            uint32_t tmp;
            if (!d.getInteger (PreviousOrderToken, &tmp))
            {
                setLastError ("invalid or missing PreviousOrderToken");
                return GW_CODEC_ERROR;
            }
            p->setPreviousOrderToken (tmp);
        }

    return GW_CODEC_SUCCESS;
}

codecState
swxCodec::putOrderPriorityUpdateChangeMessage (const cdr &d, swxHeader* hdr, size_t len, size_t& used)
{
    swxOrderPriorityUpdateChangeMessage* p = (swxOrderPriorityUpdateChangeMessage*)hdr;
    if (len < sizeof *p)
        return GW_CODEC_SHORT;
    used = sizeof *p;

        if (!putCharacter (d, Type, &p->mType))
        {
            setLastError ("invalid or missing Type");
            return GW_CODEC_ERROR;
        }
        {
            uint64_t tmp;
            if (!d.getInteger (Timestamp, &tmp))
            {
                setLastError ("invalid or missing Timestamp");
                return GW_CODEC_ERROR;
            }
            p->setTimestamp (tmp);
        }
        {
            uint32_t tmp;
            if (!d.getInteger (OrderToken, &tmp))
            {
                setLastError ("invalid or missing OrderToken");
                return GW_CODEC_ERROR;
            }
            p->setOrderToken (tmp);
        }
        {
            uint64_t tmp;
            if (!d.getInteger (OrderNumber, &tmp))
            {
                setLastError ("invalid or missing OrderNumber");
                return GW_CODEC_ERROR;
            }
            p->setOrderNumber (tmp);
        }

    return GW_CODEC_SUCCESS;
}

codecState
swxCodec::putCancelledMessage (const cdr &d, swxHeader* hdr, size_t len, size_t& used)
{
    swxCancelledMessage* p = (swxCancelledMessage*)hdr;
    if (len < sizeof *p)
        return GW_CODEC_SHORT;
    used = sizeof *p;

        if (!putCharacter (d, Type, &p->mType))
        {
            setLastError ("invalid or missing Type");
            return GW_CODEC_ERROR;
        }
        {
            uint64_t tmp;
            if (!d.getInteger (Timestamp, &tmp))
            {
                setLastError ("invalid or missing Timestamp");
                return GW_CODEC_ERROR;
            }
            p->setTimestamp (tmp);
        }
        {
            uint32_t tmp;
            if (!d.getInteger (OrderToken, &tmp))
            {
                setLastError ("invalid or missing OrderToken");
                return GW_CODEC_ERROR;
            }
            p->setOrderToken (tmp);
        }
        {
            int32_t tmp;
            if (!d.getInteger (OrderQuantity, &tmp))
            {
                setLastError ("invalid or missing OrderQuantity");
                return GW_CODEC_ERROR;
            }
            p->setOrderQuantity (tmp);
        }
        if (!putCharacter (d, Reason, &p->mReason))
        {
            setLastError ("invalid or missing Reason");
            return GW_CODEC_ERROR;
        }

    return GW_CODEC_SUCCESS;
}

codecState
swxCodec::putExecutedOrderMessage (const cdr &d, swxHeader* hdr, size_t len, size_t& used)
{
    swxExecutedOrderMessage* p = (swxExecutedOrderMessage*)hdr;
    if (len < sizeof *p)
        return GW_CODEC_SHORT;
    used = sizeof *p;

        if (!putCharacter (d, Type, &p->mType))
        {
            setLastError ("invalid or missing Type");
            return GW_CODEC_ERROR;
        }
        {
            uint64_t tmp;
            if (!d.getInteger (Timestamp, &tmp))
            {
                setLastError ("invalid or missing Timestamp");
                return GW_CODEC_ERROR;
            }
            p->setTimestamp (tmp);
        }
        {
            uint32_t tmp;
            if (!d.getInteger (OrderToken, &tmp))
            {
                setLastError ("invalid or missing OrderToken");
                return GW_CODEC_ERROR;
            }
            p->setOrderToken (tmp);
        }
        {
            uint32_t tmp;
            if (!d.getInteger (ExecutedQuantity, &tmp))
            {
                setLastError ("invalid or missing ExecutedQuantity");
                return GW_CODEC_ERROR;
            }
            p->setExecutedQuantity (tmp);
        }
        {
            uint32_t tmp;
            if (!d.getInteger (ExecutedPrice, &tmp))
            {
                setLastError ("invalid or missing ExecutedPrice");
                return GW_CODEC_ERROR;
            }
            p->setExecutedPrice (tmp);
        }
        if (!putCharacter (d, LiquidityFlag, &p->mLiquidityFlag))
        {
            setLastError ("invalid or missing LiquidityFlag");
            return GW_CODEC_ERROR;
        }
        {
            uint64_t tmp;
            if (!d.getInteger (MatchNumber, &tmp))
            {
                setLastError ("invalid or missing MatchNumber");
                return GW_CODEC_ERROR;
            }
            p->setMatchNumber (tmp);
        }
        if (!putCharacter (d, NostroCrossFlag, &p->mNostroCrossFlag))
        {
            setLastError ("invalid or missing NostroCrossFlag");
            return GW_CODEC_ERROR;
        }
        {
            uint32_t tmp;
            if (!d.getInteger (CounterPartyId, &tmp))
            {
                setLastError ("invalid or missing CounterPartyId");
                return GW_CODEC_ERROR;
            }
            p->setCounterPartyId (tmp);
        }
        if (!putCharacter (d, BookType, &p->mBookType))
        {
            setLastError ("invalid or missing BookType");
            return GW_CODEC_ERROR;
        }

    return GW_CODEC_SUCCESS;
}

codecState
swxCodec::putBrokenTradeMessage (const cdr &d, swxHeader* hdr, size_t len, size_t& used)
{
    swxBrokenTradeMessage* p = (swxBrokenTradeMessage*)hdr;
    if (len < sizeof *p)
        return GW_CODEC_SHORT;
    used = sizeof *p;

        if (!putCharacter (d, Type, &p->mType))
        {
            setLastError ("invalid or missing Type");
            return GW_CODEC_ERROR;
        }
        {
            uint64_t tmp;
            if (!d.getInteger (Timestamp, &tmp))
            {
                setLastError ("invalid or missing Timestamp");
                return GW_CODEC_ERROR;
            }
            p->setTimestamp (tmp);
        }
        {
            uint32_t tmp;
            if (!d.getInteger (OrderToken, &tmp))
            {
                setLastError ("invalid or missing OrderToken");
                return GW_CODEC_ERROR;
            }
            p->setOrderToken (tmp);
        }
        {
            uint64_t tmp;
            if (!d.getInteger (MatchNumber, &tmp))
            {
                setLastError ("invalid or missing MatchNumber");
                return GW_CODEC_ERROR;
            }
            p->setMatchNumber (tmp);
        }
        if (!putCharacter (d, Reason, &p->mReason))
        {
            setLastError ("invalid or missing Reason");
            return GW_CODEC_ERROR;
        }

    return GW_CODEC_SUCCESS;
}

codecState
swxCodec::putRejectedOrderMessage (const cdr &d, swxHeader* hdr, size_t len, size_t& used)
{
    swxRejectedOrderMessage* p = (swxRejectedOrderMessage*)hdr;
    if (len < sizeof *p)
        return GW_CODEC_SHORT;
    used = sizeof *p;

        if (!putCharacter (d, Type, &p->mType))
        {
            setLastError ("invalid or missing Type");
            return GW_CODEC_ERROR;
        }
        {
            uint64_t tmp;
            if (!d.getInteger (Timestamp, &tmp))
            {
                setLastError ("invalid or missing Timestamp");
                return GW_CODEC_ERROR;
            }
            p->setTimestamp (tmp);
        }
        {
            uint32_t tmp;
            if (!d.getInteger (OrderToken, &tmp))
            {
                setLastError ("invalid or missing OrderToken");
                return GW_CODEC_ERROR;
            }
            p->setOrderToken (tmp);
        }
        if (!putCharacter (d, Reason, &p->mReason))
        {
            setLastError ("invalid or missing Reason");
            return GW_CODEC_ERROR;
        }

    return GW_CODEC_SUCCESS;
}

codecState
swxCodec::putDebugMessage (const cdr &d, swxHeader* hdr, size_t len, size_t& used)
{
    swxDebugMessage* p = (swxDebugMessage*)hdr;
    if (len < sizeof *p)
        return GW_CODEC_SHORT;
    used = sizeof *p;

        if (!putCharacter (d, Text, &p->mText))
        {
            setLastError ("invalid or missing Text");
            return GW_CODEC_ERROR;
        }

    return GW_CODEC_SUCCESS;
}

codecState
swxCodec::putLoginAcceptedMessage (const cdr &d, swxHeader* hdr, size_t len, size_t& used)
{
    swxLoginAcceptedMessage* p = (swxLoginAcceptedMessage*)hdr;
    if (len < sizeof *p)
        return GW_CODEC_SHORT;
    used = sizeof *p;

        if (!setRightPaddedString(d, Session, p->mSession, sizeof p->mSession, ' '))
        {
            setLastError ("Session missing or not string");
            return GW_CODEC_ERROR;
        }
        {
            uint32_t value;
            if (!d.getInteger (SequenceNumber, &value))
            {
                setLastError ("invalid or missing Sequence Number");
                return GW_CODEC_ERROR;
            }
            std::ostringstream oss;
            oss << value;
            if (oss.bad ())
            {
                setLastError ("invalid value");
                return GW_CODEC_ERROR;
            }
            std::string stringValue = oss.str ();
            if (!setLeftPaddedStringBuf(stringValue, p->mSequenceNumber, sizeof p->mSequenceNumber, ' '))
            {
                setLastError ("SequenceNumber missing or not string");
                return GW_CODEC_ERROR;
            }
        }

    return GW_CODEC_SUCCESS;
}

codecState
swxCodec::putLoginRejectedMessage (const cdr &d, swxHeader* hdr, size_t len, size_t& used)
{
    swxLoginRejectedMessage* p = (swxLoginRejectedMessage*)hdr;
    if (len < sizeof *p)
        return GW_CODEC_SHORT;
    used = sizeof *p;

        if (!putCharacter (d, RejectReasonCode, &p->mRejectReasonCode))
        {
            setLastError ("invalid or missing RejectReasonCode");
            return GW_CODEC_ERROR;
        }

    return GW_CODEC_SUCCESS;
}

codecState
swxCodec::putClientHeartbeatMessage (const cdr &d, swxHeader* hdr, size_t len, size_t& used)
{
    swxClientHeartbeatMessage* p = (swxClientHeartbeatMessage*)hdr;
    if (len < sizeof *p)
        return GW_CODEC_SHORT;
    used = sizeof *p;


    return GW_CODEC_SUCCESS;
}

codecState
swxCodec::putServerHeartbeatMessage (const cdr &d, swxHeader* hdr, size_t len, size_t& used)
{
    swxServerHeartbeatMessage* p = (swxServerHeartbeatMessage*)hdr;
    if (len < sizeof *p)
        return GW_CODEC_SHORT;
    used = sizeof *p;


    return GW_CODEC_SUCCESS;
}

codecState
swxCodec::putEndofSessionMessage (const cdr &d, swxHeader* hdr, size_t len, size_t& used)
{
    swxEndofSessionMessage* p = (swxEndofSessionMessage*)hdr;
    if (len < sizeof *p)
        return GW_CODEC_SHORT;
    used = sizeof *p;


    return GW_CODEC_SUCCESS;
}

codecState
swxCodec::putLoginRequestMessage (const cdr &d, swxHeader* hdr, size_t len, size_t& used)
{
    swxLoginRequestMessage* p = (swxLoginRequestMessage*)hdr;
    if (len < sizeof *p)
        return GW_CODEC_SHORT;
    used = sizeof *p;

        if (!setRightPaddedString(d, Username, p->mUsername, sizeof p->mUsername, ' '))
        {
            setLastError ("Username missing or not string");
            return GW_CODEC_ERROR;
        }
        if (!setRightPaddedString(d, Password, p->mPassword, sizeof p->mPassword, ' '))
        {
            setLastError ("Password missing or not string");
            return GW_CODEC_ERROR;
        }
        if (!setRightPaddedString(d, RequestedSession, p->mRequestedSession, sizeof p->mRequestedSession, ' '))
        {
            setLastError ("RequestedSession missing or not string");
            return GW_CODEC_ERROR;
        }
        {
            uint32_t value;
            if (!d.getInteger (RequestedSequenceNumber, &value))
            {
                setLastError ("invalid or missing Sequence Number");
                return GW_CODEC_ERROR;
            }
            std::ostringstream oss;
            oss << value;
            if (oss.bad ())
            {
                setLastError ("invalid value");
                return GW_CODEC_ERROR;
            }
            std::string stringValue = oss.str ();
            if (!setLeftPaddedStringBuf(stringValue, p->mRequestedSequenceNumber, sizeof p->mRequestedSequenceNumber, ' '))
            {
                setLastError ("RequestedSequenceNumber missing or not string");
                return GW_CODEC_ERROR;
            }
        }

    return GW_CODEC_SUCCESS;
}

codecState
swxCodec::putLogoutRequestMessage (const cdr &d, swxHeader* hdr, size_t len, size_t& used)
{
    swxLogoutRequestMessage* p = (swxLogoutRequestMessage*)hdr;
    if (len < sizeof *p)
        return GW_CODEC_SHORT;
    used = sizeof *p;


    return GW_CODEC_SUCCESS;
}


codecState
swxCodec::decode (cdr& d, const void* buf, size_t len, size_t& used)
{
    clearLastError ();
    used = 0;
    d.clear ();

    swxHeader* hdr = (swxHeader*)buf;
    if (len < sizeof *hdr)
        return GW_CODEC_SHORT;

    uint16_t messageLength = ntohs(hdr->mMessageLength);
    if (len < (uint16_t)(messageLength + 2))
        return GW_CODEC_SHORT;

    used = messageLength + 2;
    d.setString (MessageType, "%c", hdr->mMessageType);
    d.setInteger (MessageLength, messageLength);

    if (hdr->mMessageType == 'S')
    {
        char swxMessageType = *((const unsigned char*)buf + sizeof(swxHeader));
        if (swxMessageType == 'S')
        {
            return getSystemEventMessage (d, hdr);
        }
        if (swxMessageType == 'A')
        {
            return getAcceptedMessage (d, hdr);
        }
        if (swxMessageType == 'U')
        {
            return getReplacedMessage (d, hdr);
        }
        if (swxMessageType == 'T')
        {
            return getOrderPriorityUpdateChangeMessage (d, hdr);
        }
        if (swxMessageType == 'C')
        {
            return getCancelledMessage (d, hdr);
        }
        if (swxMessageType == 'E')
        {
            return getExecutedOrderMessage (d, hdr);
        }
        if (swxMessageType == 'B')
        {
            return getBrokenTradeMessage (d, hdr);
        }
        if (swxMessageType == 'J')
        {
            return getRejectedOrderMessage (d, hdr);
        }

        std::ostringstream ss;
        ss << "unhandled decode type: " << swxMessageType;
        setLastError (ss.str ());
        return GW_CODEC_ERROR;
    }
    if (hdr->mMessageType == 'U')
    {
        char swxMessageType = *((const unsigned char*)buf + sizeof(swxHeader));
        if (swxMessageType == 'O')
        {
            return getEnterOrderMessage (d, hdr);
        }
        if (swxMessageType == 'U')
        {
            return getReplaceOrderMessage (d, hdr);
        }
        if (swxMessageType == 'X')
        {
            return getCancelOrderMessage (d, hdr);
        }

        std::ostringstream ss;
        ss << "unhandled decode type: " << swxMessageType;
        setLastError (ss.str ());
        return GW_CODEC_ERROR;
    }
    
    switch (hdr->mMessageType) {
        case '+':
            return getDebugMessage (d, hdr);
        case 'A':
            return getLoginAcceptedMessage (d, hdr);
        case 'J':
            return getLoginRejectedMessage (d, hdr);
        case 'R':
            return getClientHeartbeatMessage (d, hdr);
        case 'H':
            return getServerHeartbeatMessage (d, hdr);
        case 'Z':
            return getEndofSessionMessage (d, hdr);
        case 'L':
            return getLoginRequestMessage (d, hdr);
        case 'O':
            return getLogoutRequestMessage (d, hdr);
        default:
            setLastError ("unknown message type");
            return GW_CODEC_ERROR;
    }
}

codecState
swxCodec::encode (const cdr& d, void* buf, size_t len, size_t& used)
{
    clearLastError ();
    used = 0;

    swxHeader* hdr = (swxHeader*)buf;

    if (len < sizeof *hdr)
        return GW_CODEC_SHORT;

    if (!d.isType (MessageType, CDR_STRING, 1))
    {
        setLastError ("MessageType missing or not string");
        return GW_CODEC_ERROR;
    }
    std::string s;
    d.getString (MessageType, s);
    hdr->mMessageType = *s.c_str ();

    codecState state;
    uint16_t payloadLength = 0;

    if (hdr->mMessageType == 'S')
    {
        std::string swxMessageTypeStr;
        bool ok = d.getString (Type, swxMessageTypeStr);
        if (!ok)
        {
            setLastError ("Type missing or not string");
            return GW_CODEC_ERROR;
        }
        char swxMessageType = swxMessageTypeStr[0];
        
        if (swxMessageType == 'S')
        {
            state = putSystemEventMessage (d, hdr, len, used);
            payloadLength = sizeof (swxSystemEventMessage);
            goto encode_done;
        }
        if (swxMessageType == 'A')
        {
            state = putAcceptedMessage (d, hdr, len, used);
            payloadLength = sizeof (swxAcceptedMessage);
            goto encode_done;
        }
        if (swxMessageType == 'U')
        {
            state = putReplacedMessage (d, hdr, len, used);
            payloadLength = sizeof (swxReplacedMessage);
            goto encode_done;
        }
        if (swxMessageType == 'T')
        {
            state = putOrderPriorityUpdateChangeMessage (d, hdr, len, used);
            payloadLength = sizeof (swxOrderPriorityUpdateChangeMessage);
            goto encode_done;
        }
        if (swxMessageType == 'C')
        {
            state = putCancelledMessage (d, hdr, len, used);
            payloadLength = sizeof (swxCancelledMessage);
            goto encode_done;
        }
        if (swxMessageType == 'E')
        {
            state = putExecutedOrderMessage (d, hdr, len, used);
            payloadLength = sizeof (swxExecutedOrderMessage);
            goto encode_done;
        }
        if (swxMessageType == 'B')
        {
            state = putBrokenTradeMessage (d, hdr, len, used);
            payloadLength = sizeof (swxBrokenTradeMessage);
            goto encode_done;
        }
        if (swxMessageType == 'J')
        {
            state = putRejectedOrderMessage (d, hdr, len, used);
            payloadLength = sizeof (swxRejectedOrderMessage);
            goto encode_done;
        }

        std::ostringstream ss;
        ss << "unhandled encode type: " << swxMessageType;
        setLastError (ss.str ());
        return GW_CODEC_ERROR;
    }
    if (hdr->mMessageType == 'U')
    {
        std::string swxMessageTypeStr;
        bool ok = d.getString (Type, swxMessageTypeStr);
        if (!ok)
        {
            setLastError ("Type missing or not string");
            return GW_CODEC_ERROR;
        }
        char swxMessageType = swxMessageTypeStr[0];
        
        if (swxMessageType == 'O')
        {
            state = putEnterOrderMessage (d, hdr, len, used);
            payloadLength = sizeof (swxEnterOrderMessage);
            goto encode_done;
        }
        if (swxMessageType == 'U')
        {
            state = putReplaceOrderMessage (d, hdr, len, used);
            payloadLength = sizeof (swxReplaceOrderMessage);
            goto encode_done;
        }
        if (swxMessageType == 'X')
        {
            state = putCancelOrderMessage (d, hdr, len, used);
            payloadLength = sizeof (swxCancelOrderMessage);
            goto encode_done;
        }

        std::ostringstream ss;
        ss << "unhandled encode type: " << swxMessageType;
        setLastError (ss.str ());
        return GW_CODEC_ERROR;
    }

    switch (hdr->mMessageType)
    {
        case '+':
            state = putDebugMessage (d, hdr, len, used);
            payloadLength = sizeof (swxDebugMessage);
            break;
        case 'A':
            state = putLoginAcceptedMessage (d, hdr, len, used);
            payloadLength = sizeof (swxLoginAcceptedMessage);
            break;
        case 'J':
            state = putLoginRejectedMessage (d, hdr, len, used);
            payloadLength = sizeof (swxLoginRejectedMessage);
            break;
        case 'R':
            state = putClientHeartbeatMessage (d, hdr, len, used);
            payloadLength = sizeof (swxClientHeartbeatMessage);
            break;
        case 'H':
            state = putServerHeartbeatMessage (d, hdr, len, used);
            payloadLength = sizeof (swxServerHeartbeatMessage);
            break;
        case 'Z':
            state = putEndofSessionMessage (d, hdr, len, used);
            payloadLength = sizeof (swxEndofSessionMessage);
            break;
        case 'L':
            state = putLoginRequestMessage (d, hdr, len, used);
            payloadLength = sizeof (swxLoginRequestMessage);
            break;
        case 'O':
            state = putLogoutRequestMessage (d, hdr, len, used);
            payloadLength = sizeof (swxLogoutRequestMessage);
            break;
        
        default:
            setLastError ("unknown message type");
            return GW_CODEC_ERROR;
    }

encode_done:
    if (state != GW_CODEC_SUCCESS)
        return state;

    hdr->mMessageLength = htons(payloadLength - 2);
    return GW_CODEC_SUCCESS;
}

} // namespace neueda
