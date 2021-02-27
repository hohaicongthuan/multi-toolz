#include "../../include/UnitConverter/Time.h"

double TimeUnits[] = {
    1,
    36500,
    10,
    3.1536e+24,
    2607.1428571429,
    876000,
    3.1536e+15,
    0.1,
    3.1536e+12,
    5.256e+7,
    1200,
    1236.0065015974,
    3.1536e+18,
    3.1536e+21,
    400,
    3.1536e+9,
    3.1536e+17,
    5214.2857142857,
    100,
    99.9336057551,
    99.9315537303,
    99.7267759563,
    99.9336905739
};

std::string TimeUnitsName[] = {
    "1. centuries                   ",
    "2. days [d]                    ",
    "3. decades                     ",
    "4. femtoseconds [fs]           ",
    "5. fortnightshours [h]         ",
    "6. microseconds [μs]           ",
    "7. millenia                    ",
    "8. milliseconds [ms]           ",
    "9. minutes [min]               ",
    "10. months (Common)            ",
    "11. months (Synodic)           ",
    "12. nanoseconds [ns]           ",
    "13. picoseconds [ps]           ",
    "14. quarters (Common)          ",
    "15. seconds [s]                ",
    "16. shakes                     ",
    "17. weeks                      ",
    "18. years (Common) [y]         ",
    "19. years (Average Gregorian)  ",
    "20. years (Julian)             ",
    "21. years (Leap)               ",
    "22. years (Tropical)           "
};

void TimeConverter(int Answer, double num) {
	
	// Temporarily convert to an intermediary unit
	double Intermediary = num / TimeUnits[Answer - 1];

	// Loops to calculate and print the results for all units
	for (int i = 0; i < TIME_ARRAY_SIZE; i++) {
		std::cout   << TimeUnitsName[i] << ">\t" 
                    // << std::fixed << std::setprecision(10)
                    << Intermediary * TimeUnits[i]
                    << std::endl;
	}
}