/*
 * Copyright 2014-2018 Neueda Ltd.
 */
#ifndef LSE_PACKET_UTILS_H
#define LSE_PACKET_UTILS_H

#ifdef WIN32
#define PACKED(d) __pragma( pack(push, 1) ) d __pragma( pack(pop) )
#else
#define PACKED(d) d __attribute__ ((__packed__))
#endif

#include <string>
#include <string.h>
#include "codec.h"

using namespace std;

namespace neueda
{

static inline bool
putString (const cdr& d,
           cdrKey_t name,
           char* s,
           size_t slen)
{
    std::string from;
    if (!d.getString (name, from))
        return false;
    if (from.size () > slen)
        return false;
    memset (s, '\0', slen);
    memcpy (s, from.c_str (), from.length());
    return true;
}

static inline bool
putPrice (const cdr& d,
          cdrKey_t key,
          int64_t* price)
{
    std::stringstream err;
    err << key << " not a double";

    if (!d.isType (key, CDR_DOUBLE))
        return false;

    double value;
    d.getDouble (key, value);
    *price = value * 100000000;
    return true;
}

static inline bool
putCharacter (const cdr& d,
              cdrKey_t key,
              char* c)
{
    if (!d.isType (key, CDR_STRING, 1))
        return false;

    *c = *d.getItem (key)->mString.c_str ();
    return true;
}

static inline bool
setString (char* s, const string& v, size_t slen)
{
    if (v.size () > slen)
        return false;

    memset (s, '\0', slen);
    memcpy (s, v.c_str (), v.length ());
    return true;
};

static inline string
getString (const char* v, size_t slen)
{
    string s;
    if (v[slen - 1] == '\0')
        s.assign (v); 
    else
    {
        char t[1024] = {0};
        memcpy (t, v, slen);
        s.assign (t, slen);
    }

    return s;
};

} // namespace neueda

#endif // LSE_PACKET_UTILS_H
