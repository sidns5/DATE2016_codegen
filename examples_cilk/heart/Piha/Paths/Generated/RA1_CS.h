#ifndef RA1_CS_H_
#define RA1_CS_H_

#include <stdint.h>
#include <stdlib.h>
#include <stdio.h>
#include "../../Generic/step.h"
#include "../States.h"


// Cell Data Struct
typedef struct {
	// State
	enum pathStates state;
	
	// Outputs
	double cell1_v_replay;
	double cell2_v_replay;
	
	// Inputs
	double cell1_v;
	unsigned char cell1_mode;
	double cell2_v;
	unsigned char cell2_mode;

	// Internal Variables
	unsigned int k;
	unsigned char from_cell;
	double cell1_v_delayed;
	unsigned char cell1_mode_delayed;
	unsigned char cell1_replay_latch;
	double cell2_v_delayed;
	unsigned char cell2_mode_delayed;
	unsigned char cell2_replay_latch;
	
	double cell1_v_buffer[(int) (20 / STEP_SIZE)];
	unsigned char cell1_mode_buffer[(int) (20 / STEP_SIZE)];
	unsigned int cell1_buffer_index;

	double cell2_v_buffer[(int) (20 / STEP_SIZE)];
	unsigned char cell2_mode_buffer[(int) (20 / STEP_SIZE)];
	unsigned int cell2_buffer_index;
} RA1_CS;

// Initialization function
void RA1_CSInit(RA1_CS* me);

// Execution function
void RA1_CSRun(RA1_CS* me);

#endif // RA1_CS_H_
