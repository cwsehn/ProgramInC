/*		**********	
	chapter 14, exercise 1 - Programming in C
		Function Pointer Type
			   ***	*/

#include <stdio.h>

int main (void)
{
	printf("\t\nTYPE DEF FUNCTION POINTER\n");

	typedef struct
	{
		int (*fnPtr) (void);
	} FunctionPtr;

		return 0;
}