/*		**********
	exercise 7 chapter 11 Programming in C
		pointer sort
		   *****	*/

#include <stdio.h>




int main (void)
{
	
	int array[] = { 34, -5, 6, -53, 0 , 12, 100, 56, 22,
			  44, -3, -9, 12, 17, 201, 22, 6, 11, 16, -31 };

	void sort( int *array, int n);
	int *arrayEnd = array + 20;
	sort (array, 20);
}


	/*  the formal array argument to this sort function is declared...
	   ...as a pointer to an integer rather than as int array[]...
	      ...an array of integers ...since index values are not present in...
	      ...the execution of the function.....either declaration works, though...*/
	void sort( int *array, int n)
	{
		int temp, *arrayEnd, *arrayPtr, *arrayPtr2;
		arrayEnd = array + n;
		

		for (arrayPtr = array; arrayPtr < arrayEnd; arrayPtr++)
		{
			for (arrayPtr2 = arrayPtr + 1; arrayPtr2 < arrayEnd; arrayPtr2++)
			{
				if (*arrayPtr > *arrayPtr2)
				{
					temp = *arrayPtr;
					*arrayPtr = *arrayPtr2;
					*arrayPtr2 = temp;
				}
			}
		}

		while (array < arrayEnd)
		{
			printf ("%i ", *array);
			array++;
		}
		printf("\n");
	}


