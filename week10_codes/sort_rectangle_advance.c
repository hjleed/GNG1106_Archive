#include <stdio.h>

#define SORT_BY_perimeter 1
#define SORT_BY_area 2

#define SORT_ASCENDING 1
#define SORT_DESCENDING 0

typedef struct {
    int length;
    int width;
    int area;
    int perimeter;
} RECTANGLE;

void AdvBubblesort(RECTANGLE *A, int size, int sort_order, int sort_mode);
int shouldAPrecedeB(RECTANGLE *pA, RECTANGLE *pB, int sort_order, int sort_mode);
void swap(RECTANGLE *A, RECTANGLE *B);
void printArrayOfRectangles(RECTANGLE *arr, int size);

int main() {
    // Initialize rectangles with length and width only
    RECTANGLE rec[3] = {{5, 24}, {3, 6}, {4, 10}};

    // Calculate area and perimeter for each rectangle
    for (int i = 0; i < 3; i++) {
        rec[i].area = rec[i].width * rec[i].length;
        rec[i].perimeter = 2 * (rec[i].width + rec[i].length);
    }

    printf("Rectangle Array Before Sorting:\n");
    printArrayOfRectangles(rec, 3);

    // Sort by area in ascending order
    AdvBubblesort(rec, 3, SORT_ASCENDING, SORT_BY_area);

    printf("\nRectangle Array After Sorting by Area in Ascending Order:\n");
    printArrayOfRectangles(rec, 3);

    return 0;
}

void AdvBubblesort(RECTANGLE *A, int size, int sort_order, int sort_mode) {
    int i = 0;
    int someSwapIsDone = 1;

    while (i < size - 1 && someSwapIsDone) {
        printf("in pass %d\n", i);
        someSwapIsDone = 0;
        for (int j = 0; j < size - i - 1; j++) {
            if (shouldAPrecedeB(A + j + 1, A + j, sort_order, sort_mode)) {
                swap(A + j, A + j + 1);
                someSwapIsDone = 1;
            }
        }
        i++;
    }
}

int shouldAPrecedeB(RECTANGLE *pA, RECTANGLE *pB, int sort_order, int sort_mode) {
    int output = 0;

    switch (sort_mode) {
        case SORT_BY_perimeter:
            output = pA->perimeter < pB->perimeter;
            break;
        case SORT_BY_area:
            output = pA->area < pB->area;
            break;
        default:
            printf("ERROR: SORT_MODE UNKNOWN!!!\n");
    }

    if (!sort_order) {
        output = !output;
    }

    return output;
}

void swap(RECTANGLE *A, RECTANGLE *B) {
    RECTANGLE temp = *A;
    *A = *B;
    *B = temp;
}

void printArrayOfRectangles(RECTANGLE *arr, int size) {
    for (int i = 0; i < size; i++) {
        printf("Rectangle %d: Length = %d, Width = %d, Area = %d, Perimeter = %d\n",
               i + 1, arr[i].length, arr[i].width, arr[i].area, arr[i].perimeter);
    }
}
