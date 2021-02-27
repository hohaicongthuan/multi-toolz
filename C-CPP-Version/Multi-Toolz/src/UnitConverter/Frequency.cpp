#include "../../include/UnitConverter/Frequency.h"

double FrequencyUnits[] = {
    1,
    1,
    1296000,
    21600,
    360,
    1e-9,
    1,
    0.001,
    0.000001,
    1000,
    22619.467,
    376.99112,
    6.2831853,
    3600,
    60,
    1,
    60,
    1e-12
};

std::string FrequencyUnitsName[] = {
    "1. 1/second            ",
    "2. cycle/second        ",
    "3. degree/hour         ",
    "4. degree/minute       ",
    "5. degree/second       ",
    "6. gigahertz           ",
    "7. hertz               ",
    "8. kilohertz           ",
    "9. megahertz           ",
    "10. millihertz         ",
    "11. radian/hour        ",
    "12. radian/minute      ",
    "13. radian/second      ",
    "14. revolution/hour    ",
    "15. revolution/minute  ",
    "16. revolution/second  ",
    "17. RPM                ",
    "18. terrahertz         "
};

void FrequencyConverter(int Answer, double num) {
	
	// Temporarily convert to an intermediary unit
	double Intermediary = num / FrequencyUnits[Answer - 1];

	// Loops to calculate and print the results for all units
	for (int i = 0; i < FREQUENCY_ARRAY_SIZE; i++) {
		std::cout   << FrequencyUnitsName[i] << ">\t" 
                    // << std::fixed << std::setprecision(10)
                    << Intermediary * FrequencyUnits[i]
                    << std::endl;
	}
}