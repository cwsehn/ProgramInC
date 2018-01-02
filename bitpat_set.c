/* 		**********
	exercise 8, chapter 12 - Programming in C
		Bit Pattern Set
			    *****	*/

#include <stdio.h>

int main (void)
{
	void bitpat_set(unsigned int *ptr, unsigned int value, int start, int size);

	printf ("\n\n\tBit Setter\n\n");

	unsigned int packedInt = 0xdddddddd;
	unsigned int *ptr = &packedInt;
	unsigned int plugin = 0xaaa;
	int start = 12, bits = 12;

	printf("the packed int before packing is %8x\n", packedInt);

	bitpat_set (ptr, plugin, start, bits);

	printf("the packed int after packing %x at bit %i is %.8x\n", plugin, start, packedInt);

		return 0;

}

	void bitpat_set(unsigned int *ptr, unsigned int value, int start, int size)
	{
		// determine the bit size of int....
		int test = ~0, bitCount;

		for (bitCount = 0; test < 0; bitCount++)
		{
				test <<= 1;
		}

		int shift = ((bitCount - start) - size);

		value <<= shift;

		/* create a sieve of 0s amongst 1s ....
		  align the 0s with the eventual placement of the plugin value... */
		unsigned int sieve = ~0;
		sieve >>= (bitCount - size);
		sieve <<= shift;
		sieve = ~sieve;

		*ptr &= sieve;

		*ptr |= value;

	}
