/*		**********
	Program 8.12 Programming in C
		simple sorter
		   *****	*/
#include <stdio.h>

int main (void)
{
	void sort (int a[], int n);

	int i;
	int array[16] = { 34, -5, 6, 0 , 12, 100, 56, 22,
			  44, -3, -9, 12, 17, 22, 6, 11 };

	printf ("The array before the sort:\n");

	for ( i = 0; i < 16; i++ )
	{
	    printf ("%i ", array[i]);	
	}

	sort(array, 16);

	printf ("\n\nThe array after the sort:\n");

	for ( i = 0; i < 16; i++ )
	{
	    printf ("%i ", array[i]);
	}

	printf ("\n");
	
		return 0;
}


/*		**********
	The takeaway from this program is only visible from it's return...
	Despite the sort function's void return spec.....
	The array elements are sorted on output of main....
	This is because when an entire array is passed as an argument to a function...
	The actual array is manipulated in memory...NOT a copy of the variable as is the case
	with other variable types, including individual array elements passed as arguments...
		   *****	*/ 

	void sort (int a[], int n)
	{
	    int i, j, temp;

	    for (i = 0; i < n-1; i++)
	    {
			for (j = i + 1; j < n; j++)
			{
		    	if (a[i] > a[j])
				{
				    temp = a[i];
				    a[i] = a[j];
				    a[j] = temp;
				}
			}
	    }

	}
