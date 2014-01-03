/**
 * Experiment control
 */

#ifndef CONTROL_H_
#define CONTROL_H_

#include <stdint.h>

/* bits 1-3 occupied by other experiments */
#define LAUNCH_CONTROLLER_EXPT 0x8

#define EXPT_RUN_MASK (LAUNCH_CONTROLLER_EXPT)

#define N_CONTROLLER_PORTS		1
#define N_ADMISSION_CORES		1
#define N_COMM_CORES			1
#define N_LOG_CORES				0

/* how many nanoseconds before the timeslot to start processing it */
#define		PREALLOC_DURATION_NS	(5*1000*1000)

/* length of a timeslot in nanoseconds */
#define		TIMESLOT_LENGTH_NS		(1000*1000);

/* give the controller some time to initialize before starting allocation */
#define		INIT_MAX_TIME_NS		(20*1000*1000)

/**
 * Allocate queues to lcores
 */
int control_do_queue_allocation(void);

/**
 * Performs experiments
 */
void launch_cores(void);


#endif /* CONTROL_H_ */
