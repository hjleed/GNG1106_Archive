#include <stdio.h>
#include <stdlib.h>

// Bubble sort
void sort(int *ptr, int len) {
    int i, j, temp;
    for (i = 0; i < len - 1; i++) {
        for (j = 0; j < len - i - 1; j++) {
            if (ptr[j] > ptr[j + 1]) {
                // Swap
                temp = ptr[j];
                ptr[j] = ptr[j + 1];
                ptr[j + 1] = temp;
            }
        }
    }
}

int median(int *ptr, int len) {
    int i, out, *p;

    // Allocate memory for temporary array to avoid modifying the original array
    p = (int *)malloc(len * sizeof(int));

    for (i = 0; i < len; i++) {
        p[i] = ptr[i];
    }
    sort(p, len);       // Sort the copied array
    out = p[len / 2];   // Get the median
    free(p);            // Free the allocated memory

    return out;
}

int main() {
    int x[5] = {4, 8, 2, 1, 9};

    printf("Median: %d\n", median(x, 5));

    return 0;
}
