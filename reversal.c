#include <stdio.h>
#include <stdbool.h>

int main (void)
{
	int number, right_digit;
	bool negatory = false;
	
	printf ("Enter your number....\n");
	scanf ("%i", &number);
	
	if ( number == 0 )
	{
		printf("...zero.....really....\n\n");
	}

	if ( number < 0 )
	{
		negatory = true;
		number = -number;
	}

	do
	{
		right_digit = number % 10;
		printf("%i", right_digit);
		number = number / 10;
	}
	while ( number != 0);
	if (negatory)
	{
		printf ("-");
	}

		printf("\nREVERSAL!!!\n");
		
		return 0;
}
