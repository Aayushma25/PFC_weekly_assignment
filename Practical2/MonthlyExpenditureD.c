/* Expenditure calculator with user input
Practical 2, Part 2 (d)
@author Crocu
*/

#include <stdio.h>

int main() {

    float foodExpenses;
    float leisureExpenses;
    float clothesExpenses;
    float accommodation;
    float travel;
    float totalSpent;

    printf("Enter food expenses: ");
    scanf("%f", &foodExpenses);

    printf("Enter leisure expenses: ");
    scanf("%f", &leisureExpenses);

    printf("Enter clothes expenses: ");
    scanf("%f", &clothesExpenses);

    printf("Enter accommodation expenses: ");
    scanf("%f", &accommodation);

    printf("Enter travel expenses: ");
    scanf("%f", &travel);

    totalSpent = foodExpenses + leisureExpenses + clothesExpenses + accommodation + travel;

    printf("\nTotal money spent last month was £%.2f\n", totalSpent);

    return 0;
}