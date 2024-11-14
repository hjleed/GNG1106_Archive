#include <stdio.h>
int main(){

   int arr[5] = {1, 2, 3, 4, 5};
   int *b = arr;

   printf("Address of a[0]: %p value at a[0] : %d\n",b, *b);

   b++;
   printf("Address of a[1]: %p value at a[1] : %d\n", b, *b);

   b++;
   printf("Address of a[2]: %p value at a[2] : %d\n", b, *b);

   b++;
   printf("Address of a[3]: %p value at a[3] : %d\n", b, *b);

   b++;
   printf("Address of a[4]: %p value at a[4] : %d\n", b, *b);

   return 0;
}
