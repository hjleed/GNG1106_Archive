/*

Q1. In the GRA examination, a question was posed: In a concert hall, the first row contains 100 chairs. For each subsequent row, 
2 chairs are subtracted, and this pattern continues for 20 rows. How many total chairs are present in the hall?  
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