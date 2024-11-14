#include <stdio.h>
#include <stdlib.h>

/*The #include <stdlib.h> line is necessary because it provides the declarations for several important functions,
 including malloc, calloc, realloc, and free, which are used for dynamic memory allocation in C.*/

void without_malloc() {
    int arr[5]; // Static allocation with fixed size
    for (int i = 0; i < 5; i++) {
        arr[i] = i + 1;
        printf("without_malloc arr[%d] = %d\n", i, arr[i]);
    }
    // No need to free memory; automatically deallocated
}

void with_malloc() {
    int n = 5;
    int *arr = (int *)malloc(n * sizeof(int)); // Dynamic allocation with malloc

    if (arr != NULL) {
    for (int i = 0; i < n; i++) {
        arr[i] = i + 1;
        printf("with_malloc arr[%d] = %d\n", i, arr[i]);
    }

    free(arr); // Need to manually free memory
    }
}

int main() {
    without_malloc();
    with_malloc();
    return 0;
}
