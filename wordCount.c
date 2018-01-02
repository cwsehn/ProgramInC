/*		**********
	Program 10.7 Programming in C
		Counting Words
		   *****	*/
#include <stdio.h>
#include <stdbool.h>

int main (void)
{
	const char text1[] = "Well, here goes.";
	const char text2[] = "And here we go...again.";
	int countWords (const char string[]);

	printf ("%s - words = %i\n", text1, countWords(text1));
	printf ("%s - words = %i\n", text2, countWords(text2));

		return 0;
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
