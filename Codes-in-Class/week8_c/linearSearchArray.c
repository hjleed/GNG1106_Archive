#include <stdio.h>

int main()
{
	int A[10]={3, 4, 6, 90, 23, 78, 12, 45, 34, 2};
	int K; // key
	int pos=-1; // output of search
	int i;

	printf("Enter a search key\n");
	scanf("%d", &K);

	for (i=0;i<10; i++)
		if (K==A[i])
			pos=i;

	if (pos!=-1) // found key in the array
		printf("The index of key in the array is %d\n", pos);
	else
		printf("Key is not found in the array\n");


	return 0;
}
