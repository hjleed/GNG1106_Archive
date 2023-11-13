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
lecture.day = 13; 
lecture.year = 2023; 
printf("lecture's date is %i/%i/%i.\n", lecture.day, lecture.month, lecture.year);

struct date lab1={16, 11, 2023}; 
printf("lab1's date is %i/%i/%i.\n", lab1.day, lab1.month, lab1.year);

return 0; 
}