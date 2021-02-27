#include "../include/main.h"

int main(int argc, char* argv[]) {
    MainInterface();
    return 0;
}

void MainInterface() {
    int Answer = 0;

    do {
        std::cout << "MULTI-TOOLZ " << VERSION << "\n\n";
        std::cout << "1. Unit Converter\nYour Choice: ";
        std::cin >> Answer;
    } while (Answer < 1 || Answer > 1);

    switch (Answer) {
    case 1:
        UnitConverterInterface();
        break;
    default:
        break;
    }
}

