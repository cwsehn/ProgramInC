#include <stdio.h>
int main (void) 
{
	int numbers[10] = { 1, 0, 0, 0, 0, 0, 0, 0, 0, 0 }; 
	int i, j;

	
	/*  the 'trick' here is that the inner for loops's "i" gets reset to 0 with
		each iteration of the outer loop "j"....
		...causing each successive index (after numbers[1]) to double in value... */

	for(j=0; j<10; ++j) 
		for(i=0; i<j; ++i)
			numbers[j] += numbers[i];

	for(j=0; j<10; ++j) 
		printf ("%i ", numbers[j]);

		printf ("\n");

			return 0; 
}