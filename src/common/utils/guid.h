#ifndef _GUID_H_
#define _GUID_H_

#include "common.h"

SIM_PACKED (struct simGuid
{
    uint64_t mSubGuids[4];

    inline bool operator< (const simGuid& other) const
    {
        if (mSubGuids[0] != other.mSubGuids[0])
            return mSubGuids[0] < other.mSubGuids[0];
        if (mSubGuids[1] != other.mSubGuids[1])
            return mSubGuids[1] < other.mSubGuids[1];
        if (mSubGuids[2] != other.mSubGuids[2])
            return mSubGuids[2] < other.mSubGuids[2];
        return mSubGuids[3] < other.mSubGuids[3];
    }

    inline bool operator== (const simGuid& other) const
    {
        if (mSubGuids[0] == other.mSubGuids[0] &&
            mSubGuids[1] == other.mSubGuids[1] &&
            mSubGuids[2] == other.mSubGuids[2] &&
            mSubGuids[3] == other.mSubGuids[3])
            return true;
        else
            return false;
    }

    inline bool operator!= (const simGuid& other) const
    {
        return !(*this == other);
    }
});

#define SIMGUID_STR_LEN (68)

void simGuid_init (simGuid* guid, uint64_t seed);

simGuid* simGuid_increment (simGuid* guid, int cnt);

char* simGuid_toStr (simGuid* guid, char* buf, size_t len);

const char* simGuid_toString (simGuid* guid);

bool simGuid_strToGuid (const char* str, simGuid* guid);

#endif  /* _GUID_H_ */
