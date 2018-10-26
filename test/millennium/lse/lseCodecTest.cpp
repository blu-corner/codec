/*
 * Copyright 2014-2018 Neueda
 */
#include <sbfCommon.h>
#include <gtest/gtest.h>
#include "lse/lseCodec.h"
#include "lse/packets/LsePackets.h"
#include "cdr.h"
#include "fields.h"
#include "codecFactory.h"

using namespace std;
using namespace neueda;
using namespace ::testing;


class LseCodecTestHarness : public Test
{
protected:
    virtual void SetUp ()
    {
        std::string errorMessage;
        bool ok = mFactory.get ("lse", mLse, errorMessage);
        if (!ok)
        {
            std::cout << errorMessage << std::endl;
            ASSERT_TRUE (ok);
        }
    }

    virtual void TearDown ()
    {
        delete mLse;
    }

    
    codecFactory mFactory;
    codec* mLse;
};

TEST_F(LseCodecTestHarness, LOGON_DECODE)
{
    LseLogon logon;
    logon.setUserName ("Colin!!");
    logon.setPassword ("password");
    logon.setNewPassword ("newpassword");
    logon.setMessageVersion (0);

    cdr d;
    size_t len = sizeof (LseLogon);
    size_t used = 0;

    codecState state = mLse->decode (d, &logon, len, used);
    ASSERT_EQ (state, GW_CODEC_SUCCESS);

    string s;
    ASSERT_TRUE (d.getString (UserName, s));
    ASSERT_EQ (s, "Colin!!");
}

TEST_F(LseCodecTestHarness, LOGON_ENCODE)
{
    cdr d;
    d.setString (MessageType, "A");
    d.setString (UserName, "Colin!!");
    d.setString (Password, "password");
    d.setString (NewPassword, "newpassword");
    d.setInteger (MessageVersion, 0);
    
    LseLogon logon;
    size_t used = 0;
    codecState state = mLse->encode (d, (void*)&logon, sizeof (logon), used);

    if (state != GW_CODEC_SUCCESS)
        std::cerr << "codec-error:" << mLse->getLastError () << std::endl;
    
    ASSERT_EQ (state, GW_CODEC_SUCCESS);
    ASSERT_STREQ (logon.getUserName ().c_str (), "Colin!!");
}
