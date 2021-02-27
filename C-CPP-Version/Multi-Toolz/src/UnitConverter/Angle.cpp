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

void AngleConverterInterface() {
    int Answer = 0;
    double num = 0;

    do {
        std::cout << "UNIT CONVERTER > ANGLE" << std::endl;
        std::cout << "1. Arcminute\n";
		std::cout << "2. Arcsecond\n";
		std::cout << "3. Circle\n";
		std::cout << "4. Degree\n";
		std::cout << "5. Gon\n";
		std::cout << "6. Grad\n";
		std::cout << "7. Mil (Nato)\n";
		std::cout << "8. Mil (Soviet Union)\n";
		std::cout << "9. Mil (Sweden)\n";
		std::cout << "10. Octant\n";
		std::cout << "11. Quadrant\n";
		std::cout << "12. Radian\n";
		std::cout << "13. Revolution\n";
		std::cout << "14. Sextant\n";
		std::cout << "15. Sign\n";
		std::cout << "16. Turn\n";
        std::cout << "Which unit do you want to convert from?\nYour Choice: ";
        std::cin >> Answer;
    } while (Answer < 1 || Answer > 16);

    std::cout << "\nEnter the number : ";
    std::cin >> num;

    AngleConverter(Answer, num);
}
