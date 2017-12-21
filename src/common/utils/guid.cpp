#include <inscribe/inscribe.h>

#include "common.h"
#include "guid.h"

#ifdef _MSC_VER
#include <WS2tcpip.h>
#else
#include <arpa/inet.h>
#endif

static inscribe::Logger* logger = inscribe::LogService::get ().getLogger ("gwcCommon");


void
simGuid_init (simGuid* guid, uint64_t seed)
{
    struct timeval  tv;
    uint32_t        pid;
    char*           ip;
    struct in_addr  host; 
    
    memset ((void*)guid, 0x0, sizeof *guid);

    simgettimeofday (&tv, NULL);
    pid = simgetpid();
    ip = simgethostipaddress();
    if (ip == NULL)
        logger->fatal ("simGuid_init no suitable address");

    if (inet_pton (AF_INET, ip, (void*)&host) == 0)
        logger->fatal ("simGuid_init address %s incorrect format", ip);

    guid->mSubGuids[0] = ntohl (host.s_addr);
    guid->mSubGuids[1] = ((uint64_t)tv.tv_sec << 32) | pid;
    guid->mSubGuids[2] = seed; 
}

simGuid*
simGuid_increment (simGuid* guid, int cnt)
{
    guid->mSubGuids[3] += cnt;
    return guid;
}

char*
simGuid_toStr (simGuid* guid, char* buf, size_t len)
{
    if (len < SIMGUID_STR_LEN)
        return buf;

    sprintf (buf, "%016llx/%016llx/%016llx/%016llx",
                  (unsigned long long)guid->mSubGuids[0],
                  (unsigned long long)guid->mSubGuids[1],
                  (unsigned long long)guid->mSubGuids[2],
                  (unsigned long long)guid->mSubGuids[3]);
    return buf; 
}

const char*
simGuid_toString (simGuid* guid)
{
    static char tmp[SIMGUID_STR_LEN];

    return simGuid_toStr (guid, tmp, sizeof tmp);
}

bool
simGuid_strToGuid (const char* str, simGuid* guid)
{
    char* endptr = NULL;
    char* cp = strtok ((char*)str, "/");

    for (int i = 0; i < 4; i++)
    {
        if (cp == NULL)
            return false;

        guid->mSubGuids[i] = strtoull (cp, &endptr, 16);
        if (endptr == cp || *endptr != '\0')
            return false;

        cp = strtok (NULL, "/");
    }
    return true;
}
