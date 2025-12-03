#include <stdio.h>

int main()
{
    char s1[256]="hello";
    printf("\n%s", s1);
    //This prints hello.
    char s2[256]={'h', 'e', 'l', 'l', 'o', '\0', 'x'};
    printf("\n%s", s2);
    //This also prints hello.


    // How about this
    printf("\n .... print it element by element \n");
    for (int i = 0; i < 7; i++) {
        printf("%c ", s2[i]);
    }

    // Because %s stops at the first '\0'.
    // But %c and %d do not stop; that's why printing element-by-element reveals everything in the array.
  return 0;
}
