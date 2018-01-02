/*		**********
	Program 7.2 Programming in C
		Array Counters
		   *****	*/

#include <stdio.h>

int main (void)
{
	int ratingCounters[11], i, response;
	char badEntry;

	// Set counters[1] through counters[10] to zero...
	for ( i = 1; i <= 10; i++ )
		ratingCounters[i] = 0;

	
	/* Gather input from respondents...after instructing 999 exit strategy...
		and store data in ratingCounters array.... */
 
	printf ("Enter 999 when you have finished entering your responses...\n");
 	
	do
	{
	printf ("Enter your response rating (1 to 10): \n");
	
	/*  The following code "trick" prevents an infinite loop from 
		occuring when the user enters a char....
		It appears to be a common flaw with scanf ...especially within loops....  */

	if (scanf ("%i%c", &response, &badEntry) != 2 || badEntry != '\n') // 2 refers to the number of scanf entries...
	{    printf ("INTEGERS ONLY PLEASE! ...Now you will have to begin again :( ....");
	     break;
	}
	else
	    
	    if ( response > 0 && response < 11 )
	    {   
	        ++ratingCounters[response];
	    }
	    else if (response == 999 )
	    {
  	    	printf ("Thanks for playing!\n");
	    }
	    else
		printf ("Bad response: %i\n", response);
	}
	while (response != 999);
			
	

	printf ("\n\nRating  Number of Responses\n");
	printf ("-------- -------------------\n");

	for ( i = 1; i <= 10; i++ )
		printf ("%4i%11i\n", i, ratingCounters[i]);

		return 0;
}
