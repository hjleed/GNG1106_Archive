#include <stdio.h>

// Recursive function to calculate the n-th Fibonacci number
int fibonacci(int n) {
    if (n <= 1) // Base cases: Fibonacci(0) = 0, Fibonacci(1) = 1
        return n;
    return fibonacci(n - 1) + fibonacci(n - 2); // Recursion branch
}

int main() {
    int n;

    // Input the number of terms to print
    printf("Enter the number of terms (n): ");
    scanf("%d", &n);

    printf("Fibonacci sequence up to %d terms:\n", n);
    for (int i = 0; i < n; i++) {
        printf("%d ", fibonacci(i)); // Print each Fibonacci number
    }

    printf("\n");
    return 0;
}
