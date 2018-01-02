/*		**********
	exercise 10 chapter 8 Programming in C
		check for primeality
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

	unsigned long int primeCheck;
	

int main (void)
{

	bool primeOrNot (unsigned long int primeCheck);
	char badInput;

	printf ("\t\t\nPrime Checker\n\n");

	do
	{
		printf ("\t\t\nEnter a positive integer: \n");
		if (scanf("%lu%c", &primeCheck, &badInput) != 2 || badInput != '\n')
		{
			printf("Your input must be a positive integer....RESTART PROGRAM\n");
			break;
		}
		if (primeCheck < 1)
		{
			printf("Only positive integers can be Prime.....try again...\n");
		}
		if (primeCheck == 1)
		{
			printf("1 is the lonliest number, but it is not considered prime...try again...\n");
		}
	}
	while (primeCheck < 2);


	if (primeOrNot(primeCheck)) 
	{
		printf("%lu is Prime!\n\n", primeCheck);
	}
	else
	{
		printf("%lu ....?...no prime this time....\n\n", primeCheck);
	}


		return 0;
}

	bool primeOrNot (unsigned long int primeCheck)
	{
		//  primeIndex variable is initiallized to 4, since primes [0] - primes[3] are assigned below....
		unsigned long int i, p, primes[primeCheck], primeIndex = 4;
		bool isPrime;

		/*if (primeCheck > 500)
		{
			isPrime = false;
			return isPrime;
		} */

		if (primeCheck == 2 || primeCheck == 3)
		{
			isPrime = true;
			return isPrime;
		}
		if (primeCheck % 2 == 0 || primeCheck % 3 == 0 || primeCheck % 5 == 0 || primeCheck % 7 == 0)
		{
			isPrime = false;
			return isPrime;
		}

		primes[0] = 2;
		primes[1] = 3;
		primes[2] = 5;
		primes[3] = 7;

		for ( p = 11; p <= primeCheck; p = p + 2 ) 
		{
			isPrime = true;

			for ( i = 1; isPrime && p / primes[i] >= primes[i]; i++ )
				if ( p % primes[i] == 0 )
					{
						isPrime = false;
						if (p == primeCheck)
						{
							return isPrime;
						}
					}
		
			if ( isPrime == true ) 
			{
				primes[primeIndex] = p;
				primeIndex++;

				if (p == primeCheck)
				{
					return isPrime;
				}
			} 

		}
			return isPrime;
	}



