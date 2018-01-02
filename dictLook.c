/*		**********
	Program 10.9 Programming in C
		Dictionary Lookup
		     ***	*/

#include <stdio.h>
#include <stdbool.h>

	struct entry
	{
		char word[15];
		char definition[50];
	};

int main (void)
{
	/*  The following is an array of entry structs......
		...not to be confused with an entry struct containing an array....*/
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

	char word[10];
	int entries = 10;
	int entry;
	int lookup (const struct entry dictionary[], const char search[], 
			const int entries);

	printf ("Enter word: ");
	/*  the %14s limits the scan of user input to 13 chars plus the '\0' 
	  ... also of note.... in the case of %s no & is used to assign input to variable...*/
	scanf ("%14s", word);

	/*  This little beauty uses the equalStrings function to look for a match... 
	   ...and then returns the index value from within the dictionary array....
			...it returns -1 if the input word does not match any of the entries...*/
	entry = lookup (dictionary, word, entries);

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

	/*  an improvement to the lookup function is found in the dictBinary program ...
		...lookup2 uses a binary search technique.... for faster results....  */ 
	int lookup (const struct entry dictionary[], const char search[],
			const int entries)
	{
		int i; 
		bool equalStrings (const char str1[], const char str2[]);

		for (i = 0; i < entries; i++)
		{
			if (equalStrings (search, dictionary[i].word))
			{
				return i;
			}	
		}

		return -1;
	}



	bool equalStrings (const char str1[], const char str2[])
	{
		int count = 0;
		bool strEqual = false; 

		while ((str1[count] == str2[count]) && 
					  (str1[count] != '\0') && 
			          (str2[count] != '\0'))
		    {count++;}

		
		/*...this function again demonstrates the invisible '\0' character...
		... that is automatically tacked onto the end of character strings....*/
		if (str1[count] == '\0' && str2[count] == '\0')
		{
			strEqual = true;
		}

		return strEqual;
	}
