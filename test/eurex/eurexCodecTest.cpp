#include <sbfCommon.h>
#include <gtest/gtest.h>

#include "cdr.h"
#include "fields.h"
#include "codecFactory.h"
#include <string>
#include <memory>
#include <stdint.h>
#include <fstream>
#include <sstream>

#include "eurexCodec.h"
#include "eurexPacketUtils.h"

using namespace std;
using namespace neueda;
using namespace ::testing;

class EurexCodecTestHarness : public Test
{
protected:
    virtual void SetUp ()
    {
        mEurex = NULL;
        std::string errorMessage;
        bool ok = mFactory.get ("eurex", mEurex, errorMessage);
        ASSERT_TRUE (ok) << errorMessage;

        // some test files
        //mTestFiles.push_back (... path ...);
    }

    virtual void TearDown ()
    {
        if (mEurex)
            delete mEurex;
    }

    codecFactory mFactory;
    codec* mEurex;
    vector<string> mTestFiles;
};

static bool cdrDiff (const cdr& reference, const cdr& copy, string& errorMsg, const string& currentPath = "")
{
    //DEBUG HELP
    //if (currentPath.empty ())
    //{
    //    cout << "REF.: " << reference.toString () << endl;
    //    cout << "COPY: " << copy.toString () << endl;
    //}

    stringstream ss;
    for (cdr::const_iterator itRef = reference.begin (); itRef != reference.end (); ++itRef)
    {
        stringstream path;
        path << currentPath << "/" << FieldUtils::getFieldName (itRef->first) << "(" << itRef->first << ")";
        if (!copy.contains (itRef->first))
        {
            ss << "missing key " << path.str() << " in copy";
            errorMsg = ss.str ();
            return false;
        }

        const cdrItem *copyItem = copy.getItem (itRef->first);
        if (copyItem->mType != itRef->second.mType)
        {
            string refType, copyType;
            itRef->second.asString (refType);
            copyItem->asString (copyType);
            ss << "wrong type for key " << path.str () << ": " << refType << " vs " << copyType;
            errorMsg = ss.str ();
            return false;
        }
        else if (itRef->second.mType != CDR_ARRAY)
        {
            string refValue, copyValue;
            itRef->second.asString (refValue);
            copyItem->asString (copyValue);
            if (refValue != copyValue)
            {
                ss << "wrong value for key " << path.str () << ": [" << refValue << "] vs [" << copyValue << "]";
                errorMsg = ss.str ();
                return false;
            }
        }
        else if (itRef->second.mType == CDR_ARRAY)
        {
            if (copyItem->mArray.size () != itRef->second.mArray.size ())
            {
                ss << "wrong size for array key " << path.str () << ": " << itRef->second.mArray.size () << " vs " << copyItem->mArray.size ();
                errorMsg = ss.str ();
                return false;
            }
            for (size_t i = 0; i < itRef->second.mArray.size (); i++)
                if (!cdrDiff (itRef->second.mArray[i], copyItem->mArray[i], errorMsg, path.str ()))
                    return false;
        }
        else
        {
            ss << "unknown type " << itRef->second.mType;
            errorMsg = ss.str ();
            return false;
        }
    }
    return true;
}

TEST_F(EurexCodecTestHarness, EUREX_CODEC_LOGONREQUEST_ENCODE_DECODE)
{
    // common variables
    const size_t MSG_LENGTH = 280;
    unsigned char msg[MSG_LENGTH];
    size_t used;
    cdr inputCdr;
    cdr outputCdr;
    codecState state;

    // fill input CDR
    inputCdr.setInteger (TemplateID, 10000);
    inputCdr.setInteger (MsgSeqNum, 1);
    inputCdr.setInteger (SenderSubID, 2);
    inputCdr.setInteger (PartyIDSessionID, 3);
    inputCdr.setString (DefaultCstmApplVerID, "22222");
    inputCdr.setString (Password, "33333");

    // encode
    used = 0;
    state = mEurex->encode (inputCdr, &msg, MSG_LENGTH, used);
    ASSERT_EQ (state, GW_CODEC_SUCCESS) << mEurex->getLastError ();
    ASSERT_EQ (MSG_LENGTH, used);

    // decode
    used = 0;
    state = mEurex->decode (outputCdr, &msg, MSG_LENGTH, used);
    ASSERT_EQ (state, GW_CODEC_SUCCESS) << mEurex->getLastError ();
    ASSERT_EQ (MSG_LENGTH, used);

    // compare CDRs
    string errorMsg;
    ASSERT_TRUE (cdrDiff (inputCdr, outputCdr, errorMsg)) << errorMsg;
}

TEST_F(EurexCodecTestHarness, EUREX_CODEC_REJECT_ENCODE_DECODE)
{
    // common variables
    const size_t MSG_LENGTH = 72;
    unsigned char msg[MSG_LENGTH];
    size_t used;
    cdr inputCdr;
    cdr outputCdr;
    codecState state;

    // fill input CDR
    inputCdr.setInteger (TemplateID, 10010);
    inputCdr.setInteger (RequestTime, 1);
    inputCdr.setInteger (TrdRegTSTimeIn, 3);
    inputCdr.setInteger (TrdRegTSTimeOut, 4);
    inputCdr.setInteger (ResponseIn, 5);
    inputCdr.setInteger (SendingTime, 6);
    inputCdr.setInteger (MsgSeqNum, 7);
    inputCdr.setInteger (LastFragment, 8);
    inputCdr.setInteger (SessionRejectReason, 9);
    inputCdr.setInteger (SessionStatus, 10);
    inputCdr.setString (VarText, "var text");

    // encode
    used = 0;
    state = mEurex->encode (inputCdr, &msg, MSG_LENGTH, used);
    ASSERT_EQ (state, GW_CODEC_SUCCESS) << mEurex->getLastError ();
    ASSERT_EQ (MSG_LENGTH, used);

    // decode
    used = 0;
    state = mEurex->decode (outputCdr, &msg, MSG_LENGTH, used);
    ASSERT_EQ (state, GW_CODEC_SUCCESS) << mEurex->getLastError ();
    ASSERT_EQ (MSG_LENGTH, used);

    // compare CDRs
    string errorMsg;
    ASSERT_TRUE (cdrDiff (inputCdr, outputCdr, errorMsg)) << errorMsg;
}

static unsigned char *readBinFile (const string &filename, size_t &size)
{
    // open file
    FILE *f = fopen (filename.c_str (), "rw");
    if (!f) return NULL;

    // create a buffer with its size
    fseek (f, 0, SEEK_END);
    size = ftell (f);
    unsigned char *buffer = new unsigned char[size];
    if (!buffer)
    {
        fclose (f);
        return NULL;
    }

    // read contents into buffer
    fseek (f, 0, SEEK_SET);
    size_t readSize = fread (buffer, size, 1, f);
    if (readSize != 1)
    {
        delete[] buffer;
        buffer = NULL;
    }

    // clean up and return
    fclose (f);
    return buffer;
}

TEST_F(EurexCodecTestHarness, EUREX_CODEC_SAMPLES_DECODE_AND_ENCODE)
{
    // process all filenames
    for (size_t i = 0; i < mTestFiles.size (); i++)
    {
        size_t len;
        unsigned char *input = (readBinFile (mTestFiles[i], len));
        ASSERT_TRUE (input != NULL);
        unsigned char *inputPtr = input;
        while (len > 0)
        {
            // common variables
            cdr inputCdr;
            size_t usedInput = 0;
            codecState state;

            // decode message from input
            state = mEurex->decode (inputCdr, inputPtr, len, usedInput);
            ASSERT_EQ (state, GW_CODEC_SUCCESS) << mEurex->getLastError ();
            uint16_t templateId;
            ASSERT_TRUE (inputCdr.getInteger (TemplateID, templateId));
            ASSERT_LE (10000, templateId);
            ASSERT_LE (templateId, 10501);
            uint32_t bodyLen;
            ASSERT_TRUE (inputCdr.getInteger (BodyLen, bodyLen));
            ASSERT_EQ (bodyLen, usedInput);

            // encode message from previous CDR
            unsigned char *output = new unsigned char[bodyLen] ();
            size_t usedOutput;
            state = mEurex->encode (inputCdr, output, bodyLen, usedOutput);
            ASSERT_EQ (state, GW_CODEC_SUCCESS) << mEurex->getLastError ();
            ASSERT_EQ (usedInput, usedOutput);

            // re-decode message and compare with previous CDR
            cdr outputCdr;
            state = mEurex->decode (outputCdr, output, bodyLen, usedOutput);
            ASSERT_EQ (state, GW_CODEC_SUCCESS) << mEurex->getLastError ();
            ASSERT_EQ (usedInput, usedOutput);

            // compare CDRs
            string errorMsg;
            ASSERT_TRUE (cdrDiff (inputCdr, outputCdr, errorMsg)) << errorMsg;
            ASSERT_STREQ(inputCdr.toString ().c_str (), outputCdr.toString ().c_str ()); // not necessary!

            // prepare next iteration
            len -= usedInput;
            inputPtr += usedInput;
            delete[] output;
        }
        delete[] input;
        ASSERT_EQ (len, 0);
    }
}
