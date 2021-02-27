#include "../../include/UnitConverter/Temperature.h"

double TemperatureUnits[] = {
    1,
    33.8,
    493.47,
    0.8,
    274.15
};

std::string TemperatureUnitsName[] = {
    "1. Celsius     ",
    "2. Fahrenheit  ",
    "3. Rankine     ",
    "4. Reaumur     ",
    "5. Kelvin      "
};

void TemperatureConverter(int Answer, double num) {
	
	// Temporarily convert to an intermediary unit
	double Intermediary = num / TemperatureUnits[Answer - 1];

	// Loops to calculate and print the results for all units
	for (int i = 0; i < TEMPERATURE_ARRAY_SIZE; i++) {
		std::cout   << TemperatureUnitsName[i] << ">\t" 
                    // << std::fixed << std::setprecision(10)
                    << Intermediary * TemperatureUnits[i]
                    << std::endl;
	}
}