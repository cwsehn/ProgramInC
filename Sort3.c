/*		**********
	exercise 8 chapter 11 Programming in C
		Sort 3 Integers
		   *****	*/

#include <stdio.h>

int main(void)
{
	/* Sort 3 integers into ascending order ...
	...no arrays allowed ... */

	int int1, int2, int3, *one, *two, *three;
	char badInput;
	void threeIntSort (int *one, int *two, int *three);

	do
	{
	printf("Enter integer #1: \n");
	if (scanf("%i%c", &int1, &badInput) != 2 || badInput != '\n')
	{
		printf ("Your input MUST be an integer....RESTART PROGRAM\n");
		int1 = 0; int2 = 0; int3 = 0;
		break;
	}
	printf("Enter integer #2: \n");
	if (scanf("%i%c", &int2, &badInput) != 2 || badInput != '\n')
	{
		printf ("Your input MUST be an integer....RESTART PROGRAM\n");
		int1 = 0;int2 = 0; int3 = 0;
		break;
	}
	printf("Enter integer #3: \n");
	if (scanf("%i%c", &int3, &badInput) != 2 || badInput != '\n')
	{
		printf ("Your input MUST be an integer....RESTART PROGRAM\n");
		int1 = 0; int2 = 0; int3 = 0;
		break;
	}
	}
	while (badInput != '\n');

	printf ("Your input in the order provided: %i, %i, %i\n\n", int1, int2, int3);

	one = &int1;
	two = &int2;
	three = &int3;

	threeIntSort(one, two, three);

	printf ("Your input in ascending order, %i, %i, %i\n\n", *one, *two, *three);


	return 0;
}

	void threeIntSort (int *one, int *two, int *three)
	{
		int x = *one, y = *two, z = *three;

		/* probably a good opportunity for a switch statement..
		  ...also there are really only six possible outcomes...
		  ...so this could be condensed with some || operations.... */
		if (x > y && x > z && y > z)
		{
			*three = x; *two = y; *one = z;	
		}
		if (x > y && x > z && z > y)
		{
			*three = x; *two = z; *one = y;	
		}
		if (y > x && y > z && z > x)
		{
			*three = y; *two = z; *one = x;	
		}
		if (y > x && y > z && x > z)
		{
			*three = y; *two = x; *one = z;	
		}
		if (z > x && z > y && x > y)
		{
			*three = z; *two = x; *one = y;	
		}
		if (z > x && z > y && y > x)
		{
			*three = z; *two = y; *one = x;	
		}
		if (x == y && x > z)
		{
			*three = x; *two = y; *one = z;
		}
		if (x == y && z > x)
		{
			*three = z; *two = y; *one = x;
		}
		if (x == z && x > y)
		{
			*three = x; *two = z; *one = y;
		}
		if (x == z && y > x)
		{
			*three = y; *two = z; *one = x;
		}
		if (z == y && x > z)
		{
			*three = x; *two = y; *one = z;
		}
		if (z == y && z > x)
		{
			*three = z; *two = y; *one = x;
		}

	}








