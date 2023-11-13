#include <stdio.h>
struct date
{
    int day;
    int month;
    int year;
};

int main ()
{

struct date today;

today.month = 11;
today.day = 13;
today.year = 2023;
printf("Today's date is %i/%i/%i.\n", today.day, today.month, today.year);

return 0;
}
