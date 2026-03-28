#include <stdio.h>

#define SIZE 5

int sum(int *arr, int size) {
    int s = 0;
    for (int i = 0; i < size; i++)
        s += *(arr + i);
    return s;
}

int max(int *arr, int size) {
    int m = *arr;
    for (int i = 1; i < size; i++)
        if (*(arr + i) > m)
            m = *(arr + i);
    return m;
}

int main() {
    int arr[SIZE] = {10, 20, 30, 40, 50};

    printf("Sum: %d\n", sum(arr, SIZE));
    printf("Max: %d\n", max(arr, SIZE));

    return 0;
}