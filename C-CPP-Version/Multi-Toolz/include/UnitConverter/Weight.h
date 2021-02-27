#pragma once 

#include "UnitConverter.h"

/*
AtomicMassUnit (amu)
Carat (metric)
CentiGram
DekaGram
Dram (dr)
Grain (gr)
Gram (g)
HundredWeight (UK)
KiloGram (kg)
MicroGram (ug)
MiliGram (mg)
Newton (Earth)
Ounce (oz)
PennyWeight (dwt)
Pound (lb)
Quarter
Stone
Ton (UK, long)
Ton (US, short)
Tonne (t)
TroyOunce
*/

// Number of elements in the array
#define WEIGHT_ARRAY_SIZE 21

double WeightUnits[] = {};

std::string WeightUnitsName[] = {
    "1. AtomicMassUnit (amu)    ",
    "2. Carat (metric)          ",
    "3. CentiGram               ",
    "4. DekaGram                ",
    "5. Dram (dr)               ",
    "6. Grain (gr)              ",
    "7. Gram (g)                ",
    "8. HundredWeight (UK)      ",
    "9. KiloGram (kg)           ",
    "10. MicroGram (ug)         ",
    "11. MiliGram (mg)          ",
    "12. Newton (Earth)         ",
    "13. Ounce (oz)             ",
    "14. PennyWeight (dwt)      ",
    "15. Pound (lb)             ",
    "16. Quarter                ",
    "17. Stone                  ",
    "18. Ton (UK, long)         ",
    "19. Ton (US, short)        ",
    "20. Tonne (t)              ",
    "21. TroyOunce              "
};

void WeightConverter(int Answer, double num);
void WeightConverterInterface();
