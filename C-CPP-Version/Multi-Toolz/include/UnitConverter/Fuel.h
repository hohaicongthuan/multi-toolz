#pragma once 

#include "UnitConverter.h"

/*
gallons (UK)/100 miles
gallons (US)/100 miles
kilometer/liter (km/l)
liters/100 kilometer
liters/meter
miles/gallon (UK) (mpg)
miles/gallon (US) (mpg)
*/

// Number of elements in the array
#define FUEL_ARRAY_SIZE 7

extern double FuelUnits[];
extern std::string FuelUnitsName[];

void FuelConverter(int Answer, double num);
void FuelConverterInterface();
