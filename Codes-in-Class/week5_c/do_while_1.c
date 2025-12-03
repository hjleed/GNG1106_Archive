#include <stdio.h>

int main() {
    int sentinel;
    do
    {
        printf("Enter an integer, -1 to exit loop \n");
        scanf("%d", &sentinel);
        printf("You entered: %d \n", sentinel);
    } while (sentinel !=-1);
    return 0;
}