/*	**********
	program 11.15 Programming in C
	stringLength by Pointer
	   *****	*/

#include <stdio.h>

int main (void)
{
	int stringLength (const char *string);

	printf ("%i ", stringLength ("stringLength test"));
	printf ("%i ", stringLength (""));
	printf ("%i\n", stringLength ("complete"));

		return 0;
}

	int stringLength (const char *string)
	{
		const char *cptr = string;

		while ( *cptr )
		{
			++cptr;
		}
		/*  pointer subtraction is used to calculate string Length...
			since the original pointer *string points to string[0]...
			...and cptr increments through the string while not '\0'....
			cptr - string == string length... */
		return cptr - string;

	}
