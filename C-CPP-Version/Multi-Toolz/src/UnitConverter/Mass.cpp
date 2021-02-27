#include "../../include/UnitConverter/Mass.h"

double MassUnits[] = {
    1,
    0.000004409245243697552,
    3.34448160535117e-29,
    3.0864716705882866,
    0.2,
    0.000003936826110444243,
    0.0002,
    0.007054792389916083,
    0.006430149313725596,
    0.00044092452436975517,
    0.0005358457761437997,
    1.0055304172951233e-34,
    0.00001370435311239221,
    0.00003149460888355394,
    1.9684130552221215e-7,
    2.2046226218487757e-7,
    2.0000000000000002e-7
};

std::string MassUnitsName[] = {
    "1. carats (metric)                 ",
    "2. cental                          ",
    "3. Earth masses                    ",
    "4. grains                          ",
    "5. grams                           ",
    "6. hundredweights                  ",
    "7. kilograms [kg]                  ",
    "8. ounces (US & UK)                ",
    "9. ounces (troy, precious metals)  ",
    "10. pounds [lbs] (US & UK)         ",
    "11. pounds (troy, precious metals) ",
    "12. Solar masses                   ",
    "13. slugs (g-pounds)               ",
    "14. stones                         ",
    "15. tons (UK or long)              ",
    "16. tons (US or short)             ",
    "17. tonnes                         "
};

void MassConverter(int Answer, double num) {
	
	// Temporarily convert to an intermediary unit
	double Intermediary = num / MassUnits[Answer - 1];

	// Loops to calculate and print the results for all units
	for (int i = 0; i < MASS_ARRAY_SIZE; i++) {
		std::cout   << MassUnitsName[i] << ">\t" 
                    // << std::fixed << std::setprecision(10)
                    << Intermediary * MassUnits[i]
                    << std::endl;
	}
}