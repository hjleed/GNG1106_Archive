/*

Q3. Write a program in C to initialize an array of 5 integers and print them.
Ask a costumer to enter a number. If the number is found, print its index; otherwise, print a suitable message.

*/

#include <stdio.h>

int main() {
    int arr[5] = {1, 2, 3, 4, 5};
    int num, found = 0;

    // Print the array
    printf("Array elements: ");
    for(int i = 0; i < 5; i++) {
        printf("%d ", arr[i]);
    }
    printf("\n");

    // Ask the customer for a number
    printf("Enter a number to search: ");
    scanf("%d", &num);

    // Search for the number in the array
    for(int i = 0; i < 5; i++) {
        if(arr[i] == num) {
            printf("Number %d found at index %d.\n", num, i);
            found = 1;
            break;
        }
    }

    // If the number was not found, print a suitable message
    if(found!=1) {
        printf("Number %d not found in the array.\n", num);
    }

    return 0;
}
