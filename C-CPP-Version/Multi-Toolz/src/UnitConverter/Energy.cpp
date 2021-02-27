#include "../../include/UnitConverter/Energy.h"

double EnergyUnits[] = {
    1,
    0.9985604288,
    251.8271711092,
    251.9956978967,
    251.6336437535,
    251.8873333652,
    252.1222410866,
    0.2518752986,
    0.5548042517,
    6.580680193984484e21,
    10543500000,
    777.6486520905,
    25020.1708590413,
    0.0000010543,
    0.0003927518,
    9331.7838250858,
    1054.35,
    0.2518271711,
    0.2519956979,
    107.5137789153,
    1.05435,
    0.000292875,
    0.00105435,
    1054.35,
    0.0000099933,
    1054.35,
    0.292875
};

std::string EnergyUnitsName[] = {
    "1. Btu (th)                    ",
    "2. Btu (mean)                  ",
    "3. calories (IT)               ",
    "4. calories (th)               ",
    "5. calories (mean)             ",
    "6. calories (15C)              ",
    "7. calories (20C)              ",
    "8. calories (food)             ",
    "9. centigrade heat units       ",
    "10. electron volts [eV]        ",
    "11. ergs                       ",
    "12. foot-pound force [ft lbf]  ",
    "13. foot poundals              ",
    "14. gigajoules [GJ]            ",
    "15. horsepower hours           ",
    "16. inch-pound force [in lbf]  ",
    "17. joules [J]                 ",
    "18. kilocalories (IT)          ",
    "19. kilocalories (th)          ",
    "20. kilogram-force meters      ",
    "21. kilojoules [kJ]            ",
    "22. kilowatt hours [kWh]       ",
    "23. megajoules [MJ]            ",
    "24. newton meters [Nm]         ",
    "25. therms                     ",
    "26. watt seconds [Ws]          ",
    "27. watt hours [Wh]            "
};

void EnergyConverter(int Answer, double num) {
	
	// Temporarily convert to an intermediary unit
	double Intermediary = num / EnergyUnits[Answer - 1];

	// Loops to calculate and print the results for all units
	for (int i = 0; i < ENERGY_ARRAY_SIZE; i++) {
		std::cout   << EnergyUnitsName[i] << ">\t" 
                    // << std::fixed << std::setprecision(10)
                    << Intermediary * EnergyUnits[i]
                    << std::endl;
	}
}