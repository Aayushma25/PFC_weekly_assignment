/* CalculatingMortgageA.c
Practical 4 Part 1(a)
@author Crocu
*/

#include <stdio.h>

int main() {

    double salary1, salary2, largerSalary, smallerSalary, mortgage;

    printf("Enter two salaries separated by a space:\n");
    scanf("%lf %lf", &salary1, &salary2);

    // Select larger salary
    if (salary1 > salary2)
        largerSalary = salary1;
    else
        largerSalary = salary2;

    // Select smaller salary
    if (salary1 > salary2)
        smallerSalary = salary2;
    else
        smallerSalary = salary1;

    // Calculate mortgage
    mortgage = largerSalary * 3;
    mortgage += smallerSalary;

    printf("The maximum size of mortgage is: £ %.2lf\n", mortgage);

    return 0;
}