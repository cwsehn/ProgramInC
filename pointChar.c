/*		**********
	program 11.2 Programming in C
		Char Pointer
		   *****	*/

#include <stdio.h>

int main (void)
{
	char c = 'Q';
	char *char_pointer = &c;

	printf ("%c %c\n", c, *char_pointer);

	c = '/';
	printf ("%c %c\n", c, *char_pointer);

	c = '(';
	printf ("%c %c\n", c, *char_pointer);

	return 0;
}
