/* Write program in C program to convert Celsius to Fahrenheit. Ask the user to enter the desired temperature in Celsius, and the program will convert it to Fahrenheit and print it*/

#include <stdio.h>
int main()
{
    float celsius, fahrenheit;
    printf("Enter temperature in Celsius: ");
    scanf("%f", &celsius);
    //Celsius to Fahrenheit conversion formula
    fahrenheit = (celsius * 9 / 5) + 32;
    printf("%.2f Celsius = %.2f Fahrenheit", celsius, fahrenheit);
    return 0;
}
