#include <iostream>
#include <Windows.h>
using namespace std;
int main() {
    SetConsoleOutputCP(1251);
    const int n = 5;

    float sides[n];

    for (int i = 0; i < n; i++) {
        cout << "������ ������� ������� " << i + 1 << ": ";
        cin >> sides[i];
    }

    float perimeter = 0;
    for (int i = 0; i < n; i++) {
        perimeter += sides[i];
    }

    cout << "�������� �'����������: " << perimeter << endl;

    return 0;
}