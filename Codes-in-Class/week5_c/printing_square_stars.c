/*
printing this shape

* * * * 
* * * * 
* * * * 
* * * * 
*/
#include <stdio.h>

int main() {
    int row=4, col=4;
    for (int i=0; i<row; i++){
        for (int k=0; k<col; k++)
            printf("* ");
        
        printf("\n");
    }

    return 0;
}