#include <stdio.h>

typedef struct Student {
    char name[50];
    double grade;
} sturecrd;

// Function to swap two student records
void swap(sturecrd *studentA, sturecrd *studentB) {
    sturecrd temp = *studentA;
    *studentA = *studentB;
    *studentB = temp;
}

// Bubble Sort function to sort students by grade in ascending order
void sortStudentsByGrade(sturecrd students[], int size) {
    for (int i = 0; i < size - 1; i++) {
        for (int j = 0; j < size - i - 1; j++) {
            if (students[j].grade < students[j + 1].grade) {
                swap(&students[j], &students[j + 1]);
            }
        }
    }
}

// Function to print all student records
void printArray(sturecrd students[], int size) {
    printf("Sorted by grade:\n");
    for (int i = 0; i < size; i++) {
        printf("%s: %.1f\n", students[i].name, students[i].grade);
    }
}

int main() {
    sturecrd students[] = {
        {"Alice", 85.5},
        {"David", 71.8},
        {"Hitham", 93.0}
    };

    int size = sizeof(students) / sizeof(students[0]); // Calculate array size

    // Sort students by grade
    sortStudentsByGrade(students, size);

    // Print sorted student records
    printArray(students, size);

    return 0;
}
