/*
 * Copyright 2014-2018 Neueda
 */
#include <gtest/gtest.h>
#include "fixField.h"
#include "cdr.h"

using namespace std;
using namespace neueda;
using namespace ::testing;

TEST (fixField, STRING) {
    string type ("STRING");
    fixField f = fixField ();
    f.setType (type);
    f.setTag (1);

    cdr d;
    f.get ("ABC", d);

    string val;
    ASSERT_TRUE (d.getString (1, val));

    ASSERT_TRUE (val == "ABC");
}

TEST (fixField, INTEGER) {
    string type ("INT");
    fixField f = fixField ();
    f.setType (type);
    f.setTag (1);

    cdr d;
    f.get ("100", d);

    int64_t val;
    ASSERT_TRUE (d.getInteger (1, val));

    ASSERT_TRUE (val == 100);
}
