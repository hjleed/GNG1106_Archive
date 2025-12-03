#include <stdio.h>
#include <math.h>

#define MAX_ITER 1000  // Maximum number of iterations
#define SUBINTERVAL_SIZE 0.0001
#define ALMOST_ZERO 1e-20

// Function to evaluate the polynomial at a given x
double evalPoly(int polyDegree, double *polyCoeffs, double x) {
    double result = 0;
    for (int i = 0; i <= polyDegree; i++) {
        result += polyCoeffs[i] * pow(x, i);
    }
    return result;
}

// Bisection method to find a root in the interval [a, b]
int bisectionRootFinder(int polyDegree, double *polyCoeffs, double a, double b, double *root) {
    double f_a = evalPoly(polyDegree, polyCoeffs, a);
    double f_b = evalPoly(polyDegree, polyCoeffs, b);
    if (f_a * f_b > 0) {
        // No root in this interval
        return 0;
    }
    double mid, f_mid;
    for (int i = 0; i < MAX_ITER; i++) {
        mid = (a + b) / 2.0;
        f_mid = evalPoly(polyDegree, polyCoeffs, mid);

        if (fabs(f_mid) < ALMOST_ZERO) {
            *root = mid;  // Found a root
            return 1;
        }
        // Narrow the interval
        if (f_a * f_mid < 0) {
            b = mid;
            f_b = f_mid;
        } else {
            a = mid;
            f_a = f_mid;
        }
    }
    // If we reach here after MAX_ITER, we haven't converged to a root
    *root = mid;  // Return the midpoint as an approximation
    return 1;     // Still count as a found root
}

// Find all roots using incremental search and Bisection Method
int findAllRootsByBisection(int polyDegree, double *polyCoeffs, double xStart,
                            double xEnd, double *ptrAllRootsFound) {
    int numOfRootsFound = 0;
    double right;
    double left = xStart;
    while (left < xEnd) {
        right = left + SUBINTERVAL_SIZE;
        if (right > xEnd) right = xEnd;  // Ensure we do not exceed the interval

        double root;
        if (bisectionRootFinder(polyDegree, polyCoeffs, left, right, &root)) {
            ptrAllRootsFound[numOfRootsFound++] = root;
        }

        left = right;  // Move to the next subinterval
    }
    return numOfRootsFound;
}

int main() {
    int polyDegree = 3;
    double polyCoeffs[] = {0.75, 0.25, -2, 1};  // Coefficients of the polynomial
    double xStart = -1, xEnd = 2;
    double RootsFound[100];  // Array to store found roots (large size for safety)

    int numRoots = findAllRootsByBisection(polyDegree, polyCoeffs, xStart, xEnd, RootsFound);
    if (numRoots == 0) {
        printf("No roots found in the interval [%.2f, %.2f].\n", xStart, xEnd);
    } else {
        printf("The roots are: \n");
        for (int i = 0; i < numRoots; i++) {
            printf("%0.5f\t", RootsFound[i]);
        }
        printf("\n");
    }

    return 0;
}
