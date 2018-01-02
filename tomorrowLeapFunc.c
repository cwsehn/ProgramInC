/*		**********
	Program 9.3 Programming in C
		This Tomorrow Does Know...
		   *****	*/
#include <stdio.h>
#include <stdbool.h>

	// struct is defined globally and thereby accessible to all 3 functions within....
	struct date
	{	
	    int month;
	    int day;
	    int year;
	};

int main (void)
{
	
	struct date today, tomorrow;
	struct date nextDay (struct date today);

	printf ("Enter today's date (mm dd yyyy): ");
	scanf("%i%i%i", &today.month, &today.day, &today.year);

	tomorrow = nextDay (today);

	printf ("Tomorrow's date is %i/%i/%.2i.\n", tomorrow.month, tomorrow.day, tomorrow.year %100);
		
		return 0;
}
	

	//  The following is an examle of a function that returns a struct....
	struct date nextDay (struct date today)
	{
		int numberOfDays ( struct date d);
		struct date tomorrow;

	do
	{
		if ( today.day > numberOfDays(today))
		{
			printf ("Invalid Date....mm dd yyyy...ReStart Program ...try again...NOT ");
			return today;
		}
	}
	while (today.day > numberOfDays(today) || today.day < 1);


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
