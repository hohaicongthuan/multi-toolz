#pragma once 

#include "UnitConverter.h"

/*
Btu (th)
Btu (mean)
calories (IT)
calories (th)
calories (mean)
calories (15C)
calories (20C)
calories (food)
centigrade heat units
electron volts [eV]
ergs
foot-pound force [ft lbf]
foot poundals
gigajoules [GJ]
horsepower hours
inch-pound force [in lbf]
joules [J]
kilocalories (IT)
kilocalories (th)
kilogram-force meters
kilojoules [kJ]
kilowatt hours [kWh]
megajoules [MJ]
newton meters [Nm]
therms
watt seconds [Ws]
watt hours [Wh]
*/

// Number of elements in the array
#define ENERGY_ARRAY_SIZE 27

extern double EnergyUnits[];
extern std::string EnergyUnitsName[];

void EnergyConverter(int Answer, double num);
void EnergyConverterInterface();
