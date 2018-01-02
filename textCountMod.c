/*		**********
	Program 10.8 Programming in C
		Count Words in Text
		   *****	*/

#include <stdio.h>
#include <stdbool.h>

int main (void)
{
	char text[81];
	int totalWords = 0;
	int countWords (const char string[]);
	void readLine (char buffer[]);
	bool endOfText = false;

	printf ("\n\n\tWord Counter\n\n");
	printf ("Type in your text.\n");
	printf ("When you are finished, press 'RETURN'.\n\n");

	while ( ! endOfText)
	{
		readLine (text);

		if (text[0] == '\0')
		{
			endOfText = true;
		}
		else
		{
			totalWords += countWords (text);
		}
	}
	printf ("\nThere are %i words in the above text.\n", totalWords);

		return 0;
} 

	void readLine (char buffer[])
	{
		char character;
		int i = 0;

		do
		{
			// getchar () is part of the stdio....it 'scans' one char of input....
			character = getchar ();
			buffer[i] = character;
			i++;
		}
		while (character != '\n');

		buffer[i - 1] = '\0';

	}


	int countWords (const char string[])
		{
			int i, wordCount = 0;
			bool lookingForWord = true, isBlankSpace (const char c);	
			
			for (i = 0; string[i] != '\0'; i++)
			{
				if ( ! isBlankSpace (string[i]))
				{
					if (lookingForWord)
					{
						wordCount++;
						lookingForWord = false;
					}
				}
				else 
				{
				 	lookingForWord = true;
				}
			}

				return wordCount;
		}
	

	/*  My best solution to the wordCount problem thus far....
		...by searching out blank spaces rather than alphabetical chars...
		...the program allows for hyphens, apostrophes, numerical text, etc...
		...also there is simplicity as well as accuracy in that the program
		...does not need to distinguish apostrophes from quote marks.....  */
	bool isBlankSpace (const char c)
	{
		if (c == ' ')
		{
			return true;
		}	
		else
		{
			return false;
		}
	}