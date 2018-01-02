/*		**********
	Program 8.15 Programming in C
		Static / Automatic Variables
		    ******	*/
#include <stdio.h>



int main (void)
{
	int i;
	void auto_static (void);

	printf ("\n\t\tAutomatic and Static Variables\n\n");

	for ( i = 0; i < 5; i++ )
		auto_static();

	return 0;
}

	void auto_static (void)
	{
		int          autoVar = 1;
		static int   staticVar = 1;


		printf ("\t\tautomatic = %i, static = %i\n", autoVar, staticVar);

		autoVar++;
		staticVar++;
	}
