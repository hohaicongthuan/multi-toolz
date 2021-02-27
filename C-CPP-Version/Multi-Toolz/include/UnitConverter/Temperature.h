#pragma once 

#include "UnitConverter.h"

/*
Celsius
Fahrenheit
Rankine
Reaumur
Kelvin
*/

// Number of elements in the array
#define TEMPERATURE_ARRAY_SIZE 5

extern double TemperatureUnits[];
extern std::string TemperatureUnitsName[];

void TemperatureConverter(int Answer, double num);
void TemperatureConverterInterface();
