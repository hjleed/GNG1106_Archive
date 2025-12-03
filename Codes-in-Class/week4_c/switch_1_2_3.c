#include <stdio.h>
int main()
{
    int x;
    printf("enter 1, 2, or 3\n");
    scanf("%d", &x);

    switch (x)
    {
        case 1:
            printf("You selected option 1\n");
            break;
        case 2:
            printf("You selected option 2\n");
            break;
        case 3:
            printf("You selected option 3\n");
            break;
        default:
            printf("Invalid selection!\n");
    }
    return 0;
}
