/*		**********
	exercise 6 chapter 10 Programming in C
		Remove String
		   *****	*/

#include <stdio.h>

int main (void)
{
	char text[81];
	int start, totalCut;
	void readLine (char buffer[]);
	void removeString(char text[], int index, int cut);
		

	printf("\n\n\tString Remover\n\n");

	printf ("Enter some text for testing...\n");
	readLine (text);

	printf ("Where to begin?\n");
	scanf ("%i", &start);

	printf ("How much to cut?\n");
	scanf ("%i", &totalCut);

	removeString(text, start, totalCut);

	printf ("%s\n", text);

		return 0;
}

	void removeString(char text[], int index, int cut)
	{
		int i;
		int stringLength (const char string[]);

		
		/*  This function could work without using stringLength()...
			...by limiting the for loop to 81.. but the char[] string could ...
			...be different if this function were used with a different main()... */
		for (i = index; i < stringLength(text); i++)
		{
			text[i] = text[i + cut];
			if (text[index + cut] == '\0')
			{
				break;
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


	int stringLength (const char string[])
	{
		
		int count = 0;

		while (string[count] != '\0')
		{
			count++;
		}
		
		return count;
	}
	
