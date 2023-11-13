#include <stdio.h>

typedef struct
{
	int length;
	int width;
	char color;
}Widget;


void printArray(Widget *A, int length)
{
	int i;
	for (i=0; i<length; i++)
	{
		// to do
	}
}

void swap (Widget *a, Widget *b)
{
	Widget tmp;
	tmp=*a;
	*a=*b;
	*b=tmp;
}

// this function governs the rule of comparison, based on which sorting is performed. 
int shouldAprocedeB(Widget A, Widget B)
{
	int output=0;
	// to do
	return output;
}


void bubbleSort(Widget *A, int length)
{
	int i; // pass index
	int j; // index of window location (the location of its 1st element)
	for (i=0; i<length-1; i++)
	{
		for (j=0; j<length-i-1; j++)
		{
			//if (A[j]>A[j+1])
			if (shouldAprocedeB(A[j+1], A[j]))
				swap(A+j, A+j+1);
		}
	}
}

int main()
{
	// to do

	return 0;
}
