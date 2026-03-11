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

// ***********************************
// *** Definition of Global Labels ***
// ***********************************

.globl		_start

.include	"Nebula/nebula.i" // Equivalent to nebula.h but is not equal to nebula.h 

// ********************
// *** Code Section ***
// ********************

.section .text

	_start:
		ldr		x1, =_neb_dtb_ptr  // Get address of memory
		str		x0, [x1]           // Store value from x0 to _neb_dtb_ptr
		bl		_neb_kernel_start  // Jump to _neb_kernel_start
