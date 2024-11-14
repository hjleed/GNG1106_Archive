/*Global Structure */
#include <stdio.h>
struct date
{
    int day;
    int month;
    int year;
};

int main ()
{
    struct date lecture;

    lecture.month = 11;
    lecture.day = 4;
    lecture.year = 2024;
    printf("lecture's date is %i/%i/%i.\n", lecture.day, lecture.month, lecture.year);

    struct date Midterm={2, 11, 2024};
    printf("Midterm's date is %i/%i/%i.\n", Midterm.day, Midterm.month, Midterm.year);

    return 0;
}
