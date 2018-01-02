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
	
	for ( p = 2; p <= 50; p++) {
		isPrime = true;

		for ( d = 2; d < p; d++ )
			if ( p % d == 0 )
				isPrime = false;

	/* notice that d !< p when p == 2...the absence of {} in the nested for loop 
		allows that case to slip to here.....   */

			if ( isPrime != false )
				printf ("%i ", p);
			
	}	
	
	printf ("\n");
	return 0;
}

