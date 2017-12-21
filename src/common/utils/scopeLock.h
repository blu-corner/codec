#ifndef _SCOPE_LOCK_HDR_
#define _SCOPE_LOCK_HDR_

#include "common.h"

class scopeLock
{
public:
    scopeLock (simMutex* lock) : mLock(lock)
    {
        simMutex_lock (mLock);
    }

    ~scopeLock ()
    {
        simMutex_unlock (mLock);
    }

private:
    scopeLock (const scopeLock&);
    const scopeLock& operator = (const scopeLock&);

    simMutex* mLock;
};

#endif

