#include "../../include/UnitConverter/Pressure.h"

void PressureConverter(int Answer, double num) {
	
	// Temporarily convert to an intermediary unit
	double Intermediary = num / PressureUnits[Answer - 1];

	// Loops to calculate and print the results for all units
	for (int i = 0; i < PRESSURE_ARRAY_SIZE; i++) {
		std::cout   << PressureUnitsName[i] << ">\t" 
                    // << std::fixed << std::setprecision(10)
                    << Intermediary * PressureUnits[i]
                    << std::endl;
	}
}