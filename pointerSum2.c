/*		**********
	program 11.12 Programming in C
		Sum Elements ...again...
		   *****	*/

#include <stdio.h>

int main (void)
{
	int arraySum (int *array, const int n);
	int values[10] = { 3, 7, -9, 3, 6, -1, 7, 9, 1, -5 };

	printf ("The sum is %i\n", arraySum (values, 10));

		return 0;
}

	int arraySum (int *array, const int n)
	{
		int sum = 0;
		int *arrayEnd = array + n;	


		/*  no initial value is necessary since the int pointer "array" ...
		   ...refers to array[0] by definition....*/
		for (; array < arrayEnd; array++)
		{
			sum += *array;
		}
		
			return sum;
	}
