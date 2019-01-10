/*
 * Copyright 2014-2018 Neueda
 */
#include <gtest/gtest.h>
#include "fixGroup.h"
#include "fixField.h"
#include "cdr.h"

using namespace std;
using namespace neueda;
using namespace ::testing;

class fixRepeatingGroupTestHarness : public Test
{
protected:
    virtual void SetUp ()
    {
        mRepeatingGroup = new fixGroup (1);
        // mRepeatingGroup->addTag (10);
        // mRepeatingGroup->addTag (11);
        // mRepeatingGroup->addTag (35);
    }

    virtual void TearDown ()
    {
        delete (mRepeatingGroup);
    }

    fixGroup*   mRepeatingGroup;
};

TEST_F(fixRepeatingGroupTestHarness, IS_FIRST_TAG)
{
    // ASSERT_TRUE (mRepeatingGroup->isFirstTag (10));
    // ASSERT_FALSE (mRepeatingGroup->isFirstTag (11));
    // ASSERT_FALSE (mRepeatingGroup->isFirstTag (9));
}
