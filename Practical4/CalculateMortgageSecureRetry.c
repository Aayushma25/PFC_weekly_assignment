#include <stdio.h>
#include <limits.h>
#include <stdbool.h>

double largerSalary(double salary1, double salary2);
double smallerSalary(double salary1, double salary2);
bool validateSalary(double salary);
bool readSalaries(double *salary1, double *salary2);
double calculateMortgage(double salary1, double salary2);

int main() {

    double salary1, salary2, mortgage;

    const int MAX_ATTEMPTS = 3;
    int attempts = 0;
    bool inputValid = false;

    while (attempts < MAX_ATTEMPTS && !inputValid) {

        printf("Enter two salaries separated by space:\n");

        if (!readSalaries(&salary1, &salary2)) {

            attempts++;
            printf("Invalid input format.\n");
            printf("Attempts remaining: %d\n", MAX_ATTEMPTS - attempts);
            continue;
        }

        if (!validateSalary(salary1) || !validateSalary(salary2)) {

            attempts++;
            printf("Salaries must be between £0 and £1,000,000\n");
            printf("Attempts remaining: %d\n", MAX_ATTEMPTS - attempts);
            continue;
        }

        inputValid = true;
    }

    if (attempts >= MAX_ATTEMPTS) {

        printf("Maximum attempts exceeded. Program terminated.\n");
        return 1;
    }

    mortgage = calculateMortgage(salary1, salary2);

    if (mortgage < 0) {

        printf("Error: Overflow occurred.\n");
        return 1;
    }

    printf("The maximum size of mortgage is: £ %.2lf\n", mortgage);

    return 0;
}

