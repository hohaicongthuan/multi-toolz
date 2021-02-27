#pragma once 

#include "UnitConverter.h"

/*
abampere [abA]
ampere [A]
biot [Bi]
centiampere
coulomb/second
EMU of current
ESU of current
franklin/second
gaussian electric current
gigaampere
gilbert [Gi]
kiloampere [kA]
megaampere
microampere
milliampere [mA]
milliamp
nanoampere
picoampere
siemens volt
statampere [stA]
teraampere
volt/ohm
watt/volt
weber/henry
*/

// Number of elements in the array
#define ELECTRIC_CURRENT_ARRAY_SIZE 24

extern double ElectricCurrentUnits[];
extern std::string ElectricCurrentUnitsName[];

void ElectricCurrentConverter(int Answer, double num);
void ElectricCurrentConverterInterface();
