#include <iostream>
#include <Windows.h>
#include <cmath>

using namespace std;

int main() {
    SetConsoleCP(1251);
    SetConsoleOutputCP(1251);
    double x, y, result;
    cout << "������ ����� x: ";
    cin >> x;
    cout << "������ ������ y: ";
    cin >> y;
    result = pow(x, y);
    cout << x << " � ������ " << y << " ������� " << result << endl;
    system("pause");
    return 0;
}