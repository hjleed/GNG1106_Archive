/* Example: Traversing an Array using the Dereference Operator
We can use this property and use a loop to traverse the array with the dereference operator*/
#include <stdio.h>

int main(){

   int arr[5] = {1, 2, 3, 4, 5};
   int *b = arr;  // int *b= &arr[0];
   int i;

   for(i = 0; i <= 4; i++){
      printf("arr[%d] = %d\n",i,  *(b+i));
      printf("arr[%d] = %d\n",i,  arr[i]);
   }

   return 0;
}
