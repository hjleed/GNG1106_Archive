#include <stdio.h>
int main()
{
    printf("Size of char is %ld bytes\n", sizeof(char));
    printf("Size of short is %ld bytes\n", sizeof(short));
    printf("Size of int is %ld bytes\n", sizeof(int));
    printf("Size of long is %ld bytes\n", sizeof(long));
    printf("Sizes of unsigned long is %ld bytes\n",sizeof(unsigned long));

    int a=100;
    double b=100.55;
    printf("Size of a is %ld bytes\n", sizeof(a));
    printf("Size of b is %ld bytes\n", sizeof(b));

    short aa=12546125444521144111411441144114114;
    printf("Shot %d",aa);


    return 0;
}

