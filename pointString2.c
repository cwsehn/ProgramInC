/*		**********
	program 11.14 Programming in C
		copyString while
		   *****	*/

#include <stdio.h>

int main (void)
{
	void copyString ( char *to, char *from);

	char string1[] = "Here is my string to be copied.";
	char string2[50];

	copyString ( string2, string1);
	printf ("%s\n", string2);

	copyString ( string2, "This too, works just fine.");
	printf ("%s\n", string2);
	
		return 0;
}
	/*  herein....the increment operators are used to progress through the char arrays....
		...since the ++ is placed after the pointer variables, incrementation happens post-assignment...
		...also of note.... while (*from) ...takes advantage of the fact that...
		... the null char has value of 0...therefore false in the conditional sense... */	
	void copyString ( char *to, char *from)
	{
		while (*from)
			{
				*to++ = *from++;
			}
		
			*to = '\0';
	}
