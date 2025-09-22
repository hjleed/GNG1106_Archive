#include <stdio.h>
#define PI 3.1415926


int main()
{
	int radius1, radius2;
	printf("enter an integer for radius 1\n");
	scanf("%d", &radius1);

    printf("enter an integer for radius 2\n");
    scanf("%d", &radius2);

	printf("The entered radii are %d and %d\n", radius1, radius2);
	printf("The two perimeters are %f and %f, and their ratio is %f\n",
		2*PI*radius1, 2*PI*radius2, (float)radius1/radius2);


	return 0;
}
