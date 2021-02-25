#pragma once

#include <string>
#include <iostream>
#include <iomanip>

/*
grains/gallon (UK)
grains/gallon (US)
grains/cubic foot
grains/cubic inch
grains/cubic yard
grams/cubic centimeters
grams/liter
grams/milliliters
kilograms/cubic meters
kilograms/liter
megagrams/cubic meter
milligrams/milliliter
milligrams/liter
ounces/cubic inch
ounces/gallon (UK)
ounces/gallon (US)
pounds/cubic inch
pounds/cubic foot
pounds/gallon (UK)
pounds/gallon (US)
slugs/cubic foot
tonnes/cubic centimeter
tonnes/cubic decimeter
tonnes/cubic meter
tonnes/cubic liter
tonnes/cubic milliliter
tons (UK)/cubic yard
tons (US)/cubic yard
*/

double DensityUnits[] = {
	1,
	0.8326871543417527,
	3.261804978752897e-11,
	5.636399003272625e-8,
	1.2080759180320554e-12,
	0.000014253948343691203,
	0.014253948343691203,
	0.000014253948343691203,
	0.014253948343691203,
	0.000014253948343691203,
	0.000014253948343691203,
	0.014253948343691203,
	14.253948343691205,
	0.000008239304865312706,
	0.002285743388645488,
	0.0019032793490759974,
	5.149565671792504e-7,
	0.0008898449460282927,
	0.00014285895463138554,
	0.00011895496428088608,
	0.000027660496248860184,
	1.4253948343691203,
	0.014253948343691203,
	0.000014253948343691203,
	0.014253948343691203,
	1.4253948343691203,
	0.000010725809363817511,
	0.000012012906486029297
};

std::string DensityUnitsName[] = {
	"Grains/gallon (UK)			",
	"Grains/gallon (US)			",
	"Grains/cubic foot			",
	"Grains/cubic inch			",
	"Grains/cubic yard			",
	"Grams/cubic centimeters	",
	"Grams/liter				",
	"Grams/milliliters			",
	"Kilograms/cubic meters		",
	"Kilograms/liter			",
	"Megagrams/cubic meter		",
	"Milligrams/milliliter		",
	"Milligrams/liter			",
	"Ounces/cubic inch			",
	"Ounces/gallon (UK)			",
	"Ounces/gallon (US)			",
	"Pounds/cubic inch			",
	"Pounds/cubic foot			",
	"Pounds/gallon (UK)			",
	"Pounds/gallon (US)			",
	"Slugs/cubic foot			",
	"Tonnes/cubic centimeter	",
	"Tonnes/cubic decimeter		",
	"Tonnes/cubic meter			",
	"Tonnes/cubic liter			",
	"Tonnes/cubic milliliter	",
	"Tons (UK)/cubic yard		",
	"Tons(US)/cubic yard		"
};