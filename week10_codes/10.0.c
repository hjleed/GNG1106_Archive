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

    printf("Enter quiz: ");
    scanf("%d", &student1.quiz);

    printf("Enter grade: ");
    scanf("%f", &student1.grade);

    printf("Displaying:\n");
    printf("quiz number: %d\n", studentPtr->quiz);
    printf("grade is: %f", studentPtr->grade);

    return 0;
}