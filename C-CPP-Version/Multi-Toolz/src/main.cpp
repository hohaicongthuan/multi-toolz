#include "../include/main.h"

int main(int argc, char* argv[]) {
    Interface();
    
    return 0;
}

void Interface() {
    int Answer = 0;

    do {
        std::cout << "1.    Unit Converter" << std::endl;
        std::cout << "Your Choice: ";
        std::cin >> Answer;
    } while (Answer != 1);

    Answer = 0;

    do {
        std::cout << "UNIT CONVERTER" << std::endl;
        std::cout << "1.    Length" << std::endl;
        std::cout << "Your Choice: ";
        std::cin >> Answer;
    } while (Answer != 1);

    Answer = 0;

    do {
        std::cout << "UNIT CONVERTER > LENGTH" << std::endl;
        std::cout << "1. angstrom\n";
        std::cout << "2. astronomical unit (au)\n";
        std::cout << "3. centimetre (cm)\n";
        std::cout << "4. chain\n";
        std::cout << "5. decimetre (dm)\n";
        std::cout << "6. fathom\n";
        std::cout << "7. foot (ft)\n";
        std::cout << "8. furlong\n";
        std::cout << "9. inch (in)\n";
        std::cout << "10. kilometre (km)\n";
        std::cout << "11. league\n";
        std::cout << "12. light year\n";
        std::cout << "13. metre (m)\n";
        std::cout << "14. mile (mi)\n";
        std::cout << "15. milimetre (mm)\n";
        std::cout << "16. micrometre (um)\n";
        std::cout << "17. nanometre (nm)\n";
        std::cout << "18. picometre (pm)\n";
        std::cout << "19. nautical mile\n";
        std::cout << "20. parsec\n";
        std::cout << "21. rod\n";
        std::cout << "22. yard (yd)\n";
        std::cout << "Which unit do you want to convert from?\nYour Choice: ";
        std::cin >> Answer;
    } while (Answer < 1 && Answer > 22);

    Answer = 0;
}
