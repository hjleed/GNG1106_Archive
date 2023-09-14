/* Write program in C program to find the area of a circle. The programming prints the area of a circle. In the program, use 3.14159 as the value of Pi. To compute it, you need to ask the user to enter the radius.*/

#include<stdio.h>
void main()
{ 
    float a,r;
    printf("Enter the Radius : ");
    scanf("%f",&r);
    a=3.14*r*r;
    printf("Area is %f",a);
}
