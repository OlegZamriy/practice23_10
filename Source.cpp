#include <iostream>
#include <Windows.h>

int main() {
    SetConsoleOutputCP(1251);
    const int numMonths = 12;
    double profit[numMonths];
    std::string months[numMonths] = { "ѳ����", "�����", "��������", "������", "�������", "�������", "������", "�������", "��������", "�������", "��������", "�������" };

    for (int i = 0; i < numMonths; i++) {
        std::cout << "������ �������� ��� " << months[i] << ": ";
        std::cin >> profit[i];
    }

    double maxProfit = profit[0];
    double minProfit = profit[0];
    int maxMonth = 0;
    int minMonth = 0;

    for (int i = 1; i < numMonths; i++) {
        if (profit[i] > maxProfit) {
            maxProfit = profit[i];
            maxMonth = i;
        }
        if (profit[i] < minProfit) {
            minProfit = profit[i];
            minMonth = i;
        }
    }

    std::cout << "̳���� � ��������� ���������: " << months[maxMonth] << " (" << maxProfit << ")\n";
    std::cout << "̳���� � ��������� ���������: " << months[minMonth] << " (" << minProfit << ")\n";


    return 0;
}
