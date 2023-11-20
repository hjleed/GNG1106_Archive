#include <stdio.h>

int main()
{
	int K; 
	float x;
	int i;
	FILE *fp;

	printf("how many numbers to store in the file?\n");
	scanf("%d", &K);
	
	fp = fopen("data.txt", "w");
	if (fp!=NULL)
	{

		fprintf(fp, "%d\n", K);		
		for (i=0; i<K; i++)
		{
			printf("enter a number\n");
			scanf("%f", &x);
			fprintf(fp, "%f ", x);
		}
		fprintf(fp, "\n");
		fclose(fp);
	}

	return 0;
}
