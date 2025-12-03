
/*
(1) Base Case: If n is 0, the function returns 0. This is the base case that stops the recursion.
(2) Recursive Case: If n is greater than 0, the function returns n plus the result of calling itself recursively with n - 1. This implements the formula S(n) = S(n-1) + n.
*/
#include <stdio.h>
int sum_recursive(int n) {
    if (n == 0) {
        return 0;
    } else {
        return n + sum_recursive(n - 1);
    }
}

int main() {
    int n = 5; // You can change this value to any desired number
    int result = sum_recursive(n);
    printf("Sum of numbers from 1 to %d is: %d\n", n, result);
    return 0;
}
