/*		**********
	Program 9.1 Programming in C
		Structure
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

	struct date today;

	today.month = 12;
	today.day = 30;
	today. year = 2016;

	printf ("Today's date is %i/%i/%.2i.\n", today.month, today.day, today.year % 100);

		return 0;
}
