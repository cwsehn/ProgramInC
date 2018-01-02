/*		**********
	chapter 13, exercise 6 - Programming in C
		IS_UPPER_CASE macro
		   *****	*/

#include <stdio.h>
#include "inSehn.h"

int main (void)
{
	printf ("\t\nIS_UPPER_CASE macro\n");


	char lower = 'a', upper = 'A';

	printf("%c is upper case.... %i\n", lower, IS_UPPER_CASE(lower));
	printf("%c is upper case.... %i\n", upper, IS_UPPER_CASE(upper));
	printf("%c is lower case.... %i\n", lower, IS_LOWER_CASE(lower));
	printf("%c is lower case.... %i\n", upper, IS_LOWER_CASE(upper));

		return 0;
}