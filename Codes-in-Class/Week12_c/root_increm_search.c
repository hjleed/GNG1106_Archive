#include <stdio.h>
#include <math.h>

#define ALMOST_ZERO 1e-20
#define SUBINTERVAL_SIZE 0.0001

// Function to evaluate the polynomial at a given x
double evalPoly(int polyDegree, double *polyCoeffs, double x) {
    double result = 0;
    for (int i = 0; i <= polyDegree; i++) {
        result += polyCoeffs[i] * pow(x, i);
    }
    return result;
}

// Function to find a root in a given subinterval
int findARootInSubInterval(int polyDegree, double *polyCoeffs, double leftEnd,
                           double rightEnd, double *ptrFoundRoot) {
    double leftVal, rightVal;
    int found = 0;
    leftVal = evalPoly(polyDegree, polyCoeffs, leftEnd);
    rightVal = evalPoly(polyDegree, polyCoeffs, rightEnd);

    if (fabs(leftVal) < ALMOST_ZERO) {  // Root at left endpoint
        *ptrFoundRoot = leftEnd;
        found = 1;
    } else if (leftVal * rightVal < 0) {  // Root in the interval
        *ptrFoundRoot = 0.5 * (leftEnd + rightEnd);
        found = 1;
    }
    return found;
}

// Function to find all roots in the interval using incremental search
int findAllRootsByIncSearch(int polyDegree, double *polyCoeffs, double xStart,
                            double xEnd, double *ptrAllRootsFound) {
    int numOfRootsFound = 0;
    double right;
    double left = xStart;
    while (left < xEnd) {
        right = left + SUBINTERVAL_SIZE;
        if (right > xEnd) right = xEnd;  // Ensure we do not exceed the interval

        if (findARootInSubInterval(polyDegree, polyCoeffs, left, right,
                                   &ptrAllRootsFound[numOfRootsFound])) {
            numOfRootsFound++;
        }

        left = right;  // Move to the next subinterval
    }
    return numOfRootsFound;
}

void plotting(int polyDegree, double *polyCoeffs, double xStart, double xEnd) {
    // Open a pipe to gnuplot
    FILE *gnuplotPipe = popen("gnuplot -persistent", "w");
    if (gnuplotPipe == NULL) {
        printf("Error: Could not open pipe to gnuplot.\n");
        return;
    }

    // Set plot style, grid, and title
    fprintf(gnuplotPipe, "set title 'Polynomial Plot'\n");
    fprintf(gnuplotPipe, "set xlabel 'x'\n");
    fprintf(gnuplotPipe, "set ylabel 'f(x)'\n");
    fprintf(gnuplotPipe, "set grid\n");  // Enable grid lines
    fprintf(gnuplotPipe, "plot '-' with lines title 'f(x)'\n");

    // Generate data points and send them to gnuplot
    for (double x = xStart; x <= xEnd; x += 0.01) { // High-density sampling
        fprintf(gnuplotPipe, "%lf %lf\n", x, evalPoly(polyDegree, polyCoeffs, x));
    }
    fprintf(gnuplotPipe, "e\n"); // End of data

    fflush(gnuplotPipe); // Flush the pipe to ensure gnuplot processes the data
    printf("Press Enter to close the plot...\n");
    getchar(); // Wait for user input to close

    // Close gnuplot pipe
    pclose(gnuplotPipe);
}



int main() {
    int polyDegree = 3;
    double polyCoeffs[] = {0.75, 0.25, -2, 1};  // Coefficients of the polynomial
    double xStart = -1, xEnd = 2;
    double RootsFound[100];  // Array to store found roots (large size for safety)

    int numRoots = findAllRootsByIncSearch(polyDegree, polyCoeffs, xStart, xEnd, RootsFound);
    if (numRoots == 0) {
        printf("No roots found in the interval [%.2f, %.2f].\n", xStart, xEnd);
    } else {
        printf("The roots are: \n");
        for (int i = 0; i < numRoots; i++) {
            printf("%0.5f\t", RootsFound[i]);
        }
        printf("\n");
    }
    printf("plotting using GNUPlot: \n");
    plotting(polyDegree, polyCoeffs, xStart, xEnd);
    return 0;
}

