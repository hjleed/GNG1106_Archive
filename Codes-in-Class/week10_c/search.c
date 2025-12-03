#include <stdio.h>

// Linear Search: O(n)
int linear_search(int arr[], int n, int targetVal) {
    int steps = 0;
    for (int i = 0; i < n; i++) {
        steps++;
        printf("Step %d: Checking index %d, value=%d\n", steps, i, arr[i]);
        if (arr[i] == targetVal) {
            printf("Found %d at index %d after %d steps.\n", targetVal, i, steps);
            return i;
        }
    }
    printf("%d not found after %d steps.\n", targetVal, steps);
    return -1;
}

// Binary Search: O(log₂ n)
int binary_search(int arr[], int n, int targetVal) {
    int left = 0;
    int right = n - 1;
    int steps = 0;

    while (left <= right) {
        steps++;
        int mid = (left + right) / 2;
        printf("Step %d: left=%d, right=%d, mid=%d, arr[mid]=%d\n",
               steps, left, right, mid, arr[mid]);

        if (arr[mid] == targetVal) {
            printf("Found %d at index %d after %d steps.\n", targetVal, mid, steps);
            return mid;
        }

        if (arr[mid] < targetVal)
            left = mid + 1;
        else
            right = mid - 1;
    }

    printf("%d not found after %d steps.\n", targetVal, steps);
    return -1;
}

int main() {
    int arr[] = {1, 3, 5, 7, 9, 11, 13, 15, 17, 19};
    int n = sizeof(arr) / sizeof(arr[0]);
    int targetVal = 15;

    printf("\n--- Linear Search ---\n");
    linear_search(arr, n, targetVal);

    printf("\n--- Binary Search ---\n");
    binary_search(arr, n, targetVal);

    return 0;
}
