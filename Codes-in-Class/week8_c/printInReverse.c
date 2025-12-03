#include <stdio.h>

int main()
{
	int x[10];
	int i;

	printf("Enter 10 integers\n");
	for (i=0;i<10; i++)
		scanf("%d", &x[i]);


	for (i=0; i<10; i++)
		printf("\t\t%d\n", x[9-i]);

	return 0;
}
