#include <stdio.h>

int main() {
    double celsius;
    double fahrenheit;

    printf("Enter temperature in Celsius: ");

    if (scanf("%lf", &celsius) != 1) {
        printf("Invalid input. Please enter a numeric value.\n");
        return 1;
    }

    fahrenheit = (9.0 / 5) * celsius + 32;

    printf("Temperature in Fahrenheit: %.2f\n", fahrenheit);

    return 0;
}