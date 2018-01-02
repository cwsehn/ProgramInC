/*		**********
	chapter 16, exercise 6 - Programming in C
		Read Long files 20 lines at a time...
		   *****	*/

#include <stdio.h>

int main (void)
{
	char line[81];	
	FILE* Text;
	char* get20;
	char* puts20;
	char ender;

	printf("\n\tRead texts 20 lines at a time....\n\n");

	Text = fopen("email.txt", "r"); 
	if (Text == NULL)
	{
		fprintf(stderr, "could not open file\n");
		return 1;
	}

	do
	{
		for (int i=0; i < 20; i++)
		{
			get20 = fgets(line, sizeof(line), Text);
			if (get20 != NULL)
			{
				printf("%s\n", line);
			}
			if (feof(Text))
			{
				printf("\nend of file reached...\n");
				break;
			}

		}
		if (feof(Text))
		{
			ender = 'q';
		}
		else
		{
			printf("\n\n\tpress 'return' key to see next 20 lines....or 'q' to quit.\n\n");
			scanf("%c", &ender);
		}
	}
	while( ender != 'q');
	return 0;
}


