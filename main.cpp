#include <iostream>
#include <Windows.h>
using namespace std;

int main() {
    SetConsoleCP(1251);
    SetConsoleOutputCP(1251);
    int low, up, number;
    int sum = 0;
    cout << "������ ����� ����: ";
    cin >> low;
    cout << "������ ������ ����: ";
    cin >> up;
    if (low > up) {
        cout << "���������� ���. ����� ���� �� ���� ���� ������ �� ������." << endl;
        return 1;
    }
    number = low;
    while (number <= up) {
        sum += number;
        number++;
    }
    cout << "���� �����: " << sum << endl;
    system("pause");
    return 0;
}