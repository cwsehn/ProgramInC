/*		**********
	Program 14.1 Programming in C
	+ chapter 14, exercise 2....monthName function....
		Enumerated Data Types
		    *****	*/

#include <stdio.h>

// a globally declared enumerated data type....
enum month { january = 1, february, march, april, may, june,
			july, august, september, october, november, december };

int main (void)
{
	
	enum month aMonth;
	int days;
	char* monthName(enum month aMonth);


	printf ("Enter month number: ");
	scanf ("%i", &aMonth);

	switch (aMonth) {
		case january:
		case march:
		case may:
		case july:
		case august:
		case october:
		case december:
			days = 31;
			break;
		case april:
		case june:
		case september:
		case november:
			days = 30;
			break;
		case february: 	
			days = 28;
			break;
		default:
			printf ("12 months in this calendar...\n");
			days = 0;
			break;
		}

		if (days != 0 )
			printf ("Number of days in %s is %i\n", monthName(aMonth), days);

		if ( aMonth == february )
			printf ("....or 29 if it's a leap year\n");

			return 0;

}


	char* monthName(enum month aMonth)
	{
		char* name;

		switch (aMonth) {
			case january:
			name = "January";
			break;
			case february:
			name = "February";
			break;
			case march:
			name = "March";
			break;
			case april:
			name = "April";
			break;
			case may:
			name = "May";
			break;
			case june:
			name = "June";
			break;
			case july:
			name = "July";
			break;
			case august:
			name = "August";
			break;
			case september:
			name = "September";
			break;
			case october:
			name = "October";
			break;
			case november:
			name = "November";
			break;
			case december:
			name = "December";
			break;
			default:
			name = NULL;
			break;
		}

		return name;
	}









