#pragma once 

#include "UnitConverter.h"

/*
carats (metric)
cental
Earth masses
grains
grams
hundredweights
kilograms [kg]
ounces (US & UK)
ounces (troy, precious metals)
pounds [lbs] (US & UK)
pounds (troy, precious metals)
Solar masses
slugs (g-pounds)
stones
tons (UK or long)
tons (US or short)
tonnes
*/

// Number of elements in the array
#define MASS_ARRAY_SIZE 17

extern double MassUnits[];
extern std::string MassUnitsName[];

void MassConverter(int Answer, double num);
void MassConverterInterface();
