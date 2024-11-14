#include <stdio.h>

void swap(int *ptrA, int *ptrB) {
    int c;
    c = *ptrA;
    *ptrA = *ptrB;
    *ptrB = c;
}
int main() {
    int a, b;
    printf("enter a and b\n");
    scanf("%d%d", &a, &b);
    swap(&a, &b);
    printf("a=%d, b=%d\n", a, b);
    return 0;
}
