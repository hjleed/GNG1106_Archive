#include <stdio.h>
int main()
{
    int x;
    printf("Welcome to City Hall \n");
    printf("Press 1: Renew License, 2: Renew Sticker, or 3: Pay for parking\n");
    scanf("%d", &x);

    switch (x)
    {
        case 1:
            printf("You are renewing your License...Go to Counter 5\n");
            break;
        case 2:
            printf("Go to Counter 8\n");
            break;
        case 3:
            printf("Go to Counter 2\n");
            break;
        default:
            printf("Invalid selection!\n");
    }
    return 0;
}
