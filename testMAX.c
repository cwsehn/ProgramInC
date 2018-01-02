/*		*********
	chapter 13, exercise 4 Programming in C
		 	define MAX3
		 	   *** */

#include <stdio.h>
#include "inSehn.h"

int main (void)
{
	printf ("\t\ntesting inSehn.h include MAX3 macro...\n\n");

	int a, b, c;
	float x, y, z;


	a = 99 / 3;
	b = 99 - 3;
	c = 99 + 3;

	x = 88.2/ 4.3;
	y = 3.1415 * 6;
	z = 45.98 * 2.1;


	printf("Which is largest %i, %i or %i ....%d\n", a, b, c, MAX3(a, b, c));
	printf("Which is largest %f, %f or %f ...%g\n", x, y, z, MAX3(x, y, z));

		return 0;
}