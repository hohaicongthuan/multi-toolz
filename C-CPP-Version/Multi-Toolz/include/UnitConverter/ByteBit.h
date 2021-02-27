#pragma once 

#include "UnitConverter.h"

/*
bits
bytes
kilobits (Kb)
kilobytes (KB)
megabits (Mb)
megabytes (MB)
gigabits (Gb)
gigabytes (GB)
terabits (Tb)
terabytes (TB)
petabits (Pb)
petabytes (PB)
exabits (Eb)
exabytes (EB)
*/

// Number of elements in the array
#define BYTEBIT_ARRAY_SIZE 14

extern double ByteBitUnits[];
extern std::string ByteBitUnitsName[];

void ByteBitConverter(int Answer, double num);
void ByteBitConverterInterface();