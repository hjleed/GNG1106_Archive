#include <stdio.h>

void printArray(int *A, int length)
{
	int i;
	for (i=0; i<length; i++)
		printf("%d\n", A[i]);
}

void swap (int *a, int *b)
{
	int tmp;
	tmp=*a;
	*a=*b;
	*b=tmp;
}

int getIndexOfLargestElementInArray(int *A, int length)
{
	int k=0;
	int i;
	for (i=1; i<length; i++)
		if (A[i]>A[k])
			swap(A+i, A+k);

	return k;
}

void replacementSort(int *A, int length)
{
	int i; // pass index
	int k;
	for (i=0; i<length-1; i++)
	{
		k=getIndexOfLargestElementInArray(A, length-i);
		swap(A+k, A+length-i-1);
	}
}

int main()
{
	int x[6]={8, 2, 1, 6, 4, 3};
	replacementSort(x, 6);
	printArray(x, 6);
	return 0;
}
