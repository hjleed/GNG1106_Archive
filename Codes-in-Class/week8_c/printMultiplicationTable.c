#include <stdio.h>

int main()
{
	int A[9][9];
	int i, j;
	for (i=0; i<9; i++)
		for (j=0; j<9; j++)
			A[i][j]=(i+1)*(j+1);


	// print the array

	for (i=0; i<9; i++)
	{
		for (j=0; j<9; j++)
			printf("\t%d", A[i][j]);
		printf("\n");
	}

	return 0;
}
