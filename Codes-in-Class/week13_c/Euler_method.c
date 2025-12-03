#include <stdio.h>
#define STEPS 10        // Number of steps

/* Function definition for the ODE: dy/dx = x^2 - y^2 +1 */
double f(double x, double y) {
    return 3*x*x - y*y + 1;
}


/* Euler Method */
void euler(double x[], double y[], double h) {
    for (int i = 0; i < STEPS; i++) {
        y[i + 1] = y[i] + h * f(x[i], y[i]);  // Euler formula
        x[i + 1] = x[i] + h;
    }
}

/* Save Results to File */
void saveonfile(const char *filename, double x[], double y[]) {
    FILE *fp;    // File pointer

    fp = fopen(filename, "w");  // Open the file in write mode
    if (fp != NULL) {           // Check if the file was opened successfully
        fprintf(fp, "Step\t   x\t       y\n");
        for (int i = 0; i <= STEPS; i++) {
            fprintf(fp, "%d\t%.4f\t%.4f\n", i, x[i], y[i]);
        }
        fclose(fp);  // Close the file
        printf("Results saved to '%s'.\n", filename);
    } else {
        printf("Error opening file '%s' for writing.\n", filename);
    }
}

int main() {
    double x[STEPS + 1], y[STEPS + 1];  // Arrays to store x and y values
    x[0] = 0.0;                        // Initial condition for x
    y[0] = 2.0;                        // Initial condition for y
    double h = 0.1;                    // Step size

    // Compute values using Euler Method
    euler(x, y, h);

    // Print results to the screen
    printf("Numerical Solution using Euler Method:\n");
    printf("Step\t   x\t       y\n");
    printf("-----------------------------\n");
    for (int i = 0; i <= STEPS; i++) {
        printf("%d\t%.4f\t%.4f\n", i, x[i], y[i]);
    }

    // Save results to a file
    saveonfile("euler_results.csv", x, y);

    return 0;
}
