/*		**********
	exercise 2 and 3 chapter 11 Programming in C
		insertEntry function
		   *****	*/

# include <stdio.h>
	
	struct entry
	{
		int value;
		struct entry *next;
	};


int main (void)
{
	void insertEntry ( struct entry *insert, struct entry *afterYou );

	struct entry *findSlot (struct entry *listPtr, int search);
	struct entry n1, n2, n3, newGuy;
	struct entry *newSlot, *listStart = &n1, *newPtr = &newGuy;
	int newInt;
	char badInput;


	n1.value = 100;
	n1.next = &n2;
	
	n2.value = 200;
	n2.next = &n3;
	
	n3.value = 300;
	n3.next = 0;

	do
	{
		/*  User picks integer value to insert into list...   */
		printf ("Enter an integer value to be inserted into a linked list: \n");
		if (scanf ("%i%c", &newInt, &badInput) != 2 || badInput != '\n')
		{
			printf ("Your input MUST be an integer....RESTART PROGRAM-");
			newInt = 0;
			break;
		}
	}
	while (badInput != '\n');

	/*  the newGuy entry struct is assigned value of user input.... */
	newGuy.value = newInt;


	/*  If user input is lower than original first entry (low value)....
		...newGuy.next points to &n1.... listStart points to &newGuy.....  */
	if (listStart->value > newInt)
	{
		newPtr->next = listStart;
		listStart = newPtr;
	}
	/*  */
	else
	{
		newSlot = findSlot (listStart, newInt);

		if (newSlot == (struct entry *) 0)
		{
			newPtr->next = 0;
		}
		else
		{
			insertEntry (newPtr, newSlot);
		}
	}

	while (listStart != (struct entry *) 0)
	{
		printf ("%i\n", listStart->value);
		listStart = listStart->next;
	}

		return 0;
}

	void insertEntry ( struct entry *insert, struct entry *afterYou )
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


	struct entry *findSlot (struct entry *listPtr, int search)
	{
		while (listPtr != (struct entry *) 0)
		{
			/*  this first conditional is for user input larger than current largest value... 
			   ...it prevents the loop from returning the null pointer ...
			   ...later the same condition is recalled in the insertEntry function....  */
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
		return ((struct entry *) 0);

	}
	
	
