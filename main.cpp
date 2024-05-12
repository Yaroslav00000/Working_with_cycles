#include <iostream>
#include <Windows.h>
using namespace std;

int main() {
    SetConsoleCP(1251);
    SetConsoleOutputCP(1251);
    double sum = 0;
    int count = 0;
    int number = 1;
    while (number <= 1000) {
        sum += number;
        count++;
        number++;
    }
    double average = sum / count; 

    cout << "Середнє арифметичне від 1 до 1000: " << average << endl;
    system("pause");
    return 0;
}