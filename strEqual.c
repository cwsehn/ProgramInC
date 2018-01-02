/*		**********
	Program 10.4 Programming in C
		String Equality Function
		   *****		*/

#include <stdio.h>
#include <stdbool.h>

int main (void)
{
	bool equalStrings (const char str1[], const char str2[]);
	const char strA[] = "string compare test";
	const char strB[] = "string";

	printf ("%i\n", equalStrings (strA, strB));
	printf ("%i\n", equalStrings (strA, strA));
	/*  the following statement illustrates the ability to pass a character string
		...as an argument to a function that is expecting a constant char[] as input....*/
	printf ("%i\n", equalStrings (strB, "string"));

	return 0;
}

	bool equalStrings (const char str1[], const char str2[])
	{
		int count = 0;
		bool strEqual = false; 

		while ((str1[count] == str2[count]) && 
					  (str1[count] != '\0') && 
			          (str2[count] != '\0'))
		    {count++;}

		
		/*...this function again demonstrates the invisible '\0' character...
		... that is automatically tacked onto the end of character strings....*/
		if (str1[count] == '\0' && str2[count] == '\0')
		{
			strEqual = true;
		}

		return strEqual;
	}
