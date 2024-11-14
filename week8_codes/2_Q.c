/*

Q1. In a concert hall, the first row contains 100 chairs. For each subsequent row,
two chairs are subtracted, and this pattern continues for 20 rows. How many total chairs are present in the hall?
 a.(1600)    b.(1620)    c.(2000)     d.(1260)      e.(1680).
Now, write a program in C to find the correct answer?



*/

#include <stdio.h>

int main() {
    int totalChairs = 0;
    int chairsInCurrentRow = 100; // Number of chairs in the first row
    int rows = 20; // Total number of rows

    for (int i = 1; i <= rows; i++) {
        totalChairs += chairsInCurrentRow; // Add the number of chairs in the current row to the total
        printf("row number (%d) has (%d) chairs \n", i,chairsInCurrentRow);
        chairsInCurrentRow -= 2; // Remove 2 chairs for the next row
    }

    printf("Total number of chairs in the room: %d\n", totalChairs);


    return 0;
}

/*
// another solution:
#include <stdio.h>

int main() {
    int first_row_chairs = 100;
    int rows = 20;
    int common_difference = -2; // Difference between consecutive rows

    // Formula for the sum of an arithmetic series:
    // S = n/2 * (2a + (n-1)d)
    int total_chairs = rows / 2 * (2 * first_row_chairs + (rows - 1) * common_difference);

    printf("Total number of chairs in the room: %d\n", total_chairs);

    return 0;
}
*/
