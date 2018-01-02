/*		**********
	Program 13.3 Programming in C
		Header Files
		   *****	*/

#include <stdio.h>
#include "metric.h"

int main (void)
{
	float liters, gallons;


	printf ("\n\t*** Liters to Gallons ***\n\n");
	printf ("Enter the number of liters: ");
	scanf ("%f", &liters);

	gallons = liters * QUARTS_PER_LITER / 4.0;
	printf("%g liters = %g gallons\n", liters, gallons);

		return 0;
}

