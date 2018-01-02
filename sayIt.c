/*		**********
	exercise 6, Chapter 6 from Programming in C
		one two three...
		   *****  	*/
#include <stdio.h>
#include <stdbool.h>
#include <stdlib.h>

int main (void)
{
	int number, digit, reversal;	

	printf ("\nPlease enter an integer: \n");
	scanf ("%i", &number);
	
	if (number > 99999999)
		{
			printf ("That didn't taste like an integer....");
		}
	
	if (number < 0)
	{	
		number = -number;
		printf ("negative ");
	}

	reversal = 0;

	do 		// number = 932
	{	
		digit = number % 10;  // digit 2, 3
		reversal = reversal * 10 + digit; // reversal 2, 23, 239
		number = number / 10; // number 93, 9, 0
	}
	while (number != 0);

	do 
	{
		digit = reversal % 10; // digit 9, 3, 2
		reversal = reversal / 10; // reversal 23, 2, 0

		switch (digit)
		{
			case 1:
				printf ("one ");
				break;
			case 2:
				printf ("two ");
				break;
			case 3: 
				printf ("three ");
				break;
			case 4:	
				printf ("four ");
				break;
			case 5:
				printf ("five ");
				break;
			case 6:
				printf ("six ");
				break;
			case 7:
				printf ("seven ");
				break;
			case 8: 	
				printf ("eight ");
				break;
			case 9:	
				printf ("nine ");
				break;
			case 0:
				printf ("zero ");
				break;
			default:
				printf ("Integers only, please.... ");
				break;

		}

	}
	while (reversal != 0);
	printf ("\n");

		return 0;
}
