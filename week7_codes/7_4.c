/*

Q4. Write a C program to enter 10 elements in array and find frequency of each element in array. 
(The frequency means the count occurrence of each element as in the picture.)


*/
#include <stdio.h>

int main() {
    int arr[10];
    int freq[10] = {}; // Array to store the frequency of each element
    int i, j, count;

    // Input 10 elements from the user
    printf("Enter 10 elements:\n");
    for(i = 0; i < 10; i++) {
        printf("Enter element %d: ", i+1);
        scanf("%d", &arr[i]);
    }

    // Calculate the frequency of each element
    for(i = 0; i < 10; i++) {
        count = 1;
        for(j = i+1; j < 10; j++) {
            if(arr[i] == arr[j]) {
                count++;
            }
        }
        freq[i] = count;
        
    }

    // Print the frequency of each element
    printf("\nFrequency of each element:\n");
    for(i = 0; i < 10; i++) {
        printf("Frequency of %d: %d\n", arr[i], freq[i]);
    }

    return 0;
}
