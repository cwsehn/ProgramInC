/*		**********
	exercise 14 chapter 10 Programming in C
		Int to String
		   *****	*/

#include <stdio.h>
#include <stdbool.h>

int main (void)
{

	int input;
	char badInput;
	char stringNum[10];
	void intToString(int input, char stringNum[]);

	printf ("\n\n\t\tTurning Numbers Into Character Strings...\n\n");

	do
	{
		printf ("Enter an integer value to be strung...:\n");
		if (scanf ("%i%c", &input, &badInput) != 2 || badInput != '\n')
		{
			printf ("integers only please.....restart program...\n");
			break;
		}
		if (input == 0)
		{
			printf ("Zero.....and I mean that...\n\n");
		}
	}
	while (badInput != '\n'); 
	

	intToString(input, stringNum);
	
	printf ("Your numerical string is ....%s!\n\n", stringNum);

		return 0;
}
	/*  This function is on the convoluted side at the moment...but it does work...
		...some things can't be helped....like the equation that renders an integer to a char....
		...this function states it as ... digit + '0'.... another thing that makes the function
		...less than apparent on first glance....is the modulo process that parses out a multi-digit integer...
		...also found here in the do/while loop....the process renders the result in reverse order...
		...making the final ... forLoop necessary to put humpty dumpty string-digit together properly...
		...oh ...and then there is the creative placement of '\0' char at the beginning of the ....
		...backward char[]  .....it all works ....but it's a little crazy....   */
	void intToString(int input, char stringNum[])
	{
		int i = 1, j = 0, digit;
		bool negative = false;
		char backwardsNum[12] = {'\0'};

		if (input < 0)
		{
			negative = true;
			input = -(input);
		}
		do
		{
			digit = input % 10;
			backwardsNum[i] = digit + '0';
			input = (input - digit) / 10;
			i++;
		}
		while (input != 0);

		if (negative)
		{
			backwardsNum[i] = '-';
			i++;
		}
		for (--i; i >= 0; i-- )
		{
			stringNum[j] = backwardsNum[i];
			j++;
		}
	}

