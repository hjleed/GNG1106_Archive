#include <stdio.h>
#include <ctype.h>

// Which characters count as alphabetic?

int main() {
    char c1 = 'A';
    char c2 = 'g';
    char c3 = '7';
    char c4 = '#';

    if (isalpha(c1)) printf("%c is alphabetic\n", c1);
    if (isalpha(c2)) printf("%c is alphabetic\n", c2);
    if (!isalpha(c3)) printf("%c is NOT alphabetic\n", c3);
    if (!isalpha(c4)) printf("%c is NOT alphabetic\n", c4);

    return 0;
}
