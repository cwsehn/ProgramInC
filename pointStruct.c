/*		**********
	program 11.4 Programming in C
		Pointing to Structs
		    *****	*/

#include <stdio.h>

int main (void)
{
	struct date
	{
		int month;
		int day;
		int year;
	};

	struct date today, *datePtr;
	
	datePtr = &today;

	datePtr->month = 1;
	datePtr->day = 8;
	datePtr->year = 2017;

	printf ("Today's date is %i/%i/%.2i\n", 
		datePtr->month, datePtr->day, datePtr->year % 100);

		return 0;
} 