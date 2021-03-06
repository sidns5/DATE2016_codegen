#ifndef PLANT_H_
#define PLANT_H_

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

// Plant Data Struct
typedef struct {
	// State
	enum plantStates state;
	
	// Inputs
	char control;
	
	// Outputs
	double x;
} Plant;

// Initialization function
void PlantInit(Plant* me);

// Execution function
void PlantRun(Plant* me);

#endif // PLANT_H_
