#pragma once 

#include "UnitConverter.h"

/*
Btu/hour
Btu/minute
Btu/second
calories(th)/hour
calories(th)/minute
calories(th)/second
foot pounds-force/minute
foot pounds-force/second
gigawatts [GW]
horsepowers (electric)
horsepowers (international)
horsepowers (water)
horsepowers (metric)
watts [W]
joules/hour
joules/minute
joules/second
kilocalories(th)/hour
kilocalories(th)/minute
kilogram-force meters/hour
kilogram-force meters/minute
kilowatts [kW]
megawatts [MW]
*/

// Number of elements in the array
#define POWER_ARRAY_SIZE 23

double PowerUnits[] = {};

std::string PowerUnitsName[] = {
    "1. Btu/hour                        ",
    "2. Btu/minute                      ",
    "3. Btu/second                      ",
    "4. calories(th)/hour               ",
    "5. calories(th)/minute             ",
    "6. calories(th)/second             ",
    "7. foot pounds-force/minute        ",
    "8. foot pounds-force/second        ",
    "9. gigawatts [GW]                  ",
    "10. horsepowers (electric)         ",
    "11. horsepowers (international)    ",
    "12. horsepowers (water)            ",
    "13. horsepowers (metric)           ",
    "14. watts [W]                      ",
    "15. joules/hour                    ",
    "16. joules/minute                  ",
    "17. joules/second                  ",
    "18. kilocalories(th)/hour          ",
    "19. kilocalories(th)/minute        ",
    "20. kilogram-force meters/hour     ",
    "21. kilogram-force meters/minute   ",
    "22. kilowatts [kW]                 ",
    "23. megawatts [MW]                 "
};

void PowerConverter(int Answer, double num);
void PowerConverterInterface();
