/*		**********
	program 11.13 Programming in C
		Copy String
		   *****	*/

#include <stdio.h>

int main (void)
{

	void copyString (char *to, char *from);
	char string[] = "A string to be copied.";
	char string2[50];

	copyString (string2, string);
	printf ("%s\n", string2);

	copyString (string2, "So is this.");
	printf ("%s\n", string2);

		return 0;
}

	void copyString (char *to, char *from)
	{
		
		/*  a variable that represents an array ...or a char array passed as a string inside " "...
			is equivalent to a pointer variable that refers to index 0 of that array....*/
		for (; *from != '\0'; from++, to++)
		{
			*to = *from;
		} 
		*to = '\0';

	}
