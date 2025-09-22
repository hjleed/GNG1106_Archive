#include <stdio.h>
#include <stdlib.h>
#include <time.h>


int main()
{


	int dieOutcome, userGuess;


	printf("I am tossing a die\n");
	srand(time(NULL));
	dieOutcome=rand()%6+1;


	printf("make your guess\n");
	scanf("%d", &userGuess);


	if (userGuess==dieOutcome)
		printf("You got it!\n");
	else
		printf("Wrong! My die is %d\n", dieOutcome);






	return 0;
}
