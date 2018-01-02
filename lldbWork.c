/*		**********
	Program 18.5 - Programming in C
		Working with lldb (formerly gdb)
		     *****	*/

#include <stdio.h>
#include <stdlib.h>

struct date {
	int month;
	int day;
	int year;
};

struct date foo (struct date x)
{
	++x.day;
	
	return x;
}

int main (void)
{
	struct date today = {3, 23, 2017};
	int 	    array[5] = {1, 2, 3, 4, 5};
	struct date *newdate, foo ();
	char 	    *string = "test string";
	int 	    i = 3;

	newdate = (struct date *) malloc (sizeof (struct date));
	newdate->month = 4;
	newdate->day = 16;
	newdate->year = 2017;

	today = foo (today);

	free (newdate);

		return 0;
}
