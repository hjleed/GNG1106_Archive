/*

Q1. Write a C program to call a function that finds the large number of two integers,
 where the function receives the pointers of the integer numbers and returns the address of the large number.

*/

#include <stdio.h>

int* findLarger(int *n1, int *n2)
{
 if(*n1 > *n2)
    return n1;
 else
    return n2;
}

void main()
{
	int numa=0, numb=0;
	int *result;
	printf("\n a function returning pointer :\n"); 
	printf("--------------------------------------------------\n");
	printf(" Input the first number : ");
    scanf("%d", &numa);
    printf(" Input the second  number : ");
    scanf("%d", &numb); 	

	result=findLarger(&numa, &numb);
	printf(" The number %d is larger.\n",*result);
}
