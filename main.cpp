#include <iostream>
#include <Windows.h>
using namespace std;

int main() {
    SetConsoleCP(1251);
    SetConsoleOutputCP(1251);
    int a,number;
    cout << "������ ���� ����� a (1 <= a <= 20): ";
    cin >> a;
    number = a;
    if (a < 1 || a > 20) {
        cout << "����������� �������� a." << endl;
    }
    long long product = 1;
    while (a <= 20) {
        product *= a;
        a++;
    }
    cout << "������� ����� �� " << number << " �� 20 �������: " << product << endl;
    system("pause");
    return 0;
}