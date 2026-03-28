/* Expenditure calculator with constant accommodation
Practical 2, Part 2 (e)
@author Crocu
*/

#include <stdio.h>

int main() {

    float foodExpenses;
    float leisureExpenses;
    float clothesExpenses;
    float travel;

    const int ACCOMMODATION = 500; // fixed monthly accommodation cost

    float totalSpent;

    printf("Enter food expenses: ");
    scanf("%f", &foodExpenses);

    printf("Enter leisure expenses: ");
    scanf("%f", &leisureExpenses);

    printf("Enter clothes expenses: ");
    scanf("%f", &clothesExpenses);

    printf("Enter travel expenses: ");
    scanf("%f", &travel);

    totalSpent = foodExpenses + leisureExpenses + clothesExpenses + travel + ACCOMMODATION;

    printf("\nTotal expenditure last month was £%.2f\n", totalSpent);

    return 0;
}