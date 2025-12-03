// C program to demonstrate Implicit (Implicit conversion is done automatically by the compiler when you assign a value of one type to another.)
// Promotion does not create any problems.

#include <stdio.h>

int main(void)
{
    // Local Declarations
    char c = 'X';      // ASCII value 88
    float f = 1234.5;
    int i = 123;
    short s = 98;
    double d = 42.55;

    // Statements
    printf("int + char is int:       %d\n", i + c);       // promoted to int
    printf("int * short is int:      %d\n", i * s);       // short -> int
    printf("double * char is double: %f\n", d * c);       // char -> int -> double


    printf("\nAfter execution \n");
    printf("int + char:     %d\t its size is %ld bytes\n", i + c, sizeof(i + c));
    printf("int * short:    %f\t its size is %ld bytes\n", i * s, sizeof(i * s));
    printf("float - double:  %f\t its size is %ld bytes\n", d * c, sizeof(d * c));

    return 0;
}
