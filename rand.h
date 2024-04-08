#include <iostream>
#include <cstdlib>
#include <ctime>

int generateRandomNumber(int start, int end) {
    srand(time(0)); // Инициализация генератора случайных чисел с помощью текущего времени
    return rand() % (end - start + 1) + start; // Генерация случайного числа в диапазоне от start до end
}

int main() {
    int start = 1;
    int end = 10;
    
    for (int i = 0; i < 5; i++) {
        int randomNumber = generateRandomNumber(start, end);
        std::cout << "Случайное число в диапазоне от " << start << " до " << end << ": " << randomNumber << std::endl;
    }
    
    return 0;
}