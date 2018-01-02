/*		**********
	exercise 7 chapter 10 Programming in C
		Insert String
		   *****	*/

#include <stdio.h>

int main (void)
{
	
	char text[81];
	char insert[81];
	int start;
	void insertString (char text[], char insert[], int index);
	void readLine (char buffer[]);
	
	printf ("\n\n\tString Insert\n\n");

	printf ("Enter a line of text to work with...\n");
	readLine (text);
	

	printf ("Enter some text to be inserted...include any blank spaces that follow...\n");
	readLine (insert);

	printf ("Enter the index for the insert...\n");
	scanf ("%i", &start);

	insertString(text, insert, start);
	printf("%s\n", text);

		return 0;
}

	void insertString (char text[], char insert[], int index)
	{
		
		int i, insertLength, shift, textLength, j = 0;
		int stringLength (const char string[]);
		
		textLength = stringLength(text);
		insertLength = stringLength(insert);

		/*  the shift variable represents the number of chars...
		    ...(textLength + 1 includes the '\0') after the index point...
			...that need to shift to the right to make room for the insert....  */
		shift = (textLength + 1) - index;	

		/*  text[i+insertLength] represents the end ...('\0')... 
			...of the modified text[]...receiving the original end text[i]....
			...the modifications then work their way backward one char at a time...  */
		for (i = textLength; shift > 0; i--)
		{
			text[i + insertLength] = text[i];
			shift--;
		}


		for (i = index; insert[j] != '\0'; i++)
		{
			text[i] = insert[j];
			j++;
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


	int stringLength (const char string[])
	{
		
		int count = 0;

		while (string[count] != '\0')
		{
			count++;
		}
		
		return count;
	}
