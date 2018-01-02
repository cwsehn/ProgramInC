/*		**********	
	exercise 6, chapter 12 - Programming in C
		Bit Pattern Search
			*****	*/

#include <stdio.h>

int main (void)
{
	printf("\n\t\tBit Pattern Search\n\n");

	int bitpat_search (unsigned int source, unsigned int pattern, int n);
	unsigned int source = 0xe1f4;
	unsigned int pattern = 0x5;
	int n = 3;
	int index;


	printf ("Search for bit pattern 101 in 0xe1f4\n\n");

	index = bitpat_search (source, pattern, n);
	if (index >= 0)
	{
		printf ("pattern found at bit %i\n", index);
	}
	else
		printf ("pattern not found in source...\n");
	

		return 0;
}

	int bitpat_search (unsigned int source, unsigned int pattern, int n)
	{
		// determine bitsize of int on current system....
		int test = ~0, bitCount;

		for (bitCount = 0; test < 0; bitCount++)
		{
				test <<= 1;
		}

		int shift = bitCount - n;

		/* determine last 'n' bits in 'pattern'... 
			shave off all extraneous bits ...leaving 'n' bits
			all the way on the right...  */
		pattern <<= shift;
		pattern >>= shift;
		/* use of unsigned ints is critical for this particular technique...
			since otherwise 1s shifted all the way left turn into negative operators...
			causing undesired consequenses... */
		unsigned int segment;

		for (int i = 0; i < shift; i++)
		{
			segment = source >> (shift - i);
			segment <<= shift;
			segment >>= shift;
			if ((pattern - segment) == 0)
			{
				return i;
			}
		}
			return -1;
	}



