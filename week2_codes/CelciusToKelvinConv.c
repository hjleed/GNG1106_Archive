/* Write program in C program to convert Celcius to Kelvin. Ask the user to enter the desired temperature in Celcius, nd the program will conver it to kelvin and print it*/

#include<stdio.h>
void main()
{ 
	double c, k;
	printf("Enter the desired temperature in Celcius:\n");
	scanf("%f", &c);
	k = c + 273.15;
	printf("Converted value: %f K\n", k);
	return 0;
}