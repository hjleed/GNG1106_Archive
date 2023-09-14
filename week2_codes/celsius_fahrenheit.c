/* Write program in C program to convert Celcius to Fahrenheit. Ask the user to enter the desired temperature in Celcius, nd the program will conver it to Fahrenheit and print it*/

#include <stdio.h>
int main()
{
    float celsius, fahrenheit;
    printf("Enter temperature in Celsius: ");
    scanf("%f", &celsius);
    //celsius to fahrenheit conversion formula
    fahrenheit = (celsius * 9 / 5) + 32;
    printf("%.2f Celsius = %.2f Fahrenheit", celsius, fahrenheit);
    return 0;
}
