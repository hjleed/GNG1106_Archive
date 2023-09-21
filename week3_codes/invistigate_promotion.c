/*
Implicit Rule of Promotion

---------------
1 is represented by 4 bytes
5.0 is represented by 8 bytes
1+5.0 is represented by 8 bytes
x is represented by 16 bytes
(1+5.0)*x is represented by 16 bytes
--------------
*/
#include <stdio.h>
int main()
{
    long double x;
    printf("1 is represented by %ld bytes\n", sizeof(1));
    printf("5.0 is represented by %ld bytes\n", sizeof(5.0));
    printf("1+5.0 is represented by %ld bytes\n", sizeof(1+5.0));
    x=1;
    printf("x is represented by %ld bytes\n", sizeof(x));
    printf("(1+5.0)*x is represented by %ld bytes\n", sizeof((1+5.0)*x));
    return 0;
}