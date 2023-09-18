/*  GNG1106. 
The precision specifier is set after the minimum field width specifier.
@ uOttawa  (c) Hitham Jleed  */
#include <stdio.h>

int main()
{
   printf("%.4f\n", 123.1234567);  // Modify the precision number and run the code
   printf("%3.8d\n", 1000);// Modify the width and precision numbers and run the code
   printf("%10.15s\n", "This is a simple test."); // Modify the width and precision numbers and run the code

   return 0;
}