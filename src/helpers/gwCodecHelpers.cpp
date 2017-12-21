#include "gwCodecHelpers.h"

bool
codecHelper_setIntBigEndian (cdr& d, cdrKey_t key, void* vp,
                             size_t size, string& err)
{
    switch (size)
    {
        case 2:
        {
            uint16_t val = ntohs(*(uint16_t*)(vp));
            d.setInteger (key, val);
            return true;
        }
        case 4:
        {
            uint32_t val = ntohl(*(uint32_t*)(vp));
            d.setInteger (key, val);
            return true;
        }
        case 8:
        {
            uint64_t val = ntohll(*(uint64_t*)(vp));
            d.setInteger (key, val);
            return true;
        }
        default:
            err.assign ("unknown integer size");
            return false;
    }
}

bool
codecHelper_getIntBigEndian (const cdr& d, const cdrKey_t key, void* vp,
                             size_t size, string& err)
{
    if (!d.isType (key, CDR_INTEGER))
    {
        // err.assign (key + "not an integer");
        return false;
    }
    int64_t value = d.getItem (key)->mInteger;
    switch (size)
    {
    case 2:
        if (value > UINT16_MAX)
        {
            // err.assign (key + " too big");
            return false;
        }
        *(uint16_t*)vp = htons (value);
        return true;
    case 4:
        if (value > UINT32_MAX)
        {
            // err.assign (key + " too big");
            return false;
        }
        *(uint32_t*)vp = htonl (value);
        return true;
    case 8:
        *(uint64_t*)vp = htonll (value);
        return true;
    default:
        err.assign ("unknown integer size");
        return false;
    }
}

void
codecHelper_setString (cdr& d, cdrKey_t name, char* s, size_t len)
{
    if (s[len - 1] == '\0')
        d.setString (name, s);
    else
    {
        char t[1024] = {0};
        memcpy (t, s, len);
        d.setString (name, t);
    }
}
