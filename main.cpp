#include <iostream>
#include <Windows.h>
using namespace std;

int main() {
    SetConsoleCP(1251);
    SetConsoleOutputCP(1251);
    int min, max;
    cout << "Введіть мінімальне значення: ";
    cin >> min;
    cout << "Введіть максимальне значення: ";
    cin >> max;


    if (min > max) {
        cout << "Мінімальне значення не може бути більшим за максимальне." << endl;
    }
    else{
        int i = min;
        cout << "Всі числа: ";
        while (i <= max) {
            cout << i << " ";
            i++;
        }
        cout << endl;

        i = min;
        cout << "Парні числа: ";
        while (i <= max) {
            if (i % 2 == 0) {
                cout << i << " ";
            }
            i++;
        }
        cout << endl;

        i = min;
        cout << "Непарні: ";
        while (i <= max) {
            if (i % 2 != 0) {
                cout << i << " ";
            }
            i += 2;
        }
        cout << endl;

        i = min;
        cout << "Кратні 7: ";
        while (i <= max) {
            if (i % 7 == 0) {
                cout << i << " ";
            }
            i++; 
        }
        cout << endl;
    }
    
    return 0;
}