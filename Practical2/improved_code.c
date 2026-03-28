#include <stdio.h>

int main() {

    float foodExpenses;
    float leisureExpenses;
    float clothesExpenses;
    float travel;

    const int ACCOMMODATION = 500;

    float totalSpent;

    printf("Enter food expenses: ");

    if (scanf("%f", &foodExpenses) != 1 || foodExpenses < 0) {
        printf("Invalid input for food expenses.\n");
        return 1;
    }

    printf("Enter leisure expenses: ");

    if (scanf("%f", &leisureExpenses) != 1 || leisureExpenses < 0) {
        printf("Invalid input for leisure expenses.\n");
        return 1;
    }

    printf("Enter clothes expenses: ");

    if (scanf("%f", &clothesExpenses) != 1 || clothesExpenses < 0) {
        printf("Invalid input for clothes expenses.\n");
        return 1;
    }

    printf("Enter travel expenses: ");

    if (scanf("%f", &travel) != 1 || travel < 0) {
        printf("Invalid input for travel expenses.\n");
        return 1;
    }

    totalSpent = foodExpenses + leisureExpenses + clothesExpenses + travel + ACCOMMODATION;

    printf("\nTotal monthly expenditure: £%.2f\n", totalSpent);

    return 0;
}