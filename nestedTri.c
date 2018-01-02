#include <stdio.h>

int main (void)
{
	int i, n, number, triangularNumber, counter;
	
	printf("How many numbers would you like to triangulate?\n");
	scanf("%i", &counter);	

	for (i = 1; i <= counter; i++) {
		printf ("\nWhat triangular number would you like?: ");
		scanf ("%i", &number);

		triangularNumber = 0;
	
		for ( n = 1; n <= number; n++) {
			triangularNumber += n;
		}
		printf ("The triangular number for %i is %i\n",
					 number, triangularNumber);
	}

		return 0;
}
