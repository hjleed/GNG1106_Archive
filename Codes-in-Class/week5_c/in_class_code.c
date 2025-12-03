#include<stdio.h>
int main()
{
	int sum=0, i, x;
	for (i=0; i<10; i++)
	{
		printf("enter an integer\n");
		scanf("%d", &x);
		if (x<0)
			continue;   // or try "continue"
		sum = sum + x;
	}
	printf("the sum is %d\n", sum);
}
