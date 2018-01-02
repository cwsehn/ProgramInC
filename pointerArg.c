/*		**********
	program 11.8 Programming in C
		Pointers as arguments..
		   *****	*/

#include <stdio.h>

int main (void)
{
	int i, *p;
	void test (int *intPointer);	

	i = 50;
	p = &i;

	printf ("Before test is called i = %i\n", i);
	test(p);
	printf ("After test is called i = %i\n", i);

		return 0;
}
		

	void test (int *intPointer)
	{
		*intPointer = 100;


	}	
