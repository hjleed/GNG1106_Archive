#include <stdio.h>
//In this example, the file is read twice:
// first normally, then after rewind(fp), starting over from the beginning.
int main() {
    FILE *fp = fopen("data.txt", "r");
    if (fp == NULL) {
        perror("Failed to open file");
        return 1;
    }

    char c;
    while ((c = fgetc(fp)) != EOF) {
        putchar(c);
    }

    // rewind file pointer to start
    rewind(fp);

    printf("\n--- After rewind ---\n");

    while ((c = fgetc(fp)) != EOF) {
        putchar(c);
    }

    fclose(fp);
    return 0;
}
