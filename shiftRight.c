/*		**********
	exercise 2, chapter 12 - Programming in C
		Right Shift Test....
		   ****	*/

#include <stdio.h>

int main (void)
{
	signed int shiftTest = 0xFF, negatory;

	negatory = -shiftTest;

	printf ("here you should see zero regardless...\n%x\n", shiftTest >> 8);

	printf ("if you see 'FFs' here...%x\n the shift was arithmetic\n", negatory >> 8);
	printf ("if you see zero right shift is 'logical' on this machine...\n ");

		return 0;
}