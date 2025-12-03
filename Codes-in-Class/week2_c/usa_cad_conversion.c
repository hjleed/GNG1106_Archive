/*
Write a program to convert currency from Canadian Dollar to US

1USD=1.38 CAD as of today Sep 11, 2025 @ 12:55 pm based on XE

*/
#include <stdio.h>

int main() {
    float rate=1.38, CAD, USD;
    printf("Enter currency in CAD: \n");
    scanf("%f",&CAD);
    USD=CAD/rate;
    printf("The %.2f CAD = %0.2f USD \n",CAD,USD);



    return 0;
}
