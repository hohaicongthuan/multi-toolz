#include "../../include/UnitConverter/Fuel.h"

double FuelUnits[] = {
    1,
    1.2009499255,
    35.4006189935,
    2.8248093633,
    0.0000282481,
    100,
    83.2674184629
};

std::string FuelUnitsName[] = {
    "1. gallons (UK)/100 miles  ",
    "2. gallons (US)/100 miles  ",
    "3. kilometer/liter (km/l)  ",
    "4. liters/100 kilometer    ",
    "5. liters/meter            ",
    "6. miles/gallon (UK) (mpg) ",
    "7. miles/gallon (US) (mpg) ",
};

void FuelConverter(int Answer, double num) {
	
	// Temporarily convert to an intermediary unit
	double Intermediary = num / FuelUnits[Answer - 1];

	// Loops to calculate and print the results for all units
	for (int i = 0; i < FUEL_ARRAY_SIZE; i++) {
		std::cout   << FuelUnitsName[i] << ">\t" 
                    // << std::fixed << std::setprecision(10)
                    << Intermediary * FuelUnits[i]
                    << std::endl;
	}
}