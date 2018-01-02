/*		**********
	exercise 5 chapter 11 Programming in C
		Doubly Linked List
			*****	*/

#include <stdio.h>

	struct doubleLink
	{
		char value;
		struct doubleLink *next;
		struct doubleLink *previous;
	};


int main (void)
{

	struct doubleLink d1, d2, d3, d4, d5;
	struct doubleLink *starter = &d1;

	d1.value = 'A';
	d1.next = &d2;
	d1.previous = 0;

	d2.value = 'B';
	d2.next = &d3;
	d2.previous = &d1;

	d3.value = 'C';
	d3.next = &d4;
	d3.previous = &d2;

	d4.value = 'D';
	d4.next = &d5;
	d4.previous = &d3;

	d5.value = 'E';
	d5.next = 0;
	d5.previous = &d4;

	while (starter != (struct doubleLink *) 0)
		{
			printf ("%c ", starter->value);
			starter = starter->next;
			if (starter->next == 0)
			{
				starter = starter->previous->previous;
				printf (" ");
				while (starter != (struct doubleLink *) 0)
				{
					printf("%c  ", starter->value);
					starter = starter->previous;
				}
			}
			printf ("\n\n");
		}


			return 0;


}