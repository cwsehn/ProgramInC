/*		**********
	program 10.11 Programming in C
		String to Int
		   *****	*/

#include <stdio.h>
#include <stdbool.h>

int main (void)
{

	float strToFloat (const char string[]);
	
	printf ("%.2f\n", strToFloat("245.89"));
	printf ("%.2f\n", strToFloat("-100") + 25);
	printf ("%.4f\n", strToFloat("-867.6921"));

		return 0;
}


	float strToFloat (const char string[])
	{
		int i = 0, intValue, floatCount = 1;
		float floatValue = 0, result = 0;
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
		if (string[i] == '.')
		{
			floatValue = result;
			result = 0;
			i++;
		}
		while ( string[i] >= '0' && string[i] <= '9' )
		{
			intValue = string[i] - '0';
			result = result * 10 + intValue;
			i++;
			floatCount = floatCount * 10;
		}

		result = result / floatCount;

		floatValue = floatValue + result;


			if (negative)
			{
				floatValue = -(floatValue);
			}
			return floatValue;
	}
