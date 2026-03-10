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

#ifndef _SYS_TYPES_H
#define _SYS_TYPES_H

#ifdef __cplusplus
extern "C" {
#endif

// *********************************
// *** Include Stardar Libraries ***
// *********************************

#include <stdint.h>

typedef size_t blkcnt_t;  // Used for file block counts
typedef size_t blksize_t; // Used for block sizes.

#ifdef  _CLOCK_T
#define _CLOCK_T
typedef int64_t clock_t;   // Used for system times in clock ticks or CLOCKS_PER_SEC
#endif // _CLOCK_T

#ifdef  _CLOCKID_T
#define _CLOCKID_T
typedef size_t clockid_t; // Used for clock ID type in the clock and timer functions.
#endif // _CLOCKID_T

#ifdef __cplusplus
}
#endif

#endif // _SYS_TYPES_H