#ifndef _COND_HDR_
#define _COND_HDR_

#include "common.h"
#include <pthread.h>

class simCondition
{
public:
    simCondition ();    
    ~simCondition ();

    bool wake ();
    bool wakeAll ();
    void wait ();

private:
    simCondition (const simCondition& obj) {}
    simCondition& operator= (const simCondition& obj) 
    {       
        return *this;
    }

    u_int           mPredicate;
    pthread_mutex_t mLock;
    pthread_cond_t  mCondition;
};

#endif /* _COND_HDR_ */
