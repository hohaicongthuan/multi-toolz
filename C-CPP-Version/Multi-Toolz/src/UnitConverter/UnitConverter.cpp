#include "../../include/UnitConverter/UnitConverter.h"

void UnitConverterInterface() {
    int Answer = 0;

    do {
        std::cout << "UNIT CONVERTER\n";
        std::cout << "1.    Angle\n";
        std::cout << "2.    Area\n";
        std::cout << "3.    Astronomical Unit\n";
        std::cout << "4.    Byte/Bit\n";
        std::cout << "5.    Density\n";
        std::cout << "6.    Electric Current\n";
        std::cout << "7.    Energy\n";
        std::cout << "8.    Force\n";
        std::cout << "9.    Frequency\n";
        std::cout << "10.   Fuel\n";
        std::cout << "11.   Length\n";
        std::cout << "12.   Mass\n";
        std::cout << "13.   Power\n";
        std::cout << "14.   Pressure\n";
        std::cout << "15.   Speed\n";
        std::cout << "16.   Temperature\n";
        std::cout << "17.   Time\n";
        std::cout << "18.   Volume\n";
        std::cout << "19.   Weight\n";
        std::cout << "\nYour Choice: ";
        std::cin >> Answer;
    } while (Answer < 1 || Answer > 19);

    switch (Answer) {
    case 1:
        AngleConverterInterface();
        break;
    case 2:
        AreaConverterInterface();
        break;
    case 3:
        AstronomicalConverterInterface();
        break;
    case 4:
        ByteBitConverterInterface();
        break;
    case 5:
        DensityConverterInterface();
        break;
    case 6:
        ElectricCurrentConverterInterface();
        break;
    case 7:
        EnergyConverterInterface();
        break;
    case 8:
        ForceConverterInterface();
        break;
    case 9:
        FrequencyConverterInterface();
        break;
    case 10:
        FuelConverterInterface();
        break;
    case 11:
        LengthConverterInterface();
        break;
    case 12:
        MassConverterInterface();
        break;
    case 13:
        PowerConverterInterface();
        break;
    case 14:
        PressureConverterInterface();
        break;
    case 15:
        SpeedConverterInterface();
        break;
    case 16:
        TemperatureConverterInterface();
        break;
    case 17:
        TimeConverterInterface();
        break;
    case 18:
        VolumeConverterInterface();
        break;
    case 19:
        WeightConverterInterface();
        break;
    default:
        break;
    }
}