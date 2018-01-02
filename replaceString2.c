/*		**********
	exercise 8 chapter 10 Programming in C
		Replace String
		   *****		*/

#include <stdio.h>
#include <stdbool.h>

int main (void)
{
	/*  Paste text for testing between the char text[] ""...
		...IMPORTANT! For strings entered on multiple lines...
		...you must end each line with \ and begin the next line all the way left....
		...Or you can put "" around each line of text and the ...
		...compiler will automatically concatenate the entry....*/
	char text[] = "If you place a backslash character at the very end of the line and follow it immediately "
	"by a carriage return, it tells the C compiler to ignore the end of the line. This line continuation technique"
	"is used primarily for continuing long constant character strings onto the next line and, as you see in Chapter 13,"
	" “The Preprocessor,” for continuing a macro definition onto the next line. "
	"Without the line continuation character, your C compiler generates an error message"
	"if you attempt to initialize a character string across multiple lines; for example:";


	char find[81];
	char replacement[81];
	void readLine (char buffer[]);
	void concat (char result[], const char str1[], const char str2[]);
	void replaceString ( char text[], char find[], char replacement[]);
	bool endOfText = false;

	printf ("\n\n\tReplace the String\n\n");

	

	printf ("Enter the text to search for:\n");
	readLine (find);

	printf ("Enter your replacement text:\n");
	readLine (replacement);

	replaceString(text, find, replacement);

	printf ("%s\n", text);

		return 0;
}


	void replaceString ( char text[], char find[], char replacement[])
	{
		int findString (char text[], char search[]);
		void removeString(char text[], int index, int cut);
		void insertString (char text[], char insert[], int index);
		int stringLength (const char string[]);

		int index, cut;
		bool keepFinding = true;

		while (keepFinding)
		{
			index = findString (text, find);
			if (index == -1)
			{
				keepFinding = false;
				break;
			}
			cut = stringLength (find);
			removeString (text, index, cut);
			insertString (text, replacement, index);
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



	void concat (char result[], const char str1[], const char str2[])
	{
		int i, j;

		for ( i = 0; str1[i] != '\0'; i++ )
		{
			result[i] = str1[i];
		}

		for ( j = 0; str2[j] != '\0'; j++ )
		{
			result[i + j] = str2[j];
		} 

		/* adding the null char '\0' to the end of the concatenated result[]...
			...allows the %s (format characters) in the calling function to recognize
			  ...the end of the character string despite the actual length of the array...
			  ...which was initialzed as... char s3[20]  ...to allow more than adequate space....*/

		result[i + j] = '\0';

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

	int stringLength (const char string[])
	{
		
		int count = 0;

		while (string[count] != '\0')
		{
			count++;
		}
		
		return count;
	}
