#include <stdio.h>

typedef struct
{
	int length;
	int width;
	int area;
} RECTANGLE;

void printRectangle(RECTANGLE x)
{
	printf("length=%d, width=%d, area=%d \n", x.length, x.width, x.area);
}

void swap(RECTANGLE *A, RECTANGLE *B) {
    RECTANGLE temp = *A;
    *A = *B;
    *B = temp;
}

// Bubble Sort function to sort in descending order
void Bubblesort(RECTANGLE A[], int size) {
    for (int i = 0; i < size - 1; i++) {
        for (int j = 0; j < size - i - 1; j++) {
            if (A[j].area < A[j + 1].area) {
                swap(&A[j], &A[j + 1]);
            }
        }
    }
}

void printArrayOfRectangles(RECTANGLE arr[], int size)
{
    for (int i = 0; i < size; i++) {
        printf("Rectangle %d: ", i + 1);
        printRectangle(arr[i]);
    }
}

int main()
{
	RECTANGLE C[3] = {{23, 24}, {35, 36}, {4, 6}};  // Corrected array size
    for (int i = 0; i < 3; i++)
        C[i].area = C[i].width * C[i].length;

    printf("Rectangle C given with 3 arrays:\n");
	printArrayOfRectangles(C, 3);

	Bubblesort(C, 3);

    printf("\n Rectangles after sorting by area in descending order:\n");
	printArrayOfRectangles(C, 3);

	return 0;
}
