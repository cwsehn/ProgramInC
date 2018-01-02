/*		**********
	This is program 6.2 from Programming in C....
		Calculating average and counting failing grades...
		  *****				*/

#include <stdio.h>

int main (void)
{
	int numberOfGrades, i, grade;
	int gradeTotal = 0;
	int failCount = 0;
	float average;

	printf ("\nHow many grades will you be entering? ");
	scanf ("%i", &numberOfGrades);

	for ( i = 1; i <= numberOfGrades; i++ )
	{
		printf ( "\nEnter grade #%i: ", i);
		scanf ( "%i", &grade );

		gradeTotal = gradeTotal + grade;

		if ( grade < 65 )
		{
			failCount++;
		}
	}

	average = (float) gradeTotal / numberOfGrades;

	printf ("\nGrade average = %.4g\n", average);
	printf ("Number of failing grades = %i\n", failCount);

		return 0;
}
	
