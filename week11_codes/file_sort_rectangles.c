#include <stdio.h>

#define NUM_REC 4  // 4 regtagles

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

void AdvBubblesort(RECTANGLE *A, int sort_order, int sort_mode);
int shouldAPrecedeB(RECTANGLE *pA, RECTANGLE *pB, int sort_order, int sort_mode);
void swap(RECTANGLE *A, RECTANGLE *B);
void printArrayOfRectangles(RECTANGLE *arr);
void saveArrayOfRectanglesToFile(char *filename, RECTANGLE *arr);
void ReadArrayfromFile(char *filename, RECTANGLE *arr);

int main() {
    RECTANGLE rec1[NUM_REC] = {{2, 5}, {3, 4}, {1, 8}, {4, 3}};
    RECTANGLE rec2[NUM_REC];

    // Calculate area and perimeter for each rectangle
    for (int i = 0; i < NUM_REC; i++) {
        rec1[i].area = rec1[i].width * rec1[i].length;
        rec1[i].perimeter = 2 * (rec1[i].width + rec1[i].length);
    }

    // Save the original array to origin.txt
    saveArrayOfRectanglesToFile("origin.txt", rec1);
    printf("Rectangle Array Before Sorting:\n");
    printArrayOfRectangles(rec1);
    // --------- Now We will read from the file to (rec2)
    // Read from the file
    ReadArrayfromFile("origin.txt", rec2);
    // Sort the array by area in ascending order
    AdvBubblesort(rec2, SORT_ASCENDING, SORT_BY_area);

    // Save the sorted array to sorted.txt
    saveArrayOfRectanglesToFile("sorted.txt", rec2);
    printf("\nRectangle Array After Sorting by Area in Ascending Order:\n");
    printArrayOfRectangles(rec2);

    return 0;
}

void AdvBubblesort(RECTANGLE *A, int sort_order, int sort_mode) {
    int i = 0;
    int someSwapIsDone = 1;

    while (i < NUM_REC - 1 && someSwapIsDone) {
        someSwapIsDone = 0;
        for (int j = 0; j < NUM_REC - i - 1; j++) {
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
            output = (pA->perimeter < pB->perimeter);
            break;
        case SORT_BY_area:
            output = (pA->area < pB->area);
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

void printArrayOfRectangles(RECTANGLE *arr) {
    for (int i = 0; i < NUM_REC; i++) {
        printf("Rectangle %d: Length = %d, Width = %d, Area = %d, Perimeter = %d\n",
               i + 1, arr[i].length, arr[i].width, arr[i].area, arr[i].perimeter);
    }
}

void saveArrayOfRectanglesToFile(char *filename, RECTANGLE *arr) {
    FILE *file = fopen(filename, "w");
    if (file == NULL) {
        printf("Error opening file %s for writing.\n", filename);
        return;
    }

    for (int i = 0; i < NUM_REC; i++) {
        fprintf(file, "Rectangle %d: Length = %d, Width = %d, Area = %d, Perimeter = %d\n",
                i + 1, arr[i].length, arr[i].width, arr[i].area, arr[i].perimeter);
    }

    fclose(file);
    printf("Data saved to %s successfully.\n -------------\n", filename);
}

void ReadArrayfromFile(char *filename, RECTANGLE *arr) {
    FILE *file = fopen(filename, "r");
    if (file == NULL) {
        printf("Error opening file %s for reading.\n", filename);
        return;
    }

    for (int i = 0; i < NUM_REC; i++) {
        fscanf(file, "Rectangle %*d: Length = %d, Width = %d, Area = %d, Perimeter = %d\n",
               &arr[i].length, &arr[i].width, &arr[i].area, &arr[i].perimeter);
    }

    fclose(file);
    printf("........\nData read from %s successfully.\n............\n", filename);
}
