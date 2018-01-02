/*		**********
	exercise 6 chapter 11 Programming in C
		insertEntry into doubleLink struct function
		   *****	*/

/*  the functions in this program are not as modular as they could be...
	...currently there is an over reliance on variables called in the main function....
	...but currently.....it works ...and i need to move forward ..
	...concepts have been practiced, identified, and learned...
	..see pointerInsertStruct program for more comments....  */

# include <stdio.h>
	
	struct doubleLink
	{
		char value;
		struct doubleLink *next;
		struct doubleLink *previous;
	};


int main (void)
{
	void insertEntry ( struct doubleLink *insert, struct doubleLink *afterYou );

	struct doubleLink *findSlot (struct doubleLink *listPtr, char search);

	struct doubleLink d1, d2, d3, d4, d5, newGuy;;
	
	struct doubleLink *newSlot, *listStart = &d1, *newPtr = &newGuy;
	char newChar;



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

	d5.value = 'Z';
	d5.next = 0;
	d5.previous = &d4;



	printf ("Enter a char value to be inserted into the Doubly linked list: \n");
	scanf ("%c", &newChar);
	printf ("\n\n");
	newGuy.value = newChar;

	if (listStart->value > newChar)
	{
		newPtr->next = listStart;
		listStart = newPtr;
	}
	else
	{
		newSlot = findSlot (listStart, newChar);

		if (newSlot == (struct doubleLink *) 0)
		{
			newPtr->next = 0;
		}
		else
		{
			insertEntry (newPtr, newSlot);
		}
	}

	while (listStart != (struct doubleLink *) 0)
	{
		printf ("%c\n", listStart->value);
		listStart = listStart->next;
	}

		return 0;
}

	

	
	void insertEntry ( struct doubleLink *insert, struct doubleLink *afterYou )
	{	
		if (afterYou->next == 0 && insert->value > afterYou->value)
		{
			insert->next = 0;
			afterYou->next = insert;

		}
		else
		{
			insert->next = afterYou->next;
			afterYou->next = insert;
		}
	}


	



	struct doubleLink *findSlot (struct doubleLink *listPtr, char search)
	{
		while (listPtr != (struct doubleLink *) 0)
		{
			if ( listPtr->next == 0 && search >= (listPtr->value))
			{
				return listPtr;
			}

			if (search >= listPtr->value && search < (listPtr->next)->value)
			{
				return listPtr;
			}
			else
			{
				listPtr = listPtr->next;
			}
		}
		return ((struct doubleLink *) 0);

	}
	
	
