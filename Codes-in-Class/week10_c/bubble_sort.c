#include <stdio.h>

void bubbleSort(int arr[], int n) {
    int flag;  // 0 = false, 1 = true
    for (int i = 0; i < n - 1; i++) {
        flag = 0;  // reset before each pass
        for (int j = 0; j < n - i - 1; j++) {
            if (arr[j] > arr[j + 1]) {
                int temp = arr[j];
                arr[j] = arr[j + 1];
                arr[j + 1] = temp;
                flag = 1;  // swap occurred
            }
        }
        // no swap means array is already sorted
        if (flag == 0)
            break;
    }
}

void printArray(int arr[], int n) {
    for (int i = 0; i < n; i++)
        printf("%d ", arr[i]);
    printf("\n");
}

int main() {
    int arr[] = {77, 12, 35, 42, 5, 101};
    int n = sizeof(arr) / sizeof(arr[0]);

    printf("Original array:\n");
    printArray(arr, n);

    bubbleSort(arr, n);

    printf("\nSorted array:\n");
    printArray(arr, n);

    return 0;
}
