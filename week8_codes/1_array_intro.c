

#include <stdio.h>

int main() {
    int arr[5] = {1, 2, 3, 4, 5};

    printf("size of integer = %d \n", sizeof(int));
    printf("size of (arr) array = %d \n", sizeof(arr));

    printf("number of elements in the array= %d \n",sizeof(arr)/sizeof(int));

    printf("size of on element of array (arr)= %d \n", sizeof(arr[0]));


    printf ("-------------------------- \n");
    int key=6;
    // Print the array
    printf("The result: \n ");
    for(int i = 0; i < 5; i++) {
        if (key==arr[i]){
            printf(" we have the number %d and its position %d \n",key, i+1);
        }
    }

    return 0;
}
