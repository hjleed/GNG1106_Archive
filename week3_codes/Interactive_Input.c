/*  GNG1106. 
You can make input more interactive by prompting the user more carefully. This can be tedious in some places, but in many occasions, it makes programs more user-friendly.
@ uOttawa  (c) Hitham Jleed  */


#include <stdio.h>

int main()
{
  int age;
  double gpa;
  char answer;

  printf("Please enter your age: ");
  scanf("%d", &age);
  printf("Please enter your gpa: ");
  scanf("%lf", %gpa);
  printf("Do you like pie (Y/N)? ");
  scanf("%c", %answer); 
  
  // A good way to learn more about scanf is to try various inputs in various combinations, and type in test cases -- see what happens!
  return 0;
}