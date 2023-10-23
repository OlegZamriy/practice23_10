#include <iostream>

int main()
{
    const int months = 6;
    double profits[months];
    double totalProfit = 0.0;

    for (int i = 0; i < months; i++)
    {
        std::cout << "Enter the profit for the month " << i + 1 << ": ";
        std::cin >> profits[i];
        totalProfit += profits[i];
    }

    std::cout << "Profit for each month: " << std::endl;
    for (int i = 0; i < months; i++)
    {
        std::cout << "Month " << i + 1 << ": " << profits[i] << std::endl;
    }

    std::cout << "Total profit for 6 months: " << totalProfit << std::endl;

    return 0;
}
