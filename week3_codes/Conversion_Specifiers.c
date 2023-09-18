/*
A conversion specifier is a symbol that is used as a placeholder in a formatting string. For integer output, %d is the specifier that holds the place for integers.
Here are some commonly used conversion specifiers (not a comprehensive list):

  %d    int (signed decimal integer) 
  %u    unsigned decimal integer 
  %f    floating point values (fixed notation) - float, double 
  %e    floating point values (exponential notation) 
  %s    string 
  %c    character  

*/


#include <stdio.h>

int main()
{
   int numStudents = 47898;
   printf("uOttawa had %d students in 2022", numStudents);
   printf("uOttawa had %10d students in 2022", numStudents);  // field width is 10. Modify the width number and run the code
   printf("%3.8d\n", 1000);// Modify the width and precision numbers and run the code
   printf("%10.15s\n", "This is a simple test."); // Modify the width and precision numbers and run the code

   return 0;
}

