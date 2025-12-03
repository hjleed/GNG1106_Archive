/*
In class code
(c) Hitham Jleed
*/

#include <stdio.h>

#define PI 3.141592653589793
// Precision threshold for terminating the series summation (1e-13)
#define PRECISION 0.0000000000001


int main() {
    double angle_deg, angle_rad;
    double total_sin;
    double current_term;  // Term variable
    int k;

    printf("Enter an angle in degrees: "); // Prompt user for input
    scanf("%lf", &angle_deg);              // Read input
    angle_rad = angle_deg * PI / 180.0;    // Convert degrees to radians

    /* ---------------------------
    Compute sin(x) using series: sin(x) = x - x^3/3! + x^5/5! - ...
    --------------------------- */
    total_sin = angle_rad;  // First term is x
    current_term = angle_rad;
    k = 1;
    // Loop until term t falls within +/- PRECISION
    while (current_term > PRECISION || current_term < -PRECISION) {
        // t(k) = t(k-1) * (-1.0) * x^2 / ((2k) * (2k + 1)) [Derived from sin series]
        current_term = current_term * (-1.0) * angle_rad * angle_rad / ((2 * k) * (2 * k + 1));
        total_sin += current_term; // Add term to sum
        k++;
    }

    printf("Approximated sin(%.0f) = %.10f\n", angle_deg, total_sin); // Display result
    return 0;
}
