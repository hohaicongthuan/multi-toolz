#include "../../include/UnitConverter/Density.h"

double DensityUnits[] = {
	1,
	0.8326871543417527,
	3.261804978752897e-11,
	5.636399003272625e-8,
	1.2080759180320554e-12,
	0.000014253948343691203,
	0.014253948343691203,
	0.000014253948343691203,
	0.014253948343691203,
	0.000014253948343691203,
	0.000014253948343691203,
	0.014253948343691203,
	14.253948343691205,
	0.000008239304865312706,
	0.002285743388645488,
	0.0019032793490759974,
	5.149565671792504e-7,
	0.0008898449460282927,
	0.00014285895463138554,
	0.00011895496428088608,
	0.000027660496248860184,
	1.4253948343691203,
	0.014253948343691203,
	0.000014253948343691203,
	0.014253948343691203,
	1.4253948343691203,
	0.000010725809363817511,
	0.000012012906486029297
};

std::string DensityUnitsName[] = {
	"1. Grains/gallon (UK)			",
	"2. Grains/gallon (US)			",
	"3. Grains/cubic foot			",
	"4. Grains/cubic inch			",
	"5. Grains/cubic yard			",
	"6. Grams/cubic centimeters	    ",
	"7. Grams/liter				    ",
	"8. Grams/milliliters			",
	"9. Kilograms/cubic meters		",
	"10. Kilograms/liter			",
	"11. Megagrams/cubic meter		",
	"12. Milligrams/milliliter		",
	"13. Milligrams/liter			",
	"14. Ounces/cubic inch			",
	"15. Ounces/gallon (UK)			",
	"16. Ounces/gallon (US)			",
	"17. Pounds/cubic inch			",
	"18. Pounds/cubic foot			",
	"19. Pounds/gallon (UK)			",
	"20. Pounds/gallon (US)			",
	"21. Slugs/cubic foot			",
	"22. Tonnes/cubic centimeter	",
	"23. Tonnes/cubic decimeter		",
	"24. Tonnes/cubic meter			",
	"25. Tonnes/cubic liter			",
	"26. Tonnes/cubic milliliter	",
	"27. Tons (UK)/cubic yard		",
	"28. Tons(US)/cubic yard		"
};

void DensityConverter(int Answer, double num) {
	double ConvertToGrGUK = num / DensityUnits[Answer - 1];

	// Loops to calculate and print the results for all units
	for (int i = 0; i < DENSITY_ARRAY_SIZE; i++) {
		std::cout   << DensityUnitsName[i] << ">\t" 
                    // << std::fixed << std::setprecision(10)
                    << ConvertToGrGUK * DensityUnits[i]
                    << std::endl;
	}
}