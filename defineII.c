/*		**********
	Program 13.2 Programming in C
		Define Pi
		   *****	*/

#include <stdio.h>

#define PI 3.141592654

// alternatively ....M_PI is defined in header file <math.h>....

int main (void)
{
	/* define 3 seperate functions on same line....all return double.....
		... area and cirumference of a circle....volume of sphere....  */
	double  area (double r), circumference (double r), volume (double r);

	printf ("radius = 1: %.4f   %.4f   %.4f\n", 
		area(1.0), circumference(1.0), volume(1.0));

	printf ("radius = 4.98: %.4f   %.4f   %.4f\n", 
		area(4.98), circumference(4.98), volume(4.98));

		return 0;
}

	double area (double r)
	{
		return PI * r * r;
	}

	double circumference (double r)
	{
		return 2.0 * PI * r;
	}

	double volume (double r)
	{
		return 4.0 / 3.0 * PI * r * r * r;
	}
