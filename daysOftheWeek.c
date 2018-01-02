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
	struct date whatDay;
	int seizeTheDay(struct date anyDay);
	int i;
	
	printf ("\t\t\n\nSeize the Day...\n\n");

	printf ("Enter a date in the format mm dd yyyy: ");
	scanf ("%i %i %i", &whatDay.month, &whatDay.day, &whatDay.year);


	printf ("\n%.2i %.2i, %i was, is or will be a\n", whatDay.month, whatDay.day, whatDay.year);

	switch (seizeTheDay(whatDay))
	{
		case 0:
			printf ("Sunday\n\n");
			break;
		case 1:
			printf ("Monday\n\n");
			break;
		case 2:
			printf ("Tuesday\n\n");
			break;
		case 3:
			printf ("Wednesday\n\n");
			break;
		case 4:
			printf ("Thursday\n\n");
			break;
		case 5:
			printf ("Friday\n\n");
			break;
		case 6:
			printf ("Saturday\n\n");
			break;
		default:
			printf ("hmmm....about that date...\n");
	
	}
		return 0;
}


	int seizeTheDay(struct date anyDay)
	{
			const int days[7] = {0};

			int formula(struct date d);
			int seizer;


			seizer = ((formula(anyDay) - 621049) % 7);

			//printf ("\n%i\n", seizer);

			return seizer;


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
			printf("\n...(dates prior to March 1, 1700...are not accurately available...)...sorry 'bout that.....\n\n");
		}

			return result;	
	}
