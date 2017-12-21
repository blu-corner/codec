#include "compat.h"
#include <string>
#include <algorithm>

char*
simgethostipaddress()
{
    WSADATA wsaData;
    char* localIP = "";

    int initResult = WSAStartup(MAKEWORD(2, 2), &wsaData);
    if (initResult != 0)
    {
        printf("WSAStartup failed: %d\n", initResult);
        return "";
    }

    char hostName[255];
    gethostname(hostName, 255);

    struct hostent *hostInfo;
    hostInfo = gethostbyname(hostName);

    if(hostInfo != NULL && hostInfo->h_addr_list[0] != 0)
    {
        struct in_addr addr;
        addr.s_addr = *(u_long *)hostInfo->h_addr_list[0];
        localIP =  inet_ntoa(addr);
        //printf("IP: %s\n", localIP);
    }

    WSACleanup();

    return localIP;
}
