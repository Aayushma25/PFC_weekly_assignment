#include <stdio.h>

int main() {
    FILE *fp = fopen("numbers.txt", "r");

    if (fp == NULL) {
        printf("Error opening file\n");
        return 1;
    }

    int num, sum = 0, count = 0;

    while (fscanf(fp, "%d", &num) == 1) {
        sum += num;
        count++;
    }

    fclose(fp);

    printf("Count: %d\n", count);
    printf("Sum: %d\n", sum);

    if (count > 0)
        printf("Average: %.2f\n", (float)sum / count);

    return 0;
}