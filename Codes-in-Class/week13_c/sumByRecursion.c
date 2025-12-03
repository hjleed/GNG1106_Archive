#include <stdio.h>

// Function to calculate the sum of the first N natural numbers recursively
int sum(int N) {
    // Base case: If N is 1, return 1
    if (N == 1) {
        return 1;
    }

    // Recursive case: Calculate the sum of the first N-1 numbers
    // and add N to it
    else {
        return sum(N - 1) + N;
    }
}

int main() {
    // Calculate the sum of the first 4 natural numbers
    int result = sum(4);

    // Print the result
    printf("The sum is %d\n", result);

    return 0;
}
