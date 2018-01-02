/*		**********
	chapter 13, exercise 10 - Programming in C
		printint() macro
		   *****	*/

#include <stdio.h>
#include "inSehn.h"


int main(void)
{
	int x20 = 101;

	for (int i = 1; i < 10; ++i)
	{
		printint(i);
	}

	
	printx(20);

	return 0;
}