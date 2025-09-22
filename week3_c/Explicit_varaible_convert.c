// Explicit conversion is done manually by placing the type in parentheses () in front of the value.
#include <stdio.h>

int main() {
    int num1 = 5;
    int num2 = 2;

    printf("(float) num1 / num2 = %.3f\n", (float) num1 / num2);
    printf("num1 / (float) num2 = %.3f\n", num1 / (float) num2);
    printf("(float) (num1 / num2) = %.3f\n", (float)(num1 / num2));

    return 0;
}
