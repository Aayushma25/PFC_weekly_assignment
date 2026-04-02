#include <stdio.h>

int main() {
    double monthlySaving;
    const double MONTHLY_INTEREST_RATE = 0.05 / 12;
    double accountValue = 0.0;

    printf("Enter the monthly saving amount: ");

    if (scanf("%lf", &monthlySaving) != 1 || monthlySaving < 0) {
        printf("Invalid input. Please enter a positive number.\n");
        return 1;
    }

    for (int month = 1; month <= 6; month++) {
        accountValue = (monthlySaving + accountValue) * (1 + MONTHLY_INTEREST_RATE);
    }

    printf("Account value after the sixth month: %.3f\n", accountValue);

    return 0;
}