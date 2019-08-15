#pragma once
#include <string>
#include <sstream>
#include <stdint.h>
#include "cdr.h"
#include "utils.h"
#include "codec.h"

namespace neueda
{

static const string FIX_MONTHYEAR_FMT = "%Y%m";
static const string FIX_UTCTIMEONLY_FMT = "%H:%M:%S";
static const string FIX_UTCDATE_FMT = "%Y%m%d";
static const string FIX_LOCALMKTDATE_FMT = "%Y%m%d";
static const string FIX_UTCTIMESTAMP_FMT = "%Y%m%d-%H:%M:%S";

using namespace std;

class fixField;

typedef bool (fixField::*getAsFunc) (const char*, const int64_t, cdr&);
typedef codecState (fixField::*setAsFunc) (const int64_t,
                                           const cdrItem&,
                                           const size_t len,
                                           char* p,
                                           size_t& used);

class fixField
{
public:
    fixField () :
        mRequired (false),
        mTag (0),
        mGetter (NULL),
        mSetter (NULL)
    {
        string t ("STRING");
        setType (t);
    }

    bool getAsString (const char* val, const int64_t tag, cdr& d)
    {
        string value (val);
        utils_trimWhiteSpace (value);

        d.setString (tag, value);

        return true;
    }

    static codecState writeStringVal (const int64_t tag,
                                      const string& val,
                                      const size_t len,
                                      char* p,
                                      size_t& used)
    {
        char* tmp = p + used;
        tmp += snprintf (p + used, len - used, "%lld=%s\001", tag, val.c_str ());
        used += tmp - (p + used);

        if (used > len)
            return GW_CODEC_SHORT;

        return GW_CODEC_SUCCESS;
    }

    static codecState setAsString (const int64_t tag,
                                   const cdrItem& i,
                                   const size_t len,
                                   char* p,
                                   size_t& used)
    {
        string val;
        if (!i.asString(val))
            return GW_CODEC_ERROR;

        return writeStringVal (tag, val, len, p, used);
    }

    bool get (const char* val, cdr& d)
    {
        return ((this)->*mGetter) (val, mTag, d);
    }

    codecState set (const int64_t tag,
                    const cdrItem& i,
                    const size_t len,
                    char* p,
                    size_t& used)
    {
        if (mSetter != NULL)
            return ((this)->*mSetter) (tag, i, len, p, used);
        else
            return fixField::setAsString (tag, i, len, p, used);
    }

    bool required () const
    {
        return mRequired;
    }

    void setRequired (bool req)
    {
        mRequired = req;
    }

    int64_t getTag () const
    {
        return mTag;
    }

    void setTag (int64_t tag)
    {
        mTag = tag;
    }

    const string& getName () const
    {
        return mName;
    }

    void setName (const string& name)
    {
        mName = name;
    }

    void setType (const string& type)
    {
        mType = type;

        // TODO DATA: Raw data with no format or content restrictions
        if (type == "INT" || type == "LENGTH" || type == "DAYOFMONTH")
        {
            mGetter = &fixField::getAsInteger;
        }
        else if (type == "UTCTIMESTAMP")
        {
            mGetter = &fixField::getAsUTCTimestamp;
            mSetter = &fixField::setAsUTCTimestamp;
        }
        else if (type == "UTCDATE")
        {
            mGetter = &fixField::getAsUTCDate;
            mSetter = &fixField::setAsUTCDate;
        }
        else if (type == "UTCTIMEONLY")
        {
            mGetter = &fixField::getAsUTCTimeOnly;
            mSetter = &fixField::setAsUTCTimeOnly;
        }
        else if (type == "MONTHYEAR")
        {
            mGetter = &fixField::getAsMonthYear;
            mSetter = &fixField::setAsMonthYear;
        }
        else if (type == "LOCALMKTDATE")
        {
            mGetter = &fixField::getAsLocalMktDate;
            mSetter = &fixField::setAsUTCDate;
        }
        else if (type == "QTY" || type == "FLOAT" ||
                 type == "PRICE" || type == "PRICEOFFSET" ||
                 type == "AMT")
        {
            mGetter = &fixField::getAsDouble;
            mSetter = &fixField::setAsDouble;
        }
        else
        {
            mGetter = &fixField::getAsString;
        }
    }

private:
    bool getAsDateTime (const char* val,
                        const int64_t tag,
                        cdr& d,
                        const char* fmt)
    {
        tm ts;
        if (!utils_parseDateTime (val, ts, fmt))
            return false;

        cdrDateTime dt;
        dt.mHour = ts.tm_hour;
        dt.mMinute = ts.tm_min;
        dt.mSecond = ts.tm_sec;
        dt.mDay = ts.tm_mday;
        dt.mMonth = ts.tm_mon + 1;
        dt.mYear = ts.tm_year + 1900;
        dt.mNanosecond = 0;

        // search for a decimal point, and if found convert everything after
        // to microseconds and insert into the datetime object
        string t (val);
        size_t pos = t.find (".");

        if (pos != string::npos)
        {
            stringstream os;
            string ns = t.substr (pos + 1);

            os << ns; 

            // pad out with zeros to get microseconds
            for (uint i = 0; i < (9 - ns.length ()); i++)
                os << 0;

            uint32_t nanos;
            if (!utils_parseNumber (os.str (), nanos))
                return false;

            dt.mNanosecond = nanos;
        }

        d.setDateTime (tag, dt);
        return true;
    }

    bool getAsUTCTimestamp (const char* val, const int64_t tag, cdr& d)
    {
        return getAsDateTime (val, tag, d, FIX_UTCTIMESTAMP_FMT.c_str ());
    }

    codecState setAsUTCTimestamp (const int64_t tag,
                                  const cdrItem& i,
                                  const size_t len,
                                  char* p,
                                  size_t& used)
    {
        if (i.mType != CDR_DATETIME)
            return GW_CODEC_ERROR;

        char t[25];
        snprintf (t, sizeof (t), "%04d%02d%02d-%02d:%02d:%02d.%06d",
                 i.mDateTime.mYear,
                 i.mDateTime.mMonth,
                 i.mDateTime.mDay,
                 i.mDateTime.mHour,
                 i.mDateTime.mMinute,
                 i.mDateTime.mSecond,
                 i.mDateTime.mNanosecond / 1000);

        string ts (t);
        return writeStringVal (tag, ts, len, p, used);
    }

    bool getAsUTCDate (const char* val, const int64_t tag, cdr& d)
    {
        return getAsDateTime (val, tag, d, FIX_UTCDATE_FMT.c_str ());
    }

    codecState setAsUTCDate (const int64_t tag,
                             const cdrItem& i,
                             const size_t len,
                             char* p,
                             size_t& used)
    {
        if (i.mType != CDR_DATETIME)
            return GW_CODEC_ERROR;

        char t[9];
        snprintf (t, sizeof (t), "%04d%02d%02d",
                 i.mDateTime.mYear, i.mDateTime.mMonth, i.mDateTime.mDay);

        string ts (t);
        return writeStringVal (tag, ts, len, p, used);
    }

    bool getAsUTCTimeOnly (const char* val, const int64_t tag, cdr& d)
    {
        return getAsDateTime (val, tag, d, FIX_UTCTIMEONLY_FMT.c_str ());
    }

    codecState setAsUTCTimeOnly (const int64_t tag,
                                 const cdrItem& i,
                                 const size_t len,
                                 char* p,
                                 size_t& used)
    {
        if (i.mType != CDR_DATETIME)
            return GW_CODEC_ERROR;

        char t[16];
        snprintf (t, sizeof (t), "%02d:%02d:%02d.%06d",
                 i.mDateTime.mHour,
                 i.mDateTime.mMinute,
                 i.mDateTime.mSecond,
                 i.mDateTime.mNanosecond / 1000);

        string ts (t);
        return writeStringVal (tag, ts, len, p, used);
    }

    bool getAsMonthYear (const char* val, const int64_t tag, cdr& d)
    {
        return getAsDateTime (val, tag, d, FIX_MONTHYEAR_FMT.c_str ());
    }

    codecState setAsMonthYear (const int64_t tag,
                               const cdrItem& i,
                               const size_t len,
                               char* p,
                               size_t& used)
    {
        if (i.mType != CDR_DATETIME)
            return GW_CODEC_ERROR;

        char t[7];
        snprintf (t, sizeof (t), "%04d%02d",
                 i.mDateTime.mYear, i.mDateTime.mMonth);

        string ts (t);
        return writeStringVal (tag, ts, len, p, used);
    }

    bool getAsLocalMktDate (const char* val, const int64_t tag, cdr& d)
    {
        return getAsDateTime (val, tag, d, FIX_LOCALMKTDATE_FMT.c_str ());
    }

    bool getAsDouble (const char* val, const int64_t tag, cdr& d)
    {
        double v;
        if (!utils_parseNumber (val, v))
            return false;

        d.setDouble (tag, v);
        return true;
    }

    codecState setAsDouble (const int64_t tag,
                            const cdrItem& i,
                            const size_t len,
                            char* p,
                            size_t& used)
    {
        switch (i.mType)
        {
            case CDR_DOUBLE:
            {
                char t[64];
                snprintf (t, sizeof (t), "%g", i.mDouble);
                string ts (t);
                return writeStringVal (tag, ts, len, p, used);
            }
            case CDR_INTEGER:
                return fixField::setAsString (tag, i, len, p, used);
            default:
                return GW_CODEC_ERROR;
        }
    }

    bool getAsInteger (const char* val, const int64_t tag, cdr& d)
    {
        int64_t v;
        if (!utils_parseNumber (val, v))
            return false;

        d.setInteger (tag, v);
        return true;
    }

    bool        mRequired;
    int64_t     mTag;
    string      mType;
    string      mName;
    getAsFunc   mGetter;
    setAsFunc   mSetter;
};

}
