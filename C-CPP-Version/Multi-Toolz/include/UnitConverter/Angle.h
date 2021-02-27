#pragma once 

#include "UnitConverter.h"

/*
arcminute
arcsecond
circle
degree
gon
grad
mil (Nato)
mil (Soviet Union)
mil (Sweden)
octant
quadrant
radian
revolution
sextant
sign
turn
*/

// Number of elements in the array
#define ANGLE_ARRAY_SIZE 16

extern double AngleUnits[];
extern std::string AngleUnitsName[];

void AngleConverter(int Answer, double num);
void AngleConverterInterface();