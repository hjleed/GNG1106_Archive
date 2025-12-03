// C program to illustrate the use of address operator (&)
#include <stdio.h>

int main()
{
    // Declaring a simple integer variable
    int x = 100;
    int y=20;
    // Printing the address of the variable x
    // The format specifier %p is used to print a pointer (address) in hexadecimal
    printf("The address of x is %p\n", &x);
    printf("The address of y is %p\n", &y);


    // Declaring and initializing an integer array
    int arr[5] = {2, 4, 3, 8, 1};

    // Printing the address of the first element of the array
    // &arr[0] gives the address of element arr[0]
    printf("The address of arr[0] is %p\n", &arr[0]);

    // Printing the address of the second element of the array
    // Each integer occupies 4 bytes (on most systems)
    // Hence, the address of arr[1] will be 4 bytes higher than arr[0]
    printf("The address of arr[1] is %p\n", &arr[1]);

    // Printing the address of the array name itself
    // When used without an index, the array name "arr" represents
    // the address of the first element (&arr[0])
    printf("The address of arr is %p\n", arr);

    // Printing the address of the entire array
    // &arr gives the address of the whole array as a single block
    // It looks the same as arr in print, but there are details we will study them later
    printf("The address of &arr is %p\n", &arr);

    return 0;
}
