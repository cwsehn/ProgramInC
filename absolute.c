/*		**********
	This is a program 6.1 from Programming in C
		Calculating the Absolute Value...
		   *****			*/

#include <stdio.h>

int main (void)
{
	int number;

	printf ("Type in your number: ");
	scanf ("%i", &number);

	if ( number < 0 )
	{
		number = -number;
	}	
	printf ( "The absolute value is %i\n", number);

		return 0;
}
