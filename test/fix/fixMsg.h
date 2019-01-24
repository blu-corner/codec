#pragma once

#include <string>
#include <sstream>
#include <vector>

#define SOH '\001'

using namespace std;

typedef vector <pair <int, string> > msgFields;

class fixMsg
{
public:
    fixMsg () :
        mBeginString ("FIX.4.2")
    {};

    ~fixMsg () {};

    void setField (int tag, const char* v)
    {
        string val;
        val.assign (v);

        mFields.push_back (make_pair (tag, val));
    };

    string getField (int tag)
    {
        string val;
        val.clear ();

        msgFields::iterator it;
        for (it = mFields.begin (); it != mFields.end (); ++it)
        {
            if (it->first == tag)
            {
                val = it->second;
                return val;
            }
        }

        return val;
    }

    string encode ()
    {
        stringstream msg;
        stringstream body;
        msgFields::iterator it;
        for (it = mFields.begin (); it != mFields.end (); ++it)
        {
            body << it->first << "=" << it->second << SOH;
        }

        mBodyLength = body.str ().length ();

        msg << 8 << "=" << mBeginString << SOH;
        msg << 9 << "=" << mBodyLength << SOH;
        msg << body.str ();

        uint32_t cs = 0;
        for (size_t i = 0; i < msg.str ().size (); i++)
            cs += msg.str ()[i];

        msg << 10 << "=" << cs % 256 << SOH;

        return msg.str ();
    }

    void setBeginString (const char* bs)
    {
        mBeginString.assign (bs);
    }

    string beginString ()
    {
        return mBeginString;
    }

    size_t bodyLen ()
    {
        return mBodyLength;
    }

private:
    string      mBeginString;
    size_t      mBodyLength;
    msgFields   mFields;
};
