/*		**********
	This is program 6.6 from Programming in C
		if else if else...
		   *****	*/
#include <stdio.h>

int main (void)
{
	int number, sign;

	printf ("Please type in a number: ");
	scanf ("%i", &number);

	if (number < 0)
	{
		sign = -1;
	}
	else if (number == 0)
	{
		sign = 0;
	}
	else
	{
		sign = 1;
	}

	printf ("\nSign = %i\n", sign);

		return 0;
}

