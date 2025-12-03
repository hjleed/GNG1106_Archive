//
# include <stdio.h>
int main(){

	int A[]={8,9,2,4,3};

	//  A[0]  A[1],    ,  A[4]
	for (int k=0; k<5; k++)
		printf("%d\t", A[k]);
    printf("\n");
    for (int k=4; k>=0; k--)
		printf("%d\t", A[k]);

    printf("\n");

	for (int k=0; k<5; k++)
		printf("%d\t", A[4-k]);
    printf("\n");

    // Compute the maximum value
    int mv= A[0];
    for (int k=1; k<5; k++){
		if (mv< A[k])
		    mv =A[k];
    }
    printf("the Max = %d", mv);

    // Compute the minimum value
    printf("\n");
    int mv1= A[0];
    for (int k=1; k<5; k++){
		if (mv1> A[k])
		    mv1 =A[k];
    }
    printf("the Min = %d", mv1);
    return 0;

}
