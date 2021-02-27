#pragma once 

#include "UnitConverter.h"

/*
centimeters/minute
centimeters/second
feet/hour
feet/minute
feet/second
inches/minute
inches/second
kilometers/hour
kilometers/second
knots
Mach number (ISA/Sea level)
meters/hour
meters/minute
meters/second [m/s]
miles/hour
miles/minute
miles/second
nautical miles/hour
Nm/24hr (Volvo Ocean Race)
speed of light
yards/hour
yards/minute
yards/second
*/

// Number of elements in the array
#define SPEED_ARRAY_SIZE 23

double SpeedUnits[] = {};

std::string SpeedUnitsName[] = {
    "1. centimeters/minute              ",
    "2. centimeters/second              ",
    "3. feet/hour                       ",
    "4. feet/minute                     ",
    "5. feet/second                     ",
    "6. inches/minute                   ",
    "7. inches/second                   ",
    "8. kilometers/hour                 ",
    "9. kilometers/second               ",
    "10. knots                          ",
    "11. Mach number (ISA/Sea level)    ",
    "12. meters/hour                    ",
    "13. meters/minute                  ",
    "14. meters/second [m/s]            ",
    "15. miles/hour                     ",
    "16. miles/minute                   ",
    "17. miles/second                   ",
    "18. nautical miles/hour            ",
    "19. Nm/24hr (Volvo Ocean Race)     ",
    "20. speed of light                 ",
    "21. yards/hour                     ",
    "22. yards/minute                   ",
    "23. yards/second                   "
};

void SpeedConverter(int Answer, double num);
void SpeedConverterInterface();
