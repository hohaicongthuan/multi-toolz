#pragma once 

#include "UnitConverter.h"

/*
barrel (petroleum) (bbl, bo)
bushel (UK) (bu)
bushel (US dry) (bu)
centiliter (cl)
cubic centimeter (cc, cm^3)
cubic decimeter (dm^3)
cubic foot (ft^3, cu ft)
cubic inch (in^3, cu in)
cubic meter (m^3)
cubic millimeter (mm^3)
cubic yard (yd^3)
dekaliter (dal)
fluid dram (fl dr)
fluid ounce (fl oz)
fluid ounce (UK) (fl oz)
gallon (fluid) (gal)
gallon (UK) (gal)
gill (gi)
hectoliter (hl)
liter (l)
microliter (μl)
milliliter (ml)
minim (min)
peck (US dry) (pk)
pint (fluid) (pt)
pint (UK) (pt)
pint (US dry) (pt)
quart (fluid) (qt)
quart (UK) (qt)
quart (US dry) (qt)
*/

// Number of elements in the array
#define VOLUME_ARRAY_SIZE 30

double VolumeUnits[] = {};

std::string VolumeUnitsName[] = {
    "1. barrel (petroleum) (bbl, bo)    ",
    "2. bushel (UK) (bu)                ",
    "3. bushel (US dry) (bu)            ",
    "4. centiliter (cl)                 ",
    "5. cubic centimeter (cc, cm^3)     ",
    "6. cubic decimeter (dm^3)          ",
    "7. cubic foot (ft^3, cu ft)        ",
    "8. cubic inch (in^3, cu in)        ",
    "9. cubic meter (m^3)               ",
    "10. cubic millimeter (mm^3)        ",
    "11. cubic yard (yd^3)              ",
    "12. dekaliter (dal)                ",
    "13. fluid dram (fl dr)             ",
    "14. fluid ounce (fl oz)            ",
    "15. fluid ounce (UK) (fl oz)       ",
    "16. gallon (fluid) (gal)           ",
    "17. gallon (UK) (gal)              ",
    "18. gill (gi)                      ",
    "19. hectoliter (hl)                ",
    "20. liter (l)                      ",
    "21. microliter (μl)                ",
    "22. milliliter (ml)                ",
    "23. minim (min)                    ",
    "24. peck (US dry) (pk)             ",
    "25. pint (fluid) (pt)              ",
    "26. pint (UK) (pt)                 ",
    "27. pint (US dry) (pt)             ",
    "28. quart (fluid) (qt)             ",
    "29. quart (UK) (qt)                ",
    "30. quart (US dry) (qt)            "
};

void VolumeConverter(int Answer, double num);
void VolumeConverterInterface();
