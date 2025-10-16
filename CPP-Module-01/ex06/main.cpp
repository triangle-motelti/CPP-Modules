#include "Harl.hpp"
#include <iostream>

int getLevelIndex(std::string level) {
    std::string levels[] = {"DEBUG", "INFO", "WARNING", "ERROR"};
    for (int i = 0; i < 4; i++) {
        if (levels[i] == level)
            return i;
    }
    return -1;
}

int main(int argc, char **argv) {
    if (argc != 2) {
        std::cout << "Usage: " << argv[0] << " <level>" << std::endl;
        return 1;
    }
    Harl harl;
    int idx = getLevelIndex(argv[1]);
    switch (idx) {
        case 0:
            harl.debug();
        case 1:
            harl.info();
        case 2:
            harl.warning();
        case 3:
            harl.error();
            break;
        default:
            std::cout << "[ Probably complaining about insignificant problems ]" << std::endl;
    }
    return 0;
}

