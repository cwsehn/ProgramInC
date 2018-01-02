/*		**********
	chapter 13, exercise 3 Programming in C
		define MIN test
			***	*/

#include <stdio.h>
#include "inSehn.h"

int main (void)
{
	// header file inSehn initial macro....

	int a, b;
	float x, y;

	a = 224;
	b = 112 * 2;
	x = 14.3 * .8;
	y = 77.9 / 3;

	printf("which is smaller %i or %i .... %d\n", a, b, MIN(a, b));
	printf("which is smaller %f or %f .... %g\n", x, y, MIN(x, y));
	printf("which is smaller %i or %f..... %g\n", a, x, MIN(a, x));
	printf("which is smaller %f or %i..... %g\n", y, b, MIN(y, b));

		return 0;

}