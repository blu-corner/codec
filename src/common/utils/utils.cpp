#include "utils.h"
#include "common.h"

#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <time.h>

/* return the number of seconds since midnight */
time_t
utils_secondsSinceMidnight ()
{
    time_t t1, t2;
    struct tm tms;
    time(&t1);
    localtime_r(&t1, &tms);
    tms.tm_hour = 0;
    tms.tm_min = 0;
    tms.tm_sec = 0;
    t2 = mktime(&tms);
    return t1 - t2;
}

/* Parse a string to an int, returns true if completes */
bool 
utils_parseInt (std::string& s, int& d)
{
    char* endp;
    d = strtol (s.c_str(), &endp, 10);
    if ( s.c_str()[0] != '\0' && endp != NULL && *endp == '\0')
        return true;
    else
        return false;
}

/* Parse a string to a double, returns true if complete */
bool 
utils_parseDouble (std::string& s, double& d)
{
    char* endp;

    d = strtod (s.c_str(), &endp);
    if ( s.c_str()[0] != '\0' && endp != NULL && *endp == '\0')
        return true;
    else
        return false;     
}

// ltrim whitespace from start
void utils_ltrimWhiteSpace (std::string& s) {
    s.erase(s.begin(), std::find_if(s.begin(), s.end(),
            std::not1(std::ptr_fun<int, int>(std::isspace))));
}

// rtrim whitespace from end
void utils_rtrimWhiteSpace (std::string& s) {
    s.erase(std::find_if(s.rbegin(), s.rend(),
            std::not1(std::ptr_fun<int, int>(std::isspace))).base(), s.end());
}

// trim from both ends
void utils_trimWhiteSpace (std::string& s) {
    utils_ltrimWhiteSpace (s);
    utils_rtrimWhiteSpace (s);
}

/* Get the current time in HH:MM:SS.MS format */
void 
utils_localTime (std::string& s)
{
    char           tim[32] = {0};
    time_t         t;
    struct tm      tmp;
    struct timeval tv;


    t = time (NULL);
#ifndef _MSC_VER
    localtime_r (&t, &tmp);
#else
    localtime_s (&tmp, &t);
#endif
    strftime (tim, sizeof(tim), "%H:%M:%S", &tmp);
    s.assign (tim);
    simgettimeofday (&tv, NULL);
    sprintf (tim, ".%03d", (int)tv.tv_usec/1000);
    s += tim;

}

bool
utils_parseAddressPort (const std::string s,
                        std::string& address,
                        uint16_t& port)
{
    size_t      idx;
    std::string portStr;
    int         p;

    idx = s.find_first_of (':');
    if (idx == std::string::npos)
        return false;

    address.assign (s, 0, idx);
    portStr.assign (s, idx + 1, s.size() - (idx + 1));
    if (!utils_parseInt (portStr, p))
        return false;

    if (p < 0 || p > 65535)
        return false;

    port = p;
    return true;
}

int
utils_millisSinceMidnight ()
{
    struct timeval tv;
    int m = 0;
    if (gettimeofday(&tv, NULL) == 0)
        m = ((tv.tv_sec % 86400) * 1000 + tv.tv_usec / 1000);
    return m;
}

void
utils_milliMicroSinceMidnight (int& m, int& mic)
{
    struct timeval tv;
    m = mic = 0;
    if (gettimeofday(&tv, NULL) == 0)
        m = ((tv.tv_sec % 86400) * 1000 + tv.tv_usec / 1000);
    mic = tv.tv_usec;
}

/* parses a time string to a tm */
bool
utils_parseTime (const char* stm, tm& t)
{
    struct timeval tv;
    simgettimeofday (&tv, NULL);
    time_t now = tv.tv_sec;
    localtime_r (&now, &t);

    char* ret = strptime(stm, "%H:%M:%S", &t);

    if (ret == '\0')
        return false;

    return true;
}

/* parses a datetime string to a tm */
bool
utils_parseDateTime (const char* stm, tm& t)
{
    struct timeval tv;
    simgettimeofday (&tv, NULL);
    time_t now = tv.tv_sec;
    localtime_r (&now, &t);

    char* ret = strptime(stm, "%Y/%m/%d %H:%M:%S", &t);

    if (ret == '\0')
        return false;

    return true;
}
