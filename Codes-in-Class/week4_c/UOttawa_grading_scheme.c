/*
UOttawa Grading Scheme
Passing grade for engineering courses is D
*/
#include <stdio.h>

int main() {
    float score;

    printf("Enter a score: ");
    scanf("%f", &score)


    if (score < 0 || score > 100)
        printf("The grade is Invalid score\n");
    else if (score >= 90)
        printf("The grade is A+\n");
    else if (score >= 85)
        printf("The grade is A\n");
    else if (score >= 80)
        printf("The grade is A-\n");
    else if (score >= 75)
        printf("The grade is B+\n");
    else if (score >= 70)
        printf("The grade is B\n");
    else if (score >= 65)
        printf("The grade is C+\n");
    else if (score >= 60)
        printf("The grade is C\n");
    else if (score >= 55)
        printf("The grade is D+\n");
    else if (score >= 50)
        printf("The grade is D\n");   // passing grade
    else if (score >= 40)
        printf("The grade is E\n");
    else
        printf("The grade is F\n");

    if (score >= 50)
        printf("Congratulation, You passed the course\n");
    else
        printf("Sorry, you need to retake the course\n");

    return 0;
}
