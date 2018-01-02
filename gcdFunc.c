/*		**********
	Program 8.5 Programming in C
		GCD Function
		   *****	*/
#include <stdio.h>

	void gcd(int x, int y)
	{
	    int temp;
	
	    printf ("The Greatest Common Divisor of %i and %i is: ", x, y);
	
	    while ( y!= 0)
	    {
	   	temp = x % y;
		x = y;
		y = temp;	
	    }

		printf ("%i\n", x);
	
		    return;
	}

int main (void)
{
	int value1, value2;
	char badInput;	
	printf ("\n\t\tFinding the Greatest Common Divisor of Two Non-Negative Integers...\n\n");
	

	do
	{
		printf ("Enter a non-negative integer: \n");
		
		if (scanf ("%i%c", &value1, &badInput) != 2 || badInput != '\n')
		{
		    printf ("Non-negative integer values only please...You will have to restart the program.../n");
		    break; 
		}
		
		printf ("Enter a second non-negative integer: \n");
		
		if (scanf ("%i%c", &value2, &badInput) != 2 || badInput != '\n')
		{
		    printf ("Non-negative integer values only please...You will have to restart the program...\n");
		    break;
		}

	    	if ( value1 < 1 || value2 < 1)
		{
		     printf ("At least one of your values is not a non-negative integer, please try again...\n");
		}
	}
	while (value1 < 1 || value2 < 1);

	gcd(value1, value2);
	
		return 0;
}

 
