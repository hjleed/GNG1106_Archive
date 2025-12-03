#include <stdio.h>
#include <math.h>
int main()
{
  double x;
  printf("Enter a positive value (or a negative number to quit)\n");
  scanf("%lf", &x);
  if (x>=0){
    printf("The square root of %f is %f\n", x, sqrt(x));
    printf("It is done\n");
  }
  else
  {
      printf("It in negative value \n");
  }
  printf("Good bye");
  return 0;
}
