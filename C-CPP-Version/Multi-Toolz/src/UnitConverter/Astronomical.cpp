#include "../../include/UnitConverter/Astronomical.h"

double AstronomicalUnits[] = {
	1,
	149597870.691,
	499.0047838061,
	8.3167463968,
	0.1386124399,
	0.0057755183,
	0.0000158125,
	0.0000158128,
	0.0000158233,
	0.0000048481,
	149597870691,
	92955807.26743318
};

std::string AstronomicalUnitsName[] = {
	"1. Astronomical unit[1996]	",
	"2. Kilometer					",
	"3. Light second				",
	"4. Light minute				",
	"5. Light hour					",
	"6. Light day					",
	"7. Light year [Julian]			",
	"8. Light year [tropical]		",
	"9. Light year [traditional]	",
	"10. Parsec						",
	"11. Meter						",
	"12. Mile						"
};

void AstronomicalConverter(int Answer, double num) {
	// Temporarily convert to AstronomicalUnit
	// AstronomicalUnit unit plays an intermediary role in converting
	// back and forth between units
	double ConvertToAstronomicalUnit = num / AstronomicalUnits[Answer - 1];

	// Loops to calculate and print the results for all units
	for (int i = 0; i < ASTRONOMICAL_ARRAY_SIZE; i++) {
		std::cout << AstronomicalUnitsName[i] << ">\t"
			// << std::fixed << std::setprecision(10)
			<< ConvertToAstronomicalUnit * AstronomicalUnits[i]
			<< std::endl;
	}
}