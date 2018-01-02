/*		**********
	exercise 4 Chapter 7 Programming in C
		Floating Average
		   *****	*/
#include <stdio.h>

int main (void)
{
	float values[10], sum;
	int i;
	
	// Gather 10 float values from user....
	for (i = 0; i < 10; i++)
	{
	    printf("Enter floating decimal value #%i: \n", i + 1);
	    scanf ("%f", &values[i]);
	}
	// Sum the values....
	sum = 0;
	for (i = 0; i < 10; i++)
	{
	    sum += values[i];
	}

	printf ("The average of your 10 entries is: %g\n", sum / 10);

		return 0;
}
