#include "rand.h"
#include <iostream>
#include <cstdlib>

int generateRandomNumber() {
    return rand() % 100; // Генерация случайного числа от 0 до 99
}

void generateAndPrintRandomNumbers(int n) {
    for (int i = 0; i < n; ++i) {
        std::cout << generateRandomNumber() << " ";
    }
    std::cout << std::endl;
}