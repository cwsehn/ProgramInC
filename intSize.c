/*		**********
	exercise 3, chapter 12 - Programming in C
		int sizer
		   *****	*/

#include <stdio.h>

int main (void)
{
	int test = ~0, bitCount;

	for (bitCount = 0; test < 0; bitCount++)
	{
			test <<= 1;
	}

		printf ("This system contains %i bits per int....\n", bitCount);

			return 0;
}