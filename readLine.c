/*		**********
	Program 10.6 Programming in C
		Reading Lines with getchar()
		   *****	*/

#include <stdio.h>

int main (void)
{
	int i;
	char line[81];
	void readLine (char buffer[]);

	for ( i = 0; i < 3; i++ )
	{
		readLine (line);
		printf ("%s\n\n", line);
	}

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
