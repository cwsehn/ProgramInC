/*		**********
	exercise 4 chapter 11 Programming in C
		remove from linked list
		   *****	*/

#include <stdio.h>

	struct entry
	{
		int value;
		struct entry *next;
	};

int main (void)
{
	void removeEntry (struct entry *listPtr);
	struct entry *findNextEntry (struct entry *listPtr, int match);

	struct entry n1, n2, n3;
	struct entry *listPtr, *listStart = &n1;
	int remove;

	n1.value = 100;
	n1.next = &n2;
	
	n2.value = 200;
	n2.next = &n3;
	
	n3.value = 300;
	n3.next = 0;

	// prints current list for user to view....
	while (listStart != (struct entry *) 0)
	{
		printf ("%i\n", listStart->value);
		listStart = listStart->next;
	}
	//  reset listStart pointer variable....
	listStart = &n1;

	//  user chooses list item to remove....
	printf ("choose a value to remove from the list: \n");
	scanf ("%i", &remove);

	printf ("\n\n");
	// if item to be removed is the first item....listStart moves ahead....
	if (listStart->value == remove)
	{
		listStart = listStart->next;
	}
	else
	{
		listPtr = findNextEntry (listStart, remove);
		removeEntry (listPtr);
	}

	// display list after item has been "removed"....
	while (listStart != (struct entry *) 0)
	{
		printf ("%i\n", listStart->value);
		listStart = listStart->next;
	}

		return 0;
}


	void removeEntry (struct entry *listPtr)
	{
		//struct entry *takeOut = listPtr->next;
		//listPtr->next = takeOut->next;

		/* this solution may be less readable....but...
		   ...it uses one less pointer variable than the solution above */
		listPtr->next = listPtr->next->next;
	}
	

	/* this function returns a pointer to the item that...
	    ....precedes the item to be removed...  */
	struct entry *findNextEntry (struct entry *listPtr, int match)
	{
		while (listPtr != (struct entry *) 0)
		{
			if (listPtr->next->value == match)
			{
				return (listPtr);
			}
			else
			{
				listPtr = listPtr->next;		
			}
		}
		
		return (struct entry *) 0;
	}