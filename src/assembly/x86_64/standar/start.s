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

.section .text
	
	_start:
		jmp		_neb_kernel // Jump to _neb_kernel_start
