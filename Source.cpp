#include <iostream>
#include <Windows.h>

using namespace std;

int main() {
    SetConsoleOutputCP(1251);
    const int n = 12;
    int profit[n];

    for (int i = 0; i < n; i++) {
        cout << "������ �������� ����� � " << i + 1 << " �����: ";
        cin >> profit[i];
    }

    int start_month, end_month;
    cout << "������ ������� ��������: ";
    cin >> start_month;
    cout << "������ ����� ��������: ";
    cin >> end_month;

    int max_month = start_month;
    int max_profit = profit[start_month];
    for (int i = start_month + 1; i <= end_month; i++) {
        if (profit[i] > max_profit) {
            max_month = i;
            max_profit = profit[i];
        }
    }

    int min_month = start_month;
    int min_profit = profit[start_month];
    for (int i = start_month + 1; i <= end_month; i++) {
        if (profit[i] < min_profit) {
            min_month = i;
            min_profit = profit[i];
        }
    }

    cout << "̳����, � ����� �������� ��� ������������: " << max_month + 1 << endl;
    cout << "̳����, � ����� �������� ��� ���������: " << min_month + 1 << endl;

    return 0;
}
