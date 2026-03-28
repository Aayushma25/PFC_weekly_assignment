
#include <stdio.h>

int main() {

    float foodExpenses = 280.0;
    float leisureExpenses = 120.0;
    float clothesExpenses = 60.0;

    float totalSpent;

    totalSpent = foodExpenses + leisureExpenses + clothesExpenses;

    printf("My total expenditure last month was £%.2f\n\n", totalSpent);

    return 0;
}