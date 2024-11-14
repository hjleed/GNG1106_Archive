/*

Write a C program to enter 10 elements in array and find frequency of each element in array.
(The frequency means the count occurrence of each element as in the picture.)


*/
#include <stdio.h>

int main() {
    int arr[10];
    int freq[10] = {0}; // Initialize frequency array to zero
    int i, j, count;

    // Input 10 elements from the user
    printf("Enter 10 elements:\n");
    for (i = 0; i < 10; i++) {
        printf("Enter element %d: ", i + 1);
        scanf("%d", &arr[i]);
    }

    // Calculate the frequency of each element efficiently
    for (i = 0; i < 10; i++) {
        if (freq[arr[i]] == 0) { // Check if element has already been counted
            count = 1;
            for (j = i + 1; j < 10; j++) {
                if (arr[i] == arr[j]) {
                    count++;
                    freq[arr[j]] = -1; // Mark element as counted
                }
            }
            freq[arr[i]] = count;
        }
    }

    // Print the frequency of each element
    printf("\nFrequency of each element:\n");
    for (i = 0; i < 10; i++) {
        if (freq[arr[i]] > 0) { // Only print for counted elements
            printf("Frequency of %d: %d\n", arr[i], freq[arr[i]]);
        }
    }

    return 0;
}
