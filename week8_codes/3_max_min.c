/*

Q2. Write a program in C to initialize an array of 5 integers and print them.
a.	Find the Maximum and Minimum: Implement a program to find the maximum and minimum values in an array of integers.
b.	Calculate Sum and Average: Write a program to calculate the sum and average of the elements in an array.
c.	Count Even and Odd Numbers: Implement a program that counts the number of even and odd numbers in an array.


*/

#include <stdio.h>

int main() {
    int arr[5] = {1, 2, 3, 4, 5};
    int max, min, sum = 0, evenCount = 0, oddCount = 0;
    float average;

    // Print the array
    printf("Array elements: ");
    for(int i = 0; i < 5; i++) {
        printf("%d ", arr[i]);
    }
    printf("\n");

    // Initialize max and min with the first element
    max = arr[0];
    min = arr[0];

    // Loop through the array for other tasks
    for(int i = 0; i < 5; i++) {
        // Find max and min
        if(arr[i] > max) {
            max = arr[i];
        }
        if(arr[i] < min) {
            min = arr[i];
        }

        // Calculate sum
        sum += arr[i];

        // Count even and odd numbers
        if(arr[i] % 2 == 0) {
            evenCount++;
        } else {
            oddCount++;
        }
    }

    // Calculate average
    average = (float)sum / 5;

    // Print results
    printf("Maximum value: %d\n", max);
    printf("Minimum value: %d\n", min);
    printf("Sum: %d\n", sum);
    printf("Average: %.2f\n", average);
    printf("Number of even numbers: %d\n", evenCount);
    printf("Number of odd numbers: %d\n", oddCount);

    return 0;
}
