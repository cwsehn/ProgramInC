/*		**********	
	Program 9.4 Programming in C
		Time Machine		  
		 *****	*/

#include <stdio.h>
	
	struct timer {
	
		int Hour;
		int Minute;
		int Second;
	};

int main (void)
{
	struct timer nextSec (struct timer rightNow);
	struct timer now, next;
	printf ("\t\t\n\nFinding Time\n\n");

	printf ("Enter the time using the following format (hh:mm:ss): \n");
	scanf ("%i:%i:%i", &now.Hour, &now.Minute, &now.Second);
	
	next = nextSec(now);

	printf ("The New Time is:\n %.2i:%.2i:%.2i\n", next.Hour, next.Minute, next.Second);

		return 0;
}

	struct timer nextSec (struct timer rightNow)
	{
		rightNow.Second++;

		if (rightNow.Second == 60)
		{
			rightNow.Second = 0;
			rightNow.Minute++;
		}
		if (rightNow.Minute == 60)
		{
			rightNow.Minute = 0;
			rightNow.Hour++;
		}
		if (rightNow.Hour == 24)
		{
			rightNow.Hour = 0;
		}
		
		return rightNow;
	}
	
