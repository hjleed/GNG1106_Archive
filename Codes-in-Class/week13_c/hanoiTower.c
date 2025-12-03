#include <stdio.h>

void hanoi(int n, int source, int target, int buffer) {
    if (n == 1)
        printf("Move disk %d from pole %d to pole %d\n", n, source, target);
    else {
        hanoi(n - 1, source, buffer, target);
        printf("Move disk %d from pole %d to pole %d\n", n, source, target);
        hanoi(n - 1, buffer, target, source);
    }
}

int main() {
    int number;
    printf("Enter number of disks: ");
    if (scanf("%d", &number) != 1 || number <= 0) {
        printf("Invalid number of disks.\n");
        return 1;
    }
    hanoi(number, 1, 3, 2);
    return 0;
}
