/*		**********
	Program 8.9a Programming in C
		Minimum Value Array function
		   ******	*/
#include <stdio.h>

	int main (void)
	{

	    int array1[5] = {-44, 34, 0, 72, -943};
	    int array2[7] = {3, 45, 77, 333, 5, 2, 62};
	    int array3[4] = {12, 44, 2, -66};

	    //  function declaration.....
	    int min2 (int values[], int numberOfElements);
 

	    printf ("\n\n\t\tMinimum Value Function specify Array Size\n\n");

	    printf ("array1 minimum: %i\n", min2(array1, 5));
	    printf ("array2 minimum: %i\n", min2(array2, 7));
	    printf ("array3 minimum: %i\n", min2(array3, 4));

		return 0;
}

	// first example of a declared function defined after main function...
	//  function definition....
	int min2 (int values[], int numberOfElements)
	{
	    int minValue, i;

	    minValue = values[0];

	    for ( i = 1; i < numberOfElements; i++ )
		if ( values[i] < minValue )
		    minValue = values[i];

	    return minValue;
	}
	
	    

