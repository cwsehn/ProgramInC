/*		**********
	exercise 3 - chapter 9 Programming in C
		Time Elapsed Function
		   *****	*/

#include <stdio.h>

	struct time {
		int hour;
		int minute;
		int second;
		};
	

int main (void)
{
	struct time start, finish, elapsed;
	struct time timeElapsed(struct time begin, struct time end);
	int hours, minutes, seconds;

	printf ("\t\t\n\nEach Passing Second\n\n...tick....tick...tick...\n\n");

	printf("Using a 24 hr clock....\n");
	printf("Please enter a starting time in the format HH:MM:SS \n");
	scanf("%i:%i:%i", &start.hour, &start.minute, &start.second);

	printf("Please enter an ending time in the same manner...\n");
	scanf("%i:%i:%i", &finish.hour, &finish.minute, &finish.second);

	elapsed = timeElapsed(start, finish);

	printf("The total elapsed time from start to finish is:\n");
	printf("%i hours, %i minutes, and %i seconds\n\n",
			 elapsed.hour, elapsed.minute, elapsed.second);

		return 0;
}

	struct time timeElapsed(struct time begin, struct time end)
	{
		struct time past;

		if (end.hour < begin.hour)
		{
			end.hour += 24;				
		}

		if (end.minute < begin.minute)
		{
			end.minute += 60;
			end.hour -= 1;
		}
		if (end.second < begin.second)
		{
			end.second += 60;
			end.minute -= 1;
		}

		past.hour = end.hour - begin.hour;
		past.minute = end.minute - begin.minute;
		past.second = end.second - begin.second;

		return past;
	}

	
