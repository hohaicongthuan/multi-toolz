#pragma once 

#include "UnitConverter.h"

/*===================================================================
angstrom
astronomical unit (au)
centimetre (cm)
chain
decimetre (dm)
fathom
foot (ft)
furlong
inch (in)
kilometre (km)
league
light year
metre (m)
mile (mi)
milimetre (mm)
micrometre (um)
nanometre (nm)
picometre (pm)
nautical mile
parsec
rod
yard (yd)
===================================================================*/

// Number of elements in the array
#define LENGTH_ARRAY_SIZE 22

extern std::string LengthUnitsName[];
extern double LengthUnits[];
extern struct LengthUnitsResult;

void LengthConverter(int Answer, double num);
void LengthConverterInterface();

/*
double FromAngstrom(double x);
double FromAstronomicalUnit(double x);
double FromCentimetre(double x);
double FromChain(double x);
double FromDecimetre(double x);
double FromFathom(double x);
double FromFoot(double x);
double FromFurlong(double x);
double FromInch(double x);
double FromKilometre(double x);
double FromLeague(double x);
double FromLightYear(double x);
double FromMetre(double x);
double FromMile(double x);
double FromMilimetre(double x);
double FromMicrometre(double x);
double FromNanometre(double x);
double FromPicometre(double x);
double FromNautical(double x);
double FromParsec(double x);
double FromRod(double x);
double FromYard(double x);
*/