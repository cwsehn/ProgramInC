/*		**********
	Program 12.4 Programming in C
		Rotating Bits Function
		   ****	*/

#include <stdio.h>

int main (void)
{
	unsigned int w1 = 0xabcdef00u, w2 = 0xffff1122u;
	unsigned int rotate (unsigned int value, int n);

	printf ("%x\n", rotate (w1, 8));
	printf ("%x\n", rotate (w1, -16));
	printf ("%x\n", rotate (w2, 4));
	printf ("%x\n", rotate (w2, -2));
	printf ("%x\n", rotate (w1, 0));
	printf ("%x\n", rotate (w1, 44));

		return 0;
}


	//Function to rotate an unsigned int left or right
	unsigned int rotate (unsigned int value, int n)
	{
		unsigned int result, bits;

		int test = ~0, bitCount;

		// determine how many bits per int....
		for (bitCount = 0; test < 0; bitCount++)
		{
				test <<= 1;
		}

		// scale down the shift count to a defined range
		if ( n > 0 )
			n = n % bitCount;
		else
			n = -(-n % bitCount);


		if ( n == 0 )
			result = value;
		else if ( n > 0 ) // left rotate
		{
			bits = value >> ( bitCount - n );
			result = value << n | bits;
		}
		else   // right rotate
		{
			n = -n;
			bits = value << ( bitCount - n );
			result = value >> n | bits;
		}

				return result;
	}