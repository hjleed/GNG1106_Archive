
/* Sum Digits:
Implement a C program that reads an integer between 0 and 1000 and adds all its digits
Without using if-statements or loops.


For example, if an integer is 369, the sum of all its digits is 18.

Hint: Use the % operator to extract digits and the / operator to remove the extracted
digit. For instance:

369 % 10 = 9            369 / 10 = 36
 36 % 10 = 6             36 / 10 = 3
  3 % 10 = 3              3 / 10 = 0

Here is a sample run:
................................................
Enter a number between 0 and 1000: 369
The sum of the digits is 18
................................................
*/
#include <stdio.h>

int main() {
    int number, digit1, digit2, digit3, digit4, digit_sum;

    printf("Enter a number between 0 and 1000: ");
    scanf("%d", &number);
    // Write your code HERE

    printf("The sum of the digits is %d\n", digit_sum);

    return 0;
}


