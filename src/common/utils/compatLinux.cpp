#include "compat.h"

#include <cstdlib>
#include <cstring>

#include <sys/types.h>
#include <ifaddrs.h>
#include <netinet/in.h>
#include <arpa/inet.h>

char*
simgethostipaddress()
{
    char* localIP = NULL;
    struct ifaddrs *ifAddresses = NULL;
    struct ifaddrs *ifa = NULL;

    void* tmpAddress = NULL;

    if(getifaddrs(&ifAddresses) == -1)
    {
        return NULL;
    }

    for (ifa = ifAddresses; ifa != NULL; ifa = ifa->ifa_next)
    {
        if(ifa->ifa_addr->sa_family == AF_INET
                && strcmp (ifa->ifa_name, "lo") != 0)
        {
            tmpAddress = &((struct sockaddr_in *)ifa->ifa_addr)->sin_addr;
            localIP = (char*)calloc (1, INET_ADDRSTRLEN + 1);
            inet_ntop (AF_INET, tmpAddress, localIP, INET_ADDRSTRLEN);

            break;
        }
    }
    freeifaddrs(ifAddresses);

    return localIP;
}
