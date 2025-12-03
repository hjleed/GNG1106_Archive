#include <stdio.h>
#include <string.h>

struct Student {
    int   ID;
    int   age;
    float marks;       // grade
};

/* ---------------------------------------------------- */
void bubbleSort(struct Student arr[], int n, int mode)
{
    for (int i = 0; i < n - 1; ++i) {
        for (int j = 0; j < n - 1 - i; ++j) {
            int do_swap = 0;

            if (mode == 0) {                     // ID
                if (arr[j].ID > arr[j + 1].ID)
                    do_swap = 1;
            }
            else if (mode == 1) {                // age
                if (arr[j].age > arr[j + 1].age)
                    do_swap = 1;
            }
            else if (mode == 2) {                // marks
                if (arr[j].marks > arr[j + 1].marks)
                    do_swap = 1;
            }

            if (do_swap) {
                struct Student tmp = arr[j];
                arr[j]         = arr[j + 1];
                arr[j + 1]     = tmp;
            }
        }
    }
}

/* ---------------------------------------------------- */
void printStudents(const struct Student arr[], int n)
{
    printf("\n ID \t age \t Marks \n");
    for (int i = 0; i < n; ++i) {
        printf("%d \t %d \t %.2f \n", arr[i].ID, arr[i].age, arr[i].marks);
    }
}

/* ---------------------------------------------------- */
int main(void)
{
    /* ---- demo data with ID ---- */
    struct Student students[3] = {
        { 300103, 24, 85.5 },
        { 300101, 22, 90.0 },
        { 300105, 25, 78.0 }
    };
    int n = 3;

    printf("=== Original list ===\n");
    printStudents(students, n);

    /* ---- ask user ---- */
    int choice;
    printf("\n ------\n Sort by:\n");
    printf("  1) ID\n");
    printf("  2) Age\n");
    printf("  3) Grade (marks)\n");
    printf("Enter choice (1, 2 or 3): ");

    if (scanf("%d", &choice) != 1 || choice < 1 || choice > 3) {
        printf("Invalid choice – aborting.\n");
        return 1;
    }

    /* mode for bubbleSort: 0 = ID, 1 = age, 2 = marks */
    int mode = choice - 1;
    bubbleSort(students, n, mode);

    printf("\n=== Sorted list ===\n");
    printStudents(students, n);

    return 0;
}
