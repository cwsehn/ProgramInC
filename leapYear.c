/*		**********
	This is program 6.5 from Programming in C
		Leap && || Year....
		   *****	*/
#include <stdio.h>

int main (void)
{
	int testYear;

	printf ("\nPlease enter a year to be tested for Leap-titude: ");
	scanf ("%i", &testYear);

	if ((testYear % 4 == 0 && testYear % 100 !=0) || testYear % 400 == 0)
	{
		printf("\nWe've got ourselves a Leaper!!\n");
	}
	else
	{
		printf("\nGeepers, creepers...no Leap Year here...\n");
	}
		return 0;
}
