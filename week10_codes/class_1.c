#include <stdio.h>
struct shape
{
    float h;
    float w;

};

int main ()
{

struct shape rec1={13.2, 8.5};
printf("rectangular's shape is %f %f.\n", rec1.h, rec1.w);

double a=rec1.h* rec1.w;
printf("rectangular's area is %f.\n", a);

struct shape *ptr;
ptr = &rec1;   // address of structure lecture

printf("Pointer: rectangular's shape is %f %f.\n", ptr->h, ptr->w);


printf("Pointer: Address of rectangular's shape is %ld %ld.\n", &ptr->h, &ptr->w);

printf ("%ld \n",ptr);
struct shape tri1={13.2, 6.5};
double a1=0.5*tri1.h* tri1.w;
printf("triangle's area is %f.\n", a1);
return 0;
}
