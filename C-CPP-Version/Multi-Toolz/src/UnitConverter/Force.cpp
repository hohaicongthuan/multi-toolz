#include "../../include/UnitConverter/Force.h"

double ForceUnits[] = {
    1,
    1e17,
    9.806649999787734e+15,
    1e18,
    9.806649999787735e+17,
    1e20,
    1e14,
    9.999999999999999e+35,
    1000,
    1e27,
    9.806649999787736e+16,
    1e21,
    1e19,
    9.806652048217347e+19,
    1e22,
    9.806652048217347e+19,
    4.448398576512456e+22,
    1e24,
    9.806649999787735e+22,
    1e13,
    1e16,
    1e10,
    1e19,
    2.780138500027353e+18,
    1e33,
    1e7,
    9.806649999787736e+16,
    4.448221600019032e+19,
    1.382549500008957e+18,
    1e22,
    1e30,
    9.964016383670325e+22,
    9.806649999787735e+22,
    8.896443199642329e+22,
    0.000001,
    1e42,
    0.001,
    1.0000000000000001e+39
};

std::string ForceUnitsName[] = {
    "1. attonewton",
    "2. centinewton",
    "3. decigram-force",
    "4. decinewton",
    "5. dekagram-force",
    "6. dekanewton",
    "7. dyne (dyn)",
    "8. exanewton",
    "9. femtonewton",
    "10. giganewton (GN)",
    "11. gram-force",
    "12. hectonewton",
    "13. joule/meter (J/m)",
    "14. kilogram-force (kgf)",
    "15. kilonewton (kN)",
    "16. kilopond (kp)",
    "17. kip (kip)",
    "18. meganewton",
    "19. megapond",
    "20. micronewton (μN)",
    "21. millinewton (mN)",
    "22. nanonewton (nN)",
    "23. newton (N)",
    "24. ounce-force (ozf)",
    "25. petanewton",
    "26. piconewton",
    "27. pond",
    "28. pound-force (lbf)",
    "29. poundal (pdl)",
    "30. sthene (sn)",
    "31. teranewtonton-force (long)(tnf)",
    "32. ton-force (metric)(tnf)",
    "33. ton-force (short)(tnf)",
    "34. yoctonewton",
    "35. yottanewton",
    "36. zeptonewton",
    "37. zettanewton"
};

void ForceConverter(int Answer, double num) {
	
	// Temporarily convert to an intermediary unit
	double Intermediary = num / ForceUnits[Answer - 1];

	// Loops to calculate and print the results for all units
	for (int i = 0; i < FORCE_ARRAY_SIZE; i++) {
		std::cout   << ForceUnitsName[i] << ">\t" 
                    // << std::fixed << std::setprecision(10)
                    << Intermediary * ForceUnits[i]
                    << std::endl;
	}
}