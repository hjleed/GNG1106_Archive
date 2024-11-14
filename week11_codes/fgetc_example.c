#include <stdio.h>

int main() {
    // One way
    FILE *fp = fopen("data.txt", "r");
    if (fp != NULL) {
        int ch;
        printf("Contents of the file (character by character):\n");

        while ((ch = fgetc(fp)) != EOF) {
            putchar(ch);  // Writes a single character to the standard output
        }
        fclose(fp);  // Close the file after reading all characters
    } else {
        perror("Error opening file");
    }

    printf("\n.............\n");

    // Another way
    FILE *fp2 = fopen("data.txt", "r");
    char line[256];

    if (fp2 != NULL) {
        printf("Contents of the file (line by line):\n");

        while (fgets(line, sizeof(line), fp2) != NULL) {
            printf("%s", line);  // Prints each line read from the file
        }
        fclose(fp2);  // Close the file after reading all lines
    } else {
        perror("Error opening file");
    }

    return 0;
}
