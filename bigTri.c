/*        ************************

	 This is a program which calculates a triangular value
		based on the formula:  n(n+1)/2
				***************************	*/

#include <stdio.h>

int main (void)
{

	int n, triangularNumber;

		printf("\n  Triangular Values:\n");
		printf("       n(n+1)/2\n\n");
		printf("   n		 TriVal\n");
		printf(" _____		________\n");

	for (n = 5; n <= 50; n += 5)
	{
		triangularNumber = n*(n+1)/2;

		printf("  %2i		   %i\n", n, triangularNumber);
	}

		return 0;
}

	
