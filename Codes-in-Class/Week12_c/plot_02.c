#include <stdio.h>
#include <math.h>
#include <stdlib.h>

#define PI 3.14159265
#define NUM_POINTS 100

int main() {
    FILE *data_file = fopen("dataplot.txt", "w");
    if (!data_file) {
        perror("Error opening dataplot.txt");
        return 1;
    }

    // Generate sine data
    for (int i = 0; i < NUM_POINTS; i++) {
        double x = (double)i / (NUM_POINTS - 1) * 2 * PI;
        double y = sin(x);
        fprintf(data_file, "%f %f\n", x, y);
    }

    fclose(data_file);

    // Open gnuplot
    FILE *gnuplot = popen("gnuplot -persistent", "w");
    if (!gnuplot) {
        perror("Error opening gnuplot");
        return 1;
    }

    // Plot commands
    fprintf(gnuplot, "set title 'Sine Wave'\n");
    fprintf(gnuplot, "set xlabel 'x'\n");
    fprintf(gnuplot, "set ylabel 'sin(x)'\n");
    fprintf(gnuplot, "plot 'dataplot.txt' with lines lw 2\n");

    pclose(gnuplot);

    return 0;
}
