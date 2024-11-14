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

void bubbleSort(int *ptrArray, int length)
{
	int i; // pass index
	int j; // the left index of the size-2 window
	for (i=0; i<length-1; i++)
		for (j=0; j<length-i-1; j++)
			if (ptrArray[j]>ptrArray[j+1])
            {
                swap(ptrArray+j, ptrArray+j+1);
                //swap(&ptrArray[j], &ptrArray[j+1]);
            }


}

int main()
{
	int A[8]={3, 5, 1, 20, 8, 10, 7, 2};
	bubbleSort(A, 8);
	printArray(A, 8);
	return 0;
}