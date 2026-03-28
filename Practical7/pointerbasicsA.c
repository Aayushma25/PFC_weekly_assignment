#include <stdio.h>

int main() {
    int num = 10;
    int *ptr = &num;

    printf("Value: %d\n", num);
    printf("Address: %p\n", (void*)&num);
    printf("Pointer: %p\n", (void*)ptr);
    printf("Dereferenced: %d\n", *ptr);

    *ptr = 20;

    printf("New value: %d\n", num);

    return 0;
}