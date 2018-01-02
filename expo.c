#include <stdio.h>

int main(void)
{
	double x, cube, square;

	x = 2.55;
	cube = x * x * x;
	square = x * x;

	printf("3x^3 - 5x^2 + 6 = %f\n", 3 * cube - 5 * square + 6);
	return 0;
}
	
