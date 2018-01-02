/*		**********
	exercise 11 chapter 8 - Programming in C
		Array Sum
		   *****	 */

#include <stdio.h>

	int array[] = {2, 15, 843, 23, 9, 17, 0, 7, 77, 84, -98, -3};
	int elements = 12;

int main (void)
{
	int arraySum (int array[], int elements);


	printf ("\t\t\n\nArray Sum Function\n\n");
	
	printf ("The sum of the elements in the array is %i\n\n", arraySum(array, elements));

	
	return 0;
}
	
	
	int arraySum (int array[], int elements)
	{
		int i, sum;

		for (i = 0; i < elements; i++)
		{
		     sum += array[i];   
		}
		
			return sum;
	
	}

	


