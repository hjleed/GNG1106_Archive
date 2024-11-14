/*Where i is the number by which the pointer get increased.

32-bit
For 32-bit int variable, it will be incremented by 2 bytes.

64-bit
For 64-bit int variable, it will be incremented by 4 bytes.

Let's see the example of incrementing pointer variable on 64-bit architecture. */
#include<stdio.h>
int main(){
    printf ("new_address= current_address + i * size_of(data type)  \n\n");

    int number=50;
    int *p;     //pointer to int
    p=&number;   //stores the address of number variable
    printf("Address of p variable is %p \n",p);
    p=p+1;
    printf("After increment: Address of p variable is %p \n",p); // in our case, p will get incremented by 4 bytes.
    return 0;
}
