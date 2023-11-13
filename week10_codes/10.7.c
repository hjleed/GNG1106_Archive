#include <stdio.h>
struct date 
{
    int day;
    int month; 
    int year; 
};

int main ()
{ 

struct date lecture={13, 11, 2023}; 
printf("lecture's date is %i/%i/%i.\n", lecture.day, lecture.month, lecture.year);
struct date lab1={16, 11, 2023}; 
printf("lab1's date is %i/%i/%i.\n", lab1.day, lab1.month, lab1.year);
struct date lab2; 
lab2=lecture;
printf("lab2's date is %i/%i/%i.\n", lab2.day, lab2.month, lab2.year);

struct date *ptr;
ptr = &lecture;   // address of structure lecture
printf("Using pointer: lecture's date is %i/%i/%i.\n", ptr->day, ptr->month, ptr->year);

ptr = &lab1;   // address of structure lecture
printf("Using pointer: lab1's date is %i/%i/%i.\n", ptr->day, ptr->month, ptr->year);
return 0; 
}