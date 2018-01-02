/*		**********
	Program 9.6 Programming in C
		Array of Struct(s)
		   *****	*/
#include <stdio.h>

	struct time
	{
		int hour;
		int minute;
		int second;
	};


int main (void)
{	
	struct time timeUpdate (struct time now);
	//struct time nextSec (struct time rightNow);
	struct time testTimes[5] = {{11,59,59}, {12,0,0}, {1,29,59}, {23,59,59}, {21,21,58}};
	int i;



	for (i = 0; i < 5; i++)
	{
	    printf ("Time is %.2i:%.2i:%.2i\n", testTimes[i].hour, 
			testTimes[i].minute, testTimes[i].second);

	    testTimes[i] = timeUpdate(testTimes[i]);

	    printf ("...one second later it's %.2i:%.2i:%.2i\n\n", testTimes[i].hour,
			testTimes[i].minute, testTimes[i].second);
	}	
		return 0;
}


	
	struct time timeUpdate (struct time now)
	{
		now.second++;

		if (now.second == 60)
		{
			now.second = 0;
			now.minute++;
		}
		if (now.minute == 60)
		{
			now.minute = 0;
			now.hour++;
		}
		if (now.hour == 24)
		{
			now.hour = 0;
		}

		return now;
	}	

/*
	struct time nextSec (struct time rightNow)
	{
		rightNow.second++;

		if (rightNow.second == 60)
		{
			rightNow.second = 0;
			rightNow.minute++;
		}
		if (rightNow.minute == 60)
		{
			rightNow.minute = 0;
			rightNow.hour++;
		}
		if (rightNow.hour == 24)
		{
			rightNow.hour = 0;
		}
		
		return rightNow;
	}
*/
		
