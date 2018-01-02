/*		**********
	Program 8.11 Programming in C
		Array Arguments
		   *****	*/
#include <stdio.h>

/*		**********
	The takeaway from this program is only visible from it's return...
	Despite the multiplyBy2 function's void return spec.....
	The array elements are doubled on output of main....
	This is because when an entire array is passed as an argument to a function...
	The actual array is manipulated in memory...NOT a copy of the variable as is the case
	with other variable types, including individual array elements passed as arguments...
		   *****	*/ 

int main (void)
{
	void multiplyBy2 (float array[], int n);
	
	int i;
	float floatVals[4] = { 1.2f, -3.7f, 6.2f, 8.55f };

	multiplyBy2 (floatVals, 4);

	for ( i = 0; i < 4; i++)
	    printf ("%.2f ", floatVals[i]);

	printf ("\n");

	return 0;
}

	void multiplyBy2 (float array[], int n)
	{
	    int i;

	    for (i = 0; i < n; i++)
	    {
		array[i] *= 2;
	    }
	}
