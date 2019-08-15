/*
 * Copyright 2014-2018 Neueda
 */
#include <iostream>
#include <gtest/gtest.h>
#include "fixCodec.h"
#include "cdr.h"
#include "fields.h"
#include "fixMsg.h"
#include "utils.h"

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

        string envVar ("CONFIG_PATH");
        string filename ("FIX42.xml");
        string dict;

        ASSERT_TRUE (utils_findFileInEnvPath (envVar, filename, dict));

        ASSERT_TRUE (mCodec->loadDataDictionary (dict.c_str (), err));
    }

    virtual void TearDown ()
    {
    }

    fixCodec*   mCodec;
};

TEST_F(fixCodecTestHarness, HB_DECODE_NO_DICT)
{
    fixMsg fm;

    fm.setField (35, "0");
    fm.setField (49, "NEUTEST");
    fm.setField (56, "NEUUAT");
    fm.setField (34, "7");
    fm.setField (52, "20181030-14:19:49.962203");

    string msg;
    msg = fm.encode ();

    cdr d;
    size_t used = 0;

    codecState ret = mCodec->decode (d, msg.c_str (), 1024, used);
    ASSERT_TRUE (ret == GW_CODEC_SUCCESS);

    string version;
    ASSERT_TRUE (d.getString (8, version));

    ASSERT_TRUE (version == fm.beginString ());

    ASSERT_TRUE (used == msg.length ());
}

TEST_F(fixCodecWithDictTestHarness, ENCODE)
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
    ASSERT_TRUE (u == used);
}

TEST_F(fixCodecWithDictTestHarness, HB_DECODE_DICT)
{
    fixMsg fm;

    fm.setField (35, "0");
    fm.setField (49, "NEUTEST");
    fm.setField (56, "NEUUAT");
    fm.setField (34, "7");
    fm.setField (52, "20181030-14:19:49.962203");

    string msg;
    msg = fm.encode ();

    cdr d;
    size_t used = 0;

    codecState ret = mCodec->decode (d, msg.c_str (), 1024, used);
    ASSERT_TRUE (ret == GW_CODEC_SUCCESS);

    // extract the utctimestamp and ensure that it has been stored correctly
    const cdrItem* item = d.getItem (52);

    ASSERT_TRUE (item->mType == CDR_DATETIME);

    char t[64];
    sprintf (t, "%04d%02d%02d-%02d:%02d:%02d.%06d",
             item->mDateTime.mYear, item->mDateTime.mMonth, item->mDateTime.mDay,
             item->mDateTime.mHour, item->mDateTime.mMinute,
             item->mDateTime.mSecond, item->mDateTime.mNanosecond / 1000);

    string sendingtime;
    sendingtime.assign (t);
    ASSERT_TRUE (sendingtime == fm.getField (52));

    string version;
    ASSERT_TRUE (d.getString (8, version));
    ASSERT_TRUE (version == fm.beginString ());

    int bodylen;
    ASSERT_TRUE (d.getInteger (9, bodylen));
    ASSERT_TRUE (bodylen == fm.bodyLen ());

    char buf[1024];
    size_t len = 1024;
    size_t eused = 0;

    ret = mCodec->encode (d, buf, len, eused);
    ASSERT_TRUE (ret == GW_CODEC_SUCCESS);
    ASSERT_TRUE (used == eused);

    for (size_t i = 0; i < used; i++)
    {
        ASSERT_TRUE (buf[i] == msg.c_str ()[i]);
    }
}

TEST_F(fixCodecWithDictTestHarness, NOS_ALLOCS_REPEATING_GROUP)
{
    fixMsg fm;

    fm.setField (35, "D");
    fm.setField (49, "NEUTEST");
    fm.setField (56, "NEUUAT");
    fm.setField (34, "7");
    fm.setField (52, "20181030-14:19:49.962203");
    fm.setField (78, "2");
    fm.setField (79, "NEUACCT1");
    fm.setField (80, "20");
    fm.setField (79, "NEUACCT2");
    fm.setField (80, "20");

    string msg;
    msg = fm.encode ();

    cdr d;
    size_t used = 0;

    codecState ret = mCodec->decode (d, msg.c_str (), 1024, used);
    ASSERT_TRUE (ret == GW_CODEC_SUCCESS);

    ASSERT_TRUE (d.getArraySize (NoAllocs) == 2);

    char buf[1024];
    size_t len = 1024;
    size_t eused = 0;

    ret = mCodec->encode (d, buf, len, eused);
    ASSERT_TRUE (ret == GW_CODEC_SUCCESS);

    ASSERT_TRUE (used == eused);
    for (size_t i = 0; i < used; i++)
    {
        ASSERT_TRUE (buf[i] == msg.c_str ()[i]);
    }
}
