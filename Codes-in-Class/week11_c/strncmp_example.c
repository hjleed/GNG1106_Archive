#include <stdio.h>
#include <string.h>
// Do not use == to compare strings in C
int main() {
    char str1[] = "apple";
    char str2[] = "banana";
    char str3[] = "apple";

    printf("%d\n", strcmp(str1, str2)); // negative: 'a' < 'b'
    printf("%d\n", strcmp(str2, str1)); // positive: 'b' > 'a'
    printf("%d\n", strcmp(str1, str3)); // 0: equal


	// strcmp("Hello", "hello"); // negative because 'H' (72) < 'h' (104)

    return 0;
}
