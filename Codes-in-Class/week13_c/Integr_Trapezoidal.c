/* @ Hitham*/
#include<stdio.h>
#include<math.h>
#include<stdlib.h>

#define numIntervals 100

/* Function definition to calculate the value of the given function */
double getFuncVal(double x) {
    return 0.75 + 0.25 * x - 2 * pow(x, 2) + pow(x, 3); // f(x) = x^3 - 2x^2 + 0.25x + 0.75
}

/* Function definition to perform integration using the Trapezoidal Rule */
double trapezoidal(double a, double b, int n) {
    double x, h, sum = 0, integral;
    int i;
    h = fabs(b - a) / n;
    for (i = 1; i < n; i++) {
        x = a + i * h;
        sum += getFuncVal(x);
    }
    integral = (h / 2) * (getFuncVal(a) + getFuncVal(b) + 2 * sum);
    return integral;
}

int main() {
    double a, b;

    /* Ask the user for necessary input */
    printf("Numerical Integration using Trapezoidal Rule\n");
    printf("-------------------------------------------\n");
    printf("Enter the initial limit (a): ");
    scanf("%lf", &a);
    printf("Enter the final limit (b): ");
    scanf("%lf", &b);

    if (a == b) {
        printf("Error: Initial and final limits cannot be the same.\n");
    } else {
        /* Print the answer */
        double result = trapezoidal(a, b, numIntervals);
        printf("The integral of the function over [%.2f, %.2f] using %d intervals is: %.6f\n",
               a, b, numIntervals, result);
    }

    return 0;
}
