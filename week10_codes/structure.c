#include <stdio.h>
typedef struct
{
	float length;
	float width;
}RECTANGLE;

void printRectangle(RECTANGLE rec)
{
	printf("rectangle length=%f, width=%f\n", rec.length, rec.width);

}

void printRectangleAlternativeOrBetter(RECTANGLE *p2rec)
{
        printf("rectangle length=%f, width=%f\n", p2rec->length, p2rec->width);

}

void getRectangleFromUser(RECTANGLE *p2rec)
{
	printf("enter length\n");
	scanf("%f", &p2rec->length);
        printf("enter width\n");
        scanf("%f", &p2rec->width);
}

RECTANGLE getRectangleFromUserAlternative()
{
	RECTANGLE x;
        printf("enter length\n");
        scanf("%f", &x.length);
        printf("enter width\n");
        scanf("%f", &x.width);
	return x;
}

int main()
{
	RECTANGLE A={1, 2}, B={0, 0}, C={0, 0};
	printRectangle(A);
	printRectangleAlternativeOrBetter(&A);
	getRectangleFromUser(&B);
	printRectangle(B);
	C=getRectangleFromUserAlternative();
        printRectangleAlternativeOrBetter(&C);
	return 0;
}
