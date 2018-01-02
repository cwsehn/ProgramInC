/*		**********
	exercise 5, chapter 12 - Programming in C
		Bit Test
		   *****	*/

#include <stdio.h>
#include <stdbool.h>

int main (void)
{
	int bitTest(unsigned int x, int n);
	int bitSet(unsigned int x, int n);
	char badInput;
	int result, result2, x, n;

	printf ("\t\tBit Tester\n\n");

	do
	{
		printf ("enter a positive integer for testing....\n");
		if (scanf ("%i%c", &x, &badInput) != 2 || badInput != '\n')
		{
			printf ("input must be a positive integer....\n");
			printf ("Restart program and try again....\n");
			x = 0;
			n = 0;
			break;
		}
		printf ("enter a bit number....\n");
		printf (" ...a bit number of zero designates the bit furthest to the left....\n");
		printf (" ...so an input 0 <= n <= 31 is appropriate for a 32-bit int....\n");

		if (scanf ("%i%c", &n, &badInput) != 2 || badInput != '\n')
		{
			printf ("...once again, your input must be a positive integer....\n");
			printf ("Restart program and try again....\n");
			x = 0;
			n = 0;
			break;
		}
	}
	while (x < 0 && n < 0);

	printf("the hexidecimal value of your input is %x\n", x);
	result = bitTest(x, n);
	printf ("The bit of your choosing is a...%i\n", result);

	result2 = bitSet(x, n);
	printf ("The result of flipping your bit is decimal value...%u\n", result2);

			return 0;
}

	/* function to determine whether a particular bit
	 	in int x is 'on(1)' or 'off(0)'....  */
	int bitTest(unsigned int x, int n)
	{
		int onOff;
		/* a zero n refers to the far left bit.... 
		  increasing n by 1 here aligns it with bitCount formula....*/
		n = n+1;

		// determine the number of bits in the int...
		int test = ~0, bitCount;

		for (bitCount = 0; test < 0; bitCount++)
		{
				test <<= 1;
		}
		printf ("the bitCount for ints on this machine is ..... %i\n", bitCount);

		// scale down the input n value to a defined range...
			n = n % bitCount;

		// shave off all bits to the left of chosen bit...
			x <<= (n - 1);

		/* right shift to put original 'n' value all the way the right... 
			...then identify it as 1 or zero and return value... */
		onOff = (x >> (bitCount - 1)) & 1;

			return onOff;
	}

	/*  function that flips a bit ...
	 and returns the new value .....*/ 
	int bitSet(unsigned int x, int n)
	{
		/* a zero n refers to the far left bit.... 
		  increasing n by 1 here aligns it with bitCount formula....*/
		n += 1;

		// determine the number of bits in the int...
		int test = ~0, bitCount;
		for (bitCount = 0; test < 0; bitCount++)
			test <<= 1;

		// scale down the input n value to a defined range...
			n = n % bitCount;
		/*  shift a 1 surrounded by zeroes into the chosen bit position...
			and XOR it to the original value.....    MAGIC!!....    */
		x ^= (1 << (bitCount - n));

		return x;
	}















