#include <stdio.h>

#define NUM_GRADES 3

// Define a structure
typedef struct Student {
    int id;
    char name[50];
    float grades[NUM_GRADES];
} record;

// Function to print student details using a pointer to a struct
void printStudent(record *s) {
    printf("Student ID: %d\n", s->id);               // Accessing id via pointer
    printf("Name: %s\n", s->name);                   // Accessing name via pointer

    printf("Grades: ");
    for (int i = 0; i < NUM_GRADES; i++) {
        printf("%.2f ", s->grades[i]);               // Accessing grades array
    }
    printf("\n");
}

// Main function
int main() {
    // Declare a struct and initialize
    record student1 = {1, "Alice", {85.5, 90.0, 78.3}};

    // Declare a pointer to the struct and assign it the address of student1
    record *Ptr = &student1;

    // Access and modify structure members using the pointer
    Ptr->id = 2;                              // Modifying id using pointer
    Ptr->grades[1] = 92.5;                    // Modifying an element in grades array

    // Print student details using function
    printStudent(studentPtr);

    // Access individual elements directly using pointer arithmetic
    float *gradePtr = Ptr->grades;            // Pointer to first element in grades array
    printf("First Grade: %.2f\n", *gradePtr);        // Access first grade
    printf("Second Grade: %.2f\n", *(gradePtr + 1)); // Access second grade using pointer arithmetic
    // Another way
    printf("First Grade: %.2f\n", (*Ptr).grades;        // Access first grade
    printf("Second Grade: %.2f\n", (*( Ptr+ 1)).grades); // Access second grade using pointer arithmetic

    return 0;
}
