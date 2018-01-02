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
	int numberOfDays ( struct date d);

	printf ("Enter today's date (mm dd yyyy): ");
	scanf("%i%i%i", &today.month, &today.day, &today.year);

	//  the following conditional uses a struct as an argument to a function call.....
	if ( today.day != numberOfDays(today) )
	   {
	   	tomorrow.day = today.day + 1;
	   	tomorrow.month = today.month;
	   	tomorrow.year = today.year;
	   }

	else if ( today.month == 12 )
	   {
		tomorrow.day = 1;
		tomorrow.month = 1;
		tomorrow.year = today.year + 1;
	   }
	
	else 
	   {
		tomorrow.day = 1;
		tomorrow.month = today.month + 1;
		tomorrow.year = today.year;
	   }

	printf ("Tomorrow's date is %i/%i/%.2i.\n", tomorrow.month, tomorrow.day, tomorrow.year %100);
		
		return 0;
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
