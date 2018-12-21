/*
 * Copyright 2014-2018 Neueda
 */
#include <iostream>
#include <gtest/gtest.h>
#include "fixCodec.h"
#include "cdr.h"

#define SOH '\01'

using namespace std;
using namespace neueda;
using namespace ::testing;

class fixCodecTestHarness : public Test
{
protected:
    virtual void SetUp ()
    {
        mCodec = new fixCodec ();
    }

    virtual void TearDown ()
    {
    }

    fixCodec*   mCodec;
};

class fixCodecWithDictTestHarness : public Test
{
protected:
    virtual void SetUp ()
    {
        mCodec = new fixCodec ();
        string err;
        if (!mCodec->loadDataDictionary ("/Users/colinp/dev/cpp/scratch/FIX42.xml", err))
            cout << err << endl;
    }

    virtual void TearDown ()
    {
    }

    fixCodec*   mCodec;
};

TEST_F(fixCodecTestHarness, HB_DECODE_NO_DICT)
{
    stringstream msg;
    msg << "8=FIX.4.29=6335=049=DBX2_SWX_156=swxauat34=752=20181030-14:19:49.96220310=136";
    cdr d;
    size_t used = 0;

    codecState ret = mCodec->decode (d, msg.str ().c_str (), 1024, used);
    ASSERT_TRUE (ret == GW_CODEC_SUCCESS);

    string version;
    ASSERT_TRUE (d.getString (8, version));

    ASSERT_TRUE (version == "FIX.4.2");

    ASSERT_TRUE (used == msg.str ().length ());
}

TEST_F(fixCodecTestHarness, ENCODE)
{
    cdr d;
    
    char buf[1024];
    size_t len = 1024;
    size_t used = 0;

    d.setString (8, "FIX.4.2");
    d.setString (35, "8");
    d.setString (40, "C");
    d.setString (41, "P");

    codecState ret = mCodec->encode (d, buf, len, used);
    ASSERT_TRUE (ret == GW_CODEC_SUCCESS);

    cdr e;
    size_t u = 0;
    ret = mCodec->decode (e, buf, used, u);
    ASSERT_TRUE (ret == GW_CODEC_SUCCESS);

    cout << e.toString () << endl;
}

TEST_F(fixCodecWithDictTestHarness, HB_DECODE_DICT)
{
    stringstream msg;
    msg << "8=FIX.4.29=6335=049=DBX2_SWX_156=swxauat34=752=20181030-14:19:49.96220310=136";
    cdr d;
    size_t used = 0;

    codecState ret = mCodec->decode (d, msg.str ().c_str (), 1024, used);
    ASSERT_TRUE (ret == GW_CODEC_SUCCESS);

    // extract the utctimestamp and ensure that it has been stored correctly
    string transacttime;
    ASSERT_TRUE (d.getItem (52)->mType == CDR_DATETIME);
    ASSERT_TRUE (d.getString (52, transacttime));
    ASSERT_TRUE (transacttime == "2018-10-30 14:19:49.962203");

    string version;
    ASSERT_TRUE (d.getString (8, version));
    ASSERT_TRUE (version == "FIX.4.2");

    int bodylen;
    ASSERT_TRUE (d.getInteger (9, bodylen));
    ASSERT_TRUE (bodylen == 63);
}
