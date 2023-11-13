#include <stdio.h>
typedef struct date 
{
    int day;
    int month; 
    int year; 
}mydate;

int main ()
{ 

mydate lecture={13, 11, 2023}; 

printf("lecture's date is %i/%i/%i.\n", lecture.day, lecture.month, lecture.year);

mydate lab1;
lab1=lecture;
lab1.day=16;
printf("lab1's date is %i/%i/%i.\n", lab1.day, lab1.month, lab1.year);

mydate lab2; 
lab2=lecture;
printf("lab2's date is %i/%i/%i.\n", lab2.day, lab2.month, lab2.year);
return 0; 
}