#include <iostream>
#include <Windows.h>
using namespace std;

int main() {
    SetConsoleCP(1251);
    SetConsoleOutputCP(1251);
    int number;
    int sum = 0;
    while (true) {
        cout << "¬вед≥ть число(¬веденн€ нул€ завершить програму): ";
        cin >> number;
        if (number == 0) {
            break;
        }
        sum += number;
    }
    cout << sum << " ";
    cout << endl << endl;
    system("pause");
    return 0;
}
