#include <iostream>
#include <Windows.h>
using namespace std;

int main() {
    SetConsoleCP(1251);
    SetConsoleOutputCP(1251);
    int a;
    cout << "¬вед≥ть значенн€ a: ";
    cin >> a;
    if (a > 500) {
        cout << "«наченн€ a повинно бути менше або р≥вне 500." << endl;
    }

    int sum = 0;
    int current = a;

    while (current <= 500) {
        sum += current;
        current++;
    }

    cout << "—ума ц≥лих чисел в≥д " << a << " до 500: " << sum << endl;
    system("pause");
    return 0;
}