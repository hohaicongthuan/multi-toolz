#pragma once 

#include "UnitConverter.h"

/*
1/second
cycle/second
degree/hour
degree/minute
degree/second
gigahertz
hertz
kilohertz
megahertz
millihertz
radian/hour
radian/minute
radian/second
revolution/hour
revolution/minute
revolution/second
RPM
terrahertz
*/

// Number of elements in the array
#define FREQUENCY_ARRAY_SIZE 18

extern double FrequencyUnits[];
extern std::string FrequencyUnitsName[];

void FrequencyConverter(int Answer, double num);
void FrequencyConverterInterface();
