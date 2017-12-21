#ifndef _UTILS_HDR_
#define _UTILS_HDR_

#include <common.h>

#include <string>
#include <math.h>
#include <sys/time.h>
#include <algorithm> 
#include <functional> 
#include <cctype>
#include <locale>

/* return the number of seconds since midnight */
time_t utils_secondsSinceMidnight ();

/* Parse a string to an int, returns true if completes */
bool utils_parseInt (std::string& s, int& d);

/* Parse a string to a double, returns true if complete */
bool utils_parseDouble (std::string& s, double& d);

/* ltrim whitespace */
void utils_ltrimWhiteSpace (std::string &s);

/* rtrim whitespace */
void utils_rtrimWhiteSpace (std::string &s);

/* trim all whitespace */
void utils_trimWhiteSpace (std::string &s);

/* Parse a address:port as address and port */
bool utils_parseAddressPort (const std::string s,
                             std::string& address,
                             uint16_t& port);

/* Get the current time in HH:MM:SS.MS format */
void utils_localTime (std::string& s);

/* Get the current time in millis from midnight */
int utils_millisSinceMidnight ();

/* Get the millis and micros since midnight */
void utils_milliMicroSinceMidnight (int& m, int& mic);

bool simInline utils_doubleEq (double d1, double d2)
{
    return fabs (d1 - d2) < SIM_DOUBLE_EPSILON;
}

bool simInline utils_doubleLt (double d1, double d2)
{
    return (d2 - d1) > SIM_DOUBLE_EPSILON;
}

bool simInline utils_doubleGt (double d1, double d2)
{
    return (d1 - d2) > SIM_DOUBLE_EPSILON;
}

bool simInline utils_doubleGtEq (double d1, double d2)
{
    return !utils_doubleLt (d1, d2);
}

bool simInline utils_doubleLtEq (double d1, double d2)
{
    return !utils_doubleGt (d1, d2);
}

/* parse time string as tm */
bool utils_parseTime (const char* stm, tm& t);

/* parse date time string as tm */
bool utils_parseDateTime (const char* stm, tm& t);

#endif /* _UTILS_HDR_ */
