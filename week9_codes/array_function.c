#include <stdio.h>

void funct(int *ptrA, int len) {

     for (int i=0; i<len; i++)
        ptrA[i]=2*ptrA[i];

}
int main() {

    int a[5]={1,2,3,4,5};
    for (int i=0; i<5; i++)
        printf("%d", a[i]);
    funct(a,4);
    printf("-------------\n");
    for (int i=0; i<5; i++)
        printf("%d", a[i]);
    return 0;
}
