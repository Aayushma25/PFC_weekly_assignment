#include <stdio.h>

#define NUM_STUDENTS 5

int main() {
    int scores[NUM_STUDENTS];
    int sum = 0;
    double avg;

    printf("Enter %d scores:\n", NUM_STUDENTS);

    for (int i = 0; i < NUM_STUDENTS; i++) {
        scanf("%d", &scores[i]);
        sum += scores[i];
    }

    avg = (double)sum / NUM_STUDENTS;

    int max = scores[0], min = scores[0];

    for (int i = 1; i < NUM_STUDENTS; i++) {
        if (scores[i] > max) max = scores[i];
        if (scores[i] < min) min = scores[i];
    }

    printf("Average: %.2lf\n", avg);
    printf("Max: %d\n", max);
    printf("Min: %d\n", min);

    return 0;
}