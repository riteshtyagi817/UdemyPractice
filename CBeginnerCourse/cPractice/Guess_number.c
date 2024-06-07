#include<stdio.h>
#include<stdlib.h>
#include<time.h>
#include<stdbool.h>
int main()
{
	// Intialization stuffs here
	time_t t;
	//seeding
	srand((unsigned)time(&t));


	// this will generate the random number between  0 to 20
	int randomNumber = rand()%21;

	int tries = 5;

	bool game_won = false;
	int guess = 0;
	
	printf("This is a guessing game.\n");
	printf("I have chosen a number between 0 and 20 which you must guess\n"); 


	
	while (tries > 0)
	{
		printf(" You have %d tr%s left\n", tries,tries == 1?"y":"ies");
		printf("\n");
		printf(" Enter a guess: ");
		scanf("%d", &guess);
		if(guess == randomNumber)
		{
			tries--;
			game_won = true;
			break;

		}
		else if(guess < 0 || guess > 20)
			printf(" Your guess should be between 0 and 20\n");
		else if (guess > randomNumber)
		{
			printf("Sorry %d is wrong. My number is less than that.\n", guess);
			tries--;


		}
		else
		{
			
			printf("Sorry %d is wrong. My number is more than that.\n", guess);
			tries--;


		}



	}
	if (game_won)
	{
		printf(" Congratulations: You guessed it!\n");

	
	}
	else
	{
		printf(" Sorry Better luck next time\n");
		printf(" The answer was %d\n", randomNumber);
		


	}
	return 0;
	

	

}
