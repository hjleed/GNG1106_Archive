/*
Implicit Rule of Promotion
The result 
........................
size of a: 4 
size of b: 8 
size of a+b: 8 
........................
*/
#include <stdio.h>
  
int main(void)
{
    // Local Declarations
    int a = 12;
    double b = 3.8;

    printf("size of a: %ld \n",sizeof(a)); // int
    printf("size of b: %ld \n",sizeof(b)); // double
    printf("size of a+b: %ld \n",sizeof(a+b)); // int + double = double

    return 0;
}