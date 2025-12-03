#include <stdio.h>

// Prototype
void fibonacci(int );

int main() {
    int n;

    printf("Enter the number of terms: ");
    scanf("%d", &n);

    fibonacci(n);

    return 0;
}

// Function to compute and print Fibonacci sequence
void fibonacci(int n) {
    int preTerm = 0;  //→ starts with the first Fibonacci number
	int currTerm = 1, nextTerm;

    printf("Fibonacci Sequence: ");
    for (int i = 1; i <= n; ++i) {
        printf("%d ", preTerm); // Print term(i-1) in loop
        nextTerm = preTerm + currTerm;
        preTerm = currTerm;
        currTerm = nextTerm;
    }

    printf("\n");
}
