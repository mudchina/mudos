#ifndef _SYS_TIMES_H
#define _SYS_TIMES_H

#include <devices/timer.h>

/*
 * handle field name differences in timeval structure
 */
#define tv_sec tv_secs
#define tv_usec tv_micro

#endif
