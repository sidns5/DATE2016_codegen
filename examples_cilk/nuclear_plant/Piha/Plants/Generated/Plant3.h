#ifndef PLANT3_H_
#define PLANT3_H_

#include <stdint.h>
#include <stdlib.h>
#include <stdio.h>
#include "../../Generic/step.h"
#include "../States.h"

#define NONE 0
#define ADD1 1
#define REMOVE1 2
#define ADD2 3
#define REMOVE2 4

// Plant3 Data Struct
typedef struct {
	// State
	enum plantStates state;
	
	// Inputs
	char control;
	
	// Outputs
	double x;
} Plant3;

// Initialization function
void Plant3Init(Plant3* me);

// Execution function
void Plant3Run(Plant3* me);

#endif // PLANT3_H_
