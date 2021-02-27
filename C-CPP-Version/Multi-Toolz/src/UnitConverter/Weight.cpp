#include "../../include/UnitConverter/Weight.h"

void WeightConverter(int Answer, double num) {
	
	// Temporarily convert to an intermediary unit
	double Intermediary = num / WeightUnits[Answer - 1];

	// Loops to calculate and print the results for all units
	for (int i = 0; i < WEIGHT_ARRAY_SIZE; i++) {
		std::cout   << WeightUnitsName[i] << ">\t" 
                    // << std::fixed << std::setprecision(10)
                    << Intermediary * WeightUnits[i]
                    << std::endl;
	}
}