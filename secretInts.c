/*		*****
	exercise 2 chapter 6 Programming in C
		  ***		*/

#include <stdio.h>

int main (void)
{

	int value1, value2;
	_Bool winner = 0;

	printf ("\nSee if you can solve the secret of the Two Integers...\n");
	
	while (winner == 0)
	{
		printf ("Please enter two integers:\n");
		scanf ("%i %i", &value1, &value2);
	
	
		if (value1 % value2 == 0)
		{
			printf("\nWinner, Winner....CHICKEN DINNER!!!!\n");
			winner = 1;
		}
		else 
			printf("\n...try again....\n");
	}	
		return 0;
}

