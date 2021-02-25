#include "../../include/main.h"
#include "../../include/UnitConverter/Angle.h"

double AngleUnits[] = {
	1,
	60,
	0.0000462963,
	0.0166666667,
	0.0185185185,
	0.0185185185,
	0.2962962963,
	0.2777777778,
	0.2916666667,
	0.0003703704,
	0.0001851852,
	0.0002908882,
	0.0000462963,
	0.0002777778,
	0.0005555556,
	0.0000462963
};

std::string AngleUnitsName[] = {
	"1. Arcminute			",
	"2. Arcsecond			",
	"3. Circle				",
	"4. Degree				",
	"5. Gon					",
	"6. Grad				",
	"7. Mil (Nato)			",
	"8. Mil (Soviet Union)	",
	"9. Mil (Sweden)		",
	"10. Octant				",
	"11. Quadrant			",
	"12. Radian				",
	"13. Revolution			",
	"14. Sextant			",
	"15. Sign				",
	"16. Turn				"
};

void AngleConverter(int Answer, double num) {

	// Temporarily convert to Arcminute
	// Arcminute unit plays an intermediary role in converting
	// back and forth between units
	double ConvertToArcminute = num / AngleUnits[Answer - 1];

	// Loops to calculate and print the results for all units
	for (int i = 0; i < ANGLE_ARRAY_SIZE; i++) {
		std::cout << AngleUnitsName[i] << ">\t"
			// << std::fixed << std::setprecision(10)
			<< ConvertToArcminute * AngleUnits[i]
			<< std::endl;
	}
}