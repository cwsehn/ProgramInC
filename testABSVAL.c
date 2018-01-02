/*		**********
	chapter 13, exercise 9 - Programming in C
		ABSOLUTE_VALUE macro
		   *****	*/

#include <stdio.h>
#include "inSehn.h"

int main(void)
{
	int x = 99, y = -14, z = -823;
	float f1 = 99.24, f2 = -824.824, f3 = -73.245;


	printf("\t\nABSOLUTE_VALUE macro\n");

	printf("%.3f is the absolute value of %i divided by %f\n", ABSOLUTE_VALUE(x/f1), x, f1);
	printf("%.3f is the absolute value of %i plus %f\n", ABSOLUTE_VALUE(y + f2), y, f2);
	printf("%.3f is the absolute value of %i times %f\n", ABSOLUTE_VALUE(z * f3), z, f3);
	printf("%.3f is the absolute value of %i minus %f\n", ABSOLUTE_VALUE(x - f1), x, f1);

		return 0;
}