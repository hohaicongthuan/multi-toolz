#pragma once 

#include <string>
#include <iostream>
#include <iomanip>

/*
acreare (a)
barn (b)
hectare (ha)
homestead
rood
square centimeter (cm^2)
square foot (ft^2)
square inch (in^2)
square kilometer (km^2)
square meter (m^2)
square mile
square millimeter (mm^2)
square rod
square yard (yd^2)
township (twp)
*/

// Number of elements in the array
#define AREA_ARRAY_SIZE 15

extern double AreaUnits[];
extern std::string AreaUnitsName[];

void AreaConverter(int Answer, double num);