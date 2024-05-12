#include <iostream>
#include <Windows.h>
using namespace std;

int main() {
    SetConsoleCP(1251);
    SetConsoleOutputCP(1251);
    int low, up, number;
    int sum = 0;
    cout << "Введіть нижню межу: ";
    cin >> low;
    cout << "Введіть верхню межу: ";
    cin >> up;
    if (low > up) {
        cout << "Неправильні межі. Нижня межа не може бути більшою за верхню." << endl;
        return 1;
    }
    number = low;
    while (number <= up) {
        sum += number;
        number++;
    }
    cout << "Сума чисел: " << sum << endl;
    system("pause");
    return 0;
}