/*		**********
		chapter 16, exercise 3 - Programming in C
		     copy files to UPPER CASE
		     *****	*/

#include <stdio.h>
#include <ctype.h>

int main (void)
{
	int c;


	while ((c = getchar()) != EOF)
	{
		c = toupper(c);
		putchar(c);
	}
		return 0;

}