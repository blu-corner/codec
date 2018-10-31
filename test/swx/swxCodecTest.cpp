/*
 * Copyright 2014-2018 Neueda
 */
#include <sbfCommon.h>
#include <gtest/gtest.h>
#include "swx/swxCodec.h"
#include "swx/packets/swxPackets.h"
#include "cdr.h"
#include "fields.h"
#include "codecFactory.h"

using namespace std;
using namespace neueda;
using namespace ::testing;

class SwxCodecTestHarness : public Test
{
protected:
    virtual void SetUp ()
    {
        std::string errorMessage;
        bool ok = mFactory.get ("swx", mSwx, errorMessage);
        if (!ok)
        {
            std::cout << errorMessage << std::endl;
            ASSERT_TRUE (ok);
        }
    }

    virtual void TearDown ()
    {
        delete mSwx;
    }

    codecFactory mFactory;
    codec* mSwx;
};

TEST_F(SwxCodecTestHarness, ACCEPT_ENCODE_DECODE)
{
    uint64_t timestamp = 43200000000000;
    cdr d;
    d.setString (MessageType, "S");
    d.setString (Type, "A");
    d.setInteger (Timestamp, timestamp);
    d.setInteger(OrderToken, 1);
    d.setString(BankInternalReference, "TESTING");
    d.setString(OrderVerb, "S");
    d.setInteger(OrderQuantity, 1000);
    d.setInteger(OrderBook, 1234);
    d.setInteger(OrderPrice, 100);
    d.setInteger(TimeInForce, 123);
    d.setInteger(PrincipalId, 10000);
    d.setInteger(OrderNumber, 1);
    d.setInteger(SecondaryQuantity, 100);
    d.setString(OrderPlacement, "A");
    d.setInteger(AlgoID, 2000);
    d.setString(OrderState, "B");

    swxAcceptedMessage accept;
    size_t used = 0;
    codecState state = mSwx->encode (d, (void*)&accept, sizeof (accept), used);

    if (state != GW_CODEC_SUCCESS)
         cout << "error: "
             << mSwx->getLastError ()
             << endl;
   
    ASSERT_EQ(state, GW_CODEC_SUCCESS);
    ASSERT_EQ(accept.getType(), 'A');
    ASSERT_EQ(accept.getTimestamp (), timestamp);
    ASSERT_EQ(accept.getOrderToken(), 1);
    ASSERT_STREQ(accept.getBankInternalReference().c_str(), "TESTING");
    ASSERT_EQ(accept.getOrderVerb(), 'S');
    ASSERT_EQ(accept.getOrderQuantity(), 1000);
    ASSERT_EQ(accept.getOrderBook(), 1234);
    ASSERT_EQ(accept.getOrderPrice(), 100);
    ASSERT_EQ(accept.getTimeInForce(), 123);
    ASSERT_EQ(accept.getPrincipalId(), 10000);
    ASSERT_EQ(accept.getOrderNumber(), 1);
    ASSERT_EQ(accept.getSecondaryQuantity(), 100);
    ASSERT_EQ(accept.getOrderPlacement(), 'A');
    ASSERT_EQ(accept.getAlgoID(), 2000);
    ASSERT_EQ(accept.getOrderState(), 'B');

    size_t len = sizeof (swxAcceptedMessage);
    used = 0;

    state = mSwx->decode (d, &accept, len, used);
    if (state != GW_CODEC_SUCCESS)
        cout << "error: "
             << mSwx->getLastError ()
             << endl;
    
    ASSERT_EQ (state, GW_CODEC_SUCCESS);

    string s;
    uint64_t i;
    ASSERT_TRUE(d.getString (MessageType, s));
    ASSERT_EQ(s, "S");
    
    ASSERT_TRUE(d.getString (Type, s));
    ASSERT_EQ(s, "A");
    
    ASSERT_TRUE (d.getInteger (Timestamp, i));
    ASSERT_EQ (i, timestamp);

    ASSERT_TRUE(d.getInteger(OrderToken, i));
    ASSERT_EQ(i, 1);

    ASSERT_TRUE(d.getString(BankInternalReference, s));
    ASSERT_EQ(s, "TESTING");

    ASSERT_TRUE(d.getString(OrderVerb, s));
    ASSERT_EQ(s, "S");

    ASSERT_TRUE(d.getInteger(OrderQuantity, i));
    ASSERT_EQ(i, 1000);

    ASSERT_TRUE(d.getInteger(OrderBook, i));
    ASSERT_EQ(i, 1234);

    ASSERT_TRUE(d.getInteger(OrderPrice, i));
    ASSERT_EQ(i, 100);

    ASSERT_TRUE(d.getInteger(TimeInForce, i));
    ASSERT_EQ(i, 123);

    ASSERT_TRUE(d.getInteger(PrincipalId, i));
    ASSERT_EQ(i, 10000);

    ASSERT_TRUE(d.getInteger(OrderNumber, i));
    ASSERT_EQ(i, 1);

    ASSERT_TRUE(d.getInteger(SecondaryQuantity, i));
    ASSERT_EQ(i, 100);

    ASSERT_TRUE(d.getString(OrderPlacement, s));
    ASSERT_EQ(s, "A");

    ASSERT_TRUE(d.getInteger(AlgoID, i));
    ASSERT_EQ(i, 2000);

    ASSERT_TRUE(d.getString(OrderState, s));
    ASSERT_EQ(s, "B");
}

TEST_F(SwxCodecTestHarness, LOGON_DECODE)
{
    swxLoginRequestMessage logon;
    logon.setUsername ("test");
    logon.setPassword ("pass");
    logon.setRequestedSession ("session1");
    logon.setRequestedSequenceNumber (1);

    cdr d;
    size_t len = sizeof (swxLoginRequestMessage);
    size_t used = 0;

    codecState state = mSwx->decode (d, &logon, len, used);
    if (state != GW_CODEC_SUCCESS)
        cout << "error: "
             << mSwx->getLastError ()
             << endl;
    
    ASSERT_EQ (state, GW_CODEC_SUCCESS);

    string s;
    ASSERT_TRUE (d.getString (Username, s));
    ASSERT_EQ (s, "test");
}
