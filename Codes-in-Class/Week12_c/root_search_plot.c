#include <stdio.h>
#include <math.h>

#define ALMOST_ZERO 1e-20
#define SUBINTERVAL_SIZE 0.0001

// Evaluate polynomial with Horner's method (faster and more stable)
double evalPoly(int polyDegree, double *polyCoeffs, double x) {
    double result = 0;
    for (int i = polyDegree; i >= 0; i--) {
        result = result * x + polyCoeffs[i];
    }
    return result;
}

// Find a root inside a subinterval
int findARootInSubInterval(int polyDegree, double *polyCoeffs,
                           double leftEnd, double rightEnd, double *ptrFoundRoot) {

    double leftVal = evalPoly(polyDegree, polyCoeffs, leftEnd);
    double rightVal = evalPoly(polyDegree, polyCoeffs, rightEnd);

    if (fabs(leftVal) < ALMOST_ZERO) {      // root exactly at left
        *ptrFoundRoot = leftEnd;
        return 1;
    }

    if (leftVal * rightVal < 0) {           // sign change → root exists
        *ptrFoundRoot = (leftEnd + rightEnd) / 2.0; // midpoint estimate
        return 1;
    }

    return 0;
}

int findAllRootsByIncSearch(int polyDegree, double *polyCoeffs,
                            double xStart, double xEnd, double *ptrAllRootsFound) {
    int numOfRootsFound = 0;
    double left = xStart;

    while (left < xEnd) {
        double right = left + SUBINTERVAL_SIZE;
        if (right > xEnd) right = xEnd;

        if (findARootInSubInterval(polyDegree, polyCoeffs, left, right,
                                   &ptrAllRootsFound[numOfRootsFound])) {
            numOfRootsFound++;
        }
        left = right;
    }

    return numOfRootsFound;
}

void plotting(int polyDegree, double *polyCoeffs, double xStart, double xEnd) {
    FILE *gnuplotPipe = popen("gnuplot -persistent", "w");
    if (!gnuplotPipe) {
        printf("Error: Could not open gnuplot.\n");
        return;
    }

    fprintf(gnuplotPipe, "set title 'Polynomial Plot'\n");
    fprintf(gnuplotPipe, "set xlabel 'x'\n");
    fprintf(gnuplotPipe, "set ylabel 'f(x)'\n");
    fprintf(gnuplotPipe, "set grid\n");
    fprintf(gnuplotPipe, "plot '-' with lines lw 2 title 'f(x)'\n");

    // Send dense sampling for smooth plot
    for (double x = xStart; x <= xEnd; x += 0.01) {
        fprintf(gnuplotPipe, "%lf %lf\n", x, evalPoly(polyDegree, polyCoeffs, x));
    }
    fprintf(gnuplotPipe, "e\n"); // end of data

    fflush(gnuplotPipe);
    printf("Press Enter to close the plot...\n");
    getchar();

    pclose(gnuplotPipe);
}

int main() {
    int polyDegree = 3;
    double polyCoeffs[] = {0.75, 0.25, -2, 1};  // ascending order a0 + a1 x + ...
    double xStart = -1, xEnd = 2;
    double RootsFound[100];

    int numRoots = findAllRootsByIncSearch(polyDegree, polyCoeffs, xStart, xEnd, RootsFound);

    if (numRoots == 0) {
        printf("No roots found in the interval [%.2f, %.2f].\n", xStart, xEnd);
    } else {
        printf("Roots found:\n");
        for (int i = 0; i < numRoots; i++) {
            printf("%.5f\t", RootsFound[i]);
        }
        printf("\n");
    }

    printf("Plotting using GNUPlot...\n");
    plotting(polyDegree, polyCoeffs, xStart, xEnd);

    return 0;
}
