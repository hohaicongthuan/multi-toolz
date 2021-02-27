#pragma once 

#include "UnitConverter.h"

/*
attonewton
centinewton
decigram-force
decinewton
dekagram-force
dekanewton
dyne (dyn)
exanewton
femtonewton
giganewton (GN)
gram-force
hectonewton
joule/meter (J/m)
kilogram-force (kgf)
kilonewton (kN)
kilopond (kp)
kip (kip)
meganewton
megapond
micronewton (μN)
millinewton (mN)
nanonewton (nN)
newton (N)
ounce-force (ozf)
petanewton
piconewton
pond
pound-force (lbf)
poundal (pdl)
sthene (sn)
teranewtonton-force (long)(tnf)
ton-force (metric)(tnf)
ton-force (short)(tnf)
yoctonewton
yottanewton
zeptonewton
zettanewton
*/

// Number of elements in the array
#define FORCE_ARRAY_SIZE 37

extern double ForceUnits[];
extern std::string ForceUnitsName[];

void ForceConverter(int Answer, double num);
void ForceConverterInterface();
