#include <stdio.h>
int main()
{
    char str[16]="Hello GNG1106c!";
    char *p;
    p=str;
    printf("First character is:%c\n",*p);
    p =p+1;
    printf("Next character is:%c\n",*p);
	
    printf("Printing all the characters in a string\n");
    p=str;  //reset the pointer
    for(int i=0;i<15;i++)
    {
        printf("%c\n",*p);
        p++;
    }
    return 0;
}