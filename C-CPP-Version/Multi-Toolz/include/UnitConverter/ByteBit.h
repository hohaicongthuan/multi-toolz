#pragma once 

#include <string>
#include <iostream>
#include <iomanip>

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

double ByteBitUnits[] = {
	1,
	0.125,
	0.0009765625,
	0.0001220703125,
	9.5367431640625e-7,
	1.1920928955078125e-7,
	9.313225746154785e-10,
	1.1641532182693481e-10,
	9.094947017729282e-13,
	1.1368683772161603e-13,
	8.881784197001252e-16,
	1.1102230246251565e-16,
	8.673617379884035e-19,
	1.0842021724855044e-19
};

std::string ByteBitUnitsName[] = {
	"Bits			",
	"Bytes			",
	"Kilobits (Kb)	",
	"Kilobytes (KB)	",
	"Megabits (Mb)	",
	"Megabytes (MB)	",
	"Gigabits (Gb)	",
	"Gigabytes (GB)	",
	"Terabits (Tb)	",
	"Terabytes (TB)	",
	"Petabits (Pb)	",
	"Petabytes (PB)	",
	"Exabits (Eb)	",
	"Exabytes (EB)	"
};