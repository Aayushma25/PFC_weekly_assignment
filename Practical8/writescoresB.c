#include <stdio.h>

int main() {
    FILE *fp = fopen("scores.txt", "w");

    if (fp == NULL) {
        printf("Error creating file\n");
        return 1;
    }

    fprintf(fp, "Scores:\n");
    fprintf(fp, "85\n90\n78\n92\n88\n");

    fclose(fp);

    printf("File written successfully\n");
    return 0;
}