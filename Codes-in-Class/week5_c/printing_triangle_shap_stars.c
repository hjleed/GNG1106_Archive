/*
printing this shape

* 
* * 
* * * 
* * * * 

*/
#include <stdio.h>

int main() {
    int N=5;
    for (int i=0; i<N; i++){
        for (int k=0; k<i; k++)
            printf("* ");
        
        printf("\n");
    }

    return 0;
}