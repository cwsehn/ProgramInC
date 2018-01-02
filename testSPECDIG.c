/*		**********
	chapter 13, exercise 8 - Programming in C
		IS_DIGIT and IS_SPECIAL macros
		   *****	*/

#include <stdio.h>
#include "inSehn.h"

int main (void)
{
	char lower = 'a', upper = 'A', spec1 = '&', spec2 = '^', spec3 = '\0';
	char x = '9', y = '0', z = '3';


	printf ("\t\nIS_DIGIT macro\n");


	printf("char %c is int %i is digit?.... %i\n", x, x, IS_DIGIT(x));
	printf("char %c is int %i is digit?.... %i\n", spec1, spec1, IS_DIGIT(spec1));
	printf("char %c is int %i is digit?.... %i\n", z, z, IS_DIGIT(z));
	printf("char %c is int %i is digit?.... %i\n", y, y, IS_DIGIT(y));
	printf("char %c is int %i is digit?.... %i\n", upper, upper, IS_DIGIT(upper));


	printf ("\t\nIS_SPECIAL macro\n");

	printf("%c is special?... %i\n", lower, IS_SPECIAL(lower));
	printf("%c is special?.... %i\n", spec3, IS_SPECIAL(spec3));
	printf("%c is special?.... %i\n", spec2, IS_SPECIAL(spec2));
	printf("%c is special?.... %i\n", spec1, IS_SPECIAL(spec1));
	printf("%c is special?.... %i\n", z, IS_SPECIAL(z));

		return 0;
}