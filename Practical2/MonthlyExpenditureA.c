


#include <stdio.h>

int main() {

    float foodExpenses, leisureExpenses, clothesExpenses, totalSpent;


    // define variables
    printf("Enter food expenses: ");
    scanf("%f", &foodExpenses);
    printf("Enter leisure expenses: ");
    scanf("%f", &leisureExpenses);
    printf("Enter clothes expenses: ");
    scanf("%f", &clothesExpenses);

    // calculate total
    totalSpent = foodExpenses + leisureExpenses + clothesExpenses;

    // display result
    printf("The total expenditure this month was £ %.2f\n\n", totalSpent);

    return 0;
}

