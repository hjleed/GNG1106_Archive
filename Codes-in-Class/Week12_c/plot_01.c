#include <stdio.h>
#include <stdlib.h>
int main() {
    // Open a pipe to GNUplot
    FILE *gnuplotPipe = popen("gnuplot -persistent", "w");
    if (gnuplotPipe == NULL) {
        fprintf(stderr, "Error opening pipe to GNUplot.\n");
        return 1;
    }
    fprintf(gnuplotPipe, "set title 'y = x^2'\n"); // Set up the plot
    fprintf(gnuplotPipe, "set xlabel 'X-axis'\n");
    fprintf(gnuplotPipe, "set ylabel 'Y-axis'\n");
    fprintf(gnuplotPipe, "plot '-' with lines title 'y = x^2'\n"); // Plot the function y = x^2
    for (int x = -10; x <= 10; x++) { // Send data points for the plot
        fprintf(gnuplotPipe, "%d %d\n", x, x * x);
    }
    fprintf(gnuplotPipe, "e\n"); // Indicate the end of the data
    pclose(gnuplotPipe); // Close the pipe to GNUplot
    return 0;
}
