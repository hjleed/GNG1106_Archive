/* Local structure*/
#include <stdio.h>

int main ()
{
    struct date
    {
        int day;
        int month;
        int year;
    };
struct date lecture;

lecture.month = 11;
lecture.day = 4;
lecture.year = 2024;
printf("lecture's date is %i/%i/%i.\n", lecture.day, lecture.month, lecture.year);

return 0;
}
