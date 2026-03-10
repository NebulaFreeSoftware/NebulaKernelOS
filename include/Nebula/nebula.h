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

// ***********************
// *** Start of header ***
// ***********************

#ifndef _NEBULA_KERNEL_H
#define _NEBULA_KERNEL_H

#if defined(__cplusplus)
extern "C" {
#endif

// **********************
// *** Special Macros ***
// **********************

#if defined(__raspberry)
#define _NEBULA_NULL_POINTER 0x3080200
#elif defined(__standar_x86_64)
#define _NEBULA_NULL_POINTER 0x0
#endif

// **************************
// *** External Variables ***
// **************************

extern int*  _neb_dtb_ptr;

// **************************
// *** External Functions ***
// **************************

extern void _neb_kernel_start();

#if defined( __cplusplus)
}
#endif

#endif // _NEBULA_KERNEL_H