/*		**********
	exercise 11 chapter 8 - Programming in C
		Array Sum
		   *****	 */

#include <stdio.h>

int main (void)
{
	int arraySum (int array[], int elements);
	int array5[5] = {2, 15, 843, 23, 9};
	int array9[9] = {-42, 832, 9, 0, -234, 43, 456, 43, 55};
	int array7[7] = {4356, 77, 7, 777, 563, 3, 17};

	printf ("\t\t\n\nArray Sum Function\n\n");
	
	printf ("The sum of the elements in array5 is %i\n", arraySum(array5, 5));
	printf ("The sum of the elements in array9 is %i\n", arraySum(array9, 9));
	printf ("The sum of the elements in array7 is %i\n", arraySum(array7, 7));
	
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

	


