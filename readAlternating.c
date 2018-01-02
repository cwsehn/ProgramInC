/*		**********
	chapter 16, exercise 4 - Programming in C
		Read alternating Lines from seperate files
		   *****	*/

#include <stdio.h>

int main (void)
{
	char line[81];
	FILE* firstAlt;
	FILE* secondAlt;
	char* first;
	char* second;
	printf("\n\tAlternating Texts\n\n");

	firstAlt = fopen("copiedUP.txt", "r"); 
	if (firstAlt == NULL)
	{
		fprintf(stderr, "could not open file");
		return 1;
	}
	secondAlt = fopen("readTest1.txt", "r");
	if (secondAlt == NULL)
	{	
		fprintf(stderr, "could not open second file");
		return 2;
	}

	while(first != NULL && second != NULL)
	{	
		first = fgets(line, sizeof(line), firstAlt);	
		if (first != NULL)
		{
			printf ("%s\n", line);
		}
		
		second = fgets(line, sizeof(line), secondAlt);
		if (second != NULL)
		{
			printf ("%s\n", line);
		}
	}

	fclose(firstAlt);
	fclose(secondAlt);

	return 0;
}
