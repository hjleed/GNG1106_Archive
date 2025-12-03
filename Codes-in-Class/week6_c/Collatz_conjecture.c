#include <stdio.h>

int test_collatz(int );

int main(){
    int n;
    printf("enter number : ");
    scanf("%d", &n);
    if (test_collatz(n)==1)
        printf(" Done \n");
    else
        printf(" The equation is wrong \n");

    return 0;
}

int test_collatz(int num){

    int flag =0;
    while (num !=1){
    if (num %2 ==0)
        num = num /2;
    else
        num = 3 *  num +1;
    }
    return 1;
}
