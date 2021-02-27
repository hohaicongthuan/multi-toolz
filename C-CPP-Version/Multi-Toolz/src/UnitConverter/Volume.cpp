#include "../../include/UnitConverter/Volume.h"

void VolumeConverter(int Answer, double num) {
	
	// Temporarily convert to an intermediary unit
	double Intermediary = num / VolumeUnits[Answer - 1];

	// Loops to calculate and print the results for all units
	for (int i = 0; i < VOLUME_ARRAY_SIZE; i++) {
		std::cout   << VolumeUnitsName[i] << ">\t" 
                    // << std::fixed << std::setprecision(10)
                    << Intermediary * VolumeUnits[i]
                    << std::endl;
	}
}