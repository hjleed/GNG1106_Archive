#include <stdio.h>

int main()
{
    int N, sum = 0, counter = 1;

    printf("Enter a positive integer N: ");
    scanf("%d", &N);

    do
    {
        sum = sum + counter; // Add the current number to the sum
        printf("Iteration %d: Accumulated sum is %d\n", counter, sum);
        counter++; // Move to the next number

    } while (counter <= N);

    printf("The final sum of 1 to %d is: %d\n", N, sum);

    return 0;
}