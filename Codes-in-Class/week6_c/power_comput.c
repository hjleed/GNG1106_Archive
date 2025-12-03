#include <stdio.h>

int power(int base, int n);

/* test power function */
int main() {
    
    for (int i = 1; i < 10; ++i){
        printf("%d ^ %2 = %d\n", i, power(i, 2));
		printf("%d ^ %3 = %d\n", i, power(i, 3));
	}
    return 0;
}

/* power: raise base to n-th power; n >= 0 */
int power(int base, int n) {
    int i, p;
    p = 1;
    for (i = 1; i <= n; ++i)
        p = p * base;
    return p;
}