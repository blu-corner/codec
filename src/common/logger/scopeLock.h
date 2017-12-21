#ifndef _SCOPE_LOCK_HDR_
#define _SCOPE_LOCK_HDR_

#include <pthread.h>

typedef pthread_mutex_t mutexLock;
int mutex_init (pthread_mutex_t* m, int recursive);
#define mutex_destroy(m) pthread_mutex_destroy (m)
#define mutex_lock(m) pthread_mutex_lock (m)
#define mutex_unlock(m) pthread_mutex_unlock (m)

class scopeLock
{
public:
    scopeLock (mutexLock* lock) : mLock(lock)
    {
        mutex_lock (mLock);
    }

    ~scopeLock ()
    {
        mutex_unlock (mLock);
    }

private:
    scopeLock (const scopeLock&);
    const scopeLock& operator = (const scopeLock&);

    mutex_lock* mLock;
};

#endif

