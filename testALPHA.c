/*		**********
	chapter 13, exercise 7 - Programming in C
		IS_ALPHABETIC macro
		   *****	*/

#include <stdio.h>
#include "inSehn.h"

int main (void)
{
	printf("\t\nIS_ALPHABETIC macro\n");

	char l1 = 'a', l2 = 'V', s1 = '7', s2 = '&';
	int x = 101, y = 41;


	printf("is %c alphabetic....%i\n", l1, IS_ALPHABETIC(l1));
	printf("is %c alphabetic....%i\n", l2, IS_ALPHABETIC(l2));
	printf("is %c alphabetic....%i\n", s1, IS_ALPHABETIC(s1));
	printf("is %c alphabetic....%i\n", s2, IS_ALPHABETIC(s2));
	printf("is %i alphabetic....%i\n", x, IS_ALPHABETIC(x));
	printf("is %c alphabetic....%i\n", x, IS_ALPHABETIC(x));
	printf("is %c alphabetic....%i\n", y, IS_ALPHABETIC(y));

		return 0;
}