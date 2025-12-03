#include <stdio.h>

typedef struct
{
	int length;
	int width;
} RECTANGLE;

void printRectangle(RECTANGLE x)
{
	printf("length=%d, width=%d\n", x.length, x.width);
}

void getRectangleFromUser(RECTANGLE *x)
{
    printf("Enter length and width of rectangle:\n");
    scanf("%d%d", &x->length, &x->width);
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
	RECTANGLE A = {3, 4}, B, C[2] = {{23, 24}, {35, 36}};
    printf("Rectangle A given:\n");
	printRectangle(A);
    printf("Rectangle B not given :\n");
    getRectangleFromUser(&B);
    printRectangle(B);
    printf("Rectangle C given with 2 arrays :\n");
	printArrayOfRectangles(C, 2);

	return 0;
}
