/*		**********
	Program 8.9 Programming in C
		Minimum Value Array function
		   ******	*/
#include <stdio.h>

	int minimum (int values[10])
	{
	    int minValue, i;

	    minValue = values[0];

	    for ( i = 1; i < 10; i++ )
		if ( values[i] < minValue )
		    minValue = values[i];

	    return minValue;
	}

	int main (void)
	{

	    int scores[10], i, minScore;
	    int minimum (int values[10]);
            char badInput;

	    printf ("\n\n\t\tMinimum Value Function\n\n");


	    printf ("Enter 10 scores (integers only please)...\n");

	    for ( i = 0; i < 10; i++ )
		if (scanf ("%i%c", &scores[i], &badInput) != 2 || badInput != '\n')
		    {
		        printf ("Error...Bad Input...Re-Start program...\n");
			scores[i] = 0;
			break;
		        
		    }
	
	    minScore = minimum (scores);
	    printf ("\nMinimum score is %i\n", minScore);

		return 0;
}
	
	    

