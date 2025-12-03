#include <stdio.h>

int main() {
    int sentinel = 0;
    int sum = 0;
    int q=1;

    while (q !=0) {
        printf("Enter an integer value: ");
        scanf("%d", &sentinel);


        sum += sentinel; // add only valid numbers
        printf("The temp sum is: %d\n", sum);

        printf("To stop, press 0 . Press any number to cont\n");
        scanf("%d", &q);

    }

    printf("The sum of entered values is: %d\n", sum);

    return 0;
}
