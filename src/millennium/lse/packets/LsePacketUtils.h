/*
 * Copyright 2014-2018 Neueda Ltd.
 */
#ifndef LSE_PACKET_UTILS_H
#define LSE_PACKET_UTILS_H

#define PACKED(d) d __attribute__ ((__packed__))

#include <string>
#include <string.h>

using namespace std;

namespace LsePackets
{

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

} // namespace LsePackets

#endif // LSE_PACKET_UTILS_H
