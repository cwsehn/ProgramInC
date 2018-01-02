/*		**********
	exercise 4 Chapter 10 Programming in C
		Substring Function
		   *****	*/

#include <stdio.h>

int main (void)
{
	
	int start, count;
	char line[81];
	char result[81];
	void readLine (char buffer[]);
	void subStringer (const char line[], int start, int count, char result[]);
 
	printf ("\n\n\tSubstring Finder\n\n");

	printf ("Type in a line text for chopping...\n");
	readLine (line);
	
	printf ("Choose an index integer to start the chop...\n");
	scanf ("%i", &start);
	printf ("Choose the number of characters for your Substring...\n");
	scanf ("%i", &count);

	subStringer (line, start, count, result);

	printf ("%s\n", result);

		return 0;
} 	


	void subStringer (const char line[], int start, int count, char result[])
	{
		int stringLength (const char string[]);
		int i, counter = 0;


		/* the call to stringLength in the following conditional statement ...
		  ...provides for the case when a user calls for a count that would extend...
		  ....beyond the end of the line itself.... */
		
		if (count > stringLength(line) - start)
		{
			count = stringLength(line) - start;
		}

		for (i = start; line[i] != '\0'; i++)
		{
			if (counter < count)
			{
				result[counter] = line[i];
				counter++;
			}
		}

		result[counter] = '\0';

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


	int stringLength (const char string[])
	{
		
		int count = 0;

		while (string[count] != '\0')
		{
			count++;
		}
		
		return count;
	}