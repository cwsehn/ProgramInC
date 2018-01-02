/*		**********
	exercise 5 chapter 10 Programming in C
		Find String
		   *****	*/

#include <stdio.h>

int main (void)
{
	
	char text[81];
	char search[81];
	void readLine (char buffer[]);
	int result;

	int findString (char text[], char search[]);

	printf ("\n\n\tString Finder\n\n");

	printf ("Enter the text for testing...\n");
	readLine (text);

	printf ("Enter substring to search out...\n");
	readLine (search);

	result = findString(text, search);

	printf ("%i\n", result);
		
		return 0;
}	


	int findString (char text[], char search[])
	{
		int i, temp, match = 0;

		for (i = 0; text[i] != '\0'; i++)
		{
			if (search[match] == text[i])
				{
					temp = i;
					match++;
					temp++;
					while (search[match] != '\0')
					{
						if (search[match] == text[temp])
						{
							match++;
							temp++;
						}
						else 
						{
							match = 0;
							break;
						}
					}
					if (search[match] == '\0')
					{
						return i;
					} 
				}
		}
			return -1;
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