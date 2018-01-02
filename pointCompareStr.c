/*		**********
	exercise 10 chapter 11 Programming in C
		compare pointers
		   *****	*/

#include <stdio.h>

int main (void)
{
	int compareStrings (const char *str1, const char *str2);

	char string1[] = "little Bo Peep";
	char string2[] = "little Bo Peep";

	printf ("%i \n", compareStrings (string1, string2));



		return 0;
}




	int compareStrings (const char *str1, const char *str2)
	{
		int answer;

		while ( *str1 == *str2 && *str1 != '\0' && *str2 != '\0' )
				{
					str1++;
					str2++;
				}

		/*  the following conditional is critical to the binary search process...
		  ... it compares the first unmatching characters of the two char[] arguments ....
		  ... and returns a flag int (-1, 0, or 1) based on their alphabetical "value"...
		  ... a return of 0 means we have a match...
		  ...-1 indicates str1 precedes str2 alphabetically....1 indicates the opposite...   */
		if ( *str1 < *str2 )
		{
			answer = -1;
		}
		else if ( *str1 == *str2 )
		{
			answer = 0;
		}
		else
		{
			answer = 1;
		}

		return answer;
	}