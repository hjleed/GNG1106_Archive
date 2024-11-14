/* Replacement Sort
Lecture 15, page 4/10 */
#include <stdio.h>


void printArray(int *ptrArray, int length)
{
	int i;
	for (i=0; i<length; i++)
		printf("%d\n", ptrArray[i]);
		// or printf("%d\n", *(ptr+i));
}

int getIndexOfLargestInArray(int *ptrArray, int length)
{
	int k=0;//to store the index of the largest value
	int max=ptrArray[k];
	int i;

	for (i=1; i<length; i++)
		if (ptrArray[i]>max)
		{
			max=ptrArray[i];
			k=i;
		}

	return k;
}

void swap(int *p, int *q)
{
	int c=*p;
	*p=*q;
	*q=c;
}

void replacementSort(int *ptrArray, int length)
{
	int i; // pass index
	int k;
	for (i=0; i<length-1; i++)
	{
		k=getIndexOfLargestInArray(ptrArray, length-i);
		swap(ptrArray+k, ptrArray+length-i-1);
	}

}

int main()
{
	int A[8]={3, 5, 1, 20, 8, 10, 7, 2};
	replacementSort(A, 8);
	printArray(A, 8);
	return 0;
}
