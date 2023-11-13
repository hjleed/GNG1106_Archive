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


void bubbleSort(int *A, int length)
{
	int i=0; // pass index
	int j; // index of window location (the location of its 1st element)
	int swapDone=1; 

	while ((i<length-1)&&swapDone)
	{
		swapDone=0;
		for (j=0; j<length-i-1; j++)
		{
			if (A[j]>A[j+1])
			{
				swap(A+j, A+j+1);
				swapDone=1;
			}
		}
		i++;
	}
}

int main()
{
	int x[6]={8, 2, 1, 6, 4, 3};
	bubbleSort(x, 6);
	printArray(x, 6);
	return 0;
}
