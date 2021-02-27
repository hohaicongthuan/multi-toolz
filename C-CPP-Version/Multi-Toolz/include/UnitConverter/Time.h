#pragma once 

#include "UnitConverter.h"

/*
centuries
days [d]
decades
femtoseconds [fs]
fortnightshours [h]
microseconds [μs]
millenia
milliseconds [ms]
minutes [min]
months (Common)
months (Synodic)
nanoseconds [ns]
picoseconds [ps]
quarters (Common)
seconds [s]
shakes
weeks
years (Common) [y]
years (Average Gregorian)
years (Julian)
years (Leap)
years (Tropical)
*/

// Number of elements in the array
#define TIME_ARRAY_SIZE 22

extern double TimeUnits[];
extern std::string TimeUnitsName[];

void TimeConverter(int Answer, double num);
void TimeConverterInterface();
