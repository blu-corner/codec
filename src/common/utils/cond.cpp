#include "cond.h"

simCondition::simCondition () : 
    mPredicate (0)
{
    if (pthread_mutex_init (&mLock, NULL) != 0)
        SBF_FATAL ("failed to init mutex");

    if (pthread_cond_init (&mCondition, NULL) != 0)
        SBF_FATAL ("failed to init condition variable");
}

simCondition::~simCondition ()
{
    pthread_cond_destroy (&mCondition);
    pthread_mutex_destroy (&mLock);
}

bool
simCondition::wake ()
{
    bool ret = true;
    pthread_mutex_lock (&mLock);
    mPredicate++;    
    if (pthread_cond_signal (&mCondition) != 0)
        ret = false;
    pthread_mutex_unlock (&mLock);
    return ret;
}

bool
simCondition::wakeAll ()
{
    bool ret = true;
    pthread_mutex_lock (&mLock);
    mPredicate++;
    if (pthread_cond_broadcast (&mCondition) != 0)
        ret = false;
    pthread_mutex_unlock (&mLock);
    return ret;
}

void
simCondition::wait ()
{
    pthread_mutex_lock (&mLock);
    while (mPredicate == 0)
    {
        pthread_cond_wait (&mCondition, &mLock);
    }
    mPredicate = 0;
    pthread_mutex_unlock (&mLock);
}

