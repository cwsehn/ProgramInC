/*		**********
	exercise 7, chapter 12 - Programming in C
		   *****	*/

#include <stdio.h>

int main (void)
{
	unsigned int bitpat_get(unsigned int source, int start, int count);

	printf ("\n\t\tGet the Bits...\n\n");

	unsigned int source = 0xabc8def9;
	int start = 12, count = 4;

	unsigned int gottem = bitpat_get(source, start, count);

	printf ("The extracted bits from %x are represented by hex %x\n", source, gottem);

		return 0;
}

	unsigned int bitpat_get(unsigned int source, int start, int count)
	{
		// determine bit size...
		int test = ~0, bitCount;

		for (bitCount = 0; test < 0; bitCount++)
		{
				test <<= 1;
		}

		int shift = (bitCount - count);
		unsigned int sieve = ~0;

		sieve <<= start;
		sieve >>= (shift);
		sieve <<= (shift - start);

		source &= sieve;
		source >>= (shift - start);

			return source;
	}
