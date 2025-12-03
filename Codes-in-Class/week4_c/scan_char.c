#include <stdio.h>

int main() {
    char myChar1, myChar2;

    printf("Enter the first character: ");
    // The space before %c in the scanf call is intentional.
    // It skips any leftover whitespace (like Enter or spaces).
    scanf(" %c", &myChar1);
    printf("The first char myChar1 = %c\n", myChar1);

    printf("Enter the second character: ");
    scanf(" %c", &myChar2);
    printf("The second char myChar2 = %c\n", myChar2);

    return 0;
}
