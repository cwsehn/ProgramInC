/*		**********
	Program 8.14 Programming in C
		converting integer bases 
		with functions and global variables
		   *****	*/
#include <stdio.h>

	// remember Global variables have default initial values of 0...
	int      convert[64];
	long int num = 1;
	int 	 base = 10;
	int      digit;
	int 	 ender = 1;


int main (void)
{

	void getNumberAndBase (void);
	void baseConvert (void);
	void displayConvert (void);

	do
	{
		getNumberAndBase(); 
		baseConvert(); 
		displayConvert();
	}
	while (ender != 0);


		return 0;
}


	void getNumberAndBase (void)
	{		
		//  get the number and the base
		char badInput;

		do
		{
			printf ("Number to be converted? ...type 0 to exit program...");
			if (scanf ("%ld%c", &num, &badInput) != 2 || badInput != '\n')
			{
				printf ("Integers Only!!! ...Re-start...");
				break;
			}
			if ( num < 0)
			{
				printf ("Let's not get into negative alternative bases just now....try again...\n");
			}
			if (num == 0)
			{
				ender = (int)num;
			}
		}
		while (num < 0);

		do
		{
			printf ("Base? ");
			if (scanf ("%i%c", &base, &badInput) != 2 || badInput != '\n')
			{
				printf ("choose an integer from 2 to 16...Re-start");
				break;
			}
			if (base < 2 || base > 16)
			{
				printf ("commonly used bases are Binary(2), HexiDecimal(16) or Octal(8)...\n");
				printf ("...therefore, ... please choose an integer between 2 and 16 \n");
			}
		}
		while (base < 2 || base > 16);
	}



	void baseConvert (void)
	{
	// convert to the indicated base

		do
		 {
		    convert[digit] = num % base;
		    digit++;
		    num = num / base;
		 }
		while (num !=0);

		

	}


	void displayConvert (void)
	{

		const char baseDigits[16] = {'0', '1', '2', '3', '4', '5', '6', '7', 
					     			 '8', '9', 'A', 'B', 'C', 'D', 'E', 'F'};

		int nextDigit;

		printf ("Converted number = ");

		// display the results in reverse order
		for (--digit; digit >=0; --digit) 
		{
		    nextDigit = convert[digit];
		    printf ("%c", baseDigits[nextDigit]);
		}

		digit = 0;
		
		printf ("\n");
			
	}


		













	
	

	
