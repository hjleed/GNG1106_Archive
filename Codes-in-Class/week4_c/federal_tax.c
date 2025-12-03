/*Compute the federal Tax in Canada based on the inditual income
https://www.canada.ca/en/revenue-agency/services/tax/individuals/frequently-asked-questions-individuals/canadian-income-tax-rates-individuals-current-previous-years.html
*/

#include <stdio.h>

int main() {
    double income, tax;

    // 2025 Federal Tax Brackets
    double b1 = 57375.0;
    double b2 = 114750.0;
    double b3 = 177882.0;
    double b4 = 253414.0;

    // Rates
    double r1 = 0.145;
    double r2 = 0.205;
    double r3 = 0.26;
    double r4 = 0.29;
    double r5 = 0.33;

    printf("Enter your taxable income for 2025: $");
    scanf("%lf", &income);

    if (income <= b1) {
        tax = income * r1;
    } else if (income <= b2) {
        tax = b1 * r1 + (income - b1) * r2;
    } else if (income <= b3) {
        tax = b1 * r1 + (b2 - b1) * r2 + (income - b2) * r3;
    } else if (income <= b4) {
        tax = b1 * r1 + (b2 - b1) * r2 + (b3 - b2) * r3 + (income - b3) * r4;
    } else {
        tax = b1 * r1 + (b2 - b1) * r2 + (b3 - b2) * r3 + (b4 - b3) * r4 + (income - b4) * r5;
    }

    printf("Federal tax payable: $%.2f\n", tax);

    return 0;
}
