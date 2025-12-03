#include <stdio.h>

int main() {
    FILE *file;
    char ch;
    double a;

    file = fopen("data.txt", "r");

    if (file == NULL) {
        printf("Error: Could not open file.\n");
        return 1;
    }

    printf("File contents:\n");
    while ((ch = fgetc(file)) != EOF) {
        printf("%c", ch);
        a=(double)ch;
        printf("%f", a);
    }

    fclose(file);

    return 0;
}
