// This program to search if the value is within the array

#include <stdio.h>

int main(){
    int key;
    int A[]={4,5,7,8,9,12,5,3,4};
    int N= sizeof(A)/sizeof(A[0]);
    int flag =  0;

    printf("Enter number \n");
    scanf("%d", &key);
    for (int i=0; i<=N; i++){
        if (key==A[i]){
           flag =1;
           printf("the number is in %d order \n", i+1);

        }
    }
    if (flag==0) printf("sorry, it is not here");

}
