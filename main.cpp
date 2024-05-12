#include <iostream>
#include <Windows.h>
#include <cmath>

using namespace std;

int main() {
    SetConsoleCP(1251);
    SetConsoleOutputCP(1251);
    double x, y, result;
    cout << "¬вед≥ть число x: ";
    cin >> x;
    cout << "¬вед≥ть степ≥нь y: ";
    cin >> y;
    result = pow(x, y);
    cout << x << " у степен≥ " << y << " дор≥внюЇ " << result << endl;
    system("pause");
    return 0;
}