/*		********
	exercise 3, chapter 6, Programming in C
		   ***		*/

#include <stdio.h>

int main (void)
{
	int dividend, divisor;

	printf ("\nPlease enter two integers as dividend and divisor...\n");
	scanf ("%i %i", &dividend, &divisor);
	
	if (divisor != 0)
	{
		printf ("\n%.3f\n", (float) dividend / divisor);
	}
	else
		printf ("\nUNDEFINED\n");

		return 0;
}
