/* Write a program in the C program to convert Celsius to Kelvin. Ask the user to enter the desired temperature in Celsius, and the program will convert it to kelvin and print it*/

#include<stdio.h>
int main()
{ 
	double c, k;
	printf("Enter the desired temperature in Celcius:\n");
	scanf("%f", &c);
	k = c + 273.15;
	printf("Converted value: %f K\n", k);
	return 0;
}
