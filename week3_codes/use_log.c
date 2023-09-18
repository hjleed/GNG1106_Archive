// C code to illustrate
// the use of log10 and log (ln) function
#include <math.h>
#include <stdio.h>
  
int main()
{
    double x, ret;
    x = 2.7;
  
    /* finding value of log10(x) */
    ret = log10(x);
    printf("log10(%lf) = %lf\n", x, ret);
	
	/* finding log(x) OR  ln(x)*/
    ret = log(x);
    printf("log(%lf) = %lf", x, ret);
  
    return (0);
}