/*		**********
	Program 10.10 Programming in C
		Binary Lookup	
		   *****	*/

#include <stdio.h>


	struct entry
	{
		char word[15];
		char definition[50];
	};

int main (void)
{
	const struct entry dictionary[100] =
	{   { "aardvark",	"a burrowing African mammal"	},
	    { "abyss", 		"a bottomless pit"				},
	    { "acumen", 	"mentally sharp; keen"			},
	    { "addle",		"to become confused"			},
	    { "aerie", 		"a high nest"					},
	    { "affix", 		"to append; attach"				},
	    { "agar", 		"a jelly made of seaweed"		},
	    { "ahoy",		"a nautical call of greeting"	},
	    { "aigrette",	"an ornamental cluster of feathers" },
	    { "ajar",		"partially opened"				}  
	 };

	char word[15];
	int entries = 10;
	int entry;
	int lookup2 (const struct entry dictionary[], const char search[], 
			const int entries);

	printf ("Enter word: ");
	/*  the %14s limits the scan of user input to 13 chars plus the '\0' 
	  ... also of note.... in the case of %s no & is used to assign input to variable...*/
	scanf ("%14s", word);

	/*  This little beauty uses the equalStrings function to look for a match... 
	   ...and then returns the index value from within the dictionary array....
			...it returns -1 if the input word does not match any of the entries...*/
	entry = lookup2 (dictionary, word, entries);

	if ( entry != -1 )
	{
		printf ("%s\n", dictionary[entry].definition);
	}
	else
	{
		printf ("Sorry, the word %s is not in my dictionary.\n", word);
	}
		return 0;

}



	int compareStrings (const char str1[], const char str2[])
	{
		int i = 0, answer;

		while ( str1[i] == str2[i] && str1[i] != '\0' && str2[i] != '\0' )
				{
					i++;
				}

		/*  the following conditional is critical to the binary search process...
		  ... it compares the first unmatching characters of the two char[] arguments ....
		  ... and returns a flag int (-1, 0, or 1) based on their alphabetical "value"...
		  ... a return of 0 means we have a match...
		  ...-1 indicates str1 precedes str2 alphabetically....1 indicates the opposite...   */
		if ( str1[i] < str2[i] )
		{
			answer = -1;
		}
		else if ( str1[i] == str2[i] )
		{
			answer = 0;
		}
		else
		{
			answer = 1;
		}

		return answer;
	}


	int lookup2 (const struct entry dictionary[], const char search[], 
			const int entries)
	{
		int low = 0;
		int high = entries - 1;
		int mid, result;
		int compareStrings (const char str1[], const char str2[]);


		/*  Herein lies the "formula" from the binary search algorithm shown below....*/
		while ( low <= high )
		{
			mid = (low + high) / 2;
			result = compareStrings (dictionary[mid].word, search);

			if ( result == -1)
			{
				low = mid + 1;
			}
			else if ( result == 1 )
			{
				high = mid - 1;
			}
			else
			{
				return mid;  /* found it */
			}
		}
 
 		return -1;

	}


/*
**This algorithm assumes that the array M is sorted in ascending order.**

Binary Search Algorithm
Step 1: Setlow to 0, high to n–1.
Step 2: If low > high, x does not exist in M and the algorithm terminates.
Step 3: Set mid to (low+high)/2.
Step 4: If M[mid] < x, set low to mid+1 and go to step2.
Step 5: If M[mid] > x, set high to mid–1 and go to step2.
Step 6: M[mid] equals x and the algorithm terminates.
   
*/













