/*

Q4. Write a C program to enter 10 elements in array and find frequency of each element in array. 
(The frequency means the count occurrence of each element as in the picture.)


*/
#include <stdio.h>

int main() {
    int arr[10]={10, 20, 10, 4, 50, 10, 20, 60, 30, 45};
    int freq[10]={-1, -1, -1, -1, -1, -1, -1, -1, -1, -1};// Initialize frequency array with -1
    int count;

    for (int i = 0; i < 10; i++) {
        count = 1;
        for (int j = i + 1; j < 10; j++) {
            if (arr[i] == arr[j]) {
                count++;
                freq[j] = 0; // Marking the counted element as 0
            }
        }
        if (freq[i] != 0) {
            freq[i] = count;
        }
    }

    printf("\nElement | Frequency\n");
    printf("--------------------\n");
    for (int i = 0; i < 10; i++) {
        if (freq[i] != 0) {
            printf("%6d | %9d\n", arr[i], freq[i]);
        }
    }

    return 0;
}

