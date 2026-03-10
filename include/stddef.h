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

#ifndef _STDDEF_H
#define _STDDEF_H

#ifdef __cplusplus
extern "C" {
#endif

// *********************************
// *** Include Stardar Libraries ***
// *********************************

#include <stdint.h>

// *************************************
// *** Include Non-Stardar Libraries ***
// *************************************

#include <Nebula/nebula.h>

typedef int64_t  max_align_t;
typedef int**    ptrdiff_t;

#ifndef __cplusplus
#ifndef _WCHAR_T
#define _WCHAR_T
typedef int32_t  wchar_t;
#endif // _WCHAR_T
#endif

#ifndef _SIZE_T
#define _SIZE_T
typedef uint64_t size_t;
#endif // _SIZE_T

#ifndef NULL
#define NULL ((void*) _NEBULA_NULL_POINTER)
#endif // NULL

#ifdef __cplusplus
}
#endif

#endif // _STDDEF_H