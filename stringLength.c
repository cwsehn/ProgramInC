/*		**********
	Program 10.2 Programming in C
		String Length Function
		   *****	*/
#include <stdio.h>

int main (void)
{
	int stringLength (const char string[]);
	/* the first example points out special characters 
		'\033' ... '\"' ... and '\n'...
	  ...which are counted as one char each */
	const char word1[] = {"\033\"Hello\"\n"};
	const char word2[] = {'a', 't', '\0'};
	const char word3[] = {'a', 'w', 'e', '\0'};
 	
	printf ("%i %i %i\n", stringLength(word1), stringLength(word2),
		stringLength(word3));

	return 0;
}

	int stringLength (const char string[])
	{
		
		int count = 0;

		while (string[count] != '\0')
		{
			count++;
		}
		
		return count;
	}
