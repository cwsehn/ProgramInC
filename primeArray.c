/*		**********
	Program 7.4 Programming in C
		Primes Array
		   *****	*/

/* The following program is so elegently wrought, that it 
	would be ashame to befoul it with comments....
	it uses the integer array type to efficiently produce a list of prime numbers,
	without bothering to test even integers and using the mathematical
	knowledge that prime candidates need only be tested by prime divisors
	that are less than the square root of themselves.....
				see...(isPrime && p / primes[i] >= primes[i])...
	....The elegance of design is enhanced by the incrementation of 
	the primeIndex variable in the primes[primeIndex] array....  */
	

#include <stdio.h>
#include <stdbool.h>

int main (void)
{

	int p, i, primes[50], primeIndex = 2;
	bool isPrime;

	primes[0] = 2;
	primes[1] = 3;

	for ( p = 5; p <= 100; p = p + 2 ) {
		isPrime = true;

		for ( i = 1; isPrime && p / primes[i] >= primes[i]; i++ )
			if ( p % primes[i] == 0 )
				isPrime = false;
	
		if ( isPrime == true ) {
			primes[primeIndex] = p;
			primeIndex++;
		} 

	}

	for ( i = 0; i < primeIndex; i++ )
		printf ("%i ", primes[i]);

	printf ("\n");

		return 0;
}


