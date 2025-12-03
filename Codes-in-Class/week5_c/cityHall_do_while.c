#include <stdio.h>

int main()
{
    int x, sentinel;

    printf("Welcome to City Hall \n");
    do
    {
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
                printf("Invalid selection.\n");
        }
        // Prompt the user to continue or exit (Sentinel control)
        printf("\n------------------------------------------------------\n");
        printf("Enter 0 to exit, or any other number to choose another action: ");
        scanf("%d", &sentinel);
        printf("------------------------------------------------------\n");
    } while (sentinel !=0); 

    return 0;
}