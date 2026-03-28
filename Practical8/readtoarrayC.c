#include <stdio.h>

#define MAX 100

int main() {
    FILE *fp = fopen("numbers.txt", "r");

    if (fp == NULL) {
        printf("Error opening file\n");
        return 1;
    }

    int arr[MAX], count = 0, val;

    while (count < MAX && fscanf(fp, "%d", &val) == 1) {
        arr[count++] = val;
    }

    fclose(fp);

    for (int i = 0; i < count; i++) {
        printf("%d ", arr[i]);
    }

    return 0;
}