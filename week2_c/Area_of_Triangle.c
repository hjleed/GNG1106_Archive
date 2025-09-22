/* Write a program in C to find the area of a Triangle. The programming prints the area.  To compute it, you need to ask the user to enter the base and height.*/

#include<stdio.h>
void main()
{ 
    float a,b,h;
    printf("Enter the base : ");
    scanf("%f",&b);
    printf("Enter the height : ");
    scanf("%f",&h);
    a=0.5*b*h;
    printf("Area is %f",a);
}
