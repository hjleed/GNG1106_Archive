#include <stdio.h>

void swap(int *x, int *y){
   int z;
   z = *x;
   *x = *y;
   *y = z;
}

int main (){

   /* local variable definition */
   int a = 10;
   int b = 20;
   printf("Before swap, value of a: %d\n", a);
   printf("Before swap, value of b: %d\n", b);

   /* calling a function to swap the values */
   swap(&a, &b);
   printf("After swap, value of a: %d\n", a);
   printf("After swap, value of b: %d\n", b);

   return 0;
}
