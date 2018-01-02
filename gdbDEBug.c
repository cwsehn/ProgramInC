/*		*********
	Program 18.4 Programming in C
		Use lldb (formerly gdb) to debug this bad code...
		   *****	*/

#include <stdio.h>

int main (void)
{
	const int data[5] = {1, 2, 3, 4, 5};
	int i, sum;

	for (i = 0; i >= 0; i++)
		sum += data[i];
	
	printf ("sum = %i\n", sum);

		return 0;
}

/*  Today I learned that my Mac OSX uses lldb rather than
  gdb as a debugging platform....for the purposes of this 
  lesson, simply replacing "lldb" for "gdb" in the instructions
  suffices...and renders the expected results....*/
