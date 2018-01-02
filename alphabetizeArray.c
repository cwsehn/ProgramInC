/*		**********
	exercise 10 chapter 10 Programming in C
		Dictionary Sort
		   *****	*/

#include <stdio.h>
#include <stdbool.h>

	struct entry
	{
	    char word[15];
	    char definition[50];
	};


int main (void)
{
 struct entry dictionary[100] =
	{ {"ahoy", "a nautical call of greeting"			},
	  {"abyss", "a bottomless pit"						},
	  {"ajar", "partially opened"						},
	  {"acumen", "mentally sharp; keen"					},
	  {"blue", "the cutest kitty"						},
	  {"aigrette", "an ornamental cluster of feathers" 	},
	  {"affix", "to append; attach"						},
	  {"aerie", "a high nest"							},
	  {"addle", "to become confused"					},
	  {"aardvark", "a burrowing African mammal"			},
	  {"agar", "a jelly made from seaweed"				},
	  {"apple", "a fruit that grows on trees"			}
	};

	int i, entries = 12;
	void alphabetize (struct entry array[], int entries);

	printf ("\n\n\t\t\tThe Alphabetizer!\n\n");

	alphabetize (dictionary, entries);

	
	for (i = 0; i < entries; i++)
	{
	printf ("\t%20s\t\t%s\n", dictionary[i].word, dictionary[i].definition);
	} 	

	printf ("\n");

		return 0;
}

	void alphabetize (struct entry array[], int entries)
	{

		void structSort (struct entry a[], int n, bool ascend);
	
		bool ascend = true;

		structSort (array, entries, ascend);
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


	void structSort (struct entry a[], int n, bool ascend)
	{
	    int i, j;
	    struct entry temp;
	    int compareStrings (const char str1[], const char str2[]);

	    for (i = 0; i < n-1; i++)
	    {
			for (j = i + 1; j < n; j++)
			{	
				if (ascend == true)
				{
			    	if (compareStrings(a[i].word, a[j].word) > 0)
					{
					    temp = a[i];
					    a[i] = a[j];
					    a[j] = temp;
					}
				}
				else {
					if (compareStrings(a[j].word, a[i].word) > 0)
					{
						temp = a[j];
						a[j] = a[i];
						a[i] = temp;
					}

				}
			}
	    }

	}