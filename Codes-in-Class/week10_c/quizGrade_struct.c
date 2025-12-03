#include <stdio.h>
struct student
{
   int quiz;
   float grade;
};

int main()
{
    struct student *studentPtr, student1;
    studentPtr = &student1;

    printf("Enter quiz number: ");
    scanf("%d", &student1.quiz);
    printf("Enter grade: ");
    scanf("%f", &student1.grade);
    // ..............................................
    printf("\n\n Displaying 1st way:\n");
    printf("quiz number: %d\n", studentPtr->quiz);
    printf("grade is: %f\n", studentPtr->grade);

    printf("\n\n Displaying 2nd way:\n");
    printf("quiz number: %d\n", (*studentPtr).quiz);
    printf("grade is: %f \n", (*studentPtr).grade);

    printf("\n\n Displaying 3rd way:\n");
    printf("quiz number: %d\n", student1.quiz);
    printf("grade is \n: %f", student1.grade);

    return 0;
}
