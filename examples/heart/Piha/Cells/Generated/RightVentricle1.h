#ifndef RIGHTVENTRICLE1_H_
#define RIGHTVENTRICLE1_H_

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

	// Internal Variables
	double g;
} RightVentricle1;

// Initialization function
void RightVentricle1Init(RightVentricle1* me);

// Execution function
void RightVentricle1Run(RightVentricle1* me);

#endif // RIGHTVENTRICLE1_H_
