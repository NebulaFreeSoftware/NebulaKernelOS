// SPDX-License-Identifier: AGPL-3-or-later

// *********************************************************
// *** Author:  Nebula Technology / Nebula Free Software ***
// *** License: AGPL-3-or-later                          ***
// *********************************************************

// ****************
// *** Features ***
// ****************

// ********************
// *** Dependencies ***
// ********************

// *************
// *** Notes ***
// *************

/**
 * This file was created to comply
 * with the POSIX 2001 - 2024 standard.
 * */

// ***********************
// *** Start of header ***
// ***********************

#ifndef _TIME_H
#define _TIME_H

// ********************************
// *** Macro for include on c++ ***
// ********************************

#ifdef __cplusplus
extern "C" {
#endif

// *********************************
// *** Include Stardar Libraries ***
// *********************************

#include <stdint.h>

#ifndef _CLOCK_T
#define _CLOCK_T
typedef int64_t clock_t;   // Used for system times in clock ticks or CLOCKS_PER_SEC
#endif // _CLOCK_T

#ifndef _SIZE_T
#define _SIZE_T
typedef uint64_t size_t;
#endif // _SIZE_T

#ifndef _TIME_T
#define _TIME_T
typedef uint64_t time_t;
#endif // _TIME_T

#ifndef _CLOCKID_T
#define _CLOCKID_T
typedef uint64_t clockid_t; // Used for clock ID type in the clock and timer functions.
#endif // _CLOCKID_T

#ifndef _TIMER_T
#define _TIMER_T
typedef uint64_t timer_t;
#endif // _TIMER_T

#ifndef _LOCALE_T
#define _LOCALE_T
typedef void* locale_t;
#endif // _LOCALE_T

#ifndef _PID_T
#define _PID_T
typedef uint64_t pid_t;
#endif // _PID_T

// **************************************
// ***        tm structure            ***
// ***     which shall include        ***
// *** at least the following members ***
// **************************************

typedef struct tm {
	int         tm_sec;    // Seconds [0,60]
	int         tm_min;    // Minutes [0,59]
	int         tm_hour;   // Hour [0,23].
	int         tm_mday;   // Day of month [1,31].
	int         tm_mon;    // Month of year [0,11].
	int         tm_year;   // Years since 1900.
	int         tm_wday;   // Day of week [0,6] (Sunday =0).
	int         tm_yday;   // Day of year [0,365].
	int         tm_isdst;  // Daylight Saving flag.
	long        tm_gmtoff; // Seconds east of UTC.
	const char *tm_zone;   // Timezone abbreviation.
} tm;

#ifdef __cplusplus
}
#endif

#endif // _TIME_H