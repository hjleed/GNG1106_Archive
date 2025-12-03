
/**
 * Computes the sine function, sin(x), using its Taylor series expansion:
 * sin(x) = sum_{k=0}^{999} (-1)^k * x^(2k+1) / (2k+1)!
 * where t(k) is calculated recursively from t(k-1).
 *
 * The series is truncated to its first 100 terms (k=0 to k=999).

 t(k)= t(k-1) *  ( x * x )/( (2k) * (2k+1) )
 */

#include <stdio.h>
#define PI 3.141592653589793

int main() {
    // Variable Declarations
    double x_degree, x;
    double current_term;  // Current term in the series
    double total_sin;     // Running sum of the series

    // 1. Get User Input
    printf("--- Sine Series Approximation (1000 Terms) ---\n");
    printf("Enter the value of x (in degrees): ");
    scanf("%lf", &x_degree);

    // Convert degrees to radians
    x = x_degree * PI / 180.0;

    // 2. Initialize for k = 0
    current_term = x;     // First term
    total_sin = current_term;

    // 3. Loop and Calculate Terms (k = 1 to k = 999)
    for (int k = 1; k < 1000; k++) {
        // t(k) = -t(k-1) * x^2 / ((2k)*(2k+1))
        current_term = -current_term * (x * x) / ((2.0 * k) * (2.0 * k + 1.0));
        total_sin += current_term;
    }

    // 4. Print the Final Result
    printf("\nCalculation Complete.\n");
    printf("sin(%.2f degrees) = %.15f\n", x_degree, total_sin);

    return 0;
}
