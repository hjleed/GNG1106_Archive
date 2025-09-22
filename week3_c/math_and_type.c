#include <stdio.h>
#include <math.h>  // Required for sqrt, pow, round, etc.

int main() {
    int num1 = 5;
    int num2 = 2;

    // Explicit conversion
    float result1 = (float) num1 / num2;     // 2.5
    float result2 = (float)(num1 / num2);    // 2.0 (because integer division happens first)

    // Using math library
    printf("Result1 (float num1 / num2) = %.3f\n", result1);
    printf("Square root of result1 = %.3f\n", sqrt(result1));
    printf("Result1 raised to power 3 = %.3f\n", pow(result1, 3));
    printf("Rounded value of result1 = %.0f\n\n", round(result1));

    printf("Result2 (float)(num1 / num2) = %.3f\n", result2);
    printf("Square root of result2 = %.3f\n", sqrt(result2));
    printf("Result2 raised to power 3 = %.3f\n", pow(result2, 3));
    printf("Rounded value of result2 = %.0f\n", round(result2));

    return 0;
}
