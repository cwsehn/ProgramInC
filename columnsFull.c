/*		**********
	chapter 16, exercise 5X - Programming in C
		Read columns of Lines specified by user input...
		X is for extra functionality!!
		   *****	*/

#include <stdio.h>

int main (void)
{
	
	char line[81];
	FILE* Text;
	char badInput;
	int m, n, get, put, center, j;
	long o;
	printf("\n\tColumns of Texts\n\n");

	Text = fopen("readTest1.txt", "r"); 
	if (Text == NULL)
	{
		fprintf(stderr, "could not open file\n");
		return 1;
	}

	printf("Total line length is 80 characters...\n");
	printf("Enter an integer value to represent the left side of a column.\n");
	while (scanf("%i%c", &m, &badInput) != 2 || badInput != '\n' || (m < 0 || m > 79))
	{
		if (m < 0 || m > 79)
		{
			printf("please enter one positive integer between 0 and 79...\n");
			continue;
		}
		else
		{
			fprintf(stderr, "Start over....try again.....\n");
			return 1;
		}
	}

	printf("Enter an integer value to represent the right side of a column.\n");
	while (scanf("%i%c", &n, &badInput) != 2 || badInput != '\n' || (n < m || n > 80))
	{
		if (n < m || n > 80)
		{
			printf("please enter an integer value for the right side that's bigger\nthan the one you entered for the left side... but still less than 81...\n");
			continue;
		}
		else
		{
			fprintf(stderr, "try again.....\n");
			return 2;
		}
	}
	center = (m + n)/2;
	o = m - j;
	
	for (j = 1; j < 81; j++)
	{
		if (j <= m)
		{
			put = putc(' ', stdout);
		}
		if ( (j > m) && (j < n) )
		{
			get = fgetc(Text);
			if (get != EOF)
			{
				fputc(get, stdout);
				if (get == '\n')
				{
					j = 0;
				}
			}
			else
			{
				break;
			}
		}
		if (j == n)
		{
			put = fputc('\n', stdout);
			j = 0;
		}
		
	}
	printf("\n\n");
	for (int i = 0; i < (center - 4); i++)
	{
		put = putc(' ', stdout);
	}
	printf("The End!\n\n");
	fclose(Text);
	
	return 0;
}


