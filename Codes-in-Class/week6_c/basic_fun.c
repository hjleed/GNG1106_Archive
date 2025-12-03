
/*
Tracing Program in Programming Model
*/
#include <stdio.h>
int sum(int a, int b)
{
	int c;
	c=a+b;
	return c;
}

int main()
{
	int x, y;
	printf("Enter 2 integers\n");
	scanf("%d%d", &x, &y);
	printf("The sum is %d\n", sum(x,y));
	return 0;
}