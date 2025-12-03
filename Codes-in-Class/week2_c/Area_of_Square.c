/* Write program in C program to find the area of a squre. The programming prints the area.  To compute it, you need to ask the user to enter the radius.*/

#include<stdio.h>
void main()
{ 
    float a,r;
    printf("Enter the Radius : ");
    scanf("%f",&r);
    a=r*r;
    printf("Area is %f",a);
}
