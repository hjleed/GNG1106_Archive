#include <stdio.h>

int main()
{
	int K;
	float x;
	int i;
	FILE *fp;

    fp = fopen("data1.txt", "r");
	if (fp!=NULL)
	{
        fscanf(fp, "%d", &K);
		printf("There are %d numbers in the file:\n", K);
		for (i=0; i<K; i++)
		{
			fscanf(fp, "%f", &x);
			printf("%f ", x);
		}
		printf("\n");
		fclose(fp);
	}

	return 0;
}
