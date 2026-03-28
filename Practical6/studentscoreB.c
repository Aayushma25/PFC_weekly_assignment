#include <stdio.h>

#define NUM_STUDENTS 5

int main() {
    int scores[NUM_STUDENTS];
    int sum = 0;
    double avg;

    printf("Enter %d scores:\n", NUM_STUDENTS);

    for (int i = 0; i < NUM_STUDENTS; i++) {
        printf("Score %d: ", i + 1);
        scanf("%d", &scores[i]);
    }

    for (int i = 0; i < NUM_STUDENTS; i++) {
        sum += scores[i];
    }

    avg = (double)sum / NUM_STUDENTS;

    printf("\nScores:\n");
    for (int i = 0; i < NUM_STUDENTS; i++) {
        printf("%d ", scores[i]);
    }

    printf("\nSum: %d\n", sum);
    printf("Average: %.2lf\n", avg);

    return 0;
}