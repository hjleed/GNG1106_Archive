
/*  GNG1106. 
The precision specifier is set after the minimum field width specifier.
@ uOttawa  (c) Hitham Jleed  */


#include <stdio.h>

int main()
{
   double cost = 7107.95;
   printf("In 2022, Total for two terms: $%f \n", cost);
   printf("In 2022, Total for two terms: $%e \n", cost);  // Modify the precision number and run the code
   printf("In 2022, Total for two terms: $%.2f \n", cost);;// Modify the width and precision numbers and run the code
   printf("In 2022, Total for two terms: $%.1f \n", cost);;// Modify the width and precision numbers and run the code
   printf("In 2022, Total for two terms: $%9.2f \n", cost);;// Modify the width and precision numbers and run the code
   printf("In 2022, Total for two terms: $%7.2f \n", cost);;// Modify the width and precision numbers and run the code
   printf("In 2022, Total for two terms: $%12.2f \n", cost);;// Modify the width and precision numbers and run the code
   printf("In 2022, Total for two terms: $%12.4f \n", cost);;// Modify the width and precision numbers and run the code

   return 0;
}