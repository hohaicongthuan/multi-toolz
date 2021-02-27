#pragma once 

#include "UnitConverter.h"

/*
atmospheres
bars
centimeters mercury
centimeters water
feet of water
hectopascals [hPa]
inches of water
inches of mercury
kilogram-forces/sq.centimeter
kilogram-forces/sq.meter
kilonewtons/sq.meter
kilonewtons/sq.millimeter
kilopascals [kPa]
kips/sq.inch
meganewtons/sq.meter
meganewtons/sq.millimeter
meters of water
millibars
millimeters of mercury
millimeters of water
newtons/sq.centimeter
newtons/sq.meter
newtons/sq.millimeter
pascals [Pa]
pounds-force/sq.foot
pounds-force/sq.inch [psi]
poundals/sq.foot
tons (UK)-force/sq.foot
tons (UK)-force/sq.inch
tons (US)-force/sq.foot
tons (US)-force/sq.inch
tonnes-force/sq.cm
tonnes-force/sq.meter
torr (mm Hg 0°C)
*/

// Number of elements in the array
#define PRESSURE_ARRAY_SIZE 34

double PressureUnits[] = {};

std::string PressureUnitsName[] = {
    "1. atmospheres                     ",
    "2. bars                            ",
    "3. centimeters mercury             ",
    "4. centimeters water               ",
    "5. feet of water                   ",
    "6. hectopascals [hPa]              ",
    "7. inches of water                 ",
    "8. inches of mercury               ",
    "9. kilogram-forces/sq.centimeter   ",
    "10. kilogram-forces/sq.meter       ",
    "11. kilonewtons/sq.meter           ",
    "12. kilonewtons/sq.millimeter      ",
    "13. kilopascals [kPa]              ",
    "14. kips/sq.inch                   ",
    "15. meganewtons/sq.meter           ",
    "16. meganewtons/sq.millimeter      ",
    "17. meters of water                ",
    "18. millibars                      ",
    "19. millimeters of mercury         ",
    "20. millimeters of water           ",
    "21. newtons/sq.centimeter          ",
    "22. newtons/sq.meter               ",
    "23. newtons/sq.millimeter          ",
    "24. pascals [Pa]                   ",
    "25. pounds-force/sq.foot           ",
    "26. pounds-force/sq.inch [psi]     ",
    "27. poundals/sq.foot               ",
    "28. tons (UK)-force/sq.foot        ",
    "29. tons (UK)-force/sq.inch        ",
    "30. tons (US)-force/sq.foot        ",
    "31. tons (US)-force/sq.inch        ",
    "32. tonnes-force/sq.cm             ",
    "33. tonnes-force/sq.meter          ",
    "34. torr (mm Hg 0°C)               "
};

void PressureConverter(int Answer, double num);
void PressureConverterInterface();
