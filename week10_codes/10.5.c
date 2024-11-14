/*Example of combining the creation of the type name with the creation of the struct data type:*/
#include <stdio.h>
typedef struct
{
    int day;
    int month;
    int year;
}mydate;

int main ()
{

mydate lecture={4, 11, 2024};

printf("lecture's date is %i/%i/%i.\n", lecture.day, lecture.month, lecture.year);

mydate lab1;
lab1=lecture;
lab1.day=7;
printf("lab1's date is %i/%i/%i.\n", lab1.day, lab1.month, lab1.year);

mydate lab2;
lab2=lecture;
printf("lab2's date is %i/%i/%i.\n", lab2.day, lab2.month, lab2.year);
return 0;
}
