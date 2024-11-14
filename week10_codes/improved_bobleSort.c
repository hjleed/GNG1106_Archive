#include <stdio.h>


void printArray(int *ptrArray, int length)
{
	int i;
	for (i=0; i<length; i++)
		printf("%d\n", ptrArray[i]);
		// or printf("%d\n", *(ptr+i));
}


void swap(int *p, int *q)
{
	int c=*p;
	*p=*q;
	*q=c;
}

void bubbleSortImproved(int *ptrArray, int length)
{
	int i=0; // pass index
	int j; // the left index of the size-2 window
	int someSwapIsDone; // taking value 0/1, (True/False)

	someSwapIsDone=1;
	while ((i<length-1)&&someSwapIsDone)
	{
		printf("pass %d\n", i);
		someSwapIsDone=0;
		for (j=0; j<length-i-1; j++)
			if (ptrArray[j]>ptrArray[j+1])
			{
				swap(ptrArray+j, ptrArray+j+1);
				someSwapIsDone=1;
			}
		i++;
	}
}

int main()
{
	//int A[8]={3, 5, 1, 20, 8, 10, 7, 2};
    int A[8]={1, 2, 3, 4, 5, 6, 7, 8};
	bubbleSortImproved(A, 8);
	printArray(A, 8);
	return 0;
}
