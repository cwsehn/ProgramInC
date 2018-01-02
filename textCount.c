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
			bool lookingForWord = true, isAlphabetic (const char c);	
			
			for (i = 0; string[i] != '\0'; i++)
			{
				if ( isAlphabetic (string[i]))
				{
					if (lookingForWord)
					{	wordCount++;
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
	

	bool isAlphabetic (const char c)
	{
		if ((c >= 'a' && c <= 'z') || (c >= 'A' && c <= 'Z'))
		{
			return true;
		}	
		else
		{
			return false;
		}
	}