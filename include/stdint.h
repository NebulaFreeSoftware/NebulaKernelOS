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

#ifndef _STDINT_H
#define _STDINT_H

// ********************************
// *** Macro for include on c++ ***
// ********************************

#ifdef __cplusplus
extern "C" {
#endif // __cplusplus

// *********************************
// *** Exact-width integer types ***
// *********************************

typedef signed char  int8_t;
typedef signed short int16_t;
typedef signed int   int32_t;

typedef unsigned char  uint8_t;
typedef unsigned short uint16_t;
typedef unsigned int   uint32_t;

#ifdef _POSIX_V8_LP64_OFF64
typedef signed   long long int64_t;
typedef unsigned long long uint64_t;
#endif // _POSIX_V8_LP64_OFF64

// ***********************************
// *** Minimum-width integer types ***
// ***********************************

typedef signed char      int_least8_t;
typedef signed short     int_least16_t;
typedef signed int       int_least32_t;
typedef signed long long int_least64_t;

typedef unsigned char      uint_least8_t;
typedef unsigned short     uint_least16_t;
typedef unsigned int       uint_least32_t;
typedef unsigned long long uint_least64_t;

// *******************************************
// *** Fastest minimum-width integer types ***
// *******************************************

typedef signed char      int_fast8_t;
typedef signed short     int_fast16_t;
typedef signed int       int_fast32_t;
typedef signed long long int_fast64_t;

typedef unsigned char      uint_fast8_t;
typedef unsigned short     uint_fast16_t;
typedef unsigned int       uint_fast32_t;
typedef unsigned long long uint_fast64_t;

// ********************************************************
// *** Integer types capable of holding object pointers ***
// ********************************************************

typedef signed   int* intptr_t;
typedef unsigned int* uintptr_t;

// ************************************
// *** Greatest-width integer types ***
// ************************************

typedef signed   int intmax_t;
typedef unsigned int uintmax_t;

// ********************************
// *** Macro for include on c++ ***
// ********************************

#ifdef __cplusplus
}
#endif // __cplusplus

// ****************
// *** End File ***
// ****************

#endif // _STDINT_H