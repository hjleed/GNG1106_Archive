#include <stdio.h>

int main() {
    // Declaring a char variable
    char myChar;

    // Assigning values
    myChar = 'a';    // character assignment
    printf("myChar = 'a'\n");
    printf("As integer: %d\n", myChar);
    printf("As character: %c\n\n", myChar);

    myChar = 97;     // ASCII code for 'a'
    printf("myChar = 97\n");
    printf("As integer: %d\n", myChar);
    printf("As character: %c\n\n", myChar);

    // Declaration with initialization
    char myChar1 = 'b';
    char myChar2 = 98; // ASCII code for 'b'

    printf("myChar1 initialized with 'b'\n");
    printf("As integer: %d\n", myChar1);
    printf("As character: %c\n\n", myChar1);

    printf("myChar2 initialized with 98\n");
    printf("As integer: %d\n", myChar2);
    printf("As character: %c\n", myChar2);

    return 0;
}
