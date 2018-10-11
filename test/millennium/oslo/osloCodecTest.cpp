/*
 * Copyright 2014-2018 Neueda
 */
#include <gtest/gtest.h>
#include "osloCodec.h"
#include "OsloPackets.h"
#include "cdr.h"
#include "fields.h"
#include "codecFactory.h"

using namespace std;
using namespace neueda;
using namespace ::testing;

class OsloCodecTestHarness : public Test
{
protected:
    virtual void SetUp ()
    {
        std::string errorMessage;
        bool ok = mFactory.get ("oslo", mOslo, errorMessage);
        if (not ok)
        {
            std::cout << errorMessage << std::endl;
            ASSERT_TRUE (ok);
        }
    }

    virtual void TearDown ()
    {
        delete mOslo;
    }

    codecFactory mFactory;
    codec* mOslo;
};

TEST_F(OsloCodecTestHarness, LOGON_DECODE)
{
    OsloLogon logon;
    logon.setUserName ("Colin!!");
    logon.setPassword ("password");
    logon.setNewPassword ("newpassword");
    logon.setMessageVersion (0);

    cdr d;
    size_t len = sizeof (OsloLogon);
    size_t used = 0;

    codecState state = mOslo->decode (d, &logon, len, used);
    ASSERT_EQ (state, GW_CODEC_SUCCESS);

    string s;
    ASSERT_TRUE (d.getString (UserName, s));
    ASSERT_EQ (s, "Colin!!");
}

TEST_F(OsloCodecTestHarness, LOGON_ENCODE)
{
    cdr d;
    d.setString (MessageType, "A");
    d.setString (UserName, "Colin!!");
    d.setString (Password, "password");
    d.setString (NewPassword, "newpassword");
    d.setInteger (MessageVersion, 0);
    
    OsloLogon logon;
    size_t used = 0;
    codecState state = mOslo->encode (d, (void*)&logon, sizeof (logon), used);

    if (state != GW_CODEC_SUCCESS)
        std::cerr << "codec-error:" << mOslo->getLastError () << std::endl;
    
    ASSERT_EQ (state, GW_CODEC_SUCCESS);
    ASSERT_STREQ (logon.getUserName ().c_str (), "Colin!!");
}
