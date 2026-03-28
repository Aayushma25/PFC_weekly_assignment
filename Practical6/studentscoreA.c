#include <stdio.h>

int main() {
    int scores[5];
    int sum = 0;
    double avg;

    printf("Enter 5 scores:\n");

    for (int i = 0; i < 5; i++) {
        printf("Score %d: ", i + 1);
        scanf("%d", &scores[i]);
    }

    for (int i = 0; i < 5; i++) {
        sum += scores[i];
    }

    avg = (double)sum / 5;

    printf("\nSum: %d\n", sum);
    printf("Average: %.2lf\n", avg);

    return 0;
}