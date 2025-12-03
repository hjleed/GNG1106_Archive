#include <stdio.h>
#include <stdlib.h>

// Function to sort an integer array (using simple Bubble Sort for example)
void sort(int *arr, int len) {
    for (int i = 0; i < len - 1; i++) {
        for (int j = 0; j < len - i - 1; j++) {
            if (arr[j] > arr[j + 1]) {
                int temp = arr[j];
                arr[j] = arr[j + 1];
                arr[j + 1] = temp;
            }
        }
    }
}

// Function to compute the median of an integer array
int median(int *ptr, int len) {
    if (len <= 0) {
        // Handle empty or invalid array length
        return 0;
    }

    int *p = (int *)malloc(len * sizeof(int));
    if (p == NULL) {
        // Handle memory allocation failure
        return 0;
    }

    // Copy the input array to avoid modifying it
    for (int i = 0; i < len; i++) {
        p[i] = ptr[i];
    }

    // Sort the copy
    sort(p, len);

    // Compute median
    int median_val;
    int middle_index = len / 2;

    if (len % 2 == 1) {
        median_val = p[middle_index];
    } else {
        median_val = (p[middle_index - 1] + p[middle_index]) / 2;
    }

    free(p);
    return median_val;
}

int main() {
    int x[5] = {4, 8, 2, 1, 9};
    printf("Median: %d\n", median(x, 5));
    return 0;
}
