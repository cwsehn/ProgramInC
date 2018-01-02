/*		**********
	exercise 7 chapter 11 Programming in C
		pointer sort
		   *****	*/

#include <stdio.h>




int main (void)
{
	
	/*  IMPORTANT!!...an array of integers (or chars) that is defined...
	  ...as below....has no inherent pointer associated with it...
	  ...therefore one must be declared and defined seperately if needed....
	  ....accomplished below with the *arrayPtr = array ...definition....  */
	int array[] = { 34, -5, 6, -53, 0 , 12, 100, 56, 22,
			  44, -3, -9, 12, 17, 201, 22, 6, 11, 16, -31 };

	void sort( int *array, int n);
	int *arrayPtr = array;
	int *arrayEnd = arrayPtr + 20;

	sort (array, 20);

		while (arrayPtr < arrayEnd)
		{
			printf ("%i ", *arrayPtr);
			arrayPtr++;
		}
		printf("\n");

		return 0;
}


	/*  the formal array argument to this sort function is declared...
	   ...as a pointer to an integer rather than as int array[]...
	      ...an array of integers ...since index values are not present in...
	      ...the execution of the function.....either declaration works, though...*/
	void sort( int *array, int n)
	{
		int temp, *arrayEnd, *arrayPtr;
		arrayEnd = array + n;
		

		while ( array < arrayEnd )
		{
			for (arrayPtr = array + 1; arrayPtr < arrayEnd; arrayPtr++)
			{
				if (*array > *arrayPtr)
				{
					temp = *array;
					*array = *arrayPtr;
					*arrayPtr = temp;
				}
			}
			array++;
		}

	}


