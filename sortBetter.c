/*		**********
	Program 8.12 Programming in C
		exercise 13 chapter 8
		sort ascending or descending
		   *****	*/
#include <stdio.h>
#include <stdbool.h>

int n = 20;
int array[] = { 34, -5, 6, -53, 0 , 12, 100, 56, 22,
			  44, -3, -9, 12, 17, 201, 22, 6, 11, 16, -31 };

int main (void)
{
	void sort (int a[], int n, bool ascend);
	void displaySort (int a[], int n);

	int i;


	printf ("\nThe array before the sort:\n");

	for ( i = 0; i < n; i++ )
	{
	    printf ("%i ", array[i]);	
	}
	printf ("\n");

	sort(array, n, true);
	displaySort(array, n);

	
	sort(array, n, false);
	displaySort(array, n);
	
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

	void sort (int a[], int n, bool ascend)
	{
	    int i, j, temp;

	    for (i = 0; i < n-1; i++)
	    {
			for (j = i + 1; j < n; j++)
			{	
				if (ascend == true)
				{
			    	if (a[i] > a[j])
					{
					    temp = a[i];
					    a[i] = a[j];
					    a[j] = temp;
					}
				}
				else {
					if (a[j] > a[i])
					{
						temp = a[j];
						a[j] = a[i];
						a[i] = temp;
					}

				}
			}
	    }

	}

	void displaySort (int a[], int n)
	{
		int i;

		printf ("\nThe array after the sort:\n");

		for ( i = 0; i < n; i++ )
		{
		    printf ("%i ", a[i]);
		}

		printf ("\n\n");

	}
