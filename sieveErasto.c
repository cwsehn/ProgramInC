/*		**********
	exercise 7 Chapter 7 Programming in C	
		Sieve of Erastosthenes
		   *****	*/
#include <stdio.h>

int main (void)
{
	int i, j, n;
	char badInput;
	
	printf("\n\n\t\tThe Sieve of Erastothenes\n\n");
	printf("\tA list of All Prime Numbers Between 1 and input (limit 150)\n\n");

	do 
	{
	    printf("Enter a positve integer between 1 and 150: \n");
	    if (scanf("%i%c", &n, &badInput) !=2 || badInput != '\n')
	    {
	        printf("INTEGERS ONLY!!...you will need to restart the program...\n");
			break;
	    }
	    if (n < 1 || n > 150)
	    {
		printf("...hmmm....try again...\n");
	    }
	}
	while (n < 1 || n > 150);

	int P[n];

	//  Set all indexes of array P == 0
	for (i = 0; i <= n; i++)
	    {
		P[i] = 0;
	    }
	
	//  eliminate multiples of primes less than the input value.... beginning at 2...	
	for (i = 2; i <= n; i++)
	    {
	    	if (P[i] == 0)
			{
		    printf ("%i ", i);
		    
		    for (j = 1; i * j <= n; j++)
				{
			    	P[i*j] = 1;
				}
			}	
	    }

	    printf ("\n");

			return 0;
} 
