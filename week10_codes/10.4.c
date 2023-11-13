#include <stdio.h>
struct date
{
    int day;
    int month;
    int year;
}lecture, lab1;

int main ()
{

struct date lecture;

lecture.month = 11;
lecture.day = 13;
lecture.year = 2023;
printf("lecture's date is %i/%i/%i.\n", lecture.day, lecture.month, lecture.year);

//struct date lab1={16, 11, 2023};
struct date lab1=lecture;
lab1.day=16;
printf("lab1's date is %i/%i/%i.\n", lab1.day, lab1.month, lab1.year);

struct date lab2;
lab2=lecture;
printf("lab2's date is %i/%i/%i.\n", lab2.day, lab2.month, lab2.year);
return 0;
}
