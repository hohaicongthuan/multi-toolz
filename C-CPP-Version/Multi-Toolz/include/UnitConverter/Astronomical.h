#pragma once 

#include "UnitConverter.h"

/*
astronomical unit [1996]
kilometer
light second
light minute
light hour
light day
light year [Julian]
light year [tropical]
light year [traditional]
parsec
meter
mile
*/

// Number of elements in the array
#define ASTRONOMICAL_ARRAY_SIZE 12

extern double AstronomicalUnits[];
extern std::string AstronomicalUnitsName[];

void AstronomicalConverter(int Answer, double num);
void AstronomicalConverterInterface();