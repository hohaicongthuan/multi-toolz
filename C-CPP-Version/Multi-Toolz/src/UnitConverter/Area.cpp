#include "../../include/UnitConverter/Area.h"

double AreaUnits[] = {
	1,
	40.468564224,
	4.0468564224e+31,
	0.40468564224,
	0.00625,
	4,
	40468564.224,
	43560,
	6272640,
	0.0040468564224,
	4046.8564224,
	0.0015625,
	4046856422.4,
	160,
	4840,
	0.00004340277777778
};

std::string AreaUnitsName[] = {
	"1. Acreare (a)					",
	"2. Barn (b)					",
	"3. Hectare (ha)				",
	"4. Homestead					",
	"5. Rood						",
	"6. Square centimeter (cm^2)	",
	"7. Square foot (ft^2)			",
	"8. Square inch (in^2)			",
	"9. Square kilometer (km^2)		",
	"10. Square meter (m^2)			",
	"11. Square mile				",
	"12. Square millimeter (mm^2)	",
	"13. Square rod					",
	"14. Square yard (yd^2)			",
	"15. Township (twp)				",
};

void AreaConverter(int Answer, double num) {
	
	// Temporarily convert to Acreare
	// Acreare unit plays an intermediary role in converting
	// back and forth between units
	double ConvertToAcreare = num / AreaUnits[Answer - 1];

	// Loops to calculate and print the results for all units
	for (int i = 0; i < AREA_ARRAY_SIZE; i++) {
		std::cout << AreaUnitsName[i] << ">\t"
			// << std::fixed << std::setprecision(10)
			<< ConvertToAcreare * AreaUnits[i]
			<< std::endl;
	}
}