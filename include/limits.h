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

#ifndef _STDLIB_H
#define _STDLIB_H

#ifdef __cplusplus
extern "C" {
#endif // __cplusplus

// *************************************
// *** Include Non-Stardar Libraries ***
// *************************************

#include <Nebula/nebula.h>

/**
 * Runtime Invariant Values (Possibly Indeterminate)
 * */

// ****************************************
// *** Maximum number of I/O operations ***
// ***   in a single list I/O call      ***
// *** supported by the implementation  ***
// ****************************************

#ifndef AIO_LISTIO_MAX
#define AIO_LISTIO_MAX 0
#endif // AIO_LISTIO_MAX

// ***************************************
// *** Maximum number of outstanding   ***
// ***  asynchronous I/O operations    ***
// *** supported by the implementation ***
// ***************************************

#ifndef AIO_MAX
#define AIO_MAX 0
#endif // AIO_MAX

// ********************************************************
// ***    The maximum amount by which a process         ***
// *** can decrease its asynchronous I/O priority level ***
// ***      from its own scheduling priority            ***
// ********************************************************

#ifndef AIO_PRIO_DELTA_MAX
#define AIO_PRIO_DELTA_MAX 0
#endif // AIO_PRIO_DELTA_MAX

// **********************************
// *** Maximum length of argument ***
// ***  to the exec functions     ***
// *** including environment data ***
// **********************************

#ifndef ARG_MAX
#define ARG_MAX 0
#endif // ARG_MAX

// ************************************************************
// *** Maximum number of functions that can be registered   ***
// ***       with atexit() or at_quick_exit().              ***
// *** The limit shall apply independently to each function ***
// ************************************************************

#ifndef ATEXIT_MAX
#define ATEXIT_MAX 0
#endif // ATEXIT_MAX

// **************************************
// *** Maximum number of simultaneous ***
// ***  processes per real user ID    ***
// **************************************

#ifndef CHILD_MAX
#define CHILD_MAX 0
#endif // CHILD_MAX

// ***************************************************
// *** Maximum number of timer expiration overruns ***
// ***************************************************

#ifndef DELAYTIMER_MAX
#define DELAYTIMER_MAX 0
#endif // DELAYTIMER_MAX

// ***************************************************
// ***      Maximum length of a host name          ***
// ***   (not including the terminating null)      ***
// *** as returned from the gethostname() function ***
// ***************************************************

#ifndef HOST_NAME_MAX
#define HOST_NAME_MAX 256
#endif // HOST_NAME_MAX

// ******************************************
// *** Maximum number of iovec structures ***
// ***  that one process has available    ***
// *** for use with readv() or writev()   ***
// ******************************************

#ifndef IOV_MAX
#define IOV_MAX 0
#endif // IOV_MAX

// **************************************
// *** Maximum length of a login name ***
// **************************************

#ifndef LOGIN_NAME_MAX
#define LOGIN_NAME_MAX 256
#endif // LOGIN_NAME_MAX

// ********************************************
// ***  The maximum number of open message  ***
// *** queue descriptors a process may hold ***
// ********************************************

#ifndef MQ_OPEN_MAX
#define MQ_OPEN_MAX 0
#endif // MQ_OPEN_MAX

// ************************************************
// *** The maximum number of message priorities ***
// ***    supported by the implementation       ***
// ************************************************

#ifndef MQ_PRIO_MAX
#define MQ_PRIO_MAX 0
#endif // MQ_PRIO_MAX 

// **************************************************
// *** A value one greater than the maximum value ***
// ***       that the system may assign           ***
// ***    to a newly-created file descriptor      ***
// **************************************************

#ifndef OPEN_MAX
#define OPEN_MAX 0
#endif // OPEN_MAX

// *******************************
// *** Size in bytes of a page ***
// *******************************

#ifndef PAGESIZE
#define PAGESIZE 0x1000
#endif // PAGESIZE

// ***************************************************
// ***         Equivalent to PAGESIZE.             ***
// *** If either PAGESIZE or PAGE_SIZE is defined, ***
// ***  the other is defined with the same value   ***
// ***************************************************

#ifndef PAGE_SIZE
#define PAGE_SIZE PAGESIZE
#endif // PAGE_SIZE

// *************************************************************
// *** Maximum number of attempts made to destroy a thread's ***
// ***    thread-specific data values on thread exit         ***
// *************************************************************

#ifndef PTHREAD_DESTRUCTOR_ITERATIONS
#define PTHREAD_DESTRUCTOR_ITERATIONS 0
#endif // PTHREAD_DESTRUCTOR_ITERATIONS

// ****************************************
// ***   Maximum number of data keys    ***
// *** that can be created by a process ***
// ****************************************

#ifndef PTHREAD_KEYS_MAX
#define PTHREAD_KEYS_MAX 0
#endif // PTHREAD_KEYS_MAX

// *****************************************************
// *** Minimum size in bytes of thread stack storage ***
// *****************************************************

#ifndef PTHREAD_STACK_MIN
#define PTHREAD_STACK_MIN 0
#endif // PTHREAD_STACK_MIN

// ***************************************
// ***   Maximum number of threads     ***
// *** that can be created per process ***
// ***************************************

#ifndef PTHREAD_THREADS_MAX
#define PTHREAD_THREADS_MAX 0
#endif // PTHREAD_THREADS_MAX

// ***************************************************
// *** Maximum number of realtime signals reserved ***
// *** for application use in this implementation  ***
// ***************************************************

#ifndef RTSIG_MAX
#define RTSIG_MAX 0
#endif // RTSIG_MAX

// ************************************
// *** Maximum number of semaphores ***
// ***  that a process may have     ***
// ************************************

#ifndef SEM_NSEMS_MAX
#define SEM_NSEMS_MAX 0
#endif // SEM_NSEMS_MAX

// **********************************************
// *** The maximum value a semaphore may have ***
// **********************************************

#ifndef SEM_VALUE_MAX
#define SEM_VALUE_MAX 0
#endif // SEM_VALUE_MAX

// ************************************************
// ***    Maximum number of queued signals      ***
// *** that a process may send and have pending ***
// ***    at the receiver(s) at any time        ***
// ************************************************

#ifndef SIGQUEUE_MAX
#define SIGQUEUE_MAX 0
#endif // SIGQUEUE_MAX

// ******************************************************
// *** The maximum number of replenishment operations ***
// ***      that may be simultaneously pending        ***
// ***   for a particular sporadic server scheduler   ***
// ******************************************************

#ifndef SS_REPL_MAX
#define SS_REPL_MAX 0
#endif // SS_REPL_MAX

// *****************************************************************************
// *** Maximum number of streams that one process can have open at one time. ***
// ***  If defined, it has the same value as {FOPEN_MAX} (see <stdio.h>)     ***
// *****************************************************************************

#ifndef STREAM_MAX
#define STREAM_MAX 0
#endif // STREAM_MAX

// ***********************************************************************
// *** Maximum number of symbolic links that can be reliably traversed ***
// ***   in the resolution of a pathname in the absence of a loop      ***
// ***********************************************************************

#ifndef SYMLOOP_MAX
#define SYMLOOP_MAX 0
#endif // SYMLOOP_MAX

// ********************************************
// *** Maximum number of timers per process ***
// ***  supported by the implementation     ***
// ********************************************

#ifndef TIMER_MAX
#define TIMER_MAX 0
#endif // TIMER_MAX

// **********************************************
// *** Maximum length of terminal device name ***
// **********************************************

#ifndef TTY_NAME_MAX
#define TTY_NAME_MAX 0
#endif // TTY_NAME_MAX

// ***********************************************************
// ***       Maximum number of bytes supported             ***
// *** for the name of a timezone (not of the TZ variable) ***
// ***********************************************************

#ifndef TZNAME_MAX
#define TZNAME_MAX 0
#endif // TZNAME_MAX

/**
 * Pathname Variable Values
 * */

// ***************************************************
// *** Minimum number of bits needed to represent, ***
// ***       as a signed integer value,            ***
// ***    the maximum size of a regular file       ***
// ***    allowed in the specified directory       ***
// ***************************************************

#ifndef FILESIZEBITS
#define FILESIZEBITS 32
#endif // FILESIZEBITS

// ************************************************
// *** Maximum number of links to a single file ***
// ************************************************

#ifndef LINK_MAX
#define LINK_MAX 0
#endif // LINK_MAX

#ifdef __cplusplus
}
#endif

#endif // _STDLIB_H