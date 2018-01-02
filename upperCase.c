/*		**********
	exercise 13 chapter 10 Programming in C	
		UpperCase
		   *****	*/

#include <stdio.h>

int main (void)
{
	char text[81];
	void uppercase (char text[]);
	void readLine (char buffer[]);

	printf ("\n\n\t\tTaking it Up a Notch...\n\n");

	printf ("Enter some text I can really capitalize on....\n");
	readLine (text);

	uppercase (text);

	printf ("%s\n", text);

		return 0;
}

	
	void uppercase (char text[])
	{
		int i;

		for (i = 0; text[i] != '\0'; i++)
		{
			if (text[i] >= 'a' && text[i] <= 'z')
			{
				text[i] = text[i] - 'a' + 'A';
			}
		}
			
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
