#pragma once

#include "UnitConverter.h"

/*
grains/gallon (UK)
grains/gallon (US)
grains/cubic foot
grains/cubic inch
grains/cubic yard
grams/cubic centimeters
grams/liter
grams/milliliters
kilograms/cubic meters
kilograms/liter
megagrams/cubic meter
milligrams/milliliter
milligrams/liter
ounces/cubic inch
ounces/gallon (UK)
ounces/gallon (US)
pounds/cubic inch
pounds/cubic foot
pounds/gallon (UK)
pounds/gallon (US)
slugs/cubic foot
tonnes/cubic centimeter
tonnes/cubic decimeter
tonnes/cubic meter
tonnes/cubic liter
tonnes/cubic milliliter
tons (UK)/cubic yard
tons (US)/cubic yard
*/

#define DENSITY_ARRAY_SIZE 28

extern double DensityUnits[];
extern std::string DensityUnitsName[];

void DensityConverter(int Answer, double num);
void DensityConverterInterface();