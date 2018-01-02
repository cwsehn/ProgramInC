/*			**********
		exercise 5 - chapter 9 Programming in C
			Clock Keeper
			   *****	*/

#include <stdio.h>
#include <stdbool.h>

		struct timer {
			int hour;
			int minute;
			int second;
		};

		struct date {
			int month;
			int day;
			int year;
		};

		struct dateAndTime {
			struct date today;
			struct timer now; 
		};


int main (void)
{

		struct dateAndTime clockKeeper(struct dateAndTime currently);
		struct dateAndTime current, newTime;


		printf ("\t\t\nDoes anybody really know what time it is?\n\n");

		printf ("Using a 24hr clock....\n");
		printf ("Enter a time using the following format (hh:mm:ss): \n");
		scanf ("%i:%i:%i", &current.now.hour, &current.now.minute, &current.now.second);

		printf ("Enter a date (mm dd yyyy): ");
		scanf ("%i%i%i", &current.today.month, &current.today.day, &current.today.year);

		newTime = clockKeeper(current);

		printf ("\n\nThe new Date and Time is \n");
		printf ("%.2i %.2i, %i ", newTime.today.month, newTime.today.day, newTime.today.year);
		printf (" %.2i:%.2i:%.2i\n\n", newTime.now.hour, newTime.now.minute, newTime.now.second);


			return 0;
}

	/*  clockKeeper is a function that accepts a dateAndTime structure as an argument...
		  and returns a dateAndTime structure.....
		  ...meanwhile dateAndTime is a structure which has as members....2 structures!!!   */
	struct dateAndTime clockKeeper(struct dateAndTime currently) 
	{
		struct timer nextSec (struct timer rightNow);
		struct date nextDay (struct date today); 
		struct timer newTime;
		struct date newDate;
		struct dateAndTime clocked;
		bool afterMidnite = false;

		newTime = nextSec (currently.now);

		if (currently.now.hour == 23 && newTime.hour == 0)
		{
			afterMidnite = true;
		}

		newDate = currently.today;

		if (afterMidnite)
		{
			newDate = nextDay (currently.today);
		}


		clocked.today = newDate;
		clocked.now = newTime;

			return clocked;


	}


	struct timer nextSec (struct timer rightNow)
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



	struct date nextDay (struct date today)
	{
		int numberOfDays ( struct date d);
		struct date tomorrow;

	do
	{
		if (( today.day > numberOfDays(today) || today.day < 1) || (today.month > 12 || today.month <1))
		{
			printf ("Invalid Date....mm dd yyyy...ReStart Program ...try again...NOT ");
			return today;
		}
	}
	while ((today.day > numberOfDays(today) || today.day < 1) || (today.month > 12 || today.month <1));


	// these conditional responses employ various compound literal syntax...ie shorthand....
	if ( today.day != numberOfDays(today) )
	   {
	   	tomorrow = (struct date) {today.month, today.day + 1, today.year};
	   }

	else if ( today.month == 12 )
	   {
	   	tomorrow = (struct date) {1, 1, today.year + 1};
	   }
	
	else 
	   {
	   	tomorrow = (struct date) {.day = 1, .month = today.month + 1, .year = today.year};
	   }


	   		return tomorrow;

	}


	int numberOfDays ( struct date d)
	{

		bool leapYear (struct date d);
		int days;
		const int daysPerMonth[13] = {29, 31, 28, 31, 30, 31, 30, 31, 31, 30, 31, 30, 31};

		if (leapYear(d) && d.month == 2)
		{
			days = daysPerMonth[0];
		}
		else
		{
			days = daysPerMonth[d.month];
		}

			return days;
	}


	bool leapYear (struct date d)
	{
		bool leapY;

		if ((d.year % 4 != 0) || (d.year % 100 == 0 && d.year % 400 != 0))
		{
			leapY = false;
		}
		else  	
		{
			leapY = true;
		}

			return leapY;


	}
	