#include <iostream>
#include <Windows.h>
using namespace std;

int main() {
    SetConsoleCP(1251);
    SetConsoleOutputCP(1251);
    int min, max;
    cout << "������ �������� ��������: ";
    cin >> min;
    cout << "������ ����������� ��������: ";
    cin >> max;


    if (min > max) {
        cout << "̳������� �������� �� ���� ���� ������ �� �����������." << endl;
    }
    else{
        int i = min;
        cout << "�� �����: ";
        while (i <= max) {
            cout << i << " ";
            i++;
        }
        cout << endl;

        i = min;
        cout << "���� �����: ";
        while (i <= max) {
            if (i % 2 == 0) {
                cout << i << " ";
            }
            i++;
        }
        cout << endl;

        i = min;
        cout << "������: ";
        while (i <= max) {
            if (i % 2 != 0) {
                cout << i << " ";
            }
            i += 2;
        }
        cout << endl;

        i = min;
        cout << "����� 7: ";
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