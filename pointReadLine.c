/*		**********
	exercise 9 chapter 11 Programming in C
		Reading Lines with getchar() using pointers...
		   *****	*/

#include <stdio.h>

int main (void)
{

	char text[81];

	void readLine (char *text);
	
	printf ("Enter a line of text....:\n");

	/*  notice how text is accepted as an argument of type char pointer ... 
	   ... char *text ...despite it's declaration as an array of chars... 
	   	...char text[81] ...*/
	readLine(text);

		printf ("\n\n%s\n\n", text);
	

	return 0;
}


	void readLine (char *text)
	{
		/*  text was input as char pointer but it is still limited...
			...to the 81 character array of chars that was declared in main... */
		while (text)
		{
			/* getchar () is part of the stdio....
			   ...it 'scans' one char of input....*/
			*text = getchar();
			if (*text == '\n')
				break;
			text++;
		}
		
		*text = '\0';

	}

	