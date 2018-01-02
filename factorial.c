/*			**********
	This Program calculates factorials 1! through 10!
			   *****			*/

#include <stdio.h>

int main (void)
{
	int i, f;

		printf("\n	  Factorial Table!\n\n");
		printf("	    n	     n!\n");
		printf(" 	   ___	   ______\n");

	for (i = 1, f = 1; i <= 10; i++)
	{
		f = f * i;
		printf("	   %2i	      %i\n", i, f);
			
	}
	 		return 0;
}
