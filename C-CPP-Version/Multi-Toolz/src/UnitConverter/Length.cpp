#include "../../include/UnitConverter/Length.h"

std::string LengthUnitsName[] = {
    "Angstrom           ",
    "Astronomical Unit  ",
    "CentiMetre         ",
    "Chain              ",
    "DeciMetre          ",
    "Fathom             ",
    "Foot               ",
    "Furlong            ",
    "Inch               ",
    "KiloMetre          ",
    "League             ",
    "LightYear          ",
    "Metre              ",
    "Mile               ",
    "MiliMetre          ",
    "MicroMetre         ",
    "NanoMetre          ",
    "PicoMetre          ",
    "Nautical           ",
    "Parsec             ",
    "Rod                ",
    "Yard               "
};

double LengthUnits[] = {
    1,
    6.68458712267e-22,
    1e-8,
    4.970969537899e-12,
    1e-9,
    5.468066491689e-11,
    3.280839895013e-10,
    4.970969537899e-13,
    3.937007874016e-9,
    1e-13,
    2.071237307458e-14,
    1.057000834025e-26,
    1e-10,
    6.213711922373e-14,
    1e-7,
    0.0001,
    0.1,
    100,
    5.399568034557e-14,
    3.240779289639e-27,
    1.988387815159e-11,
    1.093613298338e-10
};

struct LengthUnitsResult {
    double   Angstrom = 1;
    double   AstronomicalUnit = 6.68458712267e-22;
    double   CentiMetre = 1e-8;
    double   Chain = 4.970969537899e-12;
    double   DeciMetre = 1e-9;
    double   Fathom = 5.468066491689e-11;
    double   Foot = 3.280839895013e-10;
    double   Furlong = 4.970969537899e-13;
    double   Inch = 3.937007874016e-9;
    double   KiloMetre = 1e-13;
    double   League = 2.071237307458e-14;
    double   LightYear = 1.057000834025e-26;
    double   Metre = 1e-10;
    double   Mile = 6.213711922373e-14;
    double   MiliMetre = 1e-7;
    double   MicroMetre = 0.0001;
    double   NanoMetre = 0.1;
    double   PicoMetre = 100;
    double   Nautical = 5.399568034557e-14;
    double   Parsec = 3.240779289639e-27;
    double   Rod = 1.988387815159e-11;
    double   Yard = 1.093613298338e-10;
};

void LengthConverter(int Answer, double num) {
	
	// Temporarily convert to Angstrom
	// Angstorm unit plays an intermediary role in converting
	// back and forth between units
	double ConvertToAngstrom = num / LengthUnits[Answer - 1];

	// Loops to calculate and print the results for all units
	for (int i = 0; i < LENGTH_ARRAY_SIZE; i++) {
		std::cout   << LengthUnitsName[i] << ">\t" 
                    // << std::fixed << std::setprecision(10)
                    << ConvertToAngstrom * LengthUnits[i]
                    << std::endl;
	}
}

void LengthConverterInterface() {
    int Answer = 0;
    double num = 0;

    do {
        std::cout << "UNIT CONVERTER > LENGTH" << std::endl;
        std::cout << "1. angstrom\n";
        std::cout << "2. astronomical unit (au)\n";
        std::cout << "3. centimetre (cm)\n";
        std::cout << "4. chain\n";
        std::cout << "5. decimetre (dm)\n";
        std::cout << "6. fathom\n";
        std::cout << "7. foot (ft)\n";
        std::cout << "8. furlong\n";
        std::cout << "9. inch (in)\n";
        std::cout << "10. kilometre (km)\n";
        std::cout << "11. league\n";
        std::cout << "12. light year\n";
        std::cout << "13. metre (m)\n";
        std::cout << "14. mile (mi)\n";
        std::cout << "15. milimetre (mm)\n";
        std::cout << "16. micrometre (um)\n";
        std::cout << "17. nanometre (nm)\n";
        std::cout << "18. picometre (pm)\n";
        std::cout << "19. nautical mile\n";
        std::cout << "20. parsec\n";
        std::cout << "21. rod\n";
        std::cout << "22. yard (yd)\n";
        std::cout << "Which unit do you want to convert from?\nYour Choice: ";
        std::cin >> Answer;
    } while (Answer < 1 || Answer > 22);

    std::cout << "\nEnter the number : ";
    std::cin >> num;

    LengthConverter(Answer, num);
    
    /*
    switch (Answer) {
    case 1:
        break;
    case 2:
        break;
    case 3:
        break;
    case 4:
        break;
    case 5:
        break;
    case 6:
        break;
    case 7:
        break;
    case 8:
        break;
    case 9:
        break;
    case 10:
        break;
    case 11:
        break;
    case 12:
        break;
    case 13:
        break;
    case 14:
        break;
    case 15:
        break;
    case 16:
        break;
    case 17:
        break;
    case 18:
        break;
    case 19:
        break;
    case 20:
        break;
    case 21:
        break;
    case 22:
        break;
    }
    */
}
