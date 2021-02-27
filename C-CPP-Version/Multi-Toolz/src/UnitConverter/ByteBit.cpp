#include "../../include/UnitConverter/ByteBit.h"

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
	"1. Bits			",
	"2. Bytes			",
	"3. Kilobits (Kb)	",
	"4. Kilobytes (KB)	",
	"5. Megabits (Mb)	",
	"6. Megabytes (MB)	",
	"7. Gigabits (Gb)	",
	"8. Gigabytes (GB)	",
	"9. Terabits (Tb)	",
	"10. Terabytes (TB)	",
	"11. Petabits (Pb)	",
	"12. Petabytes (PB)	",
	"13. Exabits (Eb)	",
	"14. Exabytes (EB)	"
};

void ByteBitConverter(int Answer, double num) {

	// Temporarily convert to Bit
	// Angstorm unit plays an intermediary role in converting
	// back and forth between units
	double ConvertToBit = num / ByteBitUnits[Answer - 1];

	// Loops to calculate and print the results for all units
	for (int i = 0; i < BYTEBIT_ARRAY_SIZE; i++) {
		std::cout << ByteBitUnitsName[i] << ">\t"
			// << std::fixed << std::setprecision(10)
			<< ConvertToBit * ByteBitUnits[i]
			<< std::endl;
	}
}