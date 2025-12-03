
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
    struct date miderm;

    miderm.month = 10;
    miderm.day = 26;
    miderm.year = 2025;
    printf("Midterm's date was %d/%d/%d.\n", miderm.day, miderm.month, miderm.year);

    struct date finalexam={13, 12, 2025};
    printf("Fanal exam's date will be %d/%d/%d.\n", finalexam.day, finalexam.month, finalexam.year);

    return 0;
}

 
