#include <stdio.h>

typedef struct {
    double length;
    double width;
} RECTANGLE;

int shouldAPrecedeB(RECTANGLE *pA, RECTANGLE *pB) {
    double areaA = pA->length * pA->width;
    double areaB = pB->length * pB->width;
    return (areaA < areaB);
}

void sortRectangles(RECTANGLE arr[], int n) {
    for (int i = 0; i < n - 1; i++) {
        for (int j = 0; j < n - i - 1; j++) {
            if (!shouldAPrecedeB(&arr[j], &arr[j + 1])) {
                RECTANGLE temp = arr[j];
                arr[j] = arr[j + 1];
                arr[j + 1] = temp;
            }
        }
    }
}

int main() {
    RECTANGLE rects[] = {
        {4.0, 5.0},
        {2.0, 3.0},
        {3.0, 6.0},
        {1.5, 2.0}
    };
    int n = sizeof(rects) / sizeof(rects[0]);

    sortRectangles(rects, n);

    printf("Rectangles sorted by area (ascending):\n");
    for (int i = 0; i < n; i++) {
        double area = rects[i].length * rects[i].width;
        printf("Rectangle %d: %.2f x %.2f, Area = %.2f\n", i+1, rects[i].length, rects[i].width, area);
    }

    return 0;
}
