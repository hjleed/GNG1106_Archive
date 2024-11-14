#include <stdio.h>

/* Define a structure for the student record */
struct MidtermStudent {
    char name[50];
    int id;
    float grade;
};

typedef struct MidtermStudent strs;   // We rename (struct MidtermStudent) by (strs)
int main() {
    strs student;

    /* Input student details */
    printf("Enter student's name: ");
    scanf("%s",student.name);

    printf("Enter student's ID: ");
    scanf("%d", &student.id);

    printf("Enter student's grade: ");
    scanf("%f", &student.grade);

    /* Display student details */
    printf("\n--- Midterm Student Record ---\n");
    printf("Name: %s\n", student.name);
    printf("ID: %d\n", student.id);
    printf("Grade: %.2f\n", student.grade);

    return 0;
}
