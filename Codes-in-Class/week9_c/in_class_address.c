#include <stdio.h>

int f1(int arr[], int n) {


    int max=arr[0];
    for (int k=0; k<n; k++)
        if (max <arr[k])  {
        max=arr[k];
        }
    return max;
}




int main() {
    int arr[3] = { 1, 2, 3 };

    int n= sizeof(arr)/sizeof(arr[0]);

    printf("max=%d",f1(arr,n));

}
