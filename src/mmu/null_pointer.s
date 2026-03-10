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

.globl _NEB_NULL_POINTER

.include "Nebula/nebula.i" // Equivalent to nebula.h but is not equal to nebula.h 

// ********************
// *** NULL Section ***
// ********************

.section .NULL
	
	_NEB_NULL_POINTER: .space 512
