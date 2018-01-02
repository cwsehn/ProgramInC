/*		**********
	program 11.11 Programming in C
		Array Pointer
		   *****	*/

#include <stdio.h>

int main (void)
{
	int arraySum (int array[], const int n);
	int values[10] = { 3, 7, -9, 3, 6, -1, 7, 9, 1, -5 };

	printf ("The sum is %i\n", arraySum (values, 10));

		return 0;
}

	int arraySum (int array[], const int n)
	{
		int *arrayPoint;
		int sum = 0;
		
		/*  the following statement is necessary in order to make 
		   	...a comparison of type int *....also of note the syntax...
			...array + n is a reference to array[n]...array[10] in this example...
			...which is beyond the end of the array....  */
		int * const arrayEnd = array + n;		

		for (arrayPoint = array; arrayPoint < arrayEnd; arrayPoint++)
		{
			sum += *arrayPoint;
		}
	
			return sum;
	}
