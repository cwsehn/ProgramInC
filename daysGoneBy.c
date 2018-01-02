/*		**********
	exercise 2 chapter 9 Programming in C
		Days Gone By....
		   *****	*/

#include <stdio.h>

	struct date {
			int month;
			int day;
			int year;
		    };
int main (void)
{
	struct date fromDay, toDay;
	int theseAreTheDays( struct date from, struct date to );
	
	printf ("\t\t\n\nDays Gone By...\n\n");

	printf ("Enter date #1 in the format mm dd yyyy: ");
	scanf ("%i %i %i", &fromDay.month, &fromDay.day, &fromDay.year);

	printf ("\n\nEnter date #2 in the format mm dd yyyy: ");
	scanf ("%i%i%i", &toDay.month, &toDay.day, &toDay.year);

	printf ("\nThe number of days elapsed from %.2i %.2i, %i to %.2i %.2i, %i:\n", fromDay.month, fromDay.day, fromDay.year,
																					toDay.month, toDay.day, toDay.year);
	printf ("%i\n\n", theseAreTheDays(fromDay, toDay));

		return 0;
}

	int theseAreTheDays( struct date from, struct date to )
	{
		int formulaValue1, formulaValue2, elapsed;

		int formula(struct date d);

		formulaValue1 = formula(from);
		formulaValue2 = formula(to);

		if (formulaValue1 == formulaValue2)
		{
			return 0;
		}
		if (formulaValue1 > formulaValue2)
		{
			elapsed = formulaValue1 - formulaValue2;
		}	
		else 	
		{
			elapsed = formulaValue2 - formulaValue1;
		}

			return elapsed;
	}	

	/* this oddball formula was given as part of this exersice......
	    ... presumably, it accurately accounts for all prior leap years going back to 1700! */ 

	int formula(struct date d)
	{
		int f, g, result;

		if (d.month <= 2)
		{
		 	f = d.year - 1;
			g = d.month + 13;   
		}	
		else 
		{
			f = d.year;
			g = d.month + 1;
		}

		result = (1461 * f)/4 + (153 * g)/5 + d.day;
		
		if((d.year == 1900 && d.month < 3) || (d.year < 1900)) 
		{
			result += 1;
		}
		if ((d.year == 1800 && d.month < 3) || (d.year < 1800)) 
		{
			result += 1;
		}
		if ((d.year == 1700 && d.month < 3) || (d.year < 1700))
		{
			printf("\n...(dates prior to March 1, 1700...may be slightly off...)...so...in the neighborhood of.....\n\n");
		}

			return result;	
	}
