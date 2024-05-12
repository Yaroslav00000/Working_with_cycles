#include <iostream>
#include <Windows.h>
using namespace std;

int main() {
    SetConsoleCP(1251);
    SetConsoleOutputCP(1251);
    int k;
    int i = 1;
    cout << "Введіть номер варіанта (1-10): ";
    cin >> k;
    if (k < 1 || k > 10) {
        cout << "Неправильний номер варіанта. Номер має бути в діапазоні від 1 до 10." << endl;
    }
    cout << "Таблиця множення на " << k << ":" << endl;
    while (i <= 10) {
        cout << k << " x " << i << " = " << k * i << endl;
        i++;
    }
    system("pause");
    return 0;
}