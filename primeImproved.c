/*		**********
	Program 6.10A from Programming in C
		<stdbool.h>PrimeCheck...
		   *****	*/
#include <stdio.h>
#include <stdbool.h>

int main (void)
{
	// the variable type bool rather than _Bool is available from <stdbool.h>...
	
	int p, d;
	bool isPrime;


	// the values true and false in place of _Bool values !0 and 0 are <stdbool.h>...
	

	for ( p = 2; p <= 100; p++) {
		isPrime = true;

		/* the following conditional eliminates values other than 2 or 3 
			that are divisible by 2 or 3 from needing to be examined further 
				for prime-ness... */

		if ((p != 2 && p != 3) && (p % 2 == 0 || p % 3 == 0))
		{
			isPrime = false;
		}

		if (isPrime != false)
		{	
			/*  the inner loop can now be initiated at 5 reducing the several iterations.... */ 
			for ( d = 5; d < p; d++ )
			{
				if ( p % d == 0 )
					isPrime = false;
				/*  the following conditional ends this inner for loop as soon 
						as prime conditions prove false... */
				if (isPrime != true)
					break;
			}		
		}		

			if ( isPrime != false )
				printf ("%i ", p);
			
	}	
	
	printf ("\n");
	return 0;
}

