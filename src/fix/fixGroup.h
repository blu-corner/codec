#pragma once

#include <stdint.h>
#include <vector>
#include "fixField.h"

namespace neueda
{

using namespace std;

class fixGroup
{
public:
    fixGroup (int64_t parent) :
        mParent (parent),
        mFirstTag (0)
    {
    }

    void addField (const fixField* f)
    {
        int64_t tag = f->tag ();

        if (mFirstTag == 0)
            mFirstTag = tag;

        mTags.push_back (tag);
        mFields.push_back (f);
    }

    bool hasTag (int64_t tag)
    {
        vector<int64_t>::iterator it = find (mTags.begin (), mTags.end (), tag);
        return it != mTags.end ();
    }

    bool isFirstTag (int64_t tag)
    {
        return tag == mFirstTag;
    }

    int64_t parent () const
    {
        return mParent;
    }

private:
    int64_t                     mParent;
    int64_t                     mFirstTag;
    vector<int64_t>             mTags;
    vector<const fixField*>     mFields;
};

}
