#include <stdio.h>
int main() {
    int sum=0;
    int N=5;
    int a;
    for (int i=1; i<=N; i++){
        scanf("%d",&a);
        sum=sum+a; // sum+=i;
        printf("The sum each iteration =%d \n", sum);
      }
    printf("The total sum =%d \n", sum);
    printf("The ave =%0.2lf \n", (double)sum/N);
    return 0;
}
