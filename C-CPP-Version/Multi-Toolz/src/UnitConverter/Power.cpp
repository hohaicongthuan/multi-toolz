#include "../../include/UnitConverter/Power.h"

void PowerConverter(int Answer, double num) {
	
	// Temporarily convert to an intermediary unit
	double Intermediary = num / PowerUnits[Answer - 1];

	// Loops to calculate and print the results for all units
	for (int i = 0; i < POWER_ARRAY_SIZE; i++) {
		std::cout   << PowerUnitsName[i] << ">\t" 
                    // << std::fixed << std::setprecision(10)
                    << Intermediary * PowerUnits[i]
                    << std::endl;
	}
}