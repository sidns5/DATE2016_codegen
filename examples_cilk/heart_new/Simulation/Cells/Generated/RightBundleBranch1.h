#ifndef RIGHTBUNDLEBRANCH1_H_
#define RIGHTBUNDLEBRANCH1_H_

#include <stdint.h>
#include <stdlib.h>
#include <stdio.h>
#include "../../Generic/step.h"
#include "../States.h"

// Cell Data Struct
typedef struct {
	// State
	enum cellStates state;
	
	// Outputs
	double v_x;
	double v_y;
	double v_z;
	double v;
	double theta;
	double v_O;
	double f_theta;
	
	// Inputs
	double v_i_0;
	double v_i_1;

	// Internal Variables
	double g;
	unsigned long pacing_count;
	unsigned long pacing_rate;
} RightBundleBranch1;

// Initialization function
void RightBundleBranch1Init(RightBundleBranch1* me);

// Execution function
void RightBundleBranch1Run(RightBundleBranch1* me);

#endif // RIGHTBUNDLEBRANCH1_H_
