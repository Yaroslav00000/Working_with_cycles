#include <iostream>
#include <Windows.h>
using namespace std;

int main() {
    SetConsoleCP(1251);
    SetConsoleOutputCP(1251);
    int n;
    cout << "¬вед≥ть число: ";
    cin >> n;

    int i = 0;
    while (i <= n) {
        cout << i << " ";
        i++;
    }
    system("pause");
    return 0;
}