#include "../../include/UnitConverter/ElectricCurrent.h"

double ElectricCurrentUnits[] = {
	1,
	10,
	1,
	1000,
	10,
	1,
	29979245368.43144,
	29979245368.43144,
	29979245368.43144,
	1e-8,
	12.5663705427,
	0.01,
	0.00001,
	10000000,
	10000,
	10000,
	10000000000,
	10000000000000,
	10,
	29979245368.43144,
	1e-11,
	10,
	10,
	10
};

std::string ElectricCurrentUnitsName[] = {
	"1. abampere [abA]				",
	"2. ampere [A]					",
	"3. biot [Bi]					",
	"4. centiampere					",
	"5. coulomb/second				",
	"6. EMU of current				",
	"7. ESU of current				",
	"8. franklin/second				",
	"9. gaussian electric current	",
	"10. gigaampere					",
	"11. gilbert [Gi]				",
	"12. kiloampere [kA]			",
	"13. megaampere					",
	"14. microampere				",
	"15. milliampere [mA]			",
	"16. milliamp					",
	"17. nanoampere					",
	"18. picoampere					",
	"19. siemens volt				",
	"20. statampere [stA]			",
	"21. teraampere					",
	"22. volt/ohm					",
	"23. watt/volt					",
	"24. weber/henry				"
};

void ElectricCurrentConverter(int Answer, double num) {
	
	// Temporarily convert to an intermediary unit
	double Intermediary = num / ElectricCurrentUnits[Answer - 1];

	// Loops to calculate and print the results for all units
	for (int i = 0; i < ELECTRIC_CURRENT_ARRAY_SIZE; i++) {
		std::cout   << ElectricCurrentUnitsName[i] << ">\t" 
                    // << std::fixed << std::setprecision(10)
                    << Intermediary * ElectricCurrentUnits[i]
                    << std::endl;
	}
}