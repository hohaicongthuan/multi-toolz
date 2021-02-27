#include "../../include/UnitConverter/Speed.h"

void SpeedConverter(int Answer, double num) {
	
	// Temporarily convert to an intermediary unit
	double Intermediary = num / SpeedUnits[Answer - 1];

	// Loops to calculate and print the results for all units
	for (int i = 0; i < SPEED_ARRAY_SIZE; i++) {
		std::cout   << SpeedUnitsName[i] << ">\t" 
                    // << std::fixed << std::setprecision(10)
                    << Intermediary * SpeedUnits[i]
                    << std::endl;
	}
}