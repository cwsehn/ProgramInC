/*		**********
	This is program 6.3 from Programming in C
		even or odd...if/else conditional
		   *****		*/

#include <stdio.h>

int main (void)
{
	int number_to_test, remainder;

	printf ("\nPlease enter a number to be tested for oddness...: ");
	scanf ("%i", &number_to_test);

	remainder = number_to_test % 2;

	if (remainder == 0)
	{
		printf ("\nYour entry displays no signs of oddness...\n");
	} 
	else
	{
		printf ("\nThe value you entered is quite odd!\n");
	}
		return 0;
}
