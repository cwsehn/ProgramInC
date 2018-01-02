/*		**********
	program 10.11 Programming in C
		String to Int
		   *****	*/

#include <stdio.h>
#include <stdbool.h>

int main (void)
{

	int strToInt (const char string[]);
	
	printf ("%i\n", strToInt("245"));
	printf ("%i\n", strToInt("-100") + 25);
	printf ("%i\n", strToInt("13x5"));

		return 0;
}

	int strToInt (const char string[])
	{
		int i = 0, intValue, result = 0;
		bool negative = false;
		
		if (string[0] == '-')
			{
				negative = true;
				i++;
			}

		while ( string[i] >= '0' && string[i] <= '9' )
		{
			/*The following line applies a kind of secret coder's formula
			  ...which converts numerical characters into their equivalent ..
			  ...integer values... eg. if char c = '9' and int digit = (c - '0')
			  	...  digit ==  9   */
			intValue = string[i] - '0';
			result = result * 10 + intValue;
			i++;
		}
			if (negative)
			{
				result = -(result);
			}
			return result;
	}
