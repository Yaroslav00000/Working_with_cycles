#include <iostream>
#include <Windows.h>
using namespace std;

int main() {
    SetConsoleCP(1251);
    SetConsoleOutputCP(1251);
    int a,number;
    cout << "Введіть ціле число a (1 <= a <= 20): ";
    cin >> a;
    number = a;
    if (a < 1 || a > 20) {
        cout << "Неправильне значення a." << endl;
    }
    long long product = 1;
    while (a <= 20) {
        product *= a;
        a++;
    }
    cout << "Добуток чисел від " << number << " до 20 дорівнює: " << product << endl;
    system("pause");
    return 0;
}